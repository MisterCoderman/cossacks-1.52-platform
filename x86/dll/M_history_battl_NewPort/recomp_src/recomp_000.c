#include "recomp.h"

/* thunk_FUN_10002030 @ 0x12e71005 (5 bytes, 1 insns) */
void f_12e71005(void) {
  FTRACE(0x12e71005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71005 jmp 0x12e72030 */
  f_12e72030(); return;
}

/* OnInit @ 0x12e7100a (5 bytes, 1 insns) */
void f_12e7100a(void) {
  FTRACE(0x12e7100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7100a jmp 0x12e718c0 */
  f_12e718c0(); return;
}

/* thunk_FUN_100010a0 @ 0x12e71014 (5 bytes, 1 insns) */
void f_12e71014(void) {
  FTRACE(0x12e71014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71014 jmp 0x12e710a0 */
  f_12e710a0(); return;
}

/* thunk_FUN_10001260 @ 0x12e71019 (5 bytes, 1 insns) */
void f_12e71019(void) {
  FTRACE(0x12e71019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71019 jmp 0x12e71260 */
  f_12e71260(); return;
}

/* thunk_FUN_10001100 @ 0x12e71023 (5 bytes, 1 insns) */
void f_12e71023(void) {
  FTRACE(0x12e71023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71023 jmp 0x12e71100 */
  f_12e71100(); return;
}

/* ProcessScenary @ 0x12e71028 (5 bytes, 1 insns) */
void f_12e71028(void) {
  FTRACE(0x12e71028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71028 jmp 0x12e71ad0 */
  f_12e71ad0(); return;
}

/* thunk_FUN_10001790 @ 0x12e7102d (5 bytes, 1 insns) */
void f_12e7102d(void) {
  FTRACE(0x12e7102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7102d jmp 0x12e71790 */
  f_12e71790(); return;
}

/* thunk_FUN_100011a0 @ 0x12e71032 (5 bytes, 1 insns) */
void f_12e71032(void) {
  FTRACE(0x12e71032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71032 jmp 0x12e711a0 */
  f_12e711a0(); return;
}

/* thunk_FUN_100016c0 @ 0x12e7103c (5 bytes, 1 insns) */
void f_12e7103c(void) {
  FTRACE(0x12e7103cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7103c jmp 0x12e716c0 */
  f_12e716c0(); return;
}

/* thunk_FUN_10001880 @ 0x12e71046 (5 bytes, 1 insns) */
void f_12e71046(void) {
  FTRACE(0x12e71046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71046 jmp 0x12e71880 */
  f_12e71880(); return;
}

/* FUN_100010a0 @ 0x12e710a0 (67 bytes, 26 insns) */
void f_12e710a0(void) {
  FTRACE(0x12e710a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e710a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e710a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e710a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e710a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e710a7 push esi */
  push32((uint32_t)(ESI));
  /* 12e710a8 push edi */
  push32((uint32_t)(EDI));
  /* 12e710a9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12e710ac mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12e710b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e710b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e710b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e710bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e710be cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e710c2 je 0x12e710c6 */
  if (C.zf) goto L_12e710c6;
  /* 12e710c4 jmp 0x12e710cb */
  goto L_12e710cb;
L_12e710c6:;
  /* 12e710c6 call 0x12e7100a */
  push32(0x12e710cbu); f_12e7100a();
L_12e710cb:;
  /* 12e710cb mov eax, 1 */
  EAX = (0x1u);
  /* 12e710d0 pop edi */
  EDI = (pop32());
  /* 12e710d1 pop esi */
  ESI = (pop32());
  /* 12e710d2 pop ebx */
  EBX = (pop32());
  /* 12e710d3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e710d6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e710d8 call 0x12e72140 */
  push32(0x12e710ddu); f_12e72140();
  /* 12e710dd mov esp, ebp */
  ESP = (EBP);
  /* 12e710df pop ebp */
  EBP = (pop32());
  /* 12e710e0 ret 0xc */
  ESPCHK(0x12e710a0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001100 @ 0x12e71100 (127 bytes, 45 insns) */
void f_12e71100(void) {
  FTRACE(0x12e71100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71100 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71101 mov ebp, esp */
  EBP = (ESP);
  /* 12e71103 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71106 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71107 push esi */
  push32((uint32_t)(ESI));
  /* 12e71108 push edi */
  push32((uint32_t)(EDI));
  /* 12e71109 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12e7110c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12e71111 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e71116 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e71118 mov esi, esp */
  ESI = (ESP);
  /* 12e7111a call dword ptr [0x12e92478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92478))), 0x12e71120u);
  /* 12e71120 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71122 call 0x12e72140 */
  push32(0x12e71127u); f_12e72140();
  /* 12e71127 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7112a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7112d cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71130 jne 0x12e71143 */
  if (!C.zf) goto L_12e71143;
  /* 12e71132 mov esi, esp */
  ESI = (ESP);
  /* 12e71134 call dword ptr [0x12e9247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9247c))), 0x12e7113au);
  /* 12e7113a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7113c call 0x12e72140 */
  push32(0x12e71141u); f_12e72140();
  /* 12e71141 jmp 0x12e71152 */
  goto L_12e71152;
L_12e71143:;
  /* 12e71143 mov esi, esp */
  ESI = (ESP);
  /* 12e71145 call dword ptr [0x12e92480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92480))), 0x12e7114bu);
  /* 12e7114b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7114d call 0x12e72140 */
  push32(0x12e71152u); f_12e72140();
L_12e71152:;
  /* 12e71152 mov esi, esp */
  ESI = (ESP);
  /* 12e71154 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e71157 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7115a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e7115d push eax */
  push32((uint32_t)(EAX));
  /* 12e7115e call dword ptr [0x12e92484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92484))), 0x12e71164u);
  /* 12e71164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71169 call 0x12e72140 */
  push32(0x12e7116eu); f_12e72140();
  /* 12e7116e pop edi */
  EDI = (pop32());
  /* 12e7116f pop esi */
  ESI = (pop32());
  /* 12e71170 pop ebx */
  EBX = (pop32());
  /* 12e71171 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71174 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71176 call 0x12e72140 */
  push32(0x12e7117bu); f_12e72140();
  /* 12e7117b mov esp, ebp */
  ESP = (EBP);
  /* 12e7117d pop ebp */
  EBP = (pop32());
  /* 12e7117e ret  */
  ESPCHK(0x12e71100u, _esp0);
  ESP += 4; return;
}

/* FUN_100011a0 @ 0x12e711a0 (143 bytes, 45 insns) */
void f_12e711a0(void) {
  FTRACE(0x12e711a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e711a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e711a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e711a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e711a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e711a7 push esi */
  push32((uint32_t)(ESI));
  /* 12e711a8 push edi */
  push32((uint32_t)(EDI));
  /* 12e711a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e711ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e711b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e711b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e711b8 mov esi, esp */
  ESI = (ESP);
  /* 12e711ba push 0x12e8a088 */
  push32((uint32_t)(0x12e8a088u));
  /* 12e711bf push 0x12e8f470 */
  push32((uint32_t)(0x12e8f470u));
  /* 12e711c4 call dword ptr [0x12e92470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92470))), 0x12e711cau);
  /* 12e711ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e711cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e711cf call 0x12e72140 */
  push32(0x12e711d4u); f_12e72140();
  /* 12e711d4 mov esi, esp */
  ESI = (ESP);
  /* 12e711d6 push 0x12e8a080 */
  push32((uint32_t)(0x12e8a080u));
  /* 12e711db push 0x12e8f478 */
  push32((uint32_t)(0x12e8f478u));
  /* 12e711e0 call dword ptr [0x12e92470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92470))), 0x12e711e6u);
  /* 12e711e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e711e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e711eb call 0x12e72140 */
  push32(0x12e711f0u); f_12e72140();
  /* 12e711f0 mov esi, esp */
  ESI = (ESP);
  /* 12e711f2 push 0x12e8f400 */
  push32((uint32_t)(0x12e8f400u));
  /* 12e711f7 call dword ptr [0x12e92474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92474))), 0x12e711fdu);
  /* 12e711fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71202 call 0x12e72140 */
  push32(0x12e71207u); f_12e72140();
  /* 12e71207 mov esi, esp */
  ESI = (ESP);
  /* 12e71209 push 0x12e8f410 */
  push32((uint32_t)(0x12e8f410u));
  /* 12e7120e call dword ptr [0x12e92474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92474))), 0x12e71214u);
  /* 12e71214 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71219 call 0x12e72140 */
  push32(0x12e7121eu); f_12e72140();
  /* 12e7121e pop edi */
  EDI = (pop32());
  /* 12e7121f pop esi */
  ESI = (pop32());
  /* 12e71220 pop ebx */
  EBX = (pop32());
  /* 12e71221 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71224 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71226 call 0x12e72140 */
  push32(0x12e7122bu); f_12e72140();
  /* 12e7122b mov esp, ebp */
  ESP = (EBP);
  /* 12e7122d pop ebp */
  EBP = (pop32());
  /* 12e7122e ret  */
  ESPCHK(0x12e711a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001260 @ 0x12e71260 (293 bytes, 99 insns) */
void f_12e71260(void) {
  FTRACE(0x12e71260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71260 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71261 mov ebp, esp */
  EBP = (ESP);
  /* 12e71263 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71266 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71267 push esi */
  push32((uint32_t)(ESI));
  /* 12e71268 push edi */
  push32((uint32_t)(EDI));
  /* 12e71269 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 12e7126c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 12e71271 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e71276 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e71278 mov esi, esp */
  ESI = (ESP);
  /* 12e7127a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7127c push 0x12e8f410 */
  push32((uint32_t)(0x12e8f410u));
  /* 12e71281 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e71284 push eax */
  push32((uint32_t)(EAX));
  /* 12e71285 call dword ptr [0x12e92458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92458))), 0x12e7128bu);
  /* 12e7128b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7128e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71290 call 0x12e72140 */
  push32(0x12e71295u); f_12e72140();
  /* 12e71295 mov esi, esp */
  ESI = (ESP);
  /* 12e71297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71299 mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e7129c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7129d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e712a0 push edx */
  push32((uint32_t)(EDX));
  /* 12e712a1 call dword ptr [0x12e9245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9245c))), 0x12e712a7u);
  /* 12e712a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e712aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e712ac call 0x12e72140 */
  push32(0x12e712b1u); f_12e72140();
  /* 12e712b1 mov esi, esp */
  ESI = (ESP);
  /* 12e712b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e712b5 push 0x12e8f400 */
  push32((uint32_t)(0x12e8f400u));
  /* 12e712ba mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e712bd push eax */
  push32((uint32_t)(EAX));
  /* 12e712be call dword ptr [0x12e92458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92458))), 0x12e712c4u);
  /* 12e712c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e712c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e712c9 call 0x12e72140 */
  push32(0x12e712ceu); f_12e72140();
  /* 12e712ce mov esi, esp */
  ESI = (ESP);
  /* 12e712d0 push 0x12e8f400 */
  push32((uint32_t)(0x12e8f400u));
  /* 12e712d5 call dword ptr [0x12e92460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92460))), 0x12e712dbu);
  /* 12e712db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e712de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e712e0 call 0x12e72140 */
  push32(0x12e712e5u); f_12e72140();
  /* 12e712e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e712e8 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 12e712ef jmp 0x12e712fa */
  goto L_12e712fa;
L_12e712f1:;
  /* 12e712f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e712f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e712f7 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_12e712fa:;
  /* 12e712fa mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e712fd cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71300 jge 0x12e71357 */
  if ((C.sf==C.of)) goto L_12e71357;
  /* 12e71302 mov esi, esp */
  ESI = (ESP);
  /* 12e71304 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12e71307 push eax */
  push32((uint32_t)(EAX));
  /* 12e71308 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e7130b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7130c push 0x12e8f400 */
  push32((uint32_t)(0x12e8f400u));
  /* 12e71311 call dword ptr [0x12e92464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92464))), 0x12e71317u);
  /* 12e71317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7131a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7131c call 0x12e72140 */
  push32(0x12e71321u); f_12e72140();
  /* 12e71321 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e71324 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7132a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7132c je 0x12e71339 */
  if (C.zf) goto L_12e71339;
  /* 12e7132e mov al, byte ptr [ebp - 0x28] */
  AL = (r8((uint32_t)(EBP + -0x28)));
  /* 12e71331 add al, byte ptr [ebp + 0x10] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBP + 0x10))),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e71334 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12e71337 jmp 0x12e7133f */
  goto L_12e7133f;
L_12e71339:;
  /* 12e71339 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12e7133c mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
L_12e7133f:;
  /* 12e7133f mov esi, esp */
  ESI = (ESP);
  /* 12e71341 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 12e71344 push edx */
  push32((uint32_t)(EDX));
  /* 12e71345 call dword ptr [0x12e92468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92468))), 0x12e7134bu);
  /* 12e7134b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7134e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71350 call 0x12e72140 */
  push32(0x12e71355u); f_12e72140();
  /* 12e71355 jmp 0x12e712f1 */
  goto L_12e712f1;
L_12e71357:;
  /* 12e71357 mov esi, esp */
  ESI = (ESP);
  /* 12e71359 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7135b push 0x12e8f410 */
  push32((uint32_t)(0x12e8f410u));
  /* 12e71360 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e71363 push eax */
  push32((uint32_t)(EAX));
  /* 12e71364 call dword ptr [0x12e9246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9246c))), 0x12e7136au);
  /* 12e7136a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7136f call 0x12e72140 */
  push32(0x12e71374u); f_12e72140();
  /* 12e71374 pop edi */
  EDI = (pop32());
  /* 12e71375 pop esi */
  ESI = (pop32());
  /* 12e71376 pop ebx */
  EBX = (pop32());
  /* 12e71377 add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7137a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7137c call 0x12e72140 */
  push32(0x12e71381u); f_12e72140();
  /* 12e71381 mov esp, ebp */
  ESP = (EBP);
  /* 12e71383 pop ebp */
  EBP = (pop32());
  /* 12e71384 ret  */
  ESPCHK(0x12e71260u, _esp0);
  ESP += 4; return;
}

/* FUN_100013d0 @ 0x12e713d0 (107 bytes, 40 insns) */
void f_12e713d0(void) {
  FTRACE(0x12e713d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e713d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e713d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e713d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e713d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e713d7 push esi */
  push32((uint32_t)(ESI));
  /* 12e713d8 push edi */
  push32((uint32_t)(EDI));
  /* 12e713d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e713dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e713e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e713e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e713e8 mov esi, esp */
  ESI = (ESP);
  /* 12e713ea push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 12e713ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e713f2 push eax */
  push32((uint32_t)(EAX));
  /* 12e713f3 push 0x12e8f488 */
  push32((uint32_t)(0x12e8f488u));
  /* 12e713f8 call dword ptr [0x12e92454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92454))), 0x12e713feu);
  /* 12e713fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71401 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71403 call 0x12e72140 */
  push32(0x12e71408u); f_12e72140();
  /* 12e71408 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7140d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7140f je 0x12e7142a */
  if (C.zf) goto L_12e7142a;
  /* 12e71411 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 12e71414 push ecx */
  push32((uint32_t)(ECX));
  /* 12e71415 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e71418 push edx */
  push32((uint32_t)(EDX));
  /* 12e71419 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7141c push eax */
  push32((uint32_t)(EAX));
  /* 12e7141d push 0x12e8f488 */
  push32((uint32_t)(0x12e8f488u));
  /* 12e71422 call 0x12e71019 */
  push32(0x12e71427u); f_12e71019();
  /* 12e71427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7142a:;
  /* 12e7142a pop edi */
  EDI = (pop32());
  /* 12e7142b pop esi */
  ESI = (pop32());
  /* 12e7142c pop ebx */
  EBX = (pop32());
  /* 12e7142d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71430 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71432 call 0x12e72140 */
  push32(0x12e71437u); f_12e72140();
  /* 12e71437 mov esp, ebp */
  ESP = (EBP);
  /* 12e71439 pop ebp */
  EBP = (pop32());
  /* 12e7143a ret  */
  ESPCHK(0x12e713d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001460 @ 0x12e71460 (154 bytes, 56 insns) */
void f_12e71460(void) {
  FTRACE(0x12e71460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71460 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71461 mov ebp, esp */
  EBP = (ESP);
  /* 12e71463 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71466 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71467 push esi */
  push32((uint32_t)(ESI));
  /* 12e71468 push edi */
  push32((uint32_t)(EDI));
  /* 12e71469 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 12e7146c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 12e71471 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e71476 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e71478 mov esi, esp */
  ESI = (ESP);
  /* 12e7147a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7147d push eax */
  push32((uint32_t)(EAX));
  /* 12e7147e call dword ptr [0x12e92460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92460))), 0x12e71484u);
  /* 12e71484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71487 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71489 call 0x12e72140 */
  push32(0x12e7148eu); f_12e72140();
  /* 12e7148e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e71491 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 12e71498 jmp 0x12e714a3 */
  goto L_12e714a3;
L_12e7149a:;
  /* 12e7149a mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e7149d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e714a0 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_12e714a3:;
  /* 12e714a3 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e714a6 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e714a9 jge 0x12e714e9 */
  if ((C.sf==C.of)) goto L_12e714e9;
  /* 12e714ab mov esi, esp */
  ESI = (ESP);
  /* 12e714ad lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12e714b0 push eax */
  push32((uint32_t)(EAX));
  /* 12e714b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e714b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e714b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e714b8 push edx */
  push32((uint32_t)(EDX));
  /* 12e714b9 call dword ptr [0x12e92464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92464))), 0x12e714bfu);
  /* 12e714bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e714c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e714c4 call 0x12e72140 */
  push32(0x12e714c9u); f_12e72140();
  /* 12e714c9 mov byte ptr [ebp - 0x28], 0 */
  w8((uint32_t)(EBP + -0x28), (0x0u));
  /* 12e714cd mov byte ptr [ebp - 0x27], 0 */
  w8((uint32_t)(EBP + -0x27), (0x0u));
  /* 12e714d1 mov esi, esp */
  ESI = (ESP);
  /* 12e714d3 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12e714d6 push eax */
  push32((uint32_t)(EAX));
  /* 12e714d7 call dword ptr [0x12e92468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92468))), 0x12e714ddu);
  /* 12e714dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e714e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e714e2 call 0x12e72140 */
  push32(0x12e714e7u); f_12e72140();
  /* 12e714e7 jmp 0x12e7149a */
  goto L_12e7149a;
L_12e714e9:;
  /* 12e714e9 pop edi */
  EDI = (pop32());
  /* 12e714ea pop esi */
  ESI = (pop32());
  /* 12e714eb pop ebx */
  EBX = (pop32());
  /* 12e714ec add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e714ef cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e714f1 call 0x12e72140 */
  push32(0x12e714f6u); f_12e72140();
  /* 12e714f6 mov esp, ebp */
  ESP = (EBP);
  /* 12e714f8 pop ebp */
  EBP = (pop32());
  /* 12e714f9 ret  */
  ESPCHK(0x12e71460u, _esp0);
  ESP += 4; return;
}

/* FUN_10001520 @ 0x12e71520 (198 bytes, 69 insns) */
void f_12e71520(void) {
  FTRACE(0x12e71520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71520 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71521 mov ebp, esp */
  EBP = (ESP);
  /* 12e71523 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71526 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71527 push esi */
  push32((uint32_t)(ESI));
  /* 12e71528 push edi */
  push32((uint32_t)(EDI));
  /* 12e71529 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12e7152c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12e71531 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e71536 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e71538 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7153f jmp 0x12e7154a */
  goto L_12e7154a;
L_12e71541:;
  /* 12e71541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e71544 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71547 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7154a:;
  /* 12e7154a cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7154e jge 0x12e715d5 */
  if ((C.sf==C.of)) goto L_12e715d5;
  /* 12e71554 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e71556 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7155a setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 12e7155d mov esi, esp */
  ESI = (ESP);
  /* 12e7155f push ecx */
  push32((uint32_t)(ECX));
  /* 12e71560 push 0x12e8f410 */
  push32((uint32_t)(0x12e8f410u));
  /* 12e71565 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12e71568 push edx */
  push32((uint32_t)(EDX));
  /* 12e71569 call dword ptr [0x12e92458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92458))), 0x12e7156fu);
  /* 12e7156f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71574 call 0x12e72140 */
  push32(0x12e71579u); f_12e72140();
  /* 12e71579 mov esi, esp */
  ESI = (ESP);
  /* 12e7157b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7157d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e71580 push eax */
  push32((uint32_t)(EAX));
  /* 12e71581 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12e71584 push ecx */
  push32((uint32_t)(ECX));
  /* 12e71585 call dword ptr [0x12e9246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9246c))), 0x12e7158bu);
  /* 12e7158b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7158e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71590 call 0x12e72140 */
  push32(0x12e71595u); f_12e72140();
  /* 12e71595 mov esi, esp */
  ESI = (ESP);
  /* 12e71597 mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 12e7159a push edx */
  push32((uint32_t)(EDX));
  /* 12e7159b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7159e push eax */
  push32((uint32_t)(EAX));
  /* 12e7159f mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12e715a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e715a3 call dword ptr [0x12e92458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92458))), 0x12e715a9u);
  /* 12e715a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e715ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e715ae call 0x12e72140 */
  push32(0x12e715b3u); f_12e72140();
  /* 12e715b3 mov esi, esp */
  ESI = (ESP);
  /* 12e715b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e715b7 push 0x12e8f410 */
  push32((uint32_t)(0x12e8f410u));
  /* 12e715bc mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12e715bf push edx */
  push32((uint32_t)(EDX));
  /* 12e715c0 call dword ptr [0x12e9246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9246c))), 0x12e715c6u);
  /* 12e715c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e715c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e715cb call 0x12e72140 */
  push32(0x12e715d0u); f_12e72140();
  /* 12e715d0 jmp 0x12e71541 */
  goto L_12e71541;
L_12e715d5:;
  /* 12e715d5 pop edi */
  EDI = (pop32());
  /* 12e715d6 pop esi */
  ESI = (pop32());
  /* 12e715d7 pop ebx */
  EBX = (pop32());
  /* 12e715d8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e715db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e715dd call 0x12e72140 */
  push32(0x12e715e2u); f_12e72140();
  /* 12e715e2 mov esp, ebp */
  ESP = (EBP);
  /* 12e715e4 pop ebp */
  EBP = (pop32());
  /* 12e715e5 ret  */
  ESPCHK(0x12e71520u, _esp0);
  ESP += 4; return;
}

/* FUN_10001620 @ 0x12e71620 (119 bytes, 44 insns) */
void f_12e71620(void) {
  FTRACE(0x12e71620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71620 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71621 mov ebp, esp */
  EBP = (ESP);
  /* 12e71623 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71626 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71627 push esi */
  push32((uint32_t)(ESI));
  /* 12e71628 push edi */
  push32((uint32_t)(EDI));
  /* 12e71629 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12e7162c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12e71631 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e71636 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e71638 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e7163f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e71646 jmp 0x12e71651 */
  goto L_12e71651;
L_12e71648:;
  /* 12e71648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7164b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7164e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e71651:;
  /* 12e71651 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e71654 cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71657 jge 0x12e71683 */
  if ((C.sf==C.of)) goto L_12e71683;
  /* 12e71659 mov esi, esp */
  ESI = (ESP);
  /* 12e7165b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7165e push edx */
  push32((uint32_t)(EDX));
  /* 12e7165f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e71662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e71665 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12e71668 push edx */
  push32((uint32_t)(EDX));
  /* 12e71669 call dword ptr [0x12e92450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92450))), 0x12e7166fu);
  /* 12e7166f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71672 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71674 call 0x12e72140 */
  push32(0x12e71679u); f_12e72140();
  /* 12e71679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7167c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7167e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e71681 jmp 0x12e71648 */
  goto L_12e71648;
L_12e71683:;
  /* 12e71683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e71686 pop edi */
  EDI = (pop32());
  /* 12e71687 pop esi */
  ESI = (pop32());
  /* 12e71688 pop ebx */
  EBX = (pop32());
  /* 12e71689 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7168c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7168e call 0x12e72140 */
  push32(0x12e71693u); f_12e72140();
  /* 12e71693 mov esp, ebp */
  ESP = (EBP);
  /* 12e71695 pop ebp */
  EBP = (pop32());
  /* 12e71696 ret  */
  ESPCHK(0x12e71620u, _esp0);
  ESP += 4; return;
}

/* FUN_100016c0 @ 0x12e716c0 (160 bytes, 56 insns) */
void f_12e716c0(void) {
  FTRACE(0x12e716c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e716c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e716c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e716c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e716c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e716c7 push esi */
  push32((uint32_t)(ESI));
  /* 12e716c8 push edi */
  push32((uint32_t)(EDI));
  /* 12e716c9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12e716cc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12e716d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e716d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e716d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e716df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e716e6 jmp 0x12e716f1 */
  goto L_12e716f1;
L_12e716e8:;
  /* 12e716e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e716eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e716ee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e716f1:;
  /* 12e716f1 cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e716f5 jge 0x12e7174c */
  if ((C.sf==C.of)) goto L_12e7174c;
  /* 12e716f7 mov esi, esp */
  ESI = (ESP);
  /* 12e716f9 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e716fc push ecx */
  push32((uint32_t)(ECX));
  /* 12e716fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e71700 lea eax, [edx*8 + 0x12e8f438] */
  EAX = ((uint32_t)(EDX*8 + 0x12e8f438));
  /* 12e71707 push eax */
  push32((uint32_t)(EAX));
  /* 12e71708 call dword ptr [0x12e9244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9244c))), 0x12e7170eu);
  /* 12e7170e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71713 call 0x12e72140 */
  push32(0x12e71718u); f_12e72140();
  /* 12e71718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7171a jle 0x12e7174a */
  if ((C.zf||C.sf!=C.of)) goto L_12e7174a;
  /* 12e7171c mov esi, esp */
  ESI = (ESP);
  /* 12e7171e mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12e71721 push ecx */
  push32((uint32_t)(ECX));
  /* 12e71722 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e71725 lea eax, [edx*8 + 0x12e8f438] */
  EAX = ((uint32_t)(EDX*8 + 0x12e8f438));
  /* 12e7172c push eax */
  push32((uint32_t)(EAX));
  /* 12e7172d call dword ptr [0x12e9244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9244c))), 0x12e71733u);
  /* 12e71733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71738 call 0x12e72140 */
  push32(0x12e7173du); f_12e72140();
  /* 12e7173d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7173f jne 0x12e7174a */
  if (!C.zf) goto L_12e7174a;
  /* 12e71741 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e71744 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71747 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7174a:;
  /* 12e7174a jmp 0x12e716e8 */
  goto L_12e716e8;
L_12e7174c:;
  /* 12e7174c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7174f pop edi */
  EDI = (pop32());
  /* 12e71750 pop esi */
  ESI = (pop32());
  /* 12e71751 pop ebx */
  EBX = (pop32());
  /* 12e71752 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71755 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71757 call 0x12e72140 */
  push32(0x12e7175cu); f_12e72140();
  /* 12e7175c mov esp, ebp */
  ESP = (EBP);
  /* 12e7175e pop ebp */
  EBP = (pop32());
  /* 12e7175f ret  */
  ESPCHK(0x12e716c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x12e71790 (181 bytes, 54 insns) */
void f_12e71790(void) {
  FTRACE(0x12e71790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71790 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71791 mov ebp, esp */
  EBP = (ESP);
  /* 12e71793 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71796 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71797 push esi */
  push32((uint32_t)(ESI));
  /* 12e71798 push edi */
  push32((uint32_t)(EDI));
  /* 12e71799 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e7179c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e717a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e717a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e717a8 mov esi, esp */
  ESI = (ESP);
  /* 12e717aa push 0x12e8a0b0 */
  push32((uint32_t)(0x12e8a0b0u));
  /* 12e717af push 0x12e8f438 */
  push32((uint32_t)(0x12e8f438u));
  /* 12e717b4 call dword ptr [0x12e92448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92448))), 0x12e717bau);
  /* 12e717ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e717bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e717bf call 0x12e72140 */
  push32(0x12e717c4u); f_12e72140();
  /* 12e717c4 mov esi, esp */
  ESI = (ESP);
  /* 12e717c6 push 0x12e8a0a8 */
  push32((uint32_t)(0x12e8a0a8u));
  /* 12e717cb push 0x12e8f440 */
  push32((uint32_t)(0x12e8f440u));
  /* 12e717d0 call dword ptr [0x12e92448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92448))), 0x12e717d6u);
  /* 12e717d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e717d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e717db call 0x12e72140 */
  push32(0x12e717e0u); f_12e72140();
  /* 12e717e0 mov esi, esp */
  ESI = (ESP);
  /* 12e717e2 push 0x12e8a0a0 */
  push32((uint32_t)(0x12e8a0a0u));
  /* 12e717e7 push 0x12e8f448 */
  push32((uint32_t)(0x12e8f448u));
  /* 12e717ec call dword ptr [0x12e92448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92448))), 0x12e717f2u);
  /* 12e717f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e717f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e717f7 call 0x12e72140 */
  push32(0x12e717fcu); f_12e72140();
  /* 12e717fc mov esi, esp */
  ESI = (ESP);
  /* 12e717fe push 0x12e8a098 */
  push32((uint32_t)(0x12e8a098u));
  /* 12e71803 push 0x12e8f450 */
  push32((uint32_t)(0x12e8f450u));
  /* 12e71808 call dword ptr [0x12e92448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92448))), 0x12e7180eu);
  /* 12e7180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71813 call 0x12e72140 */
  push32(0x12e71818u); f_12e72140();
  /* 12e71818 mov esi, esp */
  ESI = (ESP);
  /* 12e7181a push 0x12e8a090 */
  push32((uint32_t)(0x12e8a090u));
  /* 12e7181f push 0x12e8f458 */
  push32((uint32_t)(0x12e8f458u));
  /* 12e71824 call dword ptr [0x12e92448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92448))), 0x12e7182au);
  /* 12e7182a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7182d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7182f call 0x12e72140 */
  push32(0x12e71834u); f_12e72140();
  /* 12e71834 pop edi */
  EDI = (pop32());
  /* 12e71835 pop esi */
  ESI = (pop32());
  /* 12e71836 pop ebx */
  EBX = (pop32());
  /* 12e71837 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7183a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7183c call 0x12e72140 */
  push32(0x12e71841u); f_12e72140();
  /* 12e71841 mov esp, ebp */
  ESP = (EBP);
  /* 12e71843 pop ebp */
  EBP = (pop32());
  /* 12e71844 ret  */
  ESPCHK(0x12e71790u, _esp0);
  ESP += 4; return;
}

/* FUN_10001880 @ 0x12e71880 (51 bytes, 21 insns) */
void f_12e71880(void) {
  FTRACE(0x12e71880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71880 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71881 mov ebp, esp */
  EBP = (ESP);
  /* 12e71883 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71886 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71887 push esi */
  push32((uint32_t)(ESI));
  /* 12e71888 push edi */
  push32((uint32_t)(EDI));
  /* 12e71889 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e7188c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e71891 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e71896 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e71898 call 0x12e71032 */
  push32(0x12e7189du); f_12e71032();
  /* 12e7189d call 0x12e7102d */
  push32(0x12e718a2u); f_12e7102d();
  /* 12e718a2 pop edi */
  EDI = (pop32());
  /* 12e718a3 pop esi */
  ESI = (pop32());
  /* 12e718a4 pop ebx */
  EBX = (pop32());
  /* 12e718a5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e718a8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e718aa call 0x12e72140 */
  push32(0x12e718afu); f_12e72140();
  /* 12e718af mov esp, ebp */
  ESP = (EBP);
  /* 12e718b1 pop ebp */
  EBP = (pop32());
  /* 12e718b2 ret  */
  ESPCHK(0x12e71880u, _esp0);
  ESP += 4; return;
}

/* FUN_100018c0 @ 0x12e718c0 (419 bytes, 122 insns) */
void f_12e718c0(void) {
  FTRACE(0x12e718c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e718c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e718c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e718c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e718c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e718c7 push esi */
  push32((uint32_t)(ESI));
  /* 12e718c8 push edi */
  push32((uint32_t)(EDI));
  /* 12e718c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e718cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e718d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e718d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e718d8 call 0x12e71046 */
  push32(0x12e718ddu); f_12e71046();
  /* 12e718dd mov esi, esp */
  ESI = (ESP);
  /* 12e718df push 0x12e8a12c */
  push32((uint32_t)(0x12e8a12cu));
  /* 12e718e4 push 0x12e8f468 */
  push32((uint32_t)(0x12e8f468u));
  /* 12e718e9 call dword ptr [0x12e92470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92470))), 0x12e718efu);
  /* 12e718ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e718f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e718f4 call 0x12e72140 */
  push32(0x12e718f9u); f_12e72140();
  /* 12e718f9 mov esi, esp */
  ESI = (ESP);
  /* 12e718fb push 0x12e8a120 */
  push32((uint32_t)(0x12e8a120u));
  /* 12e71900 push 0x12e8f480 */
  push32((uint32_t)(0x12e8f480u));
  /* 12e71905 call dword ptr [0x12e92470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92470))), 0x12e7190bu);
  /* 12e7190b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7190e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71910 call 0x12e72140 */
  push32(0x12e71915u); f_12e72140();
  /* 12e71915 mov esi, esp */
  ESI = (ESP);
  /* 12e71917 push 0x12e8a114 */
  push32((uint32_t)(0x12e8a114u));
  /* 12e7191c push 0x12e8f418 */
  push32((uint32_t)(0x12e8f418u));
  /* 12e71921 call dword ptr [0x12e92470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92470))), 0x12e71927u);
  /* 12e71927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7192a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7192c call 0x12e72140 */
  push32(0x12e71931u); f_12e72140();
  /* 12e71931 mov esi, esp */
  ESI = (ESP);
  /* 12e71933 push 0x12e8a104 */
  push32((uint32_t)(0x12e8a104u));
  /* 12e71938 push 0x12e8f420 */
  push32((uint32_t)(0x12e8f420u));
  /* 12e7193d call dword ptr [0x12e92470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92470))), 0x12e71943u);
  /* 12e71943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71946 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71948 call 0x12e72140 */
  push32(0x12e7194du); f_12e72140();
  /* 12e7194d mov esi, esp */
  ESI = (ESP);
  /* 12e7194f push 0x12e8a0fc */
  push32((uint32_t)(0x12e8a0fcu));
  /* 12e71954 push 0x12e8f408 */
  push32((uint32_t)(0x12e8f408u));
  /* 12e71959 call dword ptr [0x12e92430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92430))), 0x12e7195fu);
  /* 12e7195f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71964 call 0x12e72140 */
  push32(0x12e71969u); f_12e72140();
  /* 12e71969 mov esi, esp */
  ESI = (ESP);
  /* 12e7196b push 0x12e8a0f0 */
  push32((uint32_t)(0x12e8a0f0u));
  /* 12e71970 push 0x12e8f428 */
  push32((uint32_t)(0x12e8f428u));
  /* 12e71975 call dword ptr [0x12e92430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92430))), 0x12e7197bu);
  /* 12e7197b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7197e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71980 call 0x12e72140 */
  push32(0x12e71985u); f_12e72140();
  /* 12e71985 mov esi, esp */
  ESI = (ESP);
  /* 12e71987 push 0x12e8a0e4 */
  push32((uint32_t)(0x12e8a0e4u));
  /* 12e7198c push 0x12e8f430 */
  push32((uint32_t)(0x12e8f430u));
  /* 12e71991 call dword ptr [0x12e92430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92430))), 0x12e71997u);
  /* 12e71997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7199a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7199c call 0x12e72140 */
  push32(0x12e719a1u); f_12e72140();
  /* 12e719a1 mov esi, esp */
  ESI = (ESP);
  /* 12e719a3 push 0x12e8a0c8 */
  push32((uint32_t)(0x12e8a0c8u));
  /* 12e719a8 push 0x12e8f460 */
  push32((uint32_t)(0x12e8f460u));
  /* 12e719ad call dword ptr [0x12e92434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92434))), 0x12e719b3u);
  /* 12e719b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e719b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e719b8 call 0x12e72140 */
  push32(0x12e719bdu); f_12e72140();
  /* 12e719bd mov esi, esp */
  ESI = (ESP);
  /* 12e719bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12e719c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e719c3 call dword ptr [0x12e92438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92438))), 0x12e719c9u);
  /* 12e719c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e719cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e719ce call 0x12e72140 */
  push32(0x12e719d3u); f_12e72140();
  /* 12e719d3 mov esi, esp */
  ESI = (ESP);
  /* 12e719d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e719d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e719d9 call dword ptr [0x12e92438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92438))), 0x12e719dfu);
  /* 12e719df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e719e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e719e4 call 0x12e72140 */
  push32(0x12e719e9u); f_12e72140();
  /* 12e719e9 mov esi, esp */
  ESI = (ESP);
  /* 12e719eb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e719ed push 2 */
  push32((uint32_t)(0x2u));
  /* 12e719ef call dword ptr [0x12e92438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92438))), 0x12e719f5u);
  /* 12e719f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e719f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e719fa call 0x12e72140 */
  push32(0x12e719ffu); f_12e72140();
  /* 12e719ff mov esi, esp */
  ESI = (ESP);
  /* 12e71a01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71a05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71a09 push 0x12e8f460 */
  push32((uint32_t)(0x12e8f460u));
  /* 12e71a0e call dword ptr [0x12e9243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9243c))), 0x12e71a14u);
  /* 12e71a14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71a17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71a19 call 0x12e72140 */
  push32(0x12e71a1eu); f_12e72140();
  /* 12e71a1e mov esi, esp */
  ESI = (ESP);
  /* 12e71a20 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71a22 push 5 */
  push32((uint32_t)(0x5u));
  /* 12e71a24 push 0x12e8f428 */
  push32((uint32_t)(0x12e8f428u));
  /* 12e71a29 call dword ptr [0x12e92440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92440))), 0x12e71a2fu);
  /* 12e71a2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71a32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71a34 call 0x12e72140 */
  push32(0x12e71a39u); f_12e72140();
  /* 12e71a39 mov esi, esp */
  ESI = (ESP);
  /* 12e71a3b push 0x12e8a0b8 */
  push32((uint32_t)(0x12e8a0b8u));
  /* 12e71a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71a42 call dword ptr [0x12e92444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92444))), 0x12e71a48u);
  /* 12e71a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71a4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71a4d call 0x12e72140 */
  push32(0x12e71a52u); f_12e72140();
  /* 12e71a52 pop edi */
  EDI = (pop32());
  /* 12e71a53 pop esi */
  ESI = (pop32());
  /* 12e71a54 pop ebx */
  EBX = (pop32());
  /* 12e71a55 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71a58 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71a5a call 0x12e72140 */
  push32(0x12e71a5fu); f_12e72140();
  /* 12e71a5f mov esp, ebp */
  ESP = (EBP);
  /* 12e71a61 pop ebp */
  EBP = (pop32());
  /* 12e71a62 ret  */
  ESPCHK(0x12e718c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ad0 @ 0x12e71ad0 (1089 bytes, 330 insns) */
void f_12e71ad0(void) {
  FTRACE(0x12e71ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e71ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e71ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12e71ad3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e71ad7 push esi */
  push32((uint32_t)(ESI));
  /* 12e71ad8 push edi */
  push32((uint32_t)(EDI));
  /* 12e71ad9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e71adc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e71ae1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e71ae6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e71ae8 mov esi, esp */
  ESI = (ESP);
  /* 12e71aea push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71aec call dword ptr [0x12e92408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92408))), 0x12e71af2u);
  /* 12e71af2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71af5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71af7 call 0x12e72140 */
  push32(0x12e71afcu); f_12e72140();
  /* 12e71afc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e71b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71b03 je 0x12e71b65 */
  if (C.zf) goto L_12e71b65;
  /* 12e71b05 mov esi, esp */
  ESI = (ESP);
  /* 12e71b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71b09 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71b0b call dword ptr [0x12e9240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9240c))), 0x12e71b11u);
  /* 12e71b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71b14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71b16 call 0x12e72140 */
  push32(0x12e71b1bu); f_12e72140();
  /* 12e71b1b mov esi, esp */
  ESI = (ESP);
  /* 12e71b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71b1f push 0x12e8f468 */
  push32((uint32_t)(0x12e8f468u));
  /* 12e71b24 call dword ptr [0x12e92410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92410))), 0x12e71b2au);
  /* 12e71b2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71b2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71b2f call 0x12e72140 */
  push32(0x12e71b34u); f_12e72140();
  /* 12e71b34 mov esi, esp */
  ESI = (ESP);
  /* 12e71b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71b38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12e71b3a push 0x12e8f440 */
  push32((uint32_t)(0x12e8f440u));
  /* 12e71b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71b41 call dword ptr [0x12e92414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92414))), 0x12e71b47u);
  /* 12e71b47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71b4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71b4c call 0x12e72140 */
  push32(0x12e71b51u); f_12e72140();
  /* 12e71b51 mov esi, esp */
  ESI = (ESP);
  /* 12e71b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71b55 call dword ptr [0x12e92418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92418))), 0x12e71b5bu);
  /* 12e71b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71b5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71b60 call 0x12e72140 */
  push32(0x12e71b65u); f_12e72140();
L_12e71b65:;
  /* 12e71b65 mov esi, esp */
  ESI = (ESP);
  /* 12e71b67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71b69 call dword ptr [0x12e92408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92408))), 0x12e71b6fu);
  /* 12e71b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71b74 call 0x12e72140 */
  push32(0x12e71b79u); f_12e72140();
  /* 12e71b79 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e71b7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71b80 je 0x12e71bfe */
  if (C.zf) goto L_12e71bfe;
  /* 12e71b82 mov esi, esp */
  ESI = (ESP);
  /* 12e71b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71b86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71b88 call dword ptr [0x12e9240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9240c))), 0x12e71b8eu);
  /* 12e71b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71b93 call 0x12e72140 */
  push32(0x12e71b98u); f_12e72140();
  /* 12e71b98 mov esi, esp */
  ESI = (ESP);
  /* 12e71b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71b9c push 0x12e8f410 */
  push32((uint32_t)(0x12e8f410u));
  /* 12e71ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71ba3 call dword ptr [0x12e92458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92458))), 0x12e71ba9u);
  /* 12e71ba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71bae call 0x12e72140 */
  push32(0x12e71bb3u); f_12e72140();
  /* 12e71bb3 mov esi, esp */
  ESI = (ESP);
  /* 12e71bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71bb7 push 0x12e8f480 */
  push32((uint32_t)(0x12e8f480u));
  /* 12e71bbc call dword ptr [0x12e92410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92410))), 0x12e71bc2u);
  /* 12e71bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71bc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71bc7 call 0x12e72140 */
  push32(0x12e71bccu); f_12e72140();
  /* 12e71bcc mov esi, esp */
  ESI = (ESP);
  /* 12e71bce push 0x12e8f468 */
  push32((uint32_t)(0x12e8f468u));
  /* 12e71bd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71bd5 call dword ptr [0x12e9241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9241c))), 0x12e71bdbu);
  /* 12e71bdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71be0 call 0x12e72140 */
  push32(0x12e71be5u); f_12e72140();
  /* 12e71be5 mov esi, esp */
  ESI = (ESP);
  /* 12e71be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71be9 push 0x12e8f410 */
  push32((uint32_t)(0x12e8f410u));
  /* 12e71bee call dword ptr [0x12e92410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92410))), 0x12e71bf4u);
  /* 12e71bf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71bf9 call 0x12e72140 */
  push32(0x12e71bfeu); f_12e72140();
L_12e71bfe:;
  /* 12e71bfe mov esi, esp */
  ESI = (ESP);
  /* 12e71c00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71c02 push 0x12e8f428 */
  push32((uint32_t)(0x12e8f428u));
  /* 12e71c07 call dword ptr [0x12e9244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9244c))), 0x12e71c0du);
  /* 12e71c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71c10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71c12 call 0x12e72140 */
  push32(0x12e71c17u); f_12e72140();
  /* 12e71c17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e71c19 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e71c1b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12e71c1c mov esi, esp */
  ESI = (ESP);
  /* 12e71c1e push eax */
  push32((uint32_t)(EAX));
  /* 12e71c1f push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12e71c21 call dword ptr [0x12e9240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9240c))), 0x12e71c27u);
  /* 12e71c27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71c2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71c2c call 0x12e72140 */
  push32(0x12e71c31u); f_12e72140();
  /* 12e71c31 mov esi, esp */
  ESI = (ESP);
  /* 12e71c33 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12e71c35 call dword ptr [0x12e92408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92408))), 0x12e71c3bu);
  /* 12e71c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71c40 call 0x12e72140 */
  push32(0x12e71c45u); f_12e72140();
  /* 12e71c45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e71c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71c4c je 0x12e71cb5 */
  if (C.zf) goto L_12e71cb5;
  /* 12e71c4e mov esi, esp */
  ESI = (ESP);
  /* 12e71c50 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12e71c52 call dword ptr [0x12e92408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92408))), 0x12e71c58u);
  /* 12e71c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71c5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71c5d call 0x12e72140 */
  push32(0x12e71c62u); f_12e72140();
  /* 12e71c62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e71c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71c69 jne 0x12e71cb5 */
  if (!C.zf) goto L_12e71cb5;
  /* 12e71c6b mov esi, esp */
  ESI = (ESP);
  /* 12e71c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71c6f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12e71c71 call dword ptr [0x12e9240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9240c))), 0x12e71c77u);
  /* 12e71c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71c7c call 0x12e72140 */
  push32(0x12e71c81u); f_12e72140();
  /* 12e71c81 mov esi, esp */
  ESI = (ESP);
  /* 12e71c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71c85 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12e71c87 call dword ptr [0x12e9240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9240c))), 0x12e71c8du);
  /* 12e71c8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71c92 call 0x12e72140 */
  push32(0x12e71c97u); f_12e72140();
  /* 12e71c97 mov esi, esp */
  ESI = (ESP);
  /* 12e71c99 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71c9b push 0x12e8f428 */
  push32((uint32_t)(0x12e8f428u));
  /* 12e71ca0 push 0x12e8f420 */
  push32((uint32_t)(0x12e8f420u));
  /* 12e71ca5 call dword ptr [0x12e92420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92420))), 0x12e71cabu);
  /* 12e71cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71cae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71cb0 call 0x12e72140 */
  push32(0x12e71cb5u); f_12e72140();
L_12e71cb5:;
  /* 12e71cb5 mov esi, esp */
  ESI = (ESP);
  /* 12e71cb7 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12e71cb9 call dword ptr [0x12e92408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92408))), 0x12e71cbfu);
  /* 12e71cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71cc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71cc4 call 0x12e72140 */
  push32(0x12e71cc9u); f_12e72140();
  /* 12e71cc9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e71cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71cd0 je 0x12e71d7e */
  if (C.zf) goto L_12e71d7e;
  /* 12e71cd6 mov esi, esp */
  ESI = (ESP);
  /* 12e71cd8 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12e71cda call dword ptr [0x12e92408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92408))), 0x12e71ce0u);
  /* 12e71ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71ce5 call 0x12e72140 */
  push32(0x12e71ceau); f_12e72140();
  /* 12e71cea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e71cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71cf1 je 0x12e71d7e */
  if (C.zf) goto L_12e71d7e;
  /* 12e71cf7 mov esi, esp */
  ESI = (ESP);
  /* 12e71cf9 push 0x12e8f420 */
  push32((uint32_t)(0x12e8f420u));
  /* 12e71cfe call dword ptr [0x12e92424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92424))), 0x12e71d04u);
  /* 12e71d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71d09 call 0x12e72140 */
  push32(0x12e71d0eu); f_12e72140();
  /* 12e71d0e mov esi, eax */
  ESI = (EAX);
  /* 12e71d10 mov edi, esp */
  EDI = (ESP);
  /* 12e71d12 push 0x12e8f420 */
  push32((uint32_t)(0x12e8f420u));
  /* 12e71d17 push 0x12e8f430 */
  push32((uint32_t)(0x12e8f430u));
  /* 12e71d1c call dword ptr [0x12e92450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92450))), 0x12e71d22u);
  /* 12e71d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71d25 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71d27 call 0x12e72140 */
  push32(0x12e71d2cu); f_12e72140();
  /* 12e71d2c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71d2e je 0x12e71d7e */
  if (C.zf) goto L_12e71d7e;
  /* 12e71d30 mov esi, esp */
  ESI = (ESP);
  /* 12e71d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71d34 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12e71d36 call dword ptr [0x12e9240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9240c))), 0x12e71d3cu);
  /* 12e71d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71d41 call 0x12e72140 */
  push32(0x12e71d46u); f_12e72140();
  /* 12e71d46 mov esi, esp */
  ESI = (ESP);
  /* 12e71d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71d4a push 0x12e8f420 */
  push32((uint32_t)(0x12e8f420u));
  /* 12e71d4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71d51 call dword ptr [0x12e9246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9246c))), 0x12e71d57u);
  /* 12e71d57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71d5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71d5c call 0x12e72140 */
  push32(0x12e71d61u); f_12e72140();
  /* 12e71d61 mov esi, esp */
  ESI = (ESP);
  /* 12e71d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71d65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e71d67 push 0x12e8f430 */
  push32((uint32_t)(0x12e8f430u));
  /* 12e71d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71d6e call dword ptr [0x12e92414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92414))), 0x12e71d74u);
  /* 12e71d74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71d77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71d79 call 0x12e72140 */
  push32(0x12e71d7eu); f_12e72140();
L_12e71d7e:;
  /* 12e71d7e mov esi, esp */
  ESI = (ESP);
  /* 12e71d80 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12e71d82 call dword ptr [0x12e92408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92408))), 0x12e71d88u);
  /* 12e71d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71d8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71d8d call 0x12e72140 */
  push32(0x12e71d92u); f_12e72140();
  /* 12e71d92 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e71d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71d99 je 0x12e71e38 */
  if (C.zf) goto L_12e71e38;
  /* 12e71d9f mov esi, esp */
  ESI = (ESP);
  /* 12e71da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71da3 push 0x12e8f408 */
  push32((uint32_t)(0x12e8f408u));
  /* 12e71da8 call dword ptr [0x12e9244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9244c))), 0x12e71daeu);
  /* 12e71dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71db1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71db3 call 0x12e72140 */
  push32(0x12e71db8u); f_12e72140();
  /* 12e71db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71dba je 0x12e71e38 */
  if (C.zf) goto L_12e71e38;
  /* 12e71dbc mov esi, esp */
  ESI = (ESP);
  /* 12e71dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71dc0 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12e71dc2 call dword ptr [0x12e9240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9240c))), 0x12e71dc8u);
  /* 12e71dc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71dcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71dcd call 0x12e72140 */
  push32(0x12e71dd2u); f_12e72140();
  /* 12e71dd2 mov esi, esp */
  ESI = (ESP);
  /* 12e71dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71dd6 push 0x12e8f420 */
  push32((uint32_t)(0x12e8f420u));
  /* 12e71ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71ddd call dword ptr [0x12e9246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9246c))), 0x12e71de3u);
  /* 12e71de3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71de8 call 0x12e72140 */
  push32(0x12e71dedu); f_12e72140();
  /* 12e71ded mov esi, esp */
  ESI = (ESP);
  /* 12e71def push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71df1 push 0x12e8f418 */
  push32((uint32_t)(0x12e8f418u));
  /* 12e71df6 call dword ptr [0x12e92410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92410))), 0x12e71dfcu);
  /* 12e71dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71dff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71e01 call 0x12e72140 */
  push32(0x12e71e06u); f_12e72140();
  /* 12e71e06 mov esi, esp */
  ESI = (ESP);
  /* 12e71e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71e0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71e0c call dword ptr [0x12e92428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92428))), 0x12e71e12u);
  /* 12e71e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71e17 call 0x12e72140 */
  push32(0x12e71e1cu); f_12e72140();
  /* 12e71e1c mov esi, esp */
  ESI = (ESP);
  /* 12e71e1e push 0x12e8f470 */
  push32((uint32_t)(0x12e8f470u));
  /* 12e71e23 push 0x12e8f420 */
  push32((uint32_t)(0x12e8f420u));
  /* 12e71e28 call dword ptr [0x12e9242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9242c))), 0x12e71e2eu);
  /* 12e71e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71e31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71e33 call 0x12e72140 */
  push32(0x12e71e38u); f_12e72140();
L_12e71e38:;
  /* 12e71e38 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71e3c call 0x12e7103c */
  push32(0x12e71e41u); f_12e7103c();
  /* 12e71e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71e44 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71e47 jle 0x12e71e58 */
  if ((C.zf||C.sf!=C.of)) goto L_12e71e58;
  /* 12e71e49 push 0x12e8da30 */
  push32((uint32_t)(0x12e8da30u));
  /* 12e71e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71e50 call 0x12e71023 */
  push32(0x12e71e55u); f_12e71023();
  /* 12e71e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e71e58:;
  /* 12e71e58 push 0x12e8f470 */
  push32((uint32_t)(0x12e8f470u));
  /* 12e71e5d call 0x12e71005 */
  push32(0x12e71e62u); f_12e71005();
  /* 12e71e62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71e65 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71e68 jge 0x12e71e79 */
  if ((C.sf==C.of)) goto L_12e71e79;
  /* 12e71e6a push 0x12e8da38 */
  push32((uint32_t)(0x12e8da38u));
  /* 12e71e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71e71 call 0x12e71023 */
  push32(0x12e71e76u); f_12e71023();
  /* 12e71e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e71e79:;
  /* 12e71e79 push 0x12e8f478 */
  push32((uint32_t)(0x12e8f478u));
  /* 12e71e7e call 0x12e71005 */
  push32(0x12e71e83u); f_12e71005();
  /* 12e71e83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71e86 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71e89 jge 0x12e71e9a */
  if ((C.sf==C.of)) goto L_12e71e9a;
  /* 12e71e8b push 0x12e8da30 */
  push32((uint32_t)(0x12e8da30u));
  /* 12e71e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71e92 call 0x12e71023 */
  push32(0x12e71e97u); f_12e71023();
  /* 12e71e97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e71e9a:;
  /* 12e71e9a mov esi, esp */
  ESI = (ESP);
  /* 12e71e9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71e9e push 0x12e8f428 */
  push32((uint32_t)(0x12e8f428u));
  /* 12e71ea3 call dword ptr [0x12e9244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9244c))), 0x12e71ea9u);
  /* 12e71ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71eae call 0x12e72140 */
  push32(0x12e71eb3u); f_12e72140();
  /* 12e71eb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71eb5 jle 0x12e71f00 */
  if ((C.zf||C.sf!=C.of)) goto L_12e71f00;
  /* 12e71eb7 mov esi, esp */
  ESI = (ESP);
  /* 12e71eb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e71ebb push 0x12e8f428 */
  push32((uint32_t)(0x12e8f428u));
  /* 12e71ec0 call dword ptr [0x12e9244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9244c))), 0x12e71ec6u);
  /* 12e71ec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71ecb call 0x12e72140 */
  push32(0x12e71ed0u); f_12e72140();
  /* 12e71ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71ed2 jne 0x12e71f00 */
  if (!C.zf) goto L_12e71f00;
  /* 12e71ed4 mov esi, esp */
  ESI = (ESP);
  /* 12e71ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e71ed8 push 0x12e8f428 */
  push32((uint32_t)(0x12e8f428u));
  /* 12e71edd call dword ptr [0x12e9244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9244c))), 0x12e71ee3u);
  /* 12e71ee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71ee6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71ee8 call 0x12e72140 */
  push32(0x12e71eedu); f_12e72140();
  /* 12e71eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e71eef jne 0x12e71f00 */
  if (!C.zf) goto L_12e71f00;
  /* 12e71ef1 push 0x12e8da40 */
  push32((uint32_t)(0x12e8da40u));
  /* 12e71ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e71ef8 call 0x12e71023 */
  push32(0x12e71efdu); f_12e71023();
  /* 12e71efd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e71f00:;
  /* 12e71f00 pop edi */
  EDI = (pop32());
  /* 12e71f01 pop esi */
  ESI = (pop32());
  /* 12e71f02 pop ebx */
  EBX = (pop32());
  /* 12e71f03 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e71f06 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e71f08 call 0x12e72140 */
  push32(0x12e71f0du); f_12e72140();
  /* 12e71f0d mov esp, ebp */
  ESP = (EBP);
  /* 12e71f0f pop ebp */
  EBP = (pop32());
  /* 12e71f10 ret  */
  ESPCHK(0x12e71ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002030 @ 0x12e72030 (63 bytes, 26 insns) */
void f_12e72030(void) {
  FTRACE(0x12e72030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72030 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72031 mov ebp, esp */
  EBP = (ESP);
  /* 12e72033 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e72036 push ebx */
  push32((uint32_t)(EBX));
  /* 12e72037 push esi */
  push32((uint32_t)(ESI));
  /* 12e72038 push edi */
  push32((uint32_t)(EDI));
  /* 12e72039 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12e7203c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12e72041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12e72046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e72048 mov esi, esp */
  ESI = (ESP);
  /* 12e7204a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7204d push eax */
  push32((uint32_t)(EAX));
  /* 12e7204e call dword ptr [0x12e92424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92424))), 0x12e72054u);
  /* 12e72054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72057 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72059 call 0x12e72140 */
  push32(0x12e7205eu); f_12e72140();
  /* 12e7205e pop edi */
  EDI = (pop32());
  /* 12e7205f pop esi */
  ESI = (pop32());
  /* 12e72060 pop ebx */
  EBX = (pop32());
  /* 12e72061 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72064 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72066 call 0x12e72140 */
  push32(0x12e7206bu); f_12e72140();
  /* 12e7206b mov esp, ebp */
  ESP = (EBP);
  /* 12e7206d pop ebp */
  EBP = (pop32());
  /* 12e7206e ret  */
  ESPCHK(0x12e72030u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12e72140 (56 bytes, 28 insns) */
void f_12e72140(void) {
  FTRACE(0x12e72140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72140 jne 0x12e72143 */
  if (!C.zf) goto L_12e72143;
  /* 12e72142 ret  */
  ESPCHK(0x12e72140u, _esp0);
  ESP += 4; return;
L_12e72143:;
  /* 12e72143 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72144 mov ebp, esp */
  EBP = (ESP);
  /* 12e72146 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e72149 push eax */
  push32((uint32_t)(EAX));
  /* 12e7214a push edx */
  push32((uint32_t)(EDX));
  /* 12e7214b push ebx */
  push32((uint32_t)(EBX));
  /* 12e7214c push esi */
  push32((uint32_t)(ESI));
  /* 12e7214d push edi */
  push32((uint32_t)(EDI));
  /* 12e7214e push 0x12e8a148 */
  push32((uint32_t)(0x12e8a148u));
  /* 12e72153 push 0x12e8a144 */
  push32((uint32_t)(0x12e8a144u));
  /* 12e72158 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12e7215a push 0x12e8a134 */
  push32((uint32_t)(0x12e8a134u));
  /* 12e7215f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e72161 call 0x12e72510 */
  push32(0x12e72166u); f_12e72510();
  /* 12e72166 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72169 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7216c jne 0x12e7216f */
  if (!C.zf) goto L_12e7216f;
  /* 12e7216e int3  */
  x86_unimpl("int3 @ 0x12e7216e");
L_12e7216f:;
  /* 12e7216f pop edi */
  EDI = (pop32());
  /* 12e72170 pop esi */
  ESI = (pop32());
  /* 12e72171 pop ebx */
  EBX = (pop32());
  /* 12e72172 pop edx */
  EDX = (pop32());
  /* 12e72173 pop eax */
  EAX = (pop32());
  /* 12e72174 mov esp, ebp */
  ESP = (EBP);
  /* 12e72176 pop ebp */
  EBP = (pop32());
  /* 12e72177 ret  */
  ESPCHK(0x12e72140u, _esp0);
  ESP += 4; return;
}

/* FUN_10002180 @ 0x12e72180 (313 bytes, 78 insns) */
void f_12e72180(void) {
  FTRACE(0x12e72180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72180 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72181 mov ebp, esp */
  EBP = (ESP);
  /* 12e72183 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72187 jne 0x12e72247 */
  if (!C.zf) goto L_12e72247;
  /* 12e7218d call dword ptr [0x12e92308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92308))), 0x12e72193u);
  /* 12e72193 mov dword ptr [0x12e8f4d0], eax */
  w32((uint32_t)(0x12e8f4d0), (EAX));
  /* 12e72198 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7219a call 0x12e75c40 */
  push32(0x12e7219fu); f_12e75c40();
  /* 12e7219f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e721a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e721a4 jne 0x12e721ad */
  if (!C.zf) goto L_12e721ad;
  /* 12e721a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e721a8 jmp 0x12e722b5 */
  goto L_12e722b5;
L_12e721ad:;
  /* 12e721ad mov eax, dword ptr [0x12e8f4d0] */
  EAX = (r32((uint32_t)(0x12e8f4d0)));
  /* 12e721b2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12e721b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e721ba mov dword ptr [0x12e8f4dc], eax */
  w32((uint32_t)(0x12e8f4dc), (EAX));
  /* 12e721bf mov ecx, dword ptr [0x12e8f4d0] */
  ECX = (r32((uint32_t)(0x12e8f4d0)));
  /* 12e721c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e721cb mov dword ptr [0x12e8f4d8], ecx */
  w32((uint32_t)(0x12e8f4d8), (ECX));
  /* 12e721d1 mov edx, dword ptr [0x12e8f4d8] */
  EDX = (r32((uint32_t)(0x12e8f4d8)));
  /* 12e721d7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e721da add edx, dword ptr [0x12e8f4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8f4dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e721e0 mov dword ptr [0x12e8f4d4], edx */
  w32((uint32_t)(0x12e8f4d4), (EDX));
  /* 12e721e6 mov eax, dword ptr [0x12e8f4d0] */
  EAX = (r32((uint32_t)(0x12e8f4d0)));
  /* 12e721eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e721ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e721f3 mov dword ptr [0x12e8f4d0], eax */
  w32((uint32_t)(0x12e8f4d0), (EAX));
  /* 12e721f8 call 0x12e72db0 */
  push32(0x12e721fdu); f_12e72db0();
  /* 12e721fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e721ff jne 0x12e7220d */
  if (!C.zf) goto L_12e7220d;
  /* 12e72201 call 0x12e75c90 */
  push32(0x12e72206u); f_12e75c90();
  /* 12e72206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e72208 jmp 0x12e722b5 */
  goto L_12e722b5;
L_12e7220d:;
  /* 12e7220d call dword ptr [0x12e92304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92304))), 0x12e72213u);
  /* 12e72213 mov dword ptr [0x12e9100c], eax */
  w32((uint32_t)(0x12e9100c), (EAX));
  /* 12e72218 call 0x12e75a20 */
  push32(0x12e7221du); f_12e75a20();
  /* 12e7221d mov dword ptr [0x12e8f4b8], eax */
  w32((uint32_t)(0x12e8f4b8), (EAX));
  /* 12e72222 call 0x12e73060 */
  push32(0x12e72227u); f_12e73060();
  /* 12e72227 call 0x12e75510 */
  push32(0x12e7222cu); f_12e75510();
  /* 12e7222c call 0x12e753c0 */
  push32(0x12e72231u); f_12e753c0();
  /* 12e72231 call 0x12e72bb0 */
  push32(0x12e72236u); f_12e72bb0();
  /* 12e72236 mov ecx, dword ptr [0x12e8f4b4] */
  ECX = (r32((uint32_t)(0x12e8f4b4)));
  /* 12e7223c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7223f mov dword ptr [0x12e8f4b4], ecx */
  w32((uint32_t)(0x12e8f4b4), (ECX));
  /* 12e72245 jmp 0x12e722b0 */
  goto L_12e722b0;
L_12e72247:;
  /* 12e72247 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7224b jne 0x12e722a0 */
  if (!C.zf) goto L_12e722a0;
  /* 12e7224d cmp dword ptr [0x12e8f4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72254 jle 0x12e7229a */
  if ((C.zf||C.sf!=C.of)) goto L_12e7229a;
  /* 12e72256 mov edx, dword ptr [0x12e8f4b4] */
  EDX = (r32((uint32_t)(0x12e8f4b4)));
  /* 12e7225c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7225f mov dword ptr [0x12e8f4b4], edx */
  w32((uint32_t)(0x12e8f4b4), (EDX));
  /* 12e72265 cmp dword ptr [0x12e8f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7226c jne 0x12e72273 */
  if (!C.zf) goto L_12e72273;
  /* 12e7226e call 0x12e72c30 */
  push32(0x12e72273u); f_12e72c30();
L_12e72273:;
  /* 12e72273 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e72275 call 0x12e74960 */
  push32(0x12e7227au); f_12e74960();
  /* 12e7227a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7227d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e72280 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e72282 je 0x12e72289 */
  if (C.zf) goto L_12e72289;
  /* 12e72284 call 0x12e75270 */
  push32(0x12e72289u); f_12e75270();
L_12e72289:;
  /* 12e72289 call 0x12e73390 */
  push32(0x12e7228eu); f_12e73390();
  /* 12e7228e call 0x12e72e40 */
  push32(0x12e72293u); f_12e72e40();
  /* 12e72293 call 0x12e75c90 */
  push32(0x12e72298u); f_12e75c90();
  /* 12e72298 jmp 0x12e7229e */
  goto L_12e7229e;
L_12e7229a:;
  /* 12e7229a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7229c jmp 0x12e722b5 */
  goto L_12e722b5;
L_12e7229e:;
  /* 12e7229e jmp 0x12e722b0 */
  goto L_12e722b0;
L_12e722a0:;
  /* 12e722a0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e722a4 jne 0x12e722b0 */
  if (!C.zf) goto L_12e722b0;
  /* 12e722a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e722a8 call 0x12e72f30 */
  push32(0x12e722adu); f_12e72f30();
  /* 12e722ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e722b0:;
  /* 12e722b0 mov eax, 1 */
  EAX = (0x1u);
L_12e722b5:;
  /* 12e722b5 pop ebp */
  EBP = (pop32());
  /* 12e722b6 ret 0xc */
  ESPCHK(0x12e72180u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12e722c0 (243 bytes, 86 insns) */
void f_12e722c0(void) {
  FTRACE(0x12e722c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e722c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e722c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e722c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e722c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e722cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e722cf jne 0x12e722e1 */
  if (!C.zf) goto L_12e722e1;
  /* 12e722d1 cmp dword ptr [0x12e8f4b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e722d8 jne 0x12e722e1 */
  if (!C.zf) goto L_12e722e1;
  /* 12e722da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e722dc jmp 0x12e723ad */
  goto L_12e723ad;
L_12e722e1:;
  /* 12e722e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e722e5 je 0x12e722ed */
  if (C.zf) goto L_12e722ed;
  /* 12e722e7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e722eb jne 0x12e7232f */
  if (!C.zf) goto L_12e7232f;
L_12e722ed:;
  /* 12e722ed cmp dword ptr [0x12e9101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e9101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e722f4 je 0x12e7230b */
  if (C.zf) goto L_12e7230b;
  /* 12e722f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e722f9 push eax */
  push32((uint32_t)(EAX));
  /* 12e722fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e722fd push ecx */
  push32((uint32_t)(ECX));
  /* 12e722fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72301 push edx */
  push32((uint32_t)(EDX));
  /* 12e72302 call dword ptr [0x12e9101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9101c))), 0x12e72308u);
  /* 12e72308 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7230b:;
  /* 12e7230b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7230f je 0x12e72325 */
  if (C.zf) goto L_12e72325;
  /* 12e72311 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e72314 push eax */
  push32((uint32_t)(EAX));
  /* 12e72315 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e72318 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72319 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7231c push edx */
  push32((uint32_t)(EDX));
  /* 12e7231d call 0x12e72180 */
  push32(0x12e72322u); f_12e72180();
  /* 12e72322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e72325:;
  /* 12e72325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72329 jne 0x12e7232f */
  if (!C.zf) goto L_12e7232f;
  /* 12e7232b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7232d jmp 0x12e723ad */
  goto L_12e723ad;
L_12e7232f:;
  /* 12e7232f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e72332 push eax */
  push32((uint32_t)(EAX));
  /* 12e72333 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e72336 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72337 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7233a push edx */
  push32((uint32_t)(EDX));
  /* 12e7233b call 0x12e71014 */
  push32(0x12e72340u); f_12e71014();
  /* 12e72340 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e72343 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72347 jne 0x12e7235e */
  if (!C.zf) goto L_12e7235e;
  /* 12e72349 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7234d jne 0x12e7235e */
  if (!C.zf) goto L_12e7235e;
  /* 12e7234f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e72352 push eax */
  push32((uint32_t)(EAX));
  /* 12e72353 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e72355 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72358 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72359 call 0x12e72180 */
  push32(0x12e7235eu); f_12e72180();
L_12e7235e:;
  /* 12e7235e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72362 je 0x12e7236a */
  if (C.zf) goto L_12e7236a;
  /* 12e72364 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72368 jne 0x12e723aa */
  if (!C.zf) goto L_12e723aa;
L_12e7236a:;
  /* 12e7236a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7236d push edx */
  push32((uint32_t)(EDX));
  /* 12e7236e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e72371 push eax */
  push32((uint32_t)(EAX));
  /* 12e72372 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72375 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72376 call 0x12e72180 */
  push32(0x12e7237bu); f_12e72180();
  /* 12e7237b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7237d jne 0x12e72386 */
  if (!C.zf) goto L_12e72386;
  /* 12e7237f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e72386:;
  /* 12e72386 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7238a je 0x12e723aa */
  if (C.zf) goto L_12e723aa;
  /* 12e7238c cmp dword ptr [0x12e9101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e9101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72393 je 0x12e723aa */
  if (C.zf) goto L_12e723aa;
  /* 12e72395 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e72398 push edx */
  push32((uint32_t)(EDX));
  /* 12e72399 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7239c push eax */
  push32((uint32_t)(EAX));
  /* 12e7239d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e723a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e723a1 call dword ptr [0x12e9101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9101c))), 0x12e723a7u);
  /* 12e723a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e723aa:;
  /* 12e723aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e723ad:;
  /* 12e723ad mov esp, ebp */
  ESP = (EBP);
  /* 12e723af pop ebp */
  EBP = (pop32());
  /* 12e723b0 ret 0xc */
  ESPCHK(0x12e722c0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12e723c0 (58 bytes, 18 insns) */
void f_12e723c0(void) {
  FTRACE(0x12e723c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e723c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e723c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e723c3 cmp dword ptr [0x12e8f4c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e723ca je 0x12e723de */
  if (C.zf) goto L_12e723de;
  /* 12e723cc cmp dword ptr [0x12e8f4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e723d3 jne 0x12e723e3 */
  if (!C.zf) goto L_12e723e3;
  /* 12e723d5 cmp dword ptr [0x12e8f4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e723dc jne 0x12e723e3 */
  if (!C.zf) goto L_12e723e3;
L_12e723de:;
  /* 12e723de call 0x12e75d30 */
  push32(0x12e723e3u); f_12e75d30();
L_12e723e3:;
  /* 12e723e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e723e6 push eax */
  push32((uint32_t)(EAX));
  /* 12e723e7 call 0x12e75d80 */
  push32(0x12e723ecu); f_12e75d80();
  /* 12e723ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e723ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e723f4 call dword ptr [0x12e8da4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8da4c))), 0x12e723fau);
  /* 12e723fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e723fd pop ebp */
  EBP = (pop32());
  /* 12e723fe ret  */
  ESPCHK(0x12e723c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002400 @ 0x12e72400 (11 bytes, 5 insns) */
void f_12e72400(void) {
  FTRACE(0x12e72400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72400 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72401 mov ebp, esp */
  EBP = (ESP);
  /* 12e72403 call dword ptr [0x12e9230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9230c))), 0x12e72409u);
  /* 12e72409 pop ebp */
  EBP = (pop32());
  /* 12e7240a ret  */
  ESPCHK(0x12e72400u, _esp0);
  ESP += 4; return;
}

/* FUN_10002410 @ 0x12e72410 (87 bytes, 30 insns) */
void f_12e72410(void) {
  FTRACE(0x12e72410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72410 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72411 mov ebp, esp */
  EBP = (ESP);
  /* 12e72413 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72414 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72418 jl 0x12e72420 */
  if ((C.sf!=C.of)) goto L_12e72420;
  /* 12e7241a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7241e jl 0x12e72425 */
  if ((C.sf!=C.of)) goto L_12e72425;
L_12e72420:;
  /* 12e72420 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e72423 jmp 0x12e72463 */
  goto L_12e72463;
L_12e72425:;
  /* 12e72425 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72429 jne 0x12e72437 */
  if (!C.zf) goto L_12e72437;
  /* 12e7242b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7242e mov eax, dword ptr [eax*4 + 0x12e8da54] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12e8da54)));
  /* 12e72435 jmp 0x12e72463 */
  goto L_12e72463;
L_12e72437:;
  /* 12e72437 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7243a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7243d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7243f je 0x12e72446 */
  if (C.zf) goto L_12e72446;
  /* 12e72441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e72444 jmp 0x12e72463 */
  goto L_12e72463;
L_12e72446:;
  /* 12e72446 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72449 mov eax, dword ptr [edx*4 + 0x12e8da54] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e8da54)));
  /* 12e72450 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e72453 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72456 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e72459 mov dword ptr [ecx*4 + 0x12e8da54], edx */
  w32((uint32_t)(ECX*4 + 0x12e8da54), (EDX));
  /* 12e72460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e72463:;
  /* 12e72463 mov esp, ebp */
  ESP = (EBP);
  /* 12e72465 pop ebp */
  EBP = (pop32());
  /* 12e72466 ret  */
  ESPCHK(0x12e72410u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12e72470 (126 bytes, 38 insns) */
void f_12e72470(void) {
  FTRACE(0x12e72470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72470 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72471 mov ebp, esp */
  EBP = (ESP);
  /* 12e72473 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72474 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72478 jl 0x12e72480 */
  if ((C.sf!=C.of)) goto L_12e72480;
  /* 12e7247a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7247e jl 0x12e72487 */
  if ((C.sf!=C.of)) goto L_12e72487;
L_12e72480:;
  /* 12e72480 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12e72485 jmp 0x12e724ea */
  goto L_12e724ea;
L_12e72487:;
  /* 12e72487 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7248b jne 0x12e72499 */
  if (!C.zf) goto L_12e72499;
  /* 12e7248d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72490 mov eax, dword ptr [eax*4 + 0x12e8da60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12e8da60)));
  /* 12e72497 jmp 0x12e724ea */
  goto L_12e724ea;
L_12e72499:;
  /* 12e72499 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7249c mov edx, dword ptr [ecx*4 + 0x12e8da60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8da60)));
  /* 12e724a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e724a6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e724aa jne 0x12e724c0 */
  if (!C.zf) goto L_12e724c0;
  /* 12e724ac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12e724ae call dword ptr [0x12e92310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92310))), 0x12e724b4u);
  /* 12e724b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e724b7 mov dword ptr [ecx*4 + 0x12e8da60], eax */
  w32((uint32_t)(ECX*4 + 0x12e8da60), (EAX));
  /* 12e724be jmp 0x12e724e7 */
  goto L_12e724e7;
L_12e724c0:;
  /* 12e724c0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e724c4 jne 0x12e724da */
  if (!C.zf) goto L_12e724da;
  /* 12e724c6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e724c8 call dword ptr [0x12e92310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92310))), 0x12e724ceu);
  /* 12e724ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e724d1 mov dword ptr [edx*4 + 0x12e8da60], eax */
  w32((uint32_t)(EDX*4 + 0x12e8da60), (EAX));
  /* 12e724d8 jmp 0x12e724e7 */
  goto L_12e724e7;
L_12e724da:;
  /* 12e724da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e724dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e724e0 mov dword ptr [eax*4 + 0x12e8da60], ecx */
  w32((uint32_t)(EAX*4 + 0x12e8da60), (ECX));
L_12e724e7:;
  /* 12e724e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e724ea:;
  /* 12e724ea mov esp, ebp */
  ESP = (EBP);
  /* 12e724ec pop ebp */
  EBP = (pop32());
  /* 12e724ed ret  */
  ESPCHK(0x12e72470u, _esp0);
  ESP += 4; return;
}

/* FUN_100024f0 @ 0x12e724f0 (28 bytes, 11 insns) */
void f_12e724f0(void) {
  FTRACE(0x12e724f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e724f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e724f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e724f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e724f4 mov eax, dword ptr [0x12e91000] */
  EAX = (r32((uint32_t)(0x12e91000)));
  /* 12e724f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e724fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e724ff mov dword ptr [0x12e91000], ecx */
  w32((uint32_t)(0x12e91000), (ECX));
  /* 12e72505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72508 mov esp, ebp */
  ESP = (EBP);
  /* 12e7250a pop ebp */
  EBP = (pop32());
  /* 12e7250b ret  */
  ESPCHK(0x12e724f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002510 @ 0x12e72510 (912 bytes, 248 insns) */
void f_12e72510(void) {
  FTRACE(0x12e72510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72510 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72511 mov ebp, esp */
  EBP = (ESP);
  /* 12e72513 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12e72518 call 0x12e765f0 */
  push32(0x12e7251du); f_12e765f0();
  /* 12e7251d push edi */
  push32((uint32_t)(EDI));
  /* 12e7251e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12e72525 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12e7252a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7252c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12e72532 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e72534 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12e72536 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12e72537 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12e7253e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12e72543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e72545 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12e7254b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e7254d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12e7254f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12e72550 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12e72557 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12e7255c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7255e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12e72564 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12e72566 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12e72568 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12e72569 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12e7256c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12e72572 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72576 jl 0x12e7257e */
  if ((C.sf!=C.of)) goto L_12e7257e;
  /* 12e72578 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7257c jl 0x12e72586 */
  if ((C.sf!=C.of)) goto L_12e72586;
L_12e7257e:;
  /* 12e7257e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e72581 jmp 0x12e7289b */
  goto L_12e7289b;
L_12e72586:;
  /* 12e72586 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7258a jne 0x12e72630 */
  if (!C.zf) goto L_12e72630;
  /* 12e72590 push 0x12e8da50 */
  push32((uint32_t)(0x12e8da50u));
  /* 12e72595 call dword ptr [0x12e92328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92328))), 0x12e7259bu);
  /* 12e7259b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7259d jle 0x12e72630 */
  if ((C.zf||C.sf!=C.of)) goto L_12e72630;
  /* 12e725a3 cmp dword ptr [0x12e8f4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e725aa jne 0x12e725ee */
  if (!C.zf) goto L_12e725ee;
  /* 12e725ac push 0x12e8a2f0 */
  push32((uint32_t)(0x12e8a2f0u));
  /* 12e725b1 call dword ptr [0x12e92324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92324))), 0x12e725b7u);
  /* 12e725b7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12e725bd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e725c4 je 0x12e725e6 */
  if (C.zf) goto L_12e725e6;
  /* 12e725c6 push 0x12e8a2e4 */
  push32((uint32_t)(0x12e8a2e4u));
  /* 12e725cb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12e725d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e725d2 call dword ptr [0x12e92320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92320))), 0x12e725d8u);
  /* 12e725d8 mov dword ptr [0x12e8f4c8], eax */
  w32((uint32_t)(0x12e8f4c8), (EAX));
  /* 12e725dd cmp dword ptr [0x12e8f4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e725e4 jne 0x12e725ee */
  if (!C.zf) goto L_12e725ee;
L_12e725e6:;
  /* 12e725e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e725e9 jmp 0x12e7289b */
  goto L_12e7289b;
L_12e725ee:;
  /* 12e725ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e725f1 push edx */
  push32((uint32_t)(EDX));
  /* 12e725f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e725f5 push eax */
  push32((uint32_t)(EAX));
  /* 12e725f6 push 0x12e8a2b0 */
  push32((uint32_t)(0x12e8a2b0u));
  /* 12e725fb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12e72601 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72602 call dword ptr [0x12e8f4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f4c8))), 0x12e72608u);
  /* 12e72608 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7260b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e72611 push edx */
  push32((uint32_t)(EDX));
  /* 12e72612 call dword ptr [0x12e9231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9231c))), 0x12e72618u);
  /* 12e72618 push 0x12e8da50 */
  push32((uint32_t)(0x12e8da50u));
  /* 12e7261d call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e72623u);
  /* 12e72623 call 0x12e72400 */
  push32(0x12e72628u); f_12e72400();
  /* 12e72628 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7262b jmp 0x12e7289b */
  goto L_12e7289b;
L_12e72630:;
  /* 12e72630 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72634 je 0x12e7266d */
  if (C.zf) goto L_12e7266d;
  /* 12e72636 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12e7263c push eax */
  push32((uint32_t)(EAX));
  /* 12e7263d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e72640 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72641 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12e72646 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12e7264c push edx */
  push32((uint32_t)(EDX));
  /* 12e7264d call 0x12e764f0 */
  push32(0x12e72652u); f_12e764f0();
  /* 12e72652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e72657 jge 0x12e7266d */
  if ((C.sf==C.of)) goto L_12e7266d;
  /* 12e72659 push 0x12e8a284 */
  push32((uint32_t)(0x12e8a284u));
  /* 12e7265e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12e72664 push eax */
  push32((uint32_t)(EAX));
  /* 12e72665 call 0x12e76400 */
  push32(0x12e7266au); f_12e76400();
  /* 12e7266a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7266d:;
  /* 12e7266d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72671 jne 0x12e726a5 */
  if (!C.zf) goto L_12e726a5;
  /* 12e72673 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72677 je 0x12e72685 */
  if (C.zf) goto L_12e72685;
  /* 12e72679 mov dword ptr [ebp - 0x3028], 0x12e8a270 */
  w32((uint32_t)(EBP + -0x3028), (0x12e8a270u));
  /* 12e72683 jmp 0x12e7268f */
  goto L_12e7268f;
L_12e72685:;
  /* 12e72685 mov dword ptr [ebp - 0x3028], 0x12e8a25c */
  w32((uint32_t)(EBP + -0x3028), (0x12e8a25cu));
L_12e7268f:;
  /* 12e7268f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12e72695 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72696 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12e7269c push edx */
  push32((uint32_t)(EDX));
  /* 12e7269d call 0x12e76400 */
  push32(0x12e726a2u); f_12e76400();
  /* 12e726a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e726a5:;
  /* 12e726a5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12e726ab push eax */
  push32((uint32_t)(EAX));
  /* 12e726ac lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12e726b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e726b3 call 0x12e76410 */
  push32(0x12e726b8u); f_12e76410();
  /* 12e726b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e726bb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e726bf jne 0x12e726fa */
  if (!C.zf) goto L_12e726fa;
  /* 12e726c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e726c4 mov eax, dword ptr [edx*4 + 0x12e8da54] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e8da54)));
  /* 12e726cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e726ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e726d0 je 0x12e726e6 */
  if (C.zf) goto L_12e726e6;
  /* 12e726d2 push 0x12e8a258 */
  push32((uint32_t)(0x12e8a258u));
  /* 12e726d7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12e726dd push ecx */
  push32((uint32_t)(ECX));
  /* 12e726de call 0x12e76410 */
  push32(0x12e726e3u); f_12e76410();
  /* 12e726e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e726e6:;
  /* 12e726e6 push 0x12e8a254 */
  push32((uint32_t)(0x12e8a254u));
  /* 12e726eb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12e726f1 push edx */
  push32((uint32_t)(EDX));
  /* 12e726f2 call 0x12e76410 */
  push32(0x12e726f7u); f_12e76410();
  /* 12e726f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e726fa:;
  /* 12e726fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e726fe je 0x12e72742 */
  if (C.zf) goto L_12e72742;
  /* 12e72700 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12e72706 push eax */
  push32((uint32_t)(EAX));
  /* 12e72707 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7270a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7270b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7270e push edx */
  push32((uint32_t)(EDX));
  /* 12e7270f push 0x12e8a248 */
  push32((uint32_t)(0x12e8a248u));
  /* 12e72714 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e72719 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12e7271f push eax */
  push32((uint32_t)(EAX));
  /* 12e72720 call 0x12e76300 */
  push32(0x12e72725u); f_12e76300();
  /* 12e72725 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7272a jge 0x12e72740 */
  if ((C.sf==C.of)) goto L_12e72740;
  /* 12e7272c push 0x12e8a284 */
  push32((uint32_t)(0x12e8a284u));
  /* 12e72731 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12e72737 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72738 call 0x12e76400 */
  push32(0x12e7273du); f_12e76400();
  /* 12e7273d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72740:;
  /* 12e72740 jmp 0x12e72758 */
  goto L_12e72758;
L_12e72742:;
  /* 12e72742 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12e72748 push edx */
  push32((uint32_t)(EDX));
  /* 12e72749 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12e7274f push eax */
  push32((uint32_t)(EAX));
  /* 12e72750 call 0x12e76400 */
  push32(0x12e72755u); f_12e76400();
  /* 12e72755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72758:;
  /* 12e72758 cmp dword ptr [0x12e91000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e91000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7275f je 0x12e7279c */
  if (C.zf) goto L_12e7279c;
  /* 12e72761 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12e72767 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72768 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e7276e push edx */
  push32((uint32_t)(EDX));
  /* 12e7276f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72772 push eax */
  push32((uint32_t)(EAX));
  /* 12e72773 call dword ptr [0x12e91000] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e91000))), 0x12e72779u);
  /* 12e72779 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7277c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7277e je 0x12e7279c */
  if (C.zf) goto L_12e7279c;
  /* 12e72780 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72784 jne 0x12e72791 */
  if (!C.zf) goto L_12e72791;
  /* 12e72786 push 0x12e8da50 */
  push32((uint32_t)(0x12e8da50u));
  /* 12e7278b call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e72791u);
L_12e72791:;
  /* 12e72791 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12e72797 jmp 0x12e7289b */
  goto L_12e7289b;
L_12e7279c:;
  /* 12e7279c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7279f mov edx, dword ptr [ecx*4 + 0x12e8da54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8da54)));
  /* 12e727a6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e727a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e727ab je 0x12e727eb */
  if (C.zf) goto L_12e727eb;
  /* 12e727ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e727b0 cmp dword ptr [eax*4 + 0x12e8da60], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12e8da60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e727b8 je 0x12e727eb */
  if (C.zf) goto L_12e727eb;
  /* 12e727ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12e727bc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12e727c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e727c3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e727c9 push edx */
  push32((uint32_t)(EDX));
  /* 12e727ca call 0x12e76280 */
  push32(0x12e727cfu); f_12e76280();
  /* 12e727cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e727d2 push eax */
  push32((uint32_t)(EAX));
  /* 12e727d3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12e727d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e727da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e727dd mov edx, dword ptr [ecx*4 + 0x12e8da60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8da60)));
  /* 12e727e4 push edx */
  push32((uint32_t)(EDX));
  /* 12e727e5 call dword ptr [0x12e92314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92314))), 0x12e727ebu);
L_12e727eb:;
  /* 12e727eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e727ee mov ecx, dword ptr [eax*4 + 0x12e8da54] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e8da54)));
  /* 12e727f5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e727f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e727fa je 0x12e72809 */
  if (C.zf) goto L_12e72809;
  /* 12e727fc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12e72802 push edx */
  push32((uint32_t)(EDX));
  /* 12e72803 call dword ptr [0x12e9231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9231c))), 0x12e72809u);
L_12e72809:;
  /* 12e72809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7280c mov ecx, dword ptr [eax*4 + 0x12e8da54] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e8da54)));
  /* 12e72813 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e72816 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e72818 je 0x12e72888 */
  if (C.zf) goto L_12e72888;
  /* 12e7281a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7281e je 0x12e7283d */
  if (C.zf) goto L_12e7283d;
  /* 12e72820 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e72822 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12e72828 push edx */
  push32((uint32_t)(EDX));
  /* 12e72829 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7282c push eax */
  push32((uint32_t)(EAX));
  /* 12e7282d call 0x12e75f90 */
  push32(0x12e72832u); f_12e75f90();
  /* 12e72832 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72835 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12e7283b jmp 0x12e72847 */
  goto L_12e72847;
L_12e7283d:;
  /* 12e7283d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12e72847:;
  /* 12e72847 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12e7284d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7284e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e72851 push edx */
  push32((uint32_t)(EDX));
  /* 12e72852 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12e72858 push eax */
  push32((uint32_t)(EAX));
  /* 12e72859 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7285c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7285d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72860 push edx */
  push32((uint32_t)(EDX));
  /* 12e72861 call 0x12e728a0 */
  push32(0x12e72866u); f_12e728a0();
  /* 12e72866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72869 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12e7286f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72873 jne 0x12e72880 */
  if (!C.zf) goto L_12e72880;
  /* 12e72875 push 0x12e8da50 */
  push32((uint32_t)(0x12e8da50u));
  /* 12e7287a call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e72880u);
L_12e72880:;
  /* 12e72880 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12e72886 jmp 0x12e7289b */
  goto L_12e7289b;
L_12e72888:;
  /* 12e72888 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7288c jne 0x12e72899 */
  if (!C.zf) goto L_12e72899;
  /* 12e7288e push 0x12e8da50 */
  push32((uint32_t)(0x12e8da50u));
  /* 12e72893 call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e72899u);
L_12e72899:;
  /* 12e72899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e7289b:;
  /* 12e7289b pop edi */
  EDI = (pop32());
  /* 12e7289c mov esp, ebp */
  ESP = (EBP);
  /* 12e7289e pop ebp */
  EBP = (pop32());
  /* 12e7289f ret  */
  ESPCHK(0x12e72510u, _esp0);
  ESP += 4; return;
}

/* FUN_100028a0 @ 0x12e728a0 (780 bytes, 197 insns) */
void f_12e728a0(void) {
  FTRACE(0x12e728a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e728a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e728a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e728a3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12e728a8 call 0x12e765f0 */
  push32(0x12e728adu); f_12e765f0();
L_12e728ad:;
  /* 12e728ad cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e728b1 jne 0x12e728d8 */
  if (!C.zf) goto L_12e728d8;
  /* 12e728b3 push 0x12e8a440 */
  push32((uint32_t)(0x12e8a440u));
  /* 12e728b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e728ba push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12e728bf push 0x12e8a434 */
  push32((uint32_t)(0x12e8a434u));
  /* 12e728c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e728c6 call 0x12e72510 */
  push32(0x12e728cbu); f_12e72510();
  /* 12e728cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e728ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e728d1 jne 0x12e728d8 */
  if (!C.zf) goto L_12e728d8;
  /* 12e728d3 call 0x12e72400 */
  push32(0x12e728d8u); f_12e72400();
L_12e728d8:;
  /* 12e728d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e728da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e728dc jne 0x12e728ad */
  if (!C.zf) goto L_12e728ad;
  /* 12e728de push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12e728e3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12e728e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e728ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12e728ec call dword ptr [0x12e9232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9232c))), 0x12e728f2u);
  /* 12e728f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e728f4 jne 0x12e7290a */
  if (!C.zf) goto L_12e7290a;
  /* 12e728f6 push 0x12e8a41c */
  push32((uint32_t)(0x12e8a41cu));
  /* 12e728fb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12e72901 push edx */
  push32((uint32_t)(EDX));
  /* 12e72902 call 0x12e76400 */
  push32(0x12e72907u); f_12e76400();
  /* 12e72907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7290a:;
  /* 12e7290a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12e72910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e72913 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72916 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72917 call 0x12e76280 */
  push32(0x12e7291cu); f_12e76280();
  /* 12e7291c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7291f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72922 jbe 0x12e7294d */
  if ((C.cf||C.zf)) goto L_12e7294d;
  /* 12e72924 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72927 push edx */
  push32((uint32_t)(EDX));
  /* 12e72928 call 0x12e76280 */
  push32(0x12e7292du); f_12e76280();
  /* 12e7292d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72930 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72933 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12e72937 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7293a push 3 */
  push32((uint32_t)(0x3u));
  /* 12e7293c push 0x12e8a418 */
  push32((uint32_t)(0x12e8a418u));
  /* 12e72941 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72944 push eax */
  push32((uint32_t)(EAX));
  /* 12e72945 call 0x12e76c70 */
  push32(0x12e7294au); f_12e76c70();
  /* 12e7294a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7294d:;
  /* 12e7294d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e72950 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12e72956 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7295d je 0x12e729a8 */
  if (C.zf) goto L_12e729a8;
  /* 12e7295f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e72965 push edx */
  push32((uint32_t)(EDX));
  /* 12e72966 call 0x12e76280 */
  push32(0x12e7296bu); f_12e76280();
  /* 12e7296b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7296e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72971 jbe 0x12e729a8 */
  if ((C.cf||C.zf)) goto L_12e729a8;
  /* 12e72973 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e72979 push eax */
  push32((uint32_t)(EAX));
  /* 12e7297a call 0x12e76280 */
  push32(0x12e7297fu); f_12e76280();
  /* 12e7297f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72982 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e72988 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12e7298c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12e72992 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e72994 push 0x12e8a418 */
  push32((uint32_t)(0x12e8a418u));
  /* 12e72999 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e7299f push eax */
  push32((uint32_t)(EAX));
  /* 12e729a0 call 0x12e76c70 */
  push32(0x12e729a5u); f_12e76c70();
  /* 12e729a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e729a8:;
  /* 12e729a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e729ac jne 0x12e729ba */
  if (!C.zf) goto L_12e729ba;
  /* 12e729ae mov dword ptr [ebp - 0x1114], 0x12e8a3a4 */
  w32((uint32_t)(EBP + -0x1114), (0x12e8a3a4u));
  /* 12e729b8 jmp 0x12e729c4 */
  goto L_12e729c4;
L_12e729ba:;
  /* 12e729ba mov dword ptr [ebp - 0x1114], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1114), (0x12e8a144u));
L_12e729c4:;
  /* 12e729c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e729c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e729ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e729cc je 0x12e729d9 */
  if (C.zf) goto L_12e729d9;
  /* 12e729ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e729d1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12e729d7 jmp 0x12e729e3 */
  goto L_12e729e3;
L_12e729d9:;
  /* 12e729d9 mov dword ptr [ebp - 0x1118], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1118), (0x12e8a144u));
L_12e729e3:;
  /* 12e729e3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e729e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e729e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e729eb je 0x12e729ff */
  if (C.zf) goto L_12e729ff;
  /* 12e729ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e729f1 jne 0x12e729ff */
  if (!C.zf) goto L_12e729ff;
  /* 12e729f3 mov dword ptr [ebp - 0x111c], 0x12e8a394 */
  w32((uint32_t)(EBP + -0x111c), (0x12e8a394u));
  /* 12e729fd jmp 0x12e72a09 */
  goto L_12e72a09;
L_12e729ff:;
  /* 12e729ff mov dword ptr [ebp - 0x111c], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x111c), (0x12e8a144u));
L_12e72a09:;
  /* 12e72a09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e72a0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e72a0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e72a11 je 0x12e72a1f */
  if (C.zf) goto L_12e72a1f;
  /* 12e72a13 mov dword ptr [ebp - 0x1120], 0x12e8a390 */
  w32((uint32_t)(EBP + -0x1120), (0x12e8a390u));
  /* 12e72a1d jmp 0x12e72a29 */
  goto L_12e72a29;
L_12e72a1f:;
  /* 12e72a1f mov dword ptr [ebp - 0x1120], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1120), (0x12e8a144u));
L_12e72a29:;
  /* 12e72a29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72a2d je 0x12e72a3a */
  if (C.zf) goto L_12e72a3a;
  /* 12e72a2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e72a32 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12e72a38 jmp 0x12e72a44 */
  goto L_12e72a44;
L_12e72a3a:;
  /* 12e72a3a mov dword ptr [ebp - 0x1124], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1124), (0x12e8a144u));
L_12e72a44:;
  /* 12e72a44 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72a48 je 0x12e72a56 */
  if (C.zf) goto L_12e72a56;
  /* 12e72a4a mov dword ptr [ebp - 0x1128], 0x12e8a388 */
  w32((uint32_t)(EBP + -0x1128), (0x12e8a388u));
  /* 12e72a54 jmp 0x12e72a60 */
  goto L_12e72a60;
L_12e72a56:;
  /* 12e72a56 mov dword ptr [ebp - 0x1128], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1128), (0x12e8a144u));
L_12e72a60:;
  /* 12e72a60 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72a64 je 0x12e72a71 */
  if (C.zf) goto L_12e72a71;
  /* 12e72a66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e72a69 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12e72a6f jmp 0x12e72a7b */
  goto L_12e72a7b;
L_12e72a71:;
  /* 12e72a71 mov dword ptr [ebp - 0x112c], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x112c), (0x12e8a144u));
L_12e72a7b:;
  /* 12e72a7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72a7f je 0x12e72a8d */
  if (C.zf) goto L_12e72a8d;
  /* 12e72a81 mov dword ptr [ebp - 0x1130], 0x12e8a380 */
  w32((uint32_t)(EBP + -0x1130), (0x12e8a380u));
  /* 12e72a8b jmp 0x12e72a97 */
  goto L_12e72a97;
L_12e72a8d:;
  /* 12e72a8d mov dword ptr [ebp - 0x1130], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1130), (0x12e8a144u));
L_12e72a97:;
  /* 12e72a97 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72a9e je 0x12e72aae */
  if (C.zf) goto L_12e72aae;
  /* 12e72aa0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12e72aa6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12e72aac jmp 0x12e72ab8 */
  goto L_12e72ab8;
L_12e72aae:;
  /* 12e72aae mov dword ptr [ebp - 0x1134], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1134), (0x12e8a144u));
L_12e72ab8:;
  /* 12e72ab8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72abf je 0x12e72acd */
  if (C.zf) goto L_12e72acd;
  /* 12e72ac1 mov dword ptr [ebp - 0x1138], 0x12e8a374 */
  w32((uint32_t)(EBP + -0x1138), (0x12e8a374u));
  /* 12e72acb jmp 0x12e72ad7 */
  goto L_12e72ad7;
L_12e72acd:;
  /* 12e72acd mov dword ptr [ebp - 0x1138], 0x12e8a144 */
  w32((uint32_t)(EBP + -0x1138), (0x12e8a144u));
L_12e72ad7:;
  /* 12e72ad7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12e72add push edx */
  push32((uint32_t)(EDX));
  /* 12e72ade mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12e72ae4 push eax */
  push32((uint32_t)(EAX));
  /* 12e72ae5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12e72aeb push ecx */
  push32((uint32_t)(ECX));
  /* 12e72aec mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12e72af2 push edx */
  push32((uint32_t)(EDX));
  /* 12e72af3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12e72af9 push eax */
  push32((uint32_t)(EAX));
  /* 12e72afa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12e72b00 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72b01 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12e72b07 push edx */
  push32((uint32_t)(EDX));
  /* 12e72b08 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12e72b0e push eax */
  push32((uint32_t)(EAX));
  /* 12e72b0f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12e72b15 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72b16 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12e72b1c push edx */
  push32((uint32_t)(EDX));
  /* 12e72b1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72b20 push eax */
  push32((uint32_t)(EAX));
  /* 12e72b21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72b24 mov edx, dword ptr [ecx*4 + 0x12e8da6c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8da6c)));
  /* 12e72b2b push edx */
  push32((uint32_t)(EDX));
  /* 12e72b2c push 0x12e8a320 */
  push32((uint32_t)(0x12e8a320u));
  /* 12e72b31 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e72b36 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12e72b3c push eax */
  push32((uint32_t)(EAX));
  /* 12e72b3d call 0x12e76300 */
  push32(0x12e72b42u); f_12e76300();
  /* 12e72b42 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e72b47 jge 0x12e72b5d */
  if ((C.sf==C.of)) goto L_12e72b5d;
  /* 12e72b49 push 0x12e8a284 */
  push32((uint32_t)(0x12e8a284u));
  /* 12e72b4e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12e72b54 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72b55 call 0x12e76400 */
  push32(0x12e72b5au); f_12e76400();
  /* 12e72b5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72b5d:;
  /* 12e72b5d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12e72b62 push 0x12e8a2fc */
  push32((uint32_t)(0x12e8a2fcu));
  /* 12e72b67 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12e72b6d push edx */
  push32((uint32_t)(EDX));
  /* 12e72b6e call 0x12e76bb0 */
  push32(0x12e72b73u); f_12e76bb0();
  /* 12e72b73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72b76 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12e72b7c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72b83 jne 0x12e72b96 */
  if (!C.zf) goto L_12e72b96;
  /* 12e72b85 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12e72b87 call 0x12e768f0 */
  push32(0x12e72b8cu); f_12e768f0();
  /* 12e72b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72b8f push 3 */
  push32((uint32_t)(0x3u));
  /* 12e72b91 call 0x12e72c10 */
  push32(0x12e72b96u); f_12e72c10();
L_12e72b96:;
  /* 12e72b96 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72b9d jne 0x12e72ba6 */
  if (!C.zf) goto L_12e72ba6;
  /* 12e72b9f mov eax, 1 */
  EAX = (0x1u);
  /* 12e72ba4 jmp 0x12e72ba8 */
  goto L_12e72ba8;
L_12e72ba6:;
  /* 12e72ba6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e72ba8:;
  /* 12e72ba8 mov esp, ebp */
  ESP = (EBP);
  /* 12e72baa pop ebp */
  EBP = (pop32());
  /* 12e72bab ret  */
  ESPCHK(0x12e728a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bb0 @ 0x12e72bb0 (56 bytes, 15 insns) */
void f_12e72bb0(void) {
  FTRACE(0x12e72bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12e72bb3 cmp dword ptr [0x12e90ffc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90ffc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72bba je 0x12e72bc2 */
  if (C.zf) goto L_12e72bc2;
  /* 12e72bbc call dword ptr [0x12e90ffc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e90ffc))), 0x12e72bc2u);
L_12e72bc2:;
  /* 12e72bc2 push 0x12e8d418 */
  push32((uint32_t)(0x12e8d418u));
  /* 12e72bc7 push 0x12e8d208 */
  push32((uint32_t)(0x12e8d208u));
  /* 12e72bcc call 0x12e72d80 */
  push32(0x12e72bd1u); f_12e72d80();
  /* 12e72bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72bd4 push 0x12e8d104 */
  push32((uint32_t)(0x12e8d104u));
  /* 12e72bd9 push 0x12e8d000 */
  push32((uint32_t)(0x12e8d000u));
  /* 12e72bde call 0x12e72d80 */
  push32(0x12e72be3u); f_12e72d80();
  /* 12e72be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72be6 pop ebp */
  EBP = (pop32());
  /* 12e72be7 ret  */
  ESPCHK(0x12e72bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bf0 @ 0x12e72bf0 (21 bytes, 10 insns) */
void f_12e72bf0(void) {
  FTRACE(0x12e72bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e72bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e72bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e72bf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72bfa push eax */
  push32((uint32_t)(EAX));
  /* 12e72bfb call 0x12e72c70 */
  push32(0x12e72c00u); f_12e72c70();
  /* 12e72c00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72c03 pop ebp */
  EBP = (pop32());
  /* 12e72c04 ret  */
  ESPCHK(0x12e72bf0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12e72c10 (21 bytes, 10 insns) */
void f_12e72c10(void) {
  FTRACE(0x12e72c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72c11 mov ebp, esp */
  EBP = (ESP);
  /* 12e72c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e72c15 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e72c17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72c1a push eax */
  push32((uint32_t)(EAX));
  /* 12e72c1b call 0x12e72c70 */
  push32(0x12e72c20u); f_12e72c70();
  /* 12e72c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72c23 pop ebp */
  EBP = (pop32());
  /* 12e72c24 ret  */
  ESPCHK(0x12e72c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c30 @ 0x12e72c30 (19 bytes, 9 insns) */
void f_12e72c30(void) {
  FTRACE(0x12e72c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72c31 mov ebp, esp */
  EBP = (ESP);
  /* 12e72c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e72c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e72c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e72c39 call 0x12e72c70 */
  push32(0x12e72c3eu); f_12e72c70();
  /* 12e72c3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72c41 pop ebp */
  EBP = (pop32());
  /* 12e72c42 ret  */
  ESPCHK(0x12e72c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c50 @ 0x12e72c50 (19 bytes, 9 insns) */
void f_12e72c50(void) {
  FTRACE(0x12e72c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72c51 mov ebp, esp */
  EBP = (ESP);
  /* 12e72c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e72c55 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e72c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e72c59 call 0x12e72c70 */
  push32(0x12e72c5eu); f_12e72c70();
  /* 12e72c5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72c61 pop ebp */
  EBP = (pop32());
  /* 12e72c62 ret  */
  ESPCHK(0x12e72c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c70 @ 0x12e72c70 (227 bytes, 61 insns) */
void f_12e72c70(void) {
  FTRACE(0x12e72c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72c71 mov ebp, esp */
  EBP = (ESP);
  /* 12e72c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72c74 call 0x12e72d60 */
  push32(0x12e72c79u); f_12e72d60();
  /* 12e72c79 cmp dword ptr [0x12e8f50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72c80 jne 0x12e72c93 */
  if (!C.zf) goto L_12e72c93;
  /* 12e72c82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72c85 push eax */
  push32((uint32_t)(EAX));
  /* 12e72c86 call dword ptr [0x12e92338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92338))), 0x12e72c8cu);
  /* 12e72c8c push eax */
  push32((uint32_t)(EAX));
  /* 12e72c8d call dword ptr [0x12e92334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92334))), 0x12e72c93u);
L_12e72c93:;
  /* 12e72c93 mov dword ptr [0x12e8f508], 1 */
  w32((uint32_t)(0x12e8f508), (0x1u));
  /* 12e72c9d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12e72ca0 mov byte ptr [0x12e8f504], cl */
  w8((uint32_t)(0x12e8f504), (CL));
  /* 12e72ca6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72caa jne 0x12e72cf3 */
  if (!C.zf) goto L_12e72cf3;
  /* 12e72cac cmp dword ptr [0x12e90ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72cb3 je 0x12e72ce1 */
  if (C.zf) goto L_12e72ce1;
  /* 12e72cb5 mov edx, dword ptr [0x12e90ff4] */
  EDX = (r32((uint32_t)(0x12e90ff4)));
  /* 12e72cbb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e72cbe:;
  /* 12e72cbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72cc1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e72cc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e72cc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72cca cmp ecx, dword ptr [0x12e90ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e90ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72cd0 jb 0x12e72ce1 */
  if (C.cf) goto L_12e72ce1;
  /* 12e72cd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72cd5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72cd8 je 0x12e72cdf */
  if (C.zf) goto L_12e72cdf;
  /* 12e72cda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72cdd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12e72cdfu);
L_12e72cdf:;
  /* 12e72cdf jmp 0x12e72cbe */
  goto L_12e72cbe;
L_12e72ce1:;
  /* 12e72ce1 push 0x12e8d724 */
  push32((uint32_t)(0x12e8d724u));
  /* 12e72ce6 push 0x12e8d51c */
  push32((uint32_t)(0x12e8d51cu));
  /* 12e72ceb call 0x12e72d80 */
  push32(0x12e72cf0u); f_12e72d80();
  /* 12e72cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72cf3:;
  /* 12e72cf3 push 0x12e8d92c */
  push32((uint32_t)(0x12e8d92cu));
  /* 12e72cf8 push 0x12e8d828 */
  push32((uint32_t)(0x12e8d828u));
  /* 12e72cfd call 0x12e72d80 */
  push32(0x12e72d02u); f_12e72d80();
  /* 12e72d02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72d05 cmp dword ptr [0x12e8f510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72d0c jne 0x12e72d2e */
  if (!C.zf) goto L_12e72d2e;
  /* 12e72d0e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e72d10 call 0x12e74960 */
  push32(0x12e72d15u); f_12e74960();
  /* 12e72d15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72d18 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12e72d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e72d1d je 0x12e72d2e */
  if (C.zf) goto L_12e72d2e;
  /* 12e72d1f mov dword ptr [0x12e8f510], 1 */
  w32((uint32_t)(0x12e8f510), (0x1u));
  /* 12e72d29 call 0x12e75270 */
  push32(0x12e72d2eu); f_12e75270();
L_12e72d2e:;
  /* 12e72d2e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72d32 je 0x12e72d3b */
  if (C.zf) goto L_12e72d3b;
  /* 12e72d34 call 0x12e72d70 */
  push32(0x12e72d39u); f_12e72d70();
  /* 12e72d39 jmp 0x12e72d4f */
  goto L_12e72d4f;
L_12e72d3b:;
  /* 12e72d3b mov dword ptr [0x12e8f50c], 1 */
  w32((uint32_t)(0x12e8f50c), (0x1u));
  /* 12e72d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72d48 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72d49 call dword ptr [0x12e92330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92330))), 0x12e72d4fu);
L_12e72d4f:;
  /* 12e72d4f mov esp, ebp */
  ESP = (EBP);
  /* 12e72d51 pop ebp */
  EBP = (pop32());
  /* 12e72d52 ret  */
  ESPCHK(0x12e72c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x12e72d60 (15 bytes, 7 insns) */
void f_12e72d60(void) {
  FTRACE(0x12e72d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72d61 mov ebp, esp */
  EBP = (ESP);
  /* 12e72d63 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12e72d65 call 0x12e76e50 */
  push32(0x12e72d6au); f_12e76e50();
  /* 12e72d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72d6d pop ebp */
  EBP = (pop32());
  /* 12e72d6e ret  */
  ESPCHK(0x12e72d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d70 @ 0x12e72d70 (15 bytes, 7 insns) */
void f_12e72d70(void) {
  FTRACE(0x12e72d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72d71 mov ebp, esp */
  EBP = (ESP);
  /* 12e72d73 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12e72d75 call 0x12e76ef0 */
  push32(0x12e72d7au); f_12e76ef0();
  /* 12e72d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72d7d pop ebp */
  EBP = (pop32());
  /* 12e72d7e ret  */
  ESPCHK(0x12e72d70u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12e72d80 (37 bytes, 16 insns) */
void f_12e72d80(void) {
  FTRACE(0x12e72d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72d81 mov ebp, esp */
  EBP = (ESP);
L_12e72d83:;
  /* 12e72d83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72d86 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72d89 jae 0x12e72da3 */
  if (!C.cf) goto L_12e72da3;
  /* 12e72d8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72d8e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72d91 je 0x12e72d98 */
  if (C.zf) goto L_12e72d98;
  /* 12e72d93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72d96 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12e72d98u);
L_12e72d98:;
  /* 12e72d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72d9b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72d9e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e72da1 jmp 0x12e72d83 */
  goto L_12e72d83;
L_12e72da3:;
  /* 12e72da3 pop ebp */
  EBP = (pop32());
  /* 12e72da4 ret  */
  ESPCHK(0x12e72d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db0 @ 0x12e72db0 (130 bytes, 42 insns) */
void f_12e72db0(void) {
  FTRACE(0x12e72db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72db1 mov ebp, esp */
  EBP = (ESP);
  /* 12e72db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72db4 call 0x12e76d70 */
  push32(0x12e72db9u); f_12e76d70();
  /* 12e72db9 call dword ptr [0x12e92344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92344))), 0x12e72dbfu);
  /* 12e72dbf mov dword ptr [0x12e8da78], eax */
  w32((uint32_t)(0x12e8da78), (EAX));
  /* 12e72dc4 cmp dword ptr [0x12e8da78], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8da78))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72dcb jne 0x12e72dd1 */
  if (!C.zf) goto L_12e72dd1;
  /* 12e72dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e72dcf jmp 0x12e72e2e */
  goto L_12e72e2e;
L_12e72dd1:;
  /* 12e72dd1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12e72dd3 push 0x12e8a458 */
  push32((uint32_t)(0x12e8a458u));
  /* 12e72dd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72dda push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12e72ddc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e72dde call 0x12e73860 */
  push32(0x12e72de3u); f_12e73860();
  /* 12e72de3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72de6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e72de9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72ded je 0x12e72e04 */
  if (C.zf) goto L_12e72e04;
  /* 12e72def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72df2 push eax */
  push32((uint32_t)(EAX));
  /* 12e72df3 mov ecx, dword ptr [0x12e8da78] */
  ECX = (r32((uint32_t)(0x12e8da78)));
  /* 12e72df9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72dfa call dword ptr [0x12e92340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92340))), 0x12e72e00u);
  /* 12e72e00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e72e02 jne 0x12e72e08 */
  if (!C.zf) goto L_12e72e08;
L_12e72e04:;
  /* 12e72e04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e72e06 jmp 0x12e72e2e */
  goto L_12e72e2e;
L_12e72e08:;
  /* 12e72e08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72e0b push edx */
  push32((uint32_t)(EDX));
  /* 12e72e0c call 0x12e72e70 */
  push32(0x12e72e11u); f_12e72e70();
  /* 12e72e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72e14 call dword ptr [0x12e9233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9233c))), 0x12e72e1au);
  /* 12e72e1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72e1d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e72e1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72e22 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12e72e29 mov eax, 1 */
  EAX = (0x1u);
L_12e72e2e:;
  /* 12e72e2e mov esp, ebp */
  ESP = (EBP);
  /* 12e72e30 pop ebp */
  EBP = (pop32());
  /* 12e72e31 ret  */
  ESPCHK(0x12e72db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e40 @ 0x12e72e40 (41 bytes, 11 insns) */
void f_12e72e40(void) {
  FTRACE(0x12e72e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72e41 mov ebp, esp */
  EBP = (ESP);
  /* 12e72e43 call 0x12e76db0 */
  push32(0x12e72e48u); f_12e76db0();
  /* 12e72e48 cmp dword ptr [0x12e8da78], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8da78))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72e4f je 0x12e72e67 */
  if (C.zf) goto L_12e72e67;
  /* 12e72e51 mov eax, dword ptr [0x12e8da78] */
  EAX = (r32((uint32_t)(0x12e8da78)));
  /* 12e72e56 push eax */
  push32((uint32_t)(EAX));
  /* 12e72e57 call dword ptr [0x12e92348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92348))), 0x12e72e5du);
  /* 12e72e5d mov dword ptr [0x12e8da78], 0xffffffff */
  w32((uint32_t)(0x12e8da78), (0xffffffffu));
L_12e72e67:;
  /* 12e72e67 pop ebp */
  EBP = (pop32());
  /* 12e72e68 ret  */
  ESPCHK(0x12e72e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x12e72e70 (25 bytes, 8 insns) */
void f_12e72e70(void) {
  FTRACE(0x12e72e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72e71 mov ebp, esp */
  EBP = (ESP);
  /* 12e72e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72e76 mov dword ptr [eax + 0x50], 0x12e8dc20 */
  w32((uint32_t)(EAX + 0x50), (0x12e8dc20u));
  /* 12e72e7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72e80 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12e72e87 pop ebp */
  EBP = (pop32());
  /* 12e72e88 ret  */
  ESPCHK(0x12e72e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e90 @ 0x12e72e90 (152 bytes, 48 insns) */
void f_12e72e90(void) {
  FTRACE(0x12e72e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72e91 mov ebp, esp */
  EBP = (ESP);
  /* 12e72e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e72e96 call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e72e9cu);
  /* 12e72e9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e72e9f mov eax, dword ptr [0x12e8da78] */
  EAX = (r32((uint32_t)(0x12e8da78)));
  /* 12e72ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12e72ea5 call dword ptr [0x12e92288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92288))), 0x12e72eabu);
  /* 12e72eab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e72eae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72eb2 jne 0x12e72f17 */
  if (!C.zf) goto L_12e72f17;
  /* 12e72eb4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12e72eb9 push 0x12e8a458 */
  push32((uint32_t)(0x12e8a458u));
  /* 12e72ebe push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72ec0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12e72ec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e72ec4 call 0x12e73860 */
  push32(0x12e72ec9u); f_12e73860();
  /* 12e72ec9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72ecc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e72ecf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72ed3 je 0x12e72f0d */
  if (C.zf) goto L_12e72f0d;
  /* 12e72ed5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72ed8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e72ed9 mov edx, dword ptr [0x12e8da78] */
  EDX = (r32((uint32_t)(0x12e8da78)));
  /* 12e72edf push edx */
  push32((uint32_t)(EDX));
  /* 12e72ee0 call dword ptr [0x12e92340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92340))), 0x12e72ee6u);
  /* 12e72ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e72ee8 je 0x12e72f0d */
  if (C.zf) goto L_12e72f0d;
  /* 12e72eea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72eed push eax */
  push32((uint32_t)(EAX));
  /* 12e72eee call 0x12e72e70 */
  push32(0x12e72ef3u); f_12e72e70();
  /* 12e72ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e72ef6 call dword ptr [0x12e9233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9233c))), 0x12e72efcu);
  /* 12e72efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72eff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e72f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72f04 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12e72f0b jmp 0x12e72f17 */
  goto L_12e72f17;
L_12e72f0d:;
  /* 12e72f0d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12e72f0f call 0x12e723c0 */
  push32(0x12e72f14u); f_12e723c0();
  /* 12e72f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72f17:;
  /* 12e72f17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e72f1a push eax */
  push32((uint32_t)(EAX));
  /* 12e72f1b call dword ptr [0x12e9234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9234c))), 0x12e72f21u);
  /* 12e72f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e72f24 mov esp, ebp */
  ESP = (EBP);
  /* 12e72f26 pop ebp */
  EBP = (pop32());
  /* 12e72f27 ret  */
  ESPCHK(0x12e72e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f30 @ 0x12e72f30 (263 bytes, 86 insns) */
void f_12e72f30(void) {
  FTRACE(0x12e72f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e72f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e72f31 mov ebp, esp */
  EBP = (ESP);
  /* 12e72f33 cmp dword ptr [0x12e8da78], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8da78))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72f3a je 0x12e73035 */
  if (C.zf) goto L_12e73035;
  /* 12e72f40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72f44 jne 0x12e72f55 */
  if (!C.zf) goto L_12e72f55;
  /* 12e72f46 mov eax, dword ptr [0x12e8da78] */
  EAX = (r32((uint32_t)(0x12e8da78)));
  /* 12e72f4b push eax */
  push32((uint32_t)(EAX));
  /* 12e72f4c call dword ptr [0x12e92288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92288))), 0x12e72f52u);
  /* 12e72f52 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e72f55:;
  /* 12e72f55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72f59 je 0x12e73026 */
  if (C.zf) goto L_12e73026;
  /* 12e72f5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72f62 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72f66 je 0x12e72f79 */
  if (C.zf) goto L_12e72f79;
  /* 12e72f68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72f6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72f6d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12e72f70 push eax */
  push32((uint32_t)(EAX));
  /* 12e72f71 call 0x12e73ee0 */
  push32(0x12e72f76u); f_12e73ee0();
  /* 12e72f76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72f79:;
  /* 12e72f79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72f7c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72f80 je 0x12e72f93 */
  if (C.zf) goto L_12e72f93;
  /* 12e72f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72f84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72f87 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12e72f8a push eax */
  push32((uint32_t)(EAX));
  /* 12e72f8b call 0x12e73ee0 */
  push32(0x12e72f90u); f_12e73ee0();
  /* 12e72f90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72f93:;
  /* 12e72f93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72f96 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72f9a je 0x12e72fad */
  if (C.zf) goto L_12e72fad;
  /* 12e72f9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72fa1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12e72fa4 push eax */
  push32((uint32_t)(EAX));
  /* 12e72fa5 call 0x12e73ee0 */
  push32(0x12e72faau); f_12e73ee0();
  /* 12e72faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72fad:;
  /* 12e72fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72fb0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72fb4 je 0x12e72fc7 */
  if (C.zf) goto L_12e72fc7;
  /* 12e72fb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72fb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72fbb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12e72fbe push eax */
  push32((uint32_t)(EAX));
  /* 12e72fbf call 0x12e73ee0 */
  push32(0x12e72fc4u); f_12e73ee0();
  /* 12e72fc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72fc7:;
  /* 12e72fc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72fca cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72fce je 0x12e72fe1 */
  if (C.zf) goto L_12e72fe1;
  /* 12e72fd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72fd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72fd5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12e72fd8 push eax */
  push32((uint32_t)(EAX));
  /* 12e72fd9 call 0x12e73ee0 */
  push32(0x12e72fdeu); f_12e73ee0();
  /* 12e72fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72fe1:;
  /* 12e72fe1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72fe4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e72fe8 je 0x12e72ffb */
  if (C.zf) goto L_12e72ffb;
  /* 12e72fea push 2 */
  push32((uint32_t)(0x2u));
  /* 12e72fec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72fef mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12e72ff2 push eax */
  push32((uint32_t)(EAX));
  /* 12e72ff3 call 0x12e73ee0 */
  push32(0x12e72ff8u); f_12e73ee0();
  /* 12e72ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e72ffb:;
  /* 12e72ffb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e72ffe cmp dword ptr [ecx + 0x50], 0x12e8dc20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12e8dc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73005 je 0x12e73018 */
  if (C.zf) goto L_12e73018;
  /* 12e73007 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7300c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12e7300f push eax */
  push32((uint32_t)(EAX));
  /* 12e73010 call 0x12e73ee0 */
  push32(0x12e73015u); f_12e73ee0();
  /* 12e73015 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e73018:;
  /* 12e73018 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7301a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7301d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7301e call 0x12e73ee0 */
  push32(0x12e73023u); f_12e73ee0();
  /* 12e73023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e73026:;
  /* 12e73026 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73028 mov edx, dword ptr [0x12e8da78] */
  EDX = (r32((uint32_t)(0x12e8da78)));
  /* 12e7302e push edx */
  push32((uint32_t)(EDX));
  /* 12e7302f call dword ptr [0x12e92340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92340))), 0x12e73035u);
L_12e73035:;
  /* 12e73035 pop ebp */
  EBP = (pop32());
  /* 12e73036 ret  */
  ESPCHK(0x12e72f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x12e73040 (11 bytes, 5 insns) */
void f_12e73040(void) {
  FTRACE(0x12e73040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73040 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73041 mov ebp, esp */
  EBP = (ESP);
  /* 12e73043 call dword ptr [0x12e9233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9233c))), 0x12e73049u);
  /* 12e73049 pop ebp */
  EBP = (pop32());
  /* 12e7304a ret  */
  ESPCHK(0x12e73040u, _esp0);
  ESP += 4; return;
}

/* FUN_10003050 @ 0x12e73050 (11 bytes, 5 insns) */
void f_12e73050(void) {
  FTRACE(0x12e73050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73050 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73051 mov ebp, esp */
  EBP = (ESP);
  /* 12e73053 call dword ptr [0x12e92358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92358))), 0x12e73059u);
  /* 12e73059 pop ebp */
  EBP = (pop32());
  /* 12e7305a ret  */
  ESPCHK(0x12e73050u, _esp0);
  ESP += 4; return;
}

/* FUN_10003060 @ 0x12e73060 (804 bytes, 236 insns) */
void f_12e73060(void) {
  FTRACE(0x12e73060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73060 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73061 mov ebp, esp */
  EBP = (ESP);
  /* 12e73063 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73066 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12e7306b push 0x12e8a464 */
  push32((uint32_t)(0x12e8a464u));
  /* 12e73070 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73072 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12e73077 call 0x12e73450 */
  push32(0x12e7307cu); f_12e73450();
  /* 12e7307c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7307f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12e73082 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73086 jne 0x12e73092 */
  if (!C.zf) goto L_12e73092;
  /* 12e73088 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12e7308a call 0x12e723c0 */
  push32(0x12e7308fu); f_12e723c0();
  /* 12e7308f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e73092:;
  /* 12e73092 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e73095 mov dword ptr [0x12e90ea0], eax */
  w32((uint32_t)(0x12e90ea0), (EAX));
  /* 12e7309a mov dword ptr [0x12e90fdc], 0x20 */
  w32((uint32_t)(0x12e90fdc), (0x20u));
  /* 12e730a4 jmp 0x12e730af */
  goto L_12e730af;
L_12e730a6:;
  /* 12e730a6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e730a9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e730ac mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12e730af:;
  /* 12e730af mov edx, dword ptr [0x12e90ea0] */
  EDX = (r32((uint32_t)(0x12e90ea0)));
  /* 12e730b5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e730bb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e730be jae 0x12e730e3 */
  if (!C.cf) goto L_12e730e3;
  /* 12e730c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e730c3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e730c7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e730ca mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e730d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e730d3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12e730d7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e730da mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e730e1 jmp 0x12e730a6 */
  goto L_12e730a6;
L_12e730e3:;
  /* 12e730e3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12e730e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e730e7 call dword ptr [0x12e92364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92364))), 0x12e730edu);
  /* 12e730ed mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12e730f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e730f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e730f8 je 0x12e73285 */
  if (C.zf) goto L_12e73285;
  /* 12e730fe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73102 je 0x12e73285 */
  if (C.zf) goto L_12e73285;
  /* 12e73108 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7310b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7310d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12e73110 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e73113 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73116 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e73119 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7311c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7311f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12e73122 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73129 jge 0x12e73133 */
  if ((C.sf==C.of)) goto L_12e73133;
  /* 12e7312b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12e7312e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12e73131 jmp 0x12e7313a */
  goto L_12e7313a;
L_12e73133:;
  /* 12e73133 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12e7313a:;
  /* 12e7313a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12e7313d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12e73140 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12e73147 jmp 0x12e73152 */
  goto L_12e73152;
L_12e73149:;
  /* 12e73149 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12e7314c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7314f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12e73152:;
  /* 12e73152 mov ecx, dword ptr [0x12e90fdc] */
  ECX = (r32((uint32_t)(0x12e90fdc)));
  /* 12e73158 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7315b jge 0x12e731f2 */
  if ((C.sf==C.of)) goto L_12e731f2;
  /* 12e73161 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12e73166 push 0x12e8a464 */
  push32((uint32_t)(0x12e8a464u));
  /* 12e7316b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7316d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12e73172 call 0x12e73450 */
  push32(0x12e73177u); f_12e73450();
  /* 12e73177 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7317a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12e7317d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73181 jne 0x12e7318e */
  if (!C.zf) goto L_12e7318e;
  /* 12e73183 mov edx, dword ptr [0x12e90fdc] */
  EDX = (r32((uint32_t)(0x12e90fdc)));
  /* 12e73189 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12e7318c jmp 0x12e731f2 */
  goto L_12e731f2;
L_12e7318e:;
  /* 12e7318e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12e73191 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e73194 mov dword ptr [eax*4 + 0x12e90ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x12e90ea0), (ECX));
  /* 12e7319b mov edx, dword ptr [0x12e90fdc] */
  EDX = (r32((uint32_t)(0x12e90fdc)));
  /* 12e731a1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e731a4 mov dword ptr [0x12e90fdc], edx */
  w32((uint32_t)(0x12e90fdc), (EDX));
  /* 12e731aa jmp 0x12e731b5 */
  goto L_12e731b5;
L_12e731ac:;
  /* 12e731ac mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e731af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e731b2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12e731b5:;
  /* 12e731b5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12e731b8 mov edx, dword ptr [ecx*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e731bf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e731c5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e731c8 jae 0x12e731ed */
  if (!C.cf) goto L_12e731ed;
  /* 12e731ca mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e731cd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e731d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e731d4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12e731da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e731dd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12e731e1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e731e4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12e731eb jmp 0x12e731ac */
  goto L_12e731ac;
L_12e731ed:;
  /* 12e731ed jmp 0x12e73149 */
  goto L_12e73149;
L_12e731f2:;
  /* 12e731f2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12e731f9 jmp 0x12e73216 */
  goto L_12e73216;
L_12e731fb:;
  /* 12e731fb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e731fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73201 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12e73204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73207 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7320a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7320d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e73210 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73213 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12e73216:;
  /* 12e73216 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e73219 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7321c jge 0x12e73285 */
  if ((C.sf==C.of)) goto L_12e73285;
  /* 12e7321e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e73221 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73224 je 0x12e73280 */
  if (C.zf) goto L_12e73280;
  /* 12e73226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73229 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7322c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7322f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e73231 je 0x12e73280 */
  if (C.zf) goto L_12e73280;
  /* 12e73233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73236 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e73239 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7323c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7323e jne 0x12e73250 */
  if (!C.zf) goto L_12e73250;
  /* 12e73240 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e73243 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e73245 push edx */
  push32((uint32_t)(EDX));
  /* 12e73246 call dword ptr [0x12e92360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92360))), 0x12e7324cu);
  /* 12e7324c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7324e je 0x12e73280 */
  if (C.zf) goto L_12e73280;
L_12e73250:;
  /* 12e73250 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e73253 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e73256 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e73259 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7325c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7325f mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e73266 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73268 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12e7326b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e7326e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12e73271 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e73273 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e73275 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e73278 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7327b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e7327d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12e73280:;
  /* 12e73280 jmp 0x12e731fb */
  goto L_12e731fb;
L_12e73285:;
  /* 12e73285 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12e7328c jmp 0x12e73297 */
  goto L_12e73297;
L_12e7328e:;
  /* 12e7328e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e73291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73294 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12e73297:;
  /* 12e73297 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7329b jge 0x12e73374 */
  if ((C.sf==C.of)) goto L_12e73374;
  /* 12e732a1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e732a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e732a7 mov edx, dword ptr [0x12e90ea0] */
  EDX = (r32((uint32_t)(0x12e90ea0)));
  /* 12e732ad add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e732af mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12e732b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e732b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e732b8 jne 0x12e73360 */
  if (!C.zf) goto L_12e73360;
  /* 12e732be mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e732c1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12e732c5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e732c9 jne 0x12e732d4 */
  if (!C.zf) goto L_12e732d4;
  /* 12e732cb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12e732d2 jmp 0x12e732e4 */
  goto L_12e732e4;
L_12e732d4:;
  /* 12e732d4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12e732d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e732da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e732dc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e732de add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e732e1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12e732e4:;
  /* 12e732e4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12e732e7 push eax */
  push32((uint32_t)(EAX));
  /* 12e732e8 call dword ptr [0x12e92310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92310))), 0x12e732eeu);
  /* 12e732ee mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12e732f1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e732f5 je 0x12e7334f */
  if (C.zf) goto L_12e7334f;
  /* 12e732f7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e732fa push ecx */
  push32((uint32_t)(ECX));
  /* 12e732fb call dword ptr [0x12e92360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92360))), 0x12e73301u);
  /* 12e73301 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12e73304 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73308 je 0x12e7334f */
  if (C.zf) goto L_12e7334f;
  /* 12e7330a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e7330d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e73310 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e73312 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12e73315 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7331b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7331e jne 0x12e73330 */
  if (!C.zf) goto L_12e73330;
  /* 12e73320 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e73323 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12e73326 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12e73328 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e7332b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12e7332e jmp 0x12e7334d */
  goto L_12e7334d;
L_12e73330:;
  /* 12e73330 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12e73333 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e73339 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7333c jne 0x12e7334d */
  if (!C.zf) goto L_12e7334d;
  /* 12e7333e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e73341 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e73344 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12e73347 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e7334a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12e7334d:;
  /* 12e7334d jmp 0x12e7335e */
  goto L_12e7335e;
L_12e7334f:;
  /* 12e7334f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e73352 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e73355 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12e73358 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e7335b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12e7335e:;
  /* 12e7335e jmp 0x12e7336f */
  goto L_12e7336f;
L_12e73360:;
  /* 12e73360 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e73363 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12e73366 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12e73369 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e7336c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12e7336f:;
  /* 12e7336f jmp 0x12e7328e */
  goto L_12e7328e;
L_12e73374:;
  /* 12e73374 mov eax, dword ptr [0x12e90fdc] */
  EAX = (r32((uint32_t)(0x12e90fdc)));
  /* 12e73379 push eax */
  push32((uint32_t)(EAX));
  /* 12e7337a call dword ptr [0x12e9235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9235c))), 0x12e73380u);
  /* 12e73380 mov esp, ebp */
  ESP = (EBP);
  /* 12e73382 pop ebp */
  EBP = (pop32());
  /* 12e73383 ret  */
  ESPCHK(0x12e73060u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12e73390 (155 bytes, 45 insns) */
void f_12e73390(void) {
  FTRACE(0x12e73390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73390 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73391 mov ebp, esp */
  EBP = (ESP);
  /* 12e73393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73396 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7339d jmp 0x12e733a8 */
  goto L_12e733a8;
L_12e7339f:;
  /* 12e7339f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e733a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e733a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e733a8:;
  /* 12e733a8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e733ac jge 0x12e73427 */
  if ((C.sf==C.of)) goto L_12e73427;
  /* 12e733ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e733b1 cmp dword ptr [ecx*4 + 0x12e90ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e90ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e733b9 je 0x12e73422 */
  if (C.zf) goto L_12e73422;
  /* 12e733bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e733be mov eax, dword ptr [edx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e733c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e733c8 jmp 0x12e733d3 */
  goto L_12e733d3;
L_12e733ca:;
  /* 12e733ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e733cd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e733d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e733d3:;
  /* 12e733d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e733d6 mov eax, dword ptr [edx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e90ea0)));
  /* 12e733dd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e733e2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e733e5 jae 0x12e733ff */
  if (!C.cf) goto L_12e733ff;
  /* 12e733e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e733ea cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e733ee je 0x12e733fd */
  if (C.zf) goto L_12e733fd;
  /* 12e733f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e733f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e733f6 push edx */
  push32((uint32_t)(EDX));
  /* 12e733f7 call dword ptr [0x12e92368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92368))), 0x12e733fdu);
L_12e733fd:;
  /* 12e733fd jmp 0x12e733ca */
  goto L_12e733ca;
L_12e733ff:;
  /* 12e733ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73401 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73404 mov ecx, dword ptr [eax*4 + 0x12e90ea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e7340b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7340c call 0x12e73ee0 */
  push32(0x12e73411u); f_12e73ee0();
  /* 12e73411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73414 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73417 mov dword ptr [edx*4 + 0x12e90ea0], 0 */
  w32((uint32_t)(EDX*4 + 0x12e90ea0), (0x0u));
L_12e73422:;
  /* 12e73422 jmp 0x12e7339f */
  goto L_12e7339f;
L_12e73427:;
  /* 12e73427 mov esp, ebp */
  ESP = (EBP);
  /* 12e73429 pop ebp */
  EBP = (pop32());
  /* 12e7342a ret  */
  ESPCHK(0x12e73390u, _esp0);
  ESP += 4; return;
}

/* FUN_10003430 @ 0x12e73430 (29 bytes, 13 insns) */
void f_12e73430(void) {
  FTRACE(0x12e73430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73430 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73431 mov ebp, esp */
  EBP = (ESP);
  /* 12e73433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73435 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73437 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73439 mov eax, dword ptr [0x12e8f6b8] */
  EAX = (r32((uint32_t)(0x12e8f6b8)));
  /* 12e7343e push eax */
  push32((uint32_t)(EAX));
  /* 12e7343f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73442 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73443 call 0x12e734a0 */
  push32(0x12e73448u); f_12e734a0();
  /* 12e73448 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7344b pop ebp */
  EBP = (pop32());
  /* 12e7344c ret  */
  ESPCHK(0x12e73430u, _esp0);
  ESP += 4; return;
}

/* FUN_10003450 @ 0x12e73450 (35 bytes, 16 insns) */
void f_12e73450(void) {
  FTRACE(0x12e73450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73450 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73451 mov ebp, esp */
  EBP = (ESP);
  /* 12e73453 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e73456 push eax */
  push32((uint32_t)(EAX));
  /* 12e73457 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7345a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7345b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7345e push edx */
  push32((uint32_t)(EDX));
  /* 12e7345f mov eax, dword ptr [0x12e8f6b8] */
  EAX = (r32((uint32_t)(0x12e8f6b8)));
  /* 12e73464 push eax */
  push32((uint32_t)(EAX));
  /* 12e73465 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73468 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73469 call 0x12e734a0 */
  push32(0x12e7346eu); f_12e734a0();
  /* 12e7346e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73471 pop ebp */
  EBP = (pop32());
  /* 12e73472 ret  */
  ESPCHK(0x12e73450u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x12e73480 (27 bytes, 13 insns) */
void f_12e73480(void) {
  FTRACE(0x12e73480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73480 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73481 mov ebp, esp */
  EBP = (ESP);
  /* 12e73483 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73485 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73487 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7348c push eax */
  push32((uint32_t)(EAX));
  /* 12e7348d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73490 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73491 call 0x12e734a0 */
  push32(0x12e73496u); f_12e734a0();
  /* 12e73496 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73499 pop ebp */
  EBP = (pop32());
  /* 12e7349a ret  */
  ESPCHK(0x12e73480u, _esp0);
  ESP += 4; return;
}

/* FUN_100034a0 @ 0x12e734a0 (94 bytes, 38 insns) */
void f_12e734a0(void) {
  FTRACE(0x12e734a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e734a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e734a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e734a3 push ecx */
  push32((uint32_t)(ECX));
L_12e734a4:;
  /* 12e734a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e734a6 call 0x12e76e50 */
  push32(0x12e734abu); f_12e76e50();
  /* 12e734ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e734ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e734b1 push eax */
  push32((uint32_t)(EAX));
  /* 12e734b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e734b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e734b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e734b9 push edx */
  push32((uint32_t)(EDX));
  /* 12e734ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e734bd push eax */
  push32((uint32_t)(EAX));
  /* 12e734be call 0x12e73520 */
  push32(0x12e734c3u); f_12e73520();
  /* 12e734c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e734c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e734c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e734cb call 0x12e76ef0 */
  push32(0x12e734d0u); f_12e76ef0();
  /* 12e734d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e734d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e734d7 jne 0x12e734df */
  if (!C.zf) goto L_12e734df;
  /* 12e734d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e734dd jne 0x12e734e4 */
  if (!C.zf) goto L_12e734e4;
L_12e734df:;
  /* 12e734df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e734e2 jmp 0x12e734fa */
  goto L_12e734fa;
L_12e734e4:;
  /* 12e734e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e734e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e734e8 call 0x12e77190 */
  push32(0x12e734edu); f_12e77190();
  /* 12e734ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e734f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e734f2 jne 0x12e734f8 */
  if (!C.zf) goto L_12e734f8;
  /* 12e734f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e734f6 jmp 0x12e734fa */
  goto L_12e734fa;
L_12e734f8:;
  /* 12e734f8 jmp 0x12e734a4 */
  goto L_12e734a4;
L_12e734fa:;
  /* 12e734fa mov esp, ebp */
  ESP = (EBP);
  /* 12e734fc pop ebp */
  EBP = (pop32());
  /* 12e734fd ret  */
  ESPCHK(0x12e734a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003500 @ 0x12e73500 (23 bytes, 11 insns) */
void f_12e73500(void) {
  FTRACE(0x12e73500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73500 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73501 mov ebp, esp */
  EBP = (ESP);
  /* 12e73503 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73507 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7350c push eax */
  push32((uint32_t)(EAX));
  /* 12e7350d call 0x12e73520 */
  push32(0x12e73512u); f_12e73520();
  /* 12e73512 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73515 pop ebp */
  EBP = (pop32());
  /* 12e73516 ret  */
  ESPCHK(0x12e73500u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x12e73520 (787 bytes, 254 insns) */
void f_12e73520(void) {
  FTRACE(0x12e73520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73520 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73521 mov ebp, esp */
  EBP = (ESP);
  /* 12e73523 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73526 push ebx */
  push32((uint32_t)(EBX));
  /* 12e73527 push esi */
  push32((uint32_t)(ESI));
  /* 12e73528 push edi */
  push32((uint32_t)(EDI));
  /* 12e73529 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e73530 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e73535 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e73538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7353a je 0x12e7356c */
  if (C.zf) goto L_12e7356c;
L_12e7353c:;
  /* 12e7353c call 0x12e745f0 */
  push32(0x12e73541u); f_12e745f0();
  /* 12e73541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73543 jne 0x12e73566 */
  if (!C.zf) goto L_12e73566;
  /* 12e73545 push 0x12e8a558 */
  push32((uint32_t)(0x12e8a558u));
  /* 12e7354a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7354c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12e73551 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73556 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73558 call 0x12e72510 */
  push32(0x12e7355du); f_12e72510();
  /* 12e7355d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73560 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73563 jne 0x12e73566 */
  if (!C.zf) goto L_12e73566;
  /* 12e73565 int3  */
  x86_unimpl("int3 @ 0x12e73565");
L_12e73566:;
  /* 12e73566 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e73568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7356a jne 0x12e7353c */
  if (!C.zf) goto L_12e7353c;
L_12e7356c:;
  /* 12e7356c mov edx, dword ptr [0x12e8daa8] */
  EDX = (r32((uint32_t)(0x12e8daa8)));
  /* 12e73572 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e73575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73578 cmp eax, dword ptr [0x12e8daac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8daac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7357e jne 0x12e73581 */
  if (!C.zf) goto L_12e73581;
  /* 12e73580 int3  */
  x86_unimpl("int3 @ 0x12e73580");
L_12e73581:;
  /* 12e73581 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e73584 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73585 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73588 push edx */
  push32((uint32_t)(EDX));
  /* 12e73589 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7358c push eax */
  push32((uint32_t)(EAX));
  /* 12e7358d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73590 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73594 push edx */
  push32((uint32_t)(EDX));
  /* 12e73595 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73597 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73599 call dword ptr [0x12e8dcb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8dcb0))), 0x12e7359fu);
  /* 12e7359f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e735a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e735a4 jne 0x12e73604 */
  if (!C.zf) goto L_12e73604;
  /* 12e735a6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e735aa je 0x12e735d7 */
  if (C.zf) goto L_12e735d7;
L_12e735ac:;
  /* 12e735ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e735af push eax */
  push32((uint32_t)(EAX));
  /* 12e735b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e735b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e735b4 push 0x12e8a514 */
  push32((uint32_t)(0x12e8a514u));
  /* 12e735b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735c1 call 0x12e72510 */
  push32(0x12e735c6u); f_12e72510();
  /* 12e735c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e735c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e735cc jne 0x12e735cf */
  if (!C.zf) goto L_12e735cf;
  /* 12e735ce int3  */
  x86_unimpl("int3 @ 0x12e735ce");
L_12e735cf:;
  /* 12e735cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e735d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e735d3 jne 0x12e735ac */
  if (!C.zf) goto L_12e735ac;
  /* 12e735d5 jmp 0x12e735fd */
  goto L_12e735fd;
L_12e735d7:;
  /* 12e735d7 push 0x12e8a4f0 */
  push32((uint32_t)(0x12e8a4f0u));
  /* 12e735dc push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e735e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e735e9 call 0x12e72510 */
  push32(0x12e735eeu); f_12e72510();
  /* 12e735ee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e735f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e735f4 jne 0x12e735f7 */
  if (!C.zf) goto L_12e735f7;
  /* 12e735f6 int3  */
  x86_unimpl("int3 @ 0x12e735f6");
L_12e735f7:;
  /* 12e735f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e735f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e735fb jne 0x12e735d7 */
  if (!C.zf) goto L_12e735d7;
L_12e735fd:;
  /* 12e735fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e735ff jmp 0x12e7382c */
  goto L_12e7382c;
L_12e73604:;
  /* 12e73604 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73607 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7360d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73610 je 0x12e73626 */
  if (C.zf) goto L_12e73626;
  /* 12e73612 mov edx, dword ptr [0x12e8daa4] */
  EDX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e73618 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7361b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7361d jne 0x12e73626 */
  if (!C.zf) goto L_12e73626;
  /* 12e7361f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12e73626:;
  /* 12e73626 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7362a ja 0x12e73637 */
  if ((!C.cf&&!C.zf)) goto L_12e73637;
  /* 12e7362c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7362f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73632 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73635 jbe 0x12e73663 */
  if ((C.cf||C.zf)) goto L_12e73663;
L_12e73637:;
  /* 12e73637 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7363a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7363b push 0x12e8a4c8 */
  push32((uint32_t)(0x12e8a4c8u));
  /* 12e73640 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73644 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73646 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73648 call 0x12e72510 */
  push32(0x12e7364du); f_12e72510();
  /* 12e7364d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73650 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73653 jne 0x12e73656 */
  if (!C.zf) goto L_12e73656;
  /* 12e73655 int3  */
  x86_unimpl("int3 @ 0x12e73655");
L_12e73656:;
  /* 12e73656 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e73658 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7365a jne 0x12e73637 */
  if (!C.zf) goto L_12e73637;
  /* 12e7365c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7365e jmp 0x12e7382c */
  goto L_12e7382c;
L_12e73663:;
  /* 12e73663 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73666 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7366b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7366e je 0x12e736b0 */
  if (C.zf) goto L_12e736b0;
  /* 12e73670 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73674 je 0x12e736b0 */
  if (C.zf) goto L_12e736b0;
  /* 12e73676 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73679 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7367f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73682 je 0x12e736b0 */
  if (C.zf) goto L_12e736b0;
  /* 12e73684 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73688 je 0x12e736b0 */
  if (C.zf) goto L_12e736b0;
L_12e7368a:;
  /* 12e7368a push 0x12e8a494 */
  push32((uint32_t)(0x12e8a494u));
  /* 12e7368f push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e73694 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73698 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7369a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7369c call 0x12e72510 */
  push32(0x12e736a1u); f_12e72510();
  /* 12e736a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e736a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e736a7 jne 0x12e736aa */
  if (!C.zf) goto L_12e736aa;
  /* 12e736a9 int3  */
  x86_unimpl("int3 @ 0x12e736a9");
L_12e736aa:;
  /* 12e736aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e736ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e736ae jne 0x12e7368a */
  if (!C.zf) goto L_12e7368a;
L_12e736b0:;
  /* 12e736b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e736b3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e736b6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e736b9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e736bc push ecx */
  push32((uint32_t)(ECX));
  /* 12e736bd call 0x12e772a0 */
  push32(0x12e736c2u); f_12e772a0();
  /* 12e736c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e736c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e736c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e736cc jne 0x12e736d5 */
  if (!C.zf) goto L_12e736d5;
  /* 12e736ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e736d0 jmp 0x12e7382c */
  goto L_12e7382c;
L_12e736d5:;
  /* 12e736d5 mov edx, dword ptr [0x12e8daa8] */
  EDX = (r32((uint32_t)(0x12e8daa8)));
  /* 12e736db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e736de mov dword ptr [0x12e8daa8], edx */
  w32((uint32_t)(0x12e8daa8), (EDX));
  /* 12e736e4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e736e8 je 0x12e73733 */
  if (C.zf) goto L_12e73733;
  /* 12e736ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e736ed mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e736f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e736f6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12e736fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73700 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12e73707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7370a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12e73711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73714 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73717 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12e7371a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7371d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12e73724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73727 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12e7372e jmp 0x12e737d3 */
  goto L_12e737d3;
L_12e73733:;
  /* 12e73733 mov edx, dword ptr [0x12e8f518] */
  EDX = (r32((uint32_t)(0x12e8f518)));
  /* 12e73739 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7373c mov dword ptr [0x12e8f518], edx */
  w32((uint32_t)(0x12e8f518), (EDX));
  /* 12e73742 mov eax, dword ptr [0x12e8f520] */
  EAX = (r32((uint32_t)(0x12e8f520)));
  /* 12e73747 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7374a mov dword ptr [0x12e8f520], eax */
  w32((uint32_t)(0x12e8f520), (EAX));
  /* 12e7374f mov ecx, dword ptr [0x12e8f520] */
  ECX = (r32((uint32_t)(0x12e8f520)));
  /* 12e73755 cmp ecx, dword ptr [0x12e8f524] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8f524))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7375b jbe 0x12e73769 */
  if ((C.cf||C.zf)) goto L_12e73769;
  /* 12e7375d mov edx, dword ptr [0x12e8f520] */
  EDX = (r32((uint32_t)(0x12e8f520)));
  /* 12e73763 mov dword ptr [0x12e8f524], edx */
  w32((uint32_t)(0x12e8f524), (EDX));
L_12e73769:;
  /* 12e73769 cmp dword ptr [0x12e8f51c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f51c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73770 je 0x12e7377f */
  if (C.zf) goto L_12e7377f;
  /* 12e73772 mov eax, dword ptr [0x12e8f51c] */
  EAX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e73777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7377a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e7377d jmp 0x12e73788 */
  goto L_12e73788;
L_12e7377f:;
  /* 12e7377f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73782 mov dword ptr [0x12e8f514], edx */
  w32((uint32_t)(0x12e8f514), (EDX));
L_12e73788:;
  /* 12e73788 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7378b mov ecx, dword ptr [0x12e8f51c] */
  ECX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e73791 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e73793 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73796 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12e7379d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e737a3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12e737a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e737ac mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12e737af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e737b5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12e737b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e737be mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12e737c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e737c7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12e737ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737cd mov dword ptr [0x12e8f51c], ecx */
  w32((uint32_t)(0x12e8f51c), (ECX));
L_12e737d3:;
  /* 12e737d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e737d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e737d7 mov dl, byte ptr [0x12e8dab0] */
  DL = (r8((uint32_t)(0x12e8dab0)));
  /* 12e737dd push edx */
  push32((uint32_t)(EDX));
  /* 12e737de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737e1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e737e4 push eax */
  push32((uint32_t)(EAX));
  /* 12e737e5 call 0x12e771c0 */
  push32(0x12e737eau); f_12e771c0();
  /* 12e737ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e737ed push 4 */
  push32((uint32_t)(0x4u));
  /* 12e737ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e737f1 mov cl, byte ptr [0x12e8dab0] */
  CL = (r8((uint32_t)(0x12e8dab0)));
  /* 12e737f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e737f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e737fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e737fe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12e73802 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73803 call 0x12e771c0 */
  push32(0x12e73808u); f_12e771c0();
  /* 12e73808 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7380b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7380e push edx */
  push32((uint32_t)(EDX));
  /* 12e7380f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73811 mov al, byte ptr [0x12e8dab2] */
  AL = (r8((uint32_t)(0x12e8dab2)));
  /* 12e73816 push eax */
  push32((uint32_t)(EAX));
  /* 12e73817 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7381a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7381d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7381e call 0x12e771c0 */
  push32(0x12e73823u); f_12e771c0();
  /* 12e73823 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73826 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73829 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12e7382c:;
  /* 12e7382c pop edi */
  EDI = (pop32());
  /* 12e7382d pop esi */
  ESI = (pop32());
  /* 12e7382e pop ebx */
  EBX = (pop32());
  /* 12e7382f mov esp, ebp */
  ESP = (EBP);
  /* 12e73831 pop ebp */
  EBP = (pop32());
  /* 12e73832 ret  */
  ESPCHK(0x12e73520u, _esp0);
  ESP += 4; return;
}

/* FUN_10003840 @ 0x12e73840 (27 bytes, 13 insns) */
void f_12e73840(void) {
  FTRACE(0x12e73840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73840 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73841 mov ebp, esp */
  EBP = (ESP);
  /* 12e73843 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73845 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73847 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73849 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7384c push eax */
  push32((uint32_t)(EAX));
  /* 12e7384d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73850 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73851 call 0x12e73860 */
  push32(0x12e73856u); f_12e73860();
  /* 12e73856 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73859 pop ebp */
  EBP = (pop32());
  /* 12e7385a ret  */
  ESPCHK(0x12e73840u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12e73860 (96 bytes, 37 insns) */
void f_12e73860(void) {
  FTRACE(0x12e73860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73860 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73861 mov ebp, esp */
  EBP = (ESP);
  /* 12e73863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73866 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73869 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7386d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12e73870 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e73873 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73874 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e73877 push edx */
  push32((uint32_t)(EDX));
  /* 12e73878 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7387b push eax */
  push32((uint32_t)(EAX));
  /* 12e7387c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7387f push ecx */
  push32((uint32_t)(ECX));
  /* 12e73880 call 0x12e73450 */
  push32(0x12e73885u); f_12e73450();
  /* 12e73885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73888 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7388b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7388f je 0x12e738b9 */
  if (C.zf) goto L_12e738b9;
  /* 12e73891 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73894 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e73897 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7389a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7389d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e738a0:;
  /* 12e738a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e738a3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e738a6 jae 0x12e738b9 */
  if (!C.cf) goto L_12e738b9;
  /* 12e738a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e738ab mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e738ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e738b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e738b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e738b7 jmp 0x12e738a0 */
  goto L_12e738a0;
L_12e738b9:;
  /* 12e738b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e738bc mov esp, ebp */
  ESP = (EBP);
  /* 12e738be pop ebp */
  EBP = (pop32());
  /* 12e738bf ret  */
  ESPCHK(0x12e73860u, _esp0);
  ESP += 4; return;
}

/* FUN_100038c0 @ 0x12e738c0 (27 bytes, 13 insns) */
void f_12e738c0(void) {
  FTRACE(0x12e738c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e738c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e738c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e738c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e738c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e738c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e738c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e738cc push eax */
  push32((uint32_t)(EAX));
  /* 12e738cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e738d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e738d1 call 0x12e738e0 */
  push32(0x12e738d6u); f_12e738e0();
  /* 12e738d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e738d9 pop ebp */
  EBP = (pop32());
  /* 12e738da ret  */
  ESPCHK(0x12e738c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x12e738e0 (64 bytes, 27 insns) */
void f_12e738e0(void) {
  FTRACE(0x12e738e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e738e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e738e1 mov ebp, esp */
  EBP = (ESP);
  /* 12e738e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e738e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e738e6 call 0x12e76e50 */
  push32(0x12e738ebu); f_12e76e50();
  /* 12e738eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e738ee push 1 */
  push32((uint32_t)(0x1u));
  /* 12e738f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e738f3 push eax */
  push32((uint32_t)(EAX));
  /* 12e738f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e738f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e738f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e738fb push edx */
  push32((uint32_t)(EDX));
  /* 12e738fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e738ff push eax */
  push32((uint32_t)(EAX));
  /* 12e73900 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73903 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73904 call 0x12e73920 */
  push32(0x12e73909u); f_12e73920();
  /* 12e73909 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7390c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7390f push 9 */
  push32((uint32_t)(0x9u));
  /* 12e73911 call 0x12e76ef0 */
  push32(0x12e73916u); f_12e76ef0();
  /* 12e73916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7391c mov esp, ebp */
  ESP = (EBP);
  /* 12e7391e pop ebp */
  EBP = (pop32());
  /* 12e7391f ret  */
  ESPCHK(0x12e738e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003920 @ 0x12e73920 (1297 bytes, 431 insns) */
void f_12e73920(void) {
  FTRACE(0x12e73920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73920 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73921 mov ebp, esp */
  EBP = (ESP);
  /* 12e73923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73926 push ebx */
  push32((uint32_t)(EBX));
  /* 12e73927 push esi */
  push32((uint32_t)(ESI));
  /* 12e73928 push edi */
  push32((uint32_t)(EDI));
  /* 12e73929 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12e73930 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73934 jne 0x12e73953 */
  if (!C.zf) goto L_12e73953;
  /* 12e73936 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e73939 push eax */
  push32((uint32_t)(EAX));
  /* 12e7393a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7393d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7393e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73941 push edx */
  push32((uint32_t)(EDX));
  /* 12e73942 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73945 push eax */
  push32((uint32_t)(EAX));
  /* 12e73946 call 0x12e73450 */
  push32(0x12e7394bu); f_12e73450();
  /* 12e7394b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7394e jmp 0x12e73e2a */
  goto L_12e73e2a;
L_12e73953:;
  /* 12e73953 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73957 je 0x12e73976 */
  if (C.zf) goto L_12e73976;
  /* 12e73959 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7395d jne 0x12e73976 */
  if (!C.zf) goto L_12e73976;
  /* 12e7395f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73962 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73966 push edx */
  push32((uint32_t)(EDX));
  /* 12e73967 call 0x12e73ee0 */
  push32(0x12e7396cu); f_12e73ee0();
  /* 12e7396c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7396f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73971 jmp 0x12e73e2a */
  goto L_12e73e2a;
L_12e73976:;
  /* 12e73976 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e7397b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7397e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73980 je 0x12e739b2 */
  if (C.zf) goto L_12e739b2;
L_12e73982:;
  /* 12e73982 call 0x12e745f0 */
  push32(0x12e73987u); f_12e745f0();
  /* 12e73987 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73989 jne 0x12e739ac */
  if (!C.zf) goto L_12e739ac;
  /* 12e7398b push 0x12e8a558 */
  push32((uint32_t)(0x12e8a558u));
  /* 12e73990 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73992 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12e73997 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e7399c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7399e call 0x12e72510 */
  push32(0x12e739a3u); f_12e72510();
  /* 12e739a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e739a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e739a9 jne 0x12e739ac */
  if (!C.zf) goto L_12e739ac;
  /* 12e739ab int3  */
  x86_unimpl("int3 @ 0x12e739ab");
L_12e739ac:;
  /* 12e739ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e739ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e739b0 jne 0x12e73982 */
  if (!C.zf) goto L_12e73982;
L_12e739b2:;
  /* 12e739b2 mov edx, dword ptr [0x12e8daa8] */
  EDX = (r32((uint32_t)(0x12e8daa8)));
  /* 12e739b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e739bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e739be cmp eax, dword ptr [0x12e8daac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8daac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e739c4 jne 0x12e739c7 */
  if (!C.zf) goto L_12e739c7;
  /* 12e739c6 int3  */
  x86_unimpl("int3 @ 0x12e739c6");
L_12e739c7:;
  /* 12e739c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e739ca push ecx */
  push32((uint32_t)(ECX));
  /* 12e739cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e739ce push edx */
  push32((uint32_t)(EDX));
  /* 12e739cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e739d2 push eax */
  push32((uint32_t)(EAX));
  /* 12e739d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e739d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e739d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e739da push edx */
  push32((uint32_t)(EDX));
  /* 12e739db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e739de push eax */
  push32((uint32_t)(EAX));
  /* 12e739df push 2 */
  push32((uint32_t)(0x2u));
  /* 12e739e1 call dword ptr [0x12e8dcb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8dcb0))), 0x12e739e7u);
  /* 12e739e7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e739ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e739ec jne 0x12e73a4c */
  if (!C.zf) goto L_12e73a4c;
  /* 12e739ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e739f2 je 0x12e73a1f */
  if (C.zf) goto L_12e73a1f;
L_12e739f4:;
  /* 12e739f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e739f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e739f8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e739fb push edx */
  push32((uint32_t)(EDX));
  /* 12e739fc push 0x12e8a6d4 */
  push32((uint32_t)(0x12e8a6d4u));
  /* 12e73a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a09 call 0x12e72510 */
  push32(0x12e73a0eu); f_12e72510();
  /* 12e73a0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73a11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73a14 jne 0x12e73a17 */
  if (!C.zf) goto L_12e73a17;
  /* 12e73a16 int3  */
  x86_unimpl("int3 @ 0x12e73a16");
L_12e73a17:;
  /* 12e73a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73a1b jne 0x12e739f4 */
  if (!C.zf) goto L_12e739f4;
  /* 12e73a1d jmp 0x12e73a45 */
  goto L_12e73a45;
L_12e73a1f:;
  /* 12e73a1f push 0x12e8a6b0 */
  push32((uint32_t)(0x12e8a6b0u));
  /* 12e73a24 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e73a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a31 call 0x12e72510 */
  push32(0x12e73a36u); f_12e72510();
  /* 12e73a36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73a39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73a3c jne 0x12e73a3f */
  if (!C.zf) goto L_12e73a3f;
  /* 12e73a3e int3  */
  x86_unimpl("int3 @ 0x12e73a3e");
L_12e73a3f:;
  /* 12e73a3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e73a41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e73a43 jne 0x12e73a1f */
  if (!C.zf) goto L_12e73a1f;
L_12e73a45:;
  /* 12e73a45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73a47 jmp 0x12e73e2a */
  goto L_12e73e2a;
L_12e73a4c:;
  /* 12e73a4c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73a50 jbe 0x12e73a7e */
  if ((C.cf||C.zf)) goto L_12e73a7e;
L_12e73a52:;
  /* 12e73a52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73a55 push edx */
  push32((uint32_t)(EDX));
  /* 12e73a56 push 0x12e8a680 */
  push32((uint32_t)(0x12e8a680u));
  /* 12e73a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73a61 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73a63 call 0x12e72510 */
  push32(0x12e73a68u); f_12e72510();
  /* 12e73a68 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73a6b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73a6e jne 0x12e73a71 */
  if (!C.zf) goto L_12e73a71;
  /* 12e73a70 int3  */
  x86_unimpl("int3 @ 0x12e73a70");
L_12e73a71:;
  /* 12e73a71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73a75 jne 0x12e73a52 */
  if (!C.zf) goto L_12e73a52;
  /* 12e73a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73a79 jmp 0x12e73e2a */
  goto L_12e73e2a;
L_12e73a7e:;
  /* 12e73a7e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73a82 je 0x12e73ac6 */
  if (C.zf) goto L_12e73ac6;
  /* 12e73a84 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73a87 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e73a8d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73a90 je 0x12e73ac6 */
  if (C.zf) goto L_12e73ac6;
  /* 12e73a92 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73a95 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e73a9b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73a9e je 0x12e73ac6 */
  if (C.zf) goto L_12e73ac6;
L_12e73aa0:;
  /* 12e73aa0 push 0x12e8a494 */
  push32((uint32_t)(0x12e8a494u));
  /* 12e73aa5 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e73aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73aac push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73aae push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73ab2 call 0x12e72510 */
  push32(0x12e73ab7u); f_12e72510();
  /* 12e73ab7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73aba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73abd jne 0x12e73ac0 */
  if (!C.zf) goto L_12e73ac0;
  /* 12e73abf int3  */
  x86_unimpl("int3 @ 0x12e73abf");
L_12e73ac0:;
  /* 12e73ac0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73ac4 jne 0x12e73aa0 */
  if (!C.zf) goto L_12e73aa0;
L_12e73ac6:;
  /* 12e73ac6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73aca call 0x12e74a50 */
  push32(0x12e73acfu); f_12e74a50();
  /* 12e73acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73ad4 jne 0x12e73af7 */
  if (!C.zf) goto L_12e73af7;
  /* 12e73ad6 push 0x12e8a65c */
  push32((uint32_t)(0x12e8a65cu));
  /* 12e73adb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73add push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12e73ae2 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73ae9 call 0x12e72510 */
  push32(0x12e73aeeu); f_12e72510();
  /* 12e73aee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73af1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73af4 jne 0x12e73af7 */
  if (!C.zf) goto L_12e73af7;
  /* 12e73af6 int3  */
  x86_unimpl("int3 @ 0x12e73af6");
L_12e73af7:;
  /* 12e73af7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e73af9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e73afb jne 0x12e73ac6 */
  if (!C.zf) goto L_12e73ac6;
  /* 12e73afd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73b00 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73b03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e73b06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73b09 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b0d jne 0x12e73b16 */
  if (!C.zf) goto L_12e73b16;
  /* 12e73b0f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12e73b16:;
  /* 12e73b16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b1a je 0x12e73b5a */
  if (C.zf) goto L_12e73b5a;
L_12e73b1c:;
  /* 12e73b1c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73b1f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b26 jne 0x12e73b31 */
  if (!C.zf) goto L_12e73b31;
  /* 12e73b28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73b2b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b2f je 0x12e73b52 */
  if (C.zf) goto L_12e73b52;
L_12e73b31:;
  /* 12e73b31 push 0x12e8a614 */
  push32((uint32_t)(0x12e8a614u));
  /* 12e73b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73b38 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12e73b3d push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73b42 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73b44 call 0x12e72510 */
  push32(0x12e73b49u); f_12e72510();
  /* 12e73b49 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73b4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b4f jne 0x12e73b52 */
  if (!C.zf) goto L_12e73b52;
  /* 12e73b51 int3  */
  x86_unimpl("int3 @ 0x12e73b51");
L_12e73b52:;
  /* 12e73b52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e73b54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e73b56 jne 0x12e73b1c */
  if (!C.zf) goto L_12e73b1c;
  /* 12e73b58 jmp 0x12e73bbe */
  goto L_12e73bbe;
L_12e73b5a:;
  /* 12e73b5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73b5d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e73b60 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e73b65 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b68 jne 0x12e73b7f */
  if (!C.zf) goto L_12e73b7f;
  /* 12e73b6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73b6d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e73b73 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b76 jne 0x12e73b7f */
  if (!C.zf) goto L_12e73b7f;
  /* 12e73b78 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12e73b7f:;
  /* 12e73b7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73b82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e73b85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e73b8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73b8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e73b93 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73b95 je 0x12e73bb8 */
  if (C.zf) goto L_12e73bb8;
  /* 12e73b97 push 0x12e8a5d8 */
  push32((uint32_t)(0x12e8a5d8u));
  /* 12e73b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73b9e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12e73ba3 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73ba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73baa call 0x12e72510 */
  push32(0x12e73bafu); f_12e72510();
  /* 12e73baf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73bb2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73bb5 jne 0x12e73bb8 */
  if (!C.zf) goto L_12e73bb8;
  /* 12e73bb7 int3  */
  x86_unimpl("int3 @ 0x12e73bb7");
L_12e73bb8:;
  /* 12e73bb8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e73bba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e73bbc jne 0x12e73b7f */
  if (!C.zf) goto L_12e73b7f;
L_12e73bbe:;
  /* 12e73bbe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73bc2 je 0x12e73be9 */
  if (C.zf) goto L_12e73be9;
  /* 12e73bc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73bc7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73bca push eax */
  push32((uint32_t)(EAX));
  /* 12e73bcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73bce push ecx */
  push32((uint32_t)(ECX));
  /* 12e73bcf call 0x12e773d0 */
  push32(0x12e73bd4u); f_12e773d0();
  /* 12e73bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73bd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e73bda cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73bde jne 0x12e73be7 */
  if (!C.zf) goto L_12e73be7;
  /* 12e73be0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73be2 jmp 0x12e73e2a */
  goto L_12e73e2a;
L_12e73be7:;
  /* 12e73be7 jmp 0x12e73c0c */
  goto L_12e73c0c;
L_12e73be9:;
  /* 12e73be9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73bec add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73bef push edx */
  push32((uint32_t)(EDX));
  /* 12e73bf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e73bf3 push eax */
  push32((uint32_t)(EAX));
  /* 12e73bf4 call 0x12e77320 */
  push32(0x12e73bf9u); f_12e77320();
  /* 12e73bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73bfc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e73bff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73c03 jne 0x12e73c0c */
  if (!C.zf) goto L_12e73c0c;
  /* 12e73c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73c07 jmp 0x12e73e2a */
  goto L_12e73e2a;
L_12e73c0c:;
  /* 12e73c0c mov ecx, dword ptr [0x12e8daa8] */
  ECX = (r32((uint32_t)(0x12e8daa8)));
  /* 12e73c12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73c15 mov dword ptr [0x12e8daa8], ecx */
  w32((uint32_t)(0x12e8daa8), (ECX));
  /* 12e73c1b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73c1f jne 0x12e73c77 */
  if (!C.zf) goto L_12e73c77;
  /* 12e73c21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73c24 mov eax, dword ptr [0x12e8f518] */
  EAX = (r32((uint32_t)(0x12e8f518)));
  /* 12e73c29 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73c2c mov dword ptr [0x12e8f518], eax */
  w32((uint32_t)(0x12e8f518), (EAX));
  /* 12e73c31 mov ecx, dword ptr [0x12e8f518] */
  ECX = (r32((uint32_t)(0x12e8f518)));
  /* 12e73c37 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73c3a mov dword ptr [0x12e8f518], ecx */
  w32((uint32_t)(0x12e8f518), (ECX));
  /* 12e73c40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73c43 mov eax, dword ptr [0x12e8f520] */
  EAX = (r32((uint32_t)(0x12e8f520)));
  /* 12e73c48 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73c4b mov dword ptr [0x12e8f520], eax */
  w32((uint32_t)(0x12e8f520), (EAX));
  /* 12e73c50 mov ecx, dword ptr [0x12e8f520] */
  ECX = (r32((uint32_t)(0x12e8f520)));
  /* 12e73c56 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73c59 mov dword ptr [0x12e8f520], ecx */
  w32((uint32_t)(0x12e8f520), (ECX));
  /* 12e73c5f mov edx, dword ptr [0x12e8f520] */
  EDX = (r32((uint32_t)(0x12e8f520)));
  /* 12e73c65 cmp edx, dword ptr [0x12e8f524] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8f524))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73c6b jbe 0x12e73c77 */
  if ((C.cf||C.zf)) goto L_12e73c77;
  /* 12e73c6d mov eax, dword ptr [0x12e8f520] */
  EAX = (r32((uint32_t)(0x12e8f520)));
  /* 12e73c72 mov dword ptr [0x12e8f524], eax */
  w32((uint32_t)(0x12e8f524), (EAX));
L_12e73c77:;
  /* 12e73c77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73c7a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73c7d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e73c80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73c83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73c86 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73c89 jbe 0x12e73caf */
  if ((C.cf||C.zf)) goto L_12e73caf;
  /* 12e73c8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73c8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73c91 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73c94 push edx */
  push32((uint32_t)(EDX));
  /* 12e73c95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73c97 mov al, byte ptr [0x12e8dab2] */
  AL = (r8((uint32_t)(0x12e8dab2)));
  /* 12e73c9c push eax */
  push32((uint32_t)(EAX));
  /* 12e73c9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73ca0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73ca3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73ca6 push edx */
  push32((uint32_t)(EDX));
  /* 12e73ca7 call 0x12e771c0 */
  push32(0x12e73cacu); f_12e771c0();
  /* 12e73cac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e73caf:;
  /* 12e73caf push 4 */
  push32((uint32_t)(0x4u));
  /* 12e73cb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73cb3 mov al, byte ptr [0x12e8dab0] */
  AL = (r8((uint32_t)(0x12e8dab0)));
  /* 12e73cb8 push eax */
  push32((uint32_t)(EAX));
  /* 12e73cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73cbc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73cbf push ecx */
  push32((uint32_t)(ECX));
  /* 12e73cc0 call 0x12e771c0 */
  push32(0x12e73cc5u); f_12e771c0();
  /* 12e73cc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73cc8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73ccc jne 0x12e73ce9 */
  if (!C.zf) goto L_12e73ce9;
  /* 12e73cce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73cd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e73cd4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e73cd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73cda mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e73cdd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12e73ce0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73ce3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e73ce6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12e73ce9:;
  /* 12e73ce9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73cec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73cef mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12e73cf2:;
  /* 12e73cf2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73cf6 jne 0x12e73d27 */
  if (!C.zf) goto L_12e73d27;
  /* 12e73cf8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73cfc jne 0x12e73d06 */
  if (!C.zf) goto L_12e73d06;
  /* 12e73cfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73d01 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d04 je 0x12e73d27 */
  if (C.zf) goto L_12e73d27;
L_12e73d06:;
  /* 12e73d06 push 0x12e8a5a4 */
  push32((uint32_t)(0x12e8a5a4u));
  /* 12e73d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73d0d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12e73d12 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73d17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73d19 call 0x12e72510 */
  push32(0x12e73d1eu); f_12e72510();
  /* 12e73d1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73d21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d24 jne 0x12e73d27 */
  if (!C.zf) goto L_12e73d27;
  /* 12e73d26 int3  */
  x86_unimpl("int3 @ 0x12e73d26");
L_12e73d27:;
  /* 12e73d27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e73d29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e73d2b jne 0x12e73cf2 */
  if (!C.zf) goto L_12e73cf2;
  /* 12e73d2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73d30 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d33 je 0x12e73d3b */
  if (C.zf) goto L_12e73d3b;
  /* 12e73d35 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d39 je 0x12e73d43 */
  if (C.zf) goto L_12e73d43;
L_12e73d3b:;
  /* 12e73d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73d3e jmp 0x12e73e2a */
  goto L_12e73e2a;
L_12e73d43:;
  /* 12e73d43 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73d46 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d49 je 0x12e73d5b */
  if (C.zf) goto L_12e73d5b;
  /* 12e73d4b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73d4e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e73d50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73d53 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e73d56 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e73d59 jmp 0x12e73d97 */
  goto L_12e73d97;
L_12e73d5b:;
  /* 12e73d5b mov eax, dword ptr [0x12e8f514] */
  EAX = (r32((uint32_t)(0x12e8f514)));
  /* 12e73d60 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d63 je 0x12e73d86 */
  if (C.zf) goto L_12e73d86;
  /* 12e73d65 push 0x12e8a588 */
  push32((uint32_t)(0x12e8a588u));
  /* 12e73d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73d6c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12e73d71 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73d76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73d78 call 0x12e72510 */
  push32(0x12e73d7du); f_12e72510();
  /* 12e73d7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73d80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d83 jne 0x12e73d86 */
  if (!C.zf) goto L_12e73d86;
  /* 12e73d85 int3  */
  x86_unimpl("int3 @ 0x12e73d85");
L_12e73d86:;
  /* 12e73d86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e73d88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e73d8a jne 0x12e73d5b */
  if (!C.zf) goto L_12e73d5b;
  /* 12e73d8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73d8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e73d92 mov dword ptr [0x12e8f514], eax */
  w32((uint32_t)(0x12e8f514), (EAX));
L_12e73d97:;
  /* 12e73d97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73d9a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73d9e je 0x12e73daf */
  if (C.zf) goto L_12e73daf;
  /* 12e73da0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73da3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e73da6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73da9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e73dab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e73dad jmp 0x12e73dea */
  goto L_12e73dea;
L_12e73daf:;
  /* 12e73daf mov eax, dword ptr [0x12e8f51c] */
  EAX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e73db4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73db7 je 0x12e73dda */
  if (C.zf) goto L_12e73dda;
  /* 12e73db9 push 0x12e8a56c */
  push32((uint32_t)(0x12e8a56cu));
  /* 12e73dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73dc0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12e73dc5 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73dca push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73dcc call 0x12e72510 */
  push32(0x12e73dd1u); f_12e72510();
  /* 12e73dd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73dd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73dd7 jne 0x12e73dda */
  if (!C.zf) goto L_12e73dda;
  /* 12e73dd9 int3  */
  x86_unimpl("int3 @ 0x12e73dd9");
L_12e73dda:;
  /* 12e73dda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e73ddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e73dde jne 0x12e73daf */
  if (!C.zf) goto L_12e73daf;
  /* 12e73de0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73de3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e73de5 mov dword ptr [0x12e8f51c], eax */
  w32((uint32_t)(0x12e8f51c), (EAX));
L_12e73dea:;
  /* 12e73dea cmp dword ptr [0x12e8f51c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f51c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73df1 je 0x12e73e01 */
  if (C.zf) goto L_12e73e01;
  /* 12e73df3 mov ecx, dword ptr [0x12e8f51c] */
  ECX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e73df9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73dfc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12e73dff jmp 0x12e73e09 */
  goto L_12e73e09;
L_12e73e01:;
  /* 12e73e01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73e04 mov dword ptr [0x12e8f514], eax */
  w32((uint32_t)(0x12e8f514), (EAX));
L_12e73e09:;
  /* 12e73e09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73e0c mov edx, dword ptr [0x12e8f51c] */
  EDX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e73e12 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e73e14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73e17 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12e73e1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e73e21 mov dword ptr [0x12e8f51c], ecx */
  w32((uint32_t)(0x12e8f51c), (ECX));
  /* 12e73e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e73e2a:;
  /* 12e73e2a pop edi */
  EDI = (pop32());
  /* 12e73e2b pop esi */
  ESI = (pop32());
  /* 12e73e2c pop ebx */
  EBX = (pop32());
  /* 12e73e2d mov esp, ebp */
  ESP = (EBP);
  /* 12e73e2f pop ebp */
  EBP = (pop32());
  /* 12e73e30 ret  */
  ESPCHK(0x12e73920u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e40 @ 0x12e73e40 (27 bytes, 13 insns) */
void f_12e73e40(void) {
  FTRACE(0x12e73e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73e41 mov ebp, esp */
  EBP = (ESP);
  /* 12e73e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73e49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73e4c push eax */
  push32((uint32_t)(EAX));
  /* 12e73e4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73e50 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73e51 call 0x12e73e60 */
  push32(0x12e73e56u); f_12e73e60();
  /* 12e73e56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73e59 pop ebp */
  EBP = (pop32());
  /* 12e73e5a ret  */
  ESPCHK(0x12e73e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x12e73e60 (64 bytes, 27 insns) */
void f_12e73e60(void) {
  FTRACE(0x12e73e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73e61 mov ebp, esp */
  EBP = (ESP);
  /* 12e73e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73e64 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e73e66 call 0x12e76e50 */
  push32(0x12e73e6bu); f_12e76e50();
  /* 12e73e6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73e70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e73e73 push eax */
  push32((uint32_t)(EAX));
  /* 12e73e74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e73e77 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73e78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e73e7b push edx */
  push32((uint32_t)(EDX));
  /* 12e73e7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73e7f push eax */
  push32((uint32_t)(EAX));
  /* 12e73e80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73e84 call 0x12e73920 */
  push32(0x12e73e89u); f_12e73920();
  /* 12e73e89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e73e8f push 9 */
  push32((uint32_t)(0x9u));
  /* 12e73e91 call 0x12e76ef0 */
  push32(0x12e73e96u); f_12e76ef0();
  /* 12e73e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73e9c mov esp, ebp */
  ESP = (EBP);
  /* 12e73e9e pop ebp */
  EBP = (pop32());
  /* 12e73e9f ret  */
  ESPCHK(0x12e73e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea0 @ 0x12e73ea0 (19 bytes, 9 insns) */
void f_12e73ea0(void) {
  FTRACE(0x12e73ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12e73ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73ea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73ea8 push eax */
  push32((uint32_t)(EAX));
  /* 12e73ea9 call 0x12e73ee0 */
  push32(0x12e73eaeu); f_12e73ee0();
  /* 12e73eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73eb1 pop ebp */
  EBP = (pop32());
  /* 12e73eb2 ret  */
  ESPCHK(0x12e73ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ec0 @ 0x12e73ec0 (19 bytes, 9 insns) */
void f_12e73ec0(void) {
  FTRACE(0x12e73ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12e73ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e73ec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73ec8 push eax */
  push32((uint32_t)(EAX));
  /* 12e73ec9 call 0x12e73f10 */
  push32(0x12e73eceu); f_12e73f10();
  /* 12e73ece add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73ed1 pop ebp */
  EBP = (pop32());
  /* 12e73ed2 ret  */
  ESPCHK(0x12e73ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ee0 @ 0x12e73ee0 (41 bytes, 16 insns) */
void f_12e73ee0(void) {
  FTRACE(0x12e73ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12e73ee3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e73ee5 call 0x12e76e50 */
  push32(0x12e73eeau); f_12e76e50();
  /* 12e73eea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73eed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73ef0 push eax */
  push32((uint32_t)(EAX));
  /* 12e73ef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73ef5 call 0x12e73f10 */
  push32(0x12e73efau); f_12e73f10();
  /* 12e73efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73efd push 9 */
  push32((uint32_t)(0x9u));
  /* 12e73eff call 0x12e76ef0 */
  push32(0x12e73f04u); f_12e76ef0();
  /* 12e73f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73f07 pop ebp */
  EBP = (pop32());
  /* 12e73f08 ret  */
  ESPCHK(0x12e73ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f10 @ 0x12e73f10 (1004 bytes, 342 insns) */
void f_12e73f10(void) {
  FTRACE(0x12e73f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e73f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12e73f11 mov ebp, esp */
  EBP = (ESP);
  /* 12e73f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12e73f14 push ebx */
  push32((uint32_t)(EBX));
  /* 12e73f15 push esi */
  push32((uint32_t)(ESI));
  /* 12e73f16 push edi */
  push32((uint32_t)(EDI));
  /* 12e73f17 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e73f1c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e73f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73f21 je 0x12e73f53 */
  if (C.zf) goto L_12e73f53;
L_12e73f23:;
  /* 12e73f23 call 0x12e745f0 */
  push32(0x12e73f28u); f_12e745f0();
  /* 12e73f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73f2a jne 0x12e73f4d */
  if (!C.zf) goto L_12e73f4d;
  /* 12e73f2c push 0x12e8a558 */
  push32((uint32_t)(0x12e8a558u));
  /* 12e73f31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f33 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12e73f38 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73f3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73f3f call 0x12e72510 */
  push32(0x12e73f44u); f_12e72510();
  /* 12e73f44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73f47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73f4a jne 0x12e73f4d */
  if (!C.zf) goto L_12e73f4d;
  /* 12e73f4c int3  */
  x86_unimpl("int3 @ 0x12e73f4c");
L_12e73f4d:;
  /* 12e73f4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e73f4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e73f51 jne 0x12e73f23 */
  if (!C.zf) goto L_12e73f23;
L_12e73f53:;
  /* 12e73f53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73f57 jne 0x12e73f5e */
  if (!C.zf) goto L_12e73f5e;
  /* 12e73f59 jmp 0x12e742f5 */
  goto L_12e742f5;
L_12e73f5e:;
  /* 12e73f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e73f67 push edx */
  push32((uint32_t)(EDX));
  /* 12e73f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73f6d push eax */
  push32((uint32_t)(EAX));
  /* 12e73f6e push 3 */
  push32((uint32_t)(0x3u));
  /* 12e73f70 call dword ptr [0x12e8dcb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8dcb0))), 0x12e73f76u);
  /* 12e73f76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73f7b jne 0x12e73fa8 */
  if (!C.zf) goto L_12e73fa8;
L_12e73f7d:;
  /* 12e73f7d push 0x12e8a81c */
  push32((uint32_t)(0x12e8a81cu));
  /* 12e73f82 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e73f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73f8f call 0x12e72510 */
  push32(0x12e73f94u); f_12e72510();
  /* 12e73f94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73f97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73f9a jne 0x12e73f9d */
  if (!C.zf) goto L_12e73f9d;
  /* 12e73f9c int3  */
  x86_unimpl("int3 @ 0x12e73f9c");
L_12e73f9d:;
  /* 12e73f9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e73f9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e73fa1 jne 0x12e73f7d */
  if (!C.zf) goto L_12e73f7d;
  /* 12e73fa3 jmp 0x12e742f5 */
  goto L_12e742f5;
L_12e73fa8:;
  /* 12e73fa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73fab push edx */
  push32((uint32_t)(EDX));
  /* 12e73fac call 0x12e74a50 */
  push32(0x12e73fb1u); f_12e74a50();
  /* 12e73fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73fb6 jne 0x12e73fd9 */
  if (!C.zf) goto L_12e73fd9;
  /* 12e73fb8 push 0x12e8a65c */
  push32((uint32_t)(0x12e8a65cu));
  /* 12e73fbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e73fbf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12e73fc4 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e73fc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e73fcb call 0x12e72510 */
  push32(0x12e73fd0u); f_12e72510();
  /* 12e73fd0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e73fd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73fd6 jne 0x12e73fd9 */
  if (!C.zf) goto L_12e73fd9;
  /* 12e73fd8 int3  */
  x86_unimpl("int3 @ 0x12e73fd8");
L_12e73fd9:;
  /* 12e73fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e73fdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e73fdd jne 0x12e73fa8 */
  if (!C.zf) goto L_12e73fa8;
  /* 12e73fdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e73fe2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e73fe5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e73fe8:;
  /* 12e73fe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73feb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e73fee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e73ff3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73ff6 je 0x12e7403b */
  if (C.zf) goto L_12e7403b;
  /* 12e73ff8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e73ffb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e73fff je 0x12e7403b */
  if (C.zf) goto L_12e7403b;
  /* 12e74001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74004 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e74007 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7400c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7400f je 0x12e7403b */
  if (C.zf) goto L_12e7403b;
  /* 12e74011 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74014 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74018 je 0x12e7403b */
  if (C.zf) goto L_12e7403b;
  /* 12e7401a push 0x12e8a7f4 */
  push32((uint32_t)(0x12e8a7f4u));
  /* 12e7401f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74021 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12e74026 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e7402b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7402d call 0x12e72510 */
  push32(0x12e74032u); f_12e72510();
  /* 12e74032 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74035 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74038 jne 0x12e7403b */
  if (!C.zf) goto L_12e7403b;
  /* 12e7403a int3  */
  x86_unimpl("int3 @ 0x12e7403a");
L_12e7403b:;
  /* 12e7403b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7403d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7403f jne 0x12e73fe8 */
  if (!C.zf) goto L_12e73fe8;
  /* 12e74041 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e74046 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e74049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7404b jne 0x12e74116 */
  if (!C.zf) goto L_12e74116;
  /* 12e74051 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e74053 mov cl, byte ptr [0x12e8dab0] */
  CL = (r8((uint32_t)(0x12e8dab0)));
  /* 12e74059 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7405a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7405d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74060 push edx */
  push32((uint32_t)(EDX));
  /* 12e74061 call 0x12e74560 */
  push32(0x12e74066u); f_12e74560();
  /* 12e74066 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7406b jne 0x12e740b0 */
  if (!C.zf) goto L_12e740b0;
L_12e7406d:;
  /* 12e7406d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74070 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74073 push eax */
  push32((uint32_t)(EAX));
  /* 12e74074 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74077 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e7407a push edx */
  push32((uint32_t)(EDX));
  /* 12e7407b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7407e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e74081 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e74087 mov edx, dword ptr [ecx*4 + 0x12e8dab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8dab4)));
  /* 12e7408e push edx */
  push32((uint32_t)(EDX));
  /* 12e7408f push 0x12e8a7c8 */
  push32((uint32_t)(0x12e8a7c8u));
  /* 12e74094 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74096 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74098 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7409a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7409c call 0x12e72510 */
  push32(0x12e740a1u); f_12e72510();
  /* 12e740a1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e740a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e740a7 jne 0x12e740aa */
  if (!C.zf) goto L_12e740aa;
  /* 12e740a9 int3  */
  x86_unimpl("int3 @ 0x12e740a9");
L_12e740aa:;
  /* 12e740aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e740ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e740ae jne 0x12e7406d */
  if (!C.zf) goto L_12e7406d;
L_12e740b0:;
  /* 12e740b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e740b2 mov cl, byte ptr [0x12e8dab0] */
  CL = (r8((uint32_t)(0x12e8dab0)));
  /* 12e740b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e740b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e740bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e740bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e740c2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12e740c6 push edx */
  push32((uint32_t)(EDX));
  /* 12e740c7 call 0x12e74560 */
  push32(0x12e740ccu); f_12e74560();
  /* 12e740cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e740cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e740d1 jne 0x12e74116 */
  if (!C.zf) goto L_12e74116;
L_12e740d3:;
  /* 12e740d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e740d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e740d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e740da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e740dd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e740e0 push edx */
  push32((uint32_t)(EDX));
  /* 12e740e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e740e4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e740e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e740ed mov edx, dword ptr [ecx*4 + 0x12e8dab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8dab4)));
  /* 12e740f4 push edx */
  push32((uint32_t)(EDX));
  /* 12e740f5 push 0x12e8a79c */
  push32((uint32_t)(0x12e8a79cu));
  /* 12e740fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e740fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e740fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74100 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e74102 call 0x12e72510 */
  push32(0x12e74107u); f_12e72510();
  /* 12e74107 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7410a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7410d jne 0x12e74110 */
  if (!C.zf) goto L_12e74110;
  /* 12e7410f int3  */
  x86_unimpl("int3 @ 0x12e7410f");
L_12e74110:;
  /* 12e74110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74114 jne 0x12e740d3 */
  if (!C.zf) goto L_12e740d3;
L_12e74116:;
  /* 12e74116 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74119 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7411d jne 0x12e7418b */
  if (!C.zf) goto L_12e7418b;
L_12e7411f:;
  /* 12e7411f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74122 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74129 jne 0x12e74134 */
  if (!C.zf) goto L_12e74134;
  /* 12e7412b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7412e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74132 je 0x12e74155 */
  if (C.zf) goto L_12e74155;
L_12e74134:;
  /* 12e74134 push 0x12e8a75c */
  push32((uint32_t)(0x12e8a75cu));
  /* 12e74139 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7413b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12e74140 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e74145 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e74147 call 0x12e72510 */
  push32(0x12e7414cu); f_12e72510();
  /* 12e7414c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7414f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74152 jne 0x12e74155 */
  if (!C.zf) goto L_12e74155;
  /* 12e74154 int3  */
  x86_unimpl("int3 @ 0x12e74154");
L_12e74155:;
  /* 12e74155 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e74157 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74159 jne 0x12e7411f */
  if (!C.zf) goto L_12e7411f;
  /* 12e7415b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7415e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e74161 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74164 push eax */
  push32((uint32_t)(EAX));
  /* 12e74165 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e74167 mov cl, byte ptr [0x12e8dab1] */
  CL = (r8((uint32_t)(0x12e8dab1)));
  /* 12e7416d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7416e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74171 push edx */
  push32((uint32_t)(EDX));
  /* 12e74172 call 0x12e771c0 */
  push32(0x12e74177u); f_12e771c0();
  /* 12e74177 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7417a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7417d push eax */
  push32((uint32_t)(EAX));
  /* 12e7417e call 0x12e775c0 */
  push32(0x12e74183u); f_12e775c0();
  /* 12e74183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74186 jmp 0x12e742f5 */
  goto L_12e742f5;
L_12e7418b:;
  /* 12e7418b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7418e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74192 jne 0x12e741a1 */
  if (!C.zf) goto L_12e741a1;
  /* 12e74194 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74198 jne 0x12e741a1 */
  if (!C.zf) goto L_12e741a1;
  /* 12e7419a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12e741a1:;
  /* 12e741a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e741a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e741a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e741aa je 0x12e741cd */
  if (C.zf) goto L_12e741cd;
  /* 12e741ac push 0x12e8a73c */
  push32((uint32_t)(0x12e8a73cu));
  /* 12e741b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e741b3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12e741b8 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e741bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12e741bf call 0x12e72510 */
  push32(0x12e741c4u); f_12e72510();
  /* 12e741c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e741c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e741ca jne 0x12e741cd */
  if (!C.zf) goto L_12e741cd;
  /* 12e741cc int3  */
  x86_unimpl("int3 @ 0x12e741cc");
L_12e741cd:;
  /* 12e741cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e741cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e741d1 jne 0x12e741a1 */
  if (!C.zf) goto L_12e741a1;
  /* 12e741d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e741d6 mov eax, dword ptr [0x12e8f520] */
  EAX = (r32((uint32_t)(0x12e8f520)));
  /* 12e741db sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e741de mov dword ptr [0x12e8f520], eax */
  w32((uint32_t)(0x12e8f520), (EAX));
  /* 12e741e3 mov ecx, dword ptr [0x12e8daa4] */
  ECX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e741e9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12e741ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e741ee jne 0x12e742cc */
  if (!C.zf) goto L_12e742cc;
  /* 12e741f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e741f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e741fa je 0x12e7420c */
  if (C.zf) goto L_12e7420c;
  /* 12e741fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e741ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e74201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74204 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e74207 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e7420a jmp 0x12e7424a */
  goto L_12e7424a;
L_12e7420c:;
  /* 12e7420c mov ecx, dword ptr [0x12e8f514] */
  ECX = (r32((uint32_t)(0x12e8f514)));
  /* 12e74212 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74215 je 0x12e74238 */
  if (C.zf) goto L_12e74238;
  /* 12e74217 push 0x12e8a724 */
  push32((uint32_t)(0x12e8a724u));
  /* 12e7421c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7421e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12e74223 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e74228 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7422a call 0x12e72510 */
  push32(0x12e7422fu); f_12e72510();
  /* 12e7422f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74232 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74235 jne 0x12e74238 */
  if (!C.zf) goto L_12e74238;
  /* 12e74237 int3  */
  x86_unimpl("int3 @ 0x12e74237");
L_12e74238:;
  /* 12e74238 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7423a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7423c jne 0x12e7420c */
  if (!C.zf) goto L_12e7420c;
  /* 12e7423e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74241 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e74244 mov dword ptr [0x12e8f514], ecx */
  w32((uint32_t)(0x12e8f514), (ECX));
L_12e7424a:;
  /* 12e7424a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7424d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74251 je 0x12e74262 */
  if (C.zf) goto L_12e74262;
  /* 12e74253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74256 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e74259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7425c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e7425e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e74260 jmp 0x12e7429f */
  goto L_12e7429f;
L_12e74262:;
  /* 12e74262 mov ecx, dword ptr [0x12e8f51c] */
  ECX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e74268 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7426b je 0x12e7428e */
  if (C.zf) goto L_12e7428e;
  /* 12e7426d push 0x12e8a70c */
  push32((uint32_t)(0x12e8a70cu));
  /* 12e74272 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74274 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12e74279 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e7427e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e74280 call 0x12e72510 */
  push32(0x12e74285u); f_12e72510();
  /* 12e74285 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74288 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7428b jne 0x12e7428e */
  if (!C.zf) goto L_12e7428e;
  /* 12e7428d int3  */
  x86_unimpl("int3 @ 0x12e7428d");
L_12e7428e:;
  /* 12e7428e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e74290 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e74292 jne 0x12e74262 */
  if (!C.zf) goto L_12e74262;
  /* 12e74294 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74297 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e74299 mov dword ptr [0x12e8f51c], ecx */
  w32((uint32_t)(0x12e8f51c), (ECX));
L_12e7429f:;
  /* 12e7429f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e742a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e742a5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e742a8 push eax */
  push32((uint32_t)(EAX));
  /* 12e742a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e742ab mov cl, byte ptr [0x12e8dab1] */
  CL = (r8((uint32_t)(0x12e8dab1)));
  /* 12e742b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e742b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e742b5 push edx */
  push32((uint32_t)(EDX));
  /* 12e742b6 call 0x12e771c0 */
  push32(0x12e742bbu); f_12e771c0();
  /* 12e742bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e742be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e742c1 push eax */
  push32((uint32_t)(EAX));
  /* 12e742c2 call 0x12e775c0 */
  push32(0x12e742c7u); f_12e775c0();
  /* 12e742c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e742ca jmp 0x12e742f5 */
  goto L_12e742f5;
L_12e742cc:;
  /* 12e742cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e742cf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12e742d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e742d9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e742dc push eax */
  push32((uint32_t)(EAX));
  /* 12e742dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e742df mov cl, byte ptr [0x12e8dab1] */
  CL = (r8((uint32_t)(0x12e8dab1)));
  /* 12e742e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e742e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e742e9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e742ec push edx */
  push32((uint32_t)(EDX));
  /* 12e742ed call 0x12e771c0 */
  push32(0x12e742f2u); f_12e771c0();
  /* 12e742f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e742f5:;
  /* 12e742f5 pop edi */
  EDI = (pop32());
  /* 12e742f6 pop esi */
  ESI = (pop32());
  /* 12e742f7 pop ebx */
  EBX = (pop32());
  /* 12e742f8 mov esp, ebp */
  ESP = (EBP);
  /* 12e742fa pop ebp */
  EBP = (pop32());
  /* 12e742fb ret  */
  ESPCHK(0x12e73f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004300 @ 0x12e74300 (19 bytes, 9 insns) */
void f_12e74300(void) {
  FTRACE(0x12e74300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74300 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74301 mov ebp, esp */
  EBP = (ESP);
  /* 12e74303 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e74305 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74308 push eax */
  push32((uint32_t)(EAX));
  /* 12e74309 call 0x12e74320 */
  push32(0x12e7430eu); f_12e74320();
  /* 12e7430e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74311 pop ebp */
  EBP = (pop32());
  /* 12e74312 ret  */
  ESPCHK(0x12e74300u, _esp0);
  ESP += 4; return;
}

/* FUN_10004320 @ 0x12e74320 (342 bytes, 119 insns) */
void f_12e74320(void) {
  FTRACE(0x12e74320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74320 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74321 mov ebp, esp */
  EBP = (ESP);
  /* 12e74323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74326 push ebx */
  push32((uint32_t)(EBX));
  /* 12e74327 push esi */
  push32((uint32_t)(ESI));
  /* 12e74328 push edi */
  push32((uint32_t)(EDI));
  /* 12e74329 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e7432e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e74331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74333 je 0x12e74365 */
  if (C.zf) goto L_12e74365;
L_12e74335:;
  /* 12e74335 call 0x12e745f0 */
  push32(0x12e7433au); f_12e745f0();
  /* 12e7433a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7433c jne 0x12e7435f */
  if (!C.zf) goto L_12e7435f;
  /* 12e7433e push 0x12e8a558 */
  push32((uint32_t)(0x12e8a558u));
  /* 12e74343 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74345 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12e7434a push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e7434f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e74351 call 0x12e72510 */
  push32(0x12e74356u); f_12e72510();
  /* 12e74356 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74359 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7435c jne 0x12e7435f */
  if (!C.zf) goto L_12e7435f;
  /* 12e7435e int3  */
  x86_unimpl("int3 @ 0x12e7435e");
L_12e7435f:;
  /* 12e7435f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e74361 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74363 jne 0x12e74335 */
  if (!C.zf) goto L_12e74335;
L_12e74365:;
  /* 12e74365 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74367 call 0x12e76e50 */
  push32(0x12e7436cu); f_12e76e50();
  /* 12e7436c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7436f:;
  /* 12e7436f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74372 push edx */
  push32((uint32_t)(EDX));
  /* 12e74373 call 0x12e74a50 */
  push32(0x12e74378u); f_12e74a50();
  /* 12e74378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7437b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7437d jne 0x12e743a0 */
  if (!C.zf) goto L_12e743a0;
  /* 12e7437f push 0x12e8a65c */
  push32((uint32_t)(0x12e8a65cu));
  /* 12e74384 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74386 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12e7438b push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e74390 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e74392 call 0x12e72510 */
  push32(0x12e74397u); f_12e72510();
  /* 12e74397 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7439a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7439d jne 0x12e743a0 */
  if (!C.zf) goto L_12e743a0;
  /* 12e7439f int3  */
  x86_unimpl("int3 @ 0x12e7439f");
L_12e743a0:;
  /* 12e743a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e743a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e743a4 jne 0x12e7436f */
  if (!C.zf) goto L_12e7436f;
  /* 12e743a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e743a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e743ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e743af:;
  /* 12e743af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e743b2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e743b5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e743ba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e743bd je 0x12e74402 */
  if (C.zf) goto L_12e74402;
  /* 12e743bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e743c2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e743c6 je 0x12e74402 */
  if (C.zf) goto L_12e74402;
  /* 12e743c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e743cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e743ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e743d3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e743d6 je 0x12e74402 */
  if (C.zf) goto L_12e74402;
  /* 12e743d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e743db cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e743df je 0x12e74402 */
  if (C.zf) goto L_12e74402;
  /* 12e743e1 push 0x12e8a7f4 */
  push32((uint32_t)(0x12e8a7f4u));
  /* 12e743e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e743e8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12e743ed push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e743f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e743f4 call 0x12e72510 */
  push32(0x12e743f9u); f_12e72510();
  /* 12e743f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e743fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e743ff jne 0x12e74402 */
  if (!C.zf) goto L_12e74402;
  /* 12e74401 int3  */
  x86_unimpl("int3 @ 0x12e74401");
L_12e74402:;
  /* 12e74402 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e74404 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e74406 jne 0x12e743af */
  if (!C.zf) goto L_12e743af;
  /* 12e74408 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7440b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7440f jne 0x12e7441e */
  if (!C.zf) goto L_12e7441e;
  /* 12e74411 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74415 jne 0x12e7441e */
  if (!C.zf) goto L_12e7441e;
  /* 12e74417 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12e7441e:;
  /* 12e7441e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74421 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74425 je 0x12e74459 */
  if (C.zf) goto L_12e74459;
L_12e74427:;
  /* 12e74427 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7442a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e7442d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74430 je 0x12e74453 */
  if (C.zf) goto L_12e74453;
  /* 12e74432 push 0x12e8a73c */
  push32((uint32_t)(0x12e8a73cu));
  /* 12e74437 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74439 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12e7443e push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e74443 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e74445 call 0x12e72510 */
  push32(0x12e7444au); f_12e72510();
  /* 12e7444a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7444d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74450 jne 0x12e74453 */
  if (!C.zf) goto L_12e74453;
  /* 12e74452 int3  */
  x86_unimpl("int3 @ 0x12e74452");
L_12e74453:;
  /* 12e74453 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e74455 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74457 jne 0x12e74427 */
  if (!C.zf) goto L_12e74427;
L_12e74459:;
  /* 12e74459 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7445c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e7445f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e74462 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74464 call 0x12e76ef0 */
  push32(0x12e74469u); f_12e76ef0();
  /* 12e74469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7446c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7446f pop edi */
  EDI = (pop32());
  /* 12e74470 pop esi */
  ESI = (pop32());
  /* 12e74471 pop ebx */
  EBX = (pop32());
  /* 12e74472 mov esp, ebp */
  ESP = (EBP);
  /* 12e74474 pop ebp */
  EBP = (pop32());
  /* 12e74475 ret  */
  ESPCHK(0x12e74320u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x12e74480 (28 bytes, 11 insns) */
void f_12e74480(void) {
  FTRACE(0x12e74480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74480 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74481 mov ebp, esp */
  EBP = (ESP);
  /* 12e74483 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74484 mov eax, dword ptr [0x12e8daac] */
  EAX = (r32((uint32_t)(0x12e8daac)));
  /* 12e74489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7448c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7448f mov dword ptr [0x12e8daac], ecx */
  w32((uint32_t)(0x12e8daac), (ECX));
  /* 12e74495 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74498 mov esp, ebp */
  ESP = (EBP);
  /* 12e7449a pop ebp */
  EBP = (pop32());
  /* 12e7449b ret  */
  ESPCHK(0x12e74480u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x12e744a0 (157 bytes, 59 insns) */
void f_12e744a0(void) {
  FTRACE(0x12e744a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e744a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e744a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e744a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e744a4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e744a5 push esi */
  push32((uint32_t)(ESI));
  /* 12e744a6 push edi */
  push32((uint32_t)(EDI));
  /* 12e744a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e744a9 call 0x12e76e50 */
  push32(0x12e744aeu); f_12e76e50();
  /* 12e744ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e744b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e744b4 push eax */
  push32((uint32_t)(EAX));
  /* 12e744b5 call 0x12e74a50 */
  push32(0x12e744bau); f_12e74a50();
  /* 12e744ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e744bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e744bf je 0x12e7452c */
  if (C.zf) goto L_12e7452c;
  /* 12e744c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e744c4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e744c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e744ca:;
  /* 12e744ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e744cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e744d0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e744d5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e744d8 je 0x12e7451d */
  if (C.zf) goto L_12e7451d;
  /* 12e744da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e744dd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e744e1 je 0x12e7451d */
  if (C.zf) goto L_12e7451d;
  /* 12e744e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e744e6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e744e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e744ee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e744f1 je 0x12e7451d */
  if (C.zf) goto L_12e7451d;
  /* 12e744f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e744f6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e744fa je 0x12e7451d */
  if (C.zf) goto L_12e7451d;
  /* 12e744fc push 0x12e8a7f4 */
  push32((uint32_t)(0x12e8a7f4u));
  /* 12e74501 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74503 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12e74508 push 0x12e8a54c */
  push32((uint32_t)(0x12e8a54cu));
  /* 12e7450d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7450f call 0x12e72510 */
  push32(0x12e74514u); f_12e72510();
  /* 12e74514 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74517 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7451a jne 0x12e7451d */
  if (!C.zf) goto L_12e7451d;
  /* 12e7451c int3  */
  x86_unimpl("int3 @ 0x12e7451c");
L_12e7451d:;
  /* 12e7451d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7451f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e74521 jne 0x12e744ca */
  if (!C.zf) goto L_12e744ca;
  /* 12e74523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74526 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74529 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12e7452c:;
  /* 12e7452c push 9 */
  push32((uint32_t)(0x9u));
  /* 12e7452e call 0x12e76ef0 */
  push32(0x12e74533u); f_12e76ef0();
  /* 12e74533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74536 pop edi */
  EDI = (pop32());
  /* 12e74537 pop esi */
  ESI = (pop32());
  /* 12e74538 pop ebx */
  EBX = (pop32());
  /* 12e74539 mov esp, ebp */
  ESP = (EBP);
  /* 12e7453b pop ebp */
  EBP = (pop32());
  /* 12e7453c ret  */
  ESPCHK(0x12e744a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x12e74540 (28 bytes, 11 insns) */
void f_12e74540(void) {
  FTRACE(0x12e74540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74540 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74541 mov ebp, esp */
  EBP = (ESP);
  /* 12e74543 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74544 mov eax, dword ptr [0x12e8dcb0] */
  EAX = (r32((uint32_t)(0x12e8dcb0)));
  /* 12e74549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7454c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7454f mov dword ptr [0x12e8dcb0], ecx */
  w32((uint32_t)(0x12e8dcb0), (ECX));
  /* 12e74555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74558 mov esp, ebp */
  ESP = (EBP);
  /* 12e7455a pop ebp */
  EBP = (pop32());
  /* 12e7455b ret  */
  ESPCHK(0x12e74540u, _esp0);
  ESP += 4; return;
}

/* FUN_10004560 @ 0x12e74560 (136 bytes, 55 insns) */
void f_12e74560(void) {
  FTRACE(0x12e74560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74560 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74561 mov ebp, esp */
  EBP = (ESP);
  /* 12e74563 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74564 push ebx */
  push32((uint32_t)(EBX));
  /* 12e74565 push esi */
  push32((uint32_t)(ESI));
  /* 12e74566 push edi */
  push32((uint32_t)(EDI));
  /* 12e74567 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12e7456e:;
  /* 12e7456e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e74571 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e74574 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74577 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e7457a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7457c je 0x12e745de */
  if (C.zf) goto L_12e745de;
  /* 12e7457e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74581 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74583 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e74585 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74588 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7458e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74591 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74594 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e74597 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74599 je 0x12e745dc */
  if (C.zf) goto L_12e745dc;
L_12e7459b:;
  /* 12e7459b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7459e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e745a3 push eax */
  push32((uint32_t)(EAX));
  /* 12e745a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e745a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e745a9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12e745ac push edx */
  push32((uint32_t)(EDX));
  /* 12e745ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e745b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e745b3 push eax */
  push32((uint32_t)(EAX));
  /* 12e745b4 push 0x12e8a838 */
  push32((uint32_t)(0x12e8a838u));
  /* 12e745b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e745bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e745bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e745bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12e745c1 call 0x12e72510 */
  push32(0x12e745c6u); f_12e72510();
  /* 12e745c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e745c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e745cc jne 0x12e745cf */
  if (!C.zf) goto L_12e745cf;
  /* 12e745ce int3  */
  x86_unimpl("int3 @ 0x12e745ce");
L_12e745cf:;
  /* 12e745cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e745d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e745d3 jne 0x12e7459b */
  if (!C.zf) goto L_12e7459b;
  /* 12e745d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e745dc:;
  /* 12e745dc jmp 0x12e7456e */
  goto L_12e7456e;
L_12e745de:;
  /* 12e745de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e745e1 pop edi */
  EDI = (pop32());
  /* 12e745e2 pop esi */
  ESI = (pop32());
  /* 12e745e3 pop ebx */
  EBX = (pop32());
  /* 12e745e4 mov esp, ebp */
  ESP = (EBP);
  /* 12e745e6 pop ebp */
  EBP = (pop32());
  /* 12e745e7 ret  */
  ESPCHK(0x12e74560u, _esp0);
  ESP += 4; return;
}

/* FUN_100045f0 @ 0x12e745f0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12e745f0(void) {
  FTRACE(0x12e745f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e745f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e745f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e745f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e745f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e745f7 push esi */
  push32((uint32_t)(ESI));
  /* 12e745f8 push edi */
  push32((uint32_t)(EDI));
  /* 12e745f9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e74600 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e74605 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e74608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7460a jne 0x12e74616 */
  if (!C.zf) goto L_12e74616;
  /* 12e7460c mov eax, 1 */
  EAX = (0x1u);
  /* 12e74611 jmp 0x12e74948 */
  goto L_12e74948;
L_12e74616:;
  /* 12e74616 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74618 call 0x12e76e50 */
  push32(0x12e7461du); f_12e76e50();
  /* 12e7461d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74620 call 0x12e77630 */
  push32(0x12e74625u); f_12e77630();
  /* 12e74625 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e74628 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7462c je 0x12e74739 */
  if (C.zf) goto L_12e74739;
  /* 12e74632 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74636 je 0x12e74739 */
  if (C.zf) goto L_12e74739;
  /* 12e7463c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7463f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e74642 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e74645 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74648 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e7464b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7464f ja 0x12e74702 */
  if ((!C.cf&&!C.zf)) goto L_12e74702;
  /* 12e74655 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e74658 jmp dword ptr [eax*4 + 0x12e7494f] */
  switch (EAX) {
    case 0: goto L_12e746da;
    case 1: goto L_12e746b2;
    case 2: goto L_12e7468a;
    case 3: goto L_12e7465f;
    default: x86_unimpl("switch@0x12e74658 out of table"); return;
  }
L_12e7465f:;
  /* 12e7465f push 0x12e8a98c */
  push32((uint32_t)(0x12e8a98cu));
  /* 12e74664 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e74669 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7466b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7466d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7466f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74671 call 0x12e72510 */
  push32(0x12e74676u); f_12e72510();
  /* 12e74676 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74679 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7467c jne 0x12e7467f */
  if (!C.zf) goto L_12e7467f;
  /* 12e7467e int3  */
  x86_unimpl("int3 @ 0x12e7467e");
L_12e7467f:;
  /* 12e7467f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e74681 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74683 jne 0x12e7465f */
  if (!C.zf) goto L_12e7465f;
  /* 12e74685 jmp 0x12e74728 */
  goto L_12e74728;
L_12e7468a:;
  /* 12e7468a push 0x12e8a968 */
  push32((uint32_t)(0x12e8a968u));
  /* 12e7468f push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e74694 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74698 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7469a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7469c call 0x12e72510 */
  push32(0x12e746a1u); f_12e72510();
  /* 12e746a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e746a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e746a7 jne 0x12e746aa */
  if (!C.zf) goto L_12e746aa;
  /* 12e746a9 int3  */
  x86_unimpl("int3 @ 0x12e746a9");
L_12e746aa:;
  /* 12e746aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e746ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e746ae jne 0x12e7468a */
  if (!C.zf) goto L_12e7468a;
  /* 12e746b0 jmp 0x12e74728 */
  goto L_12e74728;
L_12e746b2:;
  /* 12e746b2 push 0x12e8a944 */
  push32((uint32_t)(0x12e8a944u));
  /* 12e746b7 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e746bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746be push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746c4 call 0x12e72510 */
  push32(0x12e746c9u); f_12e72510();
  /* 12e746c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e746cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e746cf jne 0x12e746d2 */
  if (!C.zf) goto L_12e746d2;
  /* 12e746d1 int3  */
  x86_unimpl("int3 @ 0x12e746d1");
L_12e746d2:;
  /* 12e746d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e746d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e746d6 jne 0x12e746b2 */
  if (!C.zf) goto L_12e746b2;
  /* 12e746d8 jmp 0x12e74728 */
  goto L_12e74728;
L_12e746da:;
  /* 12e746da push 0x12e8a920 */
  push32((uint32_t)(0x12e8a920u));
  /* 12e746df push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e746e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12e746ec call 0x12e72510 */
  push32(0x12e746f1u); f_12e72510();
  /* 12e746f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e746f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e746f7 jne 0x12e746fa */
  if (!C.zf) goto L_12e746fa;
  /* 12e746f9 int3  */
  x86_unimpl("int3 @ 0x12e746f9");
L_12e746fa:;
  /* 12e746fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e746fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e746fe jne 0x12e746da */
  if (!C.zf) goto L_12e746da;
  /* 12e74700 jmp 0x12e74728 */
  goto L_12e74728;
L_12e74702:;
  /* 12e74702 push 0x12e8a8f4 */
  push32((uint32_t)(0x12e8a8f4u));
  /* 12e74707 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e7470c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7470e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74710 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74714 call 0x12e72510 */
  push32(0x12e74719u); f_12e72510();
  /* 12e74719 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7471c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7471f jne 0x12e74722 */
  if (!C.zf) goto L_12e74722;
  /* 12e74721 int3  */
  x86_unimpl("int3 @ 0x12e74721");
L_12e74722:;
  /* 12e74722 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e74724 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e74726 jne 0x12e74702 */
  if (!C.zf) goto L_12e74702;
L_12e74728:;
  /* 12e74728 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e7472a call 0x12e76ef0 */
  push32(0x12e7472fu); f_12e76ef0();
  /* 12e7472f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74734 jmp 0x12e74948 */
  goto L_12e74948;
L_12e74739:;
  /* 12e74739 mov eax, dword ptr [0x12e8f51c] */
  EAX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e7473e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e74741 jmp 0x12e7474b */
  goto L_12e7474b;
L_12e74743:;
  /* 12e74743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74746 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e74748 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e7474b:;
  /* 12e7474b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7474f je 0x12e7493b */
  if (C.zf) goto L_12e7493b;
  /* 12e74755 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12e7475c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7475f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e74762 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e74768 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7476b je 0x12e74790 */
  if (C.zf) goto L_12e74790;
  /* 12e7476d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74770 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74774 je 0x12e74790 */
  if (C.zf) goto L_12e74790;
  /* 12e74776 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74779 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e7477c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e74782 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74785 je 0x12e74790 */
  if (C.zf) goto L_12e74790;
  /* 12e74787 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7478a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7478e jne 0x12e747a8 */
  if (!C.zf) goto L_12e747a8;
L_12e74790:;
  /* 12e74790 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74793 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e74796 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7479c mov edx, dword ptr [ecx*4 + 0x12e8dab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8dab4)));
  /* 12e747a3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e747a6 jmp 0x12e747af */
  goto L_12e747af;
L_12e747a8:;
  /* 12e747a8 mov dword ptr [ebp - 0x14], 0x12e8a8ec */
  w32((uint32_t)(EBP + -0x14), (0x12e8a8ecu));
L_12e747af:;
  /* 12e747af push 4 */
  push32((uint32_t)(0x4u));
  /* 12e747b1 mov al, byte ptr [0x12e8dab0] */
  AL = (r8((uint32_t)(0x12e8dab0)));
  /* 12e747b6 push eax */
  push32((uint32_t)(EAX));
  /* 12e747b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e747ba add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e747bd push ecx */
  push32((uint32_t)(ECX));
  /* 12e747be call 0x12e74560 */
  push32(0x12e747c3u); f_12e74560();
  /* 12e747c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e747c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e747c8 jne 0x12e74804 */
  if (!C.zf) goto L_12e74804;
L_12e747ca:;
  /* 12e747ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e747cd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e747d0 push edx */
  push32((uint32_t)(EDX));
  /* 12e747d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e747d4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e747d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e747d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e747db push edx */
  push32((uint32_t)(EDX));
  /* 12e747dc push 0x12e8a7c8 */
  push32((uint32_t)(0x12e8a7c8u));
  /* 12e747e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e747e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e747e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e747e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e747e9 call 0x12e72510 */
  push32(0x12e747eeu); f_12e72510();
  /* 12e747ee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e747f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e747f4 jne 0x12e747f7 */
  if (!C.zf) goto L_12e747f7;
  /* 12e747f6 int3  */
  x86_unimpl("int3 @ 0x12e747f6");
L_12e747f7:;
  /* 12e747f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e747f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e747fb jne 0x12e747ca */
  if (!C.zf) goto L_12e747ca;
  /* 12e747fd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e74804:;
  /* 12e74804 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e74806 mov cl, byte ptr [0x12e8dab0] */
  CL = (r8((uint32_t)(0x12e8dab0)));
  /* 12e7480c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7480d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74810 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e74813 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74816 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12e7481a push edx */
  push32((uint32_t)(EDX));
  /* 12e7481b call 0x12e74560 */
  push32(0x12e74820u); f_12e74560();
  /* 12e74820 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74823 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74825 jne 0x12e74861 */
  if (!C.zf) goto L_12e74861;
L_12e74827:;
  /* 12e74827 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7482a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7482d push eax */
  push32((uint32_t)(EAX));
  /* 12e7482e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74831 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e74834 push edx */
  push32((uint32_t)(EDX));
  /* 12e74835 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e74838 push eax */
  push32((uint32_t)(EAX));
  /* 12e74839 push 0x12e8a79c */
  push32((uint32_t)(0x12e8a79cu));
  /* 12e7483e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74840 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74842 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74844 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74846 call 0x12e72510 */
  push32(0x12e7484bu); f_12e72510();
  /* 12e7484b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7484e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74851 jne 0x12e74854 */
  if (!C.zf) goto L_12e74854;
  /* 12e74853 int3  */
  x86_unimpl("int3 @ 0x12e74853");
L_12e74854:;
  /* 12e74854 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e74856 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74858 jne 0x12e74827 */
  if (!C.zf) goto L_12e74827;
  /* 12e7485a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e74861:;
  /* 12e74861 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74864 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74868 jne 0x12e748ba */
  if (!C.zf) goto L_12e748ba;
  /* 12e7486a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7486d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e74870 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74871 mov dl, byte ptr [0x12e8dab1] */
  DL = (r8((uint32_t)(0x12e8dab1)));
  /* 12e74877 push edx */
  push32((uint32_t)(EDX));
  /* 12e74878 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7487b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7487e push eax */
  push32((uint32_t)(EAX));
  /* 12e7487f call 0x12e74560 */
  push32(0x12e74884u); f_12e74560();
  /* 12e74884 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74889 jne 0x12e748ba */
  if (!C.zf) goto L_12e748ba;
L_12e7488b:;
  /* 12e7488b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7488e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74891 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74892 push 0x12e8a8c0 */
  push32((uint32_t)(0x12e8a8c0u));
  /* 12e74897 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74899 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7489b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7489d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7489f call 0x12e72510 */
  push32(0x12e748a4u); f_12e72510();
  /* 12e748a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e748a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e748aa jne 0x12e748ad */
  if (!C.zf) goto L_12e748ad;
  /* 12e748ac int3  */
  x86_unimpl("int3 @ 0x12e748ac");
L_12e748ad:;
  /* 12e748ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e748af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e748b1 jne 0x12e7488b */
  if (!C.zf) goto L_12e7488b;
  /* 12e748b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e748ba:;
  /* 12e748ba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e748be jne 0x12e74936 */
  if (!C.zf) goto L_12e74936;
  /* 12e748c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e748c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e748c7 je 0x12e748fc */
  if (C.zf) goto L_12e748fc;
L_12e748c9:;
  /* 12e748c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e748cc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e748cf push edx */
  push32((uint32_t)(EDX));
  /* 12e748d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e748d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e748d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e748d7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e748da push edx */
  push32((uint32_t)(EDX));
  /* 12e748db push 0x12e8a8a0 */
  push32((uint32_t)(0x12e8a8a0u));
  /* 12e748e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e748e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e748e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e748e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e748e8 call 0x12e72510 */
  push32(0x12e748edu); f_12e72510();
  /* 12e748ed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e748f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e748f3 jne 0x12e748f6 */
  if (!C.zf) goto L_12e748f6;
  /* 12e748f5 int3  */
  x86_unimpl("int3 @ 0x12e748f5");
L_12e748f6:;
  /* 12e748f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e748f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e748fa jne 0x12e748c9 */
  if (!C.zf) goto L_12e748c9;
L_12e748fc:;
  /* 12e748fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e748ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e74902 push edx */
  push32((uint32_t)(EDX));
  /* 12e74903 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74906 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74909 push eax */
  push32((uint32_t)(EAX));
  /* 12e7490a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e7490d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7490e push 0x12e8a874 */
  push32((uint32_t)(0x12e8a874u));
  /* 12e74913 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74915 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74917 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74919 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7491b call 0x12e72510 */
  push32(0x12e74920u); f_12e72510();
  /* 12e74920 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74923 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74926 jne 0x12e74929 */
  if (!C.zf) goto L_12e74929;
  /* 12e74928 int3  */
  x86_unimpl("int3 @ 0x12e74928");
L_12e74929:;
  /* 12e74929 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7492b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7492d jne 0x12e748fc */
  if (!C.zf) goto L_12e748fc;
  /* 12e7492f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e74936:;
  /* 12e74936 jmp 0x12e74743 */
  goto L_12e74743;
L_12e7493b:;
  /* 12e7493b push 9 */
  push32((uint32_t)(0x9u));
  /* 12e7493d call 0x12e76ef0 */
  push32(0x12e74942u); f_12e76ef0();
  /* 12e74942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e74948:;
  /* 12e74948 pop edi */
  EDI = (pop32());
  /* 12e74949 pop esi */
  ESI = (pop32());
  /* 12e7494a pop ebx */
  EBX = (pop32());
  /* 12e7494b mov esp, ebp */
  ESP = (EBP);
  /* 12e7494d pop ebp */
  EBP = (pop32());
  /* 12e7494e ret  */
  ESPCHK(0x12e745f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004960 @ 0x12e74960 (34 bytes, 13 insns) */
void f_12e74960(void) {
  FTRACE(0x12e74960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74960 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74961 mov ebp, esp */
  EBP = (ESP);
  /* 12e74963 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74964 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e74969 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7496c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74970 je 0x12e7497b */
  if (C.zf) goto L_12e7497b;
  /* 12e74972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74975 mov dword ptr [0x12e8daa4], ecx */
  w32((uint32_t)(0x12e8daa4), (ECX));
L_12e7497b:;
  /* 12e7497b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7497e mov esp, ebp */
  ESP = (EBP);
  /* 12e74980 pop ebp */
  EBP = (pop32());
  /* 12e74981 ret  */
  ESPCHK(0x12e74960u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x12e74990 (103 bytes, 38 insns) */
void f_12e74990(void) {
  FTRACE(0x12e74990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74990 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74991 mov ebp, esp */
  EBP = (ESP);
  /* 12e74993 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74994 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e74999 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7499c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7499e jne 0x12e749a2 */
  if (!C.zf) goto L_12e749a2;
  /* 12e749a0 jmp 0x12e749f3 */
  goto L_12e749f3;
L_12e749a2:;
  /* 12e749a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e749a4 call 0x12e76e50 */
  push32(0x12e749a9u); f_12e76e50();
  /* 12e749a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e749ac mov ecx, dword ptr [0x12e8f51c] */
  ECX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e749b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e749b5 jmp 0x12e749bf */
  goto L_12e749bf;
L_12e749b7:;
  /* 12e749b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e749ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e749bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e749bf:;
  /* 12e749bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e749c3 je 0x12e749e9 */
  if (C.zf) goto L_12e749e9;
  /* 12e749c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e749c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e749cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e749d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e749d4 jne 0x12e749e7 */
  if (!C.zf) goto L_12e749e7;
  /* 12e749d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e749d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e749da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e749dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e749e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e749e1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12e749e4u);
  /* 12e749e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e749e7:;
  /* 12e749e7 jmp 0x12e749b7 */
  goto L_12e749b7;
L_12e749e9:;
  /* 12e749e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e749eb call 0x12e76ef0 */
  push32(0x12e749f0u); f_12e76ef0();
  /* 12e749f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e749f3:;
  /* 12e749f3 mov esp, ebp */
  ESP = (EBP);
  /* 12e749f5 pop ebp */
  EBP = (pop32());
  /* 12e749f6 ret  */
  ESPCHK(0x12e74990u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12e74a00 (75 bytes, 28 insns) */
void f_12e74a00(void) {
  FTRACE(0x12e74a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74a01 mov ebp, esp */
  EBP = (ESP);
  /* 12e74a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74a04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74a08 je 0x12e74a3d */
  if (C.zf) goto L_12e74a3d;
  /* 12e74a0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74a0d push eax */
  push32((uint32_t)(EAX));
  /* 12e74a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74a11 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74a12 call dword ptr [0x12e92370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92370))), 0x12e74a18u);
  /* 12e74a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74a1a jne 0x12e74a3d */
  if (!C.zf) goto L_12e74a3d;
  /* 12e74a1c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74a20 je 0x12e74a34 */
  if (C.zf) goto L_12e74a34;
  /* 12e74a22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74a25 push edx */
  push32((uint32_t)(EDX));
  /* 12e74a26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74a29 push eax */
  push32((uint32_t)(EAX));
  /* 12e74a2a call dword ptr [0x12e9236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9236c))), 0x12e74a30u);
  /* 12e74a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74a32 jne 0x12e74a3d */
  if (!C.zf) goto L_12e74a3d;
L_12e74a34:;
  /* 12e74a34 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e74a3b jmp 0x12e74a44 */
  goto L_12e74a44;
L_12e74a3d:;
  /* 12e74a3d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e74a44:;
  /* 12e74a44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74a47 mov esp, ebp */
  ESP = (EBP);
  /* 12e74a49 pop ebp */
  EBP = (pop32());
  /* 12e74a4a ret  */
  ESPCHK(0x12e74a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x12e74a50 (134 bytes, 50 insns) */
void f_12e74a50(void) {
  FTRACE(0x12e74a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74a51 mov ebp, esp */
  EBP = (ESP);
  /* 12e74a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74a58 jne 0x12e74a5e */
  if (!C.zf) goto L_12e74a5e;
  /* 12e74a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74a5c jmp 0x12e74ad2 */
  goto L_12e74ad2;
L_12e74a5e:;
  /* 12e74a5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e74a60 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12e74a62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74a65 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74a68 push eax */
  push32((uint32_t)(EAX));
  /* 12e74a69 call 0x12e74a00 */
  push32(0x12e74a6eu); f_12e74a00();
  /* 12e74a6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74a73 jne 0x12e74a79 */
  if (!C.zf) goto L_12e74a79;
  /* 12e74a75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74a77 jmp 0x12e74ad2 */
  goto L_12e74ad2;
L_12e74a79:;
  /* 12e74a79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74a7c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74a7f push ecx */
  push32((uint32_t)(ECX));
  /* 12e74a80 call 0x12e77750 */
  push32(0x12e74a85u); f_12e77750();
  /* 12e74a85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74a88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e74a8b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74a8f je 0x12e74aa6 */
  if (C.zf) goto L_12e74aa6;
  /* 12e74a91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74a94 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74a97 push edx */
  push32((uint32_t)(EDX));
  /* 12e74a98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74a9b push eax */
  push32((uint32_t)(EAX));
  /* 12e74a9c call 0x12e777b0 */
  push32(0x12e74aa1u); f_12e777b0();
  /* 12e74aa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74aa4 jmp 0x12e74ad2 */
  goto L_12e74ad2;
L_12e74aa6:;
  /* 12e74aa6 mov ecx, dword ptr [0x12e8f4d0] */
  ECX = (r32((uint32_t)(0x12e8f4d0)));
  /* 12e74aac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e74ab2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74ab4 je 0x12e74abd */
  if (C.zf) goto L_12e74abd;
  /* 12e74ab6 mov eax, 1 */
  EAX = (0x1u);
  /* 12e74abb jmp 0x12e74ad2 */
  goto L_12e74ad2;
L_12e74abd:;
  /* 12e74abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74ac0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74ac3 push edx */
  push32((uint32_t)(EDX));
  /* 12e74ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74ac6 mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e74acb push eax */
  push32((uint32_t)(EAX));
  /* 12e74acc call dword ptr [0x12e92374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92374))), 0x12e74ad2u);
L_12e74ad2:;
  /* 12e74ad2 mov esp, ebp */
  ESP = (EBP);
  /* 12e74ad4 pop ebp */
  EBP = (pop32());
  /* 12e74ad5 ret  */
  ESPCHK(0x12e74a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x12e74ae0 (227 bytes, 80 insns) */
void f_12e74ae0(void) {
  FTRACE(0x12e74ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12e74ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74ae7 push eax */
  push32((uint32_t)(EAX));
  /* 12e74ae8 call 0x12e74a50 */
  push32(0x12e74aedu); f_12e74a50();
  /* 12e74aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74af0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74af2 jne 0x12e74afb */
  if (!C.zf) goto L_12e74afb;
  /* 12e74af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74af6 jmp 0x12e74bbf */
  goto L_12e74bbf;
L_12e74afb:;
  /* 12e74afb push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74afd call 0x12e76e50 */
  push32(0x12e74b02u); f_12e76e50();
  /* 12e74b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74b05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74b08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74b0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e74b0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b11 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e74b14 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e74b19 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b1c je 0x12e74b40 */
  if (C.zf) goto L_12e74b40;
  /* 12e74b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b21 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b25 je 0x12e74b40 */
  if (C.zf) goto L_12e74b40;
  /* 12e74b27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e74b2d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e74b32 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b35 je 0x12e74b40 */
  if (C.zf) goto L_12e74b40;
  /* 12e74b37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b3a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b3e jne 0x12e74bb3 */
  if (!C.zf) goto L_12e74bb3;
L_12e74b40:;
  /* 12e74b40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e74b42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74b45 push edx */
  push32((uint32_t)(EDX));
  /* 12e74b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74b49 push eax */
  push32((uint32_t)(EAX));
  /* 12e74b4a call 0x12e74a00 */
  push32(0x12e74b4fu); f_12e74a00();
  /* 12e74b4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74b52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74b54 je 0x12e74bb3 */
  if (C.zf) goto L_12e74bb3;
  /* 12e74b56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b59 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e74b5c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b5f jne 0x12e74bb3 */
  if (!C.zf) goto L_12e74bb3;
  /* 12e74b61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e74b67 cmp ecx, dword ptr [0x12e8daa8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8daa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b6d jg 0x12e74bb3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e74bb3;
  /* 12e74b6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b73 je 0x12e74b80 */
  if (C.zf) goto L_12e74b80;
  /* 12e74b75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e74b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b7b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e74b7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e74b80:;
  /* 12e74b80 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b84 je 0x12e74b91 */
  if (C.zf) goto L_12e74b91;
  /* 12e74b86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e74b89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e74b8f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e74b91:;
  /* 12e74b91 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74b95 je 0x12e74ba2 */
  if (C.zf) goto L_12e74ba2;
  /* 12e74b97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e74b9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74b9d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e74ba0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e74ba2:;
  /* 12e74ba2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74ba4 call 0x12e76ef0 */
  push32(0x12e74ba9u); f_12e76ef0();
  /* 12e74ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74bac mov eax, 1 */
  EAX = (0x1u);
  /* 12e74bb1 jmp 0x12e74bbf */
  goto L_12e74bbf;
L_12e74bb3:;
  /* 12e74bb3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74bb5 call 0x12e76ef0 */
  push32(0x12e74bbau); f_12e76ef0();
  /* 12e74bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e74bbf:;
  /* 12e74bbf mov esp, ebp */
  ESP = (EBP);
  /* 12e74bc1 pop ebp */
  EBP = (pop32());
  /* 12e74bc2 ret  */
  ESPCHK(0x12e74ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd0 @ 0x12e74bd0 (28 bytes, 11 insns) */
void f_12e74bd0(void) {
  FTRACE(0x12e74bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e74bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e74bd4 mov eax, dword ptr [0x12e90e78] */
  EAX = (r32((uint32_t)(0x12e90e78)));
  /* 12e74bd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e74bdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74bdf mov dword ptr [0x12e90e78], ecx */
  w32((uint32_t)(0x12e90e78), (ECX));
  /* 12e74be5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74be8 mov esp, ebp */
  ESP = (EBP);
  /* 12e74bea pop ebp */
  EBP = (pop32());
  /* 12e74beb ret  */
  ESPCHK(0x12e74bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bf0 @ 0x12e74bf0 (362 bytes, 116 insns) */
void f_12e74bf0(void) {
  FTRACE(0x12e74bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e74bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e74bf7 push esi */
  push32((uint32_t)(ESI));
  /* 12e74bf8 push edi */
  push32((uint32_t)(EDI));
  /* 12e74bf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74bfd jne 0x12e74c2a */
  if (!C.zf) goto L_12e74c2a;
L_12e74bff:;
  /* 12e74bff push 0x12e8a9d4 */
  push32((uint32_t)(0x12e8a9d4u));
  /* 12e74c04 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e74c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74c11 call 0x12e72510 */
  push32(0x12e74c16u); f_12e72510();
  /* 12e74c16 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74c19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74c1c jne 0x12e74c1f */
  if (!C.zf) goto L_12e74c1f;
  /* 12e74c1e int3  */
  x86_unimpl("int3 @ 0x12e74c1e");
L_12e74c1f:;
  /* 12e74c1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74c23 jne 0x12e74bff */
  if (!C.zf) goto L_12e74bff;
  /* 12e74c25 jmp 0x12e74d53 */
  goto L_12e74d53;
L_12e74c2a:;
  /* 12e74c2a push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74c2c call 0x12e76e50 */
  push32(0x12e74c31u); f_12e76e50();
  /* 12e74c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74c34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74c37 mov edx, dword ptr [0x12e8f51c] */
  EDX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e74c3d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e74c3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e74c46 jmp 0x12e74c51 */
  goto L_12e74c51;
L_12e74c48:;
  /* 12e74c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74c4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74c4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e74c51:;
  /* 12e74c51 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74c55 jge 0x12e74c75 */
  if ((C.sf==C.of)) goto L_12e74c75;
  /* 12e74c57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74c5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74c5d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12e74c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74c68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74c6b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12e74c73 jmp 0x12e74c48 */
  goto L_12e74c48;
L_12e74c75:;
  /* 12e74c75 mov edx, dword ptr [0x12e8f51c] */
  EDX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e74c7b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e74c7e jmp 0x12e74c88 */
  goto L_12e74c88;
L_12e74c80:;
  /* 12e74c80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74c83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e74c85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e74c88:;
  /* 12e74c88 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74c8c je 0x12e74d31 */
  if (C.zf) goto L_12e74d31;
  /* 12e74c92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74c95 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e74c98 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e74c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74c9f jl 0x12e74d07 */
  if ((C.sf!=C.of)) goto L_12e74d07;
  /* 12e74ca1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74ca4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e74ca7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e74cad cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74cb0 jge 0x12e74d07 */
  if ((C.sf==C.of)) goto L_12e74d07;
  /* 12e74cb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74cb5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e74cb8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e74cbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74cc1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12e74cc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74cc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74ccb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e74cce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e74cd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74cd7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12e74cdb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74cde mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e74ce1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e74ce6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74ce9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12e74ced mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74cf0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74cf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74cf6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e74cf9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e74cfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74d01 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12e74d05 jmp 0x12e74d2c */
  goto L_12e74d2c;
L_12e74d07:;
  /* 12e74d07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74d0a push edx */
  push32((uint32_t)(EDX));
  /* 12e74d0b push 0x12e8a9b0 */
  push32((uint32_t)(0x12e8a9b0u));
  /* 12e74d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d18 call 0x12e72510 */
  push32(0x12e74d1du); f_12e72510();
  /* 12e74d1d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74d23 jne 0x12e74d26 */
  if (!C.zf) goto L_12e74d26;
  /* 12e74d25 int3  */
  x86_unimpl("int3 @ 0x12e74d25");
L_12e74d26:;
  /* 12e74d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74d2a jne 0x12e74d07 */
  if (!C.zf) goto L_12e74d07;
L_12e74d2c:;
  /* 12e74d2c jmp 0x12e74c80 */
  goto L_12e74c80;
L_12e74d31:;
  /* 12e74d31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74d34 mov edx, dword ptr [0x12e8f524] */
  EDX = (r32((uint32_t)(0x12e8f524)));
  /* 12e74d3a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12e74d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74d40 mov ecx, dword ptr [0x12e8f518] */
  ECX = (r32((uint32_t)(0x12e8f518)));
  /* 12e74d46 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12e74d49 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74d4b call 0x12e76ef0 */
  push32(0x12e74d50u); f_12e76ef0();
  /* 12e74d50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e74d53:;
  /* 12e74d53 pop edi */
  EDI = (pop32());
  /* 12e74d54 pop esi */
  ESI = (pop32());
  /* 12e74d55 pop ebx */
  EBX = (pop32());
  /* 12e74d56 mov esp, ebp */
  ESP = (EBP);
  /* 12e74d58 pop ebp */
  EBP = (pop32());
  /* 12e74d59 ret  */
  ESPCHK(0x12e74bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d60 @ 0x12e74d60 (291 bytes, 95 insns) */
void f_12e74d60(void) {
  FTRACE(0x12e74d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74d61 mov ebp, esp */
  EBP = (ESP);
  /* 12e74d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74d66 push ebx */
  push32((uint32_t)(EBX));
  /* 12e74d67 push esi */
  push32((uint32_t)(ESI));
  /* 12e74d68 push edi */
  push32((uint32_t)(EDI));
  /* 12e74d69 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e74d70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74d74 je 0x12e74d82 */
  if (C.zf) goto L_12e74d82;
  /* 12e74d76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74d7a je 0x12e74d82 */
  if (C.zf) goto L_12e74d82;
  /* 12e74d7c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74d80 jne 0x12e74db0 */
  if (!C.zf) goto L_12e74db0;
L_12e74d82:;
  /* 12e74d82 push 0x12e8a9fc */
  push32((uint32_t)(0x12e8a9fcu));
  /* 12e74d87 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e74d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74d94 call 0x12e72510 */
  push32(0x12e74d99u); f_12e72510();
  /* 12e74d99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74d9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74d9f jne 0x12e74da2 */
  if (!C.zf) goto L_12e74da2;
  /* 12e74da1 int3  */
  x86_unimpl("int3 @ 0x12e74da1");
L_12e74da2:;
  /* 12e74da2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74da6 jne 0x12e74d82 */
  if (!C.zf) goto L_12e74d82;
  /* 12e74da8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e74dab jmp 0x12e74e7c */
  goto L_12e74e7c;
L_12e74db0:;
  /* 12e74db0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e74db7 jmp 0x12e74dc2 */
  goto L_12e74dc2;
L_12e74db9:;
  /* 12e74db9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74dbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74dbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e74dc2:;
  /* 12e74dc2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74dc6 jge 0x12e74e4c */
  if ((C.sf==C.of)) goto L_12e74e4c;
  /* 12e74dcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74dcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e74dd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74dd5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74dd8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12e74ddc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74de0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74de3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74de6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12e74dea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74ded mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e74df0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74df3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74df6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12e74dfa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74dfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74e01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74e04 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12e74e08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74e0e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74e13 jne 0x12e74e22 */
  if (!C.zf) goto L_12e74e22;
  /* 12e74e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74e18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74e1b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74e20 je 0x12e74e47 */
  if (C.zf) goto L_12e74e47;
L_12e74e22:;
  /* 12e74e22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74e26 je 0x12e74e47 */
  if (C.zf) goto L_12e74e47;
  /* 12e74e28 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74e2c jne 0x12e74e40 */
  if (!C.zf) goto L_12e74e40;
  /* 12e74e2e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74e32 jne 0x12e74e47 */
  if (!C.zf) goto L_12e74e47;
  /* 12e74e34 mov eax, dword ptr [0x12e8daa4] */
  EAX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e74e39 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12e74e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74e3e je 0x12e74e47 */
  if (C.zf) goto L_12e74e47;
L_12e74e40:;
  /* 12e74e40 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12e74e47:;
  /* 12e74e47 jmp 0x12e74db9 */
  goto L_12e74db9;
L_12e74e4c:;
  /* 12e74e4c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e74e4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74e52 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12e74e55 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74e58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74e5b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12e74e5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e74e61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e74e64 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12e74e67 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74e6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74e6d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12e74e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74e73 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e74e79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e74e7c:;
  /* 12e74e7c pop edi */
  EDI = (pop32());
  /* 12e74e7d pop esi */
  ESI = (pop32());
  /* 12e74e7e pop ebx */
  EBX = (pop32());
  /* 12e74e7f mov esp, ebp */
  ESP = (EBP);
  /* 12e74e81 pop ebp */
  EBP = (pop32());
  /* 12e74e82 ret  */
  ESPCHK(0x12e74d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e90 @ 0x12e74e90 (697 bytes, 253 insns) */
void f_12e74e90(void) {
  FTRACE(0x12e74e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e74e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e74e91 mov ebp, esp */
  EBP = (ESP);
  /* 12e74e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e74e96 push ebx */
  push32((uint32_t)(EBX));
  /* 12e74e97 push esi */
  push32((uint32_t)(ESI));
  /* 12e74e98 push edi */
  push32((uint32_t)(EDI));
  /* 12e74e99 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e74ea0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e74ea2 call 0x12e76e50 */
  push32(0x12e74ea7u); f_12e76e50();
  /* 12e74ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e74eaa:;
  /* 12e74eaa push 0x12e8aaf4 */
  push32((uint32_t)(0x12e8aaf4u));
  /* 12e74eaf push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e74eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74eba push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74ebc call 0x12e72510 */
  push32(0x12e74ec1u); f_12e72510();
  /* 12e74ec1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74ec4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74ec7 jne 0x12e74eca */
  if (!C.zf) goto L_12e74eca;
  /* 12e74ec9 int3  */
  x86_unimpl("int3 @ 0x12e74ec9");
L_12e74eca:;
  /* 12e74eca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74ece jne 0x12e74eaa */
  if (!C.zf) goto L_12e74eaa;
  /* 12e74ed0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74ed4 je 0x12e74ede */
  if (C.zf) goto L_12e74ede;
  /* 12e74ed6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e74ed9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e74edb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e74ede:;
  /* 12e74ede mov eax, dword ptr [0x12e8f51c] */
  EAX = (r32((uint32_t)(0x12e8f51c)));
  /* 12e74ee3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e74ee6 jmp 0x12e74ef0 */
  goto L_12e74ef0;
L_12e74ee8:;
  /* 12e74ee8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74eeb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e74eed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e74ef0:;
  /* 12e74ef0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74ef4 je 0x12e75112 */
  if (C.zf) goto L_12e75112;
  /* 12e74efa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74efd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74f00 je 0x12e75112 */
  if (C.zf) goto L_12e75112;
  /* 12e74f06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f09 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e74f0c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e74f12 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74f15 je 0x12e74f44 */
  if (C.zf) goto L_12e74f44;
  /* 12e74f17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f1a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e74f1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e74f23 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74f25 je 0x12e74f44 */
  if (C.zf) goto L_12e74f44;
  /* 12e74f27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e74f2d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e74f32 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74f35 jne 0x12e74f49 */
  if (!C.zf) goto L_12e74f49;
  /* 12e74f37 mov ecx, dword ptr [0x12e8daa4] */
  ECX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e74f3d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12e74f40 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74f42 jne 0x12e74f49 */
  if (!C.zf) goto L_12e74f49;
L_12e74f44:;
  /* 12e74f44 jmp 0x12e7510d */
  goto L_12e7510d;
L_12e74f49:;
  /* 12e74f49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f4c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74f50 je 0x12e74fc2 */
  if (C.zf) goto L_12e74fc2;
  /* 12e74f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74f54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e74f56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f59 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e74f5c push ecx */
  push32((uint32_t)(ECX));
  /* 12e74f5d call 0x12e74a00 */
  push32(0x12e74f62u); f_12e74a00();
  /* 12e74f62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74f67 jne 0x12e74f93 */
  if (!C.zf) goto L_12e74f93;
L_12e74f69:;
  /* 12e74f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f6c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e74f6f push eax */
  push32((uint32_t)(EAX));
  /* 12e74f70 push 0x12e8aae0 */
  push32((uint32_t)(0x12e8aae0u));
  /* 12e74f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74f7d call 0x12e72510 */
  push32(0x12e74f82u); f_12e72510();
  /* 12e74f82 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74f85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74f88 jne 0x12e74f8b */
  if (!C.zf) goto L_12e74f8b;
  /* 12e74f8a int3  */
  x86_unimpl("int3 @ 0x12e74f8a");
L_12e74f8b:;
  /* 12e74f8b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e74f8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e74f8f jne 0x12e74f69 */
  if (!C.zf) goto L_12e74f69;
  /* 12e74f91 jmp 0x12e74fc2 */
  goto L_12e74fc2;
L_12e74f93:;
  /* 12e74f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f96 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e74f99 push eax */
  push32((uint32_t)(EAX));
  /* 12e74f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74f9d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e74fa0 push edx */
  push32((uint32_t)(EDX));
  /* 12e74fa1 push 0x12e8aad4 */
  push32((uint32_t)(0x12e8aad4u));
  /* 12e74fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74faa push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74fac push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74fae call 0x12e72510 */
  push32(0x12e74fb3u); f_12e72510();
  /* 12e74fb3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74fb6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74fb9 jne 0x12e74fbc */
  if (!C.zf) goto L_12e74fbc;
  /* 12e74fbb int3  */
  x86_unimpl("int3 @ 0x12e74fbb");
L_12e74fbc:;
  /* 12e74fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74fc0 jne 0x12e74f93 */
  if (!C.zf) goto L_12e74f93;
L_12e74fc2:;
  /* 12e74fc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74fc5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e74fc8 push edx */
  push32((uint32_t)(EDX));
  /* 12e74fc9 push 0x12e8aacc */
  push32((uint32_t)(0x12e8aaccu));
  /* 12e74fce push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e74fd6 call 0x12e72510 */
  push32(0x12e74fdbu); f_12e72510();
  /* 12e74fdb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e74fde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74fe1 jne 0x12e74fe4 */
  if (!C.zf) goto L_12e74fe4;
  /* 12e74fe3 int3  */
  x86_unimpl("int3 @ 0x12e74fe3");
L_12e74fe4:;
  /* 12e74fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e74fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e74fe8 jne 0x12e74fc2 */
  if (!C.zf) goto L_12e74fc2;
  /* 12e74fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74fed mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e74ff0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e74ff6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e74ff9 jne 0x12e7506c */
  if (!C.zf) goto L_12e7506c;
L_12e74ffb:;
  /* 12e74ffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e74ffe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e75001 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75005 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e75008 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e7500b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e75010 push eax */
  push32((uint32_t)(EAX));
  /* 12e75011 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75014 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75017 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75018 push 0x12e8aa98 */
  push32((uint32_t)(0x12e8aa98u));
  /* 12e7501d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7501f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75021 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75023 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75025 call 0x12e72510 */
  push32(0x12e7502au); f_12e72510();
  /* 12e7502a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7502d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75030 jne 0x12e75033 */
  if (!C.zf) goto L_12e75033;
  /* 12e75032 int3  */
  x86_unimpl("int3 @ 0x12e75032");
L_12e75033:;
  /* 12e75033 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e75035 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e75037 jne 0x12e74ffb */
  if (!C.zf) goto L_12e74ffb;
  /* 12e75039 cmp dword ptr [0x12e90e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75040 je 0x12e7505b */
  if (C.zf) goto L_12e7505b;
  /* 12e75042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75045 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e75048 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75049 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7504c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7504f push edx */
  push32((uint32_t)(EDX));
  /* 12e75050 call dword ptr [0x12e90e78] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e90e78))), 0x12e75056u);
  /* 12e75056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75059 jmp 0x12e75067 */
  goto L_12e75067;
L_12e7505b:;
  /* 12e7505b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7505e push eax */
  push32((uint32_t)(EAX));
  /* 12e7505f call 0x12e75150 */
  push32(0x12e75064u); f_12e75150();
  /* 12e75064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e75067:;
  /* 12e75067 jmp 0x12e7510d */
  goto L_12e7510d;
L_12e7506c:;
  /* 12e7506c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7506f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75073 jne 0x12e750b2 */
  if (!C.zf) goto L_12e750b2;
L_12e75075:;
  /* 12e75075 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75078 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e7507b push eax */
  push32((uint32_t)(EAX));
  /* 12e7507c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7507f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75082 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75083 push 0x12e8aa70 */
  push32((uint32_t)(0x12e8aa70u));
  /* 12e75088 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7508a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7508c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7508e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75090 call 0x12e72510 */
  push32(0x12e75095u); f_12e72510();
  /* 12e75095 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75098 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7509b jne 0x12e7509e */
  if (!C.zf) goto L_12e7509e;
  /* 12e7509d int3  */
  x86_unimpl("int3 @ 0x12e7509d");
L_12e7509e:;
  /* 12e7509e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e750a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e750a2 jne 0x12e75075 */
  if (!C.zf) goto L_12e75075;
  /* 12e750a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e750a7 push eax */
  push32((uint32_t)(EAX));
  /* 12e750a8 call 0x12e75150 */
  push32(0x12e750adu); f_12e75150();
  /* 12e750ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e750b0 jmp 0x12e7510d */
  goto L_12e7510d;
L_12e750b2:;
  /* 12e750b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e750b5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e750b8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e750be cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e750c1 jne 0x12e7510d */
  if (!C.zf) goto L_12e7510d;
L_12e750c3:;
  /* 12e750c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e750c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e750c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e750ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e750cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e750d0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e750d3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e750d8 push eax */
  push32((uint32_t)(EAX));
  /* 12e750d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e750dc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e750df push ecx */
  push32((uint32_t)(ECX));
  /* 12e750e0 push 0x12e8aa3c */
  push32((uint32_t)(0x12e8aa3cu));
  /* 12e750e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e750e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e750e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e750eb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e750ed call 0x12e72510 */
  push32(0x12e750f2u); f_12e72510();
  /* 12e750f2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e750f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e750f8 jne 0x12e750fb */
  if (!C.zf) goto L_12e750fb;
  /* 12e750fa int3  */
  x86_unimpl("int3 @ 0x12e750fa");
L_12e750fb:;
  /* 12e750fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e750fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e750ff jne 0x12e750c3 */
  if (!C.zf) goto L_12e750c3;
  /* 12e75101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75104 push eax */
  push32((uint32_t)(EAX));
  /* 12e75105 call 0x12e75150 */
  push32(0x12e7510au); f_12e75150();
  /* 12e7510a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7510d:;
  /* 12e7510d jmp 0x12e74ee8 */
  goto L_12e74ee8;
L_12e75112:;
  /* 12e75112 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e75114 call 0x12e76ef0 */
  push32(0x12e75119u); f_12e76ef0();
  /* 12e75119 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7511c:;
  /* 12e7511c push 0x12e8aa24 */
  push32((uint32_t)(0x12e8aa24u));
  /* 12e75121 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e75126 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75128 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7512a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7512c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7512e call 0x12e72510 */
  push32(0x12e75133u); f_12e72510();
  /* 12e75133 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75136 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75139 jne 0x12e7513c */
  if (!C.zf) goto L_12e7513c;
  /* 12e7513b int3  */
  x86_unimpl("int3 @ 0x12e7513b");
L_12e7513c:;
  /* 12e7513c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7513e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e75140 jne 0x12e7511c */
  if (!C.zf) goto L_12e7511c;
  /* 12e75142 pop edi */
  EDI = (pop32());
  /* 12e75143 pop esi */
  ESI = (pop32());
  /* 12e75144 pop ebx */
  EBX = (pop32());
  /* 12e75145 mov esp, ebp */
  ESP = (EBP);
  /* 12e75147 pop ebp */
  EBP = (pop32());
  /* 12e75148 ret  */
  ESPCHK(0x12e74e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005150 @ 0x12e75150 (276 bytes, 89 insns) */
void f_12e75150(void) {
  FTRACE(0x12e75150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75150 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75151 mov ebp, esp */
  EBP = (ESP);
  /* 12e75153 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75156 push ebx */
  push32((uint32_t)(EBX));
  /* 12e75157 push esi */
  push32((uint32_t)(ESI));
  /* 12e75158 push edi */
  push32((uint32_t)(EDI));
  /* 12e75159 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12e75160 jmp 0x12e7516b */
  goto L_12e7516b;
L_12e75162:;
  /* 12e75162 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e75165 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75168 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12e7516b:;
  /* 12e7516b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7516e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75172 jge 0x12e7517f */
  if ((C.sf==C.of)) goto L_12e7517f;
  /* 12e75174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75177 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12e7517a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12e7517d jmp 0x12e75186 */
  goto L_12e75186;
L_12e7517f:;
  /* 12e7517f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12e75186:;
  /* 12e75186 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e75189 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7518c jge 0x12e7522c */
  if ((C.sf==C.of)) goto L_12e7522c;
  /* 12e75192 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75195 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75198 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12e7519b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12e7519e cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e751a5 jle 0x12e751c3 */
  if ((C.zf||C.sf!=C.of)) goto L_12e751c3;
  /* 12e751a7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12e751ac mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e751af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e751b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e751b6 call 0x12e79460 */
  push32(0x12e751bbu); f_12e79460();
  /* 12e751bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e751be mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12e751c1 jmp 0x12e751e0 */
  goto L_12e751e0;
L_12e751c3:;
  /* 12e751c3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e751c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e751cc mov eax, dword ptr [0x12e8dcb8] */
  EAX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e751d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e751d3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e751d7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12e751dd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12e751e0:;
  /* 12e751e0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e751e4 je 0x12e751f4 */
  if (C.zf) goto L_12e751f4;
  /* 12e751e6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e751e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e751ef mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12e751f2 jmp 0x12e751fb */
  goto L_12e751fb;
L_12e751f4:;
  /* 12e751f4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12e751fb:;
  /* 12e751fb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e751fe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12e75201 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12e75205 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12e75208 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7520e push edx */
  push32((uint32_t)(EDX));
  /* 12e7520f push 0x12e8ab18 */
  push32((uint32_t)(0x12e8ab18u));
  /* 12e75214 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e75217 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7521a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12e7521e push ecx */
  push32((uint32_t)(ECX));
  /* 12e7521f call 0x12e79360 */
  push32(0x12e75224u); f_12e79360();
  /* 12e75224 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75227 jmp 0x12e75162 */
  goto L_12e75162;
L_12e7522c:;
  /* 12e7522c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12e7522f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12e75234:;
  /* 12e75234 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12e75237 push eax */
  push32((uint32_t)(EAX));
  /* 12e75238 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12e7523b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7523c push 0x12e8ab08 */
  push32((uint32_t)(0x12e8ab08u));
  /* 12e75241 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75243 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75245 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75247 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75249 call 0x12e72510 */
  push32(0x12e7524eu); f_12e72510();
  /* 12e7524e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75251 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75254 jne 0x12e75257 */
  if (!C.zf) goto L_12e75257;
  /* 12e75256 int3  */
  x86_unimpl("int3 @ 0x12e75256");
L_12e75257:;
  /* 12e75257 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e75259 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7525b jne 0x12e75234 */
  if (!C.zf) goto L_12e75234;
  /* 12e7525d pop edi */
  EDI = (pop32());
  /* 12e7525e pop esi */
  ESI = (pop32());
  /* 12e7525f pop ebx */
  EBX = (pop32());
  /* 12e75260 mov esp, ebp */
  ESP = (EBP);
  /* 12e75262 pop ebp */
  EBP = (pop32());
  /* 12e75263 ret  */
  ESPCHK(0x12e75150u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x12e75270 (116 bytes, 46 insns) */
void f_12e75270(void) {
  FTRACE(0x12e75270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75270 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75271 mov ebp, esp */
  EBP = (ESP);
  /* 12e75273 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75276 push ebx */
  push32((uint32_t)(EBX));
  /* 12e75277 push esi */
  push32((uint32_t)(ESI));
  /* 12e75278 push edi */
  push32((uint32_t)(EDI));
  /* 12e75279 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12e7527c push eax */
  push32((uint32_t)(EAX));
  /* 12e7527d call 0x12e74bf0 */
  push32(0x12e75282u); f_12e74bf0();
  /* 12e75282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75285 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75289 jne 0x12e752a4 */
  if (!C.zf) goto L_12e752a4;
  /* 12e7528b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7528f jne 0x12e752a4 */
  if (!C.zf) goto L_12e752a4;
  /* 12e75291 mov ecx, dword ptr [0x12e8daa4] */
  ECX = (r32((uint32_t)(0x12e8daa4)));
  /* 12e75297 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7529a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7529c je 0x12e752db */
  if (C.zf) goto L_12e752db;
  /* 12e7529e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e752a2 je 0x12e752db */
  if (C.zf) goto L_12e752db;
L_12e752a4:;
  /* 12e752a4 push 0x12e8ab20 */
  push32((uint32_t)(0x12e8ab20u));
  /* 12e752a9 push 0x12e8a4ec */
  push32((uint32_t)(0x12e8a4ecu));
  /* 12e752ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12e752b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e752b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e752b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e752b6 call 0x12e72510 */
  push32(0x12e752bbu); f_12e72510();
  /* 12e752bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e752be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e752c1 jne 0x12e752c4 */
  if (!C.zf) goto L_12e752c4;
  /* 12e752c3 int3  */
  x86_unimpl("int3 @ 0x12e752c3");
L_12e752c4:;
  /* 12e752c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e752c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e752c8 jne 0x12e752a4 */
  if (!C.zf) goto L_12e752a4;
  /* 12e752ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12e752cc call 0x12e74e90 */
  push32(0x12e752d1u); f_12e74e90();
  /* 12e752d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e752d4 mov eax, 1 */
  EAX = (0x1u);
  /* 12e752d9 jmp 0x12e752dd */
  goto L_12e752dd;
L_12e752db:;
  /* 12e752db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e752dd:;
  /* 12e752dd pop edi */
  EDI = (pop32());
  /* 12e752de pop esi */
  ESI = (pop32());
  /* 12e752df pop ebx */
  EBX = (pop32());
  /* 12e752e0 mov esp, ebp */
  ESP = (EBP);
  /* 12e752e2 pop ebp */
  EBP = (pop32());
  /* 12e752e3 ret  */
  ESPCHK(0x12e75270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x12e752f0 (197 bytes, 79 insns) */
void f_12e752f0(void) {
  FTRACE(0x12e752f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e752f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e752f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e752f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e752f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e752f5 push esi */
  push32((uint32_t)(ESI));
  /* 12e752f6 push edi */
  push32((uint32_t)(EDI));
  /* 12e752f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e752fb jne 0x12e75302 */
  if (!C.zf) goto L_12e75302;
  /* 12e752fd jmp 0x12e753ae */
  goto L_12e753ae;
L_12e75302:;
  /* 12e75302 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e75309 jmp 0x12e75314 */
  goto L_12e75314;
L_12e7530b:;
  /* 12e7530b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7530e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75311 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e75314:;
  /* 12e75314 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75318 jge 0x12e7535e */
  if ((C.sf==C.of)) goto L_12e7535e;
L_12e7531a:;
  /* 12e7531a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7531d mov edx, dword ptr [ecx*4 + 0x12e8dab4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8dab4)));
  /* 12e75324 push edx */
  push32((uint32_t)(EDX));
  /* 12e75325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75328 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7532b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12e7532f push edx */
  push32((uint32_t)(EDX));
  /* 12e75330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75336 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12e7533a push edx */
  push32((uint32_t)(EDX));
  /* 12e7533b push 0x12e8ab7c */
  push32((uint32_t)(0x12e8ab7cu));
  /* 12e75340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75342 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75344 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75346 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75348 call 0x12e72510 */
  push32(0x12e7534du); f_12e72510();
  /* 12e7534d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75350 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75353 jne 0x12e75356 */
  if (!C.zf) goto L_12e75356;
  /* 12e75355 int3  */
  x86_unimpl("int3 @ 0x12e75355");
L_12e75356:;
  /* 12e75356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7535a jne 0x12e7531a */
  if (!C.zf) goto L_12e7531a;
  /* 12e7535c jmp 0x12e7530b */
  goto L_12e7530b;
L_12e7535e:;
  /* 12e7535e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75361 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12e75364 push edx */
  push32((uint32_t)(EDX));
  /* 12e75365 push 0x12e8ab58 */
  push32((uint32_t)(0x12e8ab58u));
  /* 12e7536a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7536c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7536e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75370 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75372 call 0x12e72510 */
  push32(0x12e75377u); f_12e72510();
  /* 12e75377 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7537a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7537d jne 0x12e75380 */
  if (!C.zf) goto L_12e75380;
  /* 12e7537f int3  */
  x86_unimpl("int3 @ 0x12e7537f");
L_12e75380:;
  /* 12e75380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e75384 jne 0x12e7535e */
  if (!C.zf) goto L_12e7535e;
L_12e75386:;
  /* 12e75386 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75389 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12e7538c push edx */
  push32((uint32_t)(EDX));
  /* 12e7538d push 0x12e8ab38 */
  push32((uint32_t)(0x12e8ab38u));
  /* 12e75392 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75394 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75396 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75398 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7539a call 0x12e72510 */
  push32(0x12e7539fu); f_12e72510();
  /* 12e7539f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e753a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e753a5 jne 0x12e753a8 */
  if (!C.zf) goto L_12e753a8;
  /* 12e753a7 int3  */
  x86_unimpl("int3 @ 0x12e753a7");
L_12e753a8:;
  /* 12e753a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e753aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e753ac jne 0x12e75386 */
  if (!C.zf) goto L_12e75386;
L_12e753ae:;
  /* 12e753ae pop edi */
  EDI = (pop32());
  /* 12e753af pop esi */
  ESI = (pop32());
  /* 12e753b0 pop ebx */
  EBX = (pop32());
  /* 12e753b1 mov esp, ebp */
  ESP = (EBP);
  /* 12e753b3 pop ebp */
  EBP = (pop32());
  /* 12e753b4 ret  */
  ESPCHK(0x12e752f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x12e753c0 (329 bytes, 102 insns) */
void f_12e753c0(void) {
  FTRACE(0x12e753c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e753c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e753c1 mov ebp, esp */
  EBP = (ESP);
  /* 12e753c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e753c6 cmp dword ptr [0x12e90ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e753cd jne 0x12e753d4 */
  if (!C.zf) goto L_12e753d4;
  /* 12e753cf call 0x12e79d00 */
  push32(0x12e753d4u); f_12e79d00();
L_12e753d4:;
  /* 12e753d4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e753db mov eax, dword ptr [0x12e8f4b8] */
  EAX = (r32((uint32_t)(0x12e8f4b8)));
  /* 12e753e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e753e3:;
  /* 12e753e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e753e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e753e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e753eb je 0x12e75419 */
  if (C.zf) goto L_12e75419;
  /* 12e753ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e753f0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e753f3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e753f6 je 0x12e75401 */
  if (C.zf) goto L_12e75401;
  /* 12e753f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e753fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e753fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e75401:;
  /* 12e75401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75404 push eax */
  push32((uint32_t)(EAX));
  /* 12e75405 call 0x12e76280 */
  push32(0x12e7540au); f_12e76280();
  /* 12e7540a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7540d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75410 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e75414 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e75417 jmp 0x12e753e3 */
  goto L_12e753e3;
L_12e75419:;
  /* 12e75419 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12e7541b push 0x12e8ab9c */
  push32((uint32_t)(0x12e8ab9cu));
  /* 12e75420 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e75422 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75425 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12e7542c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7542d call 0x12e73450 */
  push32(0x12e75432u); f_12e73450();
  /* 12e75432 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75435 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e75438 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7543b mov dword ptr [0x12e8f4ec], edx */
  w32((uint32_t)(0x12e8f4ec), (EDX));
  /* 12e75441 cmp dword ptr [0x12e8f4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75448 jne 0x12e75454 */
  if (!C.zf) goto L_12e75454;
  /* 12e7544a push 9 */
  push32((uint32_t)(0x9u));
  /* 12e7544c call 0x12e723c0 */
  push32(0x12e75451u); f_12e723c0();
  /* 12e75451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e75454:;
  /* 12e75454 mov eax, dword ptr [0x12e8f4b8] */
  EAX = (r32((uint32_t)(0x12e8f4b8)));
  /* 12e75459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7545c jmp 0x12e75467 */
  goto L_12e75467;
L_12e7545e:;
  /* 12e7545e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75461 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75464 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e75467:;
  /* 12e75467 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7546a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7546d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7546f je 0x12e754d7 */
  if (C.zf) goto L_12e754d7;
  /* 12e75471 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75474 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75475 call 0x12e76280 */
  push32(0x12e7547au); f_12e76280();
  /* 12e7547a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7547d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75480 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e75483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75486 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e75489 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7548c je 0x12e754d5 */
  if (C.zf) goto L_12e754d5;
  /* 12e7548e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12e75490 push 0x12e8ab9c */
  push32((uint32_t)(0x12e8ab9cu));
  /* 12e75495 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e75497 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7549a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7549b call 0x12e73450 */
  push32(0x12e754a0u); f_12e73450();
  /* 12e754a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e754a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e754a6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e754a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e754ab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e754ae jne 0x12e754ba */
  if (!C.zf) goto L_12e754ba;
  /* 12e754b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e754b2 call 0x12e723c0 */
  push32(0x12e754b7u); f_12e723c0();
  /* 12e754b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e754ba:;
  /* 12e754ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e754bd push ecx */
  push32((uint32_t)(ECX));
  /* 12e754be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e754c1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e754c3 push eax */
  push32((uint32_t)(EAX));
  /* 12e754c4 call 0x12e76400 */
  push32(0x12e754c9u); f_12e76400();
  /* 12e754c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e754cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e754cf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e754d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e754d5:;
  /* 12e754d5 jmp 0x12e7545e */
  goto L_12e7545e;
L_12e754d7:;
  /* 12e754d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e754d9 mov edx, dword ptr [0x12e8f4b8] */
  EDX = (r32((uint32_t)(0x12e8f4b8)));
  /* 12e754df push edx */
  push32((uint32_t)(EDX));
  /* 12e754e0 call 0x12e73ee0 */
  push32(0x12e754e5u); f_12e73ee0();
  /* 12e754e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e754e8 mov dword ptr [0x12e8f4b8], 0 */
  w32((uint32_t)(0x12e8f4b8), (0x0u));
  /* 12e754f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e754f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e754fb mov dword ptr [0x12e90fe0], 1 */
  w32((uint32_t)(0x12e90fe0), (0x1u));
  /* 12e75505 mov esp, ebp */
  ESP = (EBP);
  /* 12e75507 pop ebp */
  EBP = (pop32());
  /* 12e75508 ret  */
  ESPCHK(0x12e753c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005510 @ 0x12e75510 (216 bytes, 69 insns) */
void f_12e75510(void) {
  FTRACE(0x12e75510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75510 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75511 mov ebp, esp */
  EBP = (ESP);
  /* 12e75513 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75516 cmp dword ptr [0x12e90ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7551d jne 0x12e75524 */
  if (!C.zf) goto L_12e75524;
  /* 12e7551f call 0x12e79d00 */
  push32(0x12e75524u); f_12e79d00();
L_12e75524:;
  /* 12e75524 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12e75529 push 0x12e8f528 */
  push32((uint32_t)(0x12e8f528u));
  /* 12e7552e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75530 call dword ptr [0x12e9232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9232c))), 0x12e75536u);
  /* 12e75536 mov dword ptr [0x12e8f4fc], 0x12e8f528 */
  w32((uint32_t)(0x12e8f4fc), (0x12e8f528u));
  /* 12e75540 mov eax, dword ptr [0x12e9100c] */
  EAX = (r32((uint32_t)(0x12e9100c)));
  /* 12e75545 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e75548 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7554a jne 0x12e75557 */
  if (!C.zf) goto L_12e75557;
  /* 12e7554c mov edx, dword ptr [0x12e8f4fc] */
  EDX = (r32((uint32_t)(0x12e8f4fc)));
  /* 12e75552 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e75555 jmp 0x12e7555f */
  goto L_12e7555f;
L_12e75557:;
  /* 12e75557 mov eax, dword ptr [0x12e9100c] */
  EAX = (r32((uint32_t)(0x12e9100c)));
  /* 12e7555c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12e7555f:;
  /* 12e7555f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e75562 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e75565 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12e75568 push edx */
  push32((uint32_t)(EDX));
  /* 12e75569 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12e7556c push eax */
  push32((uint32_t)(EAX));
  /* 12e7556d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7556f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75571 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e75574 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75575 call 0x12e755f0 */
  push32(0x12e7557au); f_12e755f0();
  /* 12e7557a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7557d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12e75582 push 0x12e8aba8 */
  push32((uint32_t)(0x12e8aba8u));
  /* 12e75587 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e75589 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7558c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7558f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12e75592 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75593 call 0x12e73450 */
  push32(0x12e75598u); f_12e73450();
  /* 12e75598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7559b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7559e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e755a2 jne 0x12e755ae */
  if (!C.zf) goto L_12e755ae;
  /* 12e755a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e755a6 call 0x12e723c0 */
  push32(0x12e755abu); f_12e723c0();
  /* 12e755ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e755ae:;
  /* 12e755ae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12e755b1 push edx */
  push32((uint32_t)(EDX));
  /* 12e755b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12e755b5 push eax */
  push32((uint32_t)(EAX));
  /* 12e755b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e755b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e755bc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12e755bf push eax */
  push32((uint32_t)(EAX));
  /* 12e755c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e755c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e755c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e755c7 push edx */
  push32((uint32_t)(EDX));
  /* 12e755c8 call 0x12e755f0 */
  push32(0x12e755cdu); f_12e755f0();
  /* 12e755cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e755d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e755d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e755d6 mov dword ptr [0x12e8f4e0], eax */
  w32((uint32_t)(0x12e8f4e0), (EAX));
  /* 12e755db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e755de mov dword ptr [0x12e8f4e4], ecx */
  w32((uint32_t)(0x12e8f4e4), (ECX));
  /* 12e755e4 mov esp, ebp */
  ESP = (EBP);
  /* 12e755e6 pop ebp */
  EBP = (pop32());
  /* 12e755e7 ret  */
  ESPCHK(0x12e75510u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f0 @ 0x12e755f0 (1060 bytes, 360 insns) */
void f_12e755f0(void) {
  FTRACE(0x12e755f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e755f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e755f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e755f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e755f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e755f9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e755ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e75602 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12e75608 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7560b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7560e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75612 je 0x12e75625 */
  if (C.zf) goto L_12e75625;
  /* 12e75614 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e75617 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7561a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e7561c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7561f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75622 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12e75625:;
  /* 12e75625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75628 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7562b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7562e jne 0x12e756fd */
  if (!C.zf) goto L_12e756fd;
L_12e75634:;
  /* 12e75634 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75637 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7563a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7563d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75640 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e75643 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75646 je 0x12e756c2 */
  if (C.zf) goto L_12e756c2;
  /* 12e75648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7564b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e7564e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e75650 je 0x12e756c2 */
  if (C.zf) goto L_12e756c2;
  /* 12e75652 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75655 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e75657 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e75659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7565b mov al, byte ptr [edx + 0x12e90d41] */
  AL = (r8((uint32_t)(EDX + 0x12e90d41)));
  /* 12e75661 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e75664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e75666 je 0x12e75697 */
  if (C.zf) goto L_12e75697;
  /* 12e75668 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7566b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7566d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75670 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e75673 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e75675 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75679 je 0x12e75697 */
  if (C.zf) goto L_12e75697;
  /* 12e7567b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7567e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75681 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e75683 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e75685 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75688 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7568b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e7568e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75691 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75694 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e75697:;
  /* 12e75697 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7569a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7569c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7569f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e756a2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e756a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e756a8 je 0x12e756bd */
  if (C.zf) goto L_12e756bd;
  /* 12e756aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e756ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e756b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e756b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e756b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e756b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e756ba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e756bd:;
  /* 12e756bd jmp 0x12e75634 */
  goto L_12e75634;
L_12e756c2:;
  /* 12e756c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e756c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e756c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e756ca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e756cd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e756cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e756d3 je 0x12e756e4 */
  if (C.zf) goto L_12e756e4;
  /* 12e756d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e756d8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e756db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e756de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e756e1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12e756e4:;
  /* 12e756e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e756e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e756ea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e756ed jne 0x12e756f8 */
  if (!C.zf) goto L_12e756f8;
  /* 12e756ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e756f2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e756f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e756f8:;
  /* 12e756f8 jmp 0x12e757cc */
  goto L_12e757cc;
L_12e756fd:;
  /* 12e756fd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e75700 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e75702 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75705 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e75708 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e7570a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7570e je 0x12e75723 */
  if (C.zf) goto L_12e75723;
  /* 12e75710 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75713 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75716 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e75718 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e7571a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7571d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75720 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e75723:;
  /* 12e75723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75726 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e75728 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12e7572b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7572e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75731 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e75734 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75737 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7573d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7573f mov dl, byte ptr [ecx + 0x12e90d41] */
  DL = (r8((uint32_t)(ECX + 0x12e90d41)));
  /* 12e75745 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e75748 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7574a je 0x12e7577b */
  if (C.zf) goto L_12e7577b;
  /* 12e7574c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7574f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e75751 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75754 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e75757 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e75759 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7575d je 0x12e75772 */
  if (C.zf) goto L_12e75772;
  /* 12e7575f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75765 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e75767 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e75769 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7576c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7576f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e75772:;
  /* 12e75772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75775 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75778 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e7577b:;
  /* 12e7577b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7577e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e75784 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75787 je 0x12e757a7 */
  if (C.zf) goto L_12e757a7;
  /* 12e75789 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7578c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e75791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e75793 je 0x12e757a7 */
  if (C.zf) goto L_12e757a7;
  /* 12e75795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75798 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e7579e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e757a1 jne 0x12e756fd */
  if (!C.zf) goto L_12e756fd;
L_12e757a7:;
  /* 12e757a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e757aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e757b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e757b2 jne 0x12e757bf */
  if (!C.zf) goto L_12e757bf;
  /* 12e757b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e757b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e757ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e757bd jmp 0x12e757cc */
  goto L_12e757cc;
L_12e757bf:;
  /* 12e757bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e757c3 je 0x12e757cc */
  if (C.zf) goto L_12e757cc;
  /* 12e757c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e757c8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12e757cc:;
  /* 12e757cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12e757d3:;
  /* 12e757d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e757d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e757d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e757db je 0x12e757fe */
  if (C.zf) goto L_12e757fe;
L_12e757dd:;
  /* 12e757dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e757e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e757e3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e757e6 je 0x12e757f3 */
  if (C.zf) goto L_12e757f3;
  /* 12e757e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e757eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e757ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e757f1 jne 0x12e757fe */
  if (!C.zf) goto L_12e757fe;
L_12e757f3:;
  /* 12e757f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e757f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e757f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e757fc jmp 0x12e757dd */
  goto L_12e757dd;
L_12e757fe:;
  /* 12e757fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75801 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e75804 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e75806 jne 0x12e7580d */
  if (!C.zf) goto L_12e7580d;
  /* 12e75808 jmp 0x12e759eb */
  goto L_12e759eb;
L_12e7580d:;
  /* 12e7580d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75811 je 0x12e75824 */
  if (C.zf) goto L_12e75824;
  /* 12e75813 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e75816 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75819 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e7581b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7581e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75821 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e75824:;
  /* 12e75824 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e75827 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e75829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7582c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7582f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12e75831:;
  /* 12e75831 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e75838 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12e7583f:;
  /* 12e7583f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75842 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e75845 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75848 jne 0x12e7585e */
  if (!C.zf) goto L_12e7585e;
  /* 12e7584a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7584d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75850 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e75853 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e75856 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75859 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e7585c jmp 0x12e7583f */
  goto L_12e7583f;
L_12e7585e:;
  /* 12e7585e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75861 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e75864 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75867 jne 0x12e758ba */
  if (!C.zf) goto L_12e758ba;
  /* 12e75869 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7586c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7586e mov ecx, 2 */
  ECX = (0x2u);
  /* 12e75873 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e75875 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e75877 jne 0x12e758b2 */
  if (!C.zf) goto L_12e758b2;
  /* 12e75879 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7587d je 0x12e7589f */
  if (C.zf) goto L_12e7589f;
  /* 12e7587f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75882 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e75886 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75889 jne 0x12e75896 */
  if (!C.zf) goto L_12e75896;
  /* 12e7588b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7588e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75891 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e75894 jmp 0x12e7589d */
  goto L_12e7589d;
L_12e75896:;
  /* 12e75896 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e7589d:;
  /* 12e7589d jmp 0x12e758a6 */
  goto L_12e758a6;
L_12e7589f:;
  /* 12e7589f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e758a6:;
  /* 12e758a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e758a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e758ac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12e758af mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e758b2:;
  /* 12e758b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e758b5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e758b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e758ba:;
  /* 12e758ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e758bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e758c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e758c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e758c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e758c8 je 0x12e758ee */
  if (C.zf) goto L_12e758ee;
  /* 12e758ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e758ce je 0x12e758df */
  if (C.zf) goto L_12e758df;
  /* 12e758d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e758d3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12e758d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e758d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e758dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12e758df:;
  /* 12e758df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e758e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e758e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e758e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e758ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e758ec jmp 0x12e758ba */
  goto L_12e758ba;
L_12e758ee:;
  /* 12e758ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e758f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e758f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e758f6 je 0x12e75914 */
  if (C.zf) goto L_12e75914;
  /* 12e758f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e758fc jne 0x12e75919 */
  if (!C.zf) goto L_12e75919;
  /* 12e758fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75901 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e75904 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75907 je 0x12e75914 */
  if (C.zf) goto L_12e75914;
  /* 12e75909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7590c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7590f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75912 jne 0x12e75919 */
  if (!C.zf) goto L_12e75919;
L_12e75914:;
  /* 12e75914 jmp 0x12e759c4 */
  goto L_12e759c4;
L_12e75919:;
  /* 12e75919 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7591d je 0x12e759b6 */
  if (C.zf) goto L_12e759b6;
  /* 12e75923 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75927 je 0x12e7597d */
  if (C.zf) goto L_12e7597d;
  /* 12e75929 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7592c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7592e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e75930 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e75932 mov cl, byte ptr [eax + 0x12e90d41] */
  CL = (r8((uint32_t)(EAX + 0x12e90d41)));
  /* 12e75938 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7593b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7593d je 0x12e75968 */
  if (C.zf) goto L_12e75968;
  /* 12e7593f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75945 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e75947 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e75949 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7594c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7594f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12e75952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75955 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75958 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7595b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7595e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e75960 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75963 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e75966 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e75968:;
  /* 12e75968 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7596b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7596e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e75970 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e75972 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75978 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e7597b jmp 0x12e759a9 */
  goto L_12e759a9;
L_12e7597d:;
  /* 12e7597d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75980 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75982 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e75984 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e75986 mov cl, byte ptr [eax + 0x12e90d41] */
  CL = (r8((uint32_t)(EAX + 0x12e90d41)));
  /* 12e7598c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7598f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e75991 je 0x12e759a9 */
  if (C.zf) goto L_12e759a9;
  /* 12e75993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75996 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75999 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7599c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e7599f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e759a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e759a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e759a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e759a9:;
  /* 12e759a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e759ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e759ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e759b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e759b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e759b6:;
  /* 12e759b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e759b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e759bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e759bf jmp 0x12e75831 */
  goto L_12e75831;
L_12e759c4:;
  /* 12e759c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e759c8 je 0x12e759d9 */
  if (C.zf) goto L_12e759d9;
  /* 12e759ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e759cd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e759d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e759d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e759d6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12e759d9:;
  /* 12e759d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e759dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e759de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e759e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e759e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e759e6 jmp 0x12e757d3 */
  goto L_12e757d3;
L_12e759eb:;
  /* 12e759eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e759ef je 0x12e75a03 */
  if (C.zf) goto L_12e75a03;
  /* 12e759f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e759f4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e759fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e759fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75a00 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e75a03:;
  /* 12e75a03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e75a06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e75a08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75a0b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e75a0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e75a10 mov esp, ebp */
  ESP = (EBP);
  /* 12e75a12 pop ebp */
  EBP = (pop32());
  /* 12e75a13 ret  */
  ESPCHK(0x12e755f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a20 @ 0x12e75a20 (537 bytes, 173 insns) */
void f_12e75a20(void) {
  FTRACE(0x12e75a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75a21 mov ebp, esp */
  EBP = (ESP);
  /* 12e75a23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75a26 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12e75a2d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12e75a34 cmp dword ptr [0x12e8f62c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f62c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75a3b jne 0x12e75a7a */
  if (!C.zf) goto L_12e75a7a;
  /* 12e75a3d call dword ptr [0x12e92388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92388))), 0x12e75a43u);
  /* 12e75a43 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e75a46 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75a4a je 0x12e75a58 */
  if (C.zf) goto L_12e75a58;
  /* 12e75a4c mov dword ptr [0x12e8f62c], 1 */
  w32((uint32_t)(0x12e8f62c), (0x1u));
  /* 12e75a56 jmp 0x12e75a7a */
  goto L_12e75a7a;
L_12e75a58:;
  /* 12e75a58 call dword ptr [0x12e92384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92384))), 0x12e75a5eu);
  /* 12e75a5e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e75a61 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75a65 je 0x12e75a73 */
  if (C.zf) goto L_12e75a73;
  /* 12e75a67 mov dword ptr [0x12e8f62c], 2 */
  w32((uint32_t)(0x12e8f62c), (0x2u));
  /* 12e75a71 jmp 0x12e75a7a */
  goto L_12e75a7a;
L_12e75a73:;
  /* 12e75a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75a75 jmp 0x12e75c35 */
  goto L_12e75c35;
L_12e75a7a:;
  /* 12e75a7a cmp dword ptr [0x12e8f62c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f62c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75a81 jne 0x12e75b7e */
  if (!C.zf) goto L_12e75b7e;
  /* 12e75a87 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75a8b jne 0x12e75aa3 */
  if (!C.zf) goto L_12e75aa3;
  /* 12e75a8d call dword ptr [0x12e92388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92388))), 0x12e75a93u);
  /* 12e75a93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e75a96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75a9a jne 0x12e75aa3 */
  if (!C.zf) goto L_12e75aa3;
  /* 12e75a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75a9e jmp 0x12e75c35 */
  goto L_12e75c35;
L_12e75aa3:;
  /* 12e75aa3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e75aa6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e75aa9:;
  /* 12e75aa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75aac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e75aae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12e75ab1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e75ab3 je 0x12e75ad5 */
  if (C.zf) goto L_12e75ad5;
  /* 12e75ab5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75ab8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75abb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e75abe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75ac1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e75ac3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12e75ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e75ac8 jne 0x12e75ad3 */
  if (!C.zf) goto L_12e75ad3;
  /* 12e75aca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75acd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75ad0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e75ad3:;
  /* 12e75ad3 jmp 0x12e75aa9 */
  goto L_12e75aa9;
L_12e75ad5:;
  /* 12e75ad5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75ad8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75adb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12e75add add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75ae0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e75ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75aeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75aee push edx */
  push32((uint32_t)(EDX));
  /* 12e75aef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e75af2 push eax */
  push32((uint32_t)(EAX));
  /* 12e75af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75af7 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e75afdu);
  /* 12e75afd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e75b00 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75b04 je 0x12e75b24 */
  if (C.zf) goto L_12e75b24;
  /* 12e75b06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12e75b08 push 0x12e8abb4 */
  push32((uint32_t)(0x12e8abb4u));
  /* 12e75b0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e75b0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e75b12 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75b13 call 0x12e73450 */
  push32(0x12e75b18u); f_12e73450();
  /* 12e75b18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75b1b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e75b1e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75b22 jne 0x12e75b35 */
  if (!C.zf) goto L_12e75b35;
L_12e75b24:;
  /* 12e75b24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e75b27 push edx */
  push32((uint32_t)(EDX));
  /* 12e75b28 call dword ptr [0x12e92354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92354))), 0x12e75b2eu);
  /* 12e75b2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75b30 jmp 0x12e75c35 */
  goto L_12e75c35;
L_12e75b35:;
  /* 12e75b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75b39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e75b3c push eax */
  push32((uint32_t)(EAX));
  /* 12e75b3d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e75b40 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75b41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75b44 push edx */
  push32((uint32_t)(EDX));
  /* 12e75b45 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e75b48 push eax */
  push32((uint32_t)(EAX));
  /* 12e75b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75b4d call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e75b53u);
  /* 12e75b53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e75b55 jne 0x12e75b6c */
  if (!C.zf) goto L_12e75b6c;
  /* 12e75b57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e75b59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e75b5c push ecx */
  push32((uint32_t)(ECX));
  /* 12e75b5d call 0x12e73ee0 */
  push32(0x12e75b62u); f_12e73ee0();
  /* 12e75b62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75b65 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12e75b6c:;
  /* 12e75b6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e75b6f push edx */
  push32((uint32_t)(EDX));
  /* 12e75b70 call dword ptr [0x12e92354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92354))), 0x12e75b76u);
  /* 12e75b76 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e75b79 jmp 0x12e75c35 */
  goto L_12e75c35;
L_12e75b7e:;
  /* 12e75b7e cmp dword ptr [0x12e8f62c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f62c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75b85 jne 0x12e75c33 */
  if (!C.zf) goto L_12e75c33;
  /* 12e75b8b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75b8f jne 0x12e75ba7 */
  if (!C.zf) goto L_12e75ba7;
  /* 12e75b91 call dword ptr [0x12e92384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92384))), 0x12e75b97u);
  /* 12e75b97 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e75b9a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75b9e jne 0x12e75ba7 */
  if (!C.zf) goto L_12e75ba7;
  /* 12e75ba0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75ba2 jmp 0x12e75c35 */
  goto L_12e75c35;
L_12e75ba7:;
  /* 12e75ba7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e75baa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e75bad:;
  /* 12e75bad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75bb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e75bb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e75bb5 je 0x12e75bd5 */
  if (C.zf) goto L_12e75bd5;
  /* 12e75bb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75bba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75bbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e75bc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75bc3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e75bc6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e75bc8 jne 0x12e75bd3 */
  if (!C.zf) goto L_12e75bd3;
  /* 12e75bca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75bcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75bd0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12e75bd3:;
  /* 12e75bd3 jmp 0x12e75bad */
  goto L_12e75bad;
L_12e75bd5:;
  /* 12e75bd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75bd8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75bdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75bde mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e75be1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12e75be6 push 0x12e8abb4 */
  push32((uint32_t)(0x12e8abb4u));
  /* 12e75beb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e75bed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e75bf0 push edx */
  push32((uint32_t)(EDX));
  /* 12e75bf1 call 0x12e73450 */
  push32(0x12e75bf6u); f_12e73450();
  /* 12e75bf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75bf9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e75bfc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75c00 jne 0x12e75c10 */
  if (!C.zf) goto L_12e75c10;
  /* 12e75c02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e75c05 push eax */
  push32((uint32_t)(EAX));
  /* 12e75c06 call dword ptr [0x12e92378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92378))), 0x12e75c0cu);
  /* 12e75c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75c0e jmp 0x12e75c35 */
  goto L_12e75c35;
L_12e75c10:;
  /* 12e75c10 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e75c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75c14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e75c17 push edx */
  push32((uint32_t)(EDX));
  /* 12e75c18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75c1b push eax */
  push32((uint32_t)(EAX));
  /* 12e75c1c call 0x12e79d30 */
  push32(0x12e75c21u); f_12e79d30();
  /* 12e75c21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75c24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e75c27 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75c28 call dword ptr [0x12e92378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92378))), 0x12e75c2eu);
  /* 12e75c2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75c31 jmp 0x12e75c35 */
  goto L_12e75c35;
L_12e75c33:;
  /* 12e75c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e75c35:;
  /* 12e75c35 mov esp, ebp */
  ESP = (EBP);
  /* 12e75c37 pop ebp */
  EBP = (pop32());
  /* 12e75c38 ret  */
  ESPCHK(0x12e75a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c40 @ 0x12e75c40 (77 bytes, 25 insns) */
void f_12e75c40(void) {
  FTRACE(0x12e75c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75c41 mov ebp, esp */
  EBP = (ESP);
  /* 12e75c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75c45 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12e75c4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75c4c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75c50 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12e75c53 push eax */
  push32((uint32_t)(EAX));
  /* 12e75c54 call dword ptr [0x12e9237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9237c))), 0x12e75c5au);
  /* 12e75c5a mov dword ptr [0x12e90e6c], eax */
  w32((uint32_t)(0x12e90e6c), (EAX));
  /* 12e75c5f cmp dword ptr [0x12e90e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75c66 jne 0x12e75c6c */
  if (!C.zf) goto L_12e75c6c;
  /* 12e75c68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75c6a jmp 0x12e75c8b */
  goto L_12e75c8b;
L_12e75c6c:;
  /* 12e75c6c call 0x12e776f0 */
  push32(0x12e75c71u); f_12e776f0();
  /* 12e75c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e75c73 jne 0x12e75c86 */
  if (!C.zf) goto L_12e75c86;
  /* 12e75c75 mov ecx, dword ptr [0x12e90e6c] */
  ECX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e75c7b push ecx */
  push32((uint32_t)(ECX));
  /* 12e75c7c call dword ptr [0x12e9238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9238c))), 0x12e75c82u);
  /* 12e75c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e75c84 jmp 0x12e75c8b */
  goto L_12e75c8b;
L_12e75c86:;
  /* 12e75c86 mov eax, 1 */
  EAX = (0x1u);
L_12e75c8b:;
  /* 12e75c8b pop ebp */
  EBP = (pop32());
  /* 12e75c8c ret  */
  ESPCHK(0x12e75c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x12e75c90 (156 bytes, 48 insns) */
void f_12e75c90(void) {
  FTRACE(0x12e75c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75c91 mov ebp, esp */
  EBP = (ESP);
  /* 12e75c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75c96 mov eax, dword ptr [0x12e90e68] */
  EAX = (r32((uint32_t)(0x12e90e68)));
  /* 12e75c9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e75c9e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e75ca5 jmp 0x12e75cb0 */
  goto L_12e75cb0;
L_12e75ca7:;
  /* 12e75ca7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75caa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75cad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e75cb0:;
  /* 12e75cb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75cb3 cmp edx, dword ptr [0x12e90e64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e90e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75cb9 jge 0x12e75d06 */
  if ((C.sf==C.of)) goto L_12e75d06;
  /* 12e75cbb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12e75cc0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12e75cc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75cc8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e75ccb push ecx */
  push32((uint32_t)(ECX));
  /* 12e75ccc call dword ptr [0x12e92394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92394))), 0x12e75cd2u);
  /* 12e75cd2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12e75cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75cd9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75cdc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12e75cdf push eax */
  push32((uint32_t)(EAX));
  /* 12e75ce0 call dword ptr [0x12e92394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92394))), 0x12e75ce6u);
  /* 12e75ce6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75ce9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e75cec push edx */
  push32((uint32_t)(EDX));
  /* 12e75ced push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75cef mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e75cf4 push eax */
  push32((uint32_t)(EAX));
  /* 12e75cf5 call dword ptr [0x12e92390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92390))), 0x12e75cfbu);
  /* 12e75cfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75cfe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75d01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e75d04 jmp 0x12e75ca7 */
  goto L_12e75ca7;
L_12e75d06:;
  /* 12e75d06 mov edx, dword ptr [0x12e90e68] */
  EDX = (r32((uint32_t)(0x12e90e68)));
  /* 12e75d0c push edx */
  push32((uint32_t)(EDX));
  /* 12e75d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75d0f mov eax, dword ptr [0x12e90e6c] */
  EAX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e75d14 push eax */
  push32((uint32_t)(EAX));
  /* 12e75d15 call dword ptr [0x12e92390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92390))), 0x12e75d1bu);
  /* 12e75d1b mov ecx, dword ptr [0x12e90e6c] */
  ECX = (r32((uint32_t)(0x12e90e6c)));
  /* 12e75d21 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75d22 call dword ptr [0x12e9238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9238c))), 0x12e75d28u);
  /* 12e75d28 mov esp, ebp */
  ESP = (EBP);
  /* 12e75d2a pop ebp */
  EBP = (pop32());
  /* 12e75d2b ret  */
  ESPCHK(0x12e75c90u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12e75d30 (73 bytes, 19 insns) */
void f_12e75d30(void) {
  FTRACE(0x12e75d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75d31 mov ebp, esp */
  EBP = (ESP);
  /* 12e75d33 cmp dword ptr [0x12e8f4c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75d3a je 0x12e75d4e */
  if (C.zf) goto L_12e75d4e;
  /* 12e75d3c cmp dword ptr [0x12e8f4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75d43 jne 0x12e75d77 */
  if (!C.zf) goto L_12e75d77;
  /* 12e75d45 cmp dword ptr [0x12e8f4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75d4c jne 0x12e75d77 */
  if (!C.zf) goto L_12e75d77;
L_12e75d4e:;
  /* 12e75d4e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12e75d53 call 0x12e75d80 */
  push32(0x12e75d58u); f_12e75d80();
  /* 12e75d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75d5b cmp dword ptr [0x12e8f630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75d62 je 0x12e75d6a */
  if (C.zf) goto L_12e75d6a;
  /* 12e75d64 call dword ptr [0x12e8f630] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f630))), 0x12e75d6au);
L_12e75d6a:;
  /* 12e75d6a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12e75d6f call 0x12e75d80 */
  push32(0x12e75d74u); f_12e75d80();
  /* 12e75d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e75d77:;
  /* 12e75d77 pop ebp */
  EBP = (pop32());
  /* 12e75d78 ret  */
  ESPCHK(0x12e75d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d80 @ 0x12e75d80 (447 bytes, 131 insns) */
void f_12e75d80(void) {
  FTRACE(0x12e75d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75d81 mov ebp, esp */
  EBP = (ESP);
  /* 12e75d83 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75d89 push ebx */
  push32((uint32_t)(EBX));
  /* 12e75d8a push esi */
  push32((uint32_t)(ESI));
  /* 12e75d8b push edi */
  push32((uint32_t)(EDI));
  /* 12e75d8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e75d93 jmp 0x12e75d9e */
  goto L_12e75d9e;
L_12e75d95:;
  /* 12e75d95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75d98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75d9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e75d9e:;
  /* 12e75d9e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75da2 jae 0x12e75db7 */
  if (!C.cf) goto L_12e75db7;
  /* 12e75da4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75da7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75daa cmp edx, dword ptr [ecx*8 + 0x12e8dad0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12e8dad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75db1 jne 0x12e75db5 */
  if (!C.zf) goto L_12e75db5;
  /* 12e75db3 jmp 0x12e75db7 */
  goto L_12e75db7;
L_12e75db5:;
  /* 12e75db5 jmp 0x12e75d95 */
  goto L_12e75d95;
L_12e75db7:;
  /* 12e75db7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75dba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75dbd cmp ecx, dword ptr [eax*8 + 0x12e8dad0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e8dad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75dc4 jne 0x12e75f38 */
  if (!C.zf) goto L_12e75f38;
  /* 12e75dca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75dd1 je 0x12e75df4 */
  if (C.zf) goto L_12e75df4;
  /* 12e75dd3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75dd6 mov eax, dword ptr [edx*8 + 0x12e8dad4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e8dad4)));
  /* 12e75ddd push eax */
  push32((uint32_t)(EAX));
  /* 12e75dde push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75de0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75de4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e75de6 call 0x12e72510 */
  push32(0x12e75debu); f_12e72510();
  /* 12e75deb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75dee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75df1 jne 0x12e75df4 */
  if (!C.zf) goto L_12e75df4;
  /* 12e75df3 int3  */
  x86_unimpl("int3 @ 0x12e75df3");
L_12e75df4:;
  /* 12e75df4 cmp dword ptr [0x12e8f4c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75dfb je 0x12e75e0f */
  if (C.zf) goto L_12e75e0f;
  /* 12e75dfd cmp dword ptr [0x12e8f4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75e04 jne 0x12e75e48 */
  if (!C.zf) goto L_12e75e48;
  /* 12e75e06 cmp dword ptr [0x12e8f4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75e0d jne 0x12e75e48 */
  if (!C.zf) goto L_12e75e48;
L_12e75e0f:;
  /* 12e75e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75e11 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12e75e14 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75e15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75e18 mov eax, dword ptr [edx*8 + 0x12e8dad4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e8dad4)));
  /* 12e75e1f push eax */
  push32((uint32_t)(EAX));
  /* 12e75e20 call 0x12e76280 */
  push32(0x12e75e25u); f_12e76280();
  /* 12e75e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75e28 push eax */
  push32((uint32_t)(EAX));
  /* 12e75e29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75e2c mov edx, dword ptr [ecx*8 + 0x12e8dad4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12e8dad4)));
  /* 12e75e33 push edx */
  push32((uint32_t)(EDX));
  /* 12e75e34 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12e75e36 call dword ptr [0x12e92310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92310))), 0x12e75e3cu);
  /* 12e75e3c push eax */
  push32((uint32_t)(EAX));
  /* 12e75e3d call dword ptr [0x12e92314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92314))), 0x12e75e43u);
  /* 12e75e43 jmp 0x12e75f38 */
  goto L_12e75f38;
L_12e75e48:;
  /* 12e75e48 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75e4f je 0x12e75f38 */
  if (C.zf) goto L_12e75f38;
  /* 12e75e55 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12e75e5a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12e75e60 push eax */
  push32((uint32_t)(EAX));
  /* 12e75e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75e63 call dword ptr [0x12e9232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9232c))), 0x12e75e69u);
  /* 12e75e69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e75e6b jne 0x12e75e81 */
  if (!C.zf) goto L_12e75e81;
  /* 12e75e6d push 0x12e8a41c */
  push32((uint32_t)(0x12e8a41cu));
  /* 12e75e72 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12e75e78 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75e79 call 0x12e76400 */
  push32(0x12e75e7eu); f_12e76400();
  /* 12e75e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e75e81:;
  /* 12e75e81 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12e75e87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e75e8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75e8d push eax */
  push32((uint32_t)(EAX));
  /* 12e75e8e call 0x12e76280 */
  push32(0x12e75e93u); f_12e76280();
  /* 12e75e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75e96 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75e99 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75e9c jbe 0x12e75eca */
  if ((C.cf||C.zf)) goto L_12e75eca;
  /* 12e75e9e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12e75ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75ea5 call 0x12e76280 */
  push32(0x12e75eaau); f_12e76280();
  /* 12e75eaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75ead mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75eb0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12e75eb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e75eb7 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e75eb9 push 0x12e8a418 */
  push32((uint32_t)(0x12e8a418u));
  /* 12e75ebe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75ec2 call 0x12e76c70 */
  push32(0x12e75ec7u); f_12e76c70();
  /* 12e75ec7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e75eca:;
  /* 12e75eca push 0x12e8ae70 */
  push32((uint32_t)(0x12e8ae70u));
  /* 12e75ecf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12e75ed5 push edx */
  push32((uint32_t)(EDX));
  /* 12e75ed6 call 0x12e76400 */
  push32(0x12e75edbu); f_12e76400();
  /* 12e75edb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75ede mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e75ee1 push eax */
  push32((uint32_t)(EAX));
  /* 12e75ee2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12e75ee8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75ee9 call 0x12e76410 */
  push32(0x12e75eeeu); f_12e76410();
  /* 12e75eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75ef1 push 0x12e8a390 */
  push32((uint32_t)(0x12e8a390u));
  /* 12e75ef6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12e75efc push edx */
  push32((uint32_t)(EDX));
  /* 12e75efd call 0x12e76410 */
  push32(0x12e75f02u); f_12e76410();
  /* 12e75f02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75f05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e75f08 mov ecx, dword ptr [eax*8 + 0x12e8dad4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12e8dad4)));
  /* 12e75f0f push ecx */
  push32((uint32_t)(ECX));
  /* 12e75f10 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12e75f16 push edx */
  push32((uint32_t)(EDX));
  /* 12e75f17 call 0x12e76410 */
  push32(0x12e75f1cu); f_12e76410();
  /* 12e75f1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75f1f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12e75f24 push 0x12e8ae48 */
  push32((uint32_t)(0x12e8ae48u));
  /* 12e75f29 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12e75f2f push eax */
  push32((uint32_t)(EAX));
  /* 12e75f30 call 0x12e76bb0 */
  push32(0x12e75f35u); f_12e76bb0();
  /* 12e75f35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e75f38:;
  /* 12e75f38 pop edi */
  EDI = (pop32());
  /* 12e75f39 pop esi */
  ESI = (pop32());
  /* 12e75f3a pop ebx */
  EBX = (pop32());
  /* 12e75f3b mov esp, ebp */
  ESP = (EBP);
  /* 12e75f3d pop ebp */
  EBP = (pop32());
  /* 12e75f3e ret  */
  ESPCHK(0x12e75d80u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12e75f40 (80 bytes, 27 insns) */
void f_12e75f40(void) {
  FTRACE(0x12e75f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75f41 mov ebp, esp */
  EBP = (ESP);
  /* 12e75f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75f44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e75f4b jmp 0x12e75f56 */
  goto L_12e75f56;
L_12e75f4d:;
  /* 12e75f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75f50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75f53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e75f56:;
  /* 12e75f56 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75f5a jae 0x12e75f6f */
  if (!C.cf) goto L_12e75f6f;
  /* 12e75f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75f5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75f62 cmp edx, dword ptr [ecx*8 + 0x12e8dad0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12e8dad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75f69 jne 0x12e75f6d */
  if (!C.zf) goto L_12e75f6d;
  /* 12e75f6b jmp 0x12e75f6f */
  goto L_12e75f6f;
L_12e75f6d:;
  /* 12e75f6d jmp 0x12e75f4d */
  goto L_12e75f4d;
L_12e75f6f:;
  /* 12e75f6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75f72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75f75 cmp ecx, dword ptr [eax*8 + 0x12e8dad0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e8dad0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75f7c jne 0x12e75f8a */
  if (!C.zf) goto L_12e75f8a;
  /* 12e75f7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75f81 mov eax, dword ptr [edx*8 + 0x12e8dad4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e8dad4)));
  /* 12e75f88 jmp 0x12e75f8c */
  goto L_12e75f8c;
L_12e75f8a:;
  /* 12e75f8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e75f8c:;
  /* 12e75f8c mov esp, ebp */
  ESP = (EBP);
  /* 12e75f8e pop ebp */
  EBP = (pop32());
  /* 12e75f8f ret  */
  ESPCHK(0x12e75f40u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12e75f90 (66 bytes, 28 insns) */
void f_12e75f90(void) {
  FTRACE(0x12e75f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75f91 mov ebp, esp */
  EBP = (ESP);
  /* 12e75f93 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75f97 jne 0x12e75fb7 */
  if (!C.zf) goto L_12e75fb7;
  /* 12e75f99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75f9d jge 0x12e75fb7 */
  if ((C.sf==C.of)) goto L_12e75fb7;
  /* 12e75f9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e75fa1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75fa4 push eax */
  push32((uint32_t)(EAX));
  /* 12e75fa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e75fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75fa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75fac push edx */
  push32((uint32_t)(EDX));
  /* 12e75fad call 0x12e75fe0 */
  push32(0x12e75fb2u); f_12e75fe0();
  /* 12e75fb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75fb5 jmp 0x12e75fcd */
  goto L_12e75fcd;
L_12e75fb7:;
  /* 12e75fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e75fb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e75fbc push eax */
  push32((uint32_t)(EAX));
  /* 12e75fbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e75fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e75fc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e75fc4 push edx */
  push32((uint32_t)(EDX));
  /* 12e75fc5 call 0x12e75fe0 */
  push32(0x12e75fcau); f_12e75fe0();
  /* 12e75fca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e75fcd:;
  /* 12e75fcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e75fd0 pop ebp */
  EBP = (pop32());
  /* 12e75fd1 ret  */
  ESPCHK(0x12e75f90u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12e75fe0 (194 bytes, 71 insns) */
void f_12e75fe0(void) {
  FTRACE(0x12e75fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e75fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e75fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12e75fe3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e75fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e75fe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e75fec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e75ff0 je 0x12e76009 */
  if (C.zf) goto L_12e76009;
  /* 12e75ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75ff5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12e75ff8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e75ffb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e75ffe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e76001 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76004 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e76006 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e76009:;
  /* 12e76009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7600c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e7600f:;
  /* 12e7600f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76012 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e76014 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e76017 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e7601a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7601d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7601f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e76022 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e76025 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76029 jbe 0x12e76041 */
  if ((C.cf||C.zf)) goto L_12e76041;
  /* 12e7602b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7602e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76034 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e76036 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76039 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7603c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7603f jmp 0x12e76055 */
  goto L_12e76055;
L_12e76041:;
  /* 12e76041 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e76044 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7604a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e7604c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7604f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76052 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e76055:;
  /* 12e76055 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76059 ja 0x12e7600f */
  if ((!C.cf&&!C.zf)) goto L_12e7600f;
  /* 12e7605b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7605e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e76061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76064 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76067 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e7606a:;
  /* 12e7606a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7606d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e7606f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12e76072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76075 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76078 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e7607a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e7607c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7607f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12e76082 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e76084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76087 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7608a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7608d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76090 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76093 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e76096 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76099 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7609c jb 0x12e7606a */
  if (C.cf) goto L_12e7606a;
  /* 12e7609e mov esp, ebp */
  ESP = (EBP);
  /* 12e760a0 pop ebp */
  EBP = (pop32());
  /* 12e760a1 ret  */
  ESPCHK(0x12e75fe0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12e760b0 (63 bytes, 24 insns) */
void f_12e760b0(void) {
  FTRACE(0x12e760b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e760b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e760b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e760b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e760b4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e760b8 jne 0x12e760c9 */
  if (!C.zf) goto L_12e760c9;
  /* 12e760ba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e760be jge 0x12e760c9 */
  if ((C.sf==C.of)) goto L_12e760c9;
  /* 12e760c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e760c7 jmp 0x12e760d0 */
  goto L_12e760d0;
L_12e760c9:;
  /* 12e760c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e760d0:;
  /* 12e760d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e760d3 push eax */
  push32((uint32_t)(EAX));
  /* 12e760d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e760d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e760d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e760db push edx */
  push32((uint32_t)(EDX));
  /* 12e760dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e760df push eax */
  push32((uint32_t)(EAX));
  /* 12e760e0 call 0x12e75fe0 */
  push32(0x12e760e5u); f_12e75fe0();
  /* 12e760e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e760e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e760eb mov esp, ebp */
  ESP = (EBP);
  /* 12e760ed pop ebp */
  EBP = (pop32());
  /* 12e760ee ret  */
  ESPCHK(0x12e760b0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12e760f0 (30 bytes, 14 insns) */
void f_12e760f0(void) {
  FTRACE(0x12e760f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e760f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e760f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e760f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e760f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e760f8 push eax */
  push32((uint32_t)(EAX));
  /* 12e760f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e760fc push ecx */
  push32((uint32_t)(ECX));
  /* 12e760fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76100 push edx */
  push32((uint32_t)(EDX));
  /* 12e76101 call 0x12e75fe0 */
  push32(0x12e76106u); f_12e75fe0();
  /* 12e76106 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76109 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7610c pop ebp */
  EBP = (pop32());
  /* 12e7610d ret  */
  ESPCHK(0x12e760f0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12e76110 (72 bytes, 28 insns) */
void f_12e76110(void) {
  FTRACE(0x12e76110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76110 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76111 mov ebp, esp */
  EBP = (ESP);
  /* 12e76113 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76114 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76118 jne 0x12e76131 */
  if (!C.zf) goto L_12e76131;
  /* 12e7611a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7611e jg 0x12e76131 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e76131;
  /* 12e76120 jl 0x12e76128 */
  if ((C.sf!=C.of)) goto L_12e76128;
  /* 12e76122 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76126 jae 0x12e76131 */
  if (!C.cf) goto L_12e76131;
L_12e76128:;
  /* 12e76128 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e7612f jmp 0x12e76138 */
  goto L_12e76138;
L_12e76131:;
  /* 12e76131 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e76138:;
  /* 12e76138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7613b push eax */
  push32((uint32_t)(EAX));
  /* 12e7613c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7613f push ecx */
  push32((uint32_t)(ECX));
  /* 12e76140 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e76143 push edx */
  push32((uint32_t)(EDX));
  /* 12e76144 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76147 push eax */
  push32((uint32_t)(EAX));
  /* 12e76148 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7614b push ecx */
  push32((uint32_t)(ECX));
  /* 12e7614c call 0x12e76160 */
  push32(0x12e76151u); f_12e76160();
  /* 12e76151 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e76154 mov esp, ebp */
  ESP = (EBP);
  /* 12e76156 pop ebp */
  EBP = (pop32());
  /* 12e76157 ret  */
  ESPCHK(0x12e76110u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12e76160 (242 bytes, 91 insns) */
void f_12e76160(void) {
  FTRACE(0x12e76160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76160 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76161 mov ebp, esp */
  EBP = (ESP);
  /* 12e76163 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76166 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e76169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7616c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76170 je 0x12e76194 */
  if (C.zf) goto L_12e76194;
  /* 12e76172 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76175 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12e76178 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7617b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7617e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e76181 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76184 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e76186 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76189 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7618c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7618e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e76191 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12e76194:;
  /* 12e76194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76197 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e7619a:;
  /* 12e7619a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7619d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7619f push ecx */
  push32((uint32_t)(ECX));
  /* 12e761a0 push eax */
  push32((uint32_t)(EAX));
  /* 12e761a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e761a4 push edx */
  push32((uint32_t)(EDX));
  /* 12e761a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e761a8 push eax */
  push32((uint32_t)(EAX));
  /* 12e761a9 call 0x12e7a0e0 */
  push32(0x12e761aeu); f_12e7a0e0();
  /* 12e761ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e761b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e761b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e761b6 push edx */
  push32((uint32_t)(EDX));
  /* 12e761b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e761b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e761bb push eax */
  push32((uint32_t)(EAX));
  /* 12e761bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e761bf push ecx */
  push32((uint32_t)(ECX));
  /* 12e761c0 call 0x12e7a070 */
  push32(0x12e761c5u); f_12e7a070();
  /* 12e761c5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e761c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12e761cb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e761cf jbe 0x12e761e7 */
  if ((C.cf||C.zf)) goto L_12e761e7;
  /* 12e761d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e761d4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e761d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e761da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e761dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e761df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e761e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e761e5 jmp 0x12e761fb */
  goto L_12e761fb;
L_12e761e7:;
  /* 12e761e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e761ea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e761ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e761f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e761f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e761f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e761f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e761fb:;
  /* 12e761fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e761ff ja 0x12e7619a */
  if ((!C.cf&&!C.zf)) goto L_12e7619a;
  /* 12e76201 jb 0x12e76209 */
  if (C.cf) goto L_12e76209;
  /* 12e76203 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76207 ja 0x12e7619a */
  if ((!C.cf&&!C.zf)) goto L_12e7619a;
L_12e76209:;
  /* 12e76209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7620c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e7620f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76212 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76215 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e76218:;
  /* 12e76218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7621b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e7621d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12e76220 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76223 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76226 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e76228 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e7622a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7622d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12e76230 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12e76232 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76235 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76238 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e7623b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7623e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76241 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e76244 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76247 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7624a jb 0x12e76218 */
  if (C.cf) goto L_12e76218;
  /* 12e7624c mov esp, ebp */
  ESP = (EBP);
  /* 12e7624e pop ebp */
  EBP = (pop32());
  /* 12e7624f ret 0x14 */
  ESPCHK(0x12e76160u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12e76260 (31 bytes, 15 insns) */
void f_12e76260(void) {
  FTRACE(0x12e76260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76260 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76261 mov ebp, esp */
  EBP = (ESP);
  /* 12e76263 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e76265 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e76268 push eax */
  push32((uint32_t)(EAX));
  /* 12e76269 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7626c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7626d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76270 push edx */
  push32((uint32_t)(EDX));
  /* 12e76271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76274 push eax */
  push32((uint32_t)(EAX));
  /* 12e76275 call 0x12e76160 */
  push32(0x12e7627au); f_12e76160();
  /* 12e7627a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7627d pop ebp */
  EBP = (pop32());
  /* 12e7627e ret  */
  ESPCHK(0x12e76260u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12e76280 (123 bytes, 44 insns) */
void f_12e76280(void) {
  FTRACE(0x12e76280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76280 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e76284 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e7628a je 0x12e762a0 */
  if (C.zf) goto L_12e762a0;
L_12e7628c:;
  /* 12e7628c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12e7628e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e7628f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e76291 je 0x12e762d3 */
  if (C.zf) goto L_12e762d3;
  /* 12e76293 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e76299 jne 0x12e7628c */
  if (!C.zf) goto L_12e7628c;
  /* 12e7629b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12e762a0:;
  /* 12e762a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e762a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e762a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e762a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e762ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e762ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e762b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e762b6 je 0x12e762a0 */
  if (C.zf) goto L_12e762a0;
  /* 12e762b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e762bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e762bd je 0x12e762f1 */
  if (C.zf) goto L_12e762f1;
  /* 12e762bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e762c1 je 0x12e762e7 */
  if (C.zf) goto L_12e762e7;
  /* 12e762c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e762c8 je 0x12e762dd */
  if (C.zf) goto L_12e762dd;
  /* 12e762ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e762cf je 0x12e762d3 */
  if (C.zf) goto L_12e762d3;
  /* 12e762d1 jmp 0x12e762a0 */
  goto L_12e762a0;
L_12e762d3:;
  /* 12e762d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12e762d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e762da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e762dc ret  */
  ESPCHK(0x12e76280u, _esp0);
  ESP += 4; return;
L_12e762dd:;
  /* 12e762dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12e762e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e762e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e762e6 ret  */
  ESPCHK(0x12e76280u, _esp0);
  ESP += 4; return;
L_12e762e7:;
  /* 12e762e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12e762ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e762ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e762f0 ret  */
  ESPCHK(0x12e76280u, _esp0);
  ESP += 4; return;
L_12e762f1:;
  /* 12e762f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12e762f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e762f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e762fa ret  */
  ESPCHK(0x12e76280u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x12e76300 (249 bytes, 93 insns) */
void f_12e76300(void) {
  FTRACE(0x12e76300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76300 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76301 mov ebp, esp */
  EBP = (ESP);
  /* 12e76303 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76306 push ebx */
  push32((uint32_t)(EBX));
  /* 12e76307 push esi */
  push32((uint32_t)(ESI));
  /* 12e76308 push edi */
  push32((uint32_t)(EDI));
  /* 12e76309 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12e7630c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e7630f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12e76312 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12e76315:;
  /* 12e76315 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76319 jne 0x12e76339 */
  if (!C.zf) goto L_12e76339;
  /* 12e7631b push 0x12e8aea8 */
  push32((uint32_t)(0x12e8aea8u));
  /* 12e76320 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e76322 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12e76324 push 0x12e8ae9c */
  push32((uint32_t)(0x12e8ae9cu));
  /* 12e76329 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7632b call 0x12e72510 */
  push32(0x12e76330u); f_12e72510();
  /* 12e76330 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76333 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76336 jne 0x12e76339 */
  if (!C.zf) goto L_12e76339;
  /* 12e76338 int3  */
  x86_unimpl("int3 @ 0x12e76338");
L_12e76339:;
  /* 12e76339 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7633b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7633d jne 0x12e76315 */
  if (!C.zf) goto L_12e76315;
L_12e7633f:;
  /* 12e7633f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76343 jne 0x12e76363 */
  if (!C.zf) goto L_12e76363;
  /* 12e76345 push 0x12e8ae8c */
  push32((uint32_t)(0x12e8ae8cu));
  /* 12e7634a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7634c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12e7634e push 0x12e8ae9c */
  push32((uint32_t)(0x12e8ae9cu));
  /* 12e76353 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e76355 call 0x12e72510 */
  push32(0x12e7635au); f_12e72510();
  /* 12e7635a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7635d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76360 jne 0x12e76363 */
  if (!C.zf) goto L_12e76363;
  /* 12e76362 int3  */
  x86_unimpl("int3 @ 0x12e76362");
L_12e76363:;
  /* 12e76363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e76365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e76367 jne 0x12e7633f */
  if (!C.zf) goto L_12e7633f;
  /* 12e76369 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7636c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12e76373 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76379 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e7637c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7637f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76382 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12e76384 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76387 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7638a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12e7638d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e76390 push edx */
  push32((uint32_t)(EDX));
  /* 12e76391 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e76394 push eax */
  push32((uint32_t)(EAX));
  /* 12e76395 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76398 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76399 call 0x12e7a3e0 */
  push32(0x12e7639eu); f_12e7a3e0();
  /* 12e7639e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e763a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e763a4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e763a7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e763aa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e763ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e763b0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12e763b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e763b6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e763ba jl 0x12e763de */
  if ((C.sf!=C.of)) goto L_12e763de;
  /* 12e763bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e763bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e763c1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12e763c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e763c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e763cc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12e763cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e763d2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e763d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e763d7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e763da mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e763dc jmp 0x12e763ef */
  goto L_12e763ef;
L_12e763de:;
  /* 12e763de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e763e1 push eax */
  push32((uint32_t)(EAX));
  /* 12e763e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e763e4 call 0x12e7a160 */
  push32(0x12e763e9u); f_12e7a160();
  /* 12e763e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e763ec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12e763ef:;
  /* 12e763ef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e763f2 pop edi */
  EDI = (pop32());
  /* 12e763f3 pop esi */
  ESI = (pop32());
  /* 12e763f4 pop ebx */
  EBX = (pop32());
  /* 12e763f5 mov esp, ebp */
  ESP = (EBP);
  /* 12e763f7 pop ebp */
  EBP = (pop32());
  /* 12e763f8 ret  */
  ESPCHK(0x12e76300u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x12e76400 (7 bytes, 3 insns) */
void f_12e76400(void) {
  FTRACE(0x12e76400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76400 push edi */
  push32((uint32_t)(EDI));
  /* 12e76401 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12e76405 jmp 0x12e76471 */
  jmp_ind(0x12e76471u); return;
}

/* FUN_10006410 @ 0x12e76410 (224 bytes, 84 insns) */
void f_12e76410(void) {
  FTRACE(0x12e76410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76410 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e76414 push edi */
  push32((uint32_t)(EDI));
  /* 12e76415 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e7641b je 0x12e7642c */
  if (C.zf) goto L_12e7642c;
L_12e7641d:;
  /* 12e7641d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12e7641f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e76420 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e76422 je 0x12e7645f */
  if (C.zf) goto L_12e7645f;
  /* 12e76424 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e7642a jne 0x12e7641d */
  if (!C.zf) goto L_12e7641d;
L_12e7642c:;
  /* 12e7642c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e7642e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e76433 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76435 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e76438 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7643a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7643d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e76442 je 0x12e7642c */
  if (C.zf) goto L_12e7642c;
  /* 12e76444 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12e76447 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e76449 je 0x12e7646e */
  if (C.zf) goto L_12e7646e;
  /* 12e7644b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e7644d je 0x12e76469 */
  if (C.zf) goto L_12e76469;
  /* 12e7644f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e76454 je 0x12e76464 */
  if (C.zf) goto L_12e76464;
  /* 12e76456 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e7645b je 0x12e7645f */
  if (C.zf) goto L_12e7645f;
  /* 12e7645d jmp 0x12e7642c */
  goto L_12e7642c;
L_12e7645f:;
  /* 12e7645f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12e76462 jmp 0x12e76471 */
  goto L_12e76471;
L_12e76464:;
  /* 12e76464 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12e76467 jmp 0x12e76471 */
  goto L_12e76471;
L_12e76469:;
  /* 12e76469 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12e7646c jmp 0x12e76471 */
  goto L_12e76471;
L_12e7646e:;
  /* 12e7646e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12e76471:;
  /* 12e76471 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e76475 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e7647b je 0x12e76496 */
  if (C.zf) goto L_12e76496;
L_12e7647d:;
  /* 12e7647d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e7647f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12e76480 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12e76482 je 0x12e764e8 */
  if (C.zf) goto L_12e764e8;
  /* 12e76484 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12e76486 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e76487 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12e7648d jne 0x12e7647d */
  if (!C.zf) goto L_12e7647d;
  /* 12e7648f jmp 0x12e76496 */
  goto L_12e76496;
L_12e76491:;
  /* 12e76491 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e76493 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12e76496:;
  /* 12e76496 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e7649b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12e7649d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7649f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e764a2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e764a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e764a6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e764a9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e764ae je 0x12e76491 */
  if (C.zf) goto L_12e76491;
  /* 12e764b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12e764b2 je 0x12e764e8 */
  if (C.zf) goto L_12e764e8;
  /* 12e764b4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12e764b6 je 0x12e764df */
  if (C.zf) goto L_12e764df;
  /* 12e764b8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e764be je 0x12e764d2 */
  if (C.zf) goto L_12e764d2;
  /* 12e764c0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e764c6 je 0x12e764ca */
  if (C.zf) goto L_12e764ca;
  /* 12e764c8 jmp 0x12e76491 */
  goto L_12e76491;
L_12e764ca:;
  /* 12e764ca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e764cc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e764d0 pop edi */
  EDI = (pop32());
  /* 12e764d1 ret  */
  ESPCHK(0x12e76410u, _esp0);
  ESP += 4; return;
L_12e764d2:;
  /* 12e764d2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12e764d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e764d9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12e764dd pop edi */
  EDI = (pop32());
  /* 12e764de ret  */
  ESPCHK(0x12e76410u, _esp0);
  ESP += 4; return;
L_12e764df:;
  /* 12e764df mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12e764e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e764e6 pop edi */
  EDI = (pop32());
  /* 12e764e7 ret  */
  ESPCHK(0x12e76410u, _esp0);
  ESP += 4; return;
L_12e764e8:;
  /* 12e764e8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12e764ea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e764ee pop edi */
  EDI = (pop32());
  /* 12e764ef ret  */
  ESPCHK(0x12e76410u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x12e764f0 (243 bytes, 91 insns) */
void f_12e764f0(void) {
  FTRACE(0x12e764f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e764f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e764f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e764f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e764f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e764f7 push esi */
  push32((uint32_t)(ESI));
  /* 12e764f8 push edi */
  push32((uint32_t)(EDI));
  /* 12e764f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12e764fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e764ff:;
  /* 12e764ff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76503 jne 0x12e76523 */
  if (!C.zf) goto L_12e76523;
  /* 12e76505 push 0x12e8aea8 */
  push32((uint32_t)(0x12e8aea8u));
  /* 12e7650a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7650c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12e7650e push 0x12e8aeb8 */
  push32((uint32_t)(0x12e8aeb8u));
  /* 12e76513 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e76515 call 0x12e72510 */
  push32(0x12e7651au); f_12e72510();
  /* 12e7651a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7651d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76520 jne 0x12e76523 */
  if (!C.zf) goto L_12e76523;
  /* 12e76522 int3  */
  x86_unimpl("int3 @ 0x12e76522");
L_12e76523:;
  /* 12e76523 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e76525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e76527 jne 0x12e764ff */
  if (!C.zf) goto L_12e764ff;
L_12e76529:;
  /* 12e76529 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7652d jne 0x12e7654d */
  if (!C.zf) goto L_12e7654d;
  /* 12e7652f push 0x12e8ae8c */
  push32((uint32_t)(0x12e8ae8cu));
  /* 12e76534 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e76536 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12e76538 push 0x12e8aeb8 */
  push32((uint32_t)(0x12e8aeb8u));
  /* 12e7653d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e7653f call 0x12e72510 */
  push32(0x12e76544u); f_12e72510();
  /* 12e76544 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76547 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7654a jne 0x12e7654d */
  if (!C.zf) goto L_12e7654d;
  /* 12e7654c int3  */
  x86_unimpl("int3 @ 0x12e7654c");
L_12e7654d:;
  /* 12e7654d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7654f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e76551 jne 0x12e76529 */
  if (!C.zf) goto L_12e76529;
  /* 12e76553 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76556 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12e7655d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76560 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76563 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12e76566 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7656c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12e7656e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76571 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76574 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12e76577 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7657a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7657b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7657e push edx */
  push32((uint32_t)(EDX));
  /* 12e7657f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76582 push eax */
  push32((uint32_t)(EAX));
  /* 12e76583 call 0x12e7a3e0 */
  push32(0x12e76588u); f_12e7a3e0();
  /* 12e76588 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7658b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e7658e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e76591 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e76594 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76597 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e7659a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12e7659d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e765a0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e765a4 jl 0x12e765c8 */
  if ((C.sf!=C.of)) goto L_12e765c8;
  /* 12e765a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e765a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e765ab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e765ae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e765b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e765b6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e765b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e765bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e765be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e765c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e765c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e765c6 jmp 0x12e765d9 */
  goto L_12e765d9;
L_12e765c8:;
  /* 12e765c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e765cb push edx */
  push32((uint32_t)(EDX));
  /* 12e765cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e765ce call 0x12e7a160 */
  push32(0x12e765d3u); f_12e7a160();
  /* 12e765d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e765d6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12e765d9:;
  /* 12e765d9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e765dc pop edi */
  EDI = (pop32());
  /* 12e765dd pop esi */
  ESI = (pop32());
  /* 12e765de pop ebx */
  EBX = (pop32());
  /* 12e765df mov esp, ebp */
  ESP = (EBP);
  /* 12e765e1 pop ebp */
  EBP = (pop32());
  /* 12e765e2 ret  */
  ESPCHK(0x12e764f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x12e765f0 (47 bytes, 17 insns) */
void f_12e765f0(void) {
  FTRACE(0x12e765f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e765f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e765f1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e765f6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12e765fa jb 0x12e76610 */
  if (C.cf) goto L_12e76610;
L_12e765fc:;
  /* 12e765fc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76602 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76607 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12e76609 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7660e jae 0x12e765fc */
  if (!C.cf) goto L_12e765fc;
L_12e76610:;
  /* 12e76610 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76612 mov eax, esp */
  EAX = (ESP);
  /* 12e76614 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12e76616 mov esp, ecx */
  ESP = (ECX);
  /* 12e76618 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e7661a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e7661d push eax */
  push32((uint32_t)(EAX));
  /* 12e7661e ret  */
  ESPCHK(0x12e765f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006620 @ 0x12e76620 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12e76620(void) {
  FTRACE(0x12e76620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76620 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76621 mov ebp, esp */
  EBP = (ESP);
  /* 12e76623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76626 push esi */
  push32((uint32_t)(ESI));
  /* 12e76627 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7662b je 0x12e76633 */
  if (C.zf) goto L_12e76633;
  /* 12e7662d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76631 jne 0x12e76638 */
  if (!C.zf) goto L_12e76638;
L_12e76633:;
  /* 12e76633 jmp 0x12e76808 */
  goto L_12e76808;
L_12e76638:;
  /* 12e76638 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7663c je 0x12e76654 */
  if (C.zf) goto L_12e76654;
  /* 12e7663e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76642 je 0x12e76654 */
  if (C.zf) goto L_12e76654;
  /* 12e76644 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76648 je 0x12e76654 */
  if (C.zf) goto L_12e76654;
  /* 12e7664a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7664e jne 0x12e76731 */
  if (!C.zf) goto L_12e76731;
L_12e76654:;
  /* 12e76654 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e76656 call 0x12e76e50 */
  push32(0x12e7665bu); f_12e76e50();
  /* 12e7665b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7665e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76662 je 0x12e7666a */
  if (C.zf) goto L_12e7666a;
  /* 12e76664 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76668 jne 0x12e766af */
  if (!C.zf) goto L_12e766af;
L_12e7666a:;
  /* 12e7666a cmp dword ptr [0x12e8f644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76671 jne 0x12e766af */
  if (!C.zf) goto L_12e766af;
  /* 12e76673 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e76675 push 0x12e76850 */
  push32((uint32_t)(0x12e76850u));
  /* 12e7667a call dword ptr [0x12e92398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92398))), 0x12e76680u);
  /* 12e76680 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76683 jne 0x12e76691 */
  if (!C.zf) goto L_12e76691;
  /* 12e76685 mov dword ptr [0x12e8f644], 1 */
  w32((uint32_t)(0x12e8f644), (0x1u));
  /* 12e7668f jmp 0x12e766af */
  goto L_12e766af;
L_12e76691:;
  /* 12e76691 call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e76697u);
  /* 12e76697 mov esi, eax */
  ESI = (EAX);
  /* 12e76699 call 0x12e7b330 */
  push32(0x12e7669eu); f_12e7b330();
  /* 12e7669e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12e766a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e766a2 call 0x12e76ef0 */
  push32(0x12e766a7u); f_12e76ef0();
  /* 12e766a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e766aa jmp 0x12e76808 */
  goto L_12e76808;
L_12e766af:;
  /* 12e766af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e766b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e766b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e766b8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e766bb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e766be cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e766c2 ja 0x12e76722 */
  if ((!C.cf&&!C.zf)) goto L_12e76722;
  /* 12e766c4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e766c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e766c9 mov dl, byte ptr [eax + 0x12e7682f] */
  DL = (r8((uint32_t)(EAX + 0x12e7682f)));
  /* 12e766cf jmp dword ptr [edx*4 + 0x12e7681b] */
  switch (EDX) {
    case 0: goto L_12e766d6;
    case 1: goto L_12e76710;
    case 2: goto L_12e766ea;
    case 3: goto L_12e766fd;
    case 4: goto L_12e76722;
    default: x86_unimpl("switch@0x12e766cf out of table"); return;
  }
L_12e766d6:;
  /* 12e766d6 mov ecx, dword ptr [0x12e8f634] */
  ECX = (r32((uint32_t)(0x12e8f634)));
  /* 12e766dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e766df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e766e2 mov dword ptr [0x12e8f634], edx */
  w32((uint32_t)(0x12e8f634), (EDX));
  /* 12e766e8 jmp 0x12e76722 */
  goto L_12e76722;
L_12e766ea:;
  /* 12e766ea mov eax, dword ptr [0x12e8f638] */
  EAX = (r32((uint32_t)(0x12e8f638)));
  /* 12e766ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e766f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e766f5 mov dword ptr [0x12e8f638], ecx */
  w32((uint32_t)(0x12e8f638), (ECX));
  /* 12e766fb jmp 0x12e76722 */
  goto L_12e76722;
L_12e766fd:;
  /* 12e766fd mov edx, dword ptr [0x12e8f63c] */
  EDX = (r32((uint32_t)(0x12e8f63c)));
  /* 12e76703 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e76706 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76709 mov dword ptr [0x12e8f63c], eax */
  w32((uint32_t)(0x12e8f63c), (EAX));
  /* 12e7670e jmp 0x12e76722 */
  goto L_12e76722;
L_12e76710:;
  /* 12e76710 mov ecx, dword ptr [0x12e8f640] */
  ECX = (r32((uint32_t)(0x12e8f640)));
  /* 12e76716 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e76719 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7671c mov dword ptr [0x12e8f640], edx */
  w32((uint32_t)(0x12e8f640), (EDX));
L_12e76722:;
  /* 12e76722 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e76724 call 0x12e76ef0 */
  push32(0x12e76729u); f_12e76ef0();
  /* 12e76729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7672c jmp 0x12e76803 */
  goto L_12e76803;
L_12e76731:;
  /* 12e76731 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76735 je 0x12e76748 */
  if (C.zf) goto L_12e76748;
  /* 12e76737 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7673b je 0x12e76748 */
  if (C.zf) goto L_12e76748;
  /* 12e7673d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76741 je 0x12e76748 */
  if (C.zf) goto L_12e76748;
  /* 12e76743 jmp 0x12e76808 */
  goto L_12e76808;
L_12e76748:;
  /* 12e76748 call 0x12e72e90 */
  push32(0x12e7674du); f_12e72e90();
  /* 12e7674d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e76750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76753 cmp dword ptr [eax + 0x50], 0x12e8dc20 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12e8dc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7675a jne 0x12e767a5 */
  if (!C.zf) goto L_12e767a5;
  /* 12e7675c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12e76761 push 0x12e8aec4 */
  push32((uint32_t)(0x12e8aec4u));
  /* 12e76766 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e76768 mov ecx, dword ptr [0x12e8dca0] */
  ECX = (r32((uint32_t)(0x12e8dca0)));
  /* 12e7676e push ecx */
  push32((uint32_t)(ECX));
  /* 12e7676f call 0x12e73450 */
  push32(0x12e76774u); f_12e73450();
  /* 12e76774 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76777 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7677a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12e7677d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76780 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76784 je 0x12e767a3 */
  if (C.zf) goto L_12e767a3;
  /* 12e76786 mov ecx, dword ptr [0x12e8dca0] */
  ECX = (r32((uint32_t)(0x12e8dca0)));
  /* 12e7678c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7678d push 0x12e8dc20 */
  push32((uint32_t)(0x12e8dc20u));
  /* 12e76792 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76795 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12e76798 push eax */
  push32((uint32_t)(EAX));
  /* 12e76799 call 0x12e79d30 */
  push32(0x12e7679eu); f_12e79d30();
  /* 12e7679e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e767a1 jmp 0x12e767a5 */
  goto L_12e767a5;
L_12e767a3:;
  /* 12e767a3 jmp 0x12e76808 */
  goto L_12e76808;
L_12e767a5:;
  /* 12e767a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e767a8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e767ab push edx */
  push32((uint32_t)(EDX));
  /* 12e767ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e767af push eax */
  push32((uint32_t)(EAX));
  /* 12e767b0 call 0x12e76b30 */
  push32(0x12e767b5u); f_12e76b30();
  /* 12e767b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e767b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e767bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e767bf jne 0x12e767c3 */
  if (!C.zf) goto L_12e767c3;
  /* 12e767c1 jmp 0x12e76808 */
  goto L_12e76808;
L_12e767c3:;
  /* 12e767c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e767c6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12e767c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e767cc:;
  /* 12e767cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e767cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e767d2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e767d5 jne 0x12e76803 */
  if (!C.zf) goto L_12e76803;
  /* 12e767d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e767da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e767dd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12e767e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e767e3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e767e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e767e9 mov edx, dword ptr [0x12e8dca4] */
  EDX = (r32((uint32_t)(0x12e8dca4)));
  /* 12e767ef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e767f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e767f5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12e767f8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e767fa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e767fd jb 0x12e76801 */
  if (C.cf) goto L_12e76801;
  /* 12e767ff jmp 0x12e76803 */
  goto L_12e76803;
L_12e76801:;
  /* 12e76801 jmp 0x12e767cc */
  goto L_12e767cc;
L_12e76803:;
  /* 12e76803 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e76806 jmp 0x12e76816 */
  goto L_12e76816;
L_12e76808:;
  /* 12e76808 call 0x12e7b320 */
  push32(0x12e7680du); f_12e7b320();
  /* 12e7680d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12e76813 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e76816:;
  /* 12e76816 pop esi */
  ESI = (pop32());
  /* 12e76817 mov esp, ebp */
  ESP = (EBP);
  /* 12e76819 pop ebp */
  EBP = (pop32());
  /* 12e7681a ret  */
  ESPCHK(0x12e76620u, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x12e76850 (146 bytes, 45 insns) */
void f_12e76850(void) {
  FTRACE(0x12e76850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76850 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76851 mov ebp, esp */
  EBP = (ESP);
  /* 12e76853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76856 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e76858 call 0x12e76e50 */
  push32(0x12e7685du); f_12e76e50();
  /* 12e7685d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76860 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76864 jne 0x12e7687e */
  if (!C.zf) goto L_12e7687e;
  /* 12e76866 mov dword ptr [ebp - 8], 0x12e8f634 */
  w32((uint32_t)(EBP + -0x8), (0x12e8f634u));
  /* 12e7686d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76870 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e76872 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e76875 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e7687c jmp 0x12e76894 */
  goto L_12e76894;
L_12e7687e:;
  /* 12e7687e mov dword ptr [ebp - 8], 0x12e8f638 */
  w32((uint32_t)(EBP + -0x8), (0x12e8f638u));
  /* 12e76885 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76888 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e7688a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e7688d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12e76894:;
  /* 12e76894 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76898 jne 0x12e768a8 */
  if (!C.zf) goto L_12e768a8;
  /* 12e7689a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7689c call 0x12e76ef0 */
  push32(0x12e768a1u); f_12e76ef0();
  /* 12e768a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e768a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e768a6 jmp 0x12e768dc */
  goto L_12e768dc;
L_12e768a8:;
  /* 12e768a8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e768ac je 0x12e768cd */
  if (C.zf) goto L_12e768cd;
  /* 12e768ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e768b1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12e768b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e768b9 call 0x12e76ef0 */
  push32(0x12e768beu); f_12e76ef0();
  /* 12e768be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e768c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e768c4 push edx */
  push32((uint32_t)(EDX));
  /* 12e768c5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12e768c8u);
  /* 12e768c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e768cb jmp 0x12e768d7 */
  goto L_12e768d7;
L_12e768cd:;
  /* 12e768cd push 1 */
  push32((uint32_t)(0x1u));
  /* 12e768cf call 0x12e76ef0 */
  push32(0x12e768d4u); f_12e76ef0();
  /* 12e768d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e768d7:;
  /* 12e768d7 mov eax, 1 */
  EAX = (0x1u);
L_12e768dc:;
  /* 12e768dc mov esp, ebp */
  ESP = (EBP);
  /* 12e768de pop ebp */
  EBP = (pop32());
  /* 12e768df ret 4 */
  ESPCHK(0x12e76850u, _esp0);
  ESP += 8; return;
}

/* FUN_100068f0 @ 0x12e768f0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12e768f0(void) {
  FTRACE(0x12e768f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e768f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e768f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e768f3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e768f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e768fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76900 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e76903 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e76906 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76909 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e7690c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76910 ja 0x12e769be */
  if ((!C.cf&&!C.zf)) goto L_12e769be;
  /* 12e76916 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e76919 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e7691b mov dl, byte ptr [eax + 0x12e76b12] */
  DL = (r8((uint32_t)(EAX + 0x12e76b12)));
  /* 12e76921 jmp dword ptr [edx*4 + 0x12e76afa] */
  switch (EDX) {
    case 0: goto L_12e76928;
    case 1: goto L_12e76993;
    case 2: goto L_12e76979;
    case 3: goto L_12e76945;
    case 4: goto L_12e7695f;
    case 5: goto L_12e769be;
    default: x86_unimpl("switch@0x12e76921 out of table"); return;
  }
L_12e76928:;
  /* 12e76928 mov dword ptr [ebp - 0x18], 0x12e8f634 */
  w32((uint32_t)(EBP + -0x18), (0x12e8f634u));
  /* 12e7692f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e76932 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e76934 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e76937 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7693a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7693d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e76940 jmp 0x12e769c6 */
  goto L_12e769c6;
L_12e76945:;
  /* 12e76945 mov dword ptr [ebp - 0x18], 0x12e8f638 */
  w32((uint32_t)(EBP + -0x18), (0x12e8f638u));
  /* 12e7694c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e7694f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e76951 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e76954 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e76957 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7695a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e7695d jmp 0x12e769c6 */
  goto L_12e769c6;
L_12e7695f:;
  /* 12e7695f mov dword ptr [ebp - 0x18], 0x12e8f63c */
  w32((uint32_t)(EBP + -0x18), (0x12e8f63cu));
  /* 12e76966 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e76969 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e7696b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e7696e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e76971 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76974 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e76977 jmp 0x12e769c6 */
  goto L_12e769c6;
L_12e76979:;
  /* 12e76979 mov dword ptr [ebp - 0x18], 0x12e8f640 */
  w32((uint32_t)(EBP + -0x18), (0x12e8f640u));
  /* 12e76980 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e76983 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e76985 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e76988 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7698b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7698e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e76991 jmp 0x12e769c6 */
  goto L_12e769c6;
L_12e76993:;
  /* 12e76993 call 0x12e72e90 */
  push32(0x12e76998u); f_12e72e90();
  /* 12e76998 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7699b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7699e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e769a1 push edx */
  push32((uint32_t)(EDX));
  /* 12e769a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e769a5 push eax */
  push32((uint32_t)(EAX));
  /* 12e769a6 call 0x12e76b30 */
  push32(0x12e769abu); f_12e76b30();
  /* 12e769ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e769ae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e769b1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e769b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e769b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e769b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e769bc jmp 0x12e769c6 */
  goto L_12e769c6;
L_12e769be:;
  /* 12e769be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e769c1 jmp 0x12e76af6 */
  goto L_12e76af6;
L_12e769c6:;
  /* 12e769c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e769ca je 0x12e769d6 */
  if (C.zf) goto L_12e769d6;
  /* 12e769cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e769ce call 0x12e76e50 */
  push32(0x12e769d3u); f_12e76e50();
  /* 12e769d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e769d6:;
  /* 12e769d6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e769da jne 0x12e769f3 */
  if (!C.zf) goto L_12e769f3;
  /* 12e769dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e769e0 je 0x12e769ec */
  if (C.zf) goto L_12e769ec;
  /* 12e769e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e769e4 call 0x12e76ef0 */
  push32(0x12e769e9u); f_12e76ef0();
  /* 12e769e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e769ec:;
  /* 12e769ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e769ee jmp 0x12e76af6 */
  goto L_12e76af6;
L_12e769f3:;
  /* 12e769f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e769f7 jne 0x12e76a10 */
  if (!C.zf) goto L_12e76a10;
  /* 12e769f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e769fd je 0x12e76a09 */
  if (C.zf) goto L_12e76a09;
  /* 12e769ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12e76a01 call 0x12e76ef0 */
  push32(0x12e76a06u); f_12e76ef0();
  /* 12e76a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e76a09:;
  /* 12e76a09 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e76a0b call 0x12e72c10 */
  push32(0x12e76a10u); f_12e72c10();
L_12e76a10:;
  /* 12e76a10 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76a14 je 0x12e76a22 */
  if (C.zf) goto L_12e76a22;
  /* 12e76a16 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76a1a je 0x12e76a22 */
  if (C.zf) goto L_12e76a22;
  /* 12e76a1c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76a20 jne 0x12e76a4e */
  if (!C.zf) goto L_12e76a4e;
L_12e76a22:;
  /* 12e76a22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76a25 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12e76a28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e76a2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76a2e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12e76a35 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76a39 jne 0x12e76a4e */
  if (!C.zf) goto L_12e76a4e;
  /* 12e76a3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76a3e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12e76a41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e76a44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76a47 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12e76a4e:;
  /* 12e76a4e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76a52 jne 0x12e76a90 */
  if (!C.zf) goto L_12e76a90;
  /* 12e76a54 mov eax, dword ptr [0x12e8dc98] */
  EAX = (r32((uint32_t)(0x12e8dc98)));
  /* 12e76a59 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e76a5c jmp 0x12e76a67 */
  goto L_12e76a67;
L_12e76a5e:;
  /* 12e76a5e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76a61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76a64 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e76a67:;
  /* 12e76a67 mov edx, dword ptr [0x12e8dc98] */
  EDX = (r32((uint32_t)(0x12e8dc98)));
  /* 12e76a6d add edx, dword ptr [0x12e8dc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8dc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76a73 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76a76 jge 0x12e76a8e */
  if ((C.sf==C.of)) goto L_12e76a8e;
  /* 12e76a78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e76a7b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e76a7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76a81 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12e76a84 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12e76a8c jmp 0x12e76a5e */
  goto L_12e76a5e;
L_12e76a8e:;
  /* 12e76a8e jmp 0x12e76a99 */
  goto L_12e76a99;
L_12e76a90:;
  /* 12e76a90 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e76a93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e76a99:;
  /* 12e76a99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76a9d je 0x12e76aa9 */
  if (C.zf) goto L_12e76aa9;
  /* 12e76a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e76aa1 call 0x12e76ef0 */
  push32(0x12e76aa6u); f_12e76ef0();
  /* 12e76aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e76aa9:;
  /* 12e76aa9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76aad jne 0x12e76ac0 */
  if (!C.zf) goto L_12e76ac0;
  /* 12e76aaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76ab2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12e76ab5 push edx */
  push32((uint32_t)(EDX));
  /* 12e76ab6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e76ab8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12e76abbu);
  /* 12e76abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76abe jmp 0x12e76aca */
  goto L_12e76aca;
L_12e76ac0:;
  /* 12e76ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76ac3 push eax */
  push32((uint32_t)(EAX));
  /* 12e76ac4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12e76ac7u);
  /* 12e76ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e76aca:;
  /* 12e76aca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76ace je 0x12e76adc */
  if (C.zf) goto L_12e76adc;
  /* 12e76ad0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76ad4 je 0x12e76adc */
  if (C.zf) goto L_12e76adc;
  /* 12e76ad6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76ada jne 0x12e76af4 */
  if (!C.zf) goto L_12e76af4;
L_12e76adc:;
  /* 12e76adc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76adf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e76ae2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12e76ae5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76ae9 jne 0x12e76af4 */
  if (!C.zf) goto L_12e76af4;
  /* 12e76aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76aee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76af1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12e76af4:;
  /* 12e76af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e76af6:;
  /* 12e76af6 mov esp, ebp */
  ESP = (EBP);
  /* 12e76af8 pop ebp */
  EBP = (pop32());
  /* 12e76af9 ret  */
  ESPCHK(0x12e768f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x12e76b30 (91 bytes, 35 insns) */
void f_12e76b30(void) {
  FTRACE(0x12e76b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76b31 mov ebp, esp */
  EBP = (ESP);
  /* 12e76b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76b34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76b37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e76b3a:;
  /* 12e76b3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76b3d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e76b40 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76b43 je 0x12e76b63 */
  if (C.zf) goto L_12e76b63;
  /* 12e76b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76b48 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76b4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e76b4e mov ecx, dword ptr [0x12e8dca4] */
  ECX = (r32((uint32_t)(0x12e8dca4)));
  /* 12e76b54 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e76b57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76b5a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76b5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76b5f jae 0x12e76b63 */
  if (!C.cf) goto L_12e76b63;
  /* 12e76b61 jmp 0x12e76b3a */
  goto L_12e76b3a;
L_12e76b63:;
  /* 12e76b63 mov eax, dword ptr [0x12e8dca4] */
  EAX = (r32((uint32_t)(0x12e8dca4)));
  /* 12e76b68 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e76b6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76b6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76b70 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76b73 jae 0x12e76b85 */
  if (!C.cf) goto L_12e76b85;
  /* 12e76b75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76b78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12e76b7b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76b7e jne 0x12e76b85 */
  if (!C.zf) goto L_12e76b85;
  /* 12e76b80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76b83 jmp 0x12e76b87 */
  goto L_12e76b87;
L_12e76b85:;
  /* 12e76b85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e76b87:;
  /* 12e76b87 mov esp, ebp */
  ESP = (EBP);
  /* 12e76b89 pop ebp */
  EBP = (pop32());
  /* 12e76b8a ret  */
  ESPCHK(0x12e76b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b90 @ 0x12e76b90 (13 bytes, 6 insns) */
void f_12e76b90(void) {
  FTRACE(0x12e76b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76b91 mov ebp, esp */
  EBP = (ESP);
  /* 12e76b93 call 0x12e72e90 */
  push32(0x12e76b98u); f_12e72e90();
  /* 12e76b98 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76b9b pop ebp */
  EBP = (pop32());
  /* 12e76b9c ret  */
  ESPCHK(0x12e76b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x12e76ba0 (13 bytes, 6 insns) */
void f_12e76ba0(void) {
  FTRACE(0x12e76ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12e76ba3 call 0x12e72e90 */
  push32(0x12e76ba8u); f_12e72e90();
  /* 12e76ba8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76bab pop ebp */
  EBP = (pop32());
  /* 12e76bac ret  */
  ESPCHK(0x12e76ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x12e76bb0 (187 bytes, 54 insns) */
void f_12e76bb0(void) {
  FTRACE(0x12e76bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12e76bb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e76bb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e76bbd cmp dword ptr [0x12e8f648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76bc4 jne 0x12e76c23 */
  if (!C.zf) goto L_12e76c23;
  /* 12e76bc6 push 0x12e8a2f0 */
  push32((uint32_t)(0x12e8a2f0u));
  /* 12e76bcb call dword ptr [0x12e92324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92324))), 0x12e76bd1u);
  /* 12e76bd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e76bd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76bd8 je 0x12e76bf7 */
  if (C.zf) goto L_12e76bf7;
  /* 12e76bda push 0x12e8aef4 */
  push32((uint32_t)(0x12e8aef4u));
  /* 12e76bdf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76be2 push eax */
  push32((uint32_t)(EAX));
  /* 12e76be3 call dword ptr [0x12e92320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92320))), 0x12e76be9u);
  /* 12e76be9 mov dword ptr [0x12e8f648], eax */
  w32((uint32_t)(0x12e8f648), (EAX));
  /* 12e76bee cmp dword ptr [0x12e8f648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76bf5 jne 0x12e76bfb */
  if (!C.zf) goto L_12e76bfb;
L_12e76bf7:;
  /* 12e76bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e76bf9 jmp 0x12e76c67 */
  goto L_12e76c67;
L_12e76bfb:;
  /* 12e76bfb push 0x12e8aee4 */
  push32((uint32_t)(0x12e8aee4u));
  /* 12e76c00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76c04 call dword ptr [0x12e92320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92320))), 0x12e76c0au);
  /* 12e76c0a mov dword ptr [0x12e8f64c], eax */
  w32((uint32_t)(0x12e8f64c), (EAX));
  /* 12e76c0f push 0x12e8aed0 */
  push32((uint32_t)(0x12e8aed0u));
  /* 12e76c14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e76c17 push edx */
  push32((uint32_t)(EDX));
  /* 12e76c18 call dword ptr [0x12e92320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92320))), 0x12e76c1eu);
  /* 12e76c1e mov dword ptr [0x12e8f650], eax */
  w32((uint32_t)(0x12e8f650), (EAX));
L_12e76c23:;
  /* 12e76c23 cmp dword ptr [0x12e8f64c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f64c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76c2a je 0x12e76c35 */
  if (C.zf) goto L_12e76c35;
  /* 12e76c2c call dword ptr [0x12e8f64c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f64c))), 0x12e76c32u);
  /* 12e76c32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e76c35:;
  /* 12e76c35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76c39 je 0x12e76c51 */
  if (C.zf) goto L_12e76c51;
  /* 12e76c3b cmp dword ptr [0x12e8f650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76c42 je 0x12e76c51 */
  if (C.zf) goto L_12e76c51;
  /* 12e76c44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76c47 push eax */
  push32((uint32_t)(EAX));
  /* 12e76c48 call dword ptr [0x12e8f650] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f650))), 0x12e76c4eu);
  /* 12e76c4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e76c51:;
  /* 12e76c51 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e76c54 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76c55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e76c58 push edx */
  push32((uint32_t)(EDX));
  /* 12e76c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e76c5c push eax */
  push32((uint32_t)(EAX));
  /* 12e76c5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76c60 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76c61 call dword ptr [0x12e8f648] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f648))), 0x12e76c67u);
L_12e76c67:;
  /* 12e76c67 mov esp, ebp */
  ESP = (EBP);
  /* 12e76c69 pop ebp */
  EBP = (pop32());
  /* 12e76c6a ret  */
  ESPCHK(0x12e76bb0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12e76c70 (254 bytes, 109 insns) */
void f_12e76c70(void) {
  FTRACE(0x12e76c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76c70 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e76c74 push edi */
  push32((uint32_t)(EDI));
  /* 12e76c75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e76c77 je 0x12e76cf3 */
  if (C.zf) goto L_12e76cf3;
  /* 12e76c79 push esi */
  push32((uint32_t)(ESI));
  /* 12e76c7a push ebx */
  push32((uint32_t)(EBX));
  /* 12e76c7b mov ebx, ecx */
  EBX = (ECX);
  /* 12e76c7d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12e76c81 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12e76c87 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12e76c8b jne 0x12e76c94 */
  if (!C.zf) goto L_12e76c94;
  /* 12e76c8d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e76c90 jne 0x12e76d01 */
  if (!C.zf) goto L_12e76d01;
  /* 12e76c92 jmp 0x12e76cb5 */
  goto L_12e76cb5;
L_12e76c94:;
  /* 12e76c94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e76c96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e76c97 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e76c99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e76c9a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e76c9b je 0x12e76cc2 */
  if (C.zf) goto L_12e76cc2;
  /* 12e76c9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e76c9f je 0x12e76cca */
  if (C.zf) goto L_12e76cca;
  /* 12e76ca1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12e76ca7 jne 0x12e76c94 */
  if (!C.zf) goto L_12e76c94;
  /* 12e76ca9 mov ebx, ecx */
  EBX = (ECX);
  /* 12e76cab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e76cae jne 0x12e76d01 */
  if (!C.zf) goto L_12e76d01;
L_12e76cb0:;
  /* 12e76cb0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12e76cb3 je 0x12e76cc2 */
  if (C.zf) goto L_12e76cc2;
L_12e76cb5:;
  /* 12e76cb5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e76cb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e76cb8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e76cba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e76cbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e76cbd je 0x12e76cee */
  if (C.zf) goto L_12e76cee;
  /* 12e76cbf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12e76cc0 jne 0x12e76cb5 */
  if (!C.zf) goto L_12e76cb5;
L_12e76cc2:;
  /* 12e76cc2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e76cc6 pop ebx */
  EBX = (pop32());
  /* 12e76cc7 pop esi */
  ESI = (pop32());
  /* 12e76cc8 pop edi */
  EDI = (pop32());
  /* 12e76cc9 ret  */
  ESPCHK(0x12e76c70u, _esp0);
  ESP += 4; return;
L_12e76cca:;
  /* 12e76cca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e76cd0 je 0x12e76ce4 */
  if (C.zf) goto L_12e76ce4;
L_12e76cd2:;
  /* 12e76cd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e76cd4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e76cd5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e76cd6 je 0x12e76d66 */
  if (C.zf) goto L_12e76d66;
  /* 12e76cdc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12e76ce2 jne 0x12e76cd2 */
  if (!C.zf) goto L_12e76cd2;
L_12e76ce4:;
  /* 12e76ce4 mov ebx, ecx */
  EBX = (ECX);
  /* 12e76ce6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12e76ce9 jne 0x12e76d57 */
  if (!C.zf) goto L_12e76d57;
L_12e76ceb:;
  /* 12e76ceb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12e76ced inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12e76cee:;
  /* 12e76cee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12e76cef jne 0x12e76ceb */
  if (!C.zf) goto L_12e76ceb;
  /* 12e76cf1 pop ebx */
  EBX = (pop32());
  /* 12e76cf2 pop esi */
  ESI = (pop32());
L_12e76cf3:;
  /* 12e76cf3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e76cf7 pop edi */
  EDI = (pop32());
  /* 12e76cf8 ret  */
  ESPCHK(0x12e76c70u, _esp0);
  ESP += 4; return;
L_12e76cf9:;
  /* 12e76cf9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e76cfb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76cfe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e76cff je 0x12e76cb0 */
  if (C.zf) goto L_12e76cb0;
L_12e76d01:;
  /* 12e76d01 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12e76d06 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12e76d08 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76d0a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e76d0d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12e76d0f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12e76d11 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76d14 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12e76d19 je 0x12e76cf9 */
  if (C.zf) goto L_12e76cf9;
  /* 12e76d1b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12e76d1d je 0x12e76d4b */
  if (C.zf) goto L_12e76d4b;
  /* 12e76d1f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12e76d21 je 0x12e76d41 */
  if (C.zf) goto L_12e76d41;
  /* 12e76d23 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12e76d29 je 0x12e76d37 */
  if (C.zf) goto L_12e76d37;
  /* 12e76d2b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12e76d31 jne 0x12e76cf9 */
  if (!C.zf) goto L_12e76cf9;
  /* 12e76d33 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e76d35 jmp 0x12e76d4f */
  goto L_12e76d4f;
L_12e76d37:;
  /* 12e76d37 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e76d3d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e76d3f jmp 0x12e76d4f */
  goto L_12e76d4f;
L_12e76d41:;
  /* 12e76d41 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e76d47 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12e76d49 jmp 0x12e76d4f */
  goto L_12e76d4f;
L_12e76d4b:;
  /* 12e76d4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e76d4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12e76d4f:;
  /* 12e76d4f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76d52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e76d54 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e76d55 je 0x12e76d61 */
  if (C.zf) goto L_12e76d61;
L_12e76d57:;
  /* 12e76d57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e76d59:;
  /* 12e76d59 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12e76d5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76d5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e76d5f jne 0x12e76d59 */
  if (!C.zf) goto L_12e76d59;
L_12e76d61:;
  /* 12e76d61 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12e76d64 jne 0x12e76ceb */
  if (!C.zf) goto L_12e76ceb;
L_12e76d66:;
  /* 12e76d66 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e76d6a pop ebx */
  EBX = (pop32());
  /* 12e76d6b pop esi */
  ESI = (pop32());
  /* 12e76d6c pop edi */
  EDI = (pop32());
  /* 12e76d6d ret  */
  ESPCHK(0x12e76c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x12e76d70 (55 bytes, 16 insns) */
void f_12e76d70(void) {
  FTRACE(0x12e76d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76d71 mov ebp, esp */
  EBP = (ESP);
  /* 12e76d73 mov eax, dword ptr [0x12e8dba4] */
  EAX = (r32((uint32_t)(0x12e8dba4)));
  /* 12e76d78 push eax */
  push32((uint32_t)(EAX));
  /* 12e76d79 call dword ptr [0x12e9239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9239c))), 0x12e76d7fu);
  /* 12e76d7f mov ecx, dword ptr [0x12e8db94] */
  ECX = (r32((uint32_t)(0x12e8db94)));
  /* 12e76d85 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76d86 call dword ptr [0x12e9239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9239c))), 0x12e76d8cu);
  /* 12e76d8c mov edx, dword ptr [0x12e8db84] */
  EDX = (r32((uint32_t)(0x12e8db84)));
  /* 12e76d92 push edx */
  push32((uint32_t)(EDX));
  /* 12e76d93 call dword ptr [0x12e9239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9239c))), 0x12e76d99u);
  /* 12e76d99 mov eax, dword ptr [0x12e8db64] */
  EAX = (r32((uint32_t)(0x12e8db64)));
  /* 12e76d9e push eax */
  push32((uint32_t)(EAX));
  /* 12e76d9f call dword ptr [0x12e9239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9239c))), 0x12e76da5u);
  /* 12e76da5 pop ebp */
  EBP = (pop32());
  /* 12e76da6 ret  */
  ESPCHK(0x12e76d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x12e76db0 (159 bytes, 47 insns) */
void f_12e76db0(void) {
  FTRACE(0x12e76db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e76db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e76db1 mov ebp, esp */
  EBP = (ESP);
  /* 12e76db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e76db4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e76dbb jmp 0x12e76dc6 */
  goto L_12e76dc6;
L_12e76dbd:;
  /* 12e76dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76dc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e76dc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e76dc6:;
  /* 12e76dc6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76dca jge 0x12e76e19 */
  if ((C.sf==C.of)) goto L_12e76e19;
  /* 12e76dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76dcf cmp dword ptr [ecx*4 + 0x12e8db60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e8db60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76dd7 je 0x12e76e17 */
  if (C.zf) goto L_12e76e17;
  /* 12e76dd9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76ddd je 0x12e76e17 */
  if (C.zf) goto L_12e76e17;
  /* 12e76ddf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76de3 je 0x12e76e17 */
  if (C.zf) goto L_12e76e17;
  /* 12e76de5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76de9 je 0x12e76e17 */
  if (C.zf) goto L_12e76e17;
  /* 12e76deb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e76def je 0x12e76e17 */
  if (C.zf) goto L_12e76e17;
  /* 12e76df1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76df4 mov eax, dword ptr [edx*4 + 0x12e8db60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e8db60)));
  /* 12e76dfb push eax */
  push32((uint32_t)(EAX));
  /* 12e76dfc call dword ptr [0x12e92368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92368))), 0x12e76e02u);
  /* 12e76e02 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e76e04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e76e07 mov edx, dword ptr [ecx*4 + 0x12e8db60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8db60)));
  /* 12e76e0e push edx */
  push32((uint32_t)(EDX));
  /* 12e76e0f call 0x12e73ee0 */
  push32(0x12e76e14u); f_12e73ee0();
  /* 12e76e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e76e17:;
  /* 12e76e17 jmp 0x12e76dbd */
  goto L_12e76dbd;
L_12e76e19:;
  /* 12e76e19 mov eax, dword ptr [0x12e8db84] */
  EAX = (r32((uint32_t)(0x12e8db84)));
  /* 12e76e1e push eax */
  push32((uint32_t)(EAX));
  /* 12e76e1f call dword ptr [0x12e92368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92368))), 0x12e76e25u);
  /* 12e76e25 mov ecx, dword ptr [0x12e8db94] */
  ECX = (r32((uint32_t)(0x12e8db94)));
  /* 12e76e2b push ecx */
  push32((uint32_t)(ECX));
  /* 12e76e2c call dword ptr [0x12e92368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92368))), 0x12e76e32u);
  /* 12e76e32 mov edx, dword ptr [0x12e8dba4] */
  EDX = (r32((uint32_t)(0x12e8dba4)));
  /* 12e76e38 push edx */
  push32((uint32_t)(EDX));
  /* 12e76e39 call dword ptr [0x12e92368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92368))), 0x12e76e3fu);
  /* 12e76e3f mov eax, dword ptr [0x12e8db64] */
  EAX = (r32((uint32_t)(0x12e8db64)));
  /* 12e76e44 push eax */
  push32((uint32_t)(EAX));
  /* 12e76e45 call dword ptr [0x12e92368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92368))), 0x12e76e4bu);
  /* 12e76e4b mov esp, ebp */
  ESP = (EBP);
  /* 12e76e4d pop ebp */
  EBP = (pop32());
  /* 12e76e4e ret  */
  ESPCHK(0x12e76db0u, _esp0);
  ESP += 4; return;
}

