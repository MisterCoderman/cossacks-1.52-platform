#include "recomp.h"

/* FUN_1000a9e4 @ 0x120aa9e4 (9 bytes, 2 insns) */
void f_120aa9e4(void) {
  FTRACE(0x120aa9e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa9e4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 120aa9e8 call 0x120ac0f5 */
  push32(0x120aa9edu); f_120ac0f5();
}

/* FUN_1000a9ed @ 0x120aa9ed (145 bytes, 43 insns) */
void f_120aa9ed(void) {
  FTRACE(0x120aa9edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aa9ed push edx */
  push32((uint32_t)(EDX));
  /* 120aa9ee wait  */
  /* wait (no observable integer/reg state) */
  /* 120aa9ef fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 120aa9f2 je 0x120aaa44 */
  if (C.zf) goto L_120aaa44;
  /* 120aa9f4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120aa9fa je 0x120aaa02 */
  if (C.zf) goto L_120aaa02;
  /* 120aa9fc fldcw word ptr [0x120db628] */
  C.fcw = r16((uint32_t)(0x120db628));
L_120aaa02:;
  /* 120aaa02 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 120aaa04 wait  */
  /* wait (no observable integer/reg state) */
  /* 120aaa05 fnstsw ax */
  AX = fpu_status();
  /* 120aaa07 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 120aaa08 jp 0x120aaa27 */
  if (C.pf) goto L_120aaa27;
L_120aaa0a:;
  /* 120aaa0a cmp dword ptr [0x120e10d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aaa11 jne 0x120ac14e */
  if (!C.zf) { jmp_ind(0x120ac14eu); return; }
  /* 120aaa17 mov edx, 0x12 */
  EDX = (0x12u);
  /* 120aaa1c lea ecx, [0x120dedb0] */
  ECX = ((uint32_t)(0x120dedb0));
  /* 120aaa22 jmp 0x120ac15b */
  f_120ac15b(); return;
L_120aaa27:;
  /* 120aaa27 fld xword ptr [0x120db62a] */
  fpu_push(rf80((uint32_t)(0x120db62a)));
  /* 120aaa2d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_120aaa2f:;
  /* 120aaa2f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 120aaa31 wait  */
  /* wait (no observable integer/reg state) */
  /* 120aaa32 fnstsw ax */
  AX = fpu_status();
  /* 120aaa34 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 120aaa35 jp 0x120aaa2f */
  if (C.pf) goto L_120aaa2f;
  /* 120aaa37 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 120aaa39 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 120aaa3b jmp 0x120aaa0a */
  goto L_120aaa0a;
L_120aaa3d:;
  /* 120aaa3d call 0x120ac0dc */
  push32(0x120aaa42u); f_120ac0dc();
  /* 120aaa42 jmp 0x120aaa5f */
  goto L_120aaa5f;
L_120aaa44:;
  /* 120aaa44 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 120aaa49 jne 0x120aaa3d */
  if (!C.zf) goto L_120aaa3d;
  /* 120aaa4b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aaa50 jne 0x120aaa3d */
  if (!C.zf) goto L_120aaa3d;
  /* 120aaa52 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 120aaa54 fld xword ptr [0x120dee20] */
  fpu_push(rf80((uint32_t)(0x120dee20)));
  /* 120aaa5a mov eax, 1 */
  EAX = (0x1u);
L_120aaa5f:;
  /* 120aaa5f cmp dword ptr [0x120e10d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aaa66 jne 0x120ac14e */
  if (!C.zf) { jmp_ind(0x120ac14eu); return; }
  /* 120aaa6c mov edx, 0x12 */
  EDX = (0x12u);
  /* 120aaa71 lea ecx, [0x120dedb0] */
  ECX = ((uint32_t)(0x120dedb0));
  /* 120aaa77 call 0x120ac257 */
  push32(0x120aaa7cu); f_120ac257();
  /* 120aaa7c pop edx */
  EDX = (pop32());
  /* 120aaa7d ret  */
  ESPCHK(0x120aa9edu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa80 @ 0x120aaa80 (20 bytes, 6 insns) */
void f_120aaa80(void) {
  FTRACE(0x120aaa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aaa80 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aaa83 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 120aaa86 call 0x120ac138 */
  push32(0x120aaa8bu); f_120ac138();
  /* 120aaa8b call 0x120aaa9d */
  push32(0x120aaa90u); f_120aaa9d();
  /* 120aaa90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aaa93 ret  */
  ESPCHK(0x120aaa80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa94 @ 0x120aaa94 (9 bytes, 2 insns) */
void f_120aaa94(void) {
  FTRACE(0x120aaa94u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aaa94 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 120aaa98 call 0x120ac0f5 */
  push32(0x120aaa9du); f_120ac0f5();
}

/* FUN_1000aa9d @ 0x120aaa9d (138 bytes, 40 insns) */
void f_120aaa9d(void) {
  FTRACE(0x120aaa9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aaa9d push edx */
  push32((uint32_t)(EDX));
  /* 120aaa9e wait  */
  /* wait (no observable integer/reg state) */
  /* 120aaa9f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 120aaaa2 je 0x120aaada */
  if (C.zf) goto L_120aaada;
  /* 120aaaa4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120aaaaa je 0x120aaab2 */
  if (C.zf) goto L_120aaab2;
  /* 120aaaac fldcw word ptr [0x120db628] */
  C.fcw = r16((uint32_t)(0x120db628));
L_120aaab2:;
  /* 120aaab2 fld1  */
  fpu_push(1.0);
  /* 120aaab4 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_120aaab6:;
  /* 120aaab6 cmp dword ptr [0x120e10d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aaabd jne 0x120ac14e */
  if (!C.zf) { jmp_ind(0x120ac14eu); return; }
  /* 120aaac3 mov edx, 0xf */
  EDX = (0xfu);
  /* 120aaac8 lea ecx, [0x120dedc0] */
  ECX = ((uint32_t)(0x120dedc0));
  /* 120aaace jmp 0x120ac15b */
  f_120ac15b(); return;
L_120aaad3:;
  /* 120aaad3 call 0x120ac0dc */
  push32(0x120aaad8u); f_120ac0dc();
  /* 120aaad8 jmp 0x120aab00 */
  goto L_120aab00;
L_120aaada:;
  /* 120aaada test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 120aaadf jne 0x120aaad3 */
  if (!C.zf) goto L_120aaad3;
  /* 120aaae1 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aaae6 jne 0x120aaad3 */
  if (!C.zf) goto L_120aaad3;
  /* 120aaae8 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 120aaaea fld xword ptr [0x120dee2a] */
  fpu_push(rf80((uint32_t)(0x120dee2a)));
  /* 120aaaf0 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 120aaaf5 je 0x120aaab6 */
  if (C.zf) goto L_120aaab6;
  /* 120aaaf7 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 120aaaf9 jmp 0x120aaab6 */
  goto L_120aaab6;
  /* 120aaafb mov eax, 1 */
  EAX = (0x1u);
L_120aab00:;
  /* 120aab00 cmp dword ptr [0x120e10d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aab07 jne 0x120ac14e */
  if (!C.zf) { jmp_ind(0x120ac14eu); return; }
  /* 120aab0d mov edx, 0xf */
  EDX = (0xfu);
  /* 120aab12 lea ecx, [0x120dedc0] */
  ECX = ((uint32_t)(0x120dedc0));
  /* 120aab18 call 0x120ac257 */
  push32(0x120aab1du); f_120ac257();
  /* 120aab1d pop edx */
  EDX = (pop32());
  /* 120aab1e ret  */
  ESPCHK(0x120aaa9du, _esp0);
  ESP += 4; return;
  /* 120aab1f int3  */
  x86_unimpl("int3 @ 0x120aab1f");
  /* 120aab20 push ebp */
  push32((uint32_t)(EBP));
  /* 120aab21 mov ebp, esp */
  EBP = (ESP);
  /* 120aab23 push ebx */
  push32((uint32_t)(EBX));
  /* 120aab24 push esi */
  push32((uint32_t)(ESI));
  /* 120aab25 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_1000ab20 @ 0x120aab20 (33 bytes, 15 insns) */
void f_120aab20(void) {
  FTRACE(0x120aab20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aab20 push ebp */
  push32((uint32_t)(EBP));
  /* 120aab21 mov ebp, esp */
  EBP = (ESP);
  /* 120aab23 push ebx */
  push32((uint32_t)(EBX));
  /* 120aab24 push esi */
  push32((uint32_t)(ESI));
  /* 120aab25 push edi */
  push32((uint32_t)(EDI));
  /* 120aab26 call 0x120aab60 */
  push32(0x120aab2bu); f_120aab60();
  /* 120aab2b call 0x120ac320 */
  push32(0x120aab30u); f_120ac320();
  /* 120aab30 mov dword ptr [0x120e10d8], eax */
  w32((uint32_t)(0x120e10d8), (EAX));
  /* 120aab35 call 0x120ac2a0 */
  push32(0x120aab3au); f_120ac2a0();
  /* 120aab3a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 120aab3c pop edi */
  EDI = (pop32());
  /* 120aab3d pop esi */
  ESI = (pop32());
  /* 120aab3e pop ebx */
  EBX = (pop32());
  /* 120aab3f pop ebp */
  EBP = (pop32());
  /* 120aab40 ret  */
  ESPCHK(0x120aab20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab50 @ 0x120aab50 (5 bytes, 4 insns) */
void f_120aab50(void) {
  FTRACE(0x120aab50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aab50 push ebp */
  push32((uint32_t)(EBP));
  /* 120aab51 mov ebp, esp */
  EBP = (ESP);
  /* 120aab53 pop ebp */
  EBP = (pop32());
  /* 120aab54 ret  */
  ESPCHK(0x120aab50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x120aab60 (65 bytes, 10 insns) */
void f_120aab60(void) {
  FTRACE(0x120aab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aab60 push ebp */
  push32((uint32_t)(EBP));
  /* 120aab61 mov ebp, esp */
  EBP = (ESP);
  /* 120aab63 mov dword ptr [0x120dee50], 0x120aca10 */
  w32((uint32_t)(0x120dee50), (0x120aca10u));
  /* 120aab6d mov dword ptr [0x120dee54], 0x120ac420 */
  w32((uint32_t)(0x120dee54), (0x120ac420u));
  /* 120aab77 mov dword ptr [0x120dee58], 0x120ac530 */
  w32((uint32_t)(0x120dee58), (0x120ac530u));
  /* 120aab81 mov dword ptr [0x120dee5c], 0x120ac370 */
  w32((uint32_t)(0x120dee5c), (0x120ac370u));
  /* 120aab8b mov dword ptr [0x120dee60], 0x120ac500 */
  w32((uint32_t)(0x120dee60), (0x120ac500u));
  /* 120aab95 mov dword ptr [0x120dee64], 0x120aca10 */
  w32((uint32_t)(0x120dee64), (0x120aca10u));
  /* 120aab9f pop ebp */
  EBP = (pop32());
  /* 120aaba0 ret  */
  ESPCHK(0x120aab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb0 @ 0x120aabb0 (28 bytes, 11 insns) */
void f_120aabb0(void) {
  FTRACE(0x120aabb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aabb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aabb1 mov ebp, esp */
  EBP = (ESP);
  /* 120aabb3 push ecx */
  push32((uint32_t)(ECX));
  /* 120aabb4 mov eax, dword ptr [0x120e10d4] */
  EAX = (r32((uint32_t)(0x120e10d4)));
  /* 120aabb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120aabbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aabbf mov dword ptr [0x120e10d4], ecx */
  w32((uint32_t)(0x120e10d4), (ECX));
  /* 120aabc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aabc8 mov esp, ebp */
  ESP = (EBP);
  /* 120aabca pop ebp */
  EBP = (pop32());
  /* 120aabcb ret  */
  ESPCHK(0x120aabb0u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x120aabcc (39 bytes, 16 insns) */
void f_120aabcc(void) {
  FTRACE(0x120aabccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aabcc push ebp */
  push32((uint32_t)(EBP));
  /* 120aabcd mov ebp, esp */
  EBP = (ESP);
  /* 120aabcf add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aabd2 wait  */
  /* wait (no observable integer/reg state) */
  /* 120aabd3 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 120aabd6 wait  */
  /* wait (no observable integer/reg state) */
  /* 120aabd7 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 120aabdb or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 120aabde mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120aabe2 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 120aabe5 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 120aabe8 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 120aabeb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120aabee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120aabf1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120aabf2 ret  */
  ESPCHK(0x120aabccu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac00 @ 0x120aac00 (161 bytes, 60 insns) */
void f_120aac00(void) {
  FTRACE(0x120aac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aac00 push ebp */
  push32((uint32_t)(EBP));
  /* 120aac01 mov ebp, esp */
  EBP = (ESP);
  /* 120aac03 push ecx */
  push32((uint32_t)(ECX));
  /* 120aac04 push ebx */
  push32((uint32_t)(EBX));
  /* 120aac05 push esi */
  push32((uint32_t)(ESI));
  /* 120aac06 push edi */
  push32((uint32_t)(EDI));
  /* 120aac07 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aac0b jne 0x120aac12 */
  if (!C.zf) goto L_120aac12;
  /* 120aac0d jmp 0x120aac9a */
  goto L_120aac9a;
L_120aac12:;
  /* 120aac12 push 9 */
  push32((uint32_t)(0x9u));
  /* 120aac14 call 0x120acb80 */
  push32(0x120aac19u); f_120acb80();
  /* 120aac19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aac1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aac1f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aac22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120aac25:;
  /* 120aac25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aac28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120aac2b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120aac31 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aac34 je 0x120aac77 */
  if (C.zf) goto L_120aac77;
  /* 120aac36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aac39 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aac3d je 0x120aac77 */
  if (C.zf) goto L_120aac77;
  /* 120aac3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aac42 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120aac45 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120aac4b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aac4e je 0x120aac77 */
  if (C.zf) goto L_120aac77;
  /* 120aac50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aac53 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aac57 je 0x120aac77 */
  if (C.zf) goto L_120aac77;
  /* 120aac59 push 0x120db3b8 */
  push32((uint32_t)(0x120db3b8u));
  /* 120aac5e push 0 */
  push32((uint32_t)(0x0u));
  /* 120aac60 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 120aac62 push 0x120db3ac */
  push32((uint32_t)(0x120db3acu));
  /* 120aac67 push 2 */
  push32((uint32_t)(0x2u));
  /* 120aac69 call 0x120ab840 */
  push32(0x120aac6eu); f_120ab840();
  /* 120aac6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aac71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aac74 jne 0x120aac77 */
  if (!C.zf) goto L_120aac77;
  /* 120aac76 int3  */
  x86_unimpl("int3 @ 0x120aac76");
L_120aac77:;
  /* 120aac77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120aac79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120aac7b jne 0x120aac25 */
  if (!C.zf) goto L_120aac25;
  /* 120aac7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aac80 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120aac83 push eax */
  push32((uint32_t)(EAX));
  /* 120aac84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aac87 push ecx */
  push32((uint32_t)(ECX));
  /* 120aac88 call 0x120ad710 */
  push32(0x120aac8du); f_120ad710();
  /* 120aac8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aac90 push 9 */
  push32((uint32_t)(0x9u));
  /* 120aac92 call 0x120acc20 */
  push32(0x120aac97u); f_120acc20();
  /* 120aac97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aac9a:;
  /* 120aac9a pop edi */
  EDI = (pop32());
  /* 120aac9b pop esi */
  ESI = (pop32());
  /* 120aac9c pop ebx */
  EBX = (pop32());
  /* 120aac9d mov esp, ebp */
  ESP = (EBP);
  /* 120aac9f pop ebp */
  EBP = (pop32());
  /* 120aaca0 ret  */
  ESPCHK(0x120aac00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acb0 @ 0x120aacb0 (19 bytes, 9 insns) */
void f_120aacb0(void) {
  FTRACE(0x120aacb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aacb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aacb1 mov ebp, esp */
  EBP = (ESP);
  /* 120aacb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120aacb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aacb8 push eax */
  push32((uint32_t)(EAX));
  /* 120aacb9 call 0x120accb0 */
  push32(0x120aacbeu); f_120accb0();
  /* 120aacbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aacc1 pop ebp */
  EBP = (pop32());
  /* 120aacc2 ret  */
  ESPCHK(0x120aacb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acd0 @ 0x120aacd0 (45 bytes, 17 insns) */
void f_120aacd0(void) {
  FTRACE(0x120aacd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aacd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aacd1 mov ebp, esp */
  EBP = (ESP);
  /* 120aacd3 push ecx */
  push32((uint32_t)(ECX));
  /* 120aacd4 push ebx */
  push32((uint32_t)(EBX));
  /* 120aacd5 push esi */
  push32((uint32_t)(ESI));
  /* 120aacd6 push edi */
  push32((uint32_t)(EDI));
  /* 120aacd7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aacda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aacdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120aace0 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 120aace7 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120aace9 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120aacef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aacf2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aacf5 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 120aacf8 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 120aacfb jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x120aad10 (7 bytes, 4 insns) */
void f_120aad10(void) {
  FTRACE(0x120aad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aad10 pop eax */
  EAX = (pop32());
  /* 120aad11 pop ecx */
  ECX = (pop32());
  /* 120aad12 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 120aad15 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000ad20 @ 0x120aad20 (7 bytes, 4 insns) */
void f_120aad20(void) {
  FTRACE(0x120aad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aad20 pop eax */
  EAX = (pop32());
  /* 120aad21 pop ecx */
  ECX = (pop32());
  /* 120aad22 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 120aad25 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000ad30 @ 0x120aad30 (7 bytes, 4 insns) */
void f_120aad30(void) {
  FTRACE(0x120aad30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aad30 pop eax */
  EAX = (pop32());
  /* 120aad31 pop ecx */
  ECX = (pop32());
  /* 120aad32 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 120aad35 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000ad40 @ 0x120aad40 (86 bytes, 32 insns) */
void f_120aad40(void) {
  FTRACE(0x120aad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aad40 push ebp */
  push32((uint32_t)(EBP));
  /* 120aad41 mov ebp, esp */
  EBP = (ESP);
  /* 120aad43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aad46 push ebx */
  push32((uint32_t)(EBX));
  /* 120aad47 push esi */
  push32((uint32_t)(ESI));
  /* 120aad48 push edi */
  push32((uint32_t)(EDI));
  /* 120aad49 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120aad4f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120aad52 mov dword ptr [ebp - 4], 0x120aad6c */
  w32((uint32_t)(EBP + -0x4), (0x120aad6cu));
  /* 120aad59 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aad5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aad5e push eax */
  push32((uint32_t)(EAX));
  /* 120aad5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aad62 push ecx */
  push32((uint32_t)(ECX));
  /* 120aad63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aad66 push edx */
  push32((uint32_t)(EDX));
  /* 120aad67 call 0x120c223c */
  push32(0x120aad6cu); f_120c223c();
  /* 120aad6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aad6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120aad72 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 120aad75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aad78 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120aad7b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120aad81 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 120aad84 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 120aad86 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 120aad8d pop edi */
  EDI = (pop32());
  /* 120aad8e pop esi */
  ESI = (pop32());
  /* 120aad8f pop ebx */
  EBX = (pop32());
  /* 120aad90 mov esp, ebp */
  ESP = (EBP);
  /* 120aad92 pop ebp */
  EBP = (pop32());
  /* 120aad93 ret 8 */
  ESPCHK(0x120aad40u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x120aada0 (60 bytes, 31 insns) */
void f_120aada0(void) {
  FTRACE(0x120aada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aada0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aada1 mov ebp, esp */
  EBP = (ESP);
  /* 120aada3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aada6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aada7 push esi */
  push32((uint32_t)(ESI));
  /* 120aada8 push edi */
  push32((uint32_t)(EDI));
  /* 120aada9 cld  */
  C.df=0;
  /* 120aadaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120aadad push 0 */
  push32((uint32_t)(0x0u));
  /* 120aadaf push 0 */
  push32((uint32_t)(0x0u));
  /* 120aadb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aadb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120aadb6 push eax */
  push32((uint32_t)(EAX));
  /* 120aadb7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aadba push ecx */
  push32((uint32_t)(ECX));
  /* 120aadbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aadbe push edx */
  push32((uint32_t)(EDX));
  /* 120aadbf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aadc2 push eax */
  push32((uint32_t)(EAX));
  /* 120aadc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aadc6 push ecx */
  push32((uint32_t)(ECX));
  /* 120aadc7 call 0x120aebf0 */
  push32(0x120aadccu); f_120aebf0();
  /* 120aadcc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aadcf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120aadd2 pop edi */
  EDI = (pop32());
  /* 120aadd3 pop esi */
  ESI = (pop32());
  /* 120aadd4 pop ebx */
  EBX = (pop32());
  /* 120aadd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aadd8 mov esp, ebp */
  ESP = (EBP);
  /* 120aadda pop ebp */
  EBP = (pop32());
  /* 120aaddb ret  */
  ESPCHK(0x120aada0u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x120aade0 (38 bytes, 16 insns) */
void f_120aade0(void) {
  FTRACE(0x120aade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aade0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aade1 mov ebp, esp */
  EBP = (ESP);
  /* 120aade3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aade6 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120aade9 push ecx */
  push32((uint32_t)(ECX));
  /* 120aadea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aaded mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 120aadf0 push eax */
  push32((uint32_t)(EAX));
  /* 120aadf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aadf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aadf6 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120aadf9 push edx */
  push32((uint32_t)(EDX));
  /* 120aadfa call 0x120af160 */
  push32(0x120aadffu); f_120af160();
  /* 120aadff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aae02 pop ebp */
  EBP = (pop32());
  /* 120aae03 ret 4 */
  ESPCHK(0x120aade0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ae10 @ 0x120aae10 (104 bytes, 36 insns) */
void f_120aae10(void) {
  FTRACE(0x120aae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aae10 push ebp */
  push32((uint32_t)(EBP));
  /* 120aae11 mov ebp, esp */
  EBP = (ESP);
  /* 120aae13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aae16 push ebx */
  push32((uint32_t)(EBX));
  /* 120aae17 push esi */
  push32((uint32_t)(ESI));
  /* 120aae18 push edi */
  push32((uint32_t)(EDI));
  /* 120aae19 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 120aae20 mov dword ptr [ebp - 0x10], 0x120aae80 */
  w32((uint32_t)(EBP + -0x10), (0x120aae80u));
  /* 120aae27 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aae2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120aae2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aae30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120aae33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aae36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aae39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120aae3c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120aae42 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120aae45 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120aae4b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120aae51 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aae54 push eax */
  push32((uint32_t)(EAX));
  /* 120aae55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aae58 push ecx */
  push32((uint32_t)(ECX));
  /* 120aae59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aae5c push edx */
  push32((uint32_t)(EDX));
  /* 120aae5d call 0x120af850 */
  push32(0x120aae62u); f_120af850();
  /* 120aae62 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120aae65 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120aae68 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120aae6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120aae71 pop edi */
  EDI = (pop32());
  /* 120aae72 pop esi */
  ESI = (pop32());
  /* 120aae73 pop ebx */
  EBX = (pop32());
  /* 120aae74 mov esp, ebp */
  ESP = (EBP);
  /* 120aae76 pop ebp */
  EBP = (pop32());
  /* 120aae77 ret  */
  ESPCHK(0x120aae10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae80 @ 0x120aae80 (57 bytes, 30 insns) */
void f_120aae80(void) {
  FTRACE(0x120aae80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aae80 push ebp */
  push32((uint32_t)(EBP));
  /* 120aae81 mov ebp, esp */
  EBP = (ESP);
  /* 120aae83 push ebx */
  push32((uint32_t)(EBX));
  /* 120aae84 push esi */
  push32((uint32_t)(ESI));
  /* 120aae85 push edi */
  push32((uint32_t)(EDI));
  /* 120aae86 cld  */
  C.df=0;
  /* 120aae87 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aae89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aae8c push eax */
  push32((uint32_t)(EAX));
  /* 120aae8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aae90 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120aae93 push edx */
  push32((uint32_t)(EDX));
  /* 120aae94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aae97 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120aae9a push ecx */
  push32((uint32_t)(ECX));
  /* 120aae9b push 0 */
  push32((uint32_t)(0x0u));
  /* 120aae9d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aaea0 push edx */
  push32((uint32_t)(EDX));
  /* 120aaea1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aaea4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120aaea7 push ecx */
  push32((uint32_t)(ECX));
  /* 120aaea8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aaeab push edx */
  push32((uint32_t)(EDX));
  /* 120aaeac call 0x120aebf0 */
  push32(0x120aaeb1u); f_120aebf0();
  /* 120aaeb1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aaeb4 pop edi */
  EDI = (pop32());
  /* 120aaeb5 pop esi */
  ESI = (pop32());
  /* 120aaeb6 pop ebx */
  EBX = (pop32());
  /* 120aaeb7 pop ebp */
  EBP = (pop32());
  /* 120aaeb8 ret  */
  ESPCHK(0x120aae80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec0 @ 0x120aaec0 (204 bytes, 58 insns) */
void f_120aaec0(void) {
  FTRACE(0x120aaec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aaec0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aaec1 mov ebp, esp */
  EBP = (ESP);
  /* 120aaec3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aaec6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aaec7 push esi */
  push32((uint32_t)(ESI));
  /* 120aaec8 push edi */
  push32((uint32_t)(EDI));
  /* 120aaec9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 120aaed0 mov dword ptr [ebp - 0x24], 0x120aaf90 */
  w32((uint32_t)(EBP + -0x24), (0x120aaf90u));
  /* 120aaed7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aaeda mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120aaedd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aaee0 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 120aaee3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120aaee6 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120aaee9 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aaeec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120aaeef mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 120aaef6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120aaefd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120aaf04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120aaf0b mov dword ptr [ebp - 0x10], 0x120aaf5c */
  w32((uint32_t)(EBP + -0x10), (0x120aaf5cu));
  /* 120aaf12 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 120aaf15 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 120aaf18 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120aaf1e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120aaf21 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120aaf27 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 120aaf2d mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 120aaf34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aaf37 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 120aaf3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aaf3d mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 120aaf40 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 120aaf43 push eax */
  push32((uint32_t)(EAX));
  /* 120aaf44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aaf47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120aaf49 push edx */
  push32((uint32_t)(EDX));
  /* 120aaf4a call 0x120af980 */
  push32(0x120aaf4fu); f_120af980();
  /* 120aaf4f call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x120aaf52u);
  /* 120aaf52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aaf55 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 120aaf5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aaf60 je 0x120aaf79 */
  if (C.zf) goto L_120aaf79;
  /* 120aaf62 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 120aaf69 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120aaf6b mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 120aaf6e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 120aaf70 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 120aaf77 jmp 0x120aaf82 */
  goto L_120aaf82;
L_120aaf79:;
  /* 120aaf79 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120aaf7c mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_120aaf82:;
  /* 120aaf82 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 120aaf85 pop edi */
  EDI = (pop32());
  /* 120aaf86 pop esi */
  ESI = (pop32());
  /* 120aaf87 pop ebx */
  EBX = (pop32());
  /* 120aaf88 mov esp, ebp */
  ESP = (EBP);
  /* 120aaf8a pop ebp */
  EBP = (pop32());
  /* 120aaf8b ret  */
  ESPCHK(0x120aaec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af90 @ 0x120aaf90 (124 bytes, 53 insns) */
void f_120aaf90(void) {
  FTRACE(0x120aaf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aaf90 push ebp */
  push32((uint32_t)(EBP));
  /* 120aaf91 mov ebp, esp */
  EBP = (ESP);
  /* 120aaf93 push ebx */
  push32((uint32_t)(EBX));
  /* 120aaf94 push esi */
  push32((uint32_t)(ESI));
  /* 120aaf95 push edi */
  push32((uint32_t)(EDI));
  /* 120aaf96 cld  */
  C.df=0;
  /* 120aaf97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aaf9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120aaf9d and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 120aafa0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120aafa2 je 0x120aafb5 */
  if (C.zf) goto L_120aafb5;
  /* 120aafa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aafa7 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 120aafae mov eax, 1 */
  EAX = (0x1u);
  /* 120aafb3 jmp 0x120ab00c */
  goto L_120ab00c;
L_120aafb5:;
  /* 120aafb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120aafb7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aafba mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120aafbd push ecx */
  push32((uint32_t)(ECX));
  /* 120aafbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aafc1 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120aafc4 push eax */
  push32((uint32_t)(EAX));
  /* 120aafc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aafc8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120aafcb push edx */
  push32((uint32_t)(EDX));
  /* 120aafcc push 0 */
  push32((uint32_t)(0x0u));
  /* 120aafce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aafd1 push eax */
  push32((uint32_t)(EAX));
  /* 120aafd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aafd5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120aafd8 push edx */
  push32((uint32_t)(EDX));
  /* 120aafd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aafdc push eax */
  push32((uint32_t)(EAX));
  /* 120aafdd call 0x120aebf0 */
  push32(0x120aafe2u); f_120aebf0();
  /* 120aafe2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aafe5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aafe8 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aafec jne 0x120aaffb */
  if (!C.zf) goto L_120aaffb;
  /* 120aafee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aaff1 push edx */
  push32((uint32_t)(EDX));
  /* 120aaff2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aaff5 push eax */
  push32((uint32_t)(EAX));
  /* 120aaff6 call 0x120aad40 */
  push32(0x120aaffbu); f_120aad40();
L_120aaffb:;
  /* 120aaffb mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aaffe mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 120ab001 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 120ab004 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 120ab007 mov eax, 1 */
  EAX = (0x1u);
L_120ab00c:;
  /* 120ab00c pop edi */
  EDI = (pop32());
  /* 120ab00d pop esi */
  ESI = (pop32());
  /* 120ab00e pop ebx */
  EBX = (pop32());
  /* 120ab00f pop ebp */
  EBP = (pop32());
  /* 120ab010 ret  */
  ESPCHK(0x120aaf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x120ab020 (130 bytes, 57 insns) */
void f_120ab020(void) {
  FTRACE(0x120ab020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab020 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab021 mov ebp, esp */
  EBP = (ESP);
  /* 120ab023 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab027 push ebx */
  push32((uint32_t)(EBX));
  /* 120ab028 push esi */
  push32((uint32_t)(ESI));
  /* 120ab029 push edi */
  push32((uint32_t)(EDI));
  /* 120ab02a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120ab02d mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 120ab030 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ab033 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab036 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ab038 mov edi, esi */
  EDI = (ESI);
  /* 120ab03a mov ebx, esi */
  EBX = (ESI);
  /* 120ab03c jl 0x120ab079 */
  if ((C.sf!=C.of)) goto L_120ab079;
L_120ab03e:;
  /* 120ab03e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab041 jne 0x120ab048 */
  if (!C.zf) goto L_120ab048;
  /* 120ab043 call 0x120afc00 */
  push32(0x120ab048u); f_120afc00();
L_120ab048:;
  /* 120ab048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab04b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120ab04c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab04f lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 120ab052 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 120ab055 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab058 jge 0x120ab05f */
  if ((C.sf==C.of)) goto L_120ab05f;
  /* 120ab05a cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab05d jle 0x120ab064 */
  if ((C.zf||C.sf!=C.of)) goto L_120ab064;
L_120ab05f:;
  /* 120ab05f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab062 jne 0x120ab06f */
  if (!C.zf) goto L_120ab06f;
L_120ab064:;
  /* 120ab064 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab067 mov edi, ebx */
  EDI = (EBX);
  /* 120ab069 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120ab06a mov ebx, esi */
  EBX = (ESI);
  /* 120ab06c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_120ab06f:;
  /* 120ab06f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ab074 jge 0x120ab03e */
  if ((C.sf==C.of)) goto L_120ab03e;
  /* 120ab076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_120ab079:;
  /* 120ab079 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ab07c mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ab07f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120ab080 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 120ab082 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 120ab084 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab087 ja 0x120ab08d */
  if ((!C.cf&&!C.zf)) goto L_120ab08d;
  /* 120ab089 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab08b jbe 0x120ab092 */
  if ((C.cf||C.zf)) goto L_120ab092;
L_120ab08d:;
  /* 120ab08d call 0x120afc00 */
  push32(0x120ab092u); f_120afc00();
L_120ab092:;
  /* 120ab092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab095 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 120ab098 pop edi */
  EDI = (pop32());
  /* 120ab099 pop esi */
  ESI = (pop32());
  /* 120ab09a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 120ab09d pop ebx */
  EBX = (pop32());
  /* 120ab09e mov esp, ebp */
  ESP = (EBP);
  /* 120ab0a0 pop ebp */
  EBP = (pop32());
  /* 120ab0a1 ret  */
  ESPCHK(0x120ab020u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x120ab0b0 (32 bytes, 18 insns) */
void f_120ab0b0(void) {
  FTRACE(0x120ab0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab0b1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab0b3 push ebx */
  push32((uint32_t)(EBX));
  /* 120ab0b4 push esi */
  push32((uint32_t)(ESI));
  /* 120ab0b5 push edi */
  push32((uint32_t)(EDI));
  /* 120ab0b6 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab0b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ab0b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ab0bb push 0x120ab0c8 */
  push32((uint32_t)(0x120ab0c8u));
  /* 120ab0c0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120ab0c3 call 0x120c223c */
  push32(0x120ab0c8u); f_120c223c();
  /* 120ab0c8 pop ebp */
  EBP = (pop32());
  /* 120ab0c9 pop edi */
  EDI = (pop32());
  /* 120ab0ca pop esi */
  ESI = (pop32());
  /* 120ab0cb pop ebx */
  EBX = (pop32());
  /* 120ab0cc mov esp, ebp */
  ESP = (EBP);
  /* 120ab0ce pop ebp */
  EBP = (pop32());
  /* 120ab0cf ret  */
  ESPCHK(0x120ab0b0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x120ab0f2 (104 bytes, 33 insns) */
void f_120ab0f2(void) {
  FTRACE(0x120ab0f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab0f2 push ebx */
  push32((uint32_t)(EBX));
  /* 120ab0f3 push esi */
  push32((uint32_t)(ESI));
  /* 120ab0f4 push edi */
  push32((uint32_t)(EDI));
  /* 120ab0f5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120ab0f9 push eax */
  push32((uint32_t)(EAX));
  /* 120ab0fa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 120ab0fc push 0x120ab0d0 */
  push32((uint32_t)(0x120ab0d0u));
  /* 120ab101 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 120ab108 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_120ab10f:;
  /* 120ab10f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 120ab113 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 120ab116 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 120ab119 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab11c je 0x120ab14c */
  if (C.zf) goto L_120ab14c;
  /* 120ab11e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab122 je 0x120ab14c */
  if (C.zf) goto L_120ab14c;
  /* 120ab124 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 120ab127 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 120ab12a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 120ab12e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 120ab131 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab136 jne 0x120ab14a */
  if (!C.zf) goto L_120ab14a;
  /* 120ab138 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 120ab13d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 120ab141 call 0x120ab186 */
  push32(0x120ab146u); f_120ab186();
  /* 120ab146 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x120ab14au);
L_120ab14a:;
  /* 120ab14a jmp 0x120ab10f */
  goto L_120ab10f;
L_120ab14c:;
  /* 120ab14c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 120ab153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab156 pop edi */
  EDI = (pop32());
  /* 120ab157 pop esi */
  ESI = (pop32());
  /* 120ab158 pop ebx */
  EBX = (pop32());
  /* 120ab159 ret  */
  ESPCHK(0x120ab0f2u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x120ab15a (35 bytes, 10 insns) */
void f_120ab15a(void) {
  FTRACE(0x120ab15au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab15a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab15c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 120ab163 cmp dword ptr [ecx + 4], 0x120ab0d0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x120ab0d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab16a jne 0x120ab17c */
  if (!C.zf) goto L_120ab17c;
  /* 120ab16c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120ab16f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 120ab172 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab175 jne 0x120ab17c */
  if (!C.zf) goto L_120ab17c;
  /* 120ab177 mov eax, 1 */
  EAX = (0x1u);
L_120ab17c:;
  /* 120ab17c ret  */
  ESPCHK(0x120ab15au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x120ab17d (9 bytes, 4 insns) */
void f_120ab17d(void) {
  FTRACE(0x120ab17du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab17d push ebx */
  push32((uint32_t)(EBX));
  /* 120ab17e push ecx */
  push32((uint32_t)(ECX));
  /* 120ab17f mov ebx, 0x120deddc */
  EBX = (0x120deddcu);
  /* 120ab184 jmp 0x120ab190 */
  jmp_ind(0x120ab190u); return;
}

/* FUN_1000b186 @ 0x120ab186 (24 bytes, 10 insns) */
void f_120ab186(void) {
  FTRACE(0x120ab186u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab186 push ebx */
  push32((uint32_t)(EBX));
  /* 120ab187 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab188 mov ebx, 0x120deddc */
  EBX = (0x120deddcu);
  /* 120ab18d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab190 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 120ab193 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 120ab196 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 120ab199 pop ecx */
  ECX = (pop32());
  /* 120ab19a pop ebx */
  EBX = (pop32());
  /* 120ab19b ret 4 */
  ESPCHK(0x120ab186u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b1a0 @ 0x120ab1a0 (179 bytes, 53 insns) */
void f_120ab1a0(void) {
  FTRACE(0x120ab1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab1a1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab1a4 call 0x120afe40 */
  push32(0x120ab1a9u); f_120afe40();
  /* 120ab1a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ab1ab mov eax, dword ptr [0x120e2c18] */
  EAX = (r32((uint32_t)(0x120e2c18)));
  /* 120ab1b0 push eax */
  push32((uint32_t)(EAX));
  /* 120ab1b1 call 0x120adb50 */
  push32(0x120ab1b6u); f_120adb50();
  /* 120ab1b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab1b9 mov ecx, dword ptr [0x120e2c14] */
  ECX = (r32((uint32_t)(0x120e2c14)));
  /* 120ab1bf sub ecx, dword ptr [0x120e2c18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2c18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ab1c5 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab1c8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab1ca jae 0x120ab22d */
  if (!C.cf) goto L_120ab22d;
  /* 120ab1cc push 0x68 */
  push32((uint32_t)(0x68u));
  /* 120ab1ce push 0x120db3e0 */
  push32((uint32_t)(0x120db3e0u));
  /* 120ab1d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ab1d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ab1d7 mov edx, dword ptr [0x120e2c18] */
  EDX = (r32((uint32_t)(0x120e2c18)));
  /* 120ab1dd push edx */
  push32((uint32_t)(EDX));
  /* 120ab1de call 0x120adb50 */
  push32(0x120ab1e3u); f_120adb50();
  /* 120ab1e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab1e6 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab1e9 push eax */
  push32((uint32_t)(EAX));
  /* 120ab1ea mov eax, dword ptr [0x120e2c18] */
  EAX = (r32((uint32_t)(0x120e2c18)));
  /* 120ab1ef push eax */
  push32((uint32_t)(EAX));
  /* 120ab1f0 call 0x120ad110 */
  push32(0x120ab1f5u); f_120ad110();
  /* 120ab1f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab1f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ab1fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab1ff jne 0x120ab20a */
  if (!C.zf) goto L_120ab20a;
  /* 120ab201 call 0x120afe50 */
  push32(0x120ab206u); f_120afe50();
  /* 120ab206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab208 jmp 0x120ab24f */
  goto L_120ab24f;
L_120ab20a:;
  /* 120ab20a mov ecx, dword ptr [0x120e2c14] */
  ECX = (r32((uint32_t)(0x120e2c14)));
  /* 120ab210 sub ecx, dword ptr [0x120e2c18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2c18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ab216 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120ab219 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab21c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 120ab21f mov dword ptr [0x120e2c14], eax */
  w32((uint32_t)(0x120e2c14), (EAX));
  /* 120ab224 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab227 mov dword ptr [0x120e2c18], ecx */
  w32((uint32_t)(0x120e2c18), (ECX));
L_120ab22d:;
  /* 120ab22d mov edx, dword ptr [0x120e2c14] */
  EDX = (r32((uint32_t)(0x120e2c14)));
  /* 120ab233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab236 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120ab238 mov ecx, dword ptr [0x120e2c14] */
  ECX = (r32((uint32_t)(0x120e2c14)));
  /* 120ab23e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab241 mov dword ptr [0x120e2c14], ecx */
  w32((uint32_t)(0x120e2c14), (ECX));
  /* 120ab247 call 0x120afe50 */
  push32(0x120ab24cu); f_120afe50();
  /* 120ab24c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_120ab24f:;
  /* 120ab24f mov esp, ebp */
  ESP = (EBP);
  /* 120ab251 pop ebp */
  EBP = (pop32());
  /* 120ab252 ret  */
  ESPCHK(0x120ab1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x120ab260 (24 bytes, 12 insns) */
void f_120ab260(void) {
  FTRACE(0x120ab260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab260 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab261 mov ebp, esp */
  EBP = (ESP);
  /* 120ab263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab266 push eax */
  push32((uint32_t)(EAX));
  /* 120ab267 call 0x120ab1a0 */
  push32(0x120ab26cu); f_120ab1a0();
  /* 120ab26c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab26f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ab271 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ab273 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ab275 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120ab276 pop ebp */
  EBP = (pop32());
  /* 120ab277 ret  */
  ESPCHK(0x120ab260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b280 @ 0x120ab280 (77 bytes, 20 insns) */
void f_120ab280(void) {
  FTRACE(0x120ab280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab280 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab281 mov ebp, esp */
  EBP = (ESP);
  /* 120ab283 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 120ab288 push 0x120db3e0 */
  push32((uint32_t)(0x120db3e0u));
  /* 120ab28d push 2 */
  push32((uint32_t)(0x2u));
  /* 120ab28f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 120ab294 call 0x120acc80 */
  push32(0x120ab299u); f_120acc80();
  /* 120ab299 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab29c mov dword ptr [0x120e2c18], eax */
  w32((uint32_t)(0x120e2c18), (EAX));
  /* 120ab2a1 cmp dword ptr [0x120e2c18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab2a8 jne 0x120ab2b4 */
  if (!C.zf) goto L_120ab2b4;
  /* 120ab2aa push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120ab2ac call 0x120ab6f0 */
  push32(0x120ab2b1u); f_120ab6f0();
  /* 120ab2b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ab2b4:;
  /* 120ab2b4 mov eax, dword ptr [0x120e2c18] */
  EAX = (r32((uint32_t)(0x120e2c18)));
  /* 120ab2b9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120ab2bf mov ecx, dword ptr [0x120e2c18] */
  ECX = (r32((uint32_t)(0x120e2c18)));
  /* 120ab2c5 mov dword ptr [0x120e2c14], ecx */
  w32((uint32_t)(0x120e2c14), (ECX));
  /* 120ab2cb pop ebp */
  EBP = (pop32());
  /* 120ab2cc ret  */
  ESPCHK(0x120ab280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2d0 @ 0x120ab2d0 (16 bytes, 7 insns) */
void f_120ab2d0(void) {
  FTRACE(0x120ab2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab2d1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab2d3 call 0x120af980 */
  push32(0x120ab2d8u); f_120af980();
  /* 120ab2d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab2db mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 120ab2de pop ebp */
  EBP = (pop32());
  /* 120ab2df ret  */
  ESPCHK(0x120ab2d0u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x120ab2e0 (54 bytes, 18 insns) */
void f_120ab2e0(void) {
  FTRACE(0x120ab2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab2e1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab2e4 call 0x120af980 */
  push32(0x120ab2e9u); f_120af980();
  /* 120ab2e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ab2ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab2ef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120ab2f2 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120ab2f8 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab2fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab301 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 120ab304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab307 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 120ab30a shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120ab30d and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab312 mov esp, ebp */
  ESP = (EBP);
  /* 120ab314 pop ebp */
  EBP = (pop32());
  /* 120ab315 ret  */
  ESPCHK(0x120ab2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x120ab320 (385 bytes, 103 insns) */
void f_120ab320(void) {
  FTRACE(0x120ab320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab320 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab321 mov ebp, esp */
  EBP = (ESP);
  /* 120ab323 sub esp, 0xd8 */
  { uint32_t _a=(ESP),_b=(0xd8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ab329 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 120ab32c push eax */
  push32((uint32_t)(EAX));
  /* 120ab32d call dword ptr [0x120e3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3424))), 0x120ab333u);
  /* 120ab333 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 120ab336 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab337 call dword ptr [0x120e3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3420))), 0x120ab33du);
  /* 120ab33d mov edx, dword ptr [ebp - 6] */
  EDX = (r32((uint32_t)(EBP + -0x6)));
  /* 120ab340 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ab346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab348 mov ax, word ptr [0x120e10f2] */
  AX = (r16((uint32_t)(0x120e10f2)));
  /* 120ab34e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab350 jne 0x120ab3b8 */
  if (!C.zf) goto L_120ab3b8;
  /* 120ab352 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ab355 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ab35b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ab35d mov dx, word ptr [0x120e10f0] */
  DX = (r16((uint32_t)(0x120e10f0)));
  /* 120ab364 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab366 jne 0x120ab3b8 */
  if (!C.zf) goto L_120ab3b8;
  /* 120ab368 mov eax, dword ptr [ebp - 0xa] */
  EAX = (r32((uint32_t)(EBP + -0xa)));
  /* 120ab36b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab370 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ab372 mov cx, word ptr [0x120e10ee] */
  CX = (r16((uint32_t)(0x120e10ee)));
  /* 120ab379 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab37b jne 0x120ab3b8 */
  if (!C.zf) goto L_120ab3b8;
  /* 120ab37d mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 120ab380 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ab386 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab388 mov ax, word ptr [0x120e10ea] */
  AX = (r16((uint32_t)(0x120e10ea)));
  /* 120ab38e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab390 jne 0x120ab3b8 */
  if (!C.zf) goto L_120ab3b8;
  /* 120ab392 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120ab395 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ab39b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ab39d mov dx, word ptr [0x120e10e8] */
  DX = (r16((uint32_t)(0x120e10e8)));
  /* 120ab3a4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab3a6 jne 0x120ab3b8 */
  if (!C.zf) goto L_120ab3b8;
  /* 120ab3a8 mov eax, dword ptr [0x120e10e0] */
  EAX = (r32((uint32_t)(0x120e10e0)));
  /* 120ab3ad mov dword ptr [ebp - 0xd8], eax */
  w32((uint32_t)(EBP + -0xd8), (EAX));
  /* 120ab3b3 jmp 0x120ab440 */
  goto L_120ab440;
L_120ab3b8:;
  /* 120ab3b8 lea ecx, [ebp - 0xd0] */
  ECX = ((uint32_t)(EBP + -0xd0));
  /* 120ab3be push ecx */
  push32((uint32_t)(ECX));
  /* 120ab3bf call dword ptr [0x120e341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e341c))), 0x120ab3c5u);
  /* 120ab3c5 mov dword ptr [ebp - 0xd4], eax */
  w32((uint32_t)(EBP + -0xd4), (EAX));
  /* 120ab3cb cmp dword ptr [ebp - 0xd4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab3d2 je 0x120ab408 */
  if (C.zf) goto L_120ab408;
  /* 120ab3d4 cmp dword ptr [ebp - 0xd4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xd4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab3db jne 0x120ab3fc */
  if (!C.zf) goto L_120ab3fc;
  /* 120ab3dd mov edx, dword ptr [ebp - 0x36] */
  EDX = (r32((uint32_t)(EBP + -0x36)));
  /* 120ab3e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ab3e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ab3e8 je 0x120ab3fc */
  if (C.zf) goto L_120ab3fc;
  /* 120ab3ea cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab3ee je 0x120ab3fc */
  if (C.zf) goto L_120ab3fc;
  /* 120ab3f0 mov dword ptr [ebp - 0xd8], 1 */
  w32((uint32_t)(EBP + -0xd8), (0x1u));
  /* 120ab3fa jmp 0x120ab406 */
  goto L_120ab406;
L_120ab3fc:;
  /* 120ab3fc mov dword ptr [ebp - 0xd8], 0 */
  w32((uint32_t)(EBP + -0xd8), (0x0u));
L_120ab406:;
  /* 120ab406 jmp 0x120ab412 */
  goto L_120ab412;
L_120ab408:;
  /* 120ab408 mov dword ptr [ebp - 0xd8], 0xffffffff */
  w32((uint32_t)(EBP + -0xd8), (0xffffffffu));
L_120ab412:;
  /* 120ab412 mov eax, dword ptr [ebp - 0xd8] */
  EAX = (r32((uint32_t)(EBP + -0xd8)));
  /* 120ab418 mov dword ptr [0x120e10e0], eax */
  w32((uint32_t)(0x120e10e0), (EAX));
  /* 120ab41d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120ab420 mov dword ptr [0x120e10e8], ecx */
  w32((uint32_t)(0x120e10e8), (ECX));
  /* 120ab426 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ab429 mov dword ptr [0x120e10ec], edx */
  w32((uint32_t)(0x120e10ec), (EDX));
  /* 120ab42f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ab432 mov dword ptr [0x120e10f0], eax */
  w32((uint32_t)(0x120e10f0), (EAX));
  /* 120ab437 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab43a mov dword ptr [0x120e10f4], ecx */
  w32((uint32_t)(0x120e10f4), (ECX));
L_120ab440:;
  /* 120ab440 mov edx, dword ptr [ebp - 0xd8] */
  EDX = (r32((uint32_t)(EBP + -0xd8)));
  /* 120ab446 push edx */
  push32((uint32_t)(EDX));
  /* 120ab447 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120ab44a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab44f push eax */
  push32((uint32_t)(EAX));
  /* 120ab450 mov ecx, dword ptr [ebp - 0x1a] */
  ECX = (r32((uint32_t)(EBP + -0x1a)));
  /* 120ab453 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ab459 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab45a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120ab45d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ab463 push edx */
  push32((uint32_t)(EDX));
  /* 120ab464 mov eax, dword ptr [ebp - 0x1e] */
  EAX = (r32((uint32_t)(EBP + -0x1e)));
  /* 120ab467 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab46c push eax */
  push32((uint32_t)(EAX));
  /* 120ab46d mov ecx, dword ptr [ebp - 0x22] */
  ECX = (r32((uint32_t)(EBP + -0x22)));
  /* 120ab470 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ab476 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab477 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120ab47a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ab480 push edx */
  push32((uint32_t)(EDX));
  /* 120ab481 call 0x120afe90 */
  push32(0x120ab486u); f_120afe90();
  /* 120ab486 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab489 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120ab48c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab490 je 0x120ab49a */
  if (C.zf) goto L_120ab49a;
  /* 120ab492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab495 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120ab498 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_120ab49a:;
  /* 120ab49a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120ab49d mov esp, ebp */
  ESP = (EBP);
  /* 120ab49f pop ebp */
  EBP = (pop32());
  /* 120ab4a0 ret  */
  ESPCHK(0x120ab320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4b0 @ 0x120ab4b0 (313 bytes, 78 insns) */
void f_120ab4b0(void) {
  FTRACE(0x120ab4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab4b1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab4b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab4b7 jne 0x120ab577 */
  if (!C.zf) goto L_120ab577;
  /* 120ab4bd call dword ptr [0x120e342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e342c))), 0x120ab4c3u);
  /* 120ab4c3 mov dword ptr [0x120e1188], eax */
  w32((uint32_t)(0x120e1188), (EAX));
  /* 120ab4c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ab4ca call 0x120b0bd0 */
  push32(0x120ab4cfu); f_120b0bd0();
  /* 120ab4cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab4d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ab4d4 jne 0x120ab4dd */
  if (!C.zf) goto L_120ab4dd;
  /* 120ab4d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab4d8 jmp 0x120ab5e5 */
  goto L_120ab5e5;
L_120ab4dd:;
  /* 120ab4dd mov eax, dword ptr [0x120e1188] */
  EAX = (r32((uint32_t)(0x120e1188)));
  /* 120ab4e2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120ab4e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab4ea mov dword ptr [0x120e1194], eax */
  w32((uint32_t)(0x120e1194), (EAX));
  /* 120ab4ef mov ecx, dword ptr [0x120e1188] */
  ECX = (r32((uint32_t)(0x120e1188)));
  /* 120ab4f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ab4fb mov dword ptr [0x120e1190], ecx */
  w32((uint32_t)(0x120e1190), (ECX));
  /* 120ab501 mov edx, dword ptr [0x120e1190] */
  EDX = (r32((uint32_t)(0x120e1190)));
  /* 120ab507 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 120ab50a add edx, dword ptr [0x120e1194] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120e1194))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab510 mov dword ptr [0x120e118c], edx */
  w32((uint32_t)(0x120e118c), (EDX));
  /* 120ab516 mov eax, dword ptr [0x120e1188] */
  EAX = (r32((uint32_t)(0x120e1188)));
  /* 120ab51b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120ab51e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab523 mov dword ptr [0x120e1188], eax */
  w32((uint32_t)(0x120e1188), (EAX));
  /* 120ab528 call 0x120af8a0 */
  push32(0x120ab52du); f_120af8a0();
  /* 120ab52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ab52f jne 0x120ab53d */
  if (!C.zf) goto L_120ab53d;
  /* 120ab531 call 0x120b0c20 */
  push32(0x120ab536u); f_120b0c20();
  /* 120ab536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab538 jmp 0x120ab5e5 */
  goto L_120ab5e5;
L_120ab53d:;
  /* 120ab53d call dword ptr [0x120e3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3428))), 0x120ab543u);
  /* 120ab543 mov dword ptr [0x120e2c34], eax */
  w32((uint32_t)(0x120e2c34), (EAX));
  /* 120ab548 call 0x120b09b0 */
  push32(0x120ab54du); f_120b09b0();
  /* 120ab54d mov dword ptr [0x120e10fc], eax */
  w32((uint32_t)(0x120e10fc), (EAX));
  /* 120ab552 call 0x120aff80 */
  push32(0x120ab557u); f_120aff80();
  /* 120ab557 call 0x120b04a0 */
  push32(0x120ab55cu); f_120b04a0();
  /* 120ab55c call 0x120b0350 */
  push32(0x120ab561u); f_120b0350();
  /* 120ab561 call 0x120afc90 */
  push32(0x120ab566u); f_120afc90();
  /* 120ab566 mov ecx, dword ptr [0x120e10f8] */
  ECX = (r32((uint32_t)(0x120e10f8)));
  /* 120ab56c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab56f mov dword ptr [0x120e10f8], ecx */
  w32((uint32_t)(0x120e10f8), (ECX));
  /* 120ab575 jmp 0x120ab5e0 */
  goto L_120ab5e0;
L_120ab577:;
  /* 120ab577 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab57b jne 0x120ab5d0 */
  if (!C.zf) goto L_120ab5d0;
  /* 120ab57d cmp dword ptr [0x120e10f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab584 jle 0x120ab5ca */
  if ((C.zf||C.sf!=C.of)) goto L_120ab5ca;
  /* 120ab586 mov edx, dword ptr [0x120e10f8] */
  EDX = (r32((uint32_t)(0x120e10f8)));
  /* 120ab58c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ab58f mov dword ptr [0x120e10f8], edx */
  w32((uint32_t)(0x120e10f8), (EDX));
  /* 120ab595 cmp dword ptr [0x120e11c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab59c jne 0x120ab5a3 */
  if (!C.zf) goto L_120ab5a3;
  /* 120ab59e call 0x120afd10 */
  push32(0x120ab5a3u); f_120afd10();
L_120ab5a3:;
  /* 120ab5a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120ab5a5 call 0x120ae190 */
  push32(0x120ab5aau); f_120ae190();
  /* 120ab5aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab5ad and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 120ab5b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ab5b2 je 0x120ab5b9 */
  if (C.zf) goto L_120ab5b9;
  /* 120ab5b4 call 0x120aeaa0 */
  push32(0x120ab5b9u); f_120aeaa0();
L_120ab5b9:;
  /* 120ab5b9 call 0x120b02b0 */
  push32(0x120ab5beu); f_120b02b0();
  /* 120ab5be call 0x120af930 */
  push32(0x120ab5c3u); f_120af930();
  /* 120ab5c3 call 0x120b0c20 */
  push32(0x120ab5c8u); f_120b0c20();
  /* 120ab5c8 jmp 0x120ab5ce */
  goto L_120ab5ce;
L_120ab5ca:;
  /* 120ab5ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab5cc jmp 0x120ab5e5 */
  goto L_120ab5e5;
L_120ab5ce:;
  /* 120ab5ce jmp 0x120ab5e0 */
  goto L_120ab5e0;
L_120ab5d0:;
  /* 120ab5d0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab5d4 jne 0x120ab5e0 */
  if (!C.zf) goto L_120ab5e0;
  /* 120ab5d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ab5d8 call 0x120afa20 */
  push32(0x120ab5ddu); f_120afa20();
  /* 120ab5dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ab5e0:;
  /* 120ab5e0 mov eax, 1 */
  EAX = (0x1u);
L_120ab5e5:;
  /* 120ab5e5 pop ebp */
  EBP = (pop32());
  /* 120ab5e6 ret 0xc */
  ESPCHK(0x120ab4b0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x120ab5f0 (243 bytes, 86 insns) */
void f_120ab5f0(void) {
  FTRACE(0x120ab5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab5f1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab5f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120ab5fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab5ff jne 0x120ab611 */
  if (!C.zf) goto L_120ab611;
  /* 120ab601 cmp dword ptr [0x120e10f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e10f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab608 jne 0x120ab611 */
  if (!C.zf) goto L_120ab611;
  /* 120ab60a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab60c jmp 0x120ab6dd */
  goto L_120ab6dd;
L_120ab611:;
  /* 120ab611 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab615 je 0x120ab61d */
  if (C.zf) goto L_120ab61d;
  /* 120ab617 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab61b jne 0x120ab65f */
  if (!C.zf) goto L_120ab65f;
L_120ab61d:;
  /* 120ab61d cmp dword ptr [0x120e2c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab624 je 0x120ab63b */
  if (C.zf) goto L_120ab63b;
  /* 120ab626 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab629 push eax */
  push32((uint32_t)(EAX));
  /* 120ab62a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab62d push ecx */
  push32((uint32_t)(ECX));
  /* 120ab62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab631 push edx */
  push32((uint32_t)(EDX));
  /* 120ab632 call dword ptr [0x120e2c44] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e2c44))), 0x120ab638u);
  /* 120ab638 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ab63b:;
  /* 120ab63b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab63f je 0x120ab655 */
  if (C.zf) goto L_120ab655;
  /* 120ab641 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab644 push eax */
  push32((uint32_t)(EAX));
  /* 120ab645 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab648 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab64c push edx */
  push32((uint32_t)(EDX));
  /* 120ab64d call 0x120ab4b0 */
  push32(0x120ab652u); f_120ab4b0();
  /* 120ab652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ab655:;
  /* 120ab655 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab659 jne 0x120ab65f */
  if (!C.zf) goto L_120ab65f;
  /* 120ab65b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab65d jmp 0x120ab6dd */
  goto L_120ab6dd;
L_120ab65f:;
  /* 120ab65f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab662 push eax */
  push32((uint32_t)(EAX));
  /* 120ab663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab666 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab66a push edx */
  push32((uint32_t)(EDX));
  /* 120ab66b call 0x120a106e */
  push32(0x120ab670u); f_120a106e();
  /* 120ab670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ab673 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab677 jne 0x120ab68e */
  if (!C.zf) goto L_120ab68e;
  /* 120ab679 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab67d jne 0x120ab68e */
  if (!C.zf) goto L_120ab68e;
  /* 120ab67f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab682 push eax */
  push32((uint32_t)(EAX));
  /* 120ab683 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ab685 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab688 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab689 call 0x120ab4b0 */
  push32(0x120ab68eu); f_120ab4b0();
L_120ab68e:;
  /* 120ab68e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab692 je 0x120ab69a */
  if (C.zf) goto L_120ab69a;
  /* 120ab694 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab698 jne 0x120ab6da */
  if (!C.zf) goto L_120ab6da;
L_120ab69a:;
  /* 120ab69a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab69d push edx */
  push32((uint32_t)(EDX));
  /* 120ab69e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab6a1 push eax */
  push32((uint32_t)(EAX));
  /* 120ab6a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab6a5 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab6a6 call 0x120ab4b0 */
  push32(0x120ab6abu); f_120ab4b0();
  /* 120ab6ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ab6ad jne 0x120ab6b6 */
  if (!C.zf) goto L_120ab6b6;
  /* 120ab6af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120ab6b6:;
  /* 120ab6b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab6ba je 0x120ab6da */
  if (C.zf) goto L_120ab6da;
  /* 120ab6bc cmp dword ptr [0x120e2c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab6c3 je 0x120ab6da */
  if (C.zf) goto L_120ab6da;
  /* 120ab6c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab6c8 push edx */
  push32((uint32_t)(EDX));
  /* 120ab6c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab6cc push eax */
  push32((uint32_t)(EAX));
  /* 120ab6cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab6d1 call dword ptr [0x120e2c44] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e2c44))), 0x120ab6d7u);
  /* 120ab6d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ab6da:;
  /* 120ab6da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120ab6dd:;
  /* 120ab6dd mov esp, ebp */
  ESP = (EBP);
  /* 120ab6df pop ebp */
  EBP = (pop32());
  /* 120ab6e0 ret 0xc */
  ESPCHK(0x120ab5f0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x120ab6f0 (58 bytes, 18 insns) */
void f_120ab6f0(void) {
  FTRACE(0x120ab6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab6f1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab6f3 cmp dword ptr [0x120e1104], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1104))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab6fa je 0x120ab70e */
  if (C.zf) goto L_120ab70e;
  /* 120ab6fc cmp dword ptr [0x120e1104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab703 jne 0x120ab713 */
  if (!C.zf) goto L_120ab713;
  /* 120ab705 cmp dword ptr [0x120e1108], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1108))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab70c jne 0x120ab713 */
  if (!C.zf) goto L_120ab713;
L_120ab70e:;
  /* 120ab70e call 0x120b0cc0 */
  push32(0x120ab713u); f_120b0cc0();
L_120ab713:;
  /* 120ab713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab716 push eax */
  push32((uint32_t)(EAX));
  /* 120ab717 call 0x120b0d10 */
  push32(0x120ab71cu); f_120b0d10();
  /* 120ab71c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab71f push 0xff */
  push32((uint32_t)(0xffu));
  /* 120ab724 call dword ptr [0x120dedec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120dedec))), 0x120ab72au);
  /* 120ab72a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab72d pop ebp */
  EBP = (pop32());
  /* 120ab72e ret  */
  ESPCHK(0x120ab6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b730 @ 0x120ab730 (11 bytes, 5 insns) */
void f_120ab730(void) {
  FTRACE(0x120ab730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab730 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab731 mov ebp, esp */
  EBP = (ESP);
  /* 120ab733 call dword ptr [0x120e3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3430))), 0x120ab739u);
  /* 120ab739 pop ebp */
  EBP = (pop32());
  /* 120ab73a ret  */
  ESPCHK(0x120ab730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b740 @ 0x120ab740 (87 bytes, 30 insns) */
void f_120ab740(void) {
  FTRACE(0x120ab740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab740 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab741 mov ebp, esp */
  EBP = (ESP);
  /* 120ab743 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab744 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab748 jl 0x120ab750 */
  if ((C.sf!=C.of)) goto L_120ab750;
  /* 120ab74a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab74e jl 0x120ab755 */
  if ((C.sf!=C.of)) goto L_120ab755;
L_120ab750:;
  /* 120ab750 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab753 jmp 0x120ab793 */
  goto L_120ab793;
L_120ab755:;
  /* 120ab755 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab759 jne 0x120ab767 */
  if (!C.zf) goto L_120ab767;
  /* 120ab75b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab75e mov eax, dword ptr [eax*4 + 0x120dedf4] */
  EAX = (r32((uint32_t)(EAX*4 + 0x120dedf4)));
  /* 120ab765 jmp 0x120ab793 */
  goto L_120ab793;
L_120ab767:;
  /* 120ab767 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab76a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 120ab76d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ab76f je 0x120ab776 */
  if (C.zf) goto L_120ab776;
  /* 120ab771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab774 jmp 0x120ab793 */
  goto L_120ab793;
L_120ab776:;
  /* 120ab776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab779 mov eax, dword ptr [edx*4 + 0x120dedf4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120dedf4)));
  /* 120ab780 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ab783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab786 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab789 mov dword ptr [ecx*4 + 0x120dedf4], edx */
  w32((uint32_t)(ECX*4 + 0x120dedf4), (EDX));
  /* 120ab790 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120ab793:;
  /* 120ab793 mov esp, ebp */
  ESP = (EBP);
  /* 120ab795 pop ebp */
  EBP = (pop32());
  /* 120ab796 ret  */
  ESPCHK(0x120ab740u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x120ab7a0 (126 bytes, 38 insns) */
void f_120ab7a0(void) {
  FTRACE(0x120ab7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab7a1 mov ebp, esp */
  EBP = (ESP);
  /* 120ab7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab7a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab7a8 jl 0x120ab7b0 */
  if ((C.sf!=C.of)) goto L_120ab7b0;
  /* 120ab7aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab7ae jl 0x120ab7b7 */
  if ((C.sf!=C.of)) goto L_120ab7b7;
L_120ab7b0:;
  /* 120ab7b0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 120ab7b5 jmp 0x120ab81a */
  goto L_120ab81a;
L_120ab7b7:;
  /* 120ab7b7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab7bb jne 0x120ab7c9 */
  if (!C.zf) goto L_120ab7c9;
  /* 120ab7bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab7c0 mov eax, dword ptr [eax*4 + 0x120dee00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x120dee00)));
  /* 120ab7c7 jmp 0x120ab81a */
  goto L_120ab81a;
L_120ab7c9:;
  /* 120ab7c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab7cc mov edx, dword ptr [ecx*4 + 0x120dee00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120dee00)));
  /* 120ab7d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ab7d6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab7da jne 0x120ab7f0 */
  if (!C.zf) goto L_120ab7f0;
  /* 120ab7dc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 120ab7de call dword ptr [0x120e3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3434))), 0x120ab7e4u);
  /* 120ab7e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab7e7 mov dword ptr [ecx*4 + 0x120dee00], eax */
  w32((uint32_t)(ECX*4 + 0x120dee00), (EAX));
  /* 120ab7ee jmp 0x120ab817 */
  goto L_120ab817;
L_120ab7f0:;
  /* 120ab7f0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab7f4 jne 0x120ab80a */
  if (!C.zf) goto L_120ab80a;
  /* 120ab7f6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120ab7f8 call dword ptr [0x120e3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3434))), 0x120ab7feu);
  /* 120ab7fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab801 mov dword ptr [edx*4 + 0x120dee00], eax */
  w32((uint32_t)(EDX*4 + 0x120dee00), (EAX));
  /* 120ab808 jmp 0x120ab817 */
  goto L_120ab817;
L_120ab80a:;
  /* 120ab80a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab80d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab810 mov dword ptr [eax*4 + 0x120dee00], ecx */
  w32((uint32_t)(EAX*4 + 0x120dee00), (ECX));
L_120ab817:;
  /* 120ab817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120ab81a:;
  /* 120ab81a mov esp, ebp */
  ESP = (EBP);
  /* 120ab81c pop ebp */
  EBP = (pop32());
  /* 120ab81d ret  */
  ESPCHK(0x120ab7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b820 @ 0x120ab820 (28 bytes, 11 insns) */
void f_120ab820(void) {
  FTRACE(0x120ab820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab820 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab821 mov ebp, esp */
  EBP = (ESP);
  /* 120ab823 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab824 mov eax, dword ptr [0x120e2c28] */
  EAX = (r32((uint32_t)(0x120e2c28)));
  /* 120ab829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ab82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab82f mov dword ptr [0x120e2c28], ecx */
  w32((uint32_t)(0x120e2c28), (ECX));
  /* 120ab835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ab838 mov esp, ebp */
  ESP = (EBP);
  /* 120ab83a pop ebp */
  EBP = (pop32());
  /* 120ab83b ret  */
  ESPCHK(0x120ab820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x120ab840 (912 bytes, 248 insns) */
void f_120ab840(void) {
  FTRACE(0x120ab840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ab840 push ebp */
  push32((uint32_t)(EBP));
  /* 120ab841 mov ebp, esp */
  EBP = (ESP);
  /* 120ab843 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 120ab848 call 0x120b1580 */
  push32(0x120ab84du); f_120b1580();
  /* 120ab84d push edi */
  push32((uint32_t)(EDI));
  /* 120ab84e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 120ab855 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 120ab85a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab85c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 120ab862 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120ab864 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 120ab866 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 120ab867 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 120ab86e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 120ab873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab875 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 120ab87b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120ab87d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 120ab87f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 120ab880 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 120ab887 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 120ab88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ab88e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 120ab894 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120ab896 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 120ab898 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 120ab899 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 120ab89c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 120ab8a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab8a6 jl 0x120ab8ae */
  if ((C.sf!=C.of)) goto L_120ab8ae;
  /* 120ab8a8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab8ac jl 0x120ab8b6 */
  if ((C.sf!=C.of)) goto L_120ab8b6;
L_120ab8ae:;
  /* 120ab8ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab8b1 jmp 0x120abbcb */
  goto L_120abbcb;
L_120ab8b6:;
  /* 120ab8b6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab8ba jne 0x120ab960 */
  if (!C.zf) goto L_120ab960;
  /* 120ab8c0 push 0x120dedf0 */
  push32((uint32_t)(0x120dedf0u));
  /* 120ab8c5 call dword ptr [0x120e344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e344c))), 0x120ab8cbu);
  /* 120ab8cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ab8cd jle 0x120ab960 */
  if ((C.zf||C.sf!=C.of)) goto L_120ab960;
  /* 120ab8d3 cmp dword ptr [0x120e110c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e110c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab8da jne 0x120ab91e */
  if (!C.zf) goto L_120ab91e;
  /* 120ab8dc push 0x120db4b8 */
  push32((uint32_t)(0x120db4b8u));
  /* 120ab8e1 call dword ptr [0x120e3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3448))), 0x120ab8e7u);
  /* 120ab8e7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 120ab8ed cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab8f4 je 0x120ab916 */
  if (C.zf) goto L_120ab916;
  /* 120ab8f6 push 0x120db4ac */
  push32((uint32_t)(0x120db4acu));
  /* 120ab8fb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 120ab901 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab902 call dword ptr [0x120e3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3444))), 0x120ab908u);
  /* 120ab908 mov dword ptr [0x120e110c], eax */
  w32((uint32_t)(0x120e110c), (EAX));
  /* 120ab90d cmp dword ptr [0x120e110c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e110c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab914 jne 0x120ab91e */
  if (!C.zf) goto L_120ab91e;
L_120ab916:;
  /* 120ab916 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab919 jmp 0x120abbcb */
  goto L_120abbcb;
L_120ab91e:;
  /* 120ab91e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ab921 push edx */
  push32((uint32_t)(EDX));
  /* 120ab922 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ab925 push eax */
  push32((uint32_t)(EAX));
  /* 120ab926 push 0x120db478 */
  push32((uint32_t)(0x120db478u));
  /* 120ab92b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 120ab931 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab932 call dword ptr [0x120e110c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e110c))), 0x120ab938u);
  /* 120ab938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab93b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 120ab941 push edx */
  push32((uint32_t)(EDX));
  /* 120ab942 call dword ptr [0x120e3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3440))), 0x120ab948u);
  /* 120ab948 push 0x120dedf0 */
  push32((uint32_t)(0x120dedf0u));
  /* 120ab94d call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120ab953u);
  /* 120ab953 call 0x120ab730 */
  push32(0x120ab958u); f_120ab730();
  /* 120ab958 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ab95b jmp 0x120abbcb */
  goto L_120abbcb;
L_120ab960:;
  /* 120ab960 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab964 je 0x120ab99d */
  if (C.zf) goto L_120ab99d;
  /* 120ab966 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 120ab96c push eax */
  push32((uint32_t)(EAX));
  /* 120ab96d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ab970 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab971 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 120ab976 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 120ab97c push edx */
  push32((uint32_t)(EDX));
  /* 120ab97d call 0x120b1480 */
  push32(0x120ab982u); f_120b1480();
  /* 120ab982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ab987 jge 0x120ab99d */
  if ((C.sf==C.of)) goto L_120ab99d;
  /* 120ab989 push 0x120db44c */
  push32((uint32_t)(0x120db44cu));
  /* 120ab98e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 120ab994 push eax */
  push32((uint32_t)(EAX));
  /* 120ab995 call 0x120b1390 */
  push32(0x120ab99au); f_120b1390();
  /* 120ab99a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ab99d:;
  /* 120ab99d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab9a1 jne 0x120ab9d5 */
  if (!C.zf) goto L_120ab9d5;
  /* 120ab9a3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab9a7 je 0x120ab9b5 */
  if (C.zf) goto L_120ab9b5;
  /* 120ab9a9 mov dword ptr [ebp - 0x3028], 0x120db438 */
  w32((uint32_t)(EBP + -0x3028), (0x120db438u));
  /* 120ab9b3 jmp 0x120ab9bf */
  goto L_120ab9bf;
L_120ab9b5:;
  /* 120ab9b5 mov dword ptr [ebp - 0x3028], 0x120db424 */
  w32((uint32_t)(EBP + -0x3028), (0x120db424u));
L_120ab9bf:;
  /* 120ab9bf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 120ab9c5 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab9c6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 120ab9cc push edx */
  push32((uint32_t)(EDX));
  /* 120ab9cd call 0x120b1390 */
  push32(0x120ab9d2u); f_120b1390();
  /* 120ab9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ab9d5:;
  /* 120ab9d5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 120ab9db push eax */
  push32((uint32_t)(EAX));
  /* 120ab9dc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 120ab9e2 push ecx */
  push32((uint32_t)(ECX));
  /* 120ab9e3 call 0x120b13a0 */
  push32(0x120ab9e8u); f_120b13a0();
  /* 120ab9e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ab9eb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ab9ef jne 0x120aba2a */
  if (!C.zf) goto L_120aba2a;
  /* 120ab9f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ab9f4 mov eax, dword ptr [edx*4 + 0x120dedf4] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120dedf4)));
  /* 120ab9fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120ab9fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aba00 je 0x120aba16 */
  if (C.zf) goto L_120aba16;
  /* 120aba02 push 0x120db420 */
  push32((uint32_t)(0x120db420u));
  /* 120aba07 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 120aba0d push ecx */
  push32((uint32_t)(ECX));
  /* 120aba0e call 0x120b13a0 */
  push32(0x120aba13u); f_120b13a0();
  /* 120aba13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aba16:;
  /* 120aba16 push 0x120db41c */
  push32((uint32_t)(0x120db41cu));
  /* 120aba1b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 120aba21 push edx */
  push32((uint32_t)(EDX));
  /* 120aba22 call 0x120b13a0 */
  push32(0x120aba27u); f_120b13a0();
  /* 120aba27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aba2a:;
  /* 120aba2a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aba2e je 0x120aba72 */
  if (C.zf) goto L_120aba72;
  /* 120aba30 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 120aba36 push eax */
  push32((uint32_t)(EAX));
  /* 120aba37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aba3a push ecx */
  push32((uint32_t)(ECX));
  /* 120aba3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aba3e push edx */
  push32((uint32_t)(EDX));
  /* 120aba3f push 0x120db410 */
  push32((uint32_t)(0x120db410u));
  /* 120aba44 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120aba49 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 120aba4f push eax */
  push32((uint32_t)(EAX));
  /* 120aba50 call 0x120b1290 */
  push32(0x120aba55u); f_120b1290();
  /* 120aba55 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aba58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aba5a jge 0x120aba70 */
  if ((C.sf==C.of)) goto L_120aba70;
  /* 120aba5c push 0x120db44c */
  push32((uint32_t)(0x120db44cu));
  /* 120aba61 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 120aba67 push ecx */
  push32((uint32_t)(ECX));
  /* 120aba68 call 0x120b1390 */
  push32(0x120aba6du); f_120b1390();
  /* 120aba6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aba70:;
  /* 120aba70 jmp 0x120aba88 */
  goto L_120aba88;
L_120aba72:;
  /* 120aba72 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 120aba78 push edx */
  push32((uint32_t)(EDX));
  /* 120aba79 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 120aba7f push eax */
  push32((uint32_t)(EAX));
  /* 120aba80 call 0x120b1390 */
  push32(0x120aba85u); f_120b1390();
  /* 120aba85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aba88:;
  /* 120aba88 cmp dword ptr [0x120e2c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aba8f je 0x120abacc */
  if (C.zf) goto L_120abacc;
  /* 120aba91 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 120aba97 push ecx */
  push32((uint32_t)(ECX));
  /* 120aba98 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 120aba9e push edx */
  push32((uint32_t)(EDX));
  /* 120aba9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abaa2 push eax */
  push32((uint32_t)(EAX));
  /* 120abaa3 call dword ptr [0x120e2c28] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e2c28))), 0x120abaa9u);
  /* 120abaa9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abaac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120abaae je 0x120abacc */
  if (C.zf) goto L_120abacc;
  /* 120abab0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abab4 jne 0x120abac1 */
  if (!C.zf) goto L_120abac1;
  /* 120abab6 push 0x120dedf0 */
  push32((uint32_t)(0x120dedf0u));
  /* 120ababb call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120abac1u);
L_120abac1:;
  /* 120abac1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 120abac7 jmp 0x120abbcb */
  goto L_120abbcb;
L_120abacc:;
  /* 120abacc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abacf mov edx, dword ptr [ecx*4 + 0x120dedf4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120dedf4)));
  /* 120abad6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120abad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120abadb je 0x120abb1b */
  if (C.zf) goto L_120abb1b;
  /* 120abadd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abae0 cmp dword ptr [eax*4 + 0x120dee00], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x120dee00))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abae8 je 0x120abb1b */
  if (C.zf) goto L_120abb1b;
  /* 120abaea push 0 */
  push32((uint32_t)(0x0u));
  /* 120abaec lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 120abaf2 push ecx */
  push32((uint32_t)(ECX));
  /* 120abaf3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 120abaf9 push edx */
  push32((uint32_t)(EDX));
  /* 120abafa call 0x120b1210 */
  push32(0x120abaffu); f_120b1210();
  /* 120abaff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abb02 push eax */
  push32((uint32_t)(EAX));
  /* 120abb03 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 120abb09 push eax */
  push32((uint32_t)(EAX));
  /* 120abb0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abb0d mov edx, dword ptr [ecx*4 + 0x120dee00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120dee00)));
  /* 120abb14 push edx */
  push32((uint32_t)(EDX));
  /* 120abb15 call dword ptr [0x120e332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e332c))), 0x120abb1bu);
L_120abb1b:;
  /* 120abb1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abb1e mov ecx, dword ptr [eax*4 + 0x120dedf4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120dedf4)));
  /* 120abb25 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120abb28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120abb2a je 0x120abb39 */
  if (C.zf) goto L_120abb39;
  /* 120abb2c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 120abb32 push edx */
  push32((uint32_t)(EDX));
  /* 120abb33 call dword ptr [0x120e3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3440))), 0x120abb39u);
L_120abb39:;
  /* 120abb39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abb3c mov ecx, dword ptr [eax*4 + 0x120dedf4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120dedf4)));
  /* 120abb43 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120abb46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120abb48 je 0x120abbb8 */
  if (C.zf) goto L_120abbb8;
  /* 120abb4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abb4e je 0x120abb6d */
  if (C.zf) goto L_120abb6d;
  /* 120abb50 push 0xa */
  push32((uint32_t)(0xau));
  /* 120abb52 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 120abb58 push edx */
  push32((uint32_t)(EDX));
  /* 120abb59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120abb5c push eax */
  push32((uint32_t)(EAX));
  /* 120abb5d call 0x120b0f20 */
  push32(0x120abb62u); f_120b0f20();
  /* 120abb62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abb65 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 120abb6b jmp 0x120abb77 */
  goto L_120abb77;
L_120abb6d:;
  /* 120abb6d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_120abb77:;
  /* 120abb77 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 120abb7d push ecx */
  push32((uint32_t)(ECX));
  /* 120abb7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120abb81 push edx */
  push32((uint32_t)(EDX));
  /* 120abb82 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 120abb88 push eax */
  push32((uint32_t)(EAX));
  /* 120abb89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120abb8c push ecx */
  push32((uint32_t)(ECX));
  /* 120abb8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abb90 push edx */
  push32((uint32_t)(EDX));
  /* 120abb91 call 0x120abbd0 */
  push32(0x120abb96u); f_120abbd0();
  /* 120abb96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abb99 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 120abb9f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abba3 jne 0x120abbb0 */
  if (!C.zf) goto L_120abbb0;
  /* 120abba5 push 0x120dedf0 */
  push32((uint32_t)(0x120dedf0u));
  /* 120abbaa call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120abbb0u);
L_120abbb0:;
  /* 120abbb0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 120abbb6 jmp 0x120abbcb */
  goto L_120abbcb;
L_120abbb8:;
  /* 120abbb8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abbbc jne 0x120abbc9 */
  if (!C.zf) goto L_120abbc9;
  /* 120abbbe push 0x120dedf0 */
  push32((uint32_t)(0x120dedf0u));
  /* 120abbc3 call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120abbc9u);
L_120abbc9:;
  /* 120abbc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120abbcb:;
  /* 120abbcb pop edi */
  EDI = (pop32());
  /* 120abbcc mov esp, ebp */
  ESP = (EBP);
  /* 120abbce pop ebp */
  EBP = (pop32());
  /* 120abbcf ret  */
  ESPCHK(0x120ab840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x120abbd0 (780 bytes, 197 insns) */
void f_120abbd0(void) {
  FTRACE(0x120abbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120abbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120abbd1 mov ebp, esp */
  EBP = (ESP);
  /* 120abbd3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 120abbd8 call 0x120b1580 */
  push32(0x120abbddu); f_120b1580();
L_120abbdd:;
  /* 120abbdd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abbe1 jne 0x120abc08 */
  if (!C.zf) goto L_120abc08;
  /* 120abbe3 push 0x120db608 */
  push32((uint32_t)(0x120db608u));
  /* 120abbe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120abbea push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 120abbef push 0x120db5fc */
  push32((uint32_t)(0x120db5fcu));
  /* 120abbf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120abbf6 call 0x120ab840 */
  push32(0x120abbfbu); f_120ab840();
  /* 120abbfb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abbfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abc01 jne 0x120abc08 */
  if (!C.zf) goto L_120abc08;
  /* 120abc03 call 0x120ab730 */
  push32(0x120abc08u); f_120ab730();
L_120abc08:;
  /* 120abc08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120abc0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120abc0c jne 0x120abbdd */
  if (!C.zf) goto L_120abbdd;
  /* 120abc0e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120abc13 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 120abc19 push ecx */
  push32((uint32_t)(ECX));
  /* 120abc1a push 0 */
  push32((uint32_t)(0x0u));
  /* 120abc1c call dword ptr [0x120e343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e343c))), 0x120abc22u);
  /* 120abc22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120abc24 jne 0x120abc3a */
  if (!C.zf) goto L_120abc3a;
  /* 120abc26 push 0x120db5e4 */
  push32((uint32_t)(0x120db5e4u));
  /* 120abc2b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 120abc31 push edx */
  push32((uint32_t)(EDX));
  /* 120abc32 call 0x120b1390 */
  push32(0x120abc37u); f_120b1390();
  /* 120abc37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120abc3a:;
  /* 120abc3a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 120abc40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120abc43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120abc46 push ecx */
  push32((uint32_t)(ECX));
  /* 120abc47 call 0x120b1210 */
  push32(0x120abc4cu); f_120b1210();
  /* 120abc4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abc4f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abc52 jbe 0x120abc7d */
  if ((C.cf||C.zf)) goto L_120abc7d;
  /* 120abc54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120abc57 push edx */
  push32((uint32_t)(EDX));
  /* 120abc58 call 0x120b1210 */
  push32(0x120abc5du); f_120b1210();
  /* 120abc5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abc60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120abc63 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 120abc67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120abc6a push 3 */
  push32((uint32_t)(0x3u));
  /* 120abc6c push 0x120db5e0 */
  push32((uint32_t)(0x120db5e0u));
  /* 120abc71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120abc74 push eax */
  push32((uint32_t)(EAX));
  /* 120abc75 call 0x120b1c00 */
  push32(0x120abc7au); f_120b1c00();
  /* 120abc7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120abc7d:;
  /* 120abc7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120abc80 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 120abc86 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abc8d je 0x120abcd8 */
  if (C.zf) goto L_120abcd8;
  /* 120abc8f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 120abc95 push edx */
  push32((uint32_t)(EDX));
  /* 120abc96 call 0x120b1210 */
  push32(0x120abc9bu); f_120b1210();
  /* 120abc9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abc9e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abca1 jbe 0x120abcd8 */
  if ((C.cf||C.zf)) goto L_120abcd8;
  /* 120abca3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 120abca9 push eax */
  push32((uint32_t)(EAX));
  /* 120abcaa call 0x120b1210 */
  push32(0x120abcafu); f_120b1210();
  /* 120abcaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abcb2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 120abcb8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 120abcbc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 120abcc2 push 3 */
  push32((uint32_t)(0x3u));
  /* 120abcc4 push 0x120db5e0 */
  push32((uint32_t)(0x120db5e0u));
  /* 120abcc9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 120abccf push eax */
  push32((uint32_t)(EAX));
  /* 120abcd0 call 0x120b1c00 */
  push32(0x120abcd5u); f_120b1c00();
  /* 120abcd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120abcd8:;
  /* 120abcd8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abcdc jne 0x120abcea */
  if (!C.zf) goto L_120abcea;
  /* 120abcde mov dword ptr [ebp - 0x1114], 0x120db56c */
  w32((uint32_t)(EBP + -0x1114), (0x120db56cu));
  /* 120abce8 jmp 0x120abcf4 */
  goto L_120abcf4;
L_120abcea:;
  /* 120abcea mov dword ptr [ebp - 0x1114], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1114), (0x120db2ccu));
L_120abcf4:;
  /* 120abcf4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120abcf7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120abcfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120abcfc je 0x120abd09 */
  if (C.zf) goto L_120abd09;
  /* 120abcfe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120abd01 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 120abd07 jmp 0x120abd13 */
  goto L_120abd13;
L_120abd09:;
  /* 120abd09 mov dword ptr [ebp - 0x1118], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1118), (0x120db2ccu));
L_120abd13:;
  /* 120abd13 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120abd16 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120abd19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120abd1b je 0x120abd2f */
  if (C.zf) goto L_120abd2f;
  /* 120abd1d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abd21 jne 0x120abd2f */
  if (!C.zf) goto L_120abd2f;
  /* 120abd23 mov dword ptr [ebp - 0x111c], 0x120db55c */
  w32((uint32_t)(EBP + -0x111c), (0x120db55cu));
  /* 120abd2d jmp 0x120abd39 */
  goto L_120abd39;
L_120abd2f:;
  /* 120abd2f mov dword ptr [ebp - 0x111c], 0x120db2cc */
  w32((uint32_t)(EBP + -0x111c), (0x120db2ccu));
L_120abd39:;
  /* 120abd39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120abd3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120abd3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120abd41 je 0x120abd4f */
  if (C.zf) goto L_120abd4f;
  /* 120abd43 mov dword ptr [ebp - 0x1120], 0x120db558 */
  w32((uint32_t)(EBP + -0x1120), (0x120db558u));
  /* 120abd4d jmp 0x120abd59 */
  goto L_120abd59;
L_120abd4f:;
  /* 120abd4f mov dword ptr [ebp - 0x1120], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1120), (0x120db2ccu));
L_120abd59:;
  /* 120abd59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abd5d je 0x120abd6a */
  if (C.zf) goto L_120abd6a;
  /* 120abd5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120abd62 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 120abd68 jmp 0x120abd74 */
  goto L_120abd74;
L_120abd6a:;
  /* 120abd6a mov dword ptr [ebp - 0x1124], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1124), (0x120db2ccu));
L_120abd74:;
  /* 120abd74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abd78 je 0x120abd86 */
  if (C.zf) goto L_120abd86;
  /* 120abd7a mov dword ptr [ebp - 0x1128], 0x120db550 */
  w32((uint32_t)(EBP + -0x1128), (0x120db550u));
  /* 120abd84 jmp 0x120abd90 */
  goto L_120abd90;
L_120abd86:;
  /* 120abd86 mov dword ptr [ebp - 0x1128], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1128), (0x120db2ccu));
L_120abd90:;
  /* 120abd90 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abd94 je 0x120abda1 */
  if (C.zf) goto L_120abda1;
  /* 120abd96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120abd99 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 120abd9f jmp 0x120abdab */
  goto L_120abdab;
L_120abda1:;
  /* 120abda1 mov dword ptr [ebp - 0x112c], 0x120db2cc */
  w32((uint32_t)(EBP + -0x112c), (0x120db2ccu));
L_120abdab:;
  /* 120abdab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abdaf je 0x120abdbd */
  if (C.zf) goto L_120abdbd;
  /* 120abdb1 mov dword ptr [ebp - 0x1130], 0x120db548 */
  w32((uint32_t)(EBP + -0x1130), (0x120db548u));
  /* 120abdbb jmp 0x120abdc7 */
  goto L_120abdc7;
L_120abdbd:;
  /* 120abdbd mov dword ptr [ebp - 0x1130], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1130), (0x120db2ccu));
L_120abdc7:;
  /* 120abdc7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abdce je 0x120abdde */
  if (C.zf) goto L_120abdde;
  /* 120abdd0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 120abdd6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 120abddc jmp 0x120abde8 */
  goto L_120abde8;
L_120abdde:;
  /* 120abdde mov dword ptr [ebp - 0x1134], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1134), (0x120db2ccu));
L_120abde8:;
  /* 120abde8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abdef je 0x120abdfd */
  if (C.zf) goto L_120abdfd;
  /* 120abdf1 mov dword ptr [ebp - 0x1138], 0x120db53c */
  w32((uint32_t)(EBP + -0x1138), (0x120db53cu));
  /* 120abdfb jmp 0x120abe07 */
  goto L_120abe07;
L_120abdfd:;
  /* 120abdfd mov dword ptr [ebp - 0x1138], 0x120db2cc */
  w32((uint32_t)(EBP + -0x1138), (0x120db2ccu));
L_120abe07:;
  /* 120abe07 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 120abe0d push edx */
  push32((uint32_t)(EDX));
  /* 120abe0e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 120abe14 push eax */
  push32((uint32_t)(EAX));
  /* 120abe15 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 120abe1b push ecx */
  push32((uint32_t)(ECX));
  /* 120abe1c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 120abe22 push edx */
  push32((uint32_t)(EDX));
  /* 120abe23 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 120abe29 push eax */
  push32((uint32_t)(EAX));
  /* 120abe2a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 120abe30 push ecx */
  push32((uint32_t)(ECX));
  /* 120abe31 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 120abe37 push edx */
  push32((uint32_t)(EDX));
  /* 120abe38 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 120abe3e push eax */
  push32((uint32_t)(EAX));
  /* 120abe3f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 120abe45 push ecx */
  push32((uint32_t)(ECX));
  /* 120abe46 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 120abe4c push edx */
  push32((uint32_t)(EDX));
  /* 120abe4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120abe50 push eax */
  push32((uint32_t)(EAX));
  /* 120abe51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120abe54 mov edx, dword ptr [ecx*4 + 0x120dee0c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120dee0c)));
  /* 120abe5b push edx */
  push32((uint32_t)(EDX));
  /* 120abe5c push 0x120db4e8 */
  push32((uint32_t)(0x120db4e8u));
  /* 120abe61 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120abe66 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 120abe6c push eax */
  push32((uint32_t)(EAX));
  /* 120abe6d call 0x120b1290 */
  push32(0x120abe72u); f_120b1290();
  /* 120abe72 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abe75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120abe77 jge 0x120abe8d */
  if ((C.sf==C.of)) goto L_120abe8d;
  /* 120abe79 push 0x120db44c */
  push32((uint32_t)(0x120db44cu));
  /* 120abe7e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 120abe84 push ecx */
  push32((uint32_t)(ECX));
  /* 120abe85 call 0x120b1390 */
  push32(0x120abe8au); f_120b1390();
  /* 120abe8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120abe8d:;
  /* 120abe8d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 120abe92 push 0x120db4c4 */
  push32((uint32_t)(0x120db4c4u));
  /* 120abe97 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 120abe9d push edx */
  push32((uint32_t)(EDX));
  /* 120abe9e call 0x120b1b40 */
  push32(0x120abea3u); f_120b1b40();
  /* 120abea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abea6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 120abeac cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abeb3 jne 0x120abec6 */
  if (!C.zf) goto L_120abec6;
  /* 120abeb5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 120abeb7 call 0x120b1880 */
  push32(0x120abebcu); f_120b1880();
  /* 120abebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120abebf push 3 */
  push32((uint32_t)(0x3u));
  /* 120abec1 call 0x120afcf0 */
  push32(0x120abec6u); f_120afcf0();
L_120abec6:;
  /* 120abec6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120abecd jne 0x120abed6 */
  if (!C.zf) goto L_120abed6;
  /* 120abecf mov eax, 1 */
  EAX = (0x1u);
  /* 120abed4 jmp 0x120abed8 */
  goto L_120abed8;
L_120abed6:;
  /* 120abed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120abed8:;
  /* 120abed8 mov esp, ebp */
  ESP = (EBP);
  /* 120abeda pop ebp */
  EBP = (pop32());
  /* 120abedb ret  */
  ESPCHK(0x120abbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0dc @ 0x120ac0dc (25 bytes, 7 insns) */
void f_120ac0dc(void) {
  FTRACE(0x120ac0dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac0dc test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 120ac0e1 je 0x120ac0e9 */
  if (C.zf) goto L_120ac0e9;
  /* 120ac0e3 mov eax, 7 */
  EAX = (0x7u);
  /* 120ac0e8 ret  */
  ESPCHK(0x120ac0dcu, _esp0);
  ESP += 4; return;
L_120ac0e9:;
  /* 120ac0e9 fadd qword ptr [0x120db620] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x120db620)));
  /* 120ac0ef mov eax, 1 */
  EAX = (0x1u);
  /* 120ac0f4 ret  */
  ESPCHK(0x120ac0dcu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x120ac0f5 (67 bytes, 21 insns) */
void f_120ac0f5(void) {
  FTRACE(0x120ac0f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac0f5 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac0f8 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 120ac0fd cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac102 je 0x120ac107 */
  if (C.zf) goto L_120ac107;
  /* 120ac104 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 120ac106 ret  */
  ESPCHK(0x120ac0f5u, _esp0);
  ESP += 4; return;
L_120ac107:;
  /* 120ac107 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac10a sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac10d or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 120ac112 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 120ac116 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac119 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 120ac11b shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 120ac11f shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 120ac122 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 120ac126 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 120ac129 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 120ac12c add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac12f test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 120ac134 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac137 ret  */
  ESPCHK(0x120ac0f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c138 @ 0x120ac138 (22 bytes, 7 insns) */
void f_120ac138(void) {
  FTRACE(0x120ac138u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac138 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120ac13c and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 120ac141 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac146 je 0x120ac149 */
  if (C.zf) goto L_120ac149;
  /* 120ac148 ret  */
  ESPCHK(0x120ac138u, _esp0);
  ESP += 4; return;
L_120ac149:;
  /* 120ac149 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120ac14d ret  */
  ESPCHK(0x120ac138u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x120ac15b (42 bytes, 16 insns) */
void f_120ac15b(void) {
  FTRACE(0x120ac15bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac15b mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 120ac15f cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120ac163 je 0x120ac183 */
  if (C.zf) goto L_120ac183;
  /* 120ac165 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 120ac169 je 0x120ac180 */
  if (C.zf) goto L_120ac180;
  /* 120ac16b wait  */
  /* wait (no observable integer/reg state) */
  /* 120ac16c fnstsw ax */
  AX = fpu_status();
  /* 120ac16e and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 120ac172 je 0x120ac180 */
  if (C.zf) goto L_120ac180;
  /* 120ac174 mov eax, 8 */
  EAX = (0x8u);
  /* 120ac179 call 0x120ac257 */
  push32(0x120ac17eu); f_120ac257();
  /* 120ac17e pop edx */
  EDX = (pop32());
  /* 120ac17f ret  */
  ESPCHK(0x120ac15bu, _esp0);
  ESP += 4; return;
L_120ac180:;
  /* 120ac180 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_120ac183:;
  /* 120ac183 pop edx */
  EDX = (pop32());
  /* 120ac184 ret  */
  ESPCHK(0x120ac15bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c240 @ 0x120ac240 (23 bytes, 9 insns) */
void f_120ac240(void) {
  FTRACE(0x120ac240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac240 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac241 mov ebp, esp */
  EBP = (ESP);
  /* 120ac243 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac246 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120ac249 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ac24c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120ac24f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120ac252 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ac255 jmp 0x120ac260 */
  jmp_ind(0x120ac260u); return;
}

/* __startOneArgErrorHandling @ 0x120ac257 (60 bytes, 23 insns) */
void f_120ac257(void) {
  FTRACE(0x120ac257u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac257 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac258 mov ebp, esp */
  EBP = (ESP);
  /* 120ac25a add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac25d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120ac260 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 120ac263 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 120ac266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac269 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ac26c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120ac26f mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120ac272 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120ac275 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 120ac278 push eax */
  push32((uint32_t)(EAX));
  /* 120ac279 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac27a push edx */
  push32((uint32_t)(EDX));
  /* 120ac27b call 0x120b1d00 */
  push32(0x120ac280u); f_120b1d00();
  /* 120ac280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac283 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 120ac286 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120ac28c je 0x120ac291 */
  if (C.zf) goto L_120ac291;
  /* 120ac28e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_120ac291:;
  /* 120ac291 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120ac292 ret  */
  ESPCHK(0x120ac257u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x120ac2a0 (23 bytes, 8 insns) */
void f_120ac2a0(void) {
  FTRACE(0x120ac2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac2a1 mov ebp, esp */
  EBP = (ESP);
  /* 120ac2a3 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 120ac2a8 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 120ac2ad call 0x120b1f10 */
  push32(0x120ac2b2u); f_120b1f10();
  /* 120ac2b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac2b5 pop ebp */
  EBP = (pop32());
  /* 120ac2b6 ret  */
  ESPCHK(0x120ac2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2c0 @ 0x120ac2c0 (94 bytes, 30 insns) */
void f_120ac2c0(void) {
  FTRACE(0x120ac2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac2c1 mov ebp, esp */
  EBP = (ESP);
  /* 120ac2c3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac2c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120ac2c7 push esi */
  push32((uint32_t)(ESI));
  /* 120ac2c8 push edi */
  push32((uint32_t)(EDI));
  /* 120ac2c9 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 120ac2d0 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 120ac2d7 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 120ac2de mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 120ac2e5 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 120ac2e8 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 120ac2eb fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 120ac2ee fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 120ac2f1 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 120ac2f4 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 120ac2f7 fcomp qword ptr [0x120db668] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db668)));
  (void)fpu_pop();
  /* 120ac2fd fnstsw ax */
  AX = fpu_status();
  /* 120ac2ff test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 120ac302 jne 0x120ac30d */
  if (!C.zf) goto L_120ac30d;
  /* 120ac304 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 120ac30b jmp 0x120ac314 */
  goto L_120ac314;
L_120ac30d:;
  /* 120ac30d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_120ac314:;
  /* 120ac314 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120ac317 pop edi */
  EDI = (pop32());
  /* 120ac318 pop esi */
  ESI = (pop32());
  /* 120ac319 pop ebx */
  EBX = (pop32());
  /* 120ac31a mov esp, ebp */
  ESP = (EBP);
  /* 120ac31c pop ebp */
  EBP = (pop32());
  /* 120ac31d ret  */
  ESPCHK(0x120ac2c0u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x120ac320 (66 bytes, 22 insns) */
void f_120ac320(void) {
  FTRACE(0x120ac320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac320 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac321 mov ebp, esp */
  EBP = (ESP);
  /* 120ac323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac326 push 0x120db68c */
  push32((uint32_t)(0x120db68cu));
  /* 120ac32b call dword ptr [0x120e3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3450))), 0x120ac331u);
  /* 120ac331 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac334 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac338 je 0x120ac359 */
  if (C.zf) goto L_120ac359;
  /* 120ac33a push 0x120db670 */
  push32((uint32_t)(0x120db670u));
  /* 120ac33f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac342 push eax */
  push32((uint32_t)(EAX));
  /* 120ac343 call dword ptr [0x120e3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3444))), 0x120ac349u);
  /* 120ac349 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120ac34c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac350 je 0x120ac359 */
  if (C.zf) goto L_120ac359;
  /* 120ac352 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ac354 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x120ac357u);
  /* 120ac357 jmp 0x120ac35e */
  goto L_120ac35e;
L_120ac359:;
  /* 120ac359 call 0x120ac2c0 */
  push32(0x120ac35eu); f_120ac2c0();
L_120ac35e:;
  /* 120ac35e mov esp, ebp */
  ESP = (EBP);
  /* 120ac360 pop ebp */
  EBP = (pop32());
  /* 120ac361 ret  */
  ESPCHK(0x120ac320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c370 @ 0x120ac370 (168 bytes, 59 insns) */
void f_120ac370(void) {
  FTRACE(0x120ac370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac370 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac371 mov ebp, esp */
  EBP = (ESP);
  /* 120ac373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac379 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac37c push ecx */
  push32((uint32_t)(ECX));
  /* 120ac37d call 0x120b23f0 */
  push32(0x120ac382u); f_120b23f0();
  /* 120ac382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac385 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac388 je 0x120ac3d0 */
  if (C.zf) goto L_120ac3d0;
L_120ac38a:;
  /* 120ac38a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac38d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac390 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120ac393 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac39a jle 0x120ac3b2 */
  if ((C.zf||C.sf!=C.of)) goto L_120ac3b2;
  /* 120ac39c push 4 */
  push32((uint32_t)(0x4u));
  /* 120ac39e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac3a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac3a4 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac3a5 call 0x120b2320 */
  push32(0x120ac3aau); f_120b2320();
  /* 120ac3aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac3ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ac3b0 jmp 0x120ac3ca */
  goto L_120ac3ca;
L_120ac3b2:;
  /* 120ac3b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac3b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120ac3b8 mov ecx, dword ptr [0x120df01c] */
  ECX = (r32((uint32_t)(0x120df01c)));
  /* 120ac3be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ac3c0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 120ac3c4 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120ac3c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120ac3ca:;
  /* 120ac3ca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac3ce jne 0x120ac38a */
  if (!C.zf) goto L_120ac38a;
L_120ac3d0:;
  /* 120ac3d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac3d3 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120ac3d5 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 120ac3d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac3db mov al, byte ptr [0x120df014] */
  AL = (r8((uint32_t)(0x120df014)));
  /* 120ac3e0 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 120ac3e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac3e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac3e8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_120ac3eb:;
  /* 120ac3eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac3ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120ac3f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 120ac3f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac3f6 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 120ac3f9 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 120ac3fb mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 120ac3fe mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 120ac401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac404 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120ac407 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac40a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac40d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120ac410 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ac412 jne 0x120ac3eb */
  if (!C.zf) goto L_120ac3eb;
  /* 120ac414 mov esp, ebp */
  ESP = (EBP);
  /* 120ac416 pop ebp */
  EBP = (pop32());
  /* 120ac417 ret  */
  ESPCHK(0x120ac370u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x120ac420 (215 bytes, 78 insns) */
void f_120ac420(void) {
  FTRACE(0x120ac420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac420 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac421 mov ebp, esp */
  EBP = (ESP);
  /* 120ac423 push ecx */
  push32((uint32_t)(ECX));
L_120ac424:;
  /* 120ac424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac427 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac42a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ac42c je 0x120ac44a */
  if (C.zf) goto L_120ac44a;
  /* 120ac42e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac431 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120ac434 movsx ecx, byte ptr [0x120df014] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120df014))));
  /* 120ac43b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac43d je 0x120ac44a */
  if (C.zf) goto L_120ac44a;
  /* 120ac43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac442 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac445 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120ac448 jmp 0x120ac424 */
  goto L_120ac424;
L_120ac44a:;
  /* 120ac44a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac44d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac450 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac453 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac456 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120ac459 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ac45b je 0x120ac4f3 */
  if (C.zf) goto L_120ac4f3;
L_120ac461:;
  /* 120ac461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac464 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac467 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ac469 je 0x120ac48c */
  if (C.zf) goto L_120ac48c;
  /* 120ac46b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac46e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120ac471 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac474 je 0x120ac48c */
  if (C.zf) goto L_120ac48c;
  /* 120ac476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac479 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120ac47c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac47f je 0x120ac48c */
  if (C.zf) goto L_120ac48c;
  /* 120ac481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac484 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac487 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120ac48a jmp 0x120ac461 */
  goto L_120ac461;
L_120ac48c:;
  /* 120ac48c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac48f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ac492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac495 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac498 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_120ac49b:;
  /* 120ac49b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac49e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac4a1 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac4a4 jne 0x120ac4b1 */
  if (!C.zf) goto L_120ac4b1;
  /* 120ac4a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac4a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac4ac mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120ac4af jmp 0x120ac49b */
  goto L_120ac49b;
L_120ac4b1:;
  /* 120ac4b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac4b4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac4b7 movsx edx, byte ptr [0x120df014] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120df014))));
  /* 120ac4be cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac4c0 jne 0x120ac4cb */
  if (!C.zf) goto L_120ac4cb;
  /* 120ac4c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac4c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac4c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120ac4cb:;
  /* 120ac4cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac4ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac4d1 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120ac4d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac4d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac4da mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120ac4dc mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120ac4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac4e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120ac4e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac4e7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac4ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ac4ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ac4ef je 0x120ac4f3 */
  if (C.zf) goto L_120ac4f3;
  /* 120ac4f1 jmp 0x120ac4cb */
  goto L_120ac4cb;
L_120ac4f3:;
  /* 120ac4f3 mov esp, ebp */
  ESP = (EBP);
  /* 120ac4f5 pop ebp */
  EBP = (pop32());
  /* 120ac4f6 ret  */
  ESPCHK(0x120ac420u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x120ac500 (45 bytes, 16 insns) */
void f_120ac500(void) {
  FTRACE(0x120ac500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac500 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac501 mov ebp, esp */
  EBP = (ESP);
  /* 120ac503 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac507 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 120ac509 fcomp qword ptr [0x120db698] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x120db698)));
  (void)fpu_pop();
  /* 120ac50f fnstsw ax */
  AX = fpu_status();
  /* 120ac511 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 120ac514 jne 0x120ac51f */
  if (!C.zf) goto L_120ac51f;
  /* 120ac516 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120ac51d jmp 0x120ac526 */
  goto L_120ac526;
L_120ac51f:;
  /* 120ac51f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120ac526:;
  /* 120ac526 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac529 mov esp, ebp */
  ESP = (EBP);
  /* 120ac52b pop ebp */
  EBP = (pop32());
  /* 120ac52c ret  */
  ESPCHK(0x120ac500u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x120ac530 (72 bytes, 29 insns) */
void f_120ac530(void) {
  FTRACE(0x120ac530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac530 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac531 mov ebp, esp */
  EBP = (ESP);
  /* 120ac533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac536 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac53a je 0x120ac55c */
  if (C.zf) goto L_120ac55c;
  /* 120ac53c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac53f push eax */
  push32((uint32_t)(EAX));
  /* 120ac540 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 120ac543 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac544 call 0x120b2ce0 */
  push32(0x120ac549u); f_120b2ce0();
  /* 120ac549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac54c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac54f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ac552 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120ac554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac557 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120ac55a jmp 0x120ac574 */
  goto L_120ac574;
L_120ac55c:;
  /* 120ac55c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac55f push edx */
  push32((uint32_t)(EDX));
  /* 120ac560 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120ac563 push eax */
  push32((uint32_t)(EAX));
  /* 120ac564 call 0x120b2d60 */
  push32(0x120ac569u); f_120b2d60();
  /* 120ac569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac56c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac56f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ac572 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_120ac574:;
  /* 120ac574 mov esp, ebp */
  ESP = (EBP);
  /* 120ac576 pop ebp */
  EBP = (pop32());
  /* 120ac577 ret  */
  ESPCHK(0x120ac530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x120ac580 (118 bytes, 49 insns) */
void f_120ac580(void) {
  FTRACE(0x120ac580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac580 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac581 mov ebp, esp */
  EBP = (ESP);
  /* 120ac583 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac586 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120ac589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac58c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 120ac58f push ecx */
  push32((uint32_t)(ECX));
  /* 120ac590 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 120ac593 push edx */
  push32((uint32_t)(EDX));
  /* 120ac594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac597 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ac59a push ecx */
  push32((uint32_t)(ECX));
  /* 120ac59b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120ac59d push edx */
  push32((uint32_t)(EDX));
  /* 120ac59e call 0x120b2ea0 */
  push32(0x120ac5a3u); f_120b2ea0();
  /* 120ac5a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac5a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac5a9 push eax */
  push32((uint32_t)(EAX));
  /* 120ac5aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac5ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac5b0 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac5b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac5b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ac5b6 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac5b9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120ac5bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac5bf add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac5c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ac5c3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac5c7 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 120ac5ca add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac5cc push ecx */
  push32((uint32_t)(ECX));
  /* 120ac5cd call 0x120b2da0 */
  push32(0x120ac5d2u); f_120b2da0();
  /* 120ac5d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac5d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ac5d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac5da push eax */
  push32((uint32_t)(EAX));
  /* 120ac5db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ac5de push ecx */
  push32((uint32_t)(ECX));
  /* 120ac5df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac5e2 push edx */
  push32((uint32_t)(EDX));
  /* 120ac5e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac5e6 push eax */
  push32((uint32_t)(EAX));
  /* 120ac5e7 call 0x120ac600 */
  push32(0x120ac5ecu); f_120ac600();
  /* 120ac5ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac5ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac5f2 mov esp, ebp */
  ESP = (EBP);
  /* 120ac5f4 pop ebp */
  EBP = (pop32());
  /* 120ac5f5 ret  */
  ESPCHK(0x120ac580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c600 @ 0x120ac600 (358 bytes, 128 insns) */
void f_120ac600(void) {
  FTRACE(0x120ac600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac600 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac601 mov ebp, esp */
  EBP = (ESP);
  /* 120ac603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac606 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 120ac60a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ac60c je 0x120ac637 */
  if (C.zf) goto L_120ac637;
  /* 120ac60e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ac611 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ac613 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac616 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 120ac619 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac61c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac61e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ac623 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac627 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 120ac62a push ecx */
  push32((uint32_t)(ECX));
  /* 120ac62b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac62e push edx */
  push32((uint32_t)(EDX));
  /* 120ac62f call 0x120aca70 */
  push32(0x120ac634u); f_120aca70();
  /* 120ac634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ac637:;
  /* 120ac637 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac63a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac63d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ac640 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac643 jne 0x120ac654 */
  if (!C.zf) goto L_120ac654;
  /* 120ac645 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac648 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 120ac64b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac64e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ac654:;
  /* 120ac654 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac658 jle 0x120ac678 */
  if ((C.zf||C.sf!=C.of)) goto L_120ac678;
  /* 120ac65a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac65d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac660 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 120ac663 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120ac665 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac668 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac66b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ac66e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac671 mov al, byte ptr [0x120df014] */
  AL = (r8((uint32_t)(0x120df014)));
  /* 120ac676 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_120ac678:;
  /* 120ac678 push 0x120db6a0 */
  push32((uint32_t)(0x120db6a0u));
  /* 120ac67d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac680 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac683 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 120ac687 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ac689 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac68b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120ac68c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac68e push ecx */
  push32((uint32_t)(ECX));
  /* 120ac68f call 0x120b1390 */
  push32(0x120ac694u); f_120b1390();
  /* 120ac694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac697 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac69a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac69e je 0x120ac6a6 */
  if (C.zf) goto L_120ac6a6;
  /* 120ac6a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac6a3 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_120ac6a6:;
  /* 120ac6a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac6a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac6ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ac6af mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ac6b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120ac6b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120ac6b8 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac6bb je 0x120ac75f */
  if (C.zf) goto L_120ac75f;
  /* 120ac6c1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ac6c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac6c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac6ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120ac6cd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac6d1 jge 0x120ac6e1 */
  if ((C.sf==C.of)) goto L_120ac6e1;
  /* 120ac6d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ac6d6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ac6d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120ac6db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac6de mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_120ac6e1:;
  /* 120ac6e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac6e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac6e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac6ea cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac6ee jl 0x120ac715 */
  if ((C.sf!=C.of)) goto L_120ac715;
  /* 120ac6f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ac6f3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120ac6f4 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 120ac6f9 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120ac6fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac6fe mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 120ac700 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120ac702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac705 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120ac707 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ac70a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120ac70b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 120ac710 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120ac712 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120ac715:;
  /* 120ac715 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac718 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac71b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ac71e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac722 jl 0x120ac749 */
  if ((C.sf!=C.of)) goto L_120ac749;
  /* 120ac724 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ac727 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120ac728 mov ecx, 0xa */
  ECX = (0xau);
  /* 120ac72d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120ac72f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac732 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 120ac734 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120ac736 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac739 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120ac73b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ac73e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120ac73f mov ecx, 0xa */
  ECX = (0xau);
  /* 120ac744 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120ac746 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120ac749:;
  /* 120ac749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac74c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac74f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ac752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac755 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120ac757 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120ac75a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac75d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_120ac75f:;
  /* 120ac75f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac762 mov esp, ebp */
  ESP = (EBP);
  /* 120ac764 pop ebp */
  EBP = (pop32());
  /* 120ac765 ret  */
  ESPCHK(0x120ac600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x120ac770 (106 bytes, 44 insns) */
void f_120ac770(void) {
  FTRACE(0x120ac770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac770 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac771 mov ebp, esp */
  EBP = (ESP);
  /* 120ac773 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac776 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120ac779 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac77c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 120ac77f push ecx */
  push32((uint32_t)(ECX));
  /* 120ac780 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 120ac783 push edx */
  push32((uint32_t)(EDX));
  /* 120ac784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac787 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ac78a push ecx */
  push32((uint32_t)(ECX));
  /* 120ac78b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120ac78d push edx */
  push32((uint32_t)(EDX));
  /* 120ac78e call 0x120b2ea0 */
  push32(0x120ac793u); f_120b2ea0();
  /* 120ac793 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac799 push eax */
  push32((uint32_t)(EAX));
  /* 120ac79a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac79d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac7a0 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac7a3 push edx */
  push32((uint32_t)(EDX));
  /* 120ac7a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac7a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ac7a9 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac7ac sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120ac7af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac7b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac7b4 push edx */
  push32((uint32_t)(EDX));
  /* 120ac7b5 call 0x120b2da0 */
  push32(0x120ac7bau); f_120b2da0();
  /* 120ac7ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac7bd push 0 */
  push32((uint32_t)(0x0u));
  /* 120ac7bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac7c2 push eax */
  push32((uint32_t)(EAX));
  /* 120ac7c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac7c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac7ca push edx */
  push32((uint32_t)(EDX));
  /* 120ac7cb call 0x120ac7e0 */
  push32(0x120ac7d0u); f_120ac7e0();
  /* 120ac7d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac7d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac7d6 mov esp, ebp */
  ESP = (EBP);
  /* 120ac7d8 pop ebp */
  EBP = (pop32());
  /* 120ac7d9 ret  */
  ESPCHK(0x120ac770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7e0 @ 0x120ac7e0 (317 bytes, 113 insns) */
void f_120ac7e0(void) {
  FTRACE(0x120ac7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac7e1 mov ebp, esp */
  EBP = (ESP);
  /* 120ac7e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac7e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac7e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ac7ec sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac7ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120ac7f2 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 120ac7f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ac7f8 je 0x120ac833 */
  if (C.zf) goto L_120ac833;
  /* 120ac7fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac7fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ac7ff cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac802 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 120ac805 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac808 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac80a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ac80d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ac810 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac813 jne 0x120ac833 */
  if (!C.zf) goto L_120ac833;
  /* 120ac815 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac818 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac81b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120ac81e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ac821 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 120ac824 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ac827 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac82a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ac82d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ac830 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_120ac833:;
  /* 120ac833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac836 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120ac839 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac83c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac83f jne 0x120ac850 */
  if (!C.zf) goto L_120ac850;
  /* 120ac841 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac844 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 120ac847 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac84a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac84d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120ac850:;
  /* 120ac850 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac853 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac857 jg 0x120ac878 */
  if ((!C.zf&&C.sf==C.of)) goto L_120ac878;
  /* 120ac859 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ac85b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac85e push ecx */
  push32((uint32_t)(ECX));
  /* 120ac85f call 0x120aca70 */
  push32(0x120ac864u); f_120aca70();
  /* 120ac864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac867 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac86a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 120ac86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac870 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac876 jmp 0x120ac884 */
  goto L_120ac884;
L_120ac878:;
  /* 120ac878 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac87b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac87e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac881 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120ac884:;
  /* 120ac884 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac888 jle 0x120ac916 */
  if ((C.zf||C.sf!=C.of)) goto L_120ac916;
  /* 120ac88e push 1 */
  push32((uint32_t)(0x1u));
  /* 120ac890 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac893 push eax */
  push32((uint32_t)(EAX));
  /* 120ac894 call 0x120aca70 */
  push32(0x120ac899u); f_120aca70();
  /* 120ac899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac89f mov dl, byte ptr [0x120df014] */
  DL = (r8((uint32_t)(0x120df014)));
  /* 120ac8a5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 120ac8a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac8aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac8ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac8b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac8b3 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac8b7 jge 0x120ac916 */
  if ((C.sf==C.of)) goto L_120ac916;
  /* 120ac8b9 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 120ac8bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ac8bf je 0x120ac8ce */
  if (C.zf) goto L_120ac8ce;
  /* 120ac8c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac8c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ac8c7 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ac8c9 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120ac8cc jmp 0x120ac8f4 */
  goto L_120ac8f4;
L_120ac8ce:;
  /* 120ac8ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac8d1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac8d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ac8d6 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac8d9 jge 0x120ac8e3 */
  if ((C.sf==C.of)) goto L_120ac8e3;
  /* 120ac8db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac8de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120ac8e1 jmp 0x120ac8ee */
  goto L_120ac8ee;
L_120ac8e3:;
  /* 120ac8e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac8e6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac8e9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120ac8eb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120ac8ee:;
  /* 120ac8ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120ac8f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_120ac8f4:;
  /* 120ac8f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac8f7 push edx */
  push32((uint32_t)(EDX));
  /* 120ac8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac8fb push eax */
  push32((uint32_t)(EAX));
  /* 120ac8fc call 0x120aca70 */
  push32(0x120ac901u); f_120aca70();
  /* 120ac901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac904 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac907 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac908 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120ac90a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac90d push edx */
  push32((uint32_t)(EDX));
  /* 120ac90e call 0x120b3090 */
  push32(0x120ac913u); f_120b3090();
  /* 120ac913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ac916:;
  /* 120ac916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac919 mov esp, ebp */
  ESP = (EBP);
  /* 120ac91b pop ebp */
  EBP = (pop32());
  /* 120ac91c ret  */
  ESPCHK(0x120ac7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c920 @ 0x120ac920 (229 bytes, 89 insns) */
void f_120ac920(void) {
  FTRACE(0x120ac920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ac920 push ebp */
  push32((uint32_t)(EBP));
  /* 120ac921 mov ebp, esp */
  EBP = (ESP);
  /* 120ac923 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac926 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 120ac92a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120ac92d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 120ac930 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 120ac933 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac934 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 120ac937 push edx */
  push32((uint32_t)(EDX));
  /* 120ac938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ac93b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ac93e push ecx */
  push32((uint32_t)(ECX));
  /* 120ac93f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120ac941 push edx */
  push32((uint32_t)(EDX));
  /* 120ac942 call 0x120b2ea0 */
  push32(0x120ac947u); f_120b2ea0();
  /* 120ac947 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac94a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120ac94d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ac950 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac953 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 120ac956 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120ac959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ac95b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac95e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120ac961 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac964 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac966 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ac969 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120ac96c push edx */
  push32((uint32_t)(EDX));
  /* 120ac96d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac970 push eax */
  push32((uint32_t)(EAX));
  /* 120ac971 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac974 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac975 call 0x120b2da0 */
  push32(0x120ac97au); f_120b2da0();
  /* 120ac97a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac97d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120ac980 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac983 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac986 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ac988 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac98b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 120ac98e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 120ac991 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120ac994 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ac997 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ac99a mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 120ac99d cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac9a1 jl 0x120ac9ab */
  if ((C.sf!=C.of)) goto L_120ac9ab;
  /* 120ac9a3 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120ac9a6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ac9a9 jl 0x120ac9c7 */
  if ((C.sf!=C.of)) goto L_120ac9c7;
L_120ac9ab:;
  /* 120ac9ab push 1 */
  push32((uint32_t)(0x1u));
  /* 120ac9ad mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120ac9b0 push edx */
  push32((uint32_t)(EDX));
  /* 120ac9b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ac9b4 push eax */
  push32((uint32_t)(EAX));
  /* 120ac9b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac9b8 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac9b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac9bc push edx */
  push32((uint32_t)(EDX));
  /* 120ac9bd call 0x120ac600 */
  push32(0x120ac9c2u); f_120ac600();
  /* 120ac9c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac9c5 jmp 0x120aca01 */
  goto L_120aca01;
L_120ac9c7:;
  /* 120ac9c7 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 120ac9cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ac9cd je 0x120ac9eb */
  if (C.zf) goto L_120ac9eb;
L_120ac9cf:;
  /* 120ac9cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac9d2 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120ac9d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac9d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ac9db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ac9de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ac9e0 je 0x120ac9e4 */
  if (C.zf) goto L_120ac9e4;
  /* 120ac9e2 jmp 0x120ac9cf */
  goto L_120ac9cf;
L_120ac9e4:;
  /* 120ac9e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ac9e7 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_120ac9eb:;
  /* 120ac9eb push 1 */
  push32((uint32_t)(0x1u));
  /* 120ac9ed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120ac9f0 push edx */
  push32((uint32_t)(EDX));
  /* 120ac9f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ac9f4 push eax */
  push32((uint32_t)(EAX));
  /* 120ac9f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ac9f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120ac9f9 call 0x120ac7e0 */
  push32(0x120ac9feu); f_120ac7e0();
  /* 120ac9fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aca01:;
  /* 120aca01 mov esp, ebp */
  ESP = (EBP);
  /* 120aca03 pop ebp */
  EBP = (pop32());
  /* 120aca04 ret  */
  ESPCHK(0x120ac920u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x120aca10 (95 bytes, 40 insns) */
void f_120aca10(void) {
  FTRACE(0x120aca10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aca10 push ebp */
  push32((uint32_t)(EBP));
  /* 120aca11 mov ebp, esp */
  EBP = (ESP);
  /* 120aca13 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aca17 je 0x120aca1f */
  if (C.zf) goto L_120aca1f;
  /* 120aca19 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aca1d jne 0x120aca39 */
  if (!C.zf) goto L_120aca39;
L_120aca1f:;
  /* 120aca1f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aca22 push eax */
  push32((uint32_t)(EAX));
  /* 120aca23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aca26 push ecx */
  push32((uint32_t)(ECX));
  /* 120aca27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aca2a push edx */
  push32((uint32_t)(EDX));
  /* 120aca2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aca2e push eax */
  push32((uint32_t)(EAX));
  /* 120aca2f call 0x120ac580 */
  push32(0x120aca34u); f_120ac580();
  /* 120aca34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aca37 jmp 0x120aca6d */
  goto L_120aca6d;
L_120aca39:;
  /* 120aca39 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aca3d jne 0x120aca55 */
  if (!C.zf) goto L_120aca55;
  /* 120aca3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aca42 push ecx */
  push32((uint32_t)(ECX));
  /* 120aca43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aca46 push edx */
  push32((uint32_t)(EDX));
  /* 120aca47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aca4a push eax */
  push32((uint32_t)(EAX));
  /* 120aca4b call 0x120ac770 */
  push32(0x120aca50u); f_120ac770();
  /* 120aca50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aca53 jmp 0x120aca6d */
  goto L_120aca6d;
L_120aca55:;
  /* 120aca55 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aca58 push ecx */
  push32((uint32_t)(ECX));
  /* 120aca59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aca5c push edx */
  push32((uint32_t)(EDX));
  /* 120aca5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aca60 push eax */
  push32((uint32_t)(EAX));
  /* 120aca61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aca64 push ecx */
  push32((uint32_t)(ECX));
  /* 120aca65 call 0x120ac920 */
  push32(0x120aca6au); f_120ac920();
  /* 120aca6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aca6d:;
  /* 120aca6d pop ebp */
  EBP = (pop32());
  /* 120aca6e ret  */
  ESPCHK(0x120aca10u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x120aca70 (46 bytes, 19 insns) */
void f_120aca70(void) {
  FTRACE(0x120aca70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aca70 push ebp */
  push32((uint32_t)(EBP));
  /* 120aca71 mov ebp, esp */
  EBP = (ESP);
  /* 120aca73 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aca77 je 0x120aca9c */
  if (C.zf) goto L_120aca9c;
  /* 120aca79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aca7c push eax */
  push32((uint32_t)(EAX));
  /* 120aca7d call 0x120b1210 */
  push32(0x120aca82u); f_120b1210();
  /* 120aca82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aca85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aca88 push eax */
  push32((uint32_t)(EAX));
  /* 120aca89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aca8c push ecx */
  push32((uint32_t)(ECX));
  /* 120aca8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aca90 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aca93 push edx */
  push32((uint32_t)(EDX));
  /* 120aca94 call 0x120b30f0 */
  push32(0x120aca99u); f_120b30f0();
  /* 120aca99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aca9c:;
  /* 120aca9c pop ebp */
  EBP = (pop32());
  /* 120aca9d ret  */
  ESPCHK(0x120aca70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caa0 @ 0x120acaa0 (55 bytes, 16 insns) */
void f_120acaa0(void) {
  FTRACE(0x120acaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120acaa1 mov ebp, esp */
  EBP = (ESP);
  /* 120acaa3 mov eax, dword ptr [0x120deeac] */
  EAX = (r32((uint32_t)(0x120deeac)));
  /* 120acaa8 push eax */
  push32((uint32_t)(EAX));
  /* 120acaa9 call dword ptr [0x120e3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3454))), 0x120acaafu);
  /* 120acaaf mov ecx, dword ptr [0x120dee9c] */
  ECX = (r32((uint32_t)(0x120dee9c)));
  /* 120acab5 push ecx */
  push32((uint32_t)(ECX));
  /* 120acab6 call dword ptr [0x120e3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3454))), 0x120acabcu);
  /* 120acabc mov edx, dword ptr [0x120dee8c] */
  EDX = (r32((uint32_t)(0x120dee8c)));
  /* 120acac2 push edx */
  push32((uint32_t)(EDX));
  /* 120acac3 call dword ptr [0x120e3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3454))), 0x120acac9u);
  /* 120acac9 mov eax, dword ptr [0x120dee6c] */
  EAX = (r32((uint32_t)(0x120dee6c)));
  /* 120acace push eax */
  push32((uint32_t)(EAX));
  /* 120acacf call dword ptr [0x120e3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3454))), 0x120acad5u);
  /* 120acad5 pop ebp */
  EBP = (pop32());
  /* 120acad6 ret  */
  ESPCHK(0x120acaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cae0 @ 0x120acae0 (159 bytes, 47 insns) */
void f_120acae0(void) {
  FTRACE(0x120acae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acae0 push ebp */
  push32((uint32_t)(EBP));
  /* 120acae1 mov ebp, esp */
  EBP = (ESP);
  /* 120acae3 push ecx */
  push32((uint32_t)(ECX));
  /* 120acae4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120acaeb jmp 0x120acaf6 */
  goto L_120acaf6;
L_120acaed:;
  /* 120acaed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acaf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120acaf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120acaf6:;
  /* 120acaf6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acafa jge 0x120acb49 */
  if ((C.sf==C.of)) goto L_120acb49;
  /* 120acafc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acaff cmp dword ptr [ecx*4 + 0x120dee68], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120dee68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acb07 je 0x120acb47 */
  if (C.zf) goto L_120acb47;
  /* 120acb09 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acb0d je 0x120acb47 */
  if (C.zf) goto L_120acb47;
  /* 120acb0f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acb13 je 0x120acb47 */
  if (C.zf) goto L_120acb47;
  /* 120acb15 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acb19 je 0x120acb47 */
  if (C.zf) goto L_120acb47;
  /* 120acb1b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acb1f je 0x120acb47 */
  if (C.zf) goto L_120acb47;
  /* 120acb21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acb24 mov eax, dword ptr [edx*4 + 0x120dee68] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120dee68)));
  /* 120acb2b push eax */
  push32((uint32_t)(EAX));
  /* 120acb2c call dword ptr [0x120e3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3458))), 0x120acb32u);
  /* 120acb32 push 2 */
  push32((uint32_t)(0x2u));
  /* 120acb34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acb37 mov edx, dword ptr [ecx*4 + 0x120dee68] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120dee68)));
  /* 120acb3e push edx */
  push32((uint32_t)(EDX));
  /* 120acb3f call 0x120ad710 */
  push32(0x120acb44u); f_120ad710();
  /* 120acb44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120acb47:;
  /* 120acb47 jmp 0x120acaed */
  goto L_120acaed;
L_120acb49:;
  /* 120acb49 mov eax, dword ptr [0x120dee8c] */
  EAX = (r32((uint32_t)(0x120dee8c)));
  /* 120acb4e push eax */
  push32((uint32_t)(EAX));
  /* 120acb4f call dword ptr [0x120e3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3458))), 0x120acb55u);
  /* 120acb55 mov ecx, dword ptr [0x120dee9c] */
  ECX = (r32((uint32_t)(0x120dee9c)));
  /* 120acb5b push ecx */
  push32((uint32_t)(ECX));
  /* 120acb5c call dword ptr [0x120e3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3458))), 0x120acb62u);
  /* 120acb62 mov edx, dword ptr [0x120deeac] */
  EDX = (r32((uint32_t)(0x120deeac)));
  /* 120acb68 push edx */
  push32((uint32_t)(EDX));
  /* 120acb69 call dword ptr [0x120e3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3458))), 0x120acb6fu);
  /* 120acb6f mov eax, dword ptr [0x120dee6c] */
  EAX = (r32((uint32_t)(0x120dee6c)));
  /* 120acb74 push eax */
  push32((uint32_t)(EAX));
  /* 120acb75 call dword ptr [0x120e3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3458))), 0x120acb7bu);
  /* 120acb7b mov esp, ebp */
  ESP = (EBP);
  /* 120acb7d pop ebp */
  EBP = (pop32());
  /* 120acb7e ret  */
  ESPCHK(0x120acae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb80 @ 0x120acb80 (151 bytes, 46 insns) */
void f_120acb80(void) {
  FTRACE(0x120acb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acb80 push ebp */
  push32((uint32_t)(EBP));
  /* 120acb81 mov ebp, esp */
  EBP = (ESP);
  /* 120acb83 push ecx */
  push32((uint32_t)(ECX));
  /* 120acb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acb87 cmp dword ptr [eax*4 + 0x120dee68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x120dee68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acb8f jne 0x120acc02 */
  if (!C.zf) goto L_120acc02;
  /* 120acb91 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 120acb96 push 0x120db6a8 */
  push32((uint32_t)(0x120db6a8u));
  /* 120acb9b push 2 */
  push32((uint32_t)(0x2u));
  /* 120acb9d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120acb9f call 0x120acc80 */
  push32(0x120acba4u); f_120acc80();
  /* 120acba4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acba7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120acbaa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acbae jne 0x120acbba */
  if (!C.zf) goto L_120acbba;
  /* 120acbb0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120acbb2 call 0x120ab6f0 */
  push32(0x120acbb7u); f_120ab6f0();
  /* 120acbb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120acbba:;
  /* 120acbba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120acbbc call 0x120acb80 */
  push32(0x120acbc1u); f_120acb80();
  /* 120acbc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acbc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acbc7 cmp dword ptr [ecx*4 + 0x120dee68], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120dee68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acbcf jne 0x120acbea */
  if (!C.zf) goto L_120acbea;
  /* 120acbd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acbd4 push edx */
  push32((uint32_t)(EDX));
  /* 120acbd5 call dword ptr [0x120e3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3454))), 0x120acbdbu);
  /* 120acbdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acbde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acbe1 mov dword ptr [eax*4 + 0x120dee68], ecx */
  w32((uint32_t)(EAX*4 + 0x120dee68), (ECX));
  /* 120acbe8 jmp 0x120acbf8 */
  goto L_120acbf8;
L_120acbea:;
  /* 120acbea push 2 */
  push32((uint32_t)(0x2u));
  /* 120acbec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acbef push edx */
  push32((uint32_t)(EDX));
  /* 120acbf0 call 0x120ad710 */
  push32(0x120acbf5u); f_120ad710();
  /* 120acbf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120acbf8:;
  /* 120acbf8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120acbfa call 0x120acc20 */
  push32(0x120acbffu); f_120acc20();
  /* 120acbff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120acc02:;
  /* 120acc02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acc05 mov ecx, dword ptr [eax*4 + 0x120dee68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120dee68)));
  /* 120acc0c push ecx */
  push32((uint32_t)(ECX));
  /* 120acc0d call dword ptr [0x120e345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e345c))), 0x120acc13u);
  /* 120acc13 mov esp, ebp */
  ESP = (EBP);
  /* 120acc15 pop ebp */
  EBP = (pop32());
  /* 120acc16 ret  */
  ESPCHK(0x120acb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x120acc20 (22 bytes, 8 insns) */
void f_120acc20(void) {
  FTRACE(0x120acc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acc20 push ebp */
  push32((uint32_t)(EBP));
  /* 120acc21 mov ebp, esp */
  EBP = (ESP);
  /* 120acc23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acc26 mov ecx, dword ptr [eax*4 + 0x120dee68] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120dee68)));
  /* 120acc2d push ecx */
  push32((uint32_t)(ECX));
  /* 120acc2e call dword ptr [0x120e3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3438))), 0x120acc34u);
  /* 120acc34 pop ebp */
  EBP = (pop32());
  /* 120acc35 ret  */
  ESPCHK(0x120acc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc40 @ 0x120acc40 (26 bytes, 10 insns) */
void f_120acc40(void) {
  FTRACE(0x120acc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acc40 push ebp */
  push32((uint32_t)(EBP));
  /* 120acc41 mov ebp, esp */
  EBP = (ESP);
  /* 120acc43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acc46 push eax */
  push32((uint32_t)(EAX));
  /* 120acc47 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acc49 call dword ptr [0x120e3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3410))), 0x120acc4fu);
  /* 120acc4f push 0xff */
  push32((uint32_t)(0xffu));
  /* 120acc54 call dword ptr [0x120e3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3414))), 0x120acc5au);
  /* 120acc5a pop ebp */
  EBP = (pop32());
  /* 120acc5b ret  */
  ESPCHK(0x120acc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x120acc60 (29 bytes, 13 insns) */
void f_120acc60(void) {
  FTRACE(0x120acc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acc60 push ebp */
  push32((uint32_t)(EBP));
  /* 120acc61 mov ebp, esp */
  EBP = (ESP);
  /* 120acc63 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acc65 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acc67 push 1 */
  push32((uint32_t)(0x1u));
  /* 120acc69 mov eax, dword ptr [0x120e12f8] */
  EAX = (r32((uint32_t)(0x120e12f8)));
  /* 120acc6e push eax */
  push32((uint32_t)(EAX));
  /* 120acc6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acc72 push ecx */
  push32((uint32_t)(ECX));
  /* 120acc73 call 0x120accd0 */
  push32(0x120acc78u); f_120accd0();
  /* 120acc78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acc7b pop ebp */
  EBP = (pop32());
  /* 120acc7c ret  */
  ESPCHK(0x120acc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc80 @ 0x120acc80 (35 bytes, 16 insns) */
void f_120acc80(void) {
  FTRACE(0x120acc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acc80 push ebp */
  push32((uint32_t)(EBP));
  /* 120acc81 mov ebp, esp */
  EBP = (ESP);
  /* 120acc83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120acc86 push eax */
  push32((uint32_t)(EAX));
  /* 120acc87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120acc8a push ecx */
  push32((uint32_t)(ECX));
  /* 120acc8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120acc8e push edx */
  push32((uint32_t)(EDX));
  /* 120acc8f mov eax, dword ptr [0x120e12f8] */
  EAX = (r32((uint32_t)(0x120e12f8)));
  /* 120acc94 push eax */
  push32((uint32_t)(EAX));
  /* 120acc95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acc98 push ecx */
  push32((uint32_t)(ECX));
  /* 120acc99 call 0x120accd0 */
  push32(0x120acc9eu); f_120accd0();
  /* 120acc9e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acca1 pop ebp */
  EBP = (pop32());
  /* 120acca2 ret  */
  ESPCHK(0x120acc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x120accb0 (27 bytes, 13 insns) */
void f_120accb0(void) {
  FTRACE(0x120accb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120accb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120accb1 mov ebp, esp */
  EBP = (ESP);
  /* 120accb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120accb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120accb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120accb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120accbc push eax */
  push32((uint32_t)(EAX));
  /* 120accbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120accc0 push ecx */
  push32((uint32_t)(ECX));
  /* 120accc1 call 0x120accd0 */
  push32(0x120accc6u); f_120accd0();
  /* 120accc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120accc9 pop ebp */
  EBP = (pop32());
  /* 120accca ret  */
  ESPCHK(0x120accb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccd0 @ 0x120accd0 (94 bytes, 38 insns) */
void f_120accd0(void) {
  FTRACE(0x120accd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120accd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120accd1 mov ebp, esp */
  EBP = (ESP);
  /* 120accd3 push ecx */
  push32((uint32_t)(ECX));
L_120accd4:;
  /* 120accd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 120accd6 call 0x120acb80 */
  push32(0x120accdbu); f_120acb80();
  /* 120accdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120accde mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120acce1 push eax */
  push32((uint32_t)(EAX));
  /* 120acce2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120acce5 push ecx */
  push32((uint32_t)(ECX));
  /* 120acce6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120acce9 push edx */
  push32((uint32_t)(EDX));
  /* 120accea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acced push eax */
  push32((uint32_t)(EAX));
  /* 120accee call 0x120acd50 */
  push32(0x120accf3u); f_120acd50();
  /* 120accf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120accf6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120accf9 push 9 */
  push32((uint32_t)(0x9u));
  /* 120accfb call 0x120acc20 */
  push32(0x120acd00u); f_120acc20();
  /* 120acd00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acd03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acd07 jne 0x120acd0f */
  if (!C.zf) goto L_120acd0f;
  /* 120acd09 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acd0d jne 0x120acd14 */
  if (!C.zf) goto L_120acd14;
L_120acd0f:;
  /* 120acd0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acd12 jmp 0x120acd2a */
  goto L_120acd2a;
L_120acd14:;
  /* 120acd14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acd17 push ecx */
  push32((uint32_t)(ECX));
  /* 120acd18 call 0x120b3480 */
  push32(0x120acd1du); f_120b3480();
  /* 120acd1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acd20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120acd22 jne 0x120acd28 */
  if (!C.zf) goto L_120acd28;
  /* 120acd24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120acd26 jmp 0x120acd2a */
  goto L_120acd2a;
L_120acd28:;
  /* 120acd28 jmp 0x120accd4 */
  goto L_120accd4;
L_120acd2a:;
  /* 120acd2a mov esp, ebp */
  ESP = (EBP);
  /* 120acd2c pop ebp */
  EBP = (pop32());
  /* 120acd2d ret  */
  ESPCHK(0x120accd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd30 @ 0x120acd30 (23 bytes, 11 insns) */
void f_120acd30(void) {
  FTRACE(0x120acd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acd30 push ebp */
  push32((uint32_t)(EBP));
  /* 120acd31 mov ebp, esp */
  EBP = (ESP);
  /* 120acd33 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acd35 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acd37 push 1 */
  push32((uint32_t)(0x1u));
  /* 120acd39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acd3c push eax */
  push32((uint32_t)(EAX));
  /* 120acd3d call 0x120acd50 */
  push32(0x120acd42u); f_120acd50();
  /* 120acd42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acd45 pop ebp */
  EBP = (pop32());
  /* 120acd46 ret  */
  ESPCHK(0x120acd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd50 @ 0x120acd50 (787 bytes, 254 insns) */
void f_120acd50(void) {
  FTRACE(0x120acd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120acd50 push ebp */
  push32((uint32_t)(EBP));
  /* 120acd51 mov ebp, esp */
  EBP = (ESP);
  /* 120acd53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120acd56 push ebx */
  push32((uint32_t)(EBX));
  /* 120acd57 push esi */
  push32((uint32_t)(ESI));
  /* 120acd58 push edi */
  push32((uint32_t)(EDI));
  /* 120acd59 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120acd60 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120acd65 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120acd68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120acd6a je 0x120acd9c */
  if (C.zf) goto L_120acd9c;
L_120acd6c:;
  /* 120acd6c call 0x120ade20 */
  push32(0x120acd71u); f_120ade20();
  /* 120acd71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120acd73 jne 0x120acd96 */
  if (!C.zf) goto L_120acd96;
  /* 120acd75 push 0x120db798 */
  push32((uint32_t)(0x120db798u));
  /* 120acd7a push 0 */
  push32((uint32_t)(0x0u));
  /* 120acd7c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 120acd81 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120acd86 push 2 */
  push32((uint32_t)(0x2u));
  /* 120acd88 call 0x120ab840 */
  push32(0x120acd8du); f_120ab840();
  /* 120acd8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acd90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acd93 jne 0x120acd96 */
  if (!C.zf) goto L_120acd96;
  /* 120acd95 int3  */
  x86_unimpl("int3 @ 0x120acd95");
L_120acd96:;
  /* 120acd96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120acd98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120acd9a jne 0x120acd6c */
  if (!C.zf) goto L_120acd6c;
L_120acd9c:;
  /* 120acd9c mov edx, dword ptr [0x120def2c] */
  EDX = (r32((uint32_t)(0x120def2c)));
  /* 120acda2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120acda5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120acda8 cmp eax, dword ptr [0x120def30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120def30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acdae jne 0x120acdb1 */
  if (!C.zf) goto L_120acdb1;
  /* 120acdb0 int3  */
  x86_unimpl("int3 @ 0x120acdb0");
L_120acdb1:;
  /* 120acdb1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120acdb4 push ecx */
  push32((uint32_t)(ECX));
  /* 120acdb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120acdb8 push edx */
  push32((uint32_t)(EDX));
  /* 120acdb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120acdbc push eax */
  push32((uint32_t)(EAX));
  /* 120acdbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120acdc0 push ecx */
  push32((uint32_t)(ECX));
  /* 120acdc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acdc4 push edx */
  push32((uint32_t)(EDX));
  /* 120acdc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acdc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120acdc9 call dword ptr [0x120df260] */
  call_ind((uint32_t)(r32((uint32_t)(0x120df260))), 0x120acdcfu);
  /* 120acdcf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acdd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120acdd4 jne 0x120ace34 */
  if (!C.zf) goto L_120ace34;
  /* 120acdd6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acdda je 0x120ace07 */
  if (C.zf) goto L_120ace07;
L_120acddc:;
  /* 120acddc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120acddf push eax */
  push32((uint32_t)(EAX));
  /* 120acde0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120acde3 push ecx */
  push32((uint32_t)(ECX));
  /* 120acde4 push 0x120db754 */
  push32((uint32_t)(0x120db754u));
  /* 120acde9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acdeb push 0 */
  push32((uint32_t)(0x0u));
  /* 120acded push 0 */
  push32((uint32_t)(0x0u));
  /* 120acdef push 0 */
  push32((uint32_t)(0x0u));
  /* 120acdf1 call 0x120ab840 */
  push32(0x120acdf6u); f_120ab840();
  /* 120acdf6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acdf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acdfc jne 0x120acdff */
  if (!C.zf) goto L_120acdff;
  /* 120acdfe int3  */
  x86_unimpl("int3 @ 0x120acdfe");
L_120acdff:;
  /* 120acdff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ace01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ace03 jne 0x120acddc */
  if (!C.zf) goto L_120acddc;
  /* 120ace05 jmp 0x120ace2d */
  goto L_120ace2d;
L_120ace07:;
  /* 120ace07 push 0x120db730 */
  push32((uint32_t)(0x120db730u));
  /* 120ace0c push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ace11 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ace13 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ace15 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ace17 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ace19 call 0x120ab840 */
  push32(0x120ace1eu); f_120ab840();
  /* 120ace1e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ace21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ace24 jne 0x120ace27 */
  if (!C.zf) goto L_120ace27;
  /* 120ace26 int3  */
  x86_unimpl("int3 @ 0x120ace26");
L_120ace27:;
  /* 120ace27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ace29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ace2b jne 0x120ace07 */
  if (!C.zf) goto L_120ace07;
L_120ace2d:;
  /* 120ace2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ace2f jmp 0x120ad05c */
  goto L_120ad05c;
L_120ace34:;
  /* 120ace34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ace37 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ace3d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ace40 je 0x120ace56 */
  if (C.zf) goto L_120ace56;
  /* 120ace42 mov edx, dword ptr [0x120def28] */
  EDX = (r32((uint32_t)(0x120def28)));
  /* 120ace48 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120ace4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ace4d jne 0x120ace56 */
  if (!C.zf) goto L_120ace56;
  /* 120ace4f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_120ace56:;
  /* 120ace56 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ace5a ja 0x120ace67 */
  if ((!C.cf&&!C.zf)) goto L_120ace67;
  /* 120ace5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ace5f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ace62 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ace65 jbe 0x120ace93 */
  if ((C.cf||C.zf)) goto L_120ace93;
L_120ace67:;
  /* 120ace67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ace6a push ecx */
  push32((uint32_t)(ECX));
  /* 120ace6b push 0x120db708 */
  push32((uint32_t)(0x120db708u));
  /* 120ace70 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ace72 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ace74 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ace76 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ace78 call 0x120ab840 */
  push32(0x120ace7du); f_120ab840();
  /* 120ace7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ace80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ace83 jne 0x120ace86 */
  if (!C.zf) goto L_120ace86;
  /* 120ace85 int3  */
  x86_unimpl("int3 @ 0x120ace85");
L_120ace86:;
  /* 120ace86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ace88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ace8a jne 0x120ace67 */
  if (!C.zf) goto L_120ace67;
  /* 120ace8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ace8e jmp 0x120ad05c */
  goto L_120ad05c;
L_120ace93:;
  /* 120ace93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ace96 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ace9b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ace9e je 0x120acee0 */
  if (C.zf) goto L_120acee0;
  /* 120acea0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acea4 je 0x120acee0 */
  if (C.zf) goto L_120acee0;
  /* 120acea6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120acea9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120aceaf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aceb2 je 0x120acee0 */
  if (C.zf) goto L_120acee0;
  /* 120aceb4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aceb8 je 0x120acee0 */
  if (C.zf) goto L_120acee0;
L_120aceba:;
  /* 120aceba push 0x120db6d4 */
  push32((uint32_t)(0x120db6d4u));
  /* 120acebf push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120acec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120acec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aceca push 1 */
  push32((uint32_t)(0x1u));
  /* 120acecc call 0x120ab840 */
  push32(0x120aced1u); f_120ab840();
  /* 120aced1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aced4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aced7 jne 0x120aceda */
  if (!C.zf) goto L_120aceda;
  /* 120aced9 int3  */
  x86_unimpl("int3 @ 0x120aced9");
L_120aceda:;
  /* 120aceda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120acedc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120acede jne 0x120aceba */
  if (!C.zf) goto L_120aceba;
L_120acee0:;
  /* 120acee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acee3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120acee6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120acee9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120aceec push ecx */
  push32((uint32_t)(ECX));
  /* 120aceed call 0x120b3530 */
  push32(0x120acef2u); f_120b3530();
  /* 120acef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120acef5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120acef8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acefc jne 0x120acf05 */
  if (!C.zf) goto L_120acf05;
  /* 120acefe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120acf00 jmp 0x120ad05c */
  goto L_120ad05c;
L_120acf05:;
  /* 120acf05 mov edx, dword ptr [0x120def2c] */
  EDX = (r32((uint32_t)(0x120def2c)));
  /* 120acf0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120acf0e mov dword ptr [0x120def2c], edx */
  w32((uint32_t)(0x120def2c), (EDX));
  /* 120acf14 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acf18 je 0x120acf63 */
  if (C.zf) goto L_120acf63;
  /* 120acf1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acf1d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120acf23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acf26 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120acf2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acf30 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 120acf37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acf3a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 120acf41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acf44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acf47 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 120acf4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acf4d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 120acf54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acf57 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 120acf5e jmp 0x120ad003 */
  goto L_120ad003;
L_120acf63:;
  /* 120acf63 mov edx, dword ptr [0x120e1174] */
  EDX = (r32((uint32_t)(0x120e1174)));
  /* 120acf69 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120acf6c mov dword ptr [0x120e1174], edx */
  w32((uint32_t)(0x120e1174), (EDX));
  /* 120acf72 mov eax, dword ptr [0x120e117c] */
  EAX = (r32((uint32_t)(0x120e117c)));
  /* 120acf77 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120acf7a mov dword ptr [0x120e117c], eax */
  w32((uint32_t)(0x120e117c), (EAX));
  /* 120acf7f mov ecx, dword ptr [0x120e117c] */
  ECX = (r32((uint32_t)(0x120e117c)));
  /* 120acf85 cmp ecx, dword ptr [0x120e1180] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e1180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acf8b jbe 0x120acf99 */
  if ((C.cf||C.zf)) goto L_120acf99;
  /* 120acf8d mov edx, dword ptr [0x120e117c] */
  EDX = (r32((uint32_t)(0x120e117c)));
  /* 120acf93 mov dword ptr [0x120e1180], edx */
  w32((uint32_t)(0x120e1180), (EDX));
L_120acf99:;
  /* 120acf99 cmp dword ptr [0x120e1178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120acfa0 je 0x120acfaf */
  if (C.zf) goto L_120acfaf;
  /* 120acfa2 mov eax, dword ptr [0x120e1178] */
  EAX = (r32((uint32_t)(0x120e1178)));
  /* 120acfa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfaa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120acfad jmp 0x120acfb8 */
  goto L_120acfb8;
L_120acfaf:;
  /* 120acfaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfb2 mov dword ptr [0x120e1170], edx */
  w32((uint32_t)(0x120e1170), (EDX));
L_120acfb8:;
  /* 120acfb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfbb mov ecx, dword ptr [0x120e1178] */
  ECX = (r32((uint32_t)(0x120e1178)));
  /* 120acfc1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120acfc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfc6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 120acfcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120acfd3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120acfd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120acfdc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 120acfdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfe2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120acfe5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 120acfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acfeb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120acfee mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 120acff1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acff4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120acff7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 120acffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120acffd mov dword ptr [0x120e1178], ecx */
  w32((uint32_t)(0x120e1178), (ECX));
L_120ad003:;
  /* 120ad003 push 4 */
  push32((uint32_t)(0x4u));
  /* 120ad005 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ad007 mov dl, byte ptr [0x120def34] */
  DL = (r8((uint32_t)(0x120def34)));
  /* 120ad00d push edx */
  push32((uint32_t)(EDX));
  /* 120ad00e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad011 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad014 push eax */
  push32((uint32_t)(EAX));
  /* 120ad015 call 0x120b3090 */
  push32(0x120ad01au); f_120b3090();
  /* 120ad01a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad01d push 4 */
  push32((uint32_t)(0x4u));
  /* 120ad01f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad021 mov cl, byte ptr [0x120def34] */
  CL = (r8((uint32_t)(0x120def34)));
  /* 120ad027 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad02b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad02e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 120ad032 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad033 call 0x120b3090 */
  push32(0x120ad038u); f_120b3090();
  /* 120ad038 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad03e push edx */
  push32((uint32_t)(EDX));
  /* 120ad03f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad041 mov al, byte ptr [0x120def36] */
  AL = (r8((uint32_t)(0x120def36)));
  /* 120ad046 push eax */
  push32((uint32_t)(EAX));
  /* 120ad047 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad04a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad04d push ecx */
  push32((uint32_t)(ECX));
  /* 120ad04e call 0x120b3090 */
  push32(0x120ad053u); f_120b3090();
  /* 120ad053 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad056 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad059 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120ad05c:;
  /* 120ad05c pop edi */
  EDI = (pop32());
  /* 120ad05d pop esi */
  ESI = (pop32());
  /* 120ad05e pop ebx */
  EBX = (pop32());
  /* 120ad05f mov esp, ebp */
  ESP = (EBP);
  /* 120ad061 pop ebp */
  EBP = (pop32());
  /* 120ad062 ret  */
  ESPCHK(0x120acd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x120ad070 (27 bytes, 13 insns) */
void f_120ad070(void) {
  FTRACE(0x120ad070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad070 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad071 mov ebp, esp */
  EBP = (ESP);
  /* 120ad073 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad075 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad077 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad07c push eax */
  push32((uint32_t)(EAX));
  /* 120ad07d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad080 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad081 call 0x120ad090 */
  push32(0x120ad086u); f_120ad090();
  /* 120ad086 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad089 pop ebp */
  EBP = (pop32());
  /* 120ad08a ret  */
  ESPCHK(0x120ad070u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x120ad090 (96 bytes, 37 insns) */
void f_120ad090(void) {
  FTRACE(0x120ad090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad090 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad091 mov ebp, esp */
  EBP = (ESP);
  /* 120ad093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ad096 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad099 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120ad09d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120ad0a0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ad0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad0a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ad0a7 push edx */
  push32((uint32_t)(EDX));
  /* 120ad0a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad0ab push eax */
  push32((uint32_t)(EAX));
  /* 120ad0ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad0af push ecx */
  push32((uint32_t)(ECX));
  /* 120ad0b0 call 0x120acc80 */
  push32(0x120ad0b5u); f_120acc80();
  /* 120ad0b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad0b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120ad0bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad0bf je 0x120ad0e9 */
  if (C.zf) goto L_120ad0e9;
  /* 120ad0c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad0c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120ad0c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad0ca add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad0cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ad0d0:;
  /* 120ad0d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad0d3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad0d6 jae 0x120ad0e9 */
  if (!C.cf) goto L_120ad0e9;
  /* 120ad0d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad0db mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120ad0de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad0e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad0e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ad0e7 jmp 0x120ad0d0 */
  goto L_120ad0d0;
L_120ad0e9:;
  /* 120ad0e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad0ec mov esp, ebp */
  ESP = (EBP);
  /* 120ad0ee pop ebp */
  EBP = (pop32());
  /* 120ad0ef ret  */
  ESPCHK(0x120ad090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x120ad0f0 (27 bytes, 13 insns) */
void f_120ad0f0(void) {
  FTRACE(0x120ad0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad0f1 mov ebp, esp */
  EBP = (ESP);
  /* 120ad0f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad0f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad0f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad0f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad0fc push eax */
  push32((uint32_t)(EAX));
  /* 120ad0fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad100 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad101 call 0x120ad110 */
  push32(0x120ad106u); f_120ad110();
  /* 120ad106 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad109 pop ebp */
  EBP = (pop32());
  /* 120ad10a ret  */
  ESPCHK(0x120ad0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d110 @ 0x120ad110 (64 bytes, 27 insns) */
void f_120ad110(void) {
  FTRACE(0x120ad110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad110 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad111 mov ebp, esp */
  EBP = (ESP);
  /* 120ad113 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad114 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ad116 call 0x120acb80 */
  push32(0x120ad11bu); f_120acb80();
  /* 120ad11b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad11e push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad120 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ad123 push eax */
  push32((uint32_t)(EAX));
  /* 120ad124 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ad127 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad128 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad12b push edx */
  push32((uint32_t)(EDX));
  /* 120ad12c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad12f push eax */
  push32((uint32_t)(EAX));
  /* 120ad130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad133 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad134 call 0x120ad150 */
  push32(0x120ad139u); f_120ad150();
  /* 120ad139 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad13c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ad13f push 9 */
  push32((uint32_t)(0x9u));
  /* 120ad141 call 0x120acc20 */
  push32(0x120ad146u); f_120acc20();
  /* 120ad146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad149 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad14c mov esp, ebp */
  ESP = (EBP);
  /* 120ad14e pop ebp */
  EBP = (pop32());
  /* 120ad14f ret  */
  ESPCHK(0x120ad110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d150 @ 0x120ad150 (1297 bytes, 431 insns) */
void f_120ad150(void) {
  FTRACE(0x120ad150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad150 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad151 mov ebp, esp */
  EBP = (ESP);
  /* 120ad153 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ad156 push ebx */
  push32((uint32_t)(EBX));
  /* 120ad157 push esi */
  push32((uint32_t)(ESI));
  /* 120ad158 push edi */
  push32((uint32_t)(EDI));
  /* 120ad159 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 120ad160 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad164 jne 0x120ad183 */
  if (!C.zf) goto L_120ad183;
  /* 120ad166 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ad169 push eax */
  push32((uint32_t)(EAX));
  /* 120ad16a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ad16d push ecx */
  push32((uint32_t)(ECX));
  /* 120ad16e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad171 push edx */
  push32((uint32_t)(EDX));
  /* 120ad172 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad175 push eax */
  push32((uint32_t)(EAX));
  /* 120ad176 call 0x120acc80 */
  push32(0x120ad17bu); f_120acc80();
  /* 120ad17b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad17e jmp 0x120ad65a */
  goto L_120ad65a;
L_120ad183:;
  /* 120ad183 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad187 je 0x120ad1a6 */
  if (C.zf) goto L_120ad1a6;
  /* 120ad189 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad18d jne 0x120ad1a6 */
  if (!C.zf) goto L_120ad1a6;
  /* 120ad18f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad192 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad193 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad196 push edx */
  push32((uint32_t)(EDX));
  /* 120ad197 call 0x120ad710 */
  push32(0x120ad19cu); f_120ad710();
  /* 120ad19c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad19f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad1a1 jmp 0x120ad65a */
  goto L_120ad65a;
L_120ad1a6:;
  /* 120ad1a6 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120ad1ab and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120ad1ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad1b0 je 0x120ad1e2 */
  if (C.zf) goto L_120ad1e2;
L_120ad1b2:;
  /* 120ad1b2 call 0x120ade20 */
  push32(0x120ad1b7u); f_120ade20();
  /* 120ad1b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad1b9 jne 0x120ad1dc */
  if (!C.zf) goto L_120ad1dc;
  /* 120ad1bb push 0x120db798 */
  push32((uint32_t)(0x120db798u));
  /* 120ad1c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad1c2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 120ad1c7 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad1cc push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad1ce call 0x120ab840 */
  push32(0x120ad1d3u); f_120ab840();
  /* 120ad1d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad1d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad1d9 jne 0x120ad1dc */
  if (!C.zf) goto L_120ad1dc;
  /* 120ad1db int3  */
  x86_unimpl("int3 @ 0x120ad1db");
L_120ad1dc:;
  /* 120ad1dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad1de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad1e0 jne 0x120ad1b2 */
  if (!C.zf) goto L_120ad1b2;
L_120ad1e2:;
  /* 120ad1e2 mov edx, dword ptr [0x120def2c] */
  EDX = (r32((uint32_t)(0x120def2c)));
  /* 120ad1e8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120ad1eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120ad1ee cmp eax, dword ptr [0x120def30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120def30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad1f4 jne 0x120ad1f7 */
  if (!C.zf) goto L_120ad1f7;
  /* 120ad1f6 int3  */
  x86_unimpl("int3 @ 0x120ad1f6");
L_120ad1f7:;
  /* 120ad1f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ad1fa push ecx */
  push32((uint32_t)(ECX));
  /* 120ad1fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ad1fe push edx */
  push32((uint32_t)(EDX));
  /* 120ad1ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120ad202 push eax */
  push32((uint32_t)(EAX));
  /* 120ad203 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad206 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad207 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad20a push edx */
  push32((uint32_t)(EDX));
  /* 120ad20b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad20e push eax */
  push32((uint32_t)(EAX));
  /* 120ad20f push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad211 call dword ptr [0x120df260] */
  call_ind((uint32_t)(r32((uint32_t)(0x120df260))), 0x120ad217u);
  /* 120ad217 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad21a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad21c jne 0x120ad27c */
  if (!C.zf) goto L_120ad27c;
  /* 120ad21e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad222 je 0x120ad24f */
  if (C.zf) goto L_120ad24f;
L_120ad224:;
  /* 120ad224 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ad227 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad228 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ad22b push edx */
  push32((uint32_t)(EDX));
  /* 120ad22c push 0x120db914 */
  push32((uint32_t)(0x120db914u));
  /* 120ad231 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad233 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad235 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad237 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad239 call 0x120ab840 */
  push32(0x120ad23eu); f_120ab840();
  /* 120ad23e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad241 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad244 jne 0x120ad247 */
  if (!C.zf) goto L_120ad247;
  /* 120ad246 int3  */
  x86_unimpl("int3 @ 0x120ad246");
L_120ad247:;
  /* 120ad247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad24b jne 0x120ad224 */
  if (!C.zf) goto L_120ad224;
  /* 120ad24d jmp 0x120ad275 */
  goto L_120ad275;
L_120ad24f:;
  /* 120ad24f push 0x120db8f0 */
  push32((uint32_t)(0x120db8f0u));
  /* 120ad254 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ad259 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad25b push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad25d push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad25f push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad261 call 0x120ab840 */
  push32(0x120ad266u); f_120ab840();
  /* 120ad266 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad269 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad26c jne 0x120ad26f */
  if (!C.zf) goto L_120ad26f;
  /* 120ad26e int3  */
  x86_unimpl("int3 @ 0x120ad26e");
L_120ad26f:;
  /* 120ad26f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad271 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad273 jne 0x120ad24f */
  if (!C.zf) goto L_120ad24f;
L_120ad275:;
  /* 120ad275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad277 jmp 0x120ad65a */
  goto L_120ad65a;
L_120ad27c:;
  /* 120ad27c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad280 jbe 0x120ad2ae */
  if ((C.cf||C.zf)) goto L_120ad2ae;
L_120ad282:;
  /* 120ad282 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad285 push edx */
  push32((uint32_t)(EDX));
  /* 120ad286 push 0x120db8c0 */
  push32((uint32_t)(0x120db8c0u));
  /* 120ad28b push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad28d push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad28f push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad291 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad293 call 0x120ab840 */
  push32(0x120ad298u); f_120ab840();
  /* 120ad298 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad29b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad29e jne 0x120ad2a1 */
  if (!C.zf) goto L_120ad2a1;
  /* 120ad2a0 int3  */
  x86_unimpl("int3 @ 0x120ad2a0");
L_120ad2a1:;
  /* 120ad2a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad2a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad2a5 jne 0x120ad282 */
  if (!C.zf) goto L_120ad282;
  /* 120ad2a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad2a9 jmp 0x120ad65a */
  goto L_120ad65a;
L_120ad2ae:;
  /* 120ad2ae cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad2b2 je 0x120ad2f6 */
  if (C.zf) goto L_120ad2f6;
  /* 120ad2b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad2b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ad2bd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad2c0 je 0x120ad2f6 */
  if (C.zf) goto L_120ad2f6;
  /* 120ad2c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad2c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ad2cb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad2ce je 0x120ad2f6 */
  if (C.zf) goto L_120ad2f6;
L_120ad2d0:;
  /* 120ad2d0 push 0x120db6d4 */
  push32((uint32_t)(0x120db6d4u));
  /* 120ad2d5 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ad2da push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad2dc push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad2de push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad2e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad2e2 call 0x120ab840 */
  push32(0x120ad2e7u); f_120ab840();
  /* 120ad2e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad2ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad2ed jne 0x120ad2f0 */
  if (!C.zf) goto L_120ad2f0;
  /* 120ad2ef int3  */
  x86_unimpl("int3 @ 0x120ad2ef");
L_120ad2f0:;
  /* 120ad2f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad2f4 jne 0x120ad2d0 */
  if (!C.zf) goto L_120ad2d0;
L_120ad2f6:;
  /* 120ad2f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad2f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad2fa call 0x120ae280 */
  push32(0x120ad2ffu); f_120ae280();
  /* 120ad2ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad304 jne 0x120ad327 */
  if (!C.zf) goto L_120ad327;
  /* 120ad306 push 0x120db89c */
  push32((uint32_t)(0x120db89cu));
  /* 120ad30b push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad30d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 120ad312 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad317 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad319 call 0x120ab840 */
  push32(0x120ad31eu); f_120ab840();
  /* 120ad31e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad321 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad324 jne 0x120ad327 */
  if (!C.zf) goto L_120ad327;
  /* 120ad326 int3  */
  x86_unimpl("int3 @ 0x120ad326");
L_120ad327:;
  /* 120ad327 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ad329 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ad32b jne 0x120ad2f6 */
  if (!C.zf) goto L_120ad2f6;
  /* 120ad32d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad330 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ad333 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120ad336 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad339 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad33d jne 0x120ad346 */
  if (!C.zf) goto L_120ad346;
  /* 120ad33f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_120ad346:;
  /* 120ad346 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad34a je 0x120ad38a */
  if (C.zf) goto L_120ad38a;
L_120ad34c:;
  /* 120ad34c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad34f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad356 jne 0x120ad361 */
  if (!C.zf) goto L_120ad361;
  /* 120ad358 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad35b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad35f je 0x120ad382 */
  if (C.zf) goto L_120ad382;
L_120ad361:;
  /* 120ad361 push 0x120db854 */
  push32((uint32_t)(0x120db854u));
  /* 120ad366 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad368 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 120ad36d push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad372 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad374 call 0x120ab840 */
  push32(0x120ad379u); f_120ab840();
  /* 120ad379 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad37c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad37f jne 0x120ad382 */
  if (!C.zf) goto L_120ad382;
  /* 120ad381 int3  */
  x86_unimpl("int3 @ 0x120ad381");
L_120ad382:;
  /* 120ad382 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad384 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad386 jne 0x120ad34c */
  if (!C.zf) goto L_120ad34c;
  /* 120ad388 jmp 0x120ad3ee */
  goto L_120ad3ee;
L_120ad38a:;
  /* 120ad38a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad38d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ad390 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ad395 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad398 jne 0x120ad3af */
  if (!C.zf) goto L_120ad3af;
  /* 120ad39a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad39d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ad3a3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad3a6 jne 0x120ad3af */
  if (!C.zf) goto L_120ad3af;
  /* 120ad3a8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_120ad3af:;
  /* 120ad3af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad3b2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ad3b5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ad3ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad3bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ad3c3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad3c5 je 0x120ad3e8 */
  if (C.zf) goto L_120ad3e8;
  /* 120ad3c7 push 0x120db818 */
  push32((uint32_t)(0x120db818u));
  /* 120ad3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad3ce push 0x272 */
  push32((uint32_t)(0x272u));
  /* 120ad3d3 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad3d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad3da call 0x120ab840 */
  push32(0x120ad3dfu); f_120ab840();
  /* 120ad3df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad3e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad3e5 jne 0x120ad3e8 */
  if (!C.zf) goto L_120ad3e8;
  /* 120ad3e7 int3  */
  x86_unimpl("int3 @ 0x120ad3e7");
L_120ad3e8:;
  /* 120ad3e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ad3ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ad3ec jne 0x120ad3af */
  if (!C.zf) goto L_120ad3af;
L_120ad3ee:;
  /* 120ad3ee cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad3f2 je 0x120ad419 */
  if (C.zf) goto L_120ad419;
  /* 120ad3f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad3f7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad3fa push eax */
  push32((uint32_t)(EAX));
  /* 120ad3fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad3fe push ecx */
  push32((uint32_t)(ECX));
  /* 120ad3ff call 0x120b3660 */
  push32(0x120ad404u); f_120b3660();
  /* 120ad404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad407 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ad40a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad40e jne 0x120ad417 */
  if (!C.zf) goto L_120ad417;
  /* 120ad410 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad412 jmp 0x120ad65a */
  goto L_120ad65a;
L_120ad417:;
  /* 120ad417 jmp 0x120ad43c */
  goto L_120ad43c;
L_120ad419:;
  /* 120ad419 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad41c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad41f push edx */
  push32((uint32_t)(EDX));
  /* 120ad420 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ad423 push eax */
  push32((uint32_t)(EAX));
  /* 120ad424 call 0x120b35b0 */
  push32(0x120ad429u); f_120b35b0();
  /* 120ad429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad42c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ad42f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad433 jne 0x120ad43c */
  if (!C.zf) goto L_120ad43c;
  /* 120ad435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad437 jmp 0x120ad65a */
  goto L_120ad65a;
L_120ad43c:;
  /* 120ad43c mov ecx, dword ptr [0x120def2c] */
  ECX = (r32((uint32_t)(0x120def2c)));
  /* 120ad442 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad445 mov dword ptr [0x120def2c], ecx */
  w32((uint32_t)(0x120def2c), (ECX));
  /* 120ad44b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad44f jne 0x120ad4a7 */
  if (!C.zf) goto L_120ad4a7;
  /* 120ad451 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad454 mov eax, dword ptr [0x120e1174] */
  EAX = (r32((uint32_t)(0x120e1174)));
  /* 120ad459 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ad45c mov dword ptr [0x120e1174], eax */
  w32((uint32_t)(0x120e1174), (EAX));
  /* 120ad461 mov ecx, dword ptr [0x120e1174] */
  ECX = (r32((uint32_t)(0x120e1174)));
  /* 120ad467 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad46a mov dword ptr [0x120e1174], ecx */
  w32((uint32_t)(0x120e1174), (ECX));
  /* 120ad470 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad473 mov eax, dword ptr [0x120e117c] */
  EAX = (r32((uint32_t)(0x120e117c)));
  /* 120ad478 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ad47b mov dword ptr [0x120e117c], eax */
  w32((uint32_t)(0x120e117c), (EAX));
  /* 120ad480 mov ecx, dword ptr [0x120e117c] */
  ECX = (r32((uint32_t)(0x120e117c)));
  /* 120ad486 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad489 mov dword ptr [0x120e117c], ecx */
  w32((uint32_t)(0x120e117c), (ECX));
  /* 120ad48f mov edx, dword ptr [0x120e117c] */
  EDX = (r32((uint32_t)(0x120e117c)));
  /* 120ad495 cmp edx, dword ptr [0x120e1180] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120e1180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad49b jbe 0x120ad4a7 */
  if ((C.cf||C.zf)) goto L_120ad4a7;
  /* 120ad49d mov eax, dword ptr [0x120e117c] */
  EAX = (r32((uint32_t)(0x120e117c)));
  /* 120ad4a2 mov dword ptr [0x120e1180], eax */
  w32((uint32_t)(0x120e1180), (EAX));
L_120ad4a7:;
  /* 120ad4a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad4aa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad4ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ad4b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad4b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad4b6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad4b9 jbe 0x120ad4df */
  if ((C.cf||C.zf)) goto L_120ad4df;
  /* 120ad4bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad4be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad4c1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ad4c4 push edx */
  push32((uint32_t)(EDX));
  /* 120ad4c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad4c7 mov al, byte ptr [0x120def36] */
  AL = (r8((uint32_t)(0x120def36)));
  /* 120ad4cc push eax */
  push32((uint32_t)(EAX));
  /* 120ad4cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad4d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad4d3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad4d6 push edx */
  push32((uint32_t)(EDX));
  /* 120ad4d7 call 0x120b3090 */
  push32(0x120ad4dcu); f_120b3090();
  /* 120ad4dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ad4df:;
  /* 120ad4df push 4 */
  push32((uint32_t)(0x4u));
  /* 120ad4e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad4e3 mov al, byte ptr [0x120def34] */
  AL = (r8((uint32_t)(0x120def34)));
  /* 120ad4e8 push eax */
  push32((uint32_t)(EAX));
  /* 120ad4e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad4ec add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad4ef push ecx */
  push32((uint32_t)(ECX));
  /* 120ad4f0 call 0x120b3090 */
  push32(0x120ad4f5u); f_120b3090();
  /* 120ad4f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad4f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad4fc jne 0x120ad519 */
  if (!C.zf) goto L_120ad519;
  /* 120ad4fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad501 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ad504 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120ad507 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad50a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ad50d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 120ad510 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad513 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120ad516 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_120ad519:;
  /* 120ad519 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad51c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad51f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_120ad522:;
  /* 120ad522 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad526 jne 0x120ad557 */
  if (!C.zf) goto L_120ad557;
  /* 120ad528 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad52c jne 0x120ad536 */
  if (!C.zf) goto L_120ad536;
  /* 120ad52e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad531 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad534 je 0x120ad557 */
  if (C.zf) goto L_120ad557;
L_120ad536:;
  /* 120ad536 push 0x120db7e4 */
  push32((uint32_t)(0x120db7e4u));
  /* 120ad53b push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad53d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 120ad542 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad547 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad549 call 0x120ab840 */
  push32(0x120ad54eu); f_120ab840();
  /* 120ad54e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad551 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad554 jne 0x120ad557 */
  if (!C.zf) goto L_120ad557;
  /* 120ad556 int3  */
  x86_unimpl("int3 @ 0x120ad556");
L_120ad557:;
  /* 120ad557 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ad559 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ad55b jne 0x120ad522 */
  if (!C.zf) goto L_120ad522;
  /* 120ad55d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad560 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad563 je 0x120ad56b */
  if (C.zf) goto L_120ad56b;
  /* 120ad565 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad569 je 0x120ad573 */
  if (C.zf) goto L_120ad573;
L_120ad56b:;
  /* 120ad56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad56e jmp 0x120ad65a */
  goto L_120ad65a;
L_120ad573:;
  /* 120ad573 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad576 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad579 je 0x120ad58b */
  if (C.zf) goto L_120ad58b;
  /* 120ad57b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad57e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120ad580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad583 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120ad586 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120ad589 jmp 0x120ad5c7 */
  goto L_120ad5c7;
L_120ad58b:;
  /* 120ad58b mov eax, dword ptr [0x120e1170] */
  EAX = (r32((uint32_t)(0x120e1170)));
  /* 120ad590 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad593 je 0x120ad5b6 */
  if (C.zf) goto L_120ad5b6;
  /* 120ad595 push 0x120db7c8 */
  push32((uint32_t)(0x120db7c8u));
  /* 120ad59a push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad59c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 120ad5a1 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad5a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad5a8 call 0x120ab840 */
  push32(0x120ad5adu); f_120ab840();
  /* 120ad5ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad5b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad5b3 jne 0x120ad5b6 */
  if (!C.zf) goto L_120ad5b6;
  /* 120ad5b5 int3  */
  x86_unimpl("int3 @ 0x120ad5b5");
L_120ad5b6:;
  /* 120ad5b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad5b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad5ba jne 0x120ad58b */
  if (!C.zf) goto L_120ad58b;
  /* 120ad5bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad5bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ad5c2 mov dword ptr [0x120e1170], eax */
  w32((uint32_t)(0x120e1170), (EAX));
L_120ad5c7:;
  /* 120ad5c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad5ca cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad5ce je 0x120ad5df */
  if (C.zf) goto L_120ad5df;
  /* 120ad5d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad5d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ad5d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad5d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120ad5db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120ad5dd jmp 0x120ad61a */
  goto L_120ad61a;
L_120ad5df:;
  /* 120ad5df mov eax, dword ptr [0x120e1178] */
  EAX = (r32((uint32_t)(0x120e1178)));
  /* 120ad5e4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad5e7 je 0x120ad60a */
  if (C.zf) goto L_120ad60a;
  /* 120ad5e9 push 0x120db7ac */
  push32((uint32_t)(0x120db7acu));
  /* 120ad5ee push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad5f0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 120ad5f5 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad5fa push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad5fc call 0x120ab840 */
  push32(0x120ad601u); f_120ab840();
  /* 120ad601 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad604 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad607 jne 0x120ad60a */
  if (!C.zf) goto L_120ad60a;
  /* 120ad609 int3  */
  x86_unimpl("int3 @ 0x120ad609");
L_120ad60a:;
  /* 120ad60a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad60c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad60e jne 0x120ad5df */
  if (!C.zf) goto L_120ad5df;
  /* 120ad610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad613 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120ad615 mov dword ptr [0x120e1178], eax */
  w32((uint32_t)(0x120e1178), (EAX));
L_120ad61a:;
  /* 120ad61a cmp dword ptr [0x120e1178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad621 je 0x120ad631 */
  if (C.zf) goto L_120ad631;
  /* 120ad623 mov ecx, dword ptr [0x120e1178] */
  ECX = (r32((uint32_t)(0x120e1178)));
  /* 120ad629 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad62c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120ad62f jmp 0x120ad639 */
  goto L_120ad639;
L_120ad631:;
  /* 120ad631 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad634 mov dword ptr [0x120e1170], eax */
  w32((uint32_t)(0x120e1170), (EAX));
L_120ad639:;
  /* 120ad639 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad63c mov edx, dword ptr [0x120e1178] */
  EDX = (r32((uint32_t)(0x120e1178)));
  /* 120ad642 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120ad644 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad647 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 120ad64e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ad651 mov dword ptr [0x120e1178], ecx */
  w32((uint32_t)(0x120e1178), (ECX));
  /* 120ad657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120ad65a:;
  /* 120ad65a pop edi */
  EDI = (pop32());
  /* 120ad65b pop esi */
  ESI = (pop32());
  /* 120ad65c pop ebx */
  EBX = (pop32());
  /* 120ad65d mov esp, ebp */
  ESP = (EBP);
  /* 120ad65f pop ebp */
  EBP = (pop32());
  /* 120ad660 ret  */
  ESPCHK(0x120ad150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d670 @ 0x120ad670 (27 bytes, 13 insns) */
void f_120ad670(void) {
  FTRACE(0x120ad670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad670 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad671 mov ebp, esp */
  EBP = (ESP);
  /* 120ad673 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad675 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad677 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad679 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad67c push eax */
  push32((uint32_t)(EAX));
  /* 120ad67d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad680 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad681 call 0x120ad690 */
  push32(0x120ad686u); f_120ad690();
  /* 120ad686 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad689 pop ebp */
  EBP = (pop32());
  /* 120ad68a ret  */
  ESPCHK(0x120ad670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d690 @ 0x120ad690 (64 bytes, 27 insns) */
void f_120ad690(void) {
  FTRACE(0x120ad690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad690 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad691 mov ebp, esp */
  EBP = (ESP);
  /* 120ad693 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad694 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ad696 call 0x120acb80 */
  push32(0x120ad69bu); f_120acb80();
  /* 120ad69b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad69e push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad6a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ad6a3 push eax */
  push32((uint32_t)(EAX));
  /* 120ad6a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ad6a7 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad6a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ad6ab push edx */
  push32((uint32_t)(EDX));
  /* 120ad6ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad6af push eax */
  push32((uint32_t)(EAX));
  /* 120ad6b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad6b4 call 0x120ad150 */
  push32(0x120ad6b9u); f_120ad150();
  /* 120ad6b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad6bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ad6bf push 9 */
  push32((uint32_t)(0x9u));
  /* 120ad6c1 call 0x120acc20 */
  push32(0x120ad6c6u); f_120acc20();
  /* 120ad6c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad6c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad6cc mov esp, ebp */
  ESP = (EBP);
  /* 120ad6ce pop ebp */
  EBP = (pop32());
  /* 120ad6cf ret  */
  ESPCHK(0x120ad690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x120ad6d0 (19 bytes, 9 insns) */
void f_120ad6d0(void) {
  FTRACE(0x120ad6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad6d1 mov ebp, esp */
  EBP = (ESP);
  /* 120ad6d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad6d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad6d8 push eax */
  push32((uint32_t)(EAX));
  /* 120ad6d9 call 0x120ad710 */
  push32(0x120ad6deu); f_120ad710();
  /* 120ad6de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad6e1 pop ebp */
  EBP = (pop32());
  /* 120ad6e2 ret  */
  ESPCHK(0x120ad6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6f0 @ 0x120ad6f0 (19 bytes, 9 insns) */
void f_120ad6f0(void) {
  FTRACE(0x120ad6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad6f1 mov ebp, esp */
  EBP = (ESP);
  /* 120ad6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad6f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad6f8 push eax */
  push32((uint32_t)(EAX));
  /* 120ad6f9 call 0x120ad740 */
  push32(0x120ad6feu); f_120ad740();
  /* 120ad6fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad701 pop ebp */
  EBP = (pop32());
  /* 120ad702 ret  */
  ESPCHK(0x120ad6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d710 @ 0x120ad710 (41 bytes, 16 insns) */
void f_120ad710(void) {
  FTRACE(0x120ad710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad710 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad711 mov ebp, esp */
  EBP = (ESP);
  /* 120ad713 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ad715 call 0x120acb80 */
  push32(0x120ad71au); f_120acb80();
  /* 120ad71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad71d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad720 push eax */
  push32((uint32_t)(EAX));
  /* 120ad721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad724 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad725 call 0x120ad740 */
  push32(0x120ad72au); f_120ad740();
  /* 120ad72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad72d push 9 */
  push32((uint32_t)(0x9u));
  /* 120ad72f call 0x120acc20 */
  push32(0x120ad734u); f_120acc20();
  /* 120ad734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad737 pop ebp */
  EBP = (pop32());
  /* 120ad738 ret  */
  ESPCHK(0x120ad710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d740 @ 0x120ad740 (1004 bytes, 342 insns) */
void f_120ad740(void) {
  FTRACE(0x120ad740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ad740 push ebp */
  push32((uint32_t)(EBP));
  /* 120ad741 mov ebp, esp */
  EBP = (ESP);
  /* 120ad743 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad744 push ebx */
  push32((uint32_t)(EBX));
  /* 120ad745 push esi */
  push32((uint32_t)(ESI));
  /* 120ad746 push edi */
  push32((uint32_t)(EDI));
  /* 120ad747 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120ad74c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120ad74f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad751 je 0x120ad783 */
  if (C.zf) goto L_120ad783;
L_120ad753:;
  /* 120ad753 call 0x120ade20 */
  push32(0x120ad758u); f_120ade20();
  /* 120ad758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad75a jne 0x120ad77d */
  if (!C.zf) goto L_120ad77d;
  /* 120ad75c push 0x120db798 */
  push32((uint32_t)(0x120db798u));
  /* 120ad761 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad763 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 120ad768 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad76d push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad76f call 0x120ab840 */
  push32(0x120ad774u); f_120ab840();
  /* 120ad774 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad777 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad77a jne 0x120ad77d */
  if (!C.zf) goto L_120ad77d;
  /* 120ad77c int3  */
  x86_unimpl("int3 @ 0x120ad77c");
L_120ad77d:;
  /* 120ad77d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad77f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad781 jne 0x120ad753 */
  if (!C.zf) goto L_120ad753;
L_120ad783:;
  /* 120ad783 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad787 jne 0x120ad78e */
  if (!C.zf) goto L_120ad78e;
  /* 120ad789 jmp 0x120adb25 */
  goto L_120adb25;
L_120ad78e:;
  /* 120ad78e push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad790 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad792 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad794 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ad797 push edx */
  push32((uint32_t)(EDX));
  /* 120ad798 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad79a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad79d push eax */
  push32((uint32_t)(EAX));
  /* 120ad79e push 3 */
  push32((uint32_t)(0x3u));
  /* 120ad7a0 call dword ptr [0x120df260] */
  call_ind((uint32_t)(r32((uint32_t)(0x120df260))), 0x120ad7a6u);
  /* 120ad7a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad7a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad7ab jne 0x120ad7d8 */
  if (!C.zf) goto L_120ad7d8;
L_120ad7ad:;
  /* 120ad7ad push 0x120dba34 */
  push32((uint32_t)(0x120dba34u));
  /* 120ad7b2 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ad7b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad7b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad7bb push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad7bd push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad7bf call 0x120ab840 */
  push32(0x120ad7c4u); f_120ab840();
  /* 120ad7c4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad7c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad7ca jne 0x120ad7cd */
  if (!C.zf) goto L_120ad7cd;
  /* 120ad7cc int3  */
  x86_unimpl("int3 @ 0x120ad7cc");
L_120ad7cd:;
  /* 120ad7cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad7cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad7d1 jne 0x120ad7ad */
  if (!C.zf) goto L_120ad7ad;
  /* 120ad7d3 jmp 0x120adb25 */
  goto L_120adb25;
L_120ad7d8:;
  /* 120ad7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad7db push edx */
  push32((uint32_t)(EDX));
  /* 120ad7dc call 0x120ae280 */
  push32(0x120ad7e1u); f_120ae280();
  /* 120ad7e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad7e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad7e6 jne 0x120ad809 */
  if (!C.zf) goto L_120ad809;
  /* 120ad7e8 push 0x120db89c */
  push32((uint32_t)(0x120db89cu));
  /* 120ad7ed push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad7ef push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 120ad7f4 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad7f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad7fb call 0x120ab840 */
  push32(0x120ad800u); f_120ab840();
  /* 120ad800 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad803 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad806 jne 0x120ad809 */
  if (!C.zf) goto L_120ad809;
  /* 120ad808 int3  */
  x86_unimpl("int3 @ 0x120ad808");
L_120ad809:;
  /* 120ad809 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad80b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad80d jne 0x120ad7d8 */
  if (!C.zf) goto L_120ad7d8;
  /* 120ad80f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ad812 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ad815 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120ad818:;
  /* 120ad818 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad81b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ad81e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ad823 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad826 je 0x120ad86b */
  if (C.zf) goto L_120ad86b;
  /* 120ad828 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad82b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad82f je 0x120ad86b */
  if (C.zf) goto L_120ad86b;
  /* 120ad831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad834 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ad837 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ad83c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad83f je 0x120ad86b */
  if (C.zf) goto L_120ad86b;
  /* 120ad841 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad844 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad848 je 0x120ad86b */
  if (C.zf) goto L_120ad86b;
  /* 120ad84a push 0x120db3b8 */
  push32((uint32_t)(0x120db3b8u));
  /* 120ad84f push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad851 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 120ad856 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad85b push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad85d call 0x120ab840 */
  push32(0x120ad862u); f_120ab840();
  /* 120ad862 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad865 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad868 jne 0x120ad86b */
  if (!C.zf) goto L_120ad86b;
  /* 120ad86a int3  */
  x86_unimpl("int3 @ 0x120ad86a");
L_120ad86b:;
  /* 120ad86b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ad86d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ad86f jne 0x120ad818 */
  if (!C.zf) goto L_120ad818;
  /* 120ad871 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120ad876 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120ad879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad87b jne 0x120ad946 */
  if (!C.zf) goto L_120ad946;
  /* 120ad881 push 4 */
  push32((uint32_t)(0x4u));
  /* 120ad883 mov cl, byte ptr [0x120def34] */
  CL = (r8((uint32_t)(0x120def34)));
  /* 120ad889 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad88a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad88d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad890 push edx */
  push32((uint32_t)(EDX));
  /* 120ad891 call 0x120add90 */
  push32(0x120ad896u); f_120add90();
  /* 120ad896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad89b jne 0x120ad8e0 */
  if (!C.zf) goto L_120ad8e0;
L_120ad89d:;
  /* 120ad89d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad8a0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad8a3 push eax */
  push32((uint32_t)(EAX));
  /* 120ad8a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad8a7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120ad8aa push edx */
  push32((uint32_t)(EDX));
  /* 120ad8ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad8ae mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120ad8b1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ad8b7 mov edx, dword ptr [ecx*4 + 0x120def38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120def38)));
  /* 120ad8be push edx */
  push32((uint32_t)(EDX));
  /* 120ad8bf push 0x120dba08 */
  push32((uint32_t)(0x120dba08u));
  /* 120ad8c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad8c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad8c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad8ca push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad8cc call 0x120ab840 */
  push32(0x120ad8d1u); f_120ab840();
  /* 120ad8d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad8d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad8d7 jne 0x120ad8da */
  if (!C.zf) goto L_120ad8da;
  /* 120ad8d9 int3  */
  x86_unimpl("int3 @ 0x120ad8d9");
L_120ad8da:;
  /* 120ad8da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad8dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad8de jne 0x120ad89d */
  if (!C.zf) goto L_120ad89d;
L_120ad8e0:;
  /* 120ad8e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 120ad8e2 mov cl, byte ptr [0x120def34] */
  CL = (r8((uint32_t)(0x120def34)));
  /* 120ad8e8 push ecx */
  push32((uint32_t)(ECX));
  /* 120ad8e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad8ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120ad8ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad8f2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 120ad8f6 push edx */
  push32((uint32_t)(EDX));
  /* 120ad8f7 call 0x120add90 */
  push32(0x120ad8fcu); f_120add90();
  /* 120ad8fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad901 jne 0x120ad946 */
  if (!C.zf) goto L_120ad946;
L_120ad903:;
  /* 120ad903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad906 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad909 push eax */
  push32((uint32_t)(EAX));
  /* 120ad90a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad90d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120ad910 push edx */
  push32((uint32_t)(EDX));
  /* 120ad911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad914 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120ad917 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ad91d mov edx, dword ptr [ecx*4 + 0x120def38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120def38)));
  /* 120ad924 push edx */
  push32((uint32_t)(EDX));
  /* 120ad925 push 0x120db9dc */
  push32((uint32_t)(0x120db9dcu));
  /* 120ad92a push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad92c push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad92e push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad930 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ad932 call 0x120ab840 */
  push32(0x120ad937u); f_120ab840();
  /* 120ad937 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad93a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad93d jne 0x120ad940 */
  if (!C.zf) goto L_120ad940;
  /* 120ad93f int3  */
  x86_unimpl("int3 @ 0x120ad93f");
L_120ad940:;
  /* 120ad940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ad942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ad944 jne 0x120ad903 */
  if (!C.zf) goto L_120ad903;
L_120ad946:;
  /* 120ad946 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad949 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad94d jne 0x120ad9bb */
  if (!C.zf) goto L_120ad9bb;
L_120ad94f:;
  /* 120ad94f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad952 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad959 jne 0x120ad964 */
  if (!C.zf) goto L_120ad964;
  /* 120ad95b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad95e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad962 je 0x120ad985 */
  if (C.zf) goto L_120ad985;
L_120ad964:;
  /* 120ad964 push 0x120db99c */
  push32((uint32_t)(0x120db99cu));
  /* 120ad969 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad96b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 120ad970 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad975 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad977 call 0x120ab840 */
  push32(0x120ad97cu); f_120ab840();
  /* 120ad97c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad97f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad982 jne 0x120ad985 */
  if (!C.zf) goto L_120ad985;
  /* 120ad984 int3  */
  x86_unimpl("int3 @ 0x120ad984");
L_120ad985:;
  /* 120ad985 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad987 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ad989 jne 0x120ad94f */
  if (!C.zf) goto L_120ad94f;
  /* 120ad98b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad98e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120ad991 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad994 push eax */
  push32((uint32_t)(EAX));
  /* 120ad995 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad997 mov cl, byte ptr [0x120def35] */
  CL = (r8((uint32_t)(0x120def35)));
  /* 120ad99d push ecx */
  push32((uint32_t)(ECX));
  /* 120ad99e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad9a1 push edx */
  push32((uint32_t)(EDX));
  /* 120ad9a2 call 0x120b3090 */
  push32(0x120ad9a7u); f_120b3090();
  /* 120ad9a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad9aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad9ad push eax */
  push32((uint32_t)(EAX));
  /* 120ad9ae call 0x120b3850 */
  push32(0x120ad9b3u); f_120b3850();
  /* 120ad9b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad9b6 jmp 0x120adb25 */
  goto L_120adb25;
L_120ad9bb:;
  /* 120ad9bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad9be cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad9c2 jne 0x120ad9d1 */
  if (!C.zf) goto L_120ad9d1;
  /* 120ad9c4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad9c8 jne 0x120ad9d1 */
  if (!C.zf) goto L_120ad9d1;
  /* 120ad9ca mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_120ad9d1:;
  /* 120ad9d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ad9d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ad9d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad9da je 0x120ad9fd */
  if (C.zf) goto L_120ad9fd;
  /* 120ad9dc push 0x120db97c */
  push32((uint32_t)(0x120db97cu));
  /* 120ad9e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ad9e3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 120ad9e8 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ad9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 120ad9ef call 0x120ab840 */
  push32(0x120ad9f4u); f_120ab840();
  /* 120ad9f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ad9f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ad9fa jne 0x120ad9fd */
  if (!C.zf) goto L_120ad9fd;
  /* 120ad9fc int3  */
  x86_unimpl("int3 @ 0x120ad9fc");
L_120ad9fd:;
  /* 120ad9fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ad9ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ada01 jne 0x120ad9d1 */
  if (!C.zf) goto L_120ad9d1;
  /* 120ada03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada06 mov eax, dword ptr [0x120e117c] */
  EAX = (r32((uint32_t)(0x120e117c)));
  /* 120ada0b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ada0e mov dword ptr [0x120e117c], eax */
  w32((uint32_t)(0x120e117c), (EAX));
  /* 120ada13 mov ecx, dword ptr [0x120def28] */
  ECX = (r32((uint32_t)(0x120def28)));
  /* 120ada19 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120ada1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ada1e jne 0x120adafc */
  if (!C.zf) goto L_120adafc;
  /* 120ada24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ada2a je 0x120ada3c */
  if (C.zf) goto L_120ada3c;
  /* 120ada2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120ada31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada34 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120ada37 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120ada3a jmp 0x120ada7a */
  goto L_120ada7a;
L_120ada3c:;
  /* 120ada3c mov ecx, dword ptr [0x120e1170] */
  ECX = (r32((uint32_t)(0x120e1170)));
  /* 120ada42 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ada45 je 0x120ada68 */
  if (C.zf) goto L_120ada68;
  /* 120ada47 push 0x120db964 */
  push32((uint32_t)(0x120db964u));
  /* 120ada4c push 0 */
  push32((uint32_t)(0x0u));
  /* 120ada4e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 120ada53 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120ada58 push 2 */
  push32((uint32_t)(0x2u));
  /* 120ada5a call 0x120ab840 */
  push32(0x120ada5fu); f_120ab840();
  /* 120ada5f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ada62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ada65 jne 0x120ada68 */
  if (!C.zf) goto L_120ada68;
  /* 120ada67 int3  */
  x86_unimpl("int3 @ 0x120ada67");
L_120ada68:;
  /* 120ada68 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ada6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ada6c jne 0x120ada3c */
  if (!C.zf) goto L_120ada3c;
  /* 120ada6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada71 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ada74 mov dword ptr [0x120e1170], ecx */
  w32((uint32_t)(0x120e1170), (ECX));
L_120ada7a:;
  /* 120ada7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada7d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ada81 je 0x120ada92 */
  if (C.zf) goto L_120ada92;
  /* 120ada83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120ada89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ada8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120ada8e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120ada90 jmp 0x120adacf */
  goto L_120adacf;
L_120ada92:;
  /* 120ada92 mov ecx, dword ptr [0x120e1178] */
  ECX = (r32((uint32_t)(0x120e1178)));
  /* 120ada98 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ada9b je 0x120adabe */
  if (C.zf) goto L_120adabe;
  /* 120ada9d push 0x120db94c */
  push32((uint32_t)(0x120db94cu));
  /* 120adaa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adaa4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 120adaa9 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120adaae push 2 */
  push32((uint32_t)(0x2u));
  /* 120adab0 call 0x120ab840 */
  push32(0x120adab5u); f_120ab840();
  /* 120adab5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adab8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adabb jne 0x120adabe */
  if (!C.zf) goto L_120adabe;
  /* 120adabd int3  */
  x86_unimpl("int3 @ 0x120adabd");
L_120adabe:;
  /* 120adabe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120adac0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120adac2 jne 0x120ada92 */
  if (!C.zf) goto L_120ada92;
  /* 120adac4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adac7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120adac9 mov dword ptr [0x120e1178], ecx */
  w32((uint32_t)(0x120e1178), (ECX));
L_120adacf:;
  /* 120adacf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adad2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120adad5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120adad8 push eax */
  push32((uint32_t)(EAX));
  /* 120adad9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120adadb mov cl, byte ptr [0x120def35] */
  CL = (r8((uint32_t)(0x120def35)));
  /* 120adae1 push ecx */
  push32((uint32_t)(ECX));
  /* 120adae2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adae5 push edx */
  push32((uint32_t)(EDX));
  /* 120adae6 call 0x120b3090 */
  push32(0x120adaebu); f_120b3090();
  /* 120adaeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adaee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adaf1 push eax */
  push32((uint32_t)(EAX));
  /* 120adaf2 call 0x120b3850 */
  push32(0x120adaf7u); f_120b3850();
  /* 120adaf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adafa jmp 0x120adb25 */
  goto L_120adb25;
L_120adafc:;
  /* 120adafc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adaff mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 120adb06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adb09 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120adb0c push eax */
  push32((uint32_t)(EAX));
  /* 120adb0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120adb0f mov cl, byte ptr [0x120def35] */
  CL = (r8((uint32_t)(0x120def35)));
  /* 120adb15 push ecx */
  push32((uint32_t)(ECX));
  /* 120adb16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adb19 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120adb1c push edx */
  push32((uint32_t)(EDX));
  /* 120adb1d call 0x120b3090 */
  push32(0x120adb22u); f_120b3090();
  /* 120adb22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120adb25:;
  /* 120adb25 pop edi */
  EDI = (pop32());
  /* 120adb26 pop esi */
  ESI = (pop32());
  /* 120adb27 pop ebx */
  EBX = (pop32());
  /* 120adb28 mov esp, ebp */
  ESP = (EBP);
  /* 120adb2a pop ebp */
  EBP = (pop32());
  /* 120adb2b ret  */
  ESPCHK(0x120ad740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db30 @ 0x120adb30 (19 bytes, 9 insns) */
void f_120adb30(void) {
  FTRACE(0x120adb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120adb30 push ebp */
  push32((uint32_t)(EBP));
  /* 120adb31 mov ebp, esp */
  EBP = (ESP);
  /* 120adb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 120adb35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120adb38 push eax */
  push32((uint32_t)(EAX));
  /* 120adb39 call 0x120adb50 */
  push32(0x120adb3eu); f_120adb50();
  /* 120adb3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adb41 pop ebp */
  EBP = (pop32());
  /* 120adb42 ret  */
  ESPCHK(0x120adb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db50 @ 0x120adb50 (342 bytes, 119 insns) */
void f_120adb50(void) {
  FTRACE(0x120adb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120adb50 push ebp */
  push32((uint32_t)(EBP));
  /* 120adb51 mov ebp, esp */
  EBP = (ESP);
  /* 120adb53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120adb56 push ebx */
  push32((uint32_t)(EBX));
  /* 120adb57 push esi */
  push32((uint32_t)(ESI));
  /* 120adb58 push edi */
  push32((uint32_t)(EDI));
  /* 120adb59 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120adb5e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120adb61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120adb63 je 0x120adb95 */
  if (C.zf) goto L_120adb95;
L_120adb65:;
  /* 120adb65 call 0x120ade20 */
  push32(0x120adb6au); f_120ade20();
  /* 120adb6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120adb6c jne 0x120adb8f */
  if (!C.zf) goto L_120adb8f;
  /* 120adb6e push 0x120db798 */
  push32((uint32_t)(0x120db798u));
  /* 120adb73 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adb75 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 120adb7a push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120adb7f push 2 */
  push32((uint32_t)(0x2u));
  /* 120adb81 call 0x120ab840 */
  push32(0x120adb86u); f_120ab840();
  /* 120adb86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adb89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adb8c jne 0x120adb8f */
  if (!C.zf) goto L_120adb8f;
  /* 120adb8e int3  */
  x86_unimpl("int3 @ 0x120adb8e");
L_120adb8f:;
  /* 120adb8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120adb91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120adb93 jne 0x120adb65 */
  if (!C.zf) goto L_120adb65;
L_120adb95:;
  /* 120adb95 push 9 */
  push32((uint32_t)(0x9u));
  /* 120adb97 call 0x120acb80 */
  push32(0x120adb9cu); f_120acb80();
  /* 120adb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120adb9f:;
  /* 120adb9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120adba2 push edx */
  push32((uint32_t)(EDX));
  /* 120adba3 call 0x120ae280 */
  push32(0x120adba8u); f_120ae280();
  /* 120adba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adbab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120adbad jne 0x120adbd0 */
  if (!C.zf) goto L_120adbd0;
  /* 120adbaf push 0x120db89c */
  push32((uint32_t)(0x120db89cu));
  /* 120adbb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adbb6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 120adbbb push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120adbc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120adbc2 call 0x120ab840 */
  push32(0x120adbc7u); f_120ab840();
  /* 120adbc7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adbca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adbcd jne 0x120adbd0 */
  if (!C.zf) goto L_120adbd0;
  /* 120adbcf int3  */
  x86_unimpl("int3 @ 0x120adbcf");
L_120adbd0:;
  /* 120adbd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120adbd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120adbd4 jne 0x120adb9f */
  if (!C.zf) goto L_120adb9f;
  /* 120adbd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120adbd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120adbdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120adbdf:;
  /* 120adbdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adbe2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120adbe5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120adbea cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adbed je 0x120adc32 */
  if (C.zf) goto L_120adc32;
  /* 120adbef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adbf2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adbf6 je 0x120adc32 */
  if (C.zf) goto L_120adc32;
  /* 120adbf8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adbfb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120adbfe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120adc03 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc06 je 0x120adc32 */
  if (C.zf) goto L_120adc32;
  /* 120adc08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adc0b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc0f je 0x120adc32 */
  if (C.zf) goto L_120adc32;
  /* 120adc11 push 0x120db3b8 */
  push32((uint32_t)(0x120db3b8u));
  /* 120adc16 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adc18 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 120adc1d push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120adc22 push 2 */
  push32((uint32_t)(0x2u));
  /* 120adc24 call 0x120ab840 */
  push32(0x120adc29u); f_120ab840();
  /* 120adc29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adc2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc2f jne 0x120adc32 */
  if (!C.zf) goto L_120adc32;
  /* 120adc31 int3  */
  x86_unimpl("int3 @ 0x120adc31");
L_120adc32:;
  /* 120adc32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120adc34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120adc36 jne 0x120adbdf */
  if (!C.zf) goto L_120adbdf;
  /* 120adc38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adc3b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc3f jne 0x120adc4e */
  if (!C.zf) goto L_120adc4e;
  /* 120adc41 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc45 jne 0x120adc4e */
  if (!C.zf) goto L_120adc4e;
  /* 120adc47 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_120adc4e:;
  /* 120adc4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adc51 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc55 je 0x120adc89 */
  if (C.zf) goto L_120adc89;
L_120adc57:;
  /* 120adc57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adc5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120adc5d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc60 je 0x120adc83 */
  if (C.zf) goto L_120adc83;
  /* 120adc62 push 0x120db97c */
  push32((uint32_t)(0x120db97cu));
  /* 120adc67 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adc69 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 120adc6e push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120adc73 push 2 */
  push32((uint32_t)(0x2u));
  /* 120adc75 call 0x120ab840 */
  push32(0x120adc7au); f_120ab840();
  /* 120adc7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adc7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adc80 jne 0x120adc83 */
  if (!C.zf) goto L_120adc83;
  /* 120adc82 int3  */
  x86_unimpl("int3 @ 0x120adc82");
L_120adc83:;
  /* 120adc83 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120adc85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120adc87 jne 0x120adc57 */
  if (!C.zf) goto L_120adc57;
L_120adc89:;
  /* 120adc89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adc8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120adc8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120adc92 push 9 */
  push32((uint32_t)(0x9u));
  /* 120adc94 call 0x120acc20 */
  push32(0x120adc99u); f_120acc20();
  /* 120adc99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adc9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adc9f pop edi */
  EDI = (pop32());
  /* 120adca0 pop esi */
  ESI = (pop32());
  /* 120adca1 pop ebx */
  EBX = (pop32());
  /* 120adca2 mov esp, ebp */
  ESP = (EBP);
  /* 120adca4 pop ebp */
  EBP = (pop32());
  /* 120adca5 ret  */
  ESPCHK(0x120adb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x120adcb0 (28 bytes, 11 insns) */
void f_120adcb0(void) {
  FTRACE(0x120adcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120adcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 120adcb1 mov ebp, esp */
  EBP = (ESP);
  /* 120adcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 120adcb4 mov eax, dword ptr [0x120def30] */
  EAX = (r32((uint32_t)(0x120def30)));
  /* 120adcb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120adcbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120adcbf mov dword ptr [0x120def30], ecx */
  w32((uint32_t)(0x120def30), (ECX));
  /* 120adcc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adcc8 mov esp, ebp */
  ESP = (EBP);
  /* 120adcca pop ebp */
  EBP = (pop32());
  /* 120adccb ret  */
  ESPCHK(0x120adcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcd0 @ 0x120adcd0 (157 bytes, 59 insns) */
void f_120adcd0(void) {
  FTRACE(0x120adcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120adcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120adcd1 mov ebp, esp */
  EBP = (ESP);
  /* 120adcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 120adcd4 push ebx */
  push32((uint32_t)(EBX));
  /* 120adcd5 push esi */
  push32((uint32_t)(ESI));
  /* 120adcd6 push edi */
  push32((uint32_t)(EDI));
  /* 120adcd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 120adcd9 call 0x120acb80 */
  push32(0x120adcdeu); f_120acb80();
  /* 120adcde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120adce4 push eax */
  push32((uint32_t)(EAX));
  /* 120adce5 call 0x120ae280 */
  push32(0x120adceau); f_120ae280();
  /* 120adcea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120adcef je 0x120add5c */
  if (C.zf) goto L_120add5c;
  /* 120adcf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120adcf4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120adcf7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120adcfa:;
  /* 120adcfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120adcfd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120add00 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120add05 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120add08 je 0x120add4d */
  if (C.zf) goto L_120add4d;
  /* 120add0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120add0d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120add11 je 0x120add4d */
  if (C.zf) goto L_120add4d;
  /* 120add13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120add16 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120add19 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120add1e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120add21 je 0x120add4d */
  if (C.zf) goto L_120add4d;
  /* 120add23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120add26 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120add2a je 0x120add4d */
  if (C.zf) goto L_120add4d;
  /* 120add2c push 0x120db3b8 */
  push32((uint32_t)(0x120db3b8u));
  /* 120add31 push 0 */
  push32((uint32_t)(0x0u));
  /* 120add33 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 120add38 push 0x120db78c */
  push32((uint32_t)(0x120db78cu));
  /* 120add3d push 2 */
  push32((uint32_t)(0x2u));
  /* 120add3f call 0x120ab840 */
  push32(0x120add44u); f_120ab840();
  /* 120add44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120add47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120add4a jne 0x120add4d */
  if (!C.zf) goto L_120add4d;
  /* 120add4c int3  */
  x86_unimpl("int3 @ 0x120add4c");
L_120add4d:;
  /* 120add4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120add4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120add51 jne 0x120adcfa */
  if (!C.zf) goto L_120adcfa;
  /* 120add53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120add56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120add59 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_120add5c:;
  /* 120add5c push 9 */
  push32((uint32_t)(0x9u));
  /* 120add5e call 0x120acc20 */
  push32(0x120add63u); f_120acc20();
  /* 120add63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120add66 pop edi */
  EDI = (pop32());
  /* 120add67 pop esi */
  ESI = (pop32());
  /* 120add68 pop ebx */
  EBX = (pop32());
  /* 120add69 mov esp, ebp */
  ESP = (EBP);
  /* 120add6b pop ebp */
  EBP = (pop32());
  /* 120add6c ret  */
  ESPCHK(0x120adcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd70 @ 0x120add70 (28 bytes, 11 insns) */
void f_120add70(void) {
  FTRACE(0x120add70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120add70 push ebp */
  push32((uint32_t)(EBP));
  /* 120add71 mov ebp, esp */
  EBP = (ESP);
  /* 120add73 push ecx */
  push32((uint32_t)(ECX));
  /* 120add74 mov eax, dword ptr [0x120df260] */
  EAX = (r32((uint32_t)(0x120df260)));
  /* 120add79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120add7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120add7f mov dword ptr [0x120df260], ecx */
  w32((uint32_t)(0x120df260), (ECX));
  /* 120add85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120add88 mov esp, ebp */
  ESP = (EBP);
  /* 120add8a pop ebp */
  EBP = (pop32());
  /* 120add8b ret  */
  ESPCHK(0x120add70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd90 @ 0x120add90 (136 bytes, 55 insns) */
void f_120add90(void) {
  FTRACE(0x120add90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120add90 push ebp */
  push32((uint32_t)(EBP));
  /* 120add91 mov ebp, esp */
  EBP = (ESP);
  /* 120add93 push ecx */
  push32((uint32_t)(ECX));
  /* 120add94 push ebx */
  push32((uint32_t)(EBX));
  /* 120add95 push esi */
  push32((uint32_t)(ESI));
  /* 120add96 push edi */
  push32((uint32_t)(EDI));
  /* 120add97 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_120add9e:;
  /* 120add9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120adda1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120adda4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120adda7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120addaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120addac je 0x120ade0e */
  if (C.zf) goto L_120ade0e;
  /* 120addae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120addb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120addb3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120addb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120addb8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120addbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120addc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120addc4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120addc7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120addc9 je 0x120ade0c */
  if (C.zf) goto L_120ade0c;
L_120addcb:;
  /* 120addcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120addce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120addd3 push eax */
  push32((uint32_t)(EAX));
  /* 120addd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120addd7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120addd9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 120adddc push edx */
  push32((uint32_t)(EDX));
  /* 120adddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120adde0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120adde3 push eax */
  push32((uint32_t)(EAX));
  /* 120adde4 push 0x120dba50 */
  push32((uint32_t)(0x120dba50u));
  /* 120adde9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120addeb push 0 */
  push32((uint32_t)(0x0u));
  /* 120added push 0 */
  push32((uint32_t)(0x0u));
  /* 120addef push 0 */
  push32((uint32_t)(0x0u));
  /* 120addf1 call 0x120ab840 */
  push32(0x120addf6u); f_120ab840();
  /* 120addf6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120addf9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120addfc jne 0x120addff */
  if (!C.zf) goto L_120addff;
  /* 120addfe int3  */
  x86_unimpl("int3 @ 0x120addfe");
L_120addff:;
  /* 120addff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ade01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ade03 jne 0x120addcb */
  if (!C.zf) goto L_120addcb;
  /* 120ade05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120ade0c:;
  /* 120ade0c jmp 0x120add9e */
  goto L_120add9e;
L_120ade0e:;
  /* 120ade0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ade11 pop edi */
  EDI = (pop32());
  /* 120ade12 pop esi */
  ESI = (pop32());
  /* 120ade13 pop ebx */
  EBX = (pop32());
  /* 120ade14 mov esp, ebp */
  ESP = (EBP);
  /* 120ade16 pop ebp */
  EBP = (pop32());
  /* 120ade17 ret  */
  ESPCHK(0x120add90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x120ade20 (863 bytes, 299 insns) [1 switch table(s)] */
void f_120ade20(void) {
  FTRACE(0x120ade20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ade20 push ebp */
  push32((uint32_t)(EBP));
  /* 120ade21 mov ebp, esp */
  EBP = (ESP);
  /* 120ade23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ade26 push ebx */
  push32((uint32_t)(EBX));
  /* 120ade27 push esi */
  push32((uint32_t)(ESI));
  /* 120ade28 push edi */
  push32((uint32_t)(EDI));
  /* 120ade29 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120ade30 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120ade35 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120ade38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ade3a jne 0x120ade46 */
  if (!C.zf) goto L_120ade46;
  /* 120ade3c mov eax, 1 */
  EAX = (0x1u);
  /* 120ade41 jmp 0x120ae178 */
  goto L_120ae178;
L_120ade46:;
  /* 120ade46 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ade48 call 0x120acb80 */
  push32(0x120ade4du); f_120acb80();
  /* 120ade4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ade50 call 0x120b38c0 */
  push32(0x120ade55u); f_120b38c0();
  /* 120ade55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120ade58 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ade5c je 0x120adf69 */
  if (C.zf) goto L_120adf69;
  /* 120ade62 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ade66 je 0x120adf69 */
  if (C.zf) goto L_120adf69;
  /* 120ade6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120ade6f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120ade72 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120ade75 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ade78 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120ade7b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ade7f ja 0x120adf32 */
  if ((!C.cf&&!C.zf)) goto L_120adf32;
  /* 120ade85 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120ade88 jmp dword ptr [eax*4 + 0x120ae17f] */
  switch (EAX) {
    case 0: goto L_120adf0a;
    case 1: goto L_120adee2;
    case 2: goto L_120adeba;
    case 3: goto L_120ade8f;
    default: x86_unimpl("switch@0x120ade88 out of table"); return;
  }
L_120ade8f:;
  /* 120ade8f push 0x120dbba4 */
  push32((uint32_t)(0x120dbba4u));
  /* 120ade94 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ade99 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ade9b push 0 */
  push32((uint32_t)(0x0u));
  /* 120ade9d push 0 */
  push32((uint32_t)(0x0u));
  /* 120ade9f push 0 */
  push32((uint32_t)(0x0u));
  /* 120adea1 call 0x120ab840 */
  push32(0x120adea6u); f_120ab840();
  /* 120adea6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adeac jne 0x120adeaf */
  if (!C.zf) goto L_120adeaf;
  /* 120adeae int3  */
  x86_unimpl("int3 @ 0x120adeae");
L_120adeaf:;
  /* 120adeaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120adeb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120adeb3 jne 0x120ade8f */
  if (!C.zf) goto L_120ade8f;
  /* 120adeb5 jmp 0x120adf58 */
  goto L_120adf58;
L_120adeba:;
  /* 120adeba push 0x120dbb80 */
  push32((uint32_t)(0x120dbb80u));
  /* 120adebf push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120adec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adeca push 0 */
  push32((uint32_t)(0x0u));
  /* 120adecc call 0x120ab840 */
  push32(0x120aded1u); f_120ab840();
  /* 120aded1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aded4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aded7 jne 0x120adeda */
  if (!C.zf) goto L_120adeda;
  /* 120aded9 int3  */
  x86_unimpl("int3 @ 0x120aded9");
L_120adeda:;
  /* 120adeda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120adedc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120adede jne 0x120adeba */
  if (!C.zf) goto L_120adeba;
  /* 120adee0 jmp 0x120adf58 */
  goto L_120adf58;
L_120adee2:;
  /* 120adee2 push 0x120dbb5c */
  push32((uint32_t)(0x120dbb5cu));
  /* 120adee7 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120adeec push 0 */
  push32((uint32_t)(0x0u));
  /* 120adeee push 0 */
  push32((uint32_t)(0x0u));
  /* 120adef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adef4 call 0x120ab840 */
  push32(0x120adef9u); f_120ab840();
  /* 120adef9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adefc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adeff jne 0x120adf02 */
  if (!C.zf) goto L_120adf02;
  /* 120adf01 int3  */
  x86_unimpl("int3 @ 0x120adf01");
L_120adf02:;
  /* 120adf02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120adf04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120adf06 jne 0x120adee2 */
  if (!C.zf) goto L_120adee2;
  /* 120adf08 jmp 0x120adf58 */
  goto L_120adf58;
L_120adf0a:;
  /* 120adf0a push 0x120dbb38 */
  push32((uint32_t)(0x120dbb38u));
  /* 120adf0f push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120adf14 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf16 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf18 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf1a push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf1c call 0x120ab840 */
  push32(0x120adf21u); f_120ab840();
  /* 120adf21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adf24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adf27 jne 0x120adf2a */
  if (!C.zf) goto L_120adf2a;
  /* 120adf29 int3  */
  x86_unimpl("int3 @ 0x120adf29");
L_120adf2a:;
  /* 120adf2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120adf2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120adf2e jne 0x120adf0a */
  if (!C.zf) goto L_120adf0a;
  /* 120adf30 jmp 0x120adf58 */
  goto L_120adf58;
L_120adf32:;
  /* 120adf32 push 0x120dbb0c */
  push32((uint32_t)(0x120dbb0cu));
  /* 120adf37 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120adf3c push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf3e push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf40 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf42 push 0 */
  push32((uint32_t)(0x0u));
  /* 120adf44 call 0x120ab840 */
  push32(0x120adf49u); f_120ab840();
  /* 120adf49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adf4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adf4f jne 0x120adf52 */
  if (!C.zf) goto L_120adf52;
  /* 120adf51 int3  */
  x86_unimpl("int3 @ 0x120adf51");
L_120adf52:;
  /* 120adf52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120adf54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120adf56 jne 0x120adf32 */
  if (!C.zf) goto L_120adf32;
L_120adf58:;
  /* 120adf58 push 9 */
  push32((uint32_t)(0x9u));
  /* 120adf5a call 0x120acc20 */
  push32(0x120adf5fu); f_120acc20();
  /* 120adf5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adf62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120adf64 jmp 0x120ae178 */
  goto L_120ae178;
L_120adf69:;
  /* 120adf69 mov eax, dword ptr [0x120e1178] */
  EAX = (r32((uint32_t)(0x120e1178)));
  /* 120adf6e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120adf71 jmp 0x120adf7b */
  goto L_120adf7b;
L_120adf73:;
  /* 120adf73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adf76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120adf78 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120adf7b:;
  /* 120adf7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adf7f je 0x120ae16b */
  if (C.zf) goto L_120ae16b;
  /* 120adf85 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 120adf8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adf8f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120adf92 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120adf98 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adf9b je 0x120adfc0 */
  if (C.zf) goto L_120adfc0;
  /* 120adf9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adfa0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adfa4 je 0x120adfc0 */
  if (C.zf) goto L_120adfc0;
  /* 120adfa6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adfa9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120adfac and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120adfb2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adfb5 je 0x120adfc0 */
  if (C.zf) goto L_120adfc0;
  /* 120adfb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adfba cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120adfbe jne 0x120adfd8 */
  if (!C.zf) goto L_120adfd8;
L_120adfc0:;
  /* 120adfc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adfc3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120adfc6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120adfcc mov edx, dword ptr [ecx*4 + 0x120def38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120def38)));
  /* 120adfd3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120adfd6 jmp 0x120adfdf */
  goto L_120adfdf;
L_120adfd8:;
  /* 120adfd8 mov dword ptr [ebp - 0x14], 0x120dbb04 */
  w32((uint32_t)(EBP + -0x14), (0x120dbb04u));
L_120adfdf:;
  /* 120adfdf push 4 */
  push32((uint32_t)(0x4u));
  /* 120adfe1 mov al, byte ptr [0x120def34] */
  AL = (r8((uint32_t)(0x120def34)));
  /* 120adfe6 push eax */
  push32((uint32_t)(EAX));
  /* 120adfe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adfea add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120adfed push ecx */
  push32((uint32_t)(ECX));
  /* 120adfee call 0x120add90 */
  push32(0x120adff3u); f_120add90();
  /* 120adff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120adff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120adff8 jne 0x120ae034 */
  if (!C.zf) goto L_120ae034;
L_120adffa:;
  /* 120adffa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120adffd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae000 push edx */
  push32((uint32_t)(EDX));
  /* 120ae001 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae004 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120ae007 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae008 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120ae00b push edx */
  push32((uint32_t)(EDX));
  /* 120ae00c push 0x120dba08 */
  push32((uint32_t)(0x120dba08u));
  /* 120ae011 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae013 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae015 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae017 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae019 call 0x120ab840 */
  push32(0x120ae01eu); f_120ab840();
  /* 120ae01e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae021 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae024 jne 0x120ae027 */
  if (!C.zf) goto L_120ae027;
  /* 120ae026 int3  */
  x86_unimpl("int3 @ 0x120ae026");
L_120ae027:;
  /* 120ae027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae02b jne 0x120adffa */
  if (!C.zf) goto L_120adffa;
  /* 120ae02d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_120ae034:;
  /* 120ae034 push 4 */
  push32((uint32_t)(0x4u));
  /* 120ae036 mov cl, byte ptr [0x120def34] */
  CL = (r8((uint32_t)(0x120def34)));
  /* 120ae03c push ecx */
  push32((uint32_t)(ECX));
  /* 120ae03d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae040 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120ae043 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae046 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 120ae04a push edx */
  push32((uint32_t)(EDX));
  /* 120ae04b call 0x120add90 */
  push32(0x120ae050u); f_120add90();
  /* 120ae050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae053 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae055 jne 0x120ae091 */
  if (!C.zf) goto L_120ae091;
L_120ae057:;
  /* 120ae057 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae05a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae05d push eax */
  push32((uint32_t)(EAX));
  /* 120ae05e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae061 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120ae064 push edx */
  push32((uint32_t)(EDX));
  /* 120ae065 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120ae068 push eax */
  push32((uint32_t)(EAX));
  /* 120ae069 push 0x120db9dc */
  push32((uint32_t)(0x120db9dcu));
  /* 120ae06e push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae070 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae072 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae074 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae076 call 0x120ab840 */
  push32(0x120ae07bu); f_120ab840();
  /* 120ae07b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae07e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae081 jne 0x120ae084 */
  if (!C.zf) goto L_120ae084;
  /* 120ae083 int3  */
  x86_unimpl("int3 @ 0x120ae083");
L_120ae084:;
  /* 120ae084 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ae086 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ae088 jne 0x120ae057 */
  if (!C.zf) goto L_120ae057;
  /* 120ae08a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_120ae091:;
  /* 120ae091 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae094 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae098 jne 0x120ae0ea */
  if (!C.zf) goto L_120ae0ea;
  /* 120ae09a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae09d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120ae0a0 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae0a1 mov dl, byte ptr [0x120def35] */
  DL = (r8((uint32_t)(0x120def35)));
  /* 120ae0a7 push edx */
  push32((uint32_t)(EDX));
  /* 120ae0a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae0ab add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae0ae push eax */
  push32((uint32_t)(EAX));
  /* 120ae0af call 0x120add90 */
  push32(0x120ae0b4u); f_120add90();
  /* 120ae0b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae0b9 jne 0x120ae0ea */
  if (!C.zf) goto L_120ae0ea;
L_120ae0bb:;
  /* 120ae0bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae0be add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae0c1 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae0c2 push 0x120dbad8 */
  push32((uint32_t)(0x120dbad8u));
  /* 120ae0c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae0c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae0cb push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae0cd push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae0cf call 0x120ab840 */
  push32(0x120ae0d4u); f_120ab840();
  /* 120ae0d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae0d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae0da jne 0x120ae0dd */
  if (!C.zf) goto L_120ae0dd;
  /* 120ae0dc int3  */
  x86_unimpl("int3 @ 0x120ae0dc");
L_120ae0dd:;
  /* 120ae0dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ae0df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ae0e1 jne 0x120ae0bb */
  if (!C.zf) goto L_120ae0bb;
  /* 120ae0e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_120ae0ea:;
  /* 120ae0ea cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae0ee jne 0x120ae166 */
  if (!C.zf) goto L_120ae166;
  /* 120ae0f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae0f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae0f7 je 0x120ae12c */
  if (C.zf) goto L_120ae12c;
L_120ae0f9:;
  /* 120ae0f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae0fc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120ae0ff push edx */
  push32((uint32_t)(EDX));
  /* 120ae100 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae103 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120ae106 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae107 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120ae10a push edx */
  push32((uint32_t)(EDX));
  /* 120ae10b push 0x120dbab8 */
  push32((uint32_t)(0x120dbab8u));
  /* 120ae110 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae112 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae114 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae116 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae118 call 0x120ab840 */
  push32(0x120ae11du); f_120ab840();
  /* 120ae11d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae120 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae123 jne 0x120ae126 */
  if (!C.zf) goto L_120ae126;
  /* 120ae125 int3  */
  x86_unimpl("int3 @ 0x120ae125");
L_120ae126:;
  /* 120ae126 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae12a jne 0x120ae0f9 */
  if (!C.zf) goto L_120ae0f9;
L_120ae12c:;
  /* 120ae12c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae12f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120ae132 push edx */
  push32((uint32_t)(EDX));
  /* 120ae133 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae136 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae139 push eax */
  push32((uint32_t)(EAX));
  /* 120ae13a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120ae13d push ecx */
  push32((uint32_t)(ECX));
  /* 120ae13e push 0x120dba8c */
  push32((uint32_t)(0x120dba8cu));
  /* 120ae143 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae145 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae147 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae149 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae14b call 0x120ab840 */
  push32(0x120ae150u); f_120ab840();
  /* 120ae150 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae153 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae156 jne 0x120ae159 */
  if (!C.zf) goto L_120ae159;
  /* 120ae158 int3  */
  x86_unimpl("int3 @ 0x120ae158");
L_120ae159:;
  /* 120ae159 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ae15b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ae15d jne 0x120ae12c */
  if (!C.zf) goto L_120ae12c;
  /* 120ae15f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120ae166:;
  /* 120ae166 jmp 0x120adf73 */
  goto L_120adf73;
L_120ae16b:;
  /* 120ae16b push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae16d call 0x120acc20 */
  push32(0x120ae172u); f_120acc20();
  /* 120ae172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae175 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120ae178:;
  /* 120ae178 pop edi */
  EDI = (pop32());
  /* 120ae179 pop esi */
  ESI = (pop32());
  /* 120ae17a pop ebx */
  EBX = (pop32());
  /* 120ae17b mov esp, ebp */
  ESP = (EBP);
  /* 120ae17d pop ebp */
  EBP = (pop32());
  /* 120ae17e ret  */
  ESPCHK(0x120ade20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x120ae190 (34 bytes, 13 insns) */
void f_120ae190(void) {
  FTRACE(0x120ae190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae190 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae191 mov ebp, esp */
  EBP = (ESP);
  /* 120ae193 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae194 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120ae199 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ae19c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae1a0 je 0x120ae1ab */
  if (C.zf) goto L_120ae1ab;
  /* 120ae1a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae1a5 mov dword ptr [0x120def28], ecx */
  w32((uint32_t)(0x120def28), (ECX));
L_120ae1ab:;
  /* 120ae1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae1ae mov esp, ebp */
  ESP = (EBP);
  /* 120ae1b0 pop ebp */
  EBP = (pop32());
  /* 120ae1b1 ret  */
  ESPCHK(0x120ae190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x120ae1c0 (103 bytes, 38 insns) */
void f_120ae1c0(void) {
  FTRACE(0x120ae1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae1c1 mov ebp, esp */
  EBP = (ESP);
  /* 120ae1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae1c4 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120ae1c9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120ae1cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae1ce jne 0x120ae1d2 */
  if (!C.zf) goto L_120ae1d2;
  /* 120ae1d0 jmp 0x120ae223 */
  goto L_120ae223;
L_120ae1d2:;
  /* 120ae1d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae1d4 call 0x120acb80 */
  push32(0x120ae1d9u); f_120acb80();
  /* 120ae1d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae1dc mov ecx, dword ptr [0x120e1178] */
  ECX = (r32((uint32_t)(0x120e1178)));
  /* 120ae1e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ae1e5 jmp 0x120ae1ef */
  goto L_120ae1ef;
L_120ae1e7:;
  /* 120ae1e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae1ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120ae1ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ae1ef:;
  /* 120ae1ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae1f3 je 0x120ae219 */
  if (C.zf) goto L_120ae219;
  /* 120ae1f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae1f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120ae1fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ae201 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae204 jne 0x120ae217 */
  if (!C.zf) goto L_120ae217;
  /* 120ae206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae209 push eax */
  push32((uint32_t)(EAX));
  /* 120ae20a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae20d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae210 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae211 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x120ae214u);
  /* 120ae214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ae217:;
  /* 120ae217 jmp 0x120ae1e7 */
  goto L_120ae1e7;
L_120ae219:;
  /* 120ae219 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae21b call 0x120acc20 */
  push32(0x120ae220u); f_120acc20();
  /* 120ae220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ae223:;
  /* 120ae223 mov esp, ebp */
  ESP = (EBP);
  /* 120ae225 pop ebp */
  EBP = (pop32());
  /* 120ae226 ret  */
  ESPCHK(0x120ae1c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x120ae230 (75 bytes, 28 insns) */
void f_120ae230(void) {
  FTRACE(0x120ae230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae230 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae231 mov ebp, esp */
  EBP = (ESP);
  /* 120ae233 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae234 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae238 je 0x120ae26d */
  if (C.zf) goto L_120ae26d;
  /* 120ae23a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae23d push eax */
  push32((uint32_t)(EAX));
  /* 120ae23e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae241 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae242 call dword ptr [0x120e3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3408))), 0x120ae248u);
  /* 120ae248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae24a jne 0x120ae26d */
  if (!C.zf) goto L_120ae26d;
  /* 120ae24c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae250 je 0x120ae264 */
  if (C.zf) goto L_120ae264;
  /* 120ae252 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae255 push edx */
  push32((uint32_t)(EDX));
  /* 120ae256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae259 push eax */
  push32((uint32_t)(EAX));
  /* 120ae25a call dword ptr [0x120e340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e340c))), 0x120ae260u);
  /* 120ae260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae262 jne 0x120ae26d */
  if (!C.zf) goto L_120ae26d;
L_120ae264:;
  /* 120ae264 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120ae26b jmp 0x120ae274 */
  goto L_120ae274;
L_120ae26d:;
  /* 120ae26d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120ae274:;
  /* 120ae274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae277 mov esp, ebp */
  ESP = (EBP);
  /* 120ae279 pop ebp */
  EBP = (pop32());
  /* 120ae27a ret  */
  ESPCHK(0x120ae230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e280 @ 0x120ae280 (134 bytes, 50 insns) */
void f_120ae280(void) {
  FTRACE(0x120ae280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae280 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae281 mov ebp, esp */
  EBP = (ESP);
  /* 120ae283 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae284 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae288 jne 0x120ae28e */
  if (!C.zf) goto L_120ae28e;
  /* 120ae28a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae28c jmp 0x120ae302 */
  goto L_120ae302;
L_120ae28e:;
  /* 120ae28e push 1 */
  push32((uint32_t)(0x1u));
  /* 120ae290 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120ae292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae295 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae298 push eax */
  push32((uint32_t)(EAX));
  /* 120ae299 call 0x120ae230 */
  push32(0x120ae29eu); f_120ae230();
  /* 120ae29e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae2a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae2a3 jne 0x120ae2a9 */
  if (!C.zf) goto L_120ae2a9;
  /* 120ae2a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae2a7 jmp 0x120ae302 */
  goto L_120ae302;
L_120ae2a9:;
  /* 120ae2a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae2ac sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae2af push ecx */
  push32((uint32_t)(ECX));
  /* 120ae2b0 call 0x120b39e0 */
  push32(0x120ae2b5u); f_120b39e0();
  /* 120ae2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae2b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ae2bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae2bf je 0x120ae2d6 */
  if (C.zf) goto L_120ae2d6;
  /* 120ae2c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae2c4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae2c7 push edx */
  push32((uint32_t)(EDX));
  /* 120ae2c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae2cb push eax */
  push32((uint32_t)(EAX));
  /* 120ae2cc call 0x120b3a40 */
  push32(0x120ae2d1u); f_120b3a40();
  /* 120ae2d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae2d4 jmp 0x120ae302 */
  goto L_120ae302;
L_120ae2d6:;
  /* 120ae2d6 mov ecx, dword ptr [0x120e1188] */
  ECX = (r32((uint32_t)(0x120e1188)));
  /* 120ae2dc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120ae2e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ae2e4 je 0x120ae2ed */
  if (C.zf) goto L_120ae2ed;
  /* 120ae2e6 mov eax, 1 */
  EAX = (0x1u);
  /* 120ae2eb jmp 0x120ae302 */
  goto L_120ae302;
L_120ae2ed:;
  /* 120ae2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae2f0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae2f3 push edx */
  push32((uint32_t)(EDX));
  /* 120ae2f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae2f6 mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120ae2fb push eax */
  push32((uint32_t)(EAX));
  /* 120ae2fc call dword ptr [0x120e3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3404))), 0x120ae302u);
L_120ae302:;
  /* 120ae302 mov esp, ebp */
  ESP = (EBP);
  /* 120ae304 pop ebp */
  EBP = (pop32());
  /* 120ae305 ret  */
  ESPCHK(0x120ae280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e310 @ 0x120ae310 (227 bytes, 80 insns) */
void f_120ae310(void) {
  FTRACE(0x120ae310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae310 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae311 mov ebp, esp */
  EBP = (ESP);
  /* 120ae313 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae317 push eax */
  push32((uint32_t)(EAX));
  /* 120ae318 call 0x120ae280 */
  push32(0x120ae31du); f_120ae280();
  /* 120ae31d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae320 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae322 jne 0x120ae32b */
  if (!C.zf) goto L_120ae32b;
  /* 120ae324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae326 jmp 0x120ae3ef */
  goto L_120ae3ef;
L_120ae32b:;
  /* 120ae32b push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae32d call 0x120acb80 */
  push32(0x120ae332u); f_120acb80();
  /* 120ae332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae335 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae338 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae33b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120ae33e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae341 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ae344 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae349 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae34c je 0x120ae370 */
  if (C.zf) goto L_120ae370;
  /* 120ae34e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae351 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae355 je 0x120ae370 */
  if (C.zf) goto L_120ae370;
  /* 120ae357 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae35a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ae35d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae362 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae365 je 0x120ae370 */
  if (C.zf) goto L_120ae370;
  /* 120ae367 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae36a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae36e jne 0x120ae3e3 */
  if (!C.zf) goto L_120ae3e3;
L_120ae370:;
  /* 120ae370 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ae372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae375 push edx */
  push32((uint32_t)(EDX));
  /* 120ae376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae379 push eax */
  push32((uint32_t)(EAX));
  /* 120ae37a call 0x120ae230 */
  push32(0x120ae37fu); f_120ae230();
  /* 120ae37f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae384 je 0x120ae3e3 */
  if (C.zf) goto L_120ae3e3;
  /* 120ae386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae389 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120ae38c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae38f jne 0x120ae3e3 */
  if (!C.zf) goto L_120ae3e3;
  /* 120ae391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae394 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120ae397 cmp ecx, dword ptr [0x120def2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120def2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae39d jg 0x120ae3e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_120ae3e3;
  /* 120ae39f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae3a3 je 0x120ae3b0 */
  if (C.zf) goto L_120ae3b0;
  /* 120ae3a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ae3a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae3ab mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120ae3ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120ae3b0:;
  /* 120ae3b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae3b4 je 0x120ae3c1 */
  if (C.zf) goto L_120ae3c1;
  /* 120ae3b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120ae3b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae3bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120ae3bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120ae3c1:;
  /* 120ae3c1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae3c5 je 0x120ae3d2 */
  if (C.zf) goto L_120ae3d2;
  /* 120ae3c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120ae3ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae3cd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120ae3d0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120ae3d2:;
  /* 120ae3d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae3d4 call 0x120acc20 */
  push32(0x120ae3d9u); f_120acc20();
  /* 120ae3d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae3dc mov eax, 1 */
  EAX = (0x1u);
  /* 120ae3e1 jmp 0x120ae3ef */
  goto L_120ae3ef;
L_120ae3e3:;
  /* 120ae3e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae3e5 call 0x120acc20 */
  push32(0x120ae3eau); f_120acc20();
  /* 120ae3ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae3ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120ae3ef:;
  /* 120ae3ef mov esp, ebp */
  ESP = (EBP);
  /* 120ae3f1 pop ebp */
  EBP = (pop32());
  /* 120ae3f2 ret  */
  ESPCHK(0x120ae310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e400 @ 0x120ae400 (28 bytes, 11 insns) */
void f_120ae400(void) {
  FTRACE(0x120ae400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae400 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae401 mov ebp, esp */
  EBP = (ESP);
  /* 120ae403 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae404 mov eax, dword ptr [0x120e2c1c] */
  EAX = (r32((uint32_t)(0x120e2c1c)));
  /* 120ae409 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ae40c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae40f mov dword ptr [0x120e2c1c], ecx */
  w32((uint32_t)(0x120e2c1c), (ECX));
  /* 120ae415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae418 mov esp, ebp */
  ESP = (EBP);
  /* 120ae41a pop ebp */
  EBP = (pop32());
  /* 120ae41b ret  */
  ESPCHK(0x120ae400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x120ae420 (362 bytes, 116 insns) */
void f_120ae420(void) {
  FTRACE(0x120ae420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae420 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae421 mov ebp, esp */
  EBP = (ESP);
  /* 120ae423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae426 push ebx */
  push32((uint32_t)(EBX));
  /* 120ae427 push esi */
  push32((uint32_t)(ESI));
  /* 120ae428 push edi */
  push32((uint32_t)(EDI));
  /* 120ae429 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae42d jne 0x120ae45a */
  if (!C.zf) goto L_120ae45a;
L_120ae42f:;
  /* 120ae42f push 0x120dbbec */
  push32((uint32_t)(0x120dbbecu));
  /* 120ae434 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ae439 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae43b push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae43d push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae43f push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae441 call 0x120ab840 */
  push32(0x120ae446u); f_120ab840();
  /* 120ae446 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae449 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae44c jne 0x120ae44f */
  if (!C.zf) goto L_120ae44f;
  /* 120ae44e int3  */
  x86_unimpl("int3 @ 0x120ae44e");
L_120ae44f:;
  /* 120ae44f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae453 jne 0x120ae42f */
  if (!C.zf) goto L_120ae42f;
  /* 120ae455 jmp 0x120ae583 */
  goto L_120ae583;
L_120ae45a:;
  /* 120ae45a push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae45c call 0x120acb80 */
  push32(0x120ae461u); f_120acb80();
  /* 120ae461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae464 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae467 mov edx, dword ptr [0x120e1178] */
  EDX = (r32((uint32_t)(0x120e1178)));
  /* 120ae46d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120ae46f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120ae476 jmp 0x120ae481 */
  goto L_120ae481;
L_120ae478:;
  /* 120ae478 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae47b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae47e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120ae481:;
  /* 120ae481 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae485 jge 0x120ae4a5 */
  if ((C.sf==C.of)) goto L_120ae4a5;
  /* 120ae487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae48a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae48d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 120ae495 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae498 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae49b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 120ae4a3 jmp 0x120ae478 */
  goto L_120ae478;
L_120ae4a5:;
  /* 120ae4a5 mov edx, dword ptr [0x120e1178] */
  EDX = (r32((uint32_t)(0x120e1178)));
  /* 120ae4ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120ae4ae jmp 0x120ae4b8 */
  goto L_120ae4b8;
L_120ae4b0:;
  /* 120ae4b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae4b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120ae4b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120ae4b8:;
  /* 120ae4b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae4bc je 0x120ae561 */
  if (C.zf) goto L_120ae561;
  /* 120ae4c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae4c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ae4c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae4cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae4cf jl 0x120ae537 */
  if ((C.sf!=C.of)) goto L_120ae537;
  /* 120ae4d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae4d4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120ae4d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ae4dd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae4e0 jge 0x120ae537 */
  if ((C.sf==C.of)) goto L_120ae537;
  /* 120ae4e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae4e5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120ae4e8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ae4ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae4f1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 120ae4f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae4f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae4fb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120ae4fe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ae504 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae507 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 120ae50b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae50e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ae511 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae519 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 120ae51d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae520 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae523 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae526 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 120ae529 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae52e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae531 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 120ae535 jmp 0x120ae55c */
  goto L_120ae55c;
L_120ae537:;
  /* 120ae537 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae53a push edx */
  push32((uint32_t)(EDX));
  /* 120ae53b push 0x120dbbc8 */
  push32((uint32_t)(0x120dbbc8u));
  /* 120ae540 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae542 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae544 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae546 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae548 call 0x120ab840 */
  push32(0x120ae54du); f_120ab840();
  /* 120ae54d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae550 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae553 jne 0x120ae556 */
  if (!C.zf) goto L_120ae556;
  /* 120ae555 int3  */
  x86_unimpl("int3 @ 0x120ae555");
L_120ae556:;
  /* 120ae556 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae55a jne 0x120ae537 */
  if (!C.zf) goto L_120ae537;
L_120ae55c:;
  /* 120ae55c jmp 0x120ae4b0 */
  goto L_120ae4b0;
L_120ae561:;
  /* 120ae561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae564 mov edx, dword ptr [0x120e1180] */
  EDX = (r32((uint32_t)(0x120e1180)));
  /* 120ae56a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 120ae56d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae570 mov ecx, dword ptr [0x120e1174] */
  ECX = (r32((uint32_t)(0x120e1174)));
  /* 120ae576 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 120ae579 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae57b call 0x120acc20 */
  push32(0x120ae580u); f_120acc20();
  /* 120ae580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ae583:;
  /* 120ae583 pop edi */
  EDI = (pop32());
  /* 120ae584 pop esi */
  ESI = (pop32());
  /* 120ae585 pop ebx */
  EBX = (pop32());
  /* 120ae586 mov esp, ebp */
  ESP = (EBP);
  /* 120ae588 pop ebp */
  EBP = (pop32());
  /* 120ae589 ret  */
  ESPCHK(0x120ae420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x120ae590 (291 bytes, 95 insns) */
void f_120ae590(void) {
  FTRACE(0x120ae590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae590 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae591 mov ebp, esp */
  EBP = (ESP);
  /* 120ae593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae596 push ebx */
  push32((uint32_t)(EBX));
  /* 120ae597 push esi */
  push32((uint32_t)(ESI));
  /* 120ae598 push edi */
  push32((uint32_t)(EDI));
  /* 120ae599 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120ae5a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae5a4 je 0x120ae5b2 */
  if (C.zf) goto L_120ae5b2;
  /* 120ae5a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae5aa je 0x120ae5b2 */
  if (C.zf) goto L_120ae5b2;
  /* 120ae5ac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae5b0 jne 0x120ae5e0 */
  if (!C.zf) goto L_120ae5e0;
L_120ae5b2:;
  /* 120ae5b2 push 0x120dbc14 */
  push32((uint32_t)(0x120dbc14u));
  /* 120ae5b7 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ae5bc push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae5be push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae5c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae5c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae5c4 call 0x120ab840 */
  push32(0x120ae5c9u); f_120ab840();
  /* 120ae5c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae5cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae5cf jne 0x120ae5d2 */
  if (!C.zf) goto L_120ae5d2;
  /* 120ae5d1 int3  */
  x86_unimpl("int3 @ 0x120ae5d1");
L_120ae5d2:;
  /* 120ae5d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae5d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae5d6 jne 0x120ae5b2 */
  if (!C.zf) goto L_120ae5b2;
  /* 120ae5d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120ae5db jmp 0x120ae6ac */
  goto L_120ae6ac;
L_120ae5e0:;
  /* 120ae5e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120ae5e7 jmp 0x120ae5f2 */
  goto L_120ae5f2;
L_120ae5e9:;
  /* 120ae5e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae5ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae5ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120ae5f2:;
  /* 120ae5f2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae5f6 jge 0x120ae67c */
  if ((C.sf==C.of)) goto L_120ae67c;
  /* 120ae5fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae5ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ae602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae605 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae608 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 120ae60c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae610 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae613 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae616 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 120ae61a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae61d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ae620 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae623 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae626 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 120ae62a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae631 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae634 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 120ae638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae63b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae63e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae643 jne 0x120ae652 */
  if (!C.zf) goto L_120ae652;
  /* 120ae645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae648 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae64b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae650 je 0x120ae677 */
  if (C.zf) goto L_120ae677;
L_120ae652:;
  /* 120ae652 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae656 je 0x120ae677 */
  if (C.zf) goto L_120ae677;
  /* 120ae658 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae65c jne 0x120ae670 */
  if (!C.zf) goto L_120ae670;
  /* 120ae65e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae662 jne 0x120ae677 */
  if (!C.zf) goto L_120ae677;
  /* 120ae664 mov eax, dword ptr [0x120def28] */
  EAX = (r32((uint32_t)(0x120def28)));
  /* 120ae669 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120ae66c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae66e je 0x120ae677 */
  if (C.zf) goto L_120ae677;
L_120ae670:;
  /* 120ae670 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_120ae677:;
  /* 120ae677 jmp 0x120ae5e9 */
  goto L_120ae5e9;
L_120ae67c:;
  /* 120ae67c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ae67f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae682 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 120ae685 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae688 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae68b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 120ae68e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120ae691 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120ae694 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 120ae697 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae69a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae69d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 120ae6a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae6a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120ae6a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_120ae6ac:;
  /* 120ae6ac pop edi */
  EDI = (pop32());
  /* 120ae6ad pop esi */
  ESI = (pop32());
  /* 120ae6ae pop ebx */
  EBX = (pop32());
  /* 120ae6af mov esp, ebp */
  ESP = (EBP);
  /* 120ae6b1 pop ebp */
  EBP = (pop32());
  /* 120ae6b2 ret  */
  ESPCHK(0x120ae590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6c0 @ 0x120ae6c0 (697 bytes, 253 insns) */
void f_120ae6c0(void) {
  FTRACE(0x120ae6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae6c1 mov ebp, esp */
  EBP = (ESP);
  /* 120ae6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae6c6 push ebx */
  push32((uint32_t)(EBX));
  /* 120ae6c7 push esi */
  push32((uint32_t)(ESI));
  /* 120ae6c8 push edi */
  push32((uint32_t)(EDI));
  /* 120ae6c9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120ae6d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae6d2 call 0x120acb80 */
  push32(0x120ae6d7u); f_120acb80();
  /* 120ae6d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ae6da:;
  /* 120ae6da push 0x120dbd0c */
  push32((uint32_t)(0x120dbd0cu));
  /* 120ae6df push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ae6e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae6e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae6e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae6ea push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae6ec call 0x120ab840 */
  push32(0x120ae6f1u); f_120ab840();
  /* 120ae6f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae6f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae6f7 jne 0x120ae6fa */
  if (!C.zf) goto L_120ae6fa;
  /* 120ae6f9 int3  */
  x86_unimpl("int3 @ 0x120ae6f9");
L_120ae6fa:;
  /* 120ae6fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae6fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae6fe jne 0x120ae6da */
  if (!C.zf) goto L_120ae6da;
  /* 120ae700 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae704 je 0x120ae70e */
  if (C.zf) goto L_120ae70e;
  /* 120ae706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae709 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120ae70b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120ae70e:;
  /* 120ae70e mov eax, dword ptr [0x120e1178] */
  EAX = (r32((uint32_t)(0x120e1178)));
  /* 120ae713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120ae716 jmp 0x120ae720 */
  goto L_120ae720;
L_120ae718:;
  /* 120ae718 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae71b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120ae71d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120ae720:;
  /* 120ae720 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae724 je 0x120ae942 */
  if (C.zf) goto L_120ae942;
  /* 120ae72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae72d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae730 je 0x120ae942 */
  if (C.zf) goto L_120ae942;
  /* 120ae736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae739 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120ae73c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ae742 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae745 je 0x120ae774 */
  if (C.zf) goto L_120ae774;
  /* 120ae747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae74a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120ae74d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ae753 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ae755 je 0x120ae774 */
  if (C.zf) goto L_120ae774;
  /* 120ae757 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae75a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ae75d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae762 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae765 jne 0x120ae779 */
  if (!C.zf) goto L_120ae779;
  /* 120ae767 mov ecx, dword ptr [0x120def28] */
  ECX = (r32((uint32_t)(0x120def28)));
  /* 120ae76d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 120ae770 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ae772 jne 0x120ae779 */
  if (!C.zf) goto L_120ae779;
L_120ae774:;
  /* 120ae774 jmp 0x120ae93d */
  goto L_120ae93d;
L_120ae779:;
  /* 120ae779 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae77c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae780 je 0x120ae7f2 */
  if (C.zf) goto L_120ae7f2;
  /* 120ae782 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae784 push 1 */
  push32((uint32_t)(0x1u));
  /* 120ae786 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae789 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120ae78c push ecx */
  push32((uint32_t)(ECX));
  /* 120ae78d call 0x120ae230 */
  push32(0x120ae792u); f_120ae230();
  /* 120ae792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae797 jne 0x120ae7c3 */
  if (!C.zf) goto L_120ae7c3;
L_120ae799:;
  /* 120ae799 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae79c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120ae79f push eax */
  push32((uint32_t)(EAX));
  /* 120ae7a0 push 0x120dbcf8 */
  push32((uint32_t)(0x120dbcf8u));
  /* 120ae7a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7ab push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7ad call 0x120ab840 */
  push32(0x120ae7b2u); f_120ab840();
  /* 120ae7b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae7b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae7b8 jne 0x120ae7bb */
  if (!C.zf) goto L_120ae7bb;
  /* 120ae7ba int3  */
  x86_unimpl("int3 @ 0x120ae7ba");
L_120ae7bb:;
  /* 120ae7bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ae7bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ae7bf jne 0x120ae799 */
  if (!C.zf) goto L_120ae799;
  /* 120ae7c1 jmp 0x120ae7f2 */
  goto L_120ae7f2;
L_120ae7c3:;
  /* 120ae7c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae7c6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120ae7c9 push eax */
  push32((uint32_t)(EAX));
  /* 120ae7ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae7cd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120ae7d0 push edx */
  push32((uint32_t)(EDX));
  /* 120ae7d1 push 0x120dbcec */
  push32((uint32_t)(0x120dbcecu));
  /* 120ae7d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7da push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7dc push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae7de call 0x120ab840 */
  push32(0x120ae7e3u); f_120ab840();
  /* 120ae7e3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae7e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae7e9 jne 0x120ae7ec */
  if (!C.zf) goto L_120ae7ec;
  /* 120ae7eb int3  */
  x86_unimpl("int3 @ 0x120ae7eb");
L_120ae7ec:;
  /* 120ae7ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae7ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae7f0 jne 0x120ae7c3 */
  if (!C.zf) goto L_120ae7c3;
L_120ae7f2:;
  /* 120ae7f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae7f5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120ae7f8 push edx */
  push32((uint32_t)(EDX));
  /* 120ae7f9 push 0x120dbce4 */
  push32((uint32_t)(0x120dbce4u));
  /* 120ae7fe push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae800 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae802 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae804 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae806 call 0x120ab840 */
  push32(0x120ae80bu); f_120ab840();
  /* 120ae80b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae80e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae811 jne 0x120ae814 */
  if (!C.zf) goto L_120ae814;
  /* 120ae813 int3  */
  x86_unimpl("int3 @ 0x120ae813");
L_120ae814:;
  /* 120ae814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120ae816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120ae818 jne 0x120ae7f2 */
  if (!C.zf) goto L_120ae7f2;
  /* 120ae81a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae81d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120ae820 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ae826 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae829 jne 0x120ae89c */
  if (!C.zf) goto L_120ae89c;
L_120ae82b:;
  /* 120ae82b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae82e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120ae831 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae832 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae835 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ae838 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120ae83b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae840 push eax */
  push32((uint32_t)(EAX));
  /* 120ae841 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae844 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae847 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae848 push 0x120dbcb0 */
  push32((uint32_t)(0x120dbcb0u));
  /* 120ae84d push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae84f push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae851 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae853 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae855 call 0x120ab840 */
  push32(0x120ae85au); f_120ab840();
  /* 120ae85a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae85d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae860 jne 0x120ae863 */
  if (!C.zf) goto L_120ae863;
  /* 120ae862 int3  */
  x86_unimpl("int3 @ 0x120ae862");
L_120ae863:;
  /* 120ae863 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ae865 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ae867 jne 0x120ae82b */
  if (!C.zf) goto L_120ae82b;
  /* 120ae869 cmp dword ptr [0x120e2c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae870 je 0x120ae88b */
  if (C.zf) goto L_120ae88b;
  /* 120ae872 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae875 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120ae878 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae879 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae87c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae87f push edx */
  push32((uint32_t)(EDX));
  /* 120ae880 call dword ptr [0x120e2c1c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e2c1c))), 0x120ae886u);
  /* 120ae886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae889 jmp 0x120ae897 */
  goto L_120ae897;
L_120ae88b:;
  /* 120ae88b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae88e push eax */
  push32((uint32_t)(EAX));
  /* 120ae88f call 0x120ae980 */
  push32(0x120ae894u); f_120ae980();
  /* 120ae894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ae897:;
  /* 120ae897 jmp 0x120ae93d */
  goto L_120ae93d;
L_120ae89c:;
  /* 120ae89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae89f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae8a3 jne 0x120ae8e2 */
  if (!C.zf) goto L_120ae8e2;
L_120ae8a5:;
  /* 120ae8a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae8a8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120ae8ab push eax */
  push32((uint32_t)(EAX));
  /* 120ae8ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae8af add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae8b2 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae8b3 push 0x120dbc88 */
  push32((uint32_t)(0x120dbc88u));
  /* 120ae8b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae8bc push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae8be push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae8c0 call 0x120ab840 */
  push32(0x120ae8c5u); f_120ab840();
  /* 120ae8c5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae8c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae8cb jne 0x120ae8ce */
  if (!C.zf) goto L_120ae8ce;
  /* 120ae8cd int3  */
  x86_unimpl("int3 @ 0x120ae8cd");
L_120ae8ce:;
  /* 120ae8ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ae8d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ae8d2 jne 0x120ae8a5 */
  if (!C.zf) goto L_120ae8a5;
  /* 120ae8d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae8d7 push eax */
  push32((uint32_t)(EAX));
  /* 120ae8d8 call 0x120ae980 */
  push32(0x120ae8ddu); f_120ae980();
  /* 120ae8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae8e0 jmp 0x120ae93d */
  goto L_120ae93d;
L_120ae8e2:;
  /* 120ae8e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae8e5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 120ae8e8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ae8ee cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae8f1 jne 0x120ae93d */
  if (!C.zf) goto L_120ae93d;
L_120ae8f3:;
  /* 120ae8f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae8f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120ae8f9 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae8fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae8fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120ae900 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120ae903 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120ae908 push eax */
  push32((uint32_t)(EAX));
  /* 120ae909 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae90c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae90f push ecx */
  push32((uint32_t)(ECX));
  /* 120ae910 push 0x120dbc54 */
  push32((uint32_t)(0x120dbc54u));
  /* 120ae915 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae917 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae919 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae91b push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae91d call 0x120ab840 */
  push32(0x120ae922u); f_120ab840();
  /* 120ae922 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae925 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae928 jne 0x120ae92b */
  if (!C.zf) goto L_120ae92b;
  /* 120ae92a int3  */
  x86_unimpl("int3 @ 0x120ae92a");
L_120ae92b:;
  /* 120ae92b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120ae92d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120ae92f jne 0x120ae8f3 */
  if (!C.zf) goto L_120ae8f3;
  /* 120ae931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120ae934 push eax */
  push32((uint32_t)(EAX));
  /* 120ae935 call 0x120ae980 */
  push32(0x120ae93au); f_120ae980();
  /* 120ae93a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ae93d:;
  /* 120ae93d jmp 0x120ae718 */
  goto L_120ae718;
L_120ae942:;
  /* 120ae942 push 9 */
  push32((uint32_t)(0x9u));
  /* 120ae944 call 0x120acc20 */
  push32(0x120ae949u); f_120acc20();
  /* 120ae949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120ae94c:;
  /* 120ae94c push 0x120dbc3c */
  push32((uint32_t)(0x120dbc3cu));
  /* 120ae951 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120ae956 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae958 push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae95a push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae95c push 0 */
  push32((uint32_t)(0x0u));
  /* 120ae95e call 0x120ab840 */
  push32(0x120ae963u); f_120ab840();
  /* 120ae963 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae966 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae969 jne 0x120ae96c */
  if (!C.zf) goto L_120ae96c;
  /* 120ae96b int3  */
  x86_unimpl("int3 @ 0x120ae96b");
L_120ae96c:;
  /* 120ae96c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120ae96e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120ae970 jne 0x120ae94c */
  if (!C.zf) goto L_120ae94c;
  /* 120ae972 pop edi */
  EDI = (pop32());
  /* 120ae973 pop esi */
  ESI = (pop32());
  /* 120ae974 pop ebx */
  EBX = (pop32());
  /* 120ae975 mov esp, ebp */
  ESP = (EBP);
  /* 120ae977 pop ebp */
  EBP = (pop32());
  /* 120ae978 ret  */
  ESPCHK(0x120ae6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e980 @ 0x120ae980 (276 bytes, 89 insns) */
void f_120ae980(void) {
  FTRACE(0x120ae980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120ae980 push ebp */
  push32((uint32_t)(EBP));
  /* 120ae981 mov ebp, esp */
  EBP = (ESP);
  /* 120ae983 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120ae986 push ebx */
  push32((uint32_t)(EBX));
  /* 120ae987 push esi */
  push32((uint32_t)(ESI));
  /* 120ae988 push edi */
  push32((uint32_t)(EDI));
  /* 120ae989 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 120ae990 jmp 0x120ae99b */
  goto L_120ae99b;
L_120ae992:;
  /* 120ae992 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120ae995 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae998 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_120ae99b:;
  /* 120ae99b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae99e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae9a2 jge 0x120ae9af */
  if ((C.sf==C.of)) goto L_120ae9af;
  /* 120ae9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae9a7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120ae9aa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 120ae9ad jmp 0x120ae9b6 */
  goto L_120ae9b6;
L_120ae9af:;
  /* 120ae9af mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_120ae9b6:;
  /* 120ae9b6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120ae9b9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae9bc jge 0x120aea5c */
  if ((C.sf==C.of)) goto L_120aea5c;
  /* 120ae9c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120ae9c5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae9c8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 120ae9cb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 120ae9ce cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120ae9d5 jle 0x120ae9f3 */
  if ((C.zf||C.sf!=C.of)) goto L_120ae9f3;
  /* 120ae9d7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 120ae9dc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120ae9df and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120ae9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 120ae9e6 call 0x120b2320 */
  push32(0x120ae9ebu); f_120b2320();
  /* 120ae9eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120ae9ee mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 120ae9f1 jmp 0x120aea10 */
  goto L_120aea10;
L_120ae9f3:;
  /* 120ae9f3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120ae9f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120ae9fc mov eax, dword ptr [0x120df01c] */
  EAX = (r32((uint32_t)(0x120df01c)));
  /* 120aea01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120aea03 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120aea07 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 120aea0d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_120aea10:;
  /* 120aea10 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aea14 je 0x120aea24 */
  if (C.zf) goto L_120aea24;
  /* 120aea16 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120aea19 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120aea1f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 120aea22 jmp 0x120aea2b */
  goto L_120aea2b;
L_120aea24:;
  /* 120aea24 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_120aea2b:;
  /* 120aea2b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120aea2e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 120aea31 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 120aea35 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120aea38 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120aea3e push edx */
  push32((uint32_t)(EDX));
  /* 120aea3f push 0x120dbd30 */
  push32((uint32_t)(0x120dbd30u));
  /* 120aea44 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120aea47 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120aea4a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 120aea4e push ecx */
  push32((uint32_t)(ECX));
  /* 120aea4f call 0x120b55f0 */
  push32(0x120aea54u); f_120b55f0();
  /* 120aea54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aea57 jmp 0x120ae992 */
  goto L_120ae992;
L_120aea5c:;
  /* 120aea5c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120aea5f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_120aea64:;
  /* 120aea64 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 120aea67 push eax */
  push32((uint32_t)(EAX));
  /* 120aea68 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 120aea6b push ecx */
  push32((uint32_t)(ECX));
  /* 120aea6c push 0x120dbd20 */
  push32((uint32_t)(0x120dbd20u));
  /* 120aea71 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aea73 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aea75 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aea77 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aea79 call 0x120ab840 */
  push32(0x120aea7eu); f_120ab840();
  /* 120aea7e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aea81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aea84 jne 0x120aea87 */
  if (!C.zf) goto L_120aea87;
  /* 120aea86 int3  */
  x86_unimpl("int3 @ 0x120aea86");
L_120aea87:;
  /* 120aea87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120aea89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120aea8b jne 0x120aea64 */
  if (!C.zf) goto L_120aea64;
  /* 120aea8d pop edi */
  EDI = (pop32());
  /* 120aea8e pop esi */
  ESI = (pop32());
  /* 120aea8f pop ebx */
  EBX = (pop32());
  /* 120aea90 mov esp, ebp */
  ESP = (EBP);
  /* 120aea92 pop ebp */
  EBP = (pop32());
  /* 120aea93 ret  */
  ESPCHK(0x120ae980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x120aeaa0 (116 bytes, 46 insns) */
void f_120aeaa0(void) {
  FTRACE(0x120aeaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aeaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aeaa1 mov ebp, esp */
  EBP = (ESP);
  /* 120aeaa3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aeaa6 push ebx */
  push32((uint32_t)(EBX));
  /* 120aeaa7 push esi */
  push32((uint32_t)(ESI));
  /* 120aeaa8 push edi */
  push32((uint32_t)(EDI));
  /* 120aeaa9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 120aeaac push eax */
  push32((uint32_t)(EAX));
  /* 120aeaad call 0x120ae420 */
  push32(0x120aeab2u); f_120ae420();
  /* 120aeab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aeab5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeab9 jne 0x120aead4 */
  if (!C.zf) goto L_120aead4;
  /* 120aeabb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeabf jne 0x120aead4 */
  if (!C.zf) goto L_120aead4;
  /* 120aeac1 mov ecx, dword ptr [0x120def28] */
  ECX = (r32((uint32_t)(0x120def28)));
  /* 120aeac7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 120aeaca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120aeacc je 0x120aeb0b */
  if (C.zf) goto L_120aeb0b;
  /* 120aeace cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aead2 je 0x120aeb0b */
  if (C.zf) goto L_120aeb0b;
L_120aead4:;
  /* 120aead4 push 0x120dbd38 */
  push32((uint32_t)(0x120dbd38u));
  /* 120aead9 push 0x120db72c */
  push32((uint32_t)(0x120db72cu));
  /* 120aeade push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeae6 call 0x120ab840 */
  push32(0x120aeaebu); f_120ab840();
  /* 120aeaeb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aeaee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeaf1 jne 0x120aeaf4 */
  if (!C.zf) goto L_120aeaf4;
  /* 120aeaf3 int3  */
  x86_unimpl("int3 @ 0x120aeaf3");
L_120aeaf4:;
  /* 120aeaf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120aeaf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120aeaf8 jne 0x120aead4 */
  if (!C.zf) goto L_120aead4;
  /* 120aeafa push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeafc call 0x120ae6c0 */
  push32(0x120aeb01u); f_120ae6c0();
  /* 120aeb01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aeb04 mov eax, 1 */
  EAX = (0x1u);
  /* 120aeb09 jmp 0x120aeb0d */
  goto L_120aeb0d;
L_120aeb0b:;
  /* 120aeb0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120aeb0d:;
  /* 120aeb0d pop edi */
  EDI = (pop32());
  /* 120aeb0e pop esi */
  ESI = (pop32());
  /* 120aeb0f pop ebx */
  EBX = (pop32());
  /* 120aeb10 mov esp, ebp */
  ESP = (EBP);
  /* 120aeb12 pop ebp */
  EBP = (pop32());
  /* 120aeb13 ret  */
  ESPCHK(0x120aeaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x120aeb20 (197 bytes, 79 insns) */
void f_120aeb20(void) {
  FTRACE(0x120aeb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aeb20 push ebp */
  push32((uint32_t)(EBP));
  /* 120aeb21 mov ebp, esp */
  EBP = (ESP);
  /* 120aeb23 push ecx */
  push32((uint32_t)(ECX));
  /* 120aeb24 push ebx */
  push32((uint32_t)(EBX));
  /* 120aeb25 push esi */
  push32((uint32_t)(ESI));
  /* 120aeb26 push edi */
  push32((uint32_t)(EDI));
  /* 120aeb27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeb2b jne 0x120aeb32 */
  if (!C.zf) goto L_120aeb32;
  /* 120aeb2d jmp 0x120aebde */
  goto L_120aebde;
L_120aeb32:;
  /* 120aeb32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120aeb39 jmp 0x120aeb44 */
  goto L_120aeb44;
L_120aeb3b:;
  /* 120aeb3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aeb3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aeb41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120aeb44:;
  /* 120aeb44 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeb48 jge 0x120aeb8e */
  if ((C.sf==C.of)) goto L_120aeb8e;
L_120aeb4a:;
  /* 120aeb4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aeb4d mov edx, dword ptr [ecx*4 + 0x120def38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120def38)));
  /* 120aeb54 push edx */
  push32((uint32_t)(EDX));
  /* 120aeb55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aeb58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aeb5b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 120aeb5f push edx */
  push32((uint32_t)(EDX));
  /* 120aeb60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aeb63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aeb66 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 120aeb6a push edx */
  push32((uint32_t)(EDX));
  /* 120aeb6b push 0x120dbd94 */
  push32((uint32_t)(0x120dbd94u));
  /* 120aeb70 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeb72 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeb74 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeb76 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeb78 call 0x120ab840 */
  push32(0x120aeb7du); f_120ab840();
  /* 120aeb7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aeb80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeb83 jne 0x120aeb86 */
  if (!C.zf) goto L_120aeb86;
  /* 120aeb85 int3  */
  x86_unimpl("int3 @ 0x120aeb85");
L_120aeb86:;
  /* 120aeb86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120aeb88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aeb8a jne 0x120aeb4a */
  if (!C.zf) goto L_120aeb4a;
  /* 120aeb8c jmp 0x120aeb3b */
  goto L_120aeb3b;
L_120aeb8e:;
  /* 120aeb8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aeb91 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 120aeb94 push edx */
  push32((uint32_t)(EDX));
  /* 120aeb95 push 0x120dbd70 */
  push32((uint32_t)(0x120dbd70u));
  /* 120aeb9a push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeb9c push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeb9e push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aeba2 call 0x120ab840 */
  push32(0x120aeba7u); f_120ab840();
  /* 120aeba7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aebaa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aebad jne 0x120aebb0 */
  if (!C.zf) goto L_120aebb0;
  /* 120aebaf int3  */
  x86_unimpl("int3 @ 0x120aebaf");
L_120aebb0:;
  /* 120aebb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120aebb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aebb4 jne 0x120aeb8e */
  if (!C.zf) goto L_120aeb8e;
L_120aebb6:;
  /* 120aebb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aebb9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 120aebbc push edx */
  push32((uint32_t)(EDX));
  /* 120aebbd push 0x120dbd50 */
  push32((uint32_t)(0x120dbd50u));
  /* 120aebc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aebc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aebc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aebc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120aebca call 0x120ab840 */
  push32(0x120aebcfu); f_120ab840();
  /* 120aebcf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aebd2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aebd5 jne 0x120aebd8 */
  if (!C.zf) goto L_120aebd8;
  /* 120aebd7 int3  */
  x86_unimpl("int3 @ 0x120aebd7");
L_120aebd8:;
  /* 120aebd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120aebda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aebdc jne 0x120aebb6 */
  if (!C.zf) goto L_120aebb6;
L_120aebde:;
  /* 120aebde pop edi */
  EDI = (pop32());
  /* 120aebdf pop esi */
  ESI = (pop32());
  /* 120aebe0 pop ebx */
  EBX = (pop32());
  /* 120aebe1 mov esp, ebp */
  ESP = (EBP);
  /* 120aebe3 pop ebp */
  EBP = (pop32());
  /* 120aebe4 ret  */
  ESPCHK(0x120aeb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebf0 @ 0x120aebf0 (239 bytes, 88 insns) */
void f_120aebf0(void) {
  FTRACE(0x120aebf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aebf0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aebf1 mov ebp, esp */
  EBP = (ESP);
  /* 120aebf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aebf6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aebf9 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aebff jne 0x120aec0a */
  if (!C.zf) goto L_120aec0a;
  /* 120aec01 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120aec08 jmp 0x120aec12 */
  goto L_120aec12;
L_120aec0a:;
  /* 120aec0a call 0x120afc00 */
  push32(0x120aec0fu); f_120afc00();
  /* 120aec0f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120aec12:;
  /* 120aec12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aec15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120aec18 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 120aec1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120aec1d je 0x120aec4e */
  if (C.zf) goto L_120aec4e;
  /* 120aec1f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aec22 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aec26 je 0x120aec44 */
  if (C.zf) goto L_120aec44;
  /* 120aec28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aec2c jne 0x120aec44 */
  if (!C.zf) goto L_120aec44;
  /* 120aec2e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120aec30 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aec33 push ecx */
  push32((uint32_t)(ECX));
  /* 120aec34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aec37 push edx */
  push32((uint32_t)(EDX));
  /* 120aec38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aec3b push eax */
  push32((uint32_t)(EAX));
  /* 120aec3c call 0x120af160 */
  push32(0x120aec41u); f_120af160();
  /* 120aec41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aec44:;
  /* 120aec44 mov eax, 1 */
  EAX = (0x1u);
  /* 120aec49 jmp 0x120aecdb */
  goto L_120aecdb;
L_120aec4e:;
  /* 120aec4e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aec51 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aec55 je 0x120aecd6 */
  if (C.zf) goto L_120aecd6;
  /* 120aec57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aec5a cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aec60 jne 0x120aecae */
  if (!C.zf) goto L_120aecae;
  /* 120aec62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aec65 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aec6c jbe 0x120aecae */
  if ((C.cf||C.zf)) goto L_120aecae;
  /* 120aec6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aec71 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120aec74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120aec77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120aec7a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aec7e je 0x120aecae */
  if (C.zf) goto L_120aecae;
  /* 120aec80 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 120aec83 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120aec89 push ecx */
  push32((uint32_t)(ECX));
  /* 120aec8a mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aec8d push edx */
  push32((uint32_t)(EDX));
  /* 120aec8e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120aec91 push eax */
  push32((uint32_t)(EAX));
  /* 120aec92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aec95 push ecx */
  push32((uint32_t)(ECX));
  /* 120aec96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aec99 push edx */
  push32((uint32_t)(EDX));
  /* 120aec9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aec9d push eax */
  push32((uint32_t)(EAX));
  /* 120aec9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aeca1 push ecx */
  push32((uint32_t)(ECX));
  /* 120aeca2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aeca5 push edx */
  push32((uint32_t)(EDX));
  /* 120aeca6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x120aeca9u);
  /* 120aeca9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aecac jmp 0x120aecdb */
  goto L_120aecdb;
L_120aecae:;
  /* 120aecae mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aecb1 push eax */
  push32((uint32_t)(EAX));
  /* 120aecb2 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120aecb5 push ecx */
  push32((uint32_t)(ECX));
  /* 120aecb6 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 120aecb9 push edx */
  push32((uint32_t)(EDX));
  /* 120aecba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aecbd push eax */
  push32((uint32_t)(EAX));
  /* 120aecbe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aecc1 push ecx */
  push32((uint32_t)(ECX));
  /* 120aecc2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aecc5 push edx */
  push32((uint32_t)(EDX));
  /* 120aecc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aecc9 push eax */
  push32((uint32_t)(EAX));
  /* 120aecca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aeccd push ecx */
  push32((uint32_t)(ECX));
  /* 120aecce call 0x120aece0 */
  push32(0x120aecd3u); f_120aece0();
  /* 120aecd3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aecd6:;
  /* 120aecd6 mov eax, 1 */
  EAX = (0x1u);
L_120aecdb:;
  /* 120aecdb mov esp, ebp */
  ESP = (EBP);
  /* 120aecdd pop ebp */
  EBP = (pop32());
  /* 120aecde ret  */
  ESPCHK(0x120aebf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x120aece0 (672 bytes, 222 insns) */
void f_120aece0(void) {
  FTRACE(0x120aece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aece0 push ebp */
  push32((uint32_t)(EBP));
  /* 120aece1 mov ebp, esp */
  EBP = (ESP);
  /* 120aece3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aece6 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 120aecea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aeced mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120aecf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aecf3 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aecf7 jl 0x120aed0d */
  if ((C.sf!=C.of)) goto L_120aed0d;
  /* 120aecf9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aecfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aecff cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aed02 jge 0x120aed0d */
  if ((C.sf==C.of)) goto L_120aed0d;
  /* 120aed04 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 120aed0b jmp 0x120aed15 */
  goto L_120aed15;
L_120aed0d:;
  /* 120aed0d call 0x120afc00 */
  push32(0x120aed12u); f_120afc00();
  /* 120aed12 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_120aed15:;
  /* 120aed15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aed18 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aed1e jne 0x120aedd5 */
  if (!C.zf) goto L_120aedd5;
  /* 120aed24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aed27 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aed2b jne 0x120aedd5 */
  if (!C.zf) goto L_120aedd5;
  /* 120aed31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aed34 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aed3b jne 0x120aedd5 */
  if (!C.zf) goto L_120aedd5;
  /* 120aed41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aed44 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aed48 jne 0x120aedd5 */
  if (!C.zf) goto L_120aedd5;
  /* 120aed4e call 0x120af980 */
  push32(0x120aed53u); f_120af980();
  /* 120aed53 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aed57 jne 0x120aed5e */
  if (!C.zf) goto L_120aed5e;
  /* 120aed59 jmp 0x120aef7c */
  goto L_120aef7c;
L_120aed5e:;
  /* 120aed5e call 0x120af980 */
  push32(0x120aed63u); f_120af980();
  /* 120aed63 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 120aed66 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120aed69 call 0x120af980 */
  push32(0x120aed6eu); f_120af980();
  /* 120aed6e mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 120aed71 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 120aed74 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 120aed78 push 1 */
  push32((uint32_t)(0x1u));
  /* 120aed7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aed7d push ecx */
  push32((uint32_t)(ECX));
  /* 120aed7e call 0x120b5790 */
  push32(0x120aed83u); f_120b5790();
  /* 120aed83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aed86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aed88 je 0x120aed93 */
  if (C.zf) goto L_120aed93;
  /* 120aed8a mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 120aed91 jmp 0x120aed9b */
  goto L_120aed9b;
L_120aed93:;
  /* 120aed93 call 0x120afc00 */
  push32(0x120aed98u); f_120afc00();
  /* 120aed98 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_120aed9b:;
  /* 120aed9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aed9e cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeda4 jne 0x120aedce */
  if (!C.zf) goto L_120aedce;
  /* 120aeda6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aeda9 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aedad jne 0x120aedce */
  if (!C.zf) goto L_120aedce;
  /* 120aedaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aedb2 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aedb9 jne 0x120aedce */
  if (!C.zf) goto L_120aedce;
  /* 120aedbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aedbe cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aedc2 jne 0x120aedce */
  if (!C.zf) goto L_120aedce;
  /* 120aedc4 call 0x120afc00 */
  push32(0x120aedc9u); f_120afc00();
  /* 120aedc9 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120aedcc jmp 0x120aedd5 */
  goto L_120aedd5;
L_120aedce:;
  /* 120aedce mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_120aedd5:;
  /* 120aedd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aedd8 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aedde jne 0x120aef3c */
  if (!C.zf) goto L_120aef3c;
  /* 120aede4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aede7 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aedeb jne 0x120aef3c */
  if (!C.zf) goto L_120aef3c;
  /* 120aedf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aedf4 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aedfb jne 0x120aef3c */
  if (!C.zf) goto L_120aef3c;
  /* 120aee01 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120aee04 push eax */
  push32((uint32_t)(EAX));
  /* 120aee05 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 120aee08 push ecx */
  push32((uint32_t)(ECX));
  /* 120aee09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aee0c push edx */
  push32((uint32_t)(EDX));
  /* 120aee0d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aee10 push eax */
  push32((uint32_t)(EAX));
  /* 120aee11 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aee14 push ecx */
  push32((uint32_t)(ECX));
  /* 120aee15 call 0x120ab020 */
  push32(0x120aee1au); f_120ab020();
  /* 120aee1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aee1d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120aee20 jmp 0x120aee34 */
  goto L_120aee34;
L_120aee22:;
  /* 120aee22 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120aee25 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aee28 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120aee2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120aee2e add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aee31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120aee34:;
  /* 120aee34 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120aee37 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aee3a jae 0x120aef1f */
  if (!C.cf) goto L_120aef1f;
  /* 120aee40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120aee43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120aee45 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aee48 jg 0x120aee55 */
  if ((!C.zf&&C.sf==C.of)) goto L_120aee55;
  /* 120aee4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120aee4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aee50 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aee53 jle 0x120aee57 */
  if ((C.zf||C.sf!=C.of)) goto L_120aee57;
L_120aee55:;
  /* 120aee55 jmp 0x120aee22 */
  goto L_120aee22;
L_120aee57:;
  /* 120aee57 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120aee5a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120aee5d mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 120aee60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120aee63 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120aee66 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120aee69 jmp 0x120aee7d */
  goto L_120aee7d;
L_120aee6b:;
  /* 120aee6b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120aee6e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aee71 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120aee74 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120aee77 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aee7a mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_120aee7d:;
  /* 120aee7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aee81 jle 0x120aef1a */
  if ((C.zf||C.sf!=C.of)) goto L_120aef1a;
  /* 120aee87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aee8a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120aee8d mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120aee90 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aee93 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120aee96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aee99 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120aee9c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120aee9f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120aeea1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120aeea4 jmp 0x120aeeb8 */
  goto L_120aeeb8;
L_120aeea6:;
  /* 120aeea6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120aeea9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aeeac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120aeeaf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120aeeb2 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aeeb5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_120aeeb8:;
  /* 120aeeb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeebc jle 0x120aef15 */
  if ((C.zf||C.sf!=C.of)) goto L_120aef15;
  /* 120aeebe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aeec1 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120aeec4 push ecx */
  push32((uint32_t)(ECX));
  /* 120aeec5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120aeec8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120aeeca push eax */
  push32((uint32_t)(EAX));
  /* 120aeecb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120aeece push ecx */
  push32((uint32_t)(ECX));
  /* 120aeecf call 0x120af0a0 */
  push32(0x120aeed4u); f_120af0a0();
  /* 120aeed4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aeed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aeed9 jne 0x120aeedd */
  if (!C.zf) goto L_120aeedd;
  /* 120aeedb jmp 0x120aeea6 */
  goto L_120aeea6;
L_120aeedd:;
  /* 120aeedd mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 120aeee0 push edx */
  push32((uint32_t)(EDX));
  /* 120aeee1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 120aeee4 push eax */
  push32((uint32_t)(EAX));
  /* 120aeee5 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aeee8 push ecx */
  push32((uint32_t)(ECX));
  /* 120aeee9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120aeeec push edx */
  push32((uint32_t)(EDX));
  /* 120aeeed mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120aeef0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120aeef2 push ecx */
  push32((uint32_t)(ECX));
  /* 120aeef3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120aeef6 push edx */
  push32((uint32_t)(EDX));
  /* 120aeef7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aeefa push eax */
  push32((uint32_t)(EAX));
  /* 120aeefb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aeefe push ecx */
  push32((uint32_t)(ECX));
  /* 120aeeff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aef02 push edx */
  push32((uint32_t)(EDX));
  /* 120aef03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aef06 push eax */
  push32((uint32_t)(EAX));
  /* 120aef07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aef0a push ecx */
  push32((uint32_t)(ECX));
  /* 120aef0b call 0x120af290 */
  push32(0x120aef10u); f_120af290();
  /* 120aef10 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aef13 jmp 0x120aef7a */
  goto L_120aef7a;
L_120aef15:;
  /* 120aef15 jmp 0x120aee6b */
  goto L_120aee6b;
L_120aef1a:;
  /* 120aef1a jmp 0x120aee22 */
  goto L_120aee22;
L_120aef1f:;
  /* 120aef1f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120aef22 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120aef28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120aef2a je 0x120aef3a */
  if (C.zf) goto L_120aef3a;
  /* 120aef2c push 1 */
  push32((uint32_t)(0x1u));
  /* 120aef2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aef31 push eax */
  push32((uint32_t)(EAX));
  /* 120aef32 call 0x120af770 */
  push32(0x120aef37u); f_120af770();
  /* 120aef37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120aef3a:;
  /* 120aef3a jmp 0x120aef78 */
  goto L_120aef78;
L_120aef3c:;
  /* 120aef3c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120aef3f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120aef45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120aef47 jne 0x120aef73 */
  if (!C.zf) goto L_120aef73;
  /* 120aef49 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 120aef4c push edx */
  push32((uint32_t)(EDX));
  /* 120aef4d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aef50 push eax */
  push32((uint32_t)(EAX));
  /* 120aef51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aef54 push ecx */
  push32((uint32_t)(ECX));
  /* 120aef55 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aef58 push edx */
  push32((uint32_t)(EDX));
  /* 120aef59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aef5c push eax */
  push32((uint32_t)(EAX));
  /* 120aef5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aef60 push ecx */
  push32((uint32_t)(ECX));
  /* 120aef61 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aef64 push edx */
  push32((uint32_t)(EDX));
  /* 120aef65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aef68 push eax */
  push32((uint32_t)(EAX));
  /* 120aef69 call 0x120aef80 */
  push32(0x120aef6eu); f_120aef80();
  /* 120aef6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aef71 jmp 0x120aef78 */
  goto L_120aef78;
L_120aef73:;
  /* 120aef73 call 0x120afb50 */
  push32(0x120aef78u); f_120afb50();
L_120aef78:;
  /* 120aef78 jmp 0x120aef7c */
  goto L_120aef7c;
L_120aef7a:;
  /* 120aef7a jmp 0x120aef1a */
  goto L_120aef1a;
L_120aef7c:;
  /* 120aef7c mov esp, ebp */
  ESP = (EBP);
  /* 120aef7e pop ebp */
  EBP = (pop32());
  /* 120aef7f ret  */
  ESPCHK(0x120aece0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x120aef80 (277 bytes, 107 insns) */
void f_120aef80(void) {
  FTRACE(0x120aef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aef80 push ebp */
  push32((uint32_t)(EBP));
  /* 120aef81 mov ebp, esp */
  EBP = (ESP);
  /* 120aef83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aef86 call 0x120af980 */
  push32(0x120aef8bu); f_120af980();
  /* 120aef8b cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aef8f je 0x120aefbe */
  if (C.zf) goto L_120aefbe;
  /* 120aef91 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 120aef94 push eax */
  push32((uint32_t)(EAX));
  /* 120aef95 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aef98 push ecx */
  push32((uint32_t)(ECX));
  /* 120aef99 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aef9c push edx */
  push32((uint32_t)(EDX));
  /* 120aef9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aefa0 push eax */
  push32((uint32_t)(EAX));
  /* 120aefa1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120aefa4 push ecx */
  push32((uint32_t)(ECX));
  /* 120aefa5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aefa8 push edx */
  push32((uint32_t)(EDX));
  /* 120aefa9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aefac push eax */
  push32((uint32_t)(EAX));
  /* 120aefad call 0x120aaec0 */
  push32(0x120aefb2u); f_120aaec0();
  /* 120aefb2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aefb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aefb7 je 0x120aefbe */
  if (C.zf) goto L_120aefbe;
  /* 120aefb9 jmp 0x120af091 */
  goto L_120af091;
L_120aefbe:;
  /* 120aefbe lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 120aefc1 push ecx */
  push32((uint32_t)(ECX));
  /* 120aefc2 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120aefc5 push edx */
  push32((uint32_t)(EDX));
  /* 120aefc6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120aefc9 push eax */
  push32((uint32_t)(EAX));
  /* 120aefca mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120aefcd push ecx */
  push32((uint32_t)(ECX));
  /* 120aefce mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120aefd1 push edx */
  push32((uint32_t)(EDX));
  /* 120aefd2 call 0x120ab020 */
  push32(0x120aefd7u); f_120ab020();
  /* 120aefd7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aefda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120aefdd jmp 0x120aeff1 */
  goto L_120aeff1;
L_120aefdf:;
  /* 120aefdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120aefe2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aefe5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120aefe8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120aefeb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aefee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120aeff1:;
  /* 120aeff1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120aeff4 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aeff7 jae 0x120af091 */
  if (!C.cf) goto L_120af091;
  /* 120aeffd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af000 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120af003 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af005 jl 0x120af049 */
  if ((C.sf!=C.of)) goto L_120af049;
  /* 120af007 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af00a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120af00d cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af010 jg 0x120af049 */
  if ((!C.zf&&C.sf==C.of)) goto L_120af049;
  /* 120af012 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af015 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120af018 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af01b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120af01e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af021 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120af024 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af029 je 0x120af04b */
  if (C.zf) goto L_120af04b;
  /* 120af02b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af02e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120af031 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af034 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120af037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af03a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120af03d mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 120af041 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 120af045 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120af047 je 0x120af04b */
  if (C.zf) goto L_120af04b;
L_120af049:;
  /* 120af049 jmp 0x120aefdf */
  goto L_120aefdf;
L_120af04b:;
  /* 120af04b push 1 */
  push32((uint32_t)(0x1u));
  /* 120af04d mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 120af050 push edx */
  push32((uint32_t)(EDX));
  /* 120af051 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120af054 push eax */
  push32((uint32_t)(EAX));
  /* 120af055 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af058 push ecx */
  push32((uint32_t)(ECX));
  /* 120af059 push 0 */
  push32((uint32_t)(0x0u));
  /* 120af05b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af05e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120af061 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af064 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120af067 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af06a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120af06d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af06f push edx */
  push32((uint32_t)(EDX));
  /* 120af070 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120af073 push eax */
  push32((uint32_t)(EAX));
  /* 120af074 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af077 push ecx */
  push32((uint32_t)(ECX));
  /* 120af078 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af07b push edx */
  push32((uint32_t)(EDX));
  /* 120af07c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af07f push eax */
  push32((uint32_t)(EAX));
  /* 120af080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af083 push ecx */
  push32((uint32_t)(ECX));
  /* 120af084 call 0x120af290 */
  push32(0x120af089u); f_120af290();
  /* 120af089 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af08c jmp 0x120aefdf */
  goto L_120aefdf;
L_120af091:;
  /* 120af091 mov esp, ebp */
  ESP = (EBP);
  /* 120af093 pop ebp */
  EBP = (pop32());
  /* 120af094 ret  */
  ESPCHK(0x120aef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0a0 @ 0x120af0a0 (182 bytes, 69 insns) */
void f_120af0a0(void) {
  FTRACE(0x120af0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120af0a1 mov ebp, esp */
  EBP = (ESP);
  /* 120af0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120af0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af0a7 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af0ab je 0x120af0bb */
  if (C.zf) goto L_120af0bb;
  /* 120af0ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af0b0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120af0b3 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 120af0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af0b9 jne 0x120af0c5 */
  if (!C.zf) goto L_120af0c5;
L_120af0bb:;
  /* 120af0bb mov eax, 1 */
  EAX = (0x1u);
  /* 120af0c0 jmp 0x120af152 */
  goto L_120af152;
L_120af0c5:;
  /* 120af0c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af0c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af0cb mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120af0ce cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af0d1 je 0x120af0f7 */
  if (C.zf) goto L_120af0f7;
  /* 120af0d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af0d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120af0d9 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af0dc push edx */
  push32((uint32_t)(EDX));
  /* 120af0dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af0e0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120af0e3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af0e6 push ecx */
  push32((uint32_t)(ECX));
  /* 120af0e7 call 0x120b5820 */
  push32(0x120af0ecu); f_120b5820();
  /* 120af0ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af0ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af0f1 je 0x120af0f7 */
  if (C.zf) goto L_120af0f7;
  /* 120af0f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120af0f5 jmp 0x120af152 */
  goto L_120af152;
L_120af0f7:;
  /* 120af0f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af0fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120af0fc and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 120af0ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af101 je 0x120af10f */
  if (C.zf) goto L_120af10f;
  /* 120af103 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af106 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120af108 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120af10b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120af10d je 0x120af148 */
  if (C.zf) goto L_120af148;
L_120af10f:;
  /* 120af10f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af112 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af114 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120af117 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120af119 je 0x120af127 */
  if (C.zf) goto L_120af127;
  /* 120af11b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af11e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120af120 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120af123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af125 je 0x120af148 */
  if (C.zf) goto L_120af148;
L_120af127:;
  /* 120af127 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af12a mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120af12c and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120af12f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120af131 je 0x120af13f */
  if (C.zf) goto L_120af13f;
  /* 120af133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af136 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af138 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120af13b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120af13d je 0x120af148 */
  if (C.zf) goto L_120af148;
L_120af13f:;
  /* 120af13f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120af146 jmp 0x120af14f */
  goto L_120af14f;
L_120af148:;
  /* 120af148 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120af14f:;
  /* 120af14f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120af152:;
  /* 120af152 mov esp, ebp */
  ESP = (EBP);
  /* 120af154 pop ebp */
  EBP = (pop32());
  /* 120af155 ret  */
  ESPCHK(0x120af0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f160 @ 0x120af160 (224 bytes, 77 insns) */
void f_120af160(void) {
  FTRACE(0x120af160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af160 push ebp */
  push32((uint32_t)(EBP));
  /* 120af161 mov ebp, esp */
  EBP = (ESP);
  /* 120af163 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120af165 push 0x120dbdb8 */
  push32((uint32_t)(0x120dbdb8u));
  /* 120af16a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120af16f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120af175 push eax */
  push32((uint32_t)(EAX));
  /* 120af176 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120af17d add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af180 push ebx */
  push32((uint32_t)(EBX));
  /* 120af181 push esi */
  push32((uint32_t)(ESI));
  /* 120af182 push edi */
  push32((uint32_t)(EDI));
  /* 120af183 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120af186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af189 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120af18c mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_120af18f:;
  /* 120af18f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af192 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af195 je 0x120af224 */
  if (C.zf) goto L_120af224;
  /* 120af19b cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af19f jle 0x120af1b5 */
  if ((C.zf||C.sf!=C.of)) goto L_120af1b5;
  /* 120af1a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af1a4 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af1a7 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af1aa jge 0x120af1b5 */
  if ((C.sf==C.of)) goto L_120af1b5;
  /* 120af1ac mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120af1b3 jmp 0x120af1bd */
  goto L_120af1bd;
L_120af1b5:;
  /* 120af1b5 call 0x120afc00 */
  push32(0x120af1bau); f_120afc00();
  /* 120af1ba mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_120af1bd:;
  /* 120af1bd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120af1c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af1c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120af1ca mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af1cd cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af1d2 je 0x120af1f0 */
  if (C.zf) goto L_120af1f0;
  /* 120af1d4 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 120af1d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af1dc push edx */
  push32((uint32_t)(EDX));
  /* 120af1dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af1e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120af1e3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af1e6 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 120af1ea push eax */
  push32((uint32_t)(EAX));
  /* 120af1eb call 0x120af850 */
  push32(0x120af1f0u); f_120af850();
L_120af1f0:;
  /* 120af1f0 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120af1f7 jmp 0x120af210 */
  goto L_120af210;
  /* 120af1f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120af1fc push ecx */
  push32((uint32_t)(ECX));
  /* 120af1fd call 0x120af260 */
  push32(0x120af202u); f_120af260();
  /* 120af202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af205 ret  */
  ESPCHK(0x120af160u, _esp0);
  ESP += 4; return;
  /* 120af206 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120af209 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_120af210:;
  /* 120af210 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af213 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120af216 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af219 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 120af21c mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120af21f jmp 0x120af18f */
  goto L_120af18f;
L_120af224:;
  /* 120af224 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af227 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af22a jne 0x120af235 */
  if (!C.zf) goto L_120af235;
  /* 120af22c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120af233 jmp 0x120af23d */
  goto L_120af23d;
L_120af235:;
  /* 120af235 call 0x120afc00 */
  push32(0x120af23au); f_120afc00();
  /* 120af23a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120af23d:;
  /* 120af23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af240 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af243 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 120af246 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120af249 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120af250 pop edi */
  EDI = (pop32());
  /* 120af251 pop esi */
  ESI = (pop32());
  /* 120af252 pop ebx */
  EBX = (pop32());
  /* 120af253 mov esp, ebp */
  ESP = (EBP);
  /* 120af255 pop ebp */
  EBP = (pop32());
  /* 120af256 ret  */
  ESPCHK(0x120af160u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x120af260 (44 bytes, 17 insns) */
void f_120af260(void) {
  FTRACE(0x120af260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af260 push ebp */
  push32((uint32_t)(EBP));
  /* 120af261 mov ebp, esp */
  EBP = (ESP);
  /* 120af263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af26b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120af26e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af271 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120af273 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120af276 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af27d je 0x120af281 */
  if (C.zf) goto L_120af281;
  /* 120af27f jmp 0x120af286 */
  goto L_120af286;
L_120af281:;
  /* 120af281 call 0x120afb50 */
  push32(0x120af286u); f_120afb50();
L_120af286:;
  /* 120af286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120af288 mov esp, ebp */
  ESP = (EBP);
  /* 120af28a pop ebp */
  EBP = (pop32());
  /* 120af28b ret  */
  ESPCHK(0x120af260u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x120af290 (183 bytes, 73 insns) */
void f_120af290(void) {
  FTRACE(0x120af290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af290 push ebp */
  push32((uint32_t)(EBP));
  /* 120af291 mov ebp, esp */
  EBP = (ESP);
  /* 120af293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af296 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120af29c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af2a0 je 0x120af2ba */
  if (C.zf) goto L_120af2ba;
  /* 120af2a2 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 120af2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 120af2a6 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120af2a9 push edx */
  push32((uint32_t)(EDX));
  /* 120af2aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af2ad push eax */
  push32((uint32_t)(EAX));
  /* 120af2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af2b1 push ecx */
  push32((uint32_t)(ECX));
  /* 120af2b2 call 0x120af4f0 */
  push32(0x120af2b7u); f_120af4f0();
  /* 120af2b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120af2ba:;
  /* 120af2ba cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af2be jne 0x120af2cf */
  if (!C.zf) goto L_120af2cf;
  /* 120af2c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af2c3 push edx */
  push32((uint32_t)(EDX));
  /* 120af2c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af2c7 push eax */
  push32((uint32_t)(EAX));
  /* 120af2c8 call 0x120aad40 */
  push32(0x120af2cdu); f_120aad40();
  /* 120af2cd jmp 0x120af2dc */
  goto L_120af2dc;
L_120af2cf:;
  /* 120af2cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af2d2 push ecx */
  push32((uint32_t)(ECX));
  /* 120af2d3 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 120af2d6 push edx */
  push32((uint32_t)(EDX));
  /* 120af2d7 call 0x120aad40 */
  push32(0x120af2dcu); f_120aad40();
L_120af2dc:;
  /* 120af2dc mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 120af2df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af2e1 push ecx */
  push32((uint32_t)(ECX));
  /* 120af2e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120af2e5 push edx */
  push32((uint32_t)(EDX));
  /* 120af2e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af2e9 push eax */
  push32((uint32_t)(EAX));
  /* 120af2ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af2ed push ecx */
  push32((uint32_t)(ECX));
  /* 120af2ee call 0x120af160 */
  push32(0x120af2f3u); f_120af160();
  /* 120af2f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af2f6 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 120af2f9 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120af2fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af2ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af302 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 120af305 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120af30a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 120af30d push edx */
  push32((uint32_t)(EDX));
  /* 120af30e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120af311 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120af314 push ecx */
  push32((uint32_t)(ECX));
  /* 120af315 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120af318 push edx */
  push32((uint32_t)(EDX));
  /* 120af319 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af31c push eax */
  push32((uint32_t)(EAX));
  /* 120af31d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af320 push ecx */
  push32((uint32_t)(ECX));
  /* 120af321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af324 push edx */
  push32((uint32_t)(EDX));
  /* 120af325 call 0x120af350 */
  push32(0x120af32au); f_120af350();
  /* 120af32a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af32d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120af330 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af334 je 0x120af343 */
  if (C.zf) goto L_120af343;
  /* 120af336 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af339 push eax */
  push32((uint32_t)(EAX));
  /* 120af33a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120af33d push ecx */
  push32((uint32_t)(ECX));
  /* 120af33e call 0x120aacd0 */
  push32(0x120af343u); f_120aacd0();
L_120af343:;
  /* 120af343 mov esp, ebp */
  ESP = (EBP);
  /* 120af345 pop ebp */
  EBP = (pop32());
  /* 120af346 ret  */
  ESPCHK(0x120af290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x120af350 (172 bytes, 66 insns) */
void f_120af350(void) {
  FTRACE(0x120af350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af350 push ebp */
  push32((uint32_t)(EBP));
  /* 120af351 mov ebp, esp */
  EBP = (ESP);
  /* 120af353 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120af355 push 0x120dbdc8 */
  push32((uint32_t)(0x120dbdc8u));
  /* 120af35a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120af35f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120af365 push eax */
  push32((uint32_t)(EAX));
  /* 120af366 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120af36d add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af370 push ebx */
  push32((uint32_t)(EBX));
  /* 120af371 push esi */
  push32((uint32_t)(ESI));
  /* 120af372 push edi */
  push32((uint32_t)(EDI));
  /* 120af373 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120af376 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120af379 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120af37c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120af383 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af386 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 120af389 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 120af38c call 0x120af980 */
  push32(0x120af391u); f_120af980();
  /* 120af391 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 120af394 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120af397 call 0x120af980 */
  push32(0x120af39cu); f_120af980();
  /* 120af39c mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 120af39f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120af3a2 call 0x120af980 */
  push32(0x120af3a7u); f_120af980();
  /* 120af3a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af3aa mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 120af3ad call 0x120af980 */
  push32(0x120af3b2u); f_120af980();
  /* 120af3b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af3b5 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 120af3b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120af3bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120af3c6 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 120af3c9 push edx */
  push32((uint32_t)(EDX));
  /* 120af3ca mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120af3cd push eax */
  push32((uint32_t)(EAX));
  /* 120af3ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120af3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 120af3d2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af3d5 push edx */
  push32((uint32_t)(EDX));
  /* 120af3d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af3d9 push eax */
  push32((uint32_t)(EAX));
  /* 120af3da call 0x120aae10 */
  push32(0x120af3dfu); f_120aae10();
  /* 120af3df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af3e2 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120af3e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120af3ec jmp 0x120af41f */
  goto L_120af41f;
  /* 120af3ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120af3f1 push ecx */
  push32((uint32_t)(ECX));
  /* 120af3f2 call 0x120af4a0 */
  push32(0x120af3f7u); f_120af4a0();
  /* 120af3f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af3fa ret  */
  ESPCHK(0x120af350u, _esp0);
  ESP += 4; return;
  /* 120af3fb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120af3fe mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 120af405 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120af407 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 120af40e lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 120af411 push edx */
  push32((uint32_t)(EDX));
  /* 120af412 call 0x120ab0f2 */
  push32(0x120af417u); f_120ab0f2();
  /* 120af417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af41a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120af41d jmp 0x120af48e */
  jmp_ind(0x120af48eu); return;
L_120af41f:;
  /* 120af41f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120af426 call 0x120af42d */
  push32(0x120af42bu); f_120af42d();
  /* 120af42b jmp 0x120af48b */
  f_120af48b(); return;
}

/* FUN_1000f42d @ 0x120af42d (94 bytes, 29 insns) */
void f_120af42d(void) {
  FTRACE(0x120af42du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af42d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af430 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120af433 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 120af436 call 0x120af980 */
  push32(0x120af43bu); f_120af980();
  /* 120af43b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af43e mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 120af441 call 0x120af980 */
  push32(0x120af446u); f_120af980();
  /* 120af446 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120af449 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 120af44c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af44f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af455 jne 0x120af48a */
  if (!C.zf) goto L_120af48a;
  /* 120af457 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af45a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af45e jne 0x120af48a */
  if (!C.zf) goto L_120af48a;
  /* 120af460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af463 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af46a jne 0x120af48a */
  if (!C.zf) goto L_120af48a;
  /* 120af46c cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af470 jne 0x120af48a */
  if (!C.zf) goto L_120af48a;
  /* 120af472 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af476 je 0x120af48a */
  if (C.zf) goto L_120af48a;
  /* 120af478 call 0x120ab15a */
  push32(0x120af47du); f_120ab15a();
  /* 120af47d push eax */
  push32((uint32_t)(EAX));
  /* 120af47e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af481 push edx */
  push32((uint32_t)(EDX));
  /* 120af482 call 0x120af770 */
  push32(0x120af487u); f_120af770();
  /* 120af487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120af48a:;
  /* 120af48a ret  */
  ESPCHK(0x120af42du, _esp0);
  ESP += 4; return;
}

/* FUN_1000f48b @ 0x120af48b (20 bytes, 9 insns) */
void f_120af48b(void) {
  FTRACE(0x120af48bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af48b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120af48e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120af491 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120af498 pop edi */
  EDI = (pop32());
  /* 120af499 pop esi */
  ESI = (pop32());
  /* 120af49a pop ebx */
  EBX = (pop32());
  /* 120af49b mov esp, ebp */
  ESP = (EBP);
  /* 120af49d pop ebp */
  EBP = (pop32());
  /* 120af49e ret  */
  ESPCHK(0x120af48bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4a0 @ 0x120af4a0 (66 bytes, 24 insns) */
void f_120af4a0(void) {
  FTRACE(0x120af4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120af4a1 mov ebp, esp */
  EBP = (ESP);
  /* 120af4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120af4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af4a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af4a9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120af4ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af4af cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af4b5 jne 0x120af4dc */
  if (!C.zf) goto L_120af4dc;
  /* 120af4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af4ba cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af4be jne 0x120af4dc */
  if (!C.zf) goto L_120af4dc;
  /* 120af4c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af4c3 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af4ca jne 0x120af4dc */
  if (!C.zf) goto L_120af4dc;
  /* 120af4cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af4cf cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af4d3 jne 0x120af4dc */
  if (!C.zf) goto L_120af4dc;
  /* 120af4d5 mov eax, 1 */
  EAX = (0x1u);
  /* 120af4da jmp 0x120af4de */
  goto L_120af4de;
L_120af4dc:;
  /* 120af4dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120af4de:;
  /* 120af4de mov esp, ebp */
  ESP = (EBP);
  /* 120af4e0 pop ebp */
  EBP = (pop32());
  /* 120af4e1 ret  */
  ESPCHK(0x120af4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4f0 @ 0x120af4f0 (621 bytes, 229 insns) */
void f_120af4f0(void) {
  FTRACE(0x120af4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120af4f1 mov ebp, esp */
  EBP = (ESP);
  /* 120af4f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120af4f5 push 0x120dbde0 */
  push32((uint32_t)(0x120dbde0u));
  /* 120af4fa push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120af4ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120af505 push eax */
  push32((uint32_t)(EAX));
  /* 120af506 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120af50d add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af510 push ebx */
  push32((uint32_t)(EBX));
  /* 120af511 push esi */
  push32((uint32_t)(ESI));
  /* 120af512 push edi */
  push32((uint32_t)(EDI));
  /* 120af513 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120af516 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af519 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af51d je 0x120af536 */
  if (C.zf) goto L_120af536;
  /* 120af51f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af522 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120af525 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 120af529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af52b je 0x120af536 */
  if (C.zf) goto L_120af536;
  /* 120af52d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af530 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af534 jne 0x120af53b */
  if (!C.zf) goto L_120af53b;
L_120af536:;
  /* 120af536 jmp 0x120af75a */
  goto L_120af75a;
L_120af53b:;
  /* 120af53b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af53e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120af541 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af544 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 120af548 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120af54b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120af552 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af555 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af557 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120af55a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120af55c je 0x120af5b6 */
  if (C.zf) goto L_120af5b6;
  /* 120af55e push 1 */
  push32((uint32_t)(0x1u));
  /* 120af560 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af563 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120af566 push eax */
  push32((uint32_t)(EAX));
  /* 120af567 call 0x120b5790 */
  push32(0x120af56cu); f_120b5790();
  /* 120af56c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af56f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af571 je 0x120af5ac */
  if (C.zf) goto L_120af5ac;
  /* 120af573 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af575 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af578 push ecx */
  push32((uint32_t)(ECX));
  /* 120af579 call 0x120b57c0 */
  push32(0x120af57eu); f_120b57c0();
  /* 120af57e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af581 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af583 je 0x120af5ac */
  if (C.zf) goto L_120af5ac;
  /* 120af585 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af58b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120af58e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120af590 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af593 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af596 push edx */
  push32((uint32_t)(EDX));
  /* 120af597 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af59a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af59c push ecx */
  push32((uint32_t)(ECX));
  /* 120af59d call 0x120af800 */
  push32(0x120af5a2u); f_120af800();
  /* 120af5a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af5a5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af5a8 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120af5aa jmp 0x120af5b1 */
  goto L_120af5b1;
L_120af5ac:;
  /* 120af5ac call 0x120afc00 */
  push32(0x120af5b1u); f_120afc00();
L_120af5b1:;
  /* 120af5b1 jmp 0x120af743 */
  goto L_120af743;
L_120af5b6:;
  /* 120af5b6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af5b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120af5bb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120af5be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120af5c0 je 0x120af63a */
  if (C.zf) goto L_120af63a;
  /* 120af5c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af5c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af5c7 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120af5ca push eax */
  push32((uint32_t)(EAX));
  /* 120af5cb call 0x120b5790 */
  push32(0x120af5d0u); f_120b5790();
  /* 120af5d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af5d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af5d5 je 0x120af630 */
  if (C.zf) goto L_120af630;
  /* 120af5d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af5d9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af5dc push ecx */
  push32((uint32_t)(ECX));
  /* 120af5dd call 0x120b57c0 */
  push32(0x120af5e2u); f_120b57c0();
  /* 120af5e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af5e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af5e7 je 0x120af630 */
  if (C.zf) goto L_120af630;
  /* 120af5e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af5ec mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120af5ef push eax */
  push32((uint32_t)(EAX));
  /* 120af5f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af5f3 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120af5f6 push edx */
  push32((uint32_t)(EDX));
  /* 120af5f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af5fa push eax */
  push32((uint32_t)(EAX));
  /* 120af5fb call 0x120b30f0 */
  push32(0x120af600u); f_120b30f0();
  /* 120af600 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af603 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af606 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af60a jne 0x120af62e */
  if (!C.zf) goto L_120af62e;
  /* 120af60c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af60f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af612 je 0x120af62e */
  if (C.zf) goto L_120af62e;
  /* 120af614 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af617 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af61a push eax */
  push32((uint32_t)(EAX));
  /* 120af61b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af61e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120af620 push edx */
  push32((uint32_t)(EDX));
  /* 120af621 call 0x120af800 */
  push32(0x120af626u); f_120af800();
  /* 120af626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af629 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af62c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120af62e:;
  /* 120af62e jmp 0x120af635 */
  goto L_120af635;
L_120af630:;
  /* 120af630 call 0x120afc00 */
  push32(0x120af635u); f_120afc00();
L_120af635:;
  /* 120af635 jmp 0x120af743 */
  goto L_120af743;
L_120af63a:;
  /* 120af63a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af63d cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af641 jne 0x120af6a0 */
  if (!C.zf) goto L_120af6a0;
  /* 120af643 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af648 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120af64b push ecx */
  push32((uint32_t)(ECX));
  /* 120af64c call 0x120b5790 */
  push32(0x120af651u); f_120b5790();
  /* 120af651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af656 je 0x120af696 */
  if (C.zf) goto L_120af696;
  /* 120af658 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af65a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af65d push edx */
  push32((uint32_t)(EDX));
  /* 120af65e call 0x120b57c0 */
  push32(0x120af663u); f_120b57c0();
  /* 120af663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af668 je 0x120af696 */
  if (C.zf) goto L_120af696;
  /* 120af66a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af66d mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 120af670 push ecx */
  push32((uint32_t)(ECX));
  /* 120af671 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af674 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af677 push edx */
  push32((uint32_t)(EDX));
  /* 120af678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af67b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120af67e push ecx */
  push32((uint32_t)(ECX));
  /* 120af67f call 0x120af800 */
  push32(0x120af684u); f_120af800();
  /* 120af684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af687 push eax */
  push32((uint32_t)(EAX));
  /* 120af688 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af68b push edx */
  push32((uint32_t)(EDX));
  /* 120af68c call 0x120b30f0 */
  push32(0x120af691u); f_120b30f0();
  /* 120af691 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af694 jmp 0x120af69b */
  goto L_120af69b;
L_120af696:;
  /* 120af696 call 0x120afc00 */
  push32(0x120af69bu); f_120afc00();
L_120af69b:;
  /* 120af69b jmp 0x120af743 */
  goto L_120af743;
L_120af6a0:;
  /* 120af6a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af6a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af6a5 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120af6a8 push ecx */
  push32((uint32_t)(ECX));
  /* 120af6a9 call 0x120b5790 */
  push32(0x120af6aeu); f_120b5790();
  /* 120af6ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af6b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af6b3 je 0x120af73e */
  if (C.zf) goto L_120af73e;
  /* 120af6b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af6bb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af6be push edx */
  push32((uint32_t)(EDX));
  /* 120af6bf call 0x120b57c0 */
  push32(0x120af6c4u); f_120b57c0();
  /* 120af6c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af6c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af6c9 je 0x120af73e */
  if (C.zf) goto L_120af73e;
  /* 120af6cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af6ce mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 120af6d1 push ecx */
  push32((uint32_t)(ECX));
  /* 120af6d2 call 0x120b57f0 */
  push32(0x120af6d7u); f_120b57f0();
  /* 120af6d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af6da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af6dc je 0x120af73e */
  if (C.zf) goto L_120af73e;
  /* 120af6de mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af6e1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120af6e3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120af6e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af6e8 je 0x120af715 */
  if (C.zf) goto L_120af715;
  /* 120af6ea push 1 */
  push32((uint32_t)(0x1u));
  /* 120af6ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af6ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af6f2 push ecx */
  push32((uint32_t)(ECX));
  /* 120af6f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af6f6 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120af6f9 push eax */
  push32((uint32_t)(EAX));
  /* 120af6fa call 0x120af800 */
  push32(0x120af6ffu); f_120af800();
  /* 120af6ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af702 push eax */
  push32((uint32_t)(EAX));
  /* 120af703 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af706 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120af709 push edx */
  push32((uint32_t)(EDX));
  /* 120af70a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af70d push eax */
  push32((uint32_t)(EAX));
  /* 120af70e call 0x120aad30 */
  push32(0x120af713u); f_120aad30();
  /* 120af713 jmp 0x120af73c */
  goto L_120af73c;
L_120af715:;
  /* 120af715 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af718 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af71b push ecx */
  push32((uint32_t)(ECX));
  /* 120af71c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af71f mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120af722 push eax */
  push32((uint32_t)(EAX));
  /* 120af723 call 0x120af800 */
  push32(0x120af728u); f_120af800();
  /* 120af728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af72b push eax */
  push32((uint32_t)(EAX));
  /* 120af72c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120af72f mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120af732 push edx */
  push32((uint32_t)(EDX));
  /* 120af733 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120af736 push eax */
  push32((uint32_t)(EAX));
  /* 120af737 call 0x120aad20 */
  push32(0x120af73cu); f_120aad20();
L_120af73c:;
  /* 120af73c jmp 0x120af743 */
  goto L_120af743;
L_120af73e:;
  /* 120af73e call 0x120afc00 */
  push32(0x120af743u); f_120afc00();
L_120af743:;
  /* 120af743 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120af74a jmp 0x120af75a */
  goto L_120af75a;
  /* 120af74c mov eax, 1 */
  EAX = (0x1u);
  /* 120af751 ret  */
  ESPCHK(0x120af4f0u, _esp0);
  ESP += 4; return;
  /* 120af752 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120af755 call 0x120afb50 */
  push32(0x120af75au); f_120afb50();
L_120af75a:;
  /* 120af75a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120af75d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120af764 pop edi */
  EDI = (pop32());
  /* 120af765 pop esi */
  ESI = (pop32());
  /* 120af766 pop ebx */
  EBX = (pop32());
  /* 120af767 mov esp, ebp */
  ESP = (EBP);
  /* 120af769 pop ebp */
  EBP = (pop32());
  /* 120af76a ret  */
  ESPCHK(0x120af4f0u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x120af770 (111 bytes, 46 insns) */
void f_120af770(void) {
  FTRACE(0x120af770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af770 push ebp */
  push32((uint32_t)(EBP));
  /* 120af771 mov ebp, esp */
  EBP = (ESP);
  /* 120af773 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120af775 push 0x120dbdf0 */
  push32((uint32_t)(0x120dbdf0u));
  /* 120af77a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120af77f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120af785 push eax */
  push32((uint32_t)(EAX));
  /* 120af786 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120af78d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af790 push ebx */
  push32((uint32_t)(EBX));
  /* 120af791 push esi */
  push32((uint32_t)(ESI));
  /* 120af792 push edi */
  push32((uint32_t)(EDI));
  /* 120af793 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120af796 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af79a je 0x120af7e5 */
  if (C.zf) goto L_120af7e5;
  /* 120af79c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af79f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120af7a2 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af7a6 je 0x120af7e5 */
  if (C.zf) goto L_120af7e5;
  /* 120af7a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120af7af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af7b2 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 120af7b5 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120af7b8 push ecx */
  push32((uint32_t)(ECX));
  /* 120af7b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af7bc mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 120af7bf push eax */
  push32((uint32_t)(EAX));
  /* 120af7c0 call 0x120aad10 */
  push32(0x120af7c5u); f_120aad10();
  /* 120af7c5 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120af7cc jmp 0x120af7e5 */
  goto L_120af7e5;
  /* 120af7ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af7d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120af7d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120af7d8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af7da neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120af7dc ret  */
  ESPCHK(0x120af770u, _esp0);
  ESP += 4; return;
  /* 120af7dd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120af7e0 call 0x120afb50 */
  push32(0x120af7e5u); f_120afb50();
L_120af7e5:;
  /* 120af7e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120af7e8 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120af7ef pop edi */
  EDI = (pop32());
  /* 120af7f0 pop esi */
  ESI = (pop32());
  /* 120af7f1 pop ebx */
  EBX = (pop32());
  /* 120af7f2 mov esp, ebp */
  ESP = (EBP);
  /* 120af7f4 pop ebp */
  EBP = (pop32());
  /* 120af7f5 ret  */
  ESPCHK(0x120af770u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x120af800 (70 bytes, 27 insns) */
void f_120af800(void) {
  FTRACE(0x120af800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af800 push ebp */
  push32((uint32_t)(EBP));
  /* 120af801 mov ebp, esp */
  EBP = (ESP);
  /* 120af803 push ecx */
  push32((uint32_t)(ECX));
  /* 120af804 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af807 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af80a add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af80c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120af80f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af812 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af816 jl 0x120af83f */
  if ((C.sf!=C.of)) goto L_120af83f;
  /* 120af818 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af81b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120af81e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af821 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 120af824 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af827 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120af82a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af82d add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af830 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120af833 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af839 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af83c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120af83f:;
  /* 120af83f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af842 mov esp, ebp */
  ESP = (EBP);
  /* 120af844 pop ebp */
  EBP = (pop32());
  /* 120af845 ret  */
  ESPCHK(0x120af800u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x120af850 (76 bytes, 34 insns) */
void f_120af850(void) {
  FTRACE(0x120af850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af850 push ebp */
  push32((uint32_t)(EBP));
  /* 120af851 mov ebp, esp */
  EBP = (ESP);
  /* 120af853 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af856 push ebx */
  push32((uint32_t)(EBX));
  /* 120af857 push ecx */
  push32((uint32_t)(ECX));
  /* 120af858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120af85b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120af85e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120af861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af864 push ebp */
  push32((uint32_t)(EBP));
  /* 120af865 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120af868 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af86b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 120af86e call 0x120ab17d */
  push32(0x120af873u); f_120ab17d();
  /* 120af873 push esi */
  push32((uint32_t)(ESI));
  /* 120af874 push edi */
  push32((uint32_t)(EDI));
  /* 120af875 call eax */
  call_ind((uint32_t)(EAX), 0x120af877u);
  /* 120af877 pop edi */
  EDI = (pop32());
  /* 120af878 pop esi */
  ESI = (pop32());
  /* 120af879 mov ebx, ebp */
  EBX = (EBP);
  /* 120af87b pop ebp */
  EBP = (pop32());
  /* 120af87c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120af87f push ebp */
  push32((uint32_t)(EBP));
  /* 120af880 mov ebp, ebx */
  EBP = (EBX);
  /* 120af882 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af888 jne 0x120af88f */
  if (!C.zf) goto L_120af88f;
  /* 120af88a mov ecx, 2 */
  ECX = (0x2u);
L_120af88f:;
  /* 120af88f push ecx */
  push32((uint32_t)(ECX));
  /* 120af890 call 0x120ab17d */
  push32(0x120af895u); f_120ab17d();
  /* 120af895 pop ebp */
  EBP = (pop32());
  /* 120af896 pop ecx */
  ECX = (pop32());
  /* 120af897 pop ebx */
  EBX = (pop32());
  /* 120af898 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120af899 ret 0xc */
  ESPCHK(0x120af850u, _esp0);
  ESP += 16; return;
}

