#include "recomp.h"

/* thunk_FUN_100019b0 @ 0x12d61005 (5 bytes, 1 insns) */
void f_12d61005(void) {
  FTRACE(0x12d61005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61005 jmp 0x12d619b0 */
  f_12d619b0(); return;
}

/* OnInit @ 0x12d6100a (5 bytes, 1 insns) */
void f_12d6100a(void) {
  FTRACE(0x12d6100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6100a jmp 0x12d618c0 */
  f_12d618c0(); return;
}

/* thunk_FUN_100010a0 @ 0x12d61014 (5 bytes, 1 insns) */
void f_12d61014(void) {
  FTRACE(0x12d61014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61014 jmp 0x12d610a0 */
  f_12d610a0(); return;
}

/* thunk_FUN_10001260 @ 0x12d61019 (5 bytes, 1 insns) */
void f_12d61019(void) {
  FTRACE(0x12d61019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61019 jmp 0x12d61260 */
  f_12d61260(); return;
}

/* thunk_FUN_10001100 @ 0x12d61023 (5 bytes, 1 insns) */
void f_12d61023(void) {
  FTRACE(0x12d61023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61023 jmp 0x12d61100 */
  f_12d61100(); return;
}

/* ProcessScenary @ 0x12d61028 (5 bytes, 1 insns) */
void f_12d61028(void) {
  FTRACE(0x12d61028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61028 jmp 0x12d61900 */
  f_12d61900(); return;
}

/* thunk_FUN_10001790 @ 0x12d6102d (5 bytes, 1 insns) */
void f_12d6102d(void) {
  FTRACE(0x12d6102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6102d jmp 0x12d61790 */
  f_12d61790(); return;
}

/* thunk_FUN_100011a0 @ 0x12d61032 (5 bytes, 1 insns) */
void f_12d61032(void) {
  FTRACE(0x12d61032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61032 jmp 0x12d611a0 */
  f_12d611a0(); return;
}

/* thunk_FUN_100016c0 @ 0x12d6103c (5 bytes, 1 insns) */
void f_12d6103c(void) {
  FTRACE(0x12d6103cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d6103c jmp 0x12d616c0 */
  f_12d616c0(); return;
}

/* thunk_FUN_10001880 @ 0x12d61046 (5 bytes, 1 insns) */
void f_12d61046(void) {
  FTRACE(0x12d61046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61046 jmp 0x12d61880 */
  f_12d61880(); return;
}

/* FUN_100010a0 @ 0x12d610a0 (67 bytes, 26 insns) */
void f_12d610a0(void) {
  FTRACE(0x12d610a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d610a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d610a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d610a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d610a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d610a7 push esi */
  push32((uint32_t)(ESI));
  /* 12d610a8 push edi */
  push32((uint32_t)(EDI));
  /* 12d610a9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12d610ac mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12d610b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d610b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d610b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d610bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d610be cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d610c2 je 0x12d610c6 */
  if (C.zf) goto L_12d610c6;
  /* 12d610c4 jmp 0x12d610cb */
  goto L_12d610cb;
L_12d610c6:;
  /* 12d610c6 call 0x12d6100a */
  push32(0x12d610cbu); f_12d6100a();
L_12d610cb:;
  /* 12d610cb mov eax, 1 */
  EAX = (0x1u);
  /* 12d610d0 pop edi */
  EDI = (pop32());
  /* 12d610d1 pop esi */
  ESI = (pop32());
  /* 12d610d2 pop ebx */
  EBX = (pop32());
  /* 12d610d3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d610d6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d610d8 call 0x12d61a70 */
  push32(0x12d610ddu); f_12d61a70();
  /* 12d610dd mov esp, ebp */
  ESP = (EBP);
  /* 12d610df pop ebp */
  EBP = (pop32());
  /* 12d610e0 ret 0xc */
  ESPCHK(0x12d610a0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001100 @ 0x12d61100 (127 bytes, 45 insns) */
void f_12d61100(void) {
  FTRACE(0x12d61100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61100 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61101 mov ebp, esp */
  EBP = (ESP);
  /* 12d61103 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61106 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61107 push esi */
  push32((uint32_t)(ESI));
  /* 12d61108 push edi */
  push32((uint32_t)(EDI));
  /* 12d61109 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12d6110c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12d61111 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d61116 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61118 mov esi, esp */
  ESI = (ESP);
  /* 12d6111a call dword ptr [0x12d803ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803ec))), 0x12d61120u);
  /* 12d61120 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61122 call 0x12d61a70 */
  push32(0x12d61127u); f_12d61a70();
  /* 12d61127 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6112a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6112d cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61130 jne 0x12d61143 */
  if (!C.zf) goto L_12d61143;
  /* 12d61132 mov esi, esp */
  ESI = (ESP);
  /* 12d61134 call dword ptr [0x12d803fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803fc))), 0x12d6113au);
  /* 12d6113a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6113c call 0x12d61a70 */
  push32(0x12d61141u); f_12d61a70();
  /* 12d61141 jmp 0x12d61152 */
  goto L_12d61152;
L_12d61143:;
  /* 12d61143 mov esi, esp */
  ESI = (ESP);
  /* 12d61145 call dword ptr [0x12d80400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80400))), 0x12d6114bu);
  /* 12d6114b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6114d call 0x12d61a70 */
  push32(0x12d61152u); f_12d61a70();
L_12d61152:;
  /* 12d61152 mov esi, esp */
  ESI = (ESP);
  /* 12d61154 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d61157 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6115a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d6115d push eax */
  push32((uint32_t)(EAX));
  /* 12d6115e call dword ptr [0x12d803f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803f8))), 0x12d61164u);
  /* 12d61164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61169 call 0x12d61a70 */
  push32(0x12d6116eu); f_12d61a70();
  /* 12d6116e pop edi */
  EDI = (pop32());
  /* 12d6116f pop esi */
  ESI = (pop32());
  /* 12d61170 pop ebx */
  EBX = (pop32());
  /* 12d61171 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61174 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61176 call 0x12d61a70 */
  push32(0x12d6117bu); f_12d61a70();
  /* 12d6117b mov esp, ebp */
  ESP = (EBP);
  /* 12d6117d pop ebp */
  EBP = (pop32());
  /* 12d6117e ret  */
  ESPCHK(0x12d61100u, _esp0);
  ESP += 4; return;
}

/* FUN_100011a0 @ 0x12d611a0 (143 bytes, 45 insns) */
void f_12d611a0(void) {
  FTRACE(0x12d611a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d611a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d611a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d611a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d611a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d611a7 push esi */
  push32((uint32_t)(ESI));
  /* 12d611a8 push edi */
  push32((uint32_t)(EDI));
  /* 12d611a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d611ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d611b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d611b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d611b8 mov esi, esp */
  ESI = (ESP);
  /* 12d611ba push 0x12d79048 */
  push32((uint32_t)(0x12d79048u));
  /* 12d611bf push 0x12d7e438 */
  push32((uint32_t)(0x12d7e438u));
  /* 12d611c4 call dword ptr [0x12d803f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803f0))), 0x12d611cau);
  /* 12d611ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d611cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d611cf call 0x12d61a70 */
  push32(0x12d611d4u); f_12d61a70();
  /* 12d611d4 mov esi, esp */
  ESI = (ESP);
  /* 12d611d6 push 0x12d79040 */
  push32((uint32_t)(0x12d79040u));
  /* 12d611db push 0x12d7e440 */
  push32((uint32_t)(0x12d7e440u));
  /* 12d611e0 call dword ptr [0x12d803f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803f0))), 0x12d611e6u);
  /* 12d611e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d611e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d611eb call 0x12d61a70 */
  push32(0x12d611f0u); f_12d61a70();
  /* 12d611f0 mov esi, esp */
  ESI = (ESP);
  /* 12d611f2 push 0x12d7e400 */
  push32((uint32_t)(0x12d7e400u));
  /* 12d611f7 call dword ptr [0x12d803f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803f4))), 0x12d611fdu);
  /* 12d611fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61202 call 0x12d61a70 */
  push32(0x12d61207u); f_12d61a70();
  /* 12d61207 mov esi, esp */
  ESI = (ESP);
  /* 12d61209 push 0x12d7e408 */
  push32((uint32_t)(0x12d7e408u));
  /* 12d6120e call dword ptr [0x12d803f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803f4))), 0x12d61214u);
  /* 12d61214 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61219 call 0x12d61a70 */
  push32(0x12d6121eu); f_12d61a70();
  /* 12d6121e pop edi */
  EDI = (pop32());
  /* 12d6121f pop esi */
  ESI = (pop32());
  /* 12d61220 pop ebx */
  EBX = (pop32());
  /* 12d61221 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61224 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61226 call 0x12d61a70 */
  push32(0x12d6122bu); f_12d61a70();
  /* 12d6122b mov esp, ebp */
  ESP = (EBP);
  /* 12d6122d pop ebp */
  EBP = (pop32());
  /* 12d6122e ret  */
  ESPCHK(0x12d611a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001260 @ 0x12d61260 (293 bytes, 99 insns) */
void f_12d61260(void) {
  FTRACE(0x12d61260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61260 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61261 mov ebp, esp */
  EBP = (ESP);
  /* 12d61263 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61266 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61267 push esi */
  push32((uint32_t)(ESI));
  /* 12d61268 push edi */
  push32((uint32_t)(EDI));
  /* 12d61269 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 12d6126c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 12d61271 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d61276 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61278 mov esi, esp */
  ESI = (ESP);
  /* 12d6127a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6127c push 0x12d7e408 */
  push32((uint32_t)(0x12d7e408u));
  /* 12d61281 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d61284 push eax */
  push32((uint32_t)(EAX));
  /* 12d61285 call dword ptr [0x12d803d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803d8))), 0x12d6128bu);
  /* 12d6128b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6128e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61290 call 0x12d61a70 */
  push32(0x12d61295u); f_12d61a70();
  /* 12d61295 mov esi, esp */
  ESI = (ESP);
  /* 12d61297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d61299 mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d6129c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6129d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d612a0 push edx */
  push32((uint32_t)(EDX));
  /* 12d612a1 call dword ptr [0x12d803dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803dc))), 0x12d612a7u);
  /* 12d612a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d612aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d612ac call 0x12d61a70 */
  push32(0x12d612b1u); f_12d61a70();
  /* 12d612b1 mov esi, esp */
  ESI = (ESP);
  /* 12d612b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d612b5 push 0x12d7e400 */
  push32((uint32_t)(0x12d7e400u));
  /* 12d612ba mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d612bd push eax */
  push32((uint32_t)(EAX));
  /* 12d612be call dword ptr [0x12d803d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803d8))), 0x12d612c4u);
  /* 12d612c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d612c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d612c9 call 0x12d61a70 */
  push32(0x12d612ceu); f_12d61a70();
  /* 12d612ce mov esi, esp */
  ESI = (ESP);
  /* 12d612d0 push 0x12d7e400 */
  push32((uint32_t)(0x12d7e400u));
  /* 12d612d5 call dword ptr [0x12d803d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803d4))), 0x12d612dbu);
  /* 12d612db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d612de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d612e0 call 0x12d61a70 */
  push32(0x12d612e5u); f_12d61a70();
  /* 12d612e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d612e8 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 12d612ef jmp 0x12d612fa */
  goto L_12d612fa;
L_12d612f1:;
  /* 12d612f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d612f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d612f7 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_12d612fa:;
  /* 12d612fa mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d612fd cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61300 jge 0x12d61357 */
  if ((C.sf==C.of)) goto L_12d61357;
  /* 12d61302 mov esi, esp */
  ESI = (ESP);
  /* 12d61304 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12d61307 push eax */
  push32((uint32_t)(EAX));
  /* 12d61308 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d6130b push ecx */
  push32((uint32_t)(ECX));
  /* 12d6130c push 0x12d7e400 */
  push32((uint32_t)(0x12d7e400u));
  /* 12d61311 call dword ptr [0x12d803e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803e4))), 0x12d61317u);
  /* 12d61317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6131a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6131c call 0x12d61a70 */
  push32(0x12d61321u); f_12d61a70();
  /* 12d61321 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d61324 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6132a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6132c je 0x12d61339 */
  if (C.zf) goto L_12d61339;
  /* 12d6132e mov al, byte ptr [ebp - 0x28] */
  AL = (r8((uint32_t)(EBP + -0x28)));
  /* 12d61331 add al, byte ptr [ebp + 0x10] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBP + 0x10))),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d61334 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12d61337 jmp 0x12d6133f */
  goto L_12d6133f;
L_12d61339:;
  /* 12d61339 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12d6133c mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
L_12d6133f:;
  /* 12d6133f mov esi, esp */
  ESI = (ESP);
  /* 12d61341 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 12d61344 push edx */
  push32((uint32_t)(EDX));
  /* 12d61345 call dword ptr [0x12d803e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803e8))), 0x12d6134bu);
  /* 12d6134b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6134e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61350 call 0x12d61a70 */
  push32(0x12d61355u); f_12d61a70();
  /* 12d61355 jmp 0x12d612f1 */
  goto L_12d612f1;
L_12d61357:;
  /* 12d61357 mov esi, esp */
  ESI = (ESP);
  /* 12d61359 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6135b push 0x12d7e408 */
  push32((uint32_t)(0x12d7e408u));
  /* 12d61360 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d61363 push eax */
  push32((uint32_t)(EAX));
  /* 12d61364 call dword ptr [0x12d803e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803e0))), 0x12d6136au);
  /* 12d6136a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6136f call 0x12d61a70 */
  push32(0x12d61374u); f_12d61a70();
  /* 12d61374 pop edi */
  EDI = (pop32());
  /* 12d61375 pop esi */
  ESI = (pop32());
  /* 12d61376 pop ebx */
  EBX = (pop32());
  /* 12d61377 add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6137a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6137c call 0x12d61a70 */
  push32(0x12d61381u); f_12d61a70();
  /* 12d61381 mov esp, ebp */
  ESP = (EBP);
  /* 12d61383 pop ebp */
  EBP = (pop32());
  /* 12d61384 ret  */
  ESPCHK(0x12d61260u, _esp0);
  ESP += 4; return;
}

/* FUN_100013d0 @ 0x12d613d0 (107 bytes, 40 insns) */
void f_12d613d0(void) {
  FTRACE(0x12d613d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d613d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d613d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d613d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d613d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d613d7 push esi */
  push32((uint32_t)(ESI));
  /* 12d613d8 push edi */
  push32((uint32_t)(EDI));
  /* 12d613d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d613dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d613e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d613e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d613e8 mov esi, esp */
  ESI = (ESP);
  /* 12d613ea push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 12d613ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d613f2 push eax */
  push32((uint32_t)(EAX));
  /* 12d613f3 push 0x12d7e448 */
  push32((uint32_t)(0x12d7e448u));
  /* 12d613f8 call dword ptr [0x12d803c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803c8))), 0x12d613feu);
  /* 12d613fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61401 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61403 call 0x12d61a70 */
  push32(0x12d61408u); f_12d61a70();
  /* 12d61408 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6140d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6140f je 0x12d6142a */
  if (C.zf) goto L_12d6142a;
  /* 12d61411 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 12d61414 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61415 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61418 push edx */
  push32((uint32_t)(EDX));
  /* 12d61419 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6141c push eax */
  push32((uint32_t)(EAX));
  /* 12d6141d push 0x12d7e448 */
  push32((uint32_t)(0x12d7e448u));
  /* 12d61422 call 0x12d61019 */
  push32(0x12d61427u); f_12d61019();
  /* 12d61427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6142a:;
  /* 12d6142a pop edi */
  EDI = (pop32());
  /* 12d6142b pop esi */
  ESI = (pop32());
  /* 12d6142c pop ebx */
  EBX = (pop32());
  /* 12d6142d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61430 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61432 call 0x12d61a70 */
  push32(0x12d61437u); f_12d61a70();
  /* 12d61437 mov esp, ebp */
  ESP = (EBP);
  /* 12d61439 pop ebp */
  EBP = (pop32());
  /* 12d6143a ret  */
  ESPCHK(0x12d613d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001460 @ 0x12d61460 (154 bytes, 56 insns) */
void f_12d61460(void) {
  FTRACE(0x12d61460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61460 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61461 mov ebp, esp */
  EBP = (ESP);
  /* 12d61463 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61466 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61467 push esi */
  push32((uint32_t)(ESI));
  /* 12d61468 push edi */
  push32((uint32_t)(EDI));
  /* 12d61469 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 12d6146c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 12d61471 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d61476 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61478 mov esi, esp */
  ESI = (ESP);
  /* 12d6147a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6147d push eax */
  push32((uint32_t)(EAX));
  /* 12d6147e call dword ptr [0x12d803d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803d4))), 0x12d61484u);
  /* 12d61484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61487 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61489 call 0x12d61a70 */
  push32(0x12d6148eu); f_12d61a70();
  /* 12d6148e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d61491 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 12d61498 jmp 0x12d614a3 */
  goto L_12d614a3;
L_12d6149a:;
  /* 12d6149a mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d6149d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d614a0 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_12d614a3:;
  /* 12d614a3 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d614a6 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d614a9 jge 0x12d614e9 */
  if ((C.sf==C.of)) goto L_12d614e9;
  /* 12d614ab mov esi, esp */
  ESI = (ESP);
  /* 12d614ad lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12d614b0 push eax */
  push32((uint32_t)(EAX));
  /* 12d614b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d614b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d614b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d614b8 push edx */
  push32((uint32_t)(EDX));
  /* 12d614b9 call dword ptr [0x12d803e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803e4))), 0x12d614bfu);
  /* 12d614bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d614c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d614c4 call 0x12d61a70 */
  push32(0x12d614c9u); f_12d61a70();
  /* 12d614c9 mov byte ptr [ebp - 0x28], 0 */
  w8((uint32_t)(EBP + -0x28), (0x0u));
  /* 12d614cd mov byte ptr [ebp - 0x27], 0 */
  w8((uint32_t)(EBP + -0x27), (0x0u));
  /* 12d614d1 mov esi, esp */
  ESI = (ESP);
  /* 12d614d3 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 12d614d6 push eax */
  push32((uint32_t)(EAX));
  /* 12d614d7 call dword ptr [0x12d803e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803e8))), 0x12d614ddu);
  /* 12d614dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d614e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d614e2 call 0x12d61a70 */
  push32(0x12d614e7u); f_12d61a70();
  /* 12d614e7 jmp 0x12d6149a */
  goto L_12d6149a;
L_12d614e9:;
  /* 12d614e9 pop edi */
  EDI = (pop32());
  /* 12d614ea pop esi */
  ESI = (pop32());
  /* 12d614eb pop ebx */
  EBX = (pop32());
  /* 12d614ec add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d614ef cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d614f1 call 0x12d61a70 */
  push32(0x12d614f6u); f_12d61a70();
  /* 12d614f6 mov esp, ebp */
  ESP = (EBP);
  /* 12d614f8 pop ebp */
  EBP = (pop32());
  /* 12d614f9 ret  */
  ESPCHK(0x12d61460u, _esp0);
  ESP += 4; return;
}

/* FUN_10001520 @ 0x12d61520 (198 bytes, 69 insns) */
void f_12d61520(void) {
  FTRACE(0x12d61520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61521 mov ebp, esp */
  EBP = (ESP);
  /* 12d61523 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61526 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61527 push esi */
  push32((uint32_t)(ESI));
  /* 12d61528 push edi */
  push32((uint32_t)(EDI));
  /* 12d61529 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12d6152c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12d61531 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d61536 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61538 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6153f jmp 0x12d6154a */
  goto L_12d6154a;
L_12d61541:;
  /* 12d61541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d61544 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61547 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6154a:;
  /* 12d6154a cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6154e jge 0x12d615d5 */
  if ((C.sf==C.of)) goto L_12d615d5;
  /* 12d61554 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d61556 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6155a setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 12d6155d mov esi, esp */
  ESI = (ESP);
  /* 12d6155f push ecx */
  push32((uint32_t)(ECX));
  /* 12d61560 push 0x12d7e408 */
  push32((uint32_t)(0x12d7e408u));
  /* 12d61565 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d61568 push edx */
  push32((uint32_t)(EDX));
  /* 12d61569 call dword ptr [0x12d803d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803d8))), 0x12d6156fu);
  /* 12d6156f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61574 call 0x12d61a70 */
  push32(0x12d61579u); f_12d61a70();
  /* 12d61579 mov esi, esp */
  ESI = (ESP);
  /* 12d6157b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6157d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61580 push eax */
  push32((uint32_t)(EAX));
  /* 12d61581 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d61584 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61585 call dword ptr [0x12d803e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803e0))), 0x12d6158bu);
  /* 12d6158b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6158e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61590 call 0x12d61a70 */
  push32(0x12d61595u); f_12d61a70();
  /* 12d61595 mov esi, esp */
  ESI = (ESP);
  /* 12d61597 mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 12d6159a push edx */
  push32((uint32_t)(EDX));
  /* 12d6159b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6159e push eax */
  push32((uint32_t)(EAX));
  /* 12d6159f mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d615a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d615a3 call dword ptr [0x12d803d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803d8))), 0x12d615a9u);
  /* 12d615a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d615ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d615ae call 0x12d61a70 */
  push32(0x12d615b3u); f_12d61a70();
  /* 12d615b3 mov esi, esp */
  ESI = (ESP);
  /* 12d615b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d615b7 push 0x12d7e408 */
  push32((uint32_t)(0x12d7e408u));
  /* 12d615bc mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d615bf push edx */
  push32((uint32_t)(EDX));
  /* 12d615c0 call dword ptr [0x12d803e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803e0))), 0x12d615c6u);
  /* 12d615c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d615c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d615cb call 0x12d61a70 */
  push32(0x12d615d0u); f_12d61a70();
  /* 12d615d0 jmp 0x12d61541 */
  goto L_12d61541;
L_12d615d5:;
  /* 12d615d5 pop edi */
  EDI = (pop32());
  /* 12d615d6 pop esi */
  ESI = (pop32());
  /* 12d615d7 pop ebx */
  EBX = (pop32());
  /* 12d615d8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d615db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d615dd call 0x12d61a70 */
  push32(0x12d615e2u); f_12d61a70();
  /* 12d615e2 mov esp, ebp */
  ESP = (EBP);
  /* 12d615e4 pop ebp */
  EBP = (pop32());
  /* 12d615e5 ret  */
  ESPCHK(0x12d61520u, _esp0);
  ESP += 4; return;
}

/* FUN_10001620 @ 0x12d61620 (119 bytes, 44 insns) */
void f_12d61620(void) {
  FTRACE(0x12d61620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61620 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61621 mov ebp, esp */
  EBP = (ESP);
  /* 12d61623 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61626 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61627 push esi */
  push32((uint32_t)(ESI));
  /* 12d61628 push edi */
  push32((uint32_t)(EDI));
  /* 12d61629 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12d6162c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12d61631 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d61636 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61638 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6163f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d61646 jmp 0x12d61651 */
  goto L_12d61651;
L_12d61648:;
  /* 12d61648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6164b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6164e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d61651:;
  /* 12d61651 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d61654 cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61657 jge 0x12d61683 */
  if ((C.sf==C.of)) goto L_12d61683;
  /* 12d61659 mov esi, esp */
  ESI = (ESP);
  /* 12d6165b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6165e push edx */
  push32((uint32_t)(EDX));
  /* 12d6165f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d61662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61665 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d61668 push edx */
  push32((uint32_t)(EDX));
  /* 12d61669 call dword ptr [0x12d803d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803d0))), 0x12d6166fu);
  /* 12d6166f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61672 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61674 call 0x12d61a70 */
  push32(0x12d61679u); f_12d61a70();
  /* 12d61679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6167c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6167e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d61681 jmp 0x12d61648 */
  goto L_12d61648;
L_12d61683:;
  /* 12d61683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d61686 pop edi */
  EDI = (pop32());
  /* 12d61687 pop esi */
  ESI = (pop32());
  /* 12d61688 pop ebx */
  EBX = (pop32());
  /* 12d61689 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6168c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6168e call 0x12d61a70 */
  push32(0x12d61693u); f_12d61a70();
  /* 12d61693 mov esp, ebp */
  ESP = (EBP);
  /* 12d61695 pop ebp */
  EBP = (pop32());
  /* 12d61696 ret  */
  ESPCHK(0x12d61620u, _esp0);
  ESP += 4; return;
}

/* FUN_100016c0 @ 0x12d616c0 (160 bytes, 56 insns) */
void f_12d616c0(void) {
  FTRACE(0x12d616c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d616c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d616c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d616c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d616c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d616c7 push esi */
  push32((uint32_t)(ESI));
  /* 12d616c8 push edi */
  push32((uint32_t)(EDI));
  /* 12d616c9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 12d616cc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 12d616d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d616d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d616d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d616df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d616e6 jmp 0x12d616f1 */
  goto L_12d616f1;
L_12d616e8:;
  /* 12d616e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d616eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d616ee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d616f1:;
  /* 12d616f1 cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d616f5 jge 0x12d6174c */
  if ((C.sf==C.of)) goto L_12d6174c;
  /* 12d616f7 mov esi, esp */
  ESI = (ESP);
  /* 12d616f9 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d616fc push ecx */
  push32((uint32_t)(ECX));
  /* 12d616fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d61700 lea eax, [edx*8 + 0x12d7e410] */
  EAX = ((uint32_t)(EDX*8 + 0x12d7e410));
  /* 12d61707 push eax */
  push32((uint32_t)(EAX));
  /* 12d61708 call dword ptr [0x12d803cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803cc))), 0x12d6170eu);
  /* 12d6170e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61713 call 0x12d61a70 */
  push32(0x12d61718u); f_12d61a70();
  /* 12d61718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6171a jle 0x12d6174a */
  if ((C.zf||C.sf!=C.of)) goto L_12d6174a;
  /* 12d6171c mov esi, esp */
  ESI = (ESP);
  /* 12d6171e mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d61721 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61722 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d61725 lea eax, [edx*8 + 0x12d7e410] */
  EAX = ((uint32_t)(EDX*8 + 0x12d7e410));
  /* 12d6172c push eax */
  push32((uint32_t)(EAX));
  /* 12d6172d call dword ptr [0x12d803cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803cc))), 0x12d61733u);
  /* 12d61733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61738 call 0x12d61a70 */
  push32(0x12d6173du); f_12d61a70();
  /* 12d6173d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6173f jne 0x12d6174a */
  if (!C.zf) goto L_12d6174a;
  /* 12d61741 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d61744 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61747 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d6174a:;
  /* 12d6174a jmp 0x12d616e8 */
  goto L_12d616e8;
L_12d6174c:;
  /* 12d6174c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6174f pop edi */
  EDI = (pop32());
  /* 12d61750 pop esi */
  ESI = (pop32());
  /* 12d61751 pop ebx */
  EBX = (pop32());
  /* 12d61752 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61755 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61757 call 0x12d61a70 */
  push32(0x12d6175cu); f_12d61a70();
  /* 12d6175c mov esp, ebp */
  ESP = (EBP);
  /* 12d6175e pop ebp */
  EBP = (pop32());
  /* 12d6175f ret  */
  ESPCHK(0x12d616c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x12d61790 (181 bytes, 54 insns) */
void f_12d61790(void) {
  FTRACE(0x12d61790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61790 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61791 mov ebp, esp */
  EBP = (ESP);
  /* 12d61793 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61796 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61797 push esi */
  push32((uint32_t)(ESI));
  /* 12d61798 push edi */
  push32((uint32_t)(EDI));
  /* 12d61799 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d6179c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d617a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d617a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d617a8 mov esi, esp */
  ESI = (ESP);
  /* 12d617aa push 0x12d79070 */
  push32((uint32_t)(0x12d79070u));
  /* 12d617af push 0x12d7e410 */
  push32((uint32_t)(0x12d7e410u));
  /* 12d617b4 call dword ptr [0x12d803c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803c0))), 0x12d617bau);
  /* 12d617ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d617bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d617bf call 0x12d61a70 */
  push32(0x12d617c4u); f_12d61a70();
  /* 12d617c4 mov esi, esp */
  ESI = (ESP);
  /* 12d617c6 push 0x12d79068 */
  push32((uint32_t)(0x12d79068u));
  /* 12d617cb push 0x12d7e418 */
  push32((uint32_t)(0x12d7e418u));
  /* 12d617d0 call dword ptr [0x12d803c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803c0))), 0x12d617d6u);
  /* 12d617d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d617d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d617db call 0x12d61a70 */
  push32(0x12d617e0u); f_12d61a70();
  /* 12d617e0 mov esi, esp */
  ESI = (ESP);
  /* 12d617e2 push 0x12d79060 */
  push32((uint32_t)(0x12d79060u));
  /* 12d617e7 push 0x12d7e420 */
  push32((uint32_t)(0x12d7e420u));
  /* 12d617ec call dword ptr [0x12d803c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803c0))), 0x12d617f2u);
  /* 12d617f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d617f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d617f7 call 0x12d61a70 */
  push32(0x12d617fcu); f_12d61a70();
  /* 12d617fc mov esi, esp */
  ESI = (ESP);
  /* 12d617fe push 0x12d79058 */
  push32((uint32_t)(0x12d79058u));
  /* 12d61803 push 0x12d7e428 */
  push32((uint32_t)(0x12d7e428u));
  /* 12d61808 call dword ptr [0x12d803c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803c0))), 0x12d6180eu);
  /* 12d6180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61813 call 0x12d61a70 */
  push32(0x12d61818u); f_12d61a70();
  /* 12d61818 mov esi, esp */
  ESI = (ESP);
  /* 12d6181a push 0x12d79050 */
  push32((uint32_t)(0x12d79050u));
  /* 12d6181f push 0x12d7e430 */
  push32((uint32_t)(0x12d7e430u));
  /* 12d61824 call dword ptr [0x12d803c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803c0))), 0x12d6182au);
  /* 12d6182a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6182d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6182f call 0x12d61a70 */
  push32(0x12d61834u); f_12d61a70();
  /* 12d61834 pop edi */
  EDI = (pop32());
  /* 12d61835 pop esi */
  ESI = (pop32());
  /* 12d61836 pop ebx */
  EBX = (pop32());
  /* 12d61837 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6183a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6183c call 0x12d61a70 */
  push32(0x12d61841u); f_12d61a70();
  /* 12d61841 mov esp, ebp */
  ESP = (EBP);
  /* 12d61843 pop ebp */
  EBP = (pop32());
  /* 12d61844 ret  */
  ESPCHK(0x12d61790u, _esp0);
  ESP += 4; return;
}

/* FUN_10001880 @ 0x12d61880 (51 bytes, 21 insns) */
void f_12d61880(void) {
  FTRACE(0x12d61880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61880 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61881 mov ebp, esp */
  EBP = (ESP);
  /* 12d61883 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61886 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61887 push esi */
  push32((uint32_t)(ESI));
  /* 12d61888 push edi */
  push32((uint32_t)(EDI));
  /* 12d61889 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d6188c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d61891 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d61896 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61898 call 0x12d61032 */
  push32(0x12d6189du); f_12d61032();
  /* 12d6189d call 0x12d6102d */
  push32(0x12d618a2u); f_12d6102d();
  /* 12d618a2 pop edi */
  EDI = (pop32());
  /* 12d618a3 pop esi */
  ESI = (pop32());
  /* 12d618a4 pop ebx */
  EBX = (pop32());
  /* 12d618a5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d618a8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d618aa call 0x12d61a70 */
  push32(0x12d618afu); f_12d61a70();
  /* 12d618af mov esp, ebp */
  ESP = (EBP);
  /* 12d618b1 pop ebp */
  EBP = (pop32());
  /* 12d618b2 ret  */
  ESPCHK(0x12d61880u, _esp0);
  ESP += 4; return;
}

/* FUN_100018c0 @ 0x12d618c0 (46 bytes, 20 insns) */
void f_12d618c0(void) {
  FTRACE(0x12d618c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d618c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d618c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d618c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d618c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d618c7 push esi */
  push32((uint32_t)(ESI));
  /* 12d618c8 push edi */
  push32((uint32_t)(EDI));
  /* 12d618c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d618cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d618d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d618d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d618d8 call 0x12d61046 */
  push32(0x12d618ddu); f_12d61046();
  /* 12d618dd pop edi */
  EDI = (pop32());
  /* 12d618de pop esi */
  ESI = (pop32());
  /* 12d618df pop ebx */
  EBX = (pop32());
  /* 12d618e0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d618e3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d618e5 call 0x12d61a70 */
  push32(0x12d618eau); f_12d61a70();
  /* 12d618ea mov esp, ebp */
  ESP = (EBP);
  /* 12d618ec pop ebp */
  EBP = (pop32());
  /* 12d618ed ret  */
  ESPCHK(0x12d618c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001900 @ 0x12d61900 (139 bytes, 47 insns) */
void f_12d61900(void) {
  FTRACE(0x12d61900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61900 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61901 mov ebp, esp */
  EBP = (ESP);
  /* 12d61903 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61906 push ebx */
  push32((uint32_t)(EBX));
  /* 12d61907 push esi */
  push32((uint32_t)(ESI));
  /* 12d61908 push edi */
  push32((uint32_t)(EDI));
  /* 12d61909 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d6190c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d61911 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d61916 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61918 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6191a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6191c call 0x12d6103c */
  push32(0x12d61921u); f_12d6103c();
  /* 12d61921 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61924 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61927 jle 0x12d61938 */
  if ((C.zf||C.sf!=C.of)) goto L_12d61938;
  /* 12d61929 push 0x12d7ca30 */
  push32((uint32_t)(0x12d7ca30u));
  /* 12d6192e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d61930 call 0x12d61023 */
  push32(0x12d61935u); f_12d61023();
  /* 12d61935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d61938:;
  /* 12d61938 push 0x12d7e438 */
  push32((uint32_t)(0x12d7e438u));
  /* 12d6193d call 0x12d61005 */
  push32(0x12d61942u); f_12d61005();
  /* 12d61942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61945 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61948 jge 0x12d61959 */
  if ((C.sf==C.of)) goto L_12d61959;
  /* 12d6194a push 0x12d7ca38 */
  push32((uint32_t)(0x12d7ca38u));
  /* 12d6194f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d61951 call 0x12d61023 */
  push32(0x12d61956u); f_12d61023();
  /* 12d61956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d61959:;
  /* 12d61959 push 0x12d7e440 */
  push32((uint32_t)(0x12d7e440u));
  /* 12d6195e call 0x12d61005 */
  push32(0x12d61963u); f_12d61005();
  /* 12d61963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61966 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61969 jge 0x12d6197a */
  if ((C.sf==C.of)) goto L_12d6197a;
  /* 12d6196b push 0x12d7ca30 */
  push32((uint32_t)(0x12d7ca30u));
  /* 12d61970 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d61972 call 0x12d61023 */
  push32(0x12d61977u); f_12d61023();
  /* 12d61977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6197a:;
  /* 12d6197a pop edi */
  EDI = (pop32());
  /* 12d6197b pop esi */
  ESI = (pop32());
  /* 12d6197c pop ebx */
  EBX = (pop32());
  /* 12d6197d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61980 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61982 call 0x12d61a70 */
  push32(0x12d61987u); f_12d61a70();
  /* 12d61987 mov esp, ebp */
  ESP = (EBP);
  /* 12d61989 pop ebp */
  EBP = (pop32());
  /* 12d6198a ret  */
  ESPCHK(0x12d61900u, _esp0);
  ESP += 4; return;
}

/* FUN_100019b0 @ 0x12d619b0 (63 bytes, 26 insns) */
void f_12d619b0(void) {
  FTRACE(0x12d619b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d619b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d619b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d619b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d619b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d619b7 push esi */
  push32((uint32_t)(ESI));
  /* 12d619b8 push edi */
  push32((uint32_t)(EDI));
  /* 12d619b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12d619bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12d619c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d619c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d619c8 mov esi, esp */
  ESI = (ESP);
  /* 12d619ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d619cd push eax */
  push32((uint32_t)(EAX));
  /* 12d619ce call dword ptr [0x12d803c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d803c4))), 0x12d619d4u);
  /* 12d619d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d619d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d619d9 call 0x12d61a70 */
  push32(0x12d619deu); f_12d61a70();
  /* 12d619de pop edi */
  EDI = (pop32());
  /* 12d619df pop esi */
  ESI = (pop32());
  /* 12d619e0 pop ebx */
  EBX = (pop32());
  /* 12d619e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d619e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d619e6 call 0x12d61a70 */
  push32(0x12d619ebu); f_12d61a70();
  /* 12d619eb mov esp, ebp */
  ESP = (EBP);
  /* 12d619ed pop ebp */
  EBP = (pop32());
  /* 12d619ee ret  */
  ESPCHK(0x12d619b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12d61a70 (56 bytes, 28 insns) */
void f_12d61a70(void) {
  FTRACE(0x12d61a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61a70 jne 0x12d61a73 */
  if (!C.zf) goto L_12d61a73;
  /* 12d61a72 ret  */
  ESPCHK(0x12d61a70u, _esp0);
  ESP += 4; return;
L_12d61a73:;
  /* 12d61a73 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61a74 mov ebp, esp */
  EBP = (ESP);
  /* 12d61a76 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61a79 push eax */
  push32((uint32_t)(EAX));
  /* 12d61a7a push edx */
  push32((uint32_t)(EDX));
  /* 12d61a7b push ebx */
  push32((uint32_t)(EBX));
  /* 12d61a7c push esi */
  push32((uint32_t)(ESI));
  /* 12d61a7d push edi */
  push32((uint32_t)(EDI));
  /* 12d61a7e push 0x12d7908c */
  push32((uint32_t)(0x12d7908cu));
  /* 12d61a83 push 0x12d79088 */
  push32((uint32_t)(0x12d79088u));
  /* 12d61a88 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12d61a8a push 0x12d79078 */
  push32((uint32_t)(0x12d79078u));
  /* 12d61a8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d61a91 call 0x12d61e40 */
  push32(0x12d61a96u); f_12d61e40();
  /* 12d61a96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61a99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61a9c jne 0x12d61a9f */
  if (!C.zf) goto L_12d61a9f;
  /* 12d61a9e int3  */
  x86_unimpl("int3 @ 0x12d61a9e");
L_12d61a9f:;
  /* 12d61a9f pop edi */
  EDI = (pop32());
  /* 12d61aa0 pop esi */
  ESI = (pop32());
  /* 12d61aa1 pop ebx */
  EBX = (pop32());
  /* 12d61aa2 pop edx */
  EDX = (pop32());
  /* 12d61aa3 pop eax */
  EAX = (pop32());
  /* 12d61aa4 mov esp, ebp */
  ESP = (EBP);
  /* 12d61aa6 pop ebp */
  EBP = (pop32());
  /* 12d61aa7 ret  */
  ESPCHK(0x12d61a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ab0 @ 0x12d61ab0 (313 bytes, 78 insns) */
void f_12d61ab0(void) {
  FTRACE(0x12d61ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12d61ab3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61ab7 jne 0x12d61b77 */
  if (!C.zf) goto L_12d61b77;
  /* 12d61abd call dword ptr [0x12d80284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80284))), 0x12d61ac3u);
  /* 12d61ac3 mov dword ptr [0x12d7e480], eax */
  w32((uint32_t)(0x12d7e480), (EAX));
  /* 12d61ac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d61aca call 0x12d65570 */
  push32(0x12d61acfu); f_12d65570();
  /* 12d61acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d61ad4 jne 0x12d61add */
  if (!C.zf) goto L_12d61add;
  /* 12d61ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61ad8 jmp 0x12d61be5 */
  goto L_12d61be5;
L_12d61add:;
  /* 12d61add mov eax, dword ptr [0x12d7e480] */
  EAX = (r32((uint32_t)(0x12d7e480)));
  /* 12d61ae2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d61ae5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d61aea mov dword ptr [0x12d7e48c], eax */
  w32((uint32_t)(0x12d7e48c), (EAX));
  /* 12d61aef mov ecx, dword ptr [0x12d7e480] */
  ECX = (r32((uint32_t)(0x12d7e480)));
  /* 12d61af5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d61afb mov dword ptr [0x12d7e488], ecx */
  w32((uint32_t)(0x12d7e488), (ECX));
  /* 12d61b01 mov edx, dword ptr [0x12d7e488] */
  EDX = (r32((uint32_t)(0x12d7e488)));
  /* 12d61b07 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d61b0a add edx, dword ptr [0x12d7e48c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7e48c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61b10 mov dword ptr [0x12d7e484], edx */
  w32((uint32_t)(0x12d7e484), (EDX));
  /* 12d61b16 mov eax, dword ptr [0x12d7e480] */
  EAX = (r32((uint32_t)(0x12d7e480)));
  /* 12d61b1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d61b1e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d61b23 mov dword ptr [0x12d7e480], eax */
  w32((uint32_t)(0x12d7e480), (EAX));
  /* 12d61b28 call 0x12d626e0 */
  push32(0x12d61b2du); f_12d626e0();
  /* 12d61b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d61b2f jne 0x12d61b3d */
  if (!C.zf) goto L_12d61b3d;
  /* 12d61b31 call 0x12d655c0 */
  push32(0x12d61b36u); f_12d655c0();
  /* 12d61b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61b38 jmp 0x12d61be5 */
  goto L_12d61be5;
L_12d61b3d:;
  /* 12d61b3d call dword ptr [0x12d80280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80280))), 0x12d61b43u);
  /* 12d61b43 mov dword ptr [0x12d7ffcc], eax */
  w32((uint32_t)(0x12d7ffcc), (EAX));
  /* 12d61b48 call 0x12d65350 */
  push32(0x12d61b4du); f_12d65350();
  /* 12d61b4d mov dword ptr [0x12d7e468], eax */
  w32((uint32_t)(0x12d7e468), (EAX));
  /* 12d61b52 call 0x12d62990 */
  push32(0x12d61b57u); f_12d62990();
  /* 12d61b57 call 0x12d64e40 */
  push32(0x12d61b5cu); f_12d64e40();
  /* 12d61b5c call 0x12d64cf0 */
  push32(0x12d61b61u); f_12d64cf0();
  /* 12d61b61 call 0x12d624e0 */
  push32(0x12d61b66u); f_12d624e0();
  /* 12d61b66 mov ecx, dword ptr [0x12d7e464] */
  ECX = (r32((uint32_t)(0x12d7e464)));
  /* 12d61b6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61b6f mov dword ptr [0x12d7e464], ecx */
  w32((uint32_t)(0x12d7e464), (ECX));
  /* 12d61b75 jmp 0x12d61be0 */
  goto L_12d61be0;
L_12d61b77:;
  /* 12d61b77 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61b7b jne 0x12d61bd0 */
  if (!C.zf) goto L_12d61bd0;
  /* 12d61b7d cmp dword ptr [0x12d7e464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61b84 jle 0x12d61bca */
  if ((C.zf||C.sf!=C.of)) goto L_12d61bca;
  /* 12d61b86 mov edx, dword ptr [0x12d7e464] */
  EDX = (r32((uint32_t)(0x12d7e464)));
  /* 12d61b8c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d61b8f mov dword ptr [0x12d7e464], edx */
  w32((uint32_t)(0x12d7e464), (EDX));
  /* 12d61b95 cmp dword ptr [0x12d7e4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61b9c jne 0x12d61ba3 */
  if (!C.zf) goto L_12d61ba3;
  /* 12d61b9e call 0x12d62560 */
  push32(0x12d61ba3u); f_12d62560();
L_12d61ba3:;
  /* 12d61ba3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d61ba5 call 0x12d64290 */
  push32(0x12d61baau); f_12d64290();
  /* 12d61baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61bad and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d61bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d61bb2 je 0x12d61bb9 */
  if (C.zf) goto L_12d61bb9;
  /* 12d61bb4 call 0x12d64ba0 */
  push32(0x12d61bb9u); f_12d64ba0();
L_12d61bb9:;
  /* 12d61bb9 call 0x12d62cc0 */
  push32(0x12d61bbeu); f_12d62cc0();
  /* 12d61bbe call 0x12d62770 */
  push32(0x12d61bc3u); f_12d62770();
  /* 12d61bc3 call 0x12d655c0 */
  push32(0x12d61bc8u); f_12d655c0();
  /* 12d61bc8 jmp 0x12d61bce */
  goto L_12d61bce;
L_12d61bca:;
  /* 12d61bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61bcc jmp 0x12d61be5 */
  goto L_12d61be5;
L_12d61bce:;
  /* 12d61bce jmp 0x12d61be0 */
  goto L_12d61be0;
L_12d61bd0:;
  /* 12d61bd0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61bd4 jne 0x12d61be0 */
  if (!C.zf) goto L_12d61be0;
  /* 12d61bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d61bd8 call 0x12d62860 */
  push32(0x12d61bddu); f_12d62860();
  /* 12d61bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d61be0:;
  /* 12d61be0 mov eax, 1 */
  EAX = (0x1u);
L_12d61be5:;
  /* 12d61be5 pop ebp */
  EBP = (pop32());
  /* 12d61be6 ret 0xc */
  ESPCHK(0x12d61ab0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12d61bf0 (243 bytes, 86 insns) */
void f_12d61bf0(void) {
  FTRACE(0x12d61bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d61bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61bf4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d61bfb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61bff jne 0x12d61c11 */
  if (!C.zf) goto L_12d61c11;
  /* 12d61c01 cmp dword ptr [0x12d7e464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c08 jne 0x12d61c11 */
  if (!C.zf) goto L_12d61c11;
  /* 12d61c0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61c0c jmp 0x12d61cdd */
  goto L_12d61cdd;
L_12d61c11:;
  /* 12d61c11 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c15 je 0x12d61c1d */
  if (C.zf) goto L_12d61c1d;
  /* 12d61c17 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c1b jne 0x12d61c5f */
  if (!C.zf) goto L_12d61c5f;
L_12d61c1d:;
  /* 12d61c1d cmp dword ptr [0x12d7ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c24 je 0x12d61c3b */
  if (C.zf) goto L_12d61c3b;
  /* 12d61c26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61c29 push eax */
  push32((uint32_t)(EAX));
  /* 12d61c2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61c2d push ecx */
  push32((uint32_t)(ECX));
  /* 12d61c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61c31 push edx */
  push32((uint32_t)(EDX));
  /* 12d61c32 call dword ptr [0x12d7ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ffdc))), 0x12d61c38u);
  /* 12d61c38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d61c3b:;
  /* 12d61c3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c3f je 0x12d61c55 */
  if (C.zf) goto L_12d61c55;
  /* 12d61c41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61c44 push eax */
  push32((uint32_t)(EAX));
  /* 12d61c45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61c48 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61c49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61c4c push edx */
  push32((uint32_t)(EDX));
  /* 12d61c4d call 0x12d61ab0 */
  push32(0x12d61c52u); f_12d61ab0();
  /* 12d61c52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d61c55:;
  /* 12d61c55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c59 jne 0x12d61c5f */
  if (!C.zf) goto L_12d61c5f;
  /* 12d61c5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61c5d jmp 0x12d61cdd */
  goto L_12d61cdd;
L_12d61c5f:;
  /* 12d61c5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61c62 push eax */
  push32((uint32_t)(EAX));
  /* 12d61c63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61c66 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61c6a push edx */
  push32((uint32_t)(EDX));
  /* 12d61c6b call 0x12d61014 */
  push32(0x12d61c70u); f_12d61014();
  /* 12d61c70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d61c73 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c77 jne 0x12d61c8e */
  if (!C.zf) goto L_12d61c8e;
  /* 12d61c79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c7d jne 0x12d61c8e */
  if (!C.zf) goto L_12d61c8e;
  /* 12d61c7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61c82 push eax */
  push32((uint32_t)(EAX));
  /* 12d61c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d61c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61c88 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61c89 call 0x12d61ab0 */
  push32(0x12d61c8eu); f_12d61ab0();
L_12d61c8e:;
  /* 12d61c8e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c92 je 0x12d61c9a */
  if (C.zf) goto L_12d61c9a;
  /* 12d61c94 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61c98 jne 0x12d61cda */
  if (!C.zf) goto L_12d61cda;
L_12d61c9a:;
  /* 12d61c9a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61c9d push edx */
  push32((uint32_t)(EDX));
  /* 12d61c9e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61ca1 push eax */
  push32((uint32_t)(EAX));
  /* 12d61ca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61ca6 call 0x12d61ab0 */
  push32(0x12d61cabu); f_12d61ab0();
  /* 12d61cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d61cad jne 0x12d61cb6 */
  if (!C.zf) goto L_12d61cb6;
  /* 12d61caf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d61cb6:;
  /* 12d61cb6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61cba je 0x12d61cda */
  if (C.zf) goto L_12d61cda;
  /* 12d61cbc cmp dword ptr [0x12d7ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61cc3 je 0x12d61cda */
  if (C.zf) goto L_12d61cda;
  /* 12d61cc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61cc8 push edx */
  push32((uint32_t)(EDX));
  /* 12d61cc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61ccc push eax */
  push32((uint32_t)(EAX));
  /* 12d61ccd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61cd1 call dword ptr [0x12d7ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ffdc))), 0x12d61cd7u);
  /* 12d61cd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d61cda:;
  /* 12d61cda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d61cdd:;
  /* 12d61cdd mov esp, ebp */
  ESP = (EBP);
  /* 12d61cdf pop ebp */
  EBP = (pop32());
  /* 12d61ce0 ret 0xc */
  ESPCHK(0x12d61bf0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12d61cf0 (58 bytes, 18 insns) */
void f_12d61cf0(void) {
  FTRACE(0x12d61cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d61cf3 cmp dword ptr [0x12d7e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61cfa je 0x12d61d0e */
  if (C.zf) goto L_12d61d0e;
  /* 12d61cfc cmp dword ptr [0x12d7e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61d03 jne 0x12d61d13 */
  if (!C.zf) goto L_12d61d13;
  /* 12d61d05 cmp dword ptr [0x12d7e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61d0c jne 0x12d61d13 */
  if (!C.zf) goto L_12d61d13;
L_12d61d0e:;
  /* 12d61d0e call 0x12d65660 */
  push32(0x12d61d13u); f_12d65660();
L_12d61d13:;
  /* 12d61d13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61d16 push eax */
  push32((uint32_t)(EAX));
  /* 12d61d17 call 0x12d656b0 */
  push32(0x12d61d1cu); f_12d656b0();
  /* 12d61d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61d1f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d61d24 call dword ptr [0x12d7ca44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ca44))), 0x12d61d2au);
  /* 12d61d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61d2d pop ebp */
  EBP = (pop32());
  /* 12d61d2e ret  */
  ESPCHK(0x12d61cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d30 @ 0x12d61d30 (11 bytes, 5 insns) */
void f_12d61d30(void) {
  FTRACE(0x12d61d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61d31 mov ebp, esp */
  EBP = (ESP);
  /* 12d61d33 call dword ptr [0x12d80288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80288))), 0x12d61d39u);
  /* 12d61d39 pop ebp */
  EBP = (pop32());
  /* 12d61d3a ret  */
  ESPCHK(0x12d61d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d40 @ 0x12d61d40 (87 bytes, 30 insns) */
void f_12d61d40(void) {
  FTRACE(0x12d61d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61d41 mov ebp, esp */
  EBP = (ESP);
  /* 12d61d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61d44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61d48 jl 0x12d61d50 */
  if ((C.sf!=C.of)) goto L_12d61d50;
  /* 12d61d4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61d4e jl 0x12d61d55 */
  if ((C.sf!=C.of)) goto L_12d61d55;
L_12d61d50:;
  /* 12d61d50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d61d53 jmp 0x12d61d93 */
  goto L_12d61d93;
L_12d61d55:;
  /* 12d61d55 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61d59 jne 0x12d61d67 */
  if (!C.zf) goto L_12d61d67;
  /* 12d61d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61d5e mov eax, dword ptr [eax*4 + 0x12d7ca4c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d7ca4c)));
  /* 12d61d65 jmp 0x12d61d93 */
  goto L_12d61d93;
L_12d61d67:;
  /* 12d61d67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61d6a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d61d6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d61d6f je 0x12d61d76 */
  if (C.zf) goto L_12d61d76;
  /* 12d61d71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d61d74 jmp 0x12d61d93 */
  goto L_12d61d93;
L_12d61d76:;
  /* 12d61d76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61d79 mov eax, dword ptr [edx*4 + 0x12d7ca4c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7ca4c)));
  /* 12d61d80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d61d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61d86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61d89 mov dword ptr [ecx*4 + 0x12d7ca4c], edx */
  w32((uint32_t)(ECX*4 + 0x12d7ca4c), (EDX));
  /* 12d61d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d61d93:;
  /* 12d61d93 mov esp, ebp */
  ESP = (EBP);
  /* 12d61d95 pop ebp */
  EBP = (pop32());
  /* 12d61d96 ret  */
  ESPCHK(0x12d61d40u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12d61da0 (126 bytes, 38 insns) */
void f_12d61da0(void) {
  FTRACE(0x12d61da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61da1 mov ebp, esp */
  EBP = (ESP);
  /* 12d61da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61da4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61da8 jl 0x12d61db0 */
  if ((C.sf!=C.of)) goto L_12d61db0;
  /* 12d61daa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61dae jl 0x12d61db7 */
  if ((C.sf!=C.of)) goto L_12d61db7;
L_12d61db0:;
  /* 12d61db0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12d61db5 jmp 0x12d61e1a */
  goto L_12d61e1a;
L_12d61db7:;
  /* 12d61db7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61dbb jne 0x12d61dc9 */
  if (!C.zf) goto L_12d61dc9;
  /* 12d61dbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61dc0 mov eax, dword ptr [eax*4 + 0x12d7ca58] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d7ca58)));
  /* 12d61dc7 jmp 0x12d61e1a */
  goto L_12d61e1a;
L_12d61dc9:;
  /* 12d61dc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61dcc mov edx, dword ptr [ecx*4 + 0x12d7ca58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7ca58)));
  /* 12d61dd3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d61dd6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61dda jne 0x12d61df0 */
  if (!C.zf) goto L_12d61df0;
  /* 12d61ddc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d61dde call dword ptr [0x12d8028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8028c))), 0x12d61de4u);
  /* 12d61de4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61de7 mov dword ptr [ecx*4 + 0x12d7ca58], eax */
  w32((uint32_t)(ECX*4 + 0x12d7ca58), (EAX));
  /* 12d61dee jmp 0x12d61e17 */
  goto L_12d61e17;
L_12d61df0:;
  /* 12d61df0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61df4 jne 0x12d61e0a */
  if (!C.zf) goto L_12d61e0a;
  /* 12d61df6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d61df8 call dword ptr [0x12d8028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8028c))), 0x12d61dfeu);
  /* 12d61dfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61e01 mov dword ptr [edx*4 + 0x12d7ca58], eax */
  w32((uint32_t)(EDX*4 + 0x12d7ca58), (EAX));
  /* 12d61e08 jmp 0x12d61e17 */
  goto L_12d61e17;
L_12d61e0a:;
  /* 12d61e0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61e0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61e10 mov dword ptr [eax*4 + 0x12d7ca58], ecx */
  w32((uint32_t)(EAX*4 + 0x12d7ca58), (ECX));
L_12d61e17:;
  /* 12d61e17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d61e1a:;
  /* 12d61e1a mov esp, ebp */
  ESP = (EBP);
  /* 12d61e1c pop ebp */
  EBP = (pop32());
  /* 12d61e1d ret  */
  ESPCHK(0x12d61da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e20 @ 0x12d61e20 (28 bytes, 11 insns) */
void f_12d61e20(void) {
  FTRACE(0x12d61e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61e21 mov ebp, esp */
  EBP = (ESP);
  /* 12d61e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61e24 mov eax, dword ptr [0x12d7ffc0] */
  EAX = (r32((uint32_t)(0x12d7ffc0)));
  /* 12d61e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d61e2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61e2f mov dword ptr [0x12d7ffc0], ecx */
  w32((uint32_t)(0x12d7ffc0), (ECX));
  /* 12d61e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d61e38 mov esp, ebp */
  ESP = (EBP);
  /* 12d61e3a pop ebp */
  EBP = (pop32());
  /* 12d61e3b ret  */
  ESPCHK(0x12d61e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e40 @ 0x12d61e40 (912 bytes, 248 insns) */
void f_12d61e40(void) {
  FTRACE(0x12d61e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d61e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d61e41 mov ebp, esp */
  EBP = (ESP);
  /* 12d61e43 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12d61e48 call 0x12d65f20 */
  push32(0x12d61e4du); f_12d65f20();
  /* 12d61e4d push edi */
  push32((uint32_t)(EDI));
  /* 12d61e4e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12d61e55 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d61e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61e5c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12d61e62 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61e64 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d61e66 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d61e67 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12d61e6e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d61e73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61e75 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12d61e7b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61e7d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d61e7f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d61e80 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12d61e87 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d61e8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d61e8e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12d61e94 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d61e96 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d61e98 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d61e99 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12d61e9c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12d61ea2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61ea6 jl 0x12d61eae */
  if ((C.sf!=C.of)) goto L_12d61eae;
  /* 12d61ea8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61eac jl 0x12d61eb6 */
  if ((C.sf!=C.of)) goto L_12d61eb6;
L_12d61eae:;
  /* 12d61eae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d61eb1 jmp 0x12d621cb */
  goto L_12d621cb;
L_12d61eb6:;
  /* 12d61eb6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61eba jne 0x12d61f60 */
  if (!C.zf) goto L_12d61f60;
  /* 12d61ec0 push 0x12d7ca48 */
  push32((uint32_t)(0x12d7ca48u));
  /* 12d61ec5 call dword ptr [0x12d802a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a4))), 0x12d61ecbu);
  /* 12d61ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d61ecd jle 0x12d61f60 */
  if ((C.zf||C.sf!=C.of)) goto L_12d61f60;
  /* 12d61ed3 cmp dword ptr [0x12d7e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61eda jne 0x12d61f1e */
  if (!C.zf) goto L_12d61f1e;
  /* 12d61edc push 0x12d79234 */
  push32((uint32_t)(0x12d79234u));
  /* 12d61ee1 call dword ptr [0x12d802a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a0))), 0x12d61ee7u);
  /* 12d61ee7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12d61eed cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61ef4 je 0x12d61f16 */
  if (C.zf) goto L_12d61f16;
  /* 12d61ef6 push 0x12d79228 */
  push32((uint32_t)(0x12d79228u));
  /* 12d61efb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12d61f01 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61f02 call dword ptr [0x12d8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8029c))), 0x12d61f08u);
  /* 12d61f08 mov dword ptr [0x12d7e478], eax */
  w32((uint32_t)(0x12d7e478), (EAX));
  /* 12d61f0d cmp dword ptr [0x12d7e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61f14 jne 0x12d61f1e */
  if (!C.zf) goto L_12d61f1e;
L_12d61f16:;
  /* 12d61f16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d61f19 jmp 0x12d621cb */
  goto L_12d621cb;
L_12d61f1e:;
  /* 12d61f1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d61f21 push edx */
  push32((uint32_t)(EDX));
  /* 12d61f22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d61f25 push eax */
  push32((uint32_t)(EAX));
  /* 12d61f26 push 0x12d791f4 */
  push32((uint32_t)(0x12d791f4u));
  /* 12d61f2b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12d61f31 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61f32 call dword ptr [0x12d7e478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e478))), 0x12d61f38u);
  /* 12d61f38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61f3b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d61f41 push edx */
  push32((uint32_t)(EDX));
  /* 12d61f42 call dword ptr [0x12d80298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80298))), 0x12d61f48u);
  /* 12d61f48 push 0x12d7ca48 */
  push32((uint32_t)(0x12d7ca48u));
  /* 12d61f4d call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d61f53u);
  /* 12d61f53 call 0x12d61d30 */
  push32(0x12d61f58u); f_12d61d30();
  /* 12d61f58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d61f5b jmp 0x12d621cb */
  goto L_12d621cb;
L_12d61f60:;
  /* 12d61f60 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61f64 je 0x12d61f9d */
  if (C.zf) goto L_12d61f9d;
  /* 12d61f66 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12d61f6c push eax */
  push32((uint32_t)(EAX));
  /* 12d61f6d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d61f70 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61f71 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12d61f76 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12d61f7c push edx */
  push32((uint32_t)(EDX));
  /* 12d61f7d call 0x12d65e20 */
  push32(0x12d61f82u); f_12d65e20();
  /* 12d61f82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d61f87 jge 0x12d61f9d */
  if ((C.sf==C.of)) goto L_12d61f9d;
  /* 12d61f89 push 0x12d791c8 */
  push32((uint32_t)(0x12d791c8u));
  /* 12d61f8e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12d61f94 push eax */
  push32((uint32_t)(EAX));
  /* 12d61f95 call 0x12d65d30 */
  push32(0x12d61f9au); f_12d65d30();
  /* 12d61f9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d61f9d:;
  /* 12d61f9d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61fa1 jne 0x12d61fd5 */
  if (!C.zf) goto L_12d61fd5;
  /* 12d61fa3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61fa7 je 0x12d61fb5 */
  if (C.zf) goto L_12d61fb5;
  /* 12d61fa9 mov dword ptr [ebp - 0x3028], 0x12d791b4 */
  w32((uint32_t)(EBP + -0x3028), (0x12d791b4u));
  /* 12d61fb3 jmp 0x12d61fbf */
  goto L_12d61fbf;
L_12d61fb5:;
  /* 12d61fb5 mov dword ptr [ebp - 0x3028], 0x12d791a0 */
  w32((uint32_t)(EBP + -0x3028), (0x12d791a0u));
L_12d61fbf:;
  /* 12d61fbf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12d61fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61fc6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d61fcc push edx */
  push32((uint32_t)(EDX));
  /* 12d61fcd call 0x12d65d30 */
  push32(0x12d61fd2u); f_12d65d30();
  /* 12d61fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d61fd5:;
  /* 12d61fd5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12d61fdb push eax */
  push32((uint32_t)(EAX));
  /* 12d61fdc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12d61fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d61fe3 call 0x12d65d40 */
  push32(0x12d61fe8u); f_12d65d40();
  /* 12d61fe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d61feb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d61fef jne 0x12d6202a */
  if (!C.zf) goto L_12d6202a;
  /* 12d61ff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d61ff4 mov eax, dword ptr [edx*4 + 0x12d7ca4c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7ca4c)));
  /* 12d61ffb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d61ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62000 je 0x12d62016 */
  if (C.zf) goto L_12d62016;
  /* 12d62002 push 0x12d7919c */
  push32((uint32_t)(0x12d7919cu));
  /* 12d62007 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12d6200d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6200e call 0x12d65d40 */
  push32(0x12d62013u); f_12d65d40();
  /* 12d62013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62016:;
  /* 12d62016 push 0x12d79198 */
  push32((uint32_t)(0x12d79198u));
  /* 12d6201b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d62021 push edx */
  push32((uint32_t)(EDX));
  /* 12d62022 call 0x12d65d40 */
  push32(0x12d62027u); f_12d65d40();
  /* 12d62027 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6202a:;
  /* 12d6202a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6202e je 0x12d62072 */
  if (C.zf) goto L_12d62072;
  /* 12d62030 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12d62036 push eax */
  push32((uint32_t)(EAX));
  /* 12d62037 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6203a push ecx */
  push32((uint32_t)(ECX));
  /* 12d6203b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6203e push edx */
  push32((uint32_t)(EDX));
  /* 12d6203f push 0x12d7918c */
  push32((uint32_t)(0x12d7918cu));
  /* 12d62044 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d62049 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d6204f push eax */
  push32((uint32_t)(EAX));
  /* 12d62050 call 0x12d65c30 */
  push32(0x12d62055u); f_12d65c30();
  /* 12d62055 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6205a jge 0x12d62070 */
  if ((C.sf==C.of)) goto L_12d62070;
  /* 12d6205c push 0x12d791c8 */
  push32((uint32_t)(0x12d791c8u));
  /* 12d62061 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12d62067 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62068 call 0x12d65d30 */
  push32(0x12d6206du); f_12d65d30();
  /* 12d6206d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62070:;
  /* 12d62070 jmp 0x12d62088 */
  goto L_12d62088;
L_12d62072:;
  /* 12d62072 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d62078 push edx */
  push32((uint32_t)(EDX));
  /* 12d62079 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d6207f push eax */
  push32((uint32_t)(EAX));
  /* 12d62080 call 0x12d65d30 */
  push32(0x12d62085u); f_12d65d30();
  /* 12d62085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62088:;
  /* 12d62088 cmp dword ptr [0x12d7ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6208f je 0x12d620cc */
  if (C.zf) goto L_12d620cc;
  /* 12d62091 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12d62097 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62098 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d6209e push edx */
  push32((uint32_t)(EDX));
  /* 12d6209f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d620a2 push eax */
  push32((uint32_t)(EAX));
  /* 12d620a3 call dword ptr [0x12d7ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ffc0))), 0x12d620a9u);
  /* 12d620a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d620ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d620ae je 0x12d620cc */
  if (C.zf) goto L_12d620cc;
  /* 12d620b0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d620b4 jne 0x12d620c1 */
  if (!C.zf) goto L_12d620c1;
  /* 12d620b6 push 0x12d7ca48 */
  push32((uint32_t)(0x12d7ca48u));
  /* 12d620bb call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d620c1u);
L_12d620c1:;
  /* 12d620c1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12d620c7 jmp 0x12d621cb */
  goto L_12d621cb;
L_12d620cc:;
  /* 12d620cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d620cf mov edx, dword ptr [ecx*4 + 0x12d7ca4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7ca4c)));
  /* 12d620d6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d620d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d620db je 0x12d6211b */
  if (C.zf) goto L_12d6211b;
  /* 12d620dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d620e0 cmp dword ptr [eax*4 + 0x12d7ca58], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12d7ca58))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d620e8 je 0x12d6211b */
  if (C.zf) goto L_12d6211b;
  /* 12d620ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d620ec lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12d620f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d620f3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d620f9 push edx */
  push32((uint32_t)(EDX));
  /* 12d620fa call 0x12d65bb0 */
  push32(0x12d620ffu); f_12d65bb0();
  /* 12d620ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62102 push eax */
  push32((uint32_t)(EAX));
  /* 12d62103 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d62109 push eax */
  push32((uint32_t)(EAX));
  /* 12d6210a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6210d mov edx, dword ptr [ecx*4 + 0x12d7ca58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7ca58)));
  /* 12d62114 push edx */
  push32((uint32_t)(EDX));
  /* 12d62115 call dword ptr [0x12d80290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80290))), 0x12d6211bu);
L_12d6211b:;
  /* 12d6211b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6211e mov ecx, dword ptr [eax*4 + 0x12d7ca4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7ca4c)));
  /* 12d62125 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d62128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6212a je 0x12d62139 */
  if (C.zf) goto L_12d62139;
  /* 12d6212c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d62132 push edx */
  push32((uint32_t)(EDX));
  /* 12d62133 call dword ptr [0x12d80298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80298))), 0x12d62139u);
L_12d62139:;
  /* 12d62139 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6213c mov ecx, dword ptr [eax*4 + 0x12d7ca4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7ca4c)));
  /* 12d62143 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d62146 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d62148 je 0x12d621b8 */
  if (C.zf) goto L_12d621b8;
  /* 12d6214a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6214e je 0x12d6216d */
  if (C.zf) goto L_12d6216d;
  /* 12d62150 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d62152 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12d62158 push edx */
  push32((uint32_t)(EDX));
  /* 12d62159 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6215c push eax */
  push32((uint32_t)(EAX));
  /* 12d6215d call 0x12d658c0 */
  push32(0x12d62162u); f_12d658c0();
  /* 12d62162 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62165 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12d6216b jmp 0x12d62177 */
  goto L_12d62177;
L_12d6216d:;
  /* 12d6216d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12d62177:;
  /* 12d62177 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12d6217d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6217e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d62181 push edx */
  push32((uint32_t)(EDX));
  /* 12d62182 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12d62188 push eax */
  push32((uint32_t)(EAX));
  /* 12d62189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6218c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6218d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62190 push edx */
  push32((uint32_t)(EDX));
  /* 12d62191 call 0x12d621d0 */
  push32(0x12d62196u); f_12d621d0();
  /* 12d62196 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62199 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12d6219f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d621a3 jne 0x12d621b0 */
  if (!C.zf) goto L_12d621b0;
  /* 12d621a5 push 0x12d7ca48 */
  push32((uint32_t)(0x12d7ca48u));
  /* 12d621aa call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d621b0u);
L_12d621b0:;
  /* 12d621b0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12d621b6 jmp 0x12d621cb */
  goto L_12d621cb;
L_12d621b8:;
  /* 12d621b8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d621bc jne 0x12d621c9 */
  if (!C.zf) goto L_12d621c9;
  /* 12d621be push 0x12d7ca48 */
  push32((uint32_t)(0x12d7ca48u));
  /* 12d621c3 call dword ptr [0x12d80294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80294))), 0x12d621c9u);
L_12d621c9:;
  /* 12d621c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d621cb:;
  /* 12d621cb pop edi */
  EDI = (pop32());
  /* 12d621cc mov esp, ebp */
  ESP = (EBP);
  /* 12d621ce pop ebp */
  EBP = (pop32());
  /* 12d621cf ret  */
  ESPCHK(0x12d61e40u, _esp0);
  ESP += 4; return;
}

/* FUN_100021d0 @ 0x12d621d0 (780 bytes, 197 insns) */
void f_12d621d0(void) {
  FTRACE(0x12d621d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d621d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d621d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d621d3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12d621d8 call 0x12d65f20 */
  push32(0x12d621ddu); f_12d65f20();
L_12d621dd:;
  /* 12d621dd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d621e1 jne 0x12d62208 */
  if (!C.zf) goto L_12d62208;
  /* 12d621e3 push 0x12d79384 */
  push32((uint32_t)(0x12d79384u));
  /* 12d621e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d621ea push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12d621ef push 0x12d79378 */
  push32((uint32_t)(0x12d79378u));
  /* 12d621f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d621f6 call 0x12d61e40 */
  push32(0x12d621fbu); f_12d61e40();
  /* 12d621fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d621fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62201 jne 0x12d62208 */
  if (!C.zf) goto L_12d62208;
  /* 12d62203 call 0x12d61d30 */
  push32(0x12d62208u); f_12d61d30();
L_12d62208:;
  /* 12d62208 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6220a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6220c jne 0x12d621dd */
  if (!C.zf) goto L_12d621dd;
  /* 12d6220e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d62213 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12d62219 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6221a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6221c call dword ptr [0x12d802a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a8))), 0x12d62222u);
  /* 12d62222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62224 jne 0x12d6223a */
  if (!C.zf) goto L_12d6223a;
  /* 12d62226 push 0x12d79360 */
  push32((uint32_t)(0x12d79360u));
  /* 12d6222b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12d62231 push edx */
  push32((uint32_t)(EDX));
  /* 12d62232 call 0x12d65d30 */
  push32(0x12d62237u); f_12d65d30();
  /* 12d62237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6223a:;
  /* 12d6223a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12d62240 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d62243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62246 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62247 call 0x12d65bb0 */
  push32(0x12d6224cu); f_12d65bb0();
  /* 12d6224c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6224f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62252 jbe 0x12d6227d */
  if ((C.cf||C.zf)) goto L_12d6227d;
  /* 12d62254 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62257 push edx */
  push32((uint32_t)(EDX));
  /* 12d62258 call 0x12d65bb0 */
  push32(0x12d6225du); f_12d65bb0();
  /* 12d6225d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62263 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12d62267 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6226a push 3 */
  push32((uint32_t)(0x3u));
  /* 12d6226c push 0x12d7935c */
  push32((uint32_t)(0x12d7935cu));
  /* 12d62271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62274 push eax */
  push32((uint32_t)(EAX));
  /* 12d62275 call 0x12d665a0 */
  push32(0x12d6227au); f_12d665a0();
  /* 12d6227a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6227d:;
  /* 12d6227d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d62280 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12d62286 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6228d je 0x12d622d8 */
  if (C.zf) goto L_12d622d8;
  /* 12d6228f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d62295 push edx */
  push32((uint32_t)(EDX));
  /* 12d62296 call 0x12d65bb0 */
  push32(0x12d6229bu); f_12d65bb0();
  /* 12d6229b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6229e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d622a1 jbe 0x12d622d8 */
  if ((C.cf||C.zf)) goto L_12d622d8;
  /* 12d622a3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d622a9 push eax */
  push32((uint32_t)(EAX));
  /* 12d622aa call 0x12d65bb0 */
  push32(0x12d622afu); f_12d65bb0();
  /* 12d622af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d622b2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d622b8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12d622bc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12d622c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d622c4 push 0x12d7935c */
  push32((uint32_t)(0x12d7935cu));
  /* 12d622c9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d622cf push eax */
  push32((uint32_t)(EAX));
  /* 12d622d0 call 0x12d665a0 */
  push32(0x12d622d5u); f_12d665a0();
  /* 12d622d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d622d8:;
  /* 12d622d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d622dc jne 0x12d622ea */
  if (!C.zf) goto L_12d622ea;
  /* 12d622de mov dword ptr [ebp - 0x1114], 0x12d792e8 */
  w32((uint32_t)(EBP + -0x1114), (0x12d792e8u));
  /* 12d622e8 jmp 0x12d622f4 */
  goto L_12d622f4;
L_12d622ea:;
  /* 12d622ea mov dword ptr [ebp - 0x1114], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1114), (0x12d79088u));
L_12d622f4:;
  /* 12d622f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d622f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d622fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d622fc je 0x12d62309 */
  if (C.zf) goto L_12d62309;
  /* 12d622fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d62301 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12d62307 jmp 0x12d62313 */
  goto L_12d62313;
L_12d62309:;
  /* 12d62309 mov dword ptr [ebp - 0x1118], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1118), (0x12d79088u));
L_12d62313:;
  /* 12d62313 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d62316 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d62319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6231b je 0x12d6232f */
  if (C.zf) goto L_12d6232f;
  /* 12d6231d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62321 jne 0x12d6232f */
  if (!C.zf) goto L_12d6232f;
  /* 12d62323 mov dword ptr [ebp - 0x111c], 0x12d792d8 */
  w32((uint32_t)(EBP + -0x111c), (0x12d792d8u));
  /* 12d6232d jmp 0x12d62339 */
  goto L_12d62339;
L_12d6232f:;
  /* 12d6232f mov dword ptr [ebp - 0x111c], 0x12d79088 */
  w32((uint32_t)(EBP + -0x111c), (0x12d79088u));
L_12d62339:;
  /* 12d62339 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6233c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6233f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d62341 je 0x12d6234f */
  if (C.zf) goto L_12d6234f;
  /* 12d62343 mov dword ptr [ebp - 0x1120], 0x12d792d4 */
  w32((uint32_t)(EBP + -0x1120), (0x12d792d4u));
  /* 12d6234d jmp 0x12d62359 */
  goto L_12d62359;
L_12d6234f:;
  /* 12d6234f mov dword ptr [ebp - 0x1120], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1120), (0x12d79088u));
L_12d62359:;
  /* 12d62359 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6235d je 0x12d6236a */
  if (C.zf) goto L_12d6236a;
  /* 12d6235f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d62362 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12d62368 jmp 0x12d62374 */
  goto L_12d62374;
L_12d6236a:;
  /* 12d6236a mov dword ptr [ebp - 0x1124], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1124), (0x12d79088u));
L_12d62374:;
  /* 12d62374 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62378 je 0x12d62386 */
  if (C.zf) goto L_12d62386;
  /* 12d6237a mov dword ptr [ebp - 0x1128], 0x12d792cc */
  w32((uint32_t)(EBP + -0x1128), (0x12d792ccu));
  /* 12d62384 jmp 0x12d62390 */
  goto L_12d62390;
L_12d62386:;
  /* 12d62386 mov dword ptr [ebp - 0x1128], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1128), (0x12d79088u));
L_12d62390:;
  /* 12d62390 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62394 je 0x12d623a1 */
  if (C.zf) goto L_12d623a1;
  /* 12d62396 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d62399 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12d6239f jmp 0x12d623ab */
  goto L_12d623ab;
L_12d623a1:;
  /* 12d623a1 mov dword ptr [ebp - 0x112c], 0x12d79088 */
  w32((uint32_t)(EBP + -0x112c), (0x12d79088u));
L_12d623ab:;
  /* 12d623ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d623af je 0x12d623bd */
  if (C.zf) goto L_12d623bd;
  /* 12d623b1 mov dword ptr [ebp - 0x1130], 0x12d792c4 */
  w32((uint32_t)(EBP + -0x1130), (0x12d792c4u));
  /* 12d623bb jmp 0x12d623c7 */
  goto L_12d623c7;
L_12d623bd:;
  /* 12d623bd mov dword ptr [ebp - 0x1130], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1130), (0x12d79088u));
L_12d623c7:;
  /* 12d623c7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d623ce je 0x12d623de */
  if (C.zf) goto L_12d623de;
  /* 12d623d0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d623d6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12d623dc jmp 0x12d623e8 */
  goto L_12d623e8;
L_12d623de:;
  /* 12d623de mov dword ptr [ebp - 0x1134], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1134), (0x12d79088u));
L_12d623e8:;
  /* 12d623e8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d623ef je 0x12d623fd */
  if (C.zf) goto L_12d623fd;
  /* 12d623f1 mov dword ptr [ebp - 0x1138], 0x12d792b8 */
  w32((uint32_t)(EBP + -0x1138), (0x12d792b8u));
  /* 12d623fb jmp 0x12d62407 */
  goto L_12d62407;
L_12d623fd:;
  /* 12d623fd mov dword ptr [ebp - 0x1138], 0x12d79088 */
  w32((uint32_t)(EBP + -0x1138), (0x12d79088u));
L_12d62407:;
  /* 12d62407 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12d6240d push edx */
  push32((uint32_t)(EDX));
  /* 12d6240e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12d62414 push eax */
  push32((uint32_t)(EAX));
  /* 12d62415 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12d6241b push ecx */
  push32((uint32_t)(ECX));
  /* 12d6241c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12d62422 push edx */
  push32((uint32_t)(EDX));
  /* 12d62423 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12d62429 push eax */
  push32((uint32_t)(EAX));
  /* 12d6242a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12d62430 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62431 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12d62437 push edx */
  push32((uint32_t)(EDX));
  /* 12d62438 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12d6243e push eax */
  push32((uint32_t)(EAX));
  /* 12d6243f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12d62445 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62446 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12d6244c push edx */
  push32((uint32_t)(EDX));
  /* 12d6244d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62450 push eax */
  push32((uint32_t)(EAX));
  /* 12d62451 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62454 mov edx, dword ptr [ecx*4 + 0x12d7ca64] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7ca64)));
  /* 12d6245b push edx */
  push32((uint32_t)(EDX));
  /* 12d6245c push 0x12d79264 */
  push32((uint32_t)(0x12d79264u));
  /* 12d62461 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d62466 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12d6246c push eax */
  push32((uint32_t)(EAX));
  /* 12d6246d call 0x12d65c30 */
  push32(0x12d62472u); f_12d65c30();
  /* 12d62472 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62477 jge 0x12d6248d */
  if ((C.sf==C.of)) goto L_12d6248d;
  /* 12d62479 push 0x12d791c8 */
  push32((uint32_t)(0x12d791c8u));
  /* 12d6247e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12d62484 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62485 call 0x12d65d30 */
  push32(0x12d6248au); f_12d65d30();
  /* 12d6248a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6248d:;
  /* 12d6248d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12d62492 push 0x12d79240 */
  push32((uint32_t)(0x12d79240u));
  /* 12d62497 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12d6249d push edx */
  push32((uint32_t)(EDX));
  /* 12d6249e call 0x12d664e0 */
  push32(0x12d624a3u); f_12d664e0();
  /* 12d624a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d624a6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12d624ac cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d624b3 jne 0x12d624c6 */
  if (!C.zf) goto L_12d624c6;
  /* 12d624b5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d624b7 call 0x12d66220 */
  push32(0x12d624bcu); f_12d66220();
  /* 12d624bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d624bf push 3 */
  push32((uint32_t)(0x3u));
  /* 12d624c1 call 0x12d62540 */
  push32(0x12d624c6u); f_12d62540();
L_12d624c6:;
  /* 12d624c6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d624cd jne 0x12d624d6 */
  if (!C.zf) goto L_12d624d6;
  /* 12d624cf mov eax, 1 */
  EAX = (0x1u);
  /* 12d624d4 jmp 0x12d624d8 */
  goto L_12d624d8;
L_12d624d6:;
  /* 12d624d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d624d8:;
  /* 12d624d8 mov esp, ebp */
  ESP = (EBP);
  /* 12d624da pop ebp */
  EBP = (pop32());
  /* 12d624db ret  */
  ESPCHK(0x12d621d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024e0 @ 0x12d624e0 (56 bytes, 15 insns) */
void f_12d624e0(void) {
  FTRACE(0x12d624e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d624e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d624e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d624e3 cmp dword ptr [0x12d7ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d624ea je 0x12d624f2 */
  if (C.zf) goto L_12d624f2;
  /* 12d624ec call dword ptr [0x12d7ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ffbc))), 0x12d624f2u);
L_12d624f2:;
  /* 12d624f2 push 0x12d7c418 */
  push32((uint32_t)(0x12d7c418u));
  /* 12d624f7 push 0x12d7c208 */
  push32((uint32_t)(0x12d7c208u));
  /* 12d624fc call 0x12d626b0 */
  push32(0x12d62501u); f_12d626b0();
  /* 12d62501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62504 push 0x12d7c104 */
  push32((uint32_t)(0x12d7c104u));
  /* 12d62509 push 0x12d7c000 */
  push32((uint32_t)(0x12d7c000u));
  /* 12d6250e call 0x12d626b0 */
  push32(0x12d62513u); f_12d626b0();
  /* 12d62513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62516 pop ebp */
  EBP = (pop32());
  /* 12d62517 ret  */
  ESPCHK(0x12d624e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002520 @ 0x12d62520 (21 bytes, 10 insns) */
void f_12d62520(void) {
  FTRACE(0x12d62520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62521 mov ebp, esp */
  EBP = (ESP);
  /* 12d62523 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62525 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6252a push eax */
  push32((uint32_t)(EAX));
  /* 12d6252b call 0x12d625a0 */
  push32(0x12d62530u); f_12d625a0();
  /* 12d62530 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62533 pop ebp */
  EBP = (pop32());
  /* 12d62534 ret  */
  ESPCHK(0x12d62520u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12d62540 (21 bytes, 10 insns) */
void f_12d62540(void) {
  FTRACE(0x12d62540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62540 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62541 mov ebp, esp */
  EBP = (ESP);
  /* 12d62543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62545 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62547 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6254a push eax */
  push32((uint32_t)(EAX));
  /* 12d6254b call 0x12d625a0 */
  push32(0x12d62550u); f_12d625a0();
  /* 12d62550 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62553 pop ebp */
  EBP = (pop32());
  /* 12d62554 ret  */
  ESPCHK(0x12d62540u, _esp0);
  ESP += 4; return;
}

/* FUN_10002560 @ 0x12d62560 (19 bytes, 9 insns) */
void f_12d62560(void) {
  FTRACE(0x12d62560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62560 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62561 mov ebp, esp */
  EBP = (ESP);
  /* 12d62563 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62565 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62567 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62569 call 0x12d625a0 */
  push32(0x12d6256eu); f_12d625a0();
  /* 12d6256e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62571 pop ebp */
  EBP = (pop32());
  /* 12d62572 ret  */
  ESPCHK(0x12d62560u, _esp0);
  ESP += 4; return;
}

/* FUN_10002580 @ 0x12d62580 (19 bytes, 9 insns) */
void f_12d62580(void) {
  FTRACE(0x12d62580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62580 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62581 mov ebp, esp */
  EBP = (ESP);
  /* 12d62583 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62585 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62587 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62589 call 0x12d625a0 */
  push32(0x12d6258eu); f_12d625a0();
  /* 12d6258e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62591 pop ebp */
  EBP = (pop32());
  /* 12d62592 ret  */
  ESPCHK(0x12d62580u, _esp0);
  ESP += 4; return;
}

/* FUN_100025a0 @ 0x12d625a0 (227 bytes, 61 insns) */
void f_12d625a0(void) {
  FTRACE(0x12d625a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d625a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d625a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d625a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d625a4 call 0x12d62690 */
  push32(0x12d625a9u); f_12d62690();
  /* 12d625a9 cmp dword ptr [0x12d7e4bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d625b0 jne 0x12d625c3 */
  if (!C.zf) goto L_12d625c3;
  /* 12d625b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d625b5 push eax */
  push32((uint32_t)(EAX));
  /* 12d625b6 call dword ptr [0x12d802b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802b4))), 0x12d625bcu);
  /* 12d625bc push eax */
  push32((uint32_t)(EAX));
  /* 12d625bd call dword ptr [0x12d802b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802b0))), 0x12d625c3u);
L_12d625c3:;
  /* 12d625c3 mov dword ptr [0x12d7e4b8], 1 */
  w32((uint32_t)(0x12d7e4b8), (0x1u));
  /* 12d625cd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12d625d0 mov byte ptr [0x12d7e4b4], cl */
  w8((uint32_t)(0x12d7e4b4), (CL));
  /* 12d625d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d625da jne 0x12d62623 */
  if (!C.zf) goto L_12d62623;
  /* 12d625dc cmp dword ptr [0x12d7ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d625e3 je 0x12d62611 */
  if (C.zf) goto L_12d62611;
  /* 12d625e5 mov edx, dword ptr [0x12d7ffb4] */
  EDX = (r32((uint32_t)(0x12d7ffb4)));
  /* 12d625eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d625ee:;
  /* 12d625ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d625f1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d625f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d625f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d625fa cmp ecx, dword ptr [0x12d7ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62600 jb 0x12d62611 */
  if (C.cf) goto L_12d62611;
  /* 12d62602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62605 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62608 je 0x12d6260f */
  if (C.zf) goto L_12d6260f;
  /* 12d6260a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6260d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12d6260fu);
L_12d6260f:;
  /* 12d6260f jmp 0x12d625ee */
  goto L_12d625ee;
L_12d62611:;
  /* 12d62611 push 0x12d7c724 */
  push32((uint32_t)(0x12d7c724u));
  /* 12d62616 push 0x12d7c51c */
  push32((uint32_t)(0x12d7c51cu));
  /* 12d6261b call 0x12d626b0 */
  push32(0x12d62620u); f_12d626b0();
  /* 12d62620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62623:;
  /* 12d62623 push 0x12d7c92c */
  push32((uint32_t)(0x12d7c92cu));
  /* 12d62628 push 0x12d7c828 */
  push32((uint32_t)(0x12d7c828u));
  /* 12d6262d call 0x12d626b0 */
  push32(0x12d62632u); f_12d626b0();
  /* 12d62632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62635 cmp dword ptr [0x12d7e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6263c jne 0x12d6265e */
  if (!C.zf) goto L_12d6265e;
  /* 12d6263e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d62640 call 0x12d64290 */
  push32(0x12d62645u); f_12d64290();
  /* 12d62645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62648 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6264b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6264d je 0x12d6265e */
  if (C.zf) goto L_12d6265e;
  /* 12d6264f mov dword ptr [0x12d7e4c0], 1 */
  w32((uint32_t)(0x12d7e4c0), (0x1u));
  /* 12d62659 call 0x12d64ba0 */
  push32(0x12d6265eu); f_12d64ba0();
L_12d6265e:;
  /* 12d6265e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62662 je 0x12d6266b */
  if (C.zf) goto L_12d6266b;
  /* 12d62664 call 0x12d626a0 */
  push32(0x12d62669u); f_12d626a0();
  /* 12d62669 jmp 0x12d6267f */
  goto L_12d6267f;
L_12d6266b:;
  /* 12d6266b mov dword ptr [0x12d7e4bc], 1 */
  w32((uint32_t)(0x12d7e4bc), (0x1u));
  /* 12d62675 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62678 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62679 call dword ptr [0x12d802ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802ac))), 0x12d6267fu);
L_12d6267f:;
  /* 12d6267f mov esp, ebp */
  ESP = (EBP);
  /* 12d62681 pop ebp */
  EBP = (pop32());
  /* 12d62682 ret  */
  ESPCHK(0x12d625a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002690 @ 0x12d62690 (15 bytes, 7 insns) */
void f_12d62690(void) {
  FTRACE(0x12d62690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62690 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62691 mov ebp, esp */
  EBP = (ESP);
  /* 12d62693 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12d62695 call 0x12d66780 */
  push32(0x12d6269au); f_12d66780();
  /* 12d6269a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6269d pop ebp */
  EBP = (pop32());
  /* 12d6269e ret  */
  ESPCHK(0x12d62690u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x12d626a0 (15 bytes, 7 insns) */
void f_12d626a0(void) {
  FTRACE(0x12d626a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d626a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d626a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d626a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12d626a5 call 0x12d66820 */
  push32(0x12d626aau); f_12d66820();
  /* 12d626aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d626ad pop ebp */
  EBP = (pop32());
  /* 12d626ae ret  */
  ESPCHK(0x12d626a0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12d626b0 (37 bytes, 16 insns) */
void f_12d626b0(void) {
  FTRACE(0x12d626b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d626b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d626b1 mov ebp, esp */
  EBP = (ESP);
L_12d626b3:;
  /* 12d626b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d626b6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d626b9 jae 0x12d626d3 */
  if (!C.cf) goto L_12d626d3;
  /* 12d626bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d626be cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d626c1 je 0x12d626c8 */
  if (C.zf) goto L_12d626c8;
  /* 12d626c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d626c6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12d626c8u);
L_12d626c8:;
  /* 12d626c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d626cb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d626ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d626d1 jmp 0x12d626b3 */
  goto L_12d626b3;
L_12d626d3:;
  /* 12d626d3 pop ebp */
  EBP = (pop32());
  /* 12d626d4 ret  */
  ESPCHK(0x12d626b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x12d626e0 (130 bytes, 42 insns) */
void f_12d626e0(void) {
  FTRACE(0x12d626e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d626e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d626e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d626e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d626e4 call 0x12d666a0 */
  push32(0x12d626e9u); f_12d666a0();
  /* 12d626e9 call dword ptr [0x12d802c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802c0))), 0x12d626efu);
  /* 12d626ef mov dword ptr [0x12d7ca70], eax */
  w32((uint32_t)(0x12d7ca70), (EAX));
  /* 12d626f4 cmp dword ptr [0x12d7ca70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ca70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d626fb jne 0x12d62701 */
  if (!C.zf) goto L_12d62701;
  /* 12d626fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d626ff jmp 0x12d6275e */
  goto L_12d6275e;
L_12d62701:;
  /* 12d62701 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12d62703 push 0x12d7939c */
  push32((uint32_t)(0x12d7939cu));
  /* 12d62708 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6270a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12d6270c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d6270e call 0x12d63190 */
  push32(0x12d62713u); f_12d63190();
  /* 12d62713 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62716 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d62719 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6271d je 0x12d62734 */
  if (C.zf) goto L_12d62734;
  /* 12d6271f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62722 push eax */
  push32((uint32_t)(EAX));
  /* 12d62723 mov ecx, dword ptr [0x12d7ca70] */
  ECX = (r32((uint32_t)(0x12d7ca70)));
  /* 12d62729 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6272a call dword ptr [0x12d802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802bc))), 0x12d62730u);
  /* 12d62730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62732 jne 0x12d62738 */
  if (!C.zf) goto L_12d62738;
L_12d62734:;
  /* 12d62734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d62736 jmp 0x12d6275e */
  goto L_12d6275e;
L_12d62738:;
  /* 12d62738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6273b push edx */
  push32((uint32_t)(EDX));
  /* 12d6273c call 0x12d627a0 */
  push32(0x12d62741u); f_12d627a0();
  /* 12d62741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62744 call dword ptr [0x12d802b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802b8))), 0x12d6274au);
  /* 12d6274a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6274d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d6274f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62752 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12d62759 mov eax, 1 */
  EAX = (0x1u);
L_12d6275e:;
  /* 12d6275e mov esp, ebp */
  ESP = (EBP);
  /* 12d62760 pop ebp */
  EBP = (pop32());
  /* 12d62761 ret  */
  ESPCHK(0x12d626e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x12d62770 (41 bytes, 11 insns) */
void f_12d62770(void) {
  FTRACE(0x12d62770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62770 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62771 mov ebp, esp */
  EBP = (ESP);
  /* 12d62773 call 0x12d666e0 */
  push32(0x12d62778u); f_12d666e0();
  /* 12d62778 cmp dword ptr [0x12d7ca70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ca70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6277f je 0x12d62797 */
  if (C.zf) goto L_12d62797;
  /* 12d62781 mov eax, dword ptr [0x12d7ca70] */
  EAX = (r32((uint32_t)(0x12d7ca70)));
  /* 12d62786 push eax */
  push32((uint32_t)(EAX));
  /* 12d62787 call dword ptr [0x12d802c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802c4))), 0x12d6278du);
  /* 12d6278d mov dword ptr [0x12d7ca70], 0xffffffff */
  w32((uint32_t)(0x12d7ca70), (0xffffffffu));
L_12d62797:;
  /* 12d62797 pop ebp */
  EBP = (pop32());
  /* 12d62798 ret  */
  ESPCHK(0x12d62770u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x12d627a0 (25 bytes, 8 insns) */
void f_12d627a0(void) {
  FTRACE(0x12d627a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d627a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d627a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d627a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d627a6 mov dword ptr [eax + 0x50], 0x12d7cc20 */
  w32((uint32_t)(EAX + 0x50), (0x12d7cc20u));
  /* 12d627ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d627b0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12d627b7 pop ebp */
  EBP = (pop32());
  /* 12d627b8 ret  */
  ESPCHK(0x12d627a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x12d627c0 (152 bytes, 48 insns) */
void f_12d627c0(void) {
  FTRACE(0x12d627c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d627c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d627c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d627c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d627c6 call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d627ccu);
  /* 12d627cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d627cf mov eax, dword ptr [0x12d7ca70] */
  EAX = (r32((uint32_t)(0x12d7ca70)));
  /* 12d627d4 push eax */
  push32((uint32_t)(EAX));
  /* 12d627d5 call dword ptr [0x12d802cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802cc))), 0x12d627dbu);
  /* 12d627db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d627de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d627e2 jne 0x12d62847 */
  if (!C.zf) goto L_12d62847;
  /* 12d627e4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12d627e9 push 0x12d7939c */
  push32((uint32_t)(0x12d7939cu));
  /* 12d627ee push 2 */
  push32((uint32_t)(0x2u));
  /* 12d627f0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12d627f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d627f4 call 0x12d63190 */
  push32(0x12d627f9u); f_12d63190();
  /* 12d627f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d627fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d627ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62803 je 0x12d6283d */
  if (C.zf) goto L_12d6283d;
  /* 12d62805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62808 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62809 mov edx, dword ptr [0x12d7ca70] */
  EDX = (r32((uint32_t)(0x12d7ca70)));
  /* 12d6280f push edx */
  push32((uint32_t)(EDX));
  /* 12d62810 call dword ptr [0x12d802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802bc))), 0x12d62816u);
  /* 12d62816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62818 je 0x12d6283d */
  if (C.zf) goto L_12d6283d;
  /* 12d6281a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6281d push eax */
  push32((uint32_t)(EAX));
  /* 12d6281e call 0x12d627a0 */
  push32(0x12d62823u); f_12d627a0();
  /* 12d62823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62826 call dword ptr [0x12d802b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802b8))), 0x12d6282cu);
  /* 12d6282c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6282f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d62831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62834 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12d6283b jmp 0x12d62847 */
  goto L_12d62847;
L_12d6283d:;
  /* 12d6283d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d6283f call 0x12d61cf0 */
  push32(0x12d62844u); f_12d61cf0();
  /* 12d62844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62847:;
  /* 12d62847 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6284a push eax */
  push32((uint32_t)(EAX));
  /* 12d6284b call dword ptr [0x12d802c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802c8))), 0x12d62851u);
  /* 12d62851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62854 mov esp, ebp */
  ESP = (EBP);
  /* 12d62856 pop ebp */
  EBP = (pop32());
  /* 12d62857 ret  */
  ESPCHK(0x12d627c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x12d62860 (263 bytes, 86 insns) */
void f_12d62860(void) {
  FTRACE(0x12d62860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62860 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62861 mov ebp, esp */
  EBP = (ESP);
  /* 12d62863 cmp dword ptr [0x12d7ca70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ca70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6286a je 0x12d62965 */
  if (C.zf) goto L_12d62965;
  /* 12d62870 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62874 jne 0x12d62885 */
  if (!C.zf) goto L_12d62885;
  /* 12d62876 mov eax, dword ptr [0x12d7ca70] */
  EAX = (r32((uint32_t)(0x12d7ca70)));
  /* 12d6287b push eax */
  push32((uint32_t)(EAX));
  /* 12d6287c call dword ptr [0x12d802cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802cc))), 0x12d62882u);
  /* 12d62882 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d62885:;
  /* 12d62885 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62889 je 0x12d62956 */
  if (C.zf) goto L_12d62956;
  /* 12d6288f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62892 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62896 je 0x12d628a9 */
  if (C.zf) goto L_12d628a9;
  /* 12d62898 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6289a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6289d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12d628a0 push eax */
  push32((uint32_t)(EAX));
  /* 12d628a1 call 0x12d63810 */
  push32(0x12d628a6u); f_12d63810();
  /* 12d628a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d628a9:;
  /* 12d628a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d628ac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d628b0 je 0x12d628c3 */
  if (C.zf) goto L_12d628c3;
  /* 12d628b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d628b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d628b7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12d628ba push eax */
  push32((uint32_t)(EAX));
  /* 12d628bb call 0x12d63810 */
  push32(0x12d628c0u); f_12d63810();
  /* 12d628c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d628c3:;
  /* 12d628c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d628c6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d628ca je 0x12d628dd */
  if (C.zf) goto L_12d628dd;
  /* 12d628cc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d628ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d628d1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12d628d4 push eax */
  push32((uint32_t)(EAX));
  /* 12d628d5 call 0x12d63810 */
  push32(0x12d628dau); f_12d63810();
  /* 12d628da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d628dd:;
  /* 12d628dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d628e0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d628e4 je 0x12d628f7 */
  if (C.zf) goto L_12d628f7;
  /* 12d628e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d628e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d628eb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12d628ee push eax */
  push32((uint32_t)(EAX));
  /* 12d628ef call 0x12d63810 */
  push32(0x12d628f4u); f_12d63810();
  /* 12d628f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d628f7:;
  /* 12d628f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d628fa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d628fe je 0x12d62911 */
  if (C.zf) goto L_12d62911;
  /* 12d62900 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d62902 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62905 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12d62908 push eax */
  push32((uint32_t)(EAX));
  /* 12d62909 call 0x12d63810 */
  push32(0x12d6290eu); f_12d63810();
  /* 12d6290e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62911:;
  /* 12d62911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62914 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62918 je 0x12d6292b */
  if (C.zf) goto L_12d6292b;
  /* 12d6291a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6291c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6291f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12d62922 push eax */
  push32((uint32_t)(EAX));
  /* 12d62923 call 0x12d63810 */
  push32(0x12d62928u); f_12d63810();
  /* 12d62928 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6292b:;
  /* 12d6292b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6292e cmp dword ptr [ecx + 0x50], 0x12d7cc20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12d7cc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62935 je 0x12d62948 */
  if (C.zf) goto L_12d62948;
  /* 12d62937 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d62939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6293c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12d6293f push eax */
  push32((uint32_t)(EAX));
  /* 12d62940 call 0x12d63810 */
  push32(0x12d62945u); f_12d63810();
  /* 12d62945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62948:;
  /* 12d62948 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6294a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6294d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6294e call 0x12d63810 */
  push32(0x12d62953u); f_12d63810();
  /* 12d62953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d62956:;
  /* 12d62956 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62958 mov edx, dword ptr [0x12d7ca70] */
  EDX = (r32((uint32_t)(0x12d7ca70)));
  /* 12d6295e push edx */
  push32((uint32_t)(EDX));
  /* 12d6295f call dword ptr [0x12d802bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802bc))), 0x12d62965u);
L_12d62965:;
  /* 12d62965 pop ebp */
  EBP = (pop32());
  /* 12d62966 ret  */
  ESPCHK(0x12d62860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002970 @ 0x12d62970 (11 bytes, 5 insns) */
void f_12d62970(void) {
  FTRACE(0x12d62970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62970 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62971 mov ebp, esp */
  EBP = (ESP);
  /* 12d62973 call dword ptr [0x12d802b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802b8))), 0x12d62979u);
  /* 12d62979 pop ebp */
  EBP = (pop32());
  /* 12d6297a ret  */
  ESPCHK(0x12d62970u, _esp0);
  ESP += 4; return;
}

/* FUN_10002980 @ 0x12d62980 (11 bytes, 5 insns) */
void f_12d62980(void) {
  FTRACE(0x12d62980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62980 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62981 mov ebp, esp */
  EBP = (ESP);
  /* 12d62983 call dword ptr [0x12d802d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d4))), 0x12d62989u);
  /* 12d62989 pop ebp */
  EBP = (pop32());
  /* 12d6298a ret  */
  ESPCHK(0x12d62980u, _esp0);
  ESP += 4; return;
}

/* FUN_10002990 @ 0x12d62990 (804 bytes, 236 insns) */
void f_12d62990(void) {
  FTRACE(0x12d62990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62990 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62991 mov ebp, esp */
  EBP = (ESP);
  /* 12d62993 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d62996 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12d6299b push 0x12d793a8 */
  push32((uint32_t)(0x12d793a8u));
  /* 12d629a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d629a2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d629a7 call 0x12d62d80 */
  push32(0x12d629acu); f_12d62d80();
  /* 12d629ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d629af mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12d629b2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d629b6 jne 0x12d629c2 */
  if (!C.zf) goto L_12d629c2;
  /* 12d629b8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12d629ba call 0x12d61cf0 */
  push32(0x12d629bfu); f_12d61cf0();
  /* 12d629bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d629c2:;
  /* 12d629c2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d629c5 mov dword ptr [0x12d7fe60], eax */
  w32((uint32_t)(0x12d7fe60), (EAX));
  /* 12d629ca mov dword ptr [0x12d7ff9c], 0x20 */
  w32((uint32_t)(0x12d7ff9c), (0x20u));
  /* 12d629d4 jmp 0x12d629df */
  goto L_12d629df;
L_12d629d6:;
  /* 12d629d6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d629d9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d629dc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12d629df:;
  /* 12d629df mov edx, dword ptr [0x12d7fe60] */
  EDX = (r32((uint32_t)(0x12d7fe60)));
  /* 12d629e5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d629eb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d629ee jae 0x12d62a13 */
  if (!C.cf) goto L_12d62a13;
  /* 12d629f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d629f3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d629f7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d629fa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d62a00 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62a03 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d62a07 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62a0a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d62a11 jmp 0x12d629d6 */
  goto L_12d629d6;
L_12d62a13:;
  /* 12d62a13 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12d62a16 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62a17 call dword ptr [0x12d802e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e0))), 0x12d62a1du);
  /* 12d62a1d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12d62a20 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d62a26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d62a28 je 0x12d62bb5 */
  if (C.zf) goto L_12d62bb5;
  /* 12d62a2e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62a32 je 0x12d62bb5 */
  if (C.zf) goto L_12d62bb5;
  /* 12d62a38 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d62a3b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d62a3d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12d62a40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d62a43 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62a46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d62a49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62a4c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62a4f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12d62a52 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62a59 jge 0x12d62a63 */
  if ((C.sf==C.of)) goto L_12d62a63;
  /* 12d62a5b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12d62a5e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12d62a61 jmp 0x12d62a6a */
  goto L_12d62a6a;
L_12d62a63:;
  /* 12d62a63 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12d62a6a:;
  /* 12d62a6a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12d62a6d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12d62a70 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12d62a77 jmp 0x12d62a82 */
  goto L_12d62a82;
L_12d62a79:;
  /* 12d62a79 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d62a7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62a7f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12d62a82:;
  /* 12d62a82 mov ecx, dword ptr [0x12d7ff9c] */
  ECX = (r32((uint32_t)(0x12d7ff9c)));
  /* 12d62a88 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62a8b jge 0x12d62b22 */
  if ((C.sf==C.of)) goto L_12d62b22;
  /* 12d62a91 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12d62a96 push 0x12d793a8 */
  push32((uint32_t)(0x12d793a8u));
  /* 12d62a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d62a9d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d62aa2 call 0x12d62d80 */
  push32(0x12d62aa7u); f_12d62d80();
  /* 12d62aa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62aaa mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12d62aad cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62ab1 jne 0x12d62abe */
  if (!C.zf) goto L_12d62abe;
  /* 12d62ab3 mov edx, dword ptr [0x12d7ff9c] */
  EDX = (r32((uint32_t)(0x12d7ff9c)));
  /* 12d62ab9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12d62abc jmp 0x12d62b22 */
  goto L_12d62b22;
L_12d62abe:;
  /* 12d62abe mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d62ac1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62ac4 mov dword ptr [eax*4 + 0x12d7fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12d7fe60), (ECX));
  /* 12d62acb mov edx, dword ptr [0x12d7ff9c] */
  EDX = (r32((uint32_t)(0x12d7ff9c)));
  /* 12d62ad1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62ad4 mov dword ptr [0x12d7ff9c], edx */
  w32((uint32_t)(0x12d7ff9c), (EDX));
  /* 12d62ada jmp 0x12d62ae5 */
  goto L_12d62ae5;
L_12d62adc:;
  /* 12d62adc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62adf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62ae2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12d62ae5:;
  /* 12d62ae5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d62ae8 mov edx, dword ptr [ecx*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7fe60)));
  /* 12d62aef add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62af5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62af8 jae 0x12d62b1d */
  if (!C.cf) goto L_12d62b1d;
  /* 12d62afa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62afd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d62b01 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62b04 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d62b0a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62b0d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d62b11 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62b14 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d62b1b jmp 0x12d62adc */
  goto L_12d62adc;
L_12d62b1d:;
  /* 12d62b1d jmp 0x12d62a79 */
  goto L_12d62a79;
L_12d62b22:;
  /* 12d62b22 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12d62b29 jmp 0x12d62b46 */
  goto L_12d62b46;
L_12d62b2b:;
  /* 12d62b2b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d62b2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62b31 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12d62b34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62b37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62b3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d62b3d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d62b40 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62b43 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12d62b46:;
  /* 12d62b46 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d62b49 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62b4c jge 0x12d62bb5 */
  if ((C.sf==C.of)) goto L_12d62bb5;
  /* 12d62b4e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d62b51 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62b54 je 0x12d62bb0 */
  if (C.zf) goto L_12d62bb0;
  /* 12d62b56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62b59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d62b5c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d62b5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d62b61 je 0x12d62bb0 */
  if (C.zf) goto L_12d62bb0;
  /* 12d62b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62b66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d62b69 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12d62b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62b6e jne 0x12d62b80 */
  if (!C.zf) goto L_12d62b80;
  /* 12d62b70 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d62b73 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d62b75 push edx */
  push32((uint32_t)(EDX));
  /* 12d62b76 call dword ptr [0x12d802dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802dc))), 0x12d62b7cu);
  /* 12d62b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62b7e je 0x12d62bb0 */
  if (C.zf) goto L_12d62bb0;
L_12d62b80:;
  /* 12d62b80 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d62b83 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d62b86 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d62b89 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d62b8c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d62b8f mov edx, dword ptr [eax*4 + 0x12d7fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d62b96 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62b98 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12d62b9b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62b9e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d62ba1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d62ba3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d62ba5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62ba8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62bab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d62bad mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12d62bb0:;
  /* 12d62bb0 jmp 0x12d62b2b */
  goto L_12d62b2b;
L_12d62bb5:;
  /* 12d62bb5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12d62bbc jmp 0x12d62bc7 */
  goto L_12d62bc7;
L_12d62bbe:;
  /* 12d62bbe mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d62bc1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62bc4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12d62bc7:;
  /* 12d62bc7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62bcb jge 0x12d62ca4 */
  if ((C.sf==C.of)) goto L_12d62ca4;
  /* 12d62bd1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d62bd4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d62bd7 mov edx, dword ptr [0x12d7fe60] */
  EDX = (r32((uint32_t)(0x12d7fe60)));
  /* 12d62bdd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62bdf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12d62be2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62be5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62be8 jne 0x12d62c90 */
  if (!C.zf) goto L_12d62c90;
  /* 12d62bee mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62bf1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12d62bf5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62bf9 jne 0x12d62c04 */
  if (!C.zf) goto L_12d62c04;
  /* 12d62bfb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12d62c02 jmp 0x12d62c14 */
  goto L_12d62c14;
L_12d62c04:;
  /* 12d62c04 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d62c07 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d62c0a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d62c0c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d62c0e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62c11 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12d62c14:;
  /* 12d62c14 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12d62c17 push eax */
  push32((uint32_t)(EAX));
  /* 12d62c18 call dword ptr [0x12d8028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8028c))), 0x12d62c1eu);
  /* 12d62c1e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12d62c21 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62c25 je 0x12d62c7f */
  if (C.zf) goto L_12d62c7f;
  /* 12d62c27 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d62c2a push ecx */
  push32((uint32_t)(ECX));
  /* 12d62c2b call dword ptr [0x12d802dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802dc))), 0x12d62c31u);
  /* 12d62c31 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12d62c34 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62c38 je 0x12d62c7f */
  if (C.zf) goto L_12d62c7f;
  /* 12d62c3a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c3d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d62c40 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d62c42 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12d62c45 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d62c4b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62c4e jne 0x12d62c60 */
  if (!C.zf) goto L_12d62c60;
  /* 12d62c50 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c53 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d62c56 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12d62c58 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c5b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12d62c5e jmp 0x12d62c7d */
  goto L_12d62c7d;
L_12d62c60:;
  /* 12d62c60 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12d62c63 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d62c69 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62c6c jne 0x12d62c7d */
  if (!C.zf) goto L_12d62c7d;
  /* 12d62c6e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c71 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d62c74 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12d62c77 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c7a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d62c7d:;
  /* 12d62c7d jmp 0x12d62c8e */
  goto L_12d62c8e;
L_12d62c7f:;
  /* 12d62c7f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c82 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d62c85 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12d62c88 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c8b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d62c8e:;
  /* 12d62c8e jmp 0x12d62c9f */
  goto L_12d62c9f;
L_12d62c90:;
  /* 12d62c90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c93 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d62c96 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12d62c99 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d62c9c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d62c9f:;
  /* 12d62c9f jmp 0x12d62bbe */
  goto L_12d62bbe;
L_12d62ca4:;
  /* 12d62ca4 mov eax, dword ptr [0x12d7ff9c] */
  EAX = (r32((uint32_t)(0x12d7ff9c)));
  /* 12d62ca9 push eax */
  push32((uint32_t)(EAX));
  /* 12d62caa call dword ptr [0x12d802d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d8))), 0x12d62cb0u);
  /* 12d62cb0 mov esp, ebp */
  ESP = (EBP);
  /* 12d62cb2 pop ebp */
  EBP = (pop32());
  /* 12d62cb3 ret  */
  ESPCHK(0x12d62990u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12d62cc0 (155 bytes, 45 insns) */
void f_12d62cc0(void) {
  FTRACE(0x12d62cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d62cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d62cc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d62ccd jmp 0x12d62cd8 */
  goto L_12d62cd8;
L_12d62ccf:;
  /* 12d62ccf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62cd2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62cd5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d62cd8:;
  /* 12d62cd8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62cdc jge 0x12d62d57 */
  if ((C.sf==C.of)) goto L_12d62d57;
  /* 12d62cde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62ce1 cmp dword ptr [ecx*4 + 0x12d7fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d7fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62ce9 je 0x12d62d52 */
  if (C.zf) goto L_12d62d52;
  /* 12d62ceb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62cee mov eax, dword ptr [edx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d62cf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d62cf8 jmp 0x12d62d03 */
  goto L_12d62d03;
L_12d62cfa:;
  /* 12d62cfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62cfd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62d00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d62d03:;
  /* 12d62d03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62d06 mov eax, dword ptr [edx*4 + 0x12d7fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7fe60)));
  /* 12d62d0d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62d12 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62d15 jae 0x12d62d2f */
  if (!C.cf) goto L_12d62d2f;
  /* 12d62d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62d1a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62d1e je 0x12d62d2d */
  if (C.zf) goto L_12d62d2d;
  /* 12d62d20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62d23 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62d26 push edx */
  push32((uint32_t)(EDX));
  /* 12d62d27 call dword ptr [0x12d802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e4))), 0x12d62d2du);
L_12d62d2d:;
  /* 12d62d2d jmp 0x12d62cfa */
  goto L_12d62cfa;
L_12d62d2f:;
  /* 12d62d2f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d62d31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62d34 mov ecx, dword ptr [eax*4 + 0x12d7fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d7fe60)));
  /* 12d62d3b push ecx */
  push32((uint32_t)(ECX));
  /* 12d62d3c call 0x12d63810 */
  push32(0x12d62d41u); f_12d63810();
  /* 12d62d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62d44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62d47 mov dword ptr [edx*4 + 0x12d7fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x12d7fe60), (0x0u));
L_12d62d52:;
  /* 12d62d52 jmp 0x12d62ccf */
  goto L_12d62ccf;
L_12d62d57:;
  /* 12d62d57 mov esp, ebp */
  ESP = (EBP);
  /* 12d62d59 pop ebp */
  EBP = (pop32());
  /* 12d62d5a ret  */
  ESPCHK(0x12d62cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x12d62d60 (29 bytes, 13 insns) */
void f_12d62d60(void) {
  FTRACE(0x12d62d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62d61 mov ebp, esp */
  EBP = (ESP);
  /* 12d62d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62d69 mov eax, dword ptr [0x12d7e668] */
  EAX = (r32((uint32_t)(0x12d7e668)));
  /* 12d62d6e push eax */
  push32((uint32_t)(EAX));
  /* 12d62d6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62d72 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62d73 call 0x12d62dd0 */
  push32(0x12d62d78u); f_12d62dd0();
  /* 12d62d78 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62d7b pop ebp */
  EBP = (pop32());
  /* 12d62d7c ret  */
  ESPCHK(0x12d62d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d80 @ 0x12d62d80 (35 bytes, 16 insns) */
void f_12d62d80(void) {
  FTRACE(0x12d62d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62d81 mov ebp, esp */
  EBP = (ESP);
  /* 12d62d83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d62d86 push eax */
  push32((uint32_t)(EAX));
  /* 12d62d87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d62d8a push ecx */
  push32((uint32_t)(ECX));
  /* 12d62d8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d62d8e push edx */
  push32((uint32_t)(EDX));
  /* 12d62d8f mov eax, dword ptr [0x12d7e668] */
  EAX = (r32((uint32_t)(0x12d7e668)));
  /* 12d62d94 push eax */
  push32((uint32_t)(EAX));
  /* 12d62d95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62d98 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62d99 call 0x12d62dd0 */
  push32(0x12d62d9eu); f_12d62dd0();
  /* 12d62d9e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62da1 pop ebp */
  EBP = (pop32());
  /* 12d62da2 ret  */
  ESPCHK(0x12d62d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db0 @ 0x12d62db0 (27 bytes, 13 insns) */
void f_12d62db0(void) {
  FTRACE(0x12d62db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62db1 mov ebp, esp */
  EBP = (ESP);
  /* 12d62db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62db9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d62dbc push eax */
  push32((uint32_t)(EAX));
  /* 12d62dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62dc1 call 0x12d62dd0 */
  push32(0x12d62dc6u); f_12d62dd0();
  /* 12d62dc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62dc9 pop ebp */
  EBP = (pop32());
  /* 12d62dca ret  */
  ESPCHK(0x12d62db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd0 @ 0x12d62dd0 (94 bytes, 38 insns) */
void f_12d62dd0(void) {
  FTRACE(0x12d62dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d62dd3 push ecx */
  push32((uint32_t)(ECX));
L_12d62dd4:;
  /* 12d62dd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d62dd6 call 0x12d66780 */
  push32(0x12d62ddbu); f_12d66780();
  /* 12d62ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62dde mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d62de1 push eax */
  push32((uint32_t)(EAX));
  /* 12d62de2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d62de5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62de6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d62de9 push edx */
  push32((uint32_t)(EDX));
  /* 12d62dea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62ded push eax */
  push32((uint32_t)(EAX));
  /* 12d62dee call 0x12d62e50 */
  push32(0x12d62df3u); f_12d62e50();
  /* 12d62df3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62df6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d62df9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d62dfb call 0x12d66820 */
  push32(0x12d62e00u); f_12d66820();
  /* 12d62e00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62e03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62e07 jne 0x12d62e0f */
  if (!C.zf) goto L_12d62e0f;
  /* 12d62e09 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62e0d jne 0x12d62e14 */
  if (!C.zf) goto L_12d62e14;
L_12d62e0f:;
  /* 12d62e0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d62e12 jmp 0x12d62e2a */
  goto L_12d62e2a;
L_12d62e14:;
  /* 12d62e14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62e17 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62e18 call 0x12d66ac0 */
  push32(0x12d62e1du); f_12d66ac0();
  /* 12d62e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62e20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62e22 jne 0x12d62e28 */
  if (!C.zf) goto L_12d62e28;
  /* 12d62e24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d62e26 jmp 0x12d62e2a */
  goto L_12d62e2a;
L_12d62e28:;
  /* 12d62e28 jmp 0x12d62dd4 */
  goto L_12d62dd4;
L_12d62e2a:;
  /* 12d62e2a mov esp, ebp */
  ESP = (EBP);
  /* 12d62e2c pop ebp */
  EBP = (pop32());
  /* 12d62e2d ret  */
  ESPCHK(0x12d62dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e30 @ 0x12d62e30 (23 bytes, 11 insns) */
void f_12d62e30(void) {
  FTRACE(0x12d62e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62e31 mov ebp, esp */
  EBP = (ESP);
  /* 12d62e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62e37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62e39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62e3c push eax */
  push32((uint32_t)(EAX));
  /* 12d62e3d call 0x12d62e50 */
  push32(0x12d62e42u); f_12d62e50();
  /* 12d62e42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62e45 pop ebp */
  EBP = (pop32());
  /* 12d62e46 ret  */
  ESPCHK(0x12d62e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e50 @ 0x12d62e50 (787 bytes, 254 insns) */
void f_12d62e50(void) {
  FTRACE(0x12d62e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d62e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d62e51 mov ebp, esp */
  EBP = (ESP);
  /* 12d62e53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d62e56 push ebx */
  push32((uint32_t)(EBX));
  /* 12d62e57 push esi */
  push32((uint32_t)(ESI));
  /* 12d62e58 push edi */
  push32((uint32_t)(EDI));
  /* 12d62e59 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d62e60 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d62e65 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d62e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62e6a je 0x12d62e9c */
  if (C.zf) goto L_12d62e9c;
L_12d62e6c:;
  /* 12d62e6c call 0x12d63f20 */
  push32(0x12d62e71u); f_12d63f20();
  /* 12d62e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62e73 jne 0x12d62e96 */
  if (!C.zf) goto L_12d62e96;
  /* 12d62e75 push 0x12d7949c */
  push32((uint32_t)(0x12d7949cu));
  /* 12d62e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62e7c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12d62e81 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d62e86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d62e88 call 0x12d61e40 */
  push32(0x12d62e8du); f_12d61e40();
  /* 12d62e8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62e90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62e93 jne 0x12d62e96 */
  if (!C.zf) goto L_12d62e96;
  /* 12d62e95 int3  */
  x86_unimpl("int3 @ 0x12d62e95");
L_12d62e96:;
  /* 12d62e96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d62e98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d62e9a jne 0x12d62e6c */
  if (!C.zf) goto L_12d62e6c;
L_12d62e9c:;
  /* 12d62e9c mov edx, dword ptr [0x12d7caa0] */
  EDX = (r32((uint32_t)(0x12d7caa0)));
  /* 12d62ea2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d62ea5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62ea8 cmp eax, dword ptr [0x12d7caa4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7caa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62eae jne 0x12d62eb1 */
  if (!C.zf) goto L_12d62eb1;
  /* 12d62eb0 int3  */
  x86_unimpl("int3 @ 0x12d62eb0");
L_12d62eb1:;
  /* 12d62eb1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d62eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62eb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d62eb8 push edx */
  push32((uint32_t)(EDX));
  /* 12d62eb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d62ebc push eax */
  push32((uint32_t)(EAX));
  /* 12d62ebd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d62ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62ec4 push edx */
  push32((uint32_t)(EDX));
  /* 12d62ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62ec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62ec9 call dword ptr [0x12d7ccb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ccb0))), 0x12d62ecfu);
  /* 12d62ecf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62ed4 jne 0x12d62f34 */
  if (!C.zf) goto L_12d62f34;
  /* 12d62ed6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62eda je 0x12d62f07 */
  if (C.zf) goto L_12d62f07;
L_12d62edc:;
  /* 12d62edc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d62edf push eax */
  push32((uint32_t)(EAX));
  /* 12d62ee0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d62ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d62ee4 push 0x12d79458 */
  push32((uint32_t)(0x12d79458u));
  /* 12d62ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62eed push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62eef push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62ef1 call 0x12d61e40 */
  push32(0x12d62ef6u); f_12d61e40();
  /* 12d62ef6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62ef9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62efc jne 0x12d62eff */
  if (!C.zf) goto L_12d62eff;
  /* 12d62efe int3  */
  x86_unimpl("int3 @ 0x12d62efe");
L_12d62eff:;
  /* 12d62eff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d62f01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d62f03 jne 0x12d62edc */
  if (!C.zf) goto L_12d62edc;
  /* 12d62f05 jmp 0x12d62f2d */
  goto L_12d62f2d;
L_12d62f07:;
  /* 12d62f07 push 0x12d79434 */
  push32((uint32_t)(0x12d79434u));
  /* 12d62f0c push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d62f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62f19 call 0x12d61e40 */
  push32(0x12d62f1eu); f_12d61e40();
  /* 12d62f1e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62f21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62f24 jne 0x12d62f27 */
  if (!C.zf) goto L_12d62f27;
  /* 12d62f26 int3  */
  x86_unimpl("int3 @ 0x12d62f26");
L_12d62f27:;
  /* 12d62f27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d62f29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d62f2b jne 0x12d62f07 */
  if (!C.zf) goto L_12d62f07;
L_12d62f2d:;
  /* 12d62f2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d62f2f jmp 0x12d6315c */
  goto L_12d6315c;
L_12d62f34:;
  /* 12d62f34 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d62f37 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d62f3d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62f40 je 0x12d62f56 */
  if (C.zf) goto L_12d62f56;
  /* 12d62f42 mov edx, dword ptr [0x12d7ca9c] */
  EDX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d62f48 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d62f4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d62f4d jne 0x12d62f56 */
  if (!C.zf) goto L_12d62f56;
  /* 12d62f4f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12d62f56:;
  /* 12d62f56 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62f5a ja 0x12d62f67 */
  if ((!C.cf&&!C.zf)) goto L_12d62f67;
  /* 12d62f5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62f5f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62f62 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62f65 jbe 0x12d62f93 */
  if ((C.cf||C.zf)) goto L_12d62f93;
L_12d62f67:;
  /* 12d62f67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62f6a push ecx */
  push32((uint32_t)(ECX));
  /* 12d62f6b push 0x12d7940c */
  push32((uint32_t)(0x12d7940cu));
  /* 12d62f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62f76 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62f78 call 0x12d61e40 */
  push32(0x12d62f7du); f_12d61e40();
  /* 12d62f7d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62f80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62f83 jne 0x12d62f86 */
  if (!C.zf) goto L_12d62f86;
  /* 12d62f85 int3  */
  x86_unimpl("int3 @ 0x12d62f85");
L_12d62f86:;
  /* 12d62f86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d62f88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d62f8a jne 0x12d62f67 */
  if (!C.zf) goto L_12d62f67;
  /* 12d62f8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d62f8e jmp 0x12d6315c */
  goto L_12d6315c;
L_12d62f93:;
  /* 12d62f93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d62f96 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d62f9b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62f9e je 0x12d62fe0 */
  if (C.zf) goto L_12d62fe0;
  /* 12d62fa0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62fa4 je 0x12d62fe0 */
  if (C.zf) goto L_12d62fe0;
  /* 12d62fa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d62fa9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d62faf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62fb2 je 0x12d62fe0 */
  if (C.zf) goto L_12d62fe0;
  /* 12d62fb4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62fb8 je 0x12d62fe0 */
  if (C.zf) goto L_12d62fe0;
L_12d62fba:;
  /* 12d62fba push 0x12d793d8 */
  push32((uint32_t)(0x12d793d8u));
  /* 12d62fbf push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d62fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d62fca push 1 */
  push32((uint32_t)(0x1u));
  /* 12d62fcc call 0x12d61e40 */
  push32(0x12d62fd1u); f_12d61e40();
  /* 12d62fd1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62fd7 jne 0x12d62fda */
  if (!C.zf) goto L_12d62fda;
  /* 12d62fd9 int3  */
  x86_unimpl("int3 @ 0x12d62fd9");
L_12d62fda:;
  /* 12d62fda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d62fdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d62fde jne 0x12d62fba */
  if (!C.zf) goto L_12d62fba;
L_12d62fe0:;
  /* 12d62fe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d62fe3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62fe6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d62fe9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d62fec push ecx */
  push32((uint32_t)(ECX));
  /* 12d62fed call 0x12d66bd0 */
  push32(0x12d62ff2u); f_12d66bd0();
  /* 12d62ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d62ff5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d62ff8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d62ffc jne 0x12d63005 */
  if (!C.zf) goto L_12d63005;
  /* 12d62ffe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63000 jmp 0x12d6315c */
  goto L_12d6315c;
L_12d63005:;
  /* 12d63005 mov edx, dword ptr [0x12d7caa0] */
  EDX = (r32((uint32_t)(0x12d7caa0)));
  /* 12d6300b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6300e mov dword ptr [0x12d7caa0], edx */
  w32((uint32_t)(0x12d7caa0), (EDX));
  /* 12d63014 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63018 je 0x12d63063 */
  if (C.zf) goto L_12d63063;
  /* 12d6301a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6301d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d63023 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63026 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d6302d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63030 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d63037 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6303a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12d63041 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63044 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63047 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12d6304a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6304d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12d63054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63057 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12d6305e jmp 0x12d63103 */
  goto L_12d63103;
L_12d63063:;
  /* 12d63063 mov edx, dword ptr [0x12d7e4c8] */
  EDX = (r32((uint32_t)(0x12d7e4c8)));
  /* 12d63069 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6306c mov dword ptr [0x12d7e4c8], edx */
  w32((uint32_t)(0x12d7e4c8), (EDX));
  /* 12d63072 mov eax, dword ptr [0x12d7e4d0] */
  EAX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d63077 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6307a mov dword ptr [0x12d7e4d0], eax */
  w32((uint32_t)(0x12d7e4d0), (EAX));
  /* 12d6307f mov ecx, dword ptr [0x12d7e4d0] */
  ECX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d63085 cmp ecx, dword ptr [0x12d7e4d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7e4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6308b jbe 0x12d63099 */
  if ((C.cf||C.zf)) goto L_12d63099;
  /* 12d6308d mov edx, dword ptr [0x12d7e4d0] */
  EDX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d63093 mov dword ptr [0x12d7e4d4], edx */
  w32((uint32_t)(0x12d7e4d4), (EDX));
L_12d63099:;
  /* 12d63099 cmp dword ptr [0x12d7e4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d630a0 je 0x12d630af */
  if (C.zf) goto L_12d630af;
  /* 12d630a2 mov eax, dword ptr [0x12d7e4cc] */
  EAX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d630a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d630ad jmp 0x12d630b8 */
  goto L_12d630b8;
L_12d630af:;
  /* 12d630af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630b2 mov dword ptr [0x12d7e4c4], edx */
  w32((uint32_t)(0x12d7e4c4), (EDX));
L_12d630b8:;
  /* 12d630b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630bb mov ecx, dword ptr [0x12d7e4cc] */
  ECX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d630c1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d630c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630c6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12d630cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d630d3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d630d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630d9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d630dc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12d630df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d630e5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12d630e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d630ee mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12d630f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d630f7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12d630fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d630fd mov dword ptr [0x12d7e4cc], ecx */
  w32((uint32_t)(0x12d7e4cc), (ECX));
L_12d63103:;
  /* 12d63103 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d63105 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63107 mov dl, byte ptr [0x12d7caa8] */
  DL = (r8((uint32_t)(0x12d7caa8)));
  /* 12d6310d push edx */
  push32((uint32_t)(EDX));
  /* 12d6310e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63111 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63114 push eax */
  push32((uint32_t)(EAX));
  /* 12d63115 call 0x12d66af0 */
  push32(0x12d6311au); f_12d66af0();
  /* 12d6311a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6311d push 4 */
  push32((uint32_t)(0x4u));
  /* 12d6311f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63121 mov cl, byte ptr [0x12d7caa8] */
  CL = (r8((uint32_t)(0x12d7caa8)));
  /* 12d63127 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63128 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6312b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6312e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12d63132 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63133 call 0x12d66af0 */
  push32(0x12d63138u); f_12d66af0();
  /* 12d63138 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6313b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6313e push edx */
  push32((uint32_t)(EDX));
  /* 12d6313f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63141 mov al, byte ptr [0x12d7caaa] */
  AL = (r8((uint32_t)(0x12d7caaa)));
  /* 12d63146 push eax */
  push32((uint32_t)(EAX));
  /* 12d63147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6314a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6314d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6314e call 0x12d66af0 */
  push32(0x12d63153u); f_12d66af0();
  /* 12d63153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63159 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d6315c:;
  /* 12d6315c pop edi */
  EDI = (pop32());
  /* 12d6315d pop esi */
  ESI = (pop32());
  /* 12d6315e pop ebx */
  EBX = (pop32());
  /* 12d6315f mov esp, ebp */
  ESP = (EBP);
  /* 12d63161 pop ebp */
  EBP = (pop32());
  /* 12d63162 ret  */
  ESPCHK(0x12d62e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003170 @ 0x12d63170 (27 bytes, 13 insns) */
void f_12d63170(void) {
  FTRACE(0x12d63170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63170 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63171 mov ebp, esp */
  EBP = (ESP);
  /* 12d63173 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63177 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d63179 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6317c push eax */
  push32((uint32_t)(EAX));
  /* 12d6317d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63180 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63181 call 0x12d63190 */
  push32(0x12d63186u); f_12d63190();
  /* 12d63186 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63189 pop ebp */
  EBP = (pop32());
  /* 12d6318a ret  */
  ESPCHK(0x12d63170u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12d63190 (96 bytes, 37 insns) */
void f_12d63190(void) {
  FTRACE(0x12d63190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63190 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63191 mov ebp, esp */
  EBP = (ESP);
  /* 12d63193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63196 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63199 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6319d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d631a0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d631a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d631a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d631a7 push edx */
  push32((uint32_t)(EDX));
  /* 12d631a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d631ab push eax */
  push32((uint32_t)(EAX));
  /* 12d631ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d631af push ecx */
  push32((uint32_t)(ECX));
  /* 12d631b0 call 0x12d62d80 */
  push32(0x12d631b5u); f_12d62d80();
  /* 12d631b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d631b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d631bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d631bf je 0x12d631e9 */
  if (C.zf) goto L_12d631e9;
  /* 12d631c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d631c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d631c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d631ca add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d631cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d631d0:;
  /* 12d631d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d631d3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d631d6 jae 0x12d631e9 */
  if (!C.cf) goto L_12d631e9;
  /* 12d631d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d631db mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d631de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d631e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d631e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d631e7 jmp 0x12d631d0 */
  goto L_12d631d0;
L_12d631e9:;
  /* 12d631e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d631ec mov esp, ebp */
  ESP = (EBP);
  /* 12d631ee pop ebp */
  EBP = (pop32());
  /* 12d631ef ret  */
  ESPCHK(0x12d63190u, _esp0);
  ESP += 4; return;
}

/* FUN_100031f0 @ 0x12d631f0 (27 bytes, 13 insns) */
void f_12d631f0(void) {
  FTRACE(0x12d631f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d631f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d631f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d631f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d631f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d631f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d631f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d631fc push eax */
  push32((uint32_t)(EAX));
  /* 12d631fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63200 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63201 call 0x12d63210 */
  push32(0x12d63206u); f_12d63210();
  /* 12d63206 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63209 pop ebp */
  EBP = (pop32());
  /* 12d6320a ret  */
  ESPCHK(0x12d631f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x12d63210 (64 bytes, 27 insns) */
void f_12d63210(void) {
  FTRACE(0x12d63210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63210 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63211 mov ebp, esp */
  EBP = (ESP);
  /* 12d63213 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63214 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63216 call 0x12d66780 */
  push32(0x12d6321bu); f_12d66780();
  /* 12d6321b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6321e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d63220 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d63223 push eax */
  push32((uint32_t)(EAX));
  /* 12d63224 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d63227 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63228 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6322b push edx */
  push32((uint32_t)(EDX));
  /* 12d6322c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6322f push eax */
  push32((uint32_t)(EAX));
  /* 12d63230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63233 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63234 call 0x12d63250 */
  push32(0x12d63239u); f_12d63250();
  /* 12d63239 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6323c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6323f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63241 call 0x12d66820 */
  push32(0x12d63246u); f_12d66820();
  /* 12d63246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6324c mov esp, ebp */
  ESP = (EBP);
  /* 12d6324e pop ebp */
  EBP = (pop32());
  /* 12d6324f ret  */
  ESPCHK(0x12d63210u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x12d63250 (1297 bytes, 431 insns) */
void f_12d63250(void) {
  FTRACE(0x12d63250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63250 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63251 mov ebp, esp */
  EBP = (ESP);
  /* 12d63253 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63256 push ebx */
  push32((uint32_t)(EBX));
  /* 12d63257 push esi */
  push32((uint32_t)(ESI));
  /* 12d63258 push edi */
  push32((uint32_t)(EDI));
  /* 12d63259 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d63260 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63264 jne 0x12d63283 */
  if (!C.zf) goto L_12d63283;
  /* 12d63266 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d63269 push eax */
  push32((uint32_t)(EAX));
  /* 12d6326a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6326d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6326e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d63271 push edx */
  push32((uint32_t)(EDX));
  /* 12d63272 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63275 push eax */
  push32((uint32_t)(EAX));
  /* 12d63276 call 0x12d62d80 */
  push32(0x12d6327bu); f_12d62d80();
  /* 12d6327b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6327e jmp 0x12d6375a */
  goto L_12d6375a;
L_12d63283:;
  /* 12d63283 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63287 je 0x12d632a6 */
  if (C.zf) goto L_12d632a6;
  /* 12d63289 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6328d jne 0x12d632a6 */
  if (!C.zf) goto L_12d632a6;
  /* 12d6328f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d63292 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63293 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63296 push edx */
  push32((uint32_t)(EDX));
  /* 12d63297 call 0x12d63810 */
  push32(0x12d6329cu); f_12d63810();
  /* 12d6329c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6329f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d632a1 jmp 0x12d6375a */
  goto L_12d6375a;
L_12d632a6:;
  /* 12d632a6 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d632ab and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d632ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d632b0 je 0x12d632e2 */
  if (C.zf) goto L_12d632e2;
L_12d632b2:;
  /* 12d632b2 call 0x12d63f20 */
  push32(0x12d632b7u); f_12d63f20();
  /* 12d632b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d632b9 jne 0x12d632dc */
  if (!C.zf) goto L_12d632dc;
  /* 12d632bb push 0x12d7949c */
  push32((uint32_t)(0x12d7949cu));
  /* 12d632c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d632c2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12d632c7 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d632cc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d632ce call 0x12d61e40 */
  push32(0x12d632d3u); f_12d61e40();
  /* 12d632d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d632d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d632d9 jne 0x12d632dc */
  if (!C.zf) goto L_12d632dc;
  /* 12d632db int3  */
  x86_unimpl("int3 @ 0x12d632db");
L_12d632dc:;
  /* 12d632dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d632de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d632e0 jne 0x12d632b2 */
  if (!C.zf) goto L_12d632b2;
L_12d632e2:;
  /* 12d632e2 mov edx, dword ptr [0x12d7caa0] */
  EDX = (r32((uint32_t)(0x12d7caa0)));
  /* 12d632e8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d632eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d632ee cmp eax, dword ptr [0x12d7caa4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d7caa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d632f4 jne 0x12d632f7 */
  if (!C.zf) goto L_12d632f7;
  /* 12d632f6 int3  */
  x86_unimpl("int3 @ 0x12d632f6");
L_12d632f7:;
  /* 12d632f7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d632fa push ecx */
  push32((uint32_t)(ECX));
  /* 12d632fb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d632fe push edx */
  push32((uint32_t)(EDX));
  /* 12d632ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d63302 push eax */
  push32((uint32_t)(EAX));
  /* 12d63303 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d63306 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63307 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6330a push edx */
  push32((uint32_t)(EDX));
  /* 12d6330b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6330e push eax */
  push32((uint32_t)(EAX));
  /* 12d6330f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63311 call dword ptr [0x12d7ccb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ccb0))), 0x12d63317u);
  /* 12d63317 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6331a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6331c jne 0x12d6337c */
  if (!C.zf) goto L_12d6337c;
  /* 12d6331e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63322 je 0x12d6334f */
  if (C.zf) goto L_12d6334f;
L_12d63324:;
  /* 12d63324 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d63327 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63328 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6332b push edx */
  push32((uint32_t)(EDX));
  /* 12d6332c push 0x12d79618 */
  push32((uint32_t)(0x12d79618u));
  /* 12d63331 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63333 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63335 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63339 call 0x12d61e40 */
  push32(0x12d6333eu); f_12d61e40();
  /* 12d6333e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63341 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63344 jne 0x12d63347 */
  if (!C.zf) goto L_12d63347;
  /* 12d63346 int3  */
  x86_unimpl("int3 @ 0x12d63346");
L_12d63347:;
  /* 12d63347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6334b jne 0x12d63324 */
  if (!C.zf) goto L_12d63324;
  /* 12d6334d jmp 0x12d63375 */
  goto L_12d63375;
L_12d6334f:;
  /* 12d6334f push 0x12d795f4 */
  push32((uint32_t)(0x12d795f4u));
  /* 12d63354 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d63359 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6335b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6335d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6335f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63361 call 0x12d61e40 */
  push32(0x12d63366u); f_12d61e40();
  /* 12d63366 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63369 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6336c jne 0x12d6336f */
  if (!C.zf) goto L_12d6336f;
  /* 12d6336e int3  */
  x86_unimpl("int3 @ 0x12d6336e");
L_12d6336f:;
  /* 12d6336f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63371 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63373 jne 0x12d6334f */
  if (!C.zf) goto L_12d6334f;
L_12d63375:;
  /* 12d63375 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63377 jmp 0x12d6375a */
  goto L_12d6375a;
L_12d6337c:;
  /* 12d6337c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63380 jbe 0x12d633ae */
  if ((C.cf||C.zf)) goto L_12d633ae;
L_12d63382:;
  /* 12d63382 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63385 push edx */
  push32((uint32_t)(EDX));
  /* 12d63386 push 0x12d795c4 */
  push32((uint32_t)(0x12d795c4u));
  /* 12d6338b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6338d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6338f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63391 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d63393 call 0x12d61e40 */
  push32(0x12d63398u); f_12d61e40();
  /* 12d63398 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6339b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6339e jne 0x12d633a1 */
  if (!C.zf) goto L_12d633a1;
  /* 12d633a0 int3  */
  x86_unimpl("int3 @ 0x12d633a0");
L_12d633a1:;
  /* 12d633a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d633a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d633a5 jne 0x12d63382 */
  if (!C.zf) goto L_12d63382;
  /* 12d633a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d633a9 jmp 0x12d6375a */
  goto L_12d6375a;
L_12d633ae:;
  /* 12d633ae cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d633b2 je 0x12d633f6 */
  if (C.zf) goto L_12d633f6;
  /* 12d633b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d633b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d633bd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d633c0 je 0x12d633f6 */
  if (C.zf) goto L_12d633f6;
  /* 12d633c2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d633c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d633cb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d633ce je 0x12d633f6 */
  if (C.zf) goto L_12d633f6;
L_12d633d0:;
  /* 12d633d0 push 0x12d793d8 */
  push32((uint32_t)(0x12d793d8u));
  /* 12d633d5 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d633da push 0 */
  push32((uint32_t)(0x0u));
  /* 12d633dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d633de push 0 */
  push32((uint32_t)(0x0u));
  /* 12d633e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d633e2 call 0x12d61e40 */
  push32(0x12d633e7u); f_12d61e40();
  /* 12d633e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d633ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d633ed jne 0x12d633f0 */
  if (!C.zf) goto L_12d633f0;
  /* 12d633ef int3  */
  x86_unimpl("int3 @ 0x12d633ef");
L_12d633f0:;
  /* 12d633f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d633f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d633f4 jne 0x12d633d0 */
  if (!C.zf) goto L_12d633d0;
L_12d633f6:;
  /* 12d633f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d633f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d633fa call 0x12d64380 */
  push32(0x12d633ffu); f_12d64380();
  /* 12d633ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63404 jne 0x12d63427 */
  if (!C.zf) goto L_12d63427;
  /* 12d63406 push 0x12d795a0 */
  push32((uint32_t)(0x12d795a0u));
  /* 12d6340b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6340d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12d63412 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63417 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63419 call 0x12d61e40 */
  push32(0x12d6341eu); f_12d61e40();
  /* 12d6341e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63421 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63424 jne 0x12d63427 */
  if (!C.zf) goto L_12d63427;
  /* 12d63426 int3  */
  x86_unimpl("int3 @ 0x12d63426");
L_12d63427:;
  /* 12d63427 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63429 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6342b jne 0x12d633f6 */
  if (!C.zf) goto L_12d633f6;
  /* 12d6342d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63430 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63433 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d63436 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63439 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6343d jne 0x12d63446 */
  if (!C.zf) goto L_12d63446;
  /* 12d6343f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12d63446:;
  /* 12d63446 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6344a je 0x12d6348a */
  if (C.zf) goto L_12d6348a;
L_12d6344c:;
  /* 12d6344c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6344f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63456 jne 0x12d63461 */
  if (!C.zf) goto L_12d63461;
  /* 12d63458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6345b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6345f je 0x12d63482 */
  if (C.zf) goto L_12d63482;
L_12d63461:;
  /* 12d63461 push 0x12d79558 */
  push32((uint32_t)(0x12d79558u));
  /* 12d63466 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63468 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12d6346d push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63472 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63474 call 0x12d61e40 */
  push32(0x12d63479u); f_12d61e40();
  /* 12d63479 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6347c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6347f jne 0x12d63482 */
  if (!C.zf) goto L_12d63482;
  /* 12d63481 int3  */
  x86_unimpl("int3 @ 0x12d63481");
L_12d63482:;
  /* 12d63482 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63486 jne 0x12d6344c */
  if (!C.zf) goto L_12d6344c;
  /* 12d63488 jmp 0x12d634ee */
  goto L_12d634ee;
L_12d6348a:;
  /* 12d6348a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6348d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63490 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d63495 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63498 jne 0x12d634af */
  if (!C.zf) goto L_12d634af;
  /* 12d6349a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6349d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d634a3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d634a6 jne 0x12d634af */
  if (!C.zf) goto L_12d634af;
  /* 12d634a8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12d634af:;
  /* 12d634af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d634b2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d634b5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d634ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d634bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d634c3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d634c5 je 0x12d634e8 */
  if (C.zf) goto L_12d634e8;
  /* 12d634c7 push 0x12d7951c */
  push32((uint32_t)(0x12d7951cu));
  /* 12d634cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d634ce push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12d634d3 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d634d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d634da call 0x12d61e40 */
  push32(0x12d634dfu); f_12d61e40();
  /* 12d634df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d634e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d634e5 jne 0x12d634e8 */
  if (!C.zf) goto L_12d634e8;
  /* 12d634e7 int3  */
  x86_unimpl("int3 @ 0x12d634e7");
L_12d634e8:;
  /* 12d634e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d634ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d634ec jne 0x12d634af */
  if (!C.zf) goto L_12d634af;
L_12d634ee:;
  /* 12d634ee cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d634f2 je 0x12d63519 */
  if (C.zf) goto L_12d63519;
  /* 12d634f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d634f7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d634fa push eax */
  push32((uint32_t)(EAX));
  /* 12d634fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d634fe push ecx */
  push32((uint32_t)(ECX));
  /* 12d634ff call 0x12d66d00 */
  push32(0x12d63504u); f_12d66d00();
  /* 12d63504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63507 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6350a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6350e jne 0x12d63517 */
  if (!C.zf) goto L_12d63517;
  /* 12d63510 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63512 jmp 0x12d6375a */
  goto L_12d6375a;
L_12d63517:;
  /* 12d63517 jmp 0x12d6353c */
  goto L_12d6353c;
L_12d63519:;
  /* 12d63519 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6351c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6351f push edx */
  push32((uint32_t)(EDX));
  /* 12d63520 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63523 push eax */
  push32((uint32_t)(EAX));
  /* 12d63524 call 0x12d66c50 */
  push32(0x12d63529u); f_12d66c50();
  /* 12d63529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6352c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6352f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63533 jne 0x12d6353c */
  if (!C.zf) goto L_12d6353c;
  /* 12d63535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63537 jmp 0x12d6375a */
  goto L_12d6375a;
L_12d6353c:;
  /* 12d6353c mov ecx, dword ptr [0x12d7caa0] */
  ECX = (r32((uint32_t)(0x12d7caa0)));
  /* 12d63542 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63545 mov dword ptr [0x12d7caa0], ecx */
  w32((uint32_t)(0x12d7caa0), (ECX));
  /* 12d6354b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6354f jne 0x12d635a7 */
  if (!C.zf) goto L_12d635a7;
  /* 12d63551 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63554 mov eax, dword ptr [0x12d7e4c8] */
  EAX = (r32((uint32_t)(0x12d7e4c8)));
  /* 12d63559 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6355c mov dword ptr [0x12d7e4c8], eax */
  w32((uint32_t)(0x12d7e4c8), (EAX));
  /* 12d63561 mov ecx, dword ptr [0x12d7e4c8] */
  ECX = (r32((uint32_t)(0x12d7e4c8)));
  /* 12d63567 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6356a mov dword ptr [0x12d7e4c8], ecx */
  w32((uint32_t)(0x12d7e4c8), (ECX));
  /* 12d63570 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63573 mov eax, dword ptr [0x12d7e4d0] */
  EAX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d63578 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6357b mov dword ptr [0x12d7e4d0], eax */
  w32((uint32_t)(0x12d7e4d0), (EAX));
  /* 12d63580 mov ecx, dword ptr [0x12d7e4d0] */
  ECX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d63586 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63589 mov dword ptr [0x12d7e4d0], ecx */
  w32((uint32_t)(0x12d7e4d0), (ECX));
  /* 12d6358f mov edx, dword ptr [0x12d7e4d0] */
  EDX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d63595 cmp edx, dword ptr [0x12d7e4d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7e4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6359b jbe 0x12d635a7 */
  if ((C.cf||C.zf)) goto L_12d635a7;
  /* 12d6359d mov eax, dword ptr [0x12d7e4d0] */
  EAX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d635a2 mov dword ptr [0x12d7e4d4], eax */
  w32((uint32_t)(0x12d7e4d4), (EAX));
L_12d635a7:;
  /* 12d635a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d635aa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d635ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d635b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d635b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d635b6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d635b9 jbe 0x12d635df */
  if ((C.cf||C.zf)) goto L_12d635df;
  /* 12d635bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d635be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d635c1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d635c4 push edx */
  push32((uint32_t)(EDX));
  /* 12d635c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d635c7 mov al, byte ptr [0x12d7caaa] */
  AL = (r8((uint32_t)(0x12d7caaa)));
  /* 12d635cc push eax */
  push32((uint32_t)(EAX));
  /* 12d635cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d635d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d635d3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d635d6 push edx */
  push32((uint32_t)(EDX));
  /* 12d635d7 call 0x12d66af0 */
  push32(0x12d635dcu); f_12d66af0();
  /* 12d635dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d635df:;
  /* 12d635df push 4 */
  push32((uint32_t)(0x4u));
  /* 12d635e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d635e3 mov al, byte ptr [0x12d7caa8] */
  AL = (r8((uint32_t)(0x12d7caa8)));
  /* 12d635e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d635e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d635ec add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d635ef push ecx */
  push32((uint32_t)(ECX));
  /* 12d635f0 call 0x12d66af0 */
  push32(0x12d635f5u); f_12d66af0();
  /* 12d635f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d635f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d635fc jne 0x12d63619 */
  if (!C.zf) goto L_12d63619;
  /* 12d635fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63601 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d63604 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d63607 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6360a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6360d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12d63610 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63613 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d63616 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12d63619:;
  /* 12d63619 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6361c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6361f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12d63622:;
  /* 12d63622 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63626 jne 0x12d63657 */
  if (!C.zf) goto L_12d63657;
  /* 12d63628 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6362c jne 0x12d63636 */
  if (!C.zf) goto L_12d63636;
  /* 12d6362e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63631 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63634 je 0x12d63657 */
  if (C.zf) goto L_12d63657;
L_12d63636:;
  /* 12d63636 push 0x12d794e8 */
  push32((uint32_t)(0x12d794e8u));
  /* 12d6363b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6363d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12d63642 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63647 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63649 call 0x12d61e40 */
  push32(0x12d6364eu); f_12d61e40();
  /* 12d6364e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63651 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63654 jne 0x12d63657 */
  if (!C.zf) goto L_12d63657;
  /* 12d63656 int3  */
  x86_unimpl("int3 @ 0x12d63656");
L_12d63657:;
  /* 12d63657 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63659 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6365b jne 0x12d63622 */
  if (!C.zf) goto L_12d63622;
  /* 12d6365d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63660 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63663 je 0x12d6366b */
  if (C.zf) goto L_12d6366b;
  /* 12d63665 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63669 je 0x12d63673 */
  if (C.zf) goto L_12d63673;
L_12d6366b:;
  /* 12d6366b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6366e jmp 0x12d6375a */
  goto L_12d6375a;
L_12d63673:;
  /* 12d63673 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63676 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63679 je 0x12d6368b */
  if (C.zf) goto L_12d6368b;
  /* 12d6367b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6367e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d63680 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63683 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d63686 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d63689 jmp 0x12d636c7 */
  goto L_12d636c7;
L_12d6368b:;
  /* 12d6368b mov eax, dword ptr [0x12d7e4c4] */
  EAX = (r32((uint32_t)(0x12d7e4c4)));
  /* 12d63690 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63693 je 0x12d636b6 */
  if (C.zf) goto L_12d636b6;
  /* 12d63695 push 0x12d794cc */
  push32((uint32_t)(0x12d794ccu));
  /* 12d6369a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6369c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12d636a1 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d636a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d636a8 call 0x12d61e40 */
  push32(0x12d636adu); f_12d61e40();
  /* 12d636ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d636b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d636b3 jne 0x12d636b6 */
  if (!C.zf) goto L_12d636b6;
  /* 12d636b5 int3  */
  x86_unimpl("int3 @ 0x12d636b5");
L_12d636b6:;
  /* 12d636b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d636b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d636ba jne 0x12d6368b */
  if (!C.zf) goto L_12d6368b;
  /* 12d636bc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d636bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d636c2 mov dword ptr [0x12d7e4c4], eax */
  w32((uint32_t)(0x12d7e4c4), (EAX));
L_12d636c7:;
  /* 12d636c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d636ca cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d636ce je 0x12d636df */
  if (C.zf) goto L_12d636df;
  /* 12d636d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d636d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d636d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d636d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d636db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d636dd jmp 0x12d6371a */
  goto L_12d6371a;
L_12d636df:;
  /* 12d636df mov eax, dword ptr [0x12d7e4cc] */
  EAX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d636e4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d636e7 je 0x12d6370a */
  if (C.zf) goto L_12d6370a;
  /* 12d636e9 push 0x12d794b0 */
  push32((uint32_t)(0x12d794b0u));
  /* 12d636ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d636f0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12d636f5 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d636fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12d636fc call 0x12d61e40 */
  push32(0x12d63701u); f_12d61e40();
  /* 12d63701 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63704 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63707 jne 0x12d6370a */
  if (!C.zf) goto L_12d6370a;
  /* 12d63709 int3  */
  x86_unimpl("int3 @ 0x12d63709");
L_12d6370a:;
  /* 12d6370a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6370c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6370e jne 0x12d636df */
  if (!C.zf) goto L_12d636df;
  /* 12d63710 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63713 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d63715 mov dword ptr [0x12d7e4cc], eax */
  w32((uint32_t)(0x12d7e4cc), (EAX));
L_12d6371a:;
  /* 12d6371a cmp dword ptr [0x12d7e4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63721 je 0x12d63731 */
  if (C.zf) goto L_12d63731;
  /* 12d63723 mov ecx, dword ptr [0x12d7e4cc] */
  ECX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d63729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6372c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d6372f jmp 0x12d63739 */
  goto L_12d63739;
L_12d63731:;
  /* 12d63731 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63734 mov dword ptr [0x12d7e4c4], eax */
  w32((uint32_t)(0x12d7e4c4), (EAX));
L_12d63739:;
  /* 12d63739 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6373c mov edx, dword ptr [0x12d7e4cc] */
  EDX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d63742 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d63744 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63747 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d6374e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63751 mov dword ptr [0x12d7e4cc], ecx */
  w32((uint32_t)(0x12d7e4cc), (ECX));
  /* 12d63757 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d6375a:;
  /* 12d6375a pop edi */
  EDI = (pop32());
  /* 12d6375b pop esi */
  ESI = (pop32());
  /* 12d6375c pop ebx */
  EBX = (pop32());
  /* 12d6375d mov esp, ebp */
  ESP = (EBP);
  /* 12d6375f pop ebp */
  EBP = (pop32());
  /* 12d63760 ret  */
  ESPCHK(0x12d63250u, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x12d63770 (27 bytes, 13 insns) */
void f_12d63770(void) {
  FTRACE(0x12d63770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63770 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63771 mov ebp, esp */
  EBP = (ESP);
  /* 12d63773 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63775 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63777 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d63779 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6377c push eax */
  push32((uint32_t)(EAX));
  /* 12d6377d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63780 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63781 call 0x12d63790 */
  push32(0x12d63786u); f_12d63790();
  /* 12d63786 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63789 pop ebp */
  EBP = (pop32());
  /* 12d6378a ret  */
  ESPCHK(0x12d63770u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x12d63790 (64 bytes, 27 insns) */
void f_12d63790(void) {
  FTRACE(0x12d63790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63790 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63791 mov ebp, esp */
  EBP = (ESP);
  /* 12d63793 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63794 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63796 call 0x12d66780 */
  push32(0x12d6379bu); f_12d66780();
  /* 12d6379b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6379e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d637a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d637a3 push eax */
  push32((uint32_t)(EAX));
  /* 12d637a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d637a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d637a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d637ab push edx */
  push32((uint32_t)(EDX));
  /* 12d637ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d637af push eax */
  push32((uint32_t)(EAX));
  /* 12d637b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d637b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d637b4 call 0x12d63250 */
  push32(0x12d637b9u); f_12d63250();
  /* 12d637b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d637bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d637bf push 9 */
  push32((uint32_t)(0x9u));
  /* 12d637c1 call 0x12d66820 */
  push32(0x12d637c6u); f_12d66820();
  /* 12d637c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d637c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d637cc mov esp, ebp */
  ESP = (EBP);
  /* 12d637ce pop ebp */
  EBP = (pop32());
  /* 12d637cf ret  */
  ESPCHK(0x12d63790u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x12d637d0 (19 bytes, 9 insns) */
void f_12d637d0(void) {
  FTRACE(0x12d637d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d637d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d637d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d637d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d637d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d637d8 push eax */
  push32((uint32_t)(EAX));
  /* 12d637d9 call 0x12d63810 */
  push32(0x12d637deu); f_12d63810();
  /* 12d637de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d637e1 pop ebp */
  EBP = (pop32());
  /* 12d637e2 ret  */
  ESPCHK(0x12d637d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037f0 @ 0x12d637f0 (19 bytes, 9 insns) */
void f_12d637f0(void) {
  FTRACE(0x12d637f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d637f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d637f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d637f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d637f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d637f8 push eax */
  push32((uint32_t)(EAX));
  /* 12d637f9 call 0x12d63840 */
  push32(0x12d637feu); f_12d63840();
  /* 12d637fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63801 pop ebp */
  EBP = (pop32());
  /* 12d63802 ret  */
  ESPCHK(0x12d637f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x12d63810 (41 bytes, 16 insns) */
void f_12d63810(void) {
  FTRACE(0x12d63810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63810 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63811 mov ebp, esp */
  EBP = (ESP);
  /* 12d63813 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63815 call 0x12d66780 */
  push32(0x12d6381au); f_12d66780();
  /* 12d6381a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6381d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63820 push eax */
  push32((uint32_t)(EAX));
  /* 12d63821 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63824 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63825 call 0x12d63840 */
  push32(0x12d6382au); f_12d63840();
  /* 12d6382a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6382d push 9 */
  push32((uint32_t)(0x9u));
  /* 12d6382f call 0x12d66820 */
  push32(0x12d63834u); f_12d66820();
  /* 12d63834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63837 pop ebp */
  EBP = (pop32());
  /* 12d63838 ret  */
  ESPCHK(0x12d63810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003840 @ 0x12d63840 (1004 bytes, 342 insns) */
void f_12d63840(void) {
  FTRACE(0x12d63840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63840 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63841 mov ebp, esp */
  EBP = (ESP);
  /* 12d63843 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63844 push ebx */
  push32((uint32_t)(EBX));
  /* 12d63845 push esi */
  push32((uint32_t)(ESI));
  /* 12d63846 push edi */
  push32((uint32_t)(EDI));
  /* 12d63847 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d6384c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6384f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63851 je 0x12d63883 */
  if (C.zf) goto L_12d63883;
L_12d63853:;
  /* 12d63853 call 0x12d63f20 */
  push32(0x12d63858u); f_12d63f20();
  /* 12d63858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6385a jne 0x12d6387d */
  if (!C.zf) goto L_12d6387d;
  /* 12d6385c push 0x12d7949c */
  push32((uint32_t)(0x12d7949cu));
  /* 12d63861 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63863 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12d63868 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d6386d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6386f call 0x12d61e40 */
  push32(0x12d63874u); f_12d61e40();
  /* 12d63874 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6387a jne 0x12d6387d */
  if (!C.zf) goto L_12d6387d;
  /* 12d6387c int3  */
  x86_unimpl("int3 @ 0x12d6387c");
L_12d6387d:;
  /* 12d6387d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6387f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63881 jne 0x12d63853 */
  if (!C.zf) goto L_12d63853;
L_12d63883:;
  /* 12d63883 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63887 jne 0x12d6388e */
  if (!C.zf) goto L_12d6388e;
  /* 12d63889 jmp 0x12d63c25 */
  goto L_12d63c25;
L_12d6388e:;
  /* 12d6388e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63890 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63892 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63894 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63897 push edx */
  push32((uint32_t)(EDX));
  /* 12d63898 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6389a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6389d push eax */
  push32((uint32_t)(EAX));
  /* 12d6389e push 3 */
  push32((uint32_t)(0x3u));
  /* 12d638a0 call dword ptr [0x12d7ccb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7ccb0))), 0x12d638a6u);
  /* 12d638a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d638a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d638ab jne 0x12d638d8 */
  if (!C.zf) goto L_12d638d8;
L_12d638ad:;
  /* 12d638ad push 0x12d79760 */
  push32((uint32_t)(0x12d79760u));
  /* 12d638b2 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d638b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d638b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d638bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d638bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d638bf call 0x12d61e40 */
  push32(0x12d638c4u); f_12d61e40();
  /* 12d638c4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d638c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d638ca jne 0x12d638cd */
  if (!C.zf) goto L_12d638cd;
  /* 12d638cc int3  */
  x86_unimpl("int3 @ 0x12d638cc");
L_12d638cd:;
  /* 12d638cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d638cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d638d1 jne 0x12d638ad */
  if (!C.zf) goto L_12d638ad;
  /* 12d638d3 jmp 0x12d63c25 */
  goto L_12d63c25;
L_12d638d8:;
  /* 12d638d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d638db push edx */
  push32((uint32_t)(EDX));
  /* 12d638dc call 0x12d64380 */
  push32(0x12d638e1u); f_12d64380();
  /* 12d638e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d638e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d638e6 jne 0x12d63909 */
  if (!C.zf) goto L_12d63909;
  /* 12d638e8 push 0x12d795a0 */
  push32((uint32_t)(0x12d795a0u));
  /* 12d638ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12d638ef push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12d638f4 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d638f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d638fb call 0x12d61e40 */
  push32(0x12d63900u); f_12d61e40();
  /* 12d63900 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63903 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63906 jne 0x12d63909 */
  if (!C.zf) goto L_12d63909;
  /* 12d63908 int3  */
  x86_unimpl("int3 @ 0x12d63908");
L_12d63909:;
  /* 12d63909 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6390b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6390d jne 0x12d638d8 */
  if (!C.zf) goto L_12d638d8;
  /* 12d6390f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63912 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63915 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d63918:;
  /* 12d63918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6391b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d6391e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d63923 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63926 je 0x12d6396b */
  if (C.zf) goto L_12d6396b;
  /* 12d63928 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6392b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6392f je 0x12d6396b */
  if (C.zf) goto L_12d6396b;
  /* 12d63931 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63934 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63937 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6393c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6393f je 0x12d6396b */
  if (C.zf) goto L_12d6396b;
  /* 12d63941 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63944 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63948 je 0x12d6396b */
  if (C.zf) goto L_12d6396b;
  /* 12d6394a push 0x12d79738 */
  push32((uint32_t)(0x12d79738u));
  /* 12d6394f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63951 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12d63956 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d6395b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6395d call 0x12d61e40 */
  push32(0x12d63962u); f_12d61e40();
  /* 12d63962 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63965 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63968 jne 0x12d6396b */
  if (!C.zf) goto L_12d6396b;
  /* 12d6396a int3  */
  x86_unimpl("int3 @ 0x12d6396a");
L_12d6396b:;
  /* 12d6396b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6396d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6396f jne 0x12d63918 */
  if (!C.zf) goto L_12d63918;
  /* 12d63971 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d63976 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d63979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6397b jne 0x12d63a46 */
  if (!C.zf) goto L_12d63a46;
  /* 12d63981 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d63983 mov cl, byte ptr [0x12d7caa8] */
  CL = (r8((uint32_t)(0x12d7caa8)));
  /* 12d63989 push ecx */
  push32((uint32_t)(ECX));
  /* 12d6398a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6398d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63990 push edx */
  push32((uint32_t)(EDX));
  /* 12d63991 call 0x12d63e90 */
  push32(0x12d63996u); f_12d63e90();
  /* 12d63996 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63999 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6399b jne 0x12d639e0 */
  if (!C.zf) goto L_12d639e0;
L_12d6399d:;
  /* 12d6399d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d639a0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d639a3 push eax */
  push32((uint32_t)(EAX));
  /* 12d639a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d639a7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d639aa push edx */
  push32((uint32_t)(EDX));
  /* 12d639ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d639ae mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d639b1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d639b7 mov edx, dword ptr [ecx*4 + 0x12d7caac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7caac)));
  /* 12d639be push edx */
  push32((uint32_t)(EDX));
  /* 12d639bf push 0x12d7970c */
  push32((uint32_t)(0x12d7970cu));
  /* 12d639c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d639c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d639c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d639ca push 1 */
  push32((uint32_t)(0x1u));
  /* 12d639cc call 0x12d61e40 */
  push32(0x12d639d1u); f_12d61e40();
  /* 12d639d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d639d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d639d7 jne 0x12d639da */
  if (!C.zf) goto L_12d639da;
  /* 12d639d9 int3  */
  x86_unimpl("int3 @ 0x12d639d9");
L_12d639da:;
  /* 12d639da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d639dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d639de jne 0x12d6399d */
  if (!C.zf) goto L_12d6399d;
L_12d639e0:;
  /* 12d639e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d639e2 mov cl, byte ptr [0x12d7caa8] */
  CL = (r8((uint32_t)(0x12d7caa8)));
  /* 12d639e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d639e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d639ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d639ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d639f2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12d639f6 push edx */
  push32((uint32_t)(EDX));
  /* 12d639f7 call 0x12d63e90 */
  push32(0x12d639fcu); f_12d63e90();
  /* 12d639fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d639ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63a01 jne 0x12d63a46 */
  if (!C.zf) goto L_12d63a46;
L_12d63a03:;
  /* 12d63a03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63a06 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63a09 push eax */
  push32((uint32_t)(EAX));
  /* 12d63a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63a0d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d63a10 push edx */
  push32((uint32_t)(EDX));
  /* 12d63a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63a14 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d63a17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d63a1d mov edx, dword ptr [ecx*4 + 0x12d7caac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7caac)));
  /* 12d63a24 push edx */
  push32((uint32_t)(EDX));
  /* 12d63a25 push 0x12d796e0 */
  push32((uint32_t)(0x12d796e0u));
  /* 12d63a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d63a32 call 0x12d61e40 */
  push32(0x12d63a37u); f_12d61e40();
  /* 12d63a37 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63a3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63a3d jne 0x12d63a40 */
  if (!C.zf) goto L_12d63a40;
  /* 12d63a3f int3  */
  x86_unimpl("int3 @ 0x12d63a3f");
L_12d63a40:;
  /* 12d63a40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63a44 jne 0x12d63a03 */
  if (!C.zf) goto L_12d63a03;
L_12d63a46:;
  /* 12d63a46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63a49 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63a4d jne 0x12d63abb */
  if (!C.zf) goto L_12d63abb;
L_12d63a4f:;
  /* 12d63a4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63a52 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63a59 jne 0x12d63a64 */
  if (!C.zf) goto L_12d63a64;
  /* 12d63a5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63a5e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63a62 je 0x12d63a85 */
  if (C.zf) goto L_12d63a85;
L_12d63a64:;
  /* 12d63a64 push 0x12d796a0 */
  push32((uint32_t)(0x12d796a0u));
  /* 12d63a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63a6b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12d63a70 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63a75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63a77 call 0x12d61e40 */
  push32(0x12d63a7cu); f_12d61e40();
  /* 12d63a7c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63a7f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63a82 jne 0x12d63a85 */
  if (!C.zf) goto L_12d63a85;
  /* 12d63a84 int3  */
  x86_unimpl("int3 @ 0x12d63a84");
L_12d63a85:;
  /* 12d63a85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63a87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63a89 jne 0x12d63a4f */
  if (!C.zf) goto L_12d63a4f;
  /* 12d63a8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63a8e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d63a91 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63a94 push eax */
  push32((uint32_t)(EAX));
  /* 12d63a95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63a97 mov cl, byte ptr [0x12d7caa9] */
  CL = (r8((uint32_t)(0x12d7caa9)));
  /* 12d63a9d push ecx */
  push32((uint32_t)(ECX));
  /* 12d63a9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63aa1 push edx */
  push32((uint32_t)(EDX));
  /* 12d63aa2 call 0x12d66af0 */
  push32(0x12d63aa7u); f_12d66af0();
  /* 12d63aa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63aad push eax */
  push32((uint32_t)(EAX));
  /* 12d63aae call 0x12d66ef0 */
  push32(0x12d63ab3u); f_12d66ef0();
  /* 12d63ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63ab6 jmp 0x12d63c25 */
  goto L_12d63c25;
L_12d63abb:;
  /* 12d63abb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63abe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63ac2 jne 0x12d63ad1 */
  if (!C.zf) goto L_12d63ad1;
  /* 12d63ac4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63ac8 jne 0x12d63ad1 */
  if (!C.zf) goto L_12d63ad1;
  /* 12d63aca mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12d63ad1:;
  /* 12d63ad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63ad4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63ad7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63ada je 0x12d63afd */
  if (C.zf) goto L_12d63afd;
  /* 12d63adc push 0x12d79680 */
  push32((uint32_t)(0x12d79680u));
  /* 12d63ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63ae3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12d63ae8 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63aed push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63aef call 0x12d61e40 */
  push32(0x12d63af4u); f_12d61e40();
  /* 12d63af4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63af7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63afa jne 0x12d63afd */
  if (!C.zf) goto L_12d63afd;
  /* 12d63afc int3  */
  x86_unimpl("int3 @ 0x12d63afc");
L_12d63afd:;
  /* 12d63afd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63aff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63b01 jne 0x12d63ad1 */
  if (!C.zf) goto L_12d63ad1;
  /* 12d63b03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b06 mov eax, dword ptr [0x12d7e4d0] */
  EAX = (r32((uint32_t)(0x12d7e4d0)));
  /* 12d63b0b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63b0e mov dword ptr [0x12d7e4d0], eax */
  w32((uint32_t)(0x12d7e4d0), (EAX));
  /* 12d63b13 mov ecx, dword ptr [0x12d7ca9c] */
  ECX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d63b19 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d63b1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63b1e jne 0x12d63bfc */
  if (!C.zf) goto L_12d63bfc;
  /* 12d63b24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63b2a je 0x12d63b3c */
  if (C.zf) goto L_12d63b3c;
  /* 12d63b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d63b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b34 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d63b37 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d63b3a jmp 0x12d63b7a */
  goto L_12d63b7a;
L_12d63b3c:;
  /* 12d63b3c mov ecx, dword ptr [0x12d7e4c4] */
  ECX = (r32((uint32_t)(0x12d7e4c4)));
  /* 12d63b42 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63b45 je 0x12d63b68 */
  if (C.zf) goto L_12d63b68;
  /* 12d63b47 push 0x12d79668 */
  push32((uint32_t)(0x12d79668u));
  /* 12d63b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63b4e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12d63b53 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63b58 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63b5a call 0x12d61e40 */
  push32(0x12d63b5fu); f_12d61e40();
  /* 12d63b5f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63b62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63b65 jne 0x12d63b68 */
  if (!C.zf) goto L_12d63b68;
  /* 12d63b67 int3  */
  x86_unimpl("int3 @ 0x12d63b67");
L_12d63b68:;
  /* 12d63b68 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63b6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d63b6c jne 0x12d63b3c */
  if (!C.zf) goto L_12d63b3c;
  /* 12d63b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b71 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d63b74 mov dword ptr [0x12d7e4c4], ecx */
  w32((uint32_t)(0x12d7e4c4), (ECX));
L_12d63b7a:;
  /* 12d63b7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b7d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63b81 je 0x12d63b92 */
  if (C.zf) goto L_12d63b92;
  /* 12d63b83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d63b89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63b8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d63b8e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d63b90 jmp 0x12d63bcf */
  goto L_12d63bcf;
L_12d63b92:;
  /* 12d63b92 mov ecx, dword ptr [0x12d7e4cc] */
  ECX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d63b98 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63b9b je 0x12d63bbe */
  if (C.zf) goto L_12d63bbe;
  /* 12d63b9d push 0x12d79650 */
  push32((uint32_t)(0x12d79650u));
  /* 12d63ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63ba4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12d63ba9 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63bae push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63bb0 call 0x12d61e40 */
  push32(0x12d63bb5u); f_12d61e40();
  /* 12d63bb5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63bb8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63bbb jne 0x12d63bbe */
  if (!C.zf) goto L_12d63bbe;
  /* 12d63bbd int3  */
  x86_unimpl("int3 @ 0x12d63bbd");
L_12d63bbe:;
  /* 12d63bbe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63bc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d63bc2 jne 0x12d63b92 */
  if (!C.zf) goto L_12d63b92;
  /* 12d63bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63bc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d63bc9 mov dword ptr [0x12d7e4cc], ecx */
  w32((uint32_t)(0x12d7e4cc), (ECX));
L_12d63bcf:;
  /* 12d63bcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63bd2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d63bd5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63bd8 push eax */
  push32((uint32_t)(EAX));
  /* 12d63bd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63bdb mov cl, byte ptr [0x12d7caa9] */
  CL = (r8((uint32_t)(0x12d7caa9)));
  /* 12d63be1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63be2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63be5 push edx */
  push32((uint32_t)(EDX));
  /* 12d63be6 call 0x12d66af0 */
  push32(0x12d63bebu); f_12d66af0();
  /* 12d63beb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63bf1 push eax */
  push32((uint32_t)(EAX));
  /* 12d63bf2 call 0x12d66ef0 */
  push32(0x12d63bf7u); f_12d66ef0();
  /* 12d63bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63bfa jmp 0x12d63c25 */
  goto L_12d63c25;
L_12d63bfc:;
  /* 12d63bfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63bff mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12d63c06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63c09 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d63c0c push eax */
  push32((uint32_t)(EAX));
  /* 12d63c0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63c0f mov cl, byte ptr [0x12d7caa9] */
  CL = (r8((uint32_t)(0x12d7caa9)));
  /* 12d63c15 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63c16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63c19 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63c1c push edx */
  push32((uint32_t)(EDX));
  /* 12d63c1d call 0x12d66af0 */
  push32(0x12d63c22u); f_12d66af0();
  /* 12d63c22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d63c25:;
  /* 12d63c25 pop edi */
  EDI = (pop32());
  /* 12d63c26 pop esi */
  ESI = (pop32());
  /* 12d63c27 pop ebx */
  EBX = (pop32());
  /* 12d63c28 mov esp, ebp */
  ESP = (EBP);
  /* 12d63c2a pop ebp */
  EBP = (pop32());
  /* 12d63c2b ret  */
  ESPCHK(0x12d63840u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c30 @ 0x12d63c30 (19 bytes, 9 insns) */
void f_12d63c30(void) {
  FTRACE(0x12d63c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63c31 mov ebp, esp */
  EBP = (ESP);
  /* 12d63c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d63c35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63c38 push eax */
  push32((uint32_t)(EAX));
  /* 12d63c39 call 0x12d63c50 */
  push32(0x12d63c3eu); f_12d63c50();
  /* 12d63c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63c41 pop ebp */
  EBP = (pop32());
  /* 12d63c42 ret  */
  ESPCHK(0x12d63c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c50 @ 0x12d63c50 (342 bytes, 119 insns) */
void f_12d63c50(void) {
  FTRACE(0x12d63c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63c51 mov ebp, esp */
  EBP = (ESP);
  /* 12d63c53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63c56 push ebx */
  push32((uint32_t)(EBX));
  /* 12d63c57 push esi */
  push32((uint32_t)(ESI));
  /* 12d63c58 push edi */
  push32((uint32_t)(EDI));
  /* 12d63c59 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d63c5e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d63c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63c63 je 0x12d63c95 */
  if (C.zf) goto L_12d63c95;
L_12d63c65:;
  /* 12d63c65 call 0x12d63f20 */
  push32(0x12d63c6au); f_12d63f20();
  /* 12d63c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63c6c jne 0x12d63c8f */
  if (!C.zf) goto L_12d63c8f;
  /* 12d63c6e push 0x12d7949c */
  push32((uint32_t)(0x12d7949cu));
  /* 12d63c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63c75 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12d63c7a push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63c7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63c81 call 0x12d61e40 */
  push32(0x12d63c86u); f_12d61e40();
  /* 12d63c86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63c89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63c8c jne 0x12d63c8f */
  if (!C.zf) goto L_12d63c8f;
  /* 12d63c8e int3  */
  x86_unimpl("int3 @ 0x12d63c8e");
L_12d63c8f:;
  /* 12d63c8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63c91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63c93 jne 0x12d63c65 */
  if (!C.zf) goto L_12d63c65;
L_12d63c95:;
  /* 12d63c95 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63c97 call 0x12d66780 */
  push32(0x12d63c9cu); f_12d66780();
  /* 12d63c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d63c9f:;
  /* 12d63c9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63ca2 push edx */
  push32((uint32_t)(EDX));
  /* 12d63ca3 call 0x12d64380 */
  push32(0x12d63ca8u); f_12d64380();
  /* 12d63ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63cad jne 0x12d63cd0 */
  if (!C.zf) goto L_12d63cd0;
  /* 12d63caf push 0x12d795a0 */
  push32((uint32_t)(0x12d795a0u));
  /* 12d63cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63cb6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12d63cbb push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63cc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63cc2 call 0x12d61e40 */
  push32(0x12d63cc7u); f_12d61e40();
  /* 12d63cc7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63cca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63ccd jne 0x12d63cd0 */
  if (!C.zf) goto L_12d63cd0;
  /* 12d63ccf int3  */
  x86_unimpl("int3 @ 0x12d63ccf");
L_12d63cd0:;
  /* 12d63cd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63cd4 jne 0x12d63c9f */
  if (!C.zf) goto L_12d63c9f;
  /* 12d63cd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63cd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63cdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d63cdf:;
  /* 12d63cdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63ce2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63ce5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d63cea cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63ced je 0x12d63d32 */
  if (C.zf) goto L_12d63d32;
  /* 12d63cef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63cf2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63cf6 je 0x12d63d32 */
  if (C.zf) goto L_12d63d32;
  /* 12d63cf8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63cfb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63cfe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d63d03 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d06 je 0x12d63d32 */
  if (C.zf) goto L_12d63d32;
  /* 12d63d08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63d0b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d0f je 0x12d63d32 */
  if (C.zf) goto L_12d63d32;
  /* 12d63d11 push 0x12d79738 */
  push32((uint32_t)(0x12d79738u));
  /* 12d63d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63d18 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12d63d1d push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63d22 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63d24 call 0x12d61e40 */
  push32(0x12d63d29u); f_12d61e40();
  /* 12d63d29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63d2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d2f jne 0x12d63d32 */
  if (!C.zf) goto L_12d63d32;
  /* 12d63d31 int3  */
  x86_unimpl("int3 @ 0x12d63d31");
L_12d63d32:;
  /* 12d63d32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63d34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d63d36 jne 0x12d63cdf */
  if (!C.zf) goto L_12d63cdf;
  /* 12d63d38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63d3b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d3f jne 0x12d63d4e */
  if (!C.zf) goto L_12d63d4e;
  /* 12d63d41 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d45 jne 0x12d63d4e */
  if (!C.zf) goto L_12d63d4e;
  /* 12d63d47 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12d63d4e:;
  /* 12d63d4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63d51 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d55 je 0x12d63d89 */
  if (C.zf) goto L_12d63d89;
L_12d63d57:;
  /* 12d63d57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63d5a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63d5d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d60 je 0x12d63d83 */
  if (C.zf) goto L_12d63d83;
  /* 12d63d62 push 0x12d79680 */
  push32((uint32_t)(0x12d79680u));
  /* 12d63d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63d69 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12d63d6e push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63d73 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63d75 call 0x12d61e40 */
  push32(0x12d63d7au); f_12d61e40();
  /* 12d63d7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63d7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63d80 jne 0x12d63d83 */
  if (!C.zf) goto L_12d63d83;
  /* 12d63d82 int3  */
  x86_unimpl("int3 @ 0x12d63d82");
L_12d63d83:;
  /* 12d63d83 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63d85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63d87 jne 0x12d63d57 */
  if (!C.zf) goto L_12d63d57;
L_12d63d89:;
  /* 12d63d89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d63d8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d63d8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d63d92 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63d94 call 0x12d66820 */
  push32(0x12d63d99u); f_12d66820();
  /* 12d63d99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63d9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63d9f pop edi */
  EDI = (pop32());
  /* 12d63da0 pop esi */
  ESI = (pop32());
  /* 12d63da1 pop ebx */
  EBX = (pop32());
  /* 12d63da2 mov esp, ebp */
  ESP = (EBP);
  /* 12d63da4 pop ebp */
  EBP = (pop32());
  /* 12d63da5 ret  */
  ESPCHK(0x12d63c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db0 @ 0x12d63db0 (28 bytes, 11 insns) */
void f_12d63db0(void) {
  FTRACE(0x12d63db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63db1 mov ebp, esp */
  EBP = (ESP);
  /* 12d63db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63db4 mov eax, dword ptr [0x12d7caa4] */
  EAX = (r32((uint32_t)(0x12d7caa4)));
  /* 12d63db9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d63dbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63dbf mov dword ptr [0x12d7caa4], ecx */
  w32((uint32_t)(0x12d7caa4), (ECX));
  /* 12d63dc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63dc8 mov esp, ebp */
  ESP = (EBP);
  /* 12d63dca pop ebp */
  EBP = (pop32());
  /* 12d63dcb ret  */
  ESPCHK(0x12d63db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd0 @ 0x12d63dd0 (157 bytes, 59 insns) */
void f_12d63dd0(void) {
  FTRACE(0x12d63dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12d63dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63dd4 push ebx */
  push32((uint32_t)(EBX));
  /* 12d63dd5 push esi */
  push32((uint32_t)(ESI));
  /* 12d63dd6 push edi */
  push32((uint32_t)(EDI));
  /* 12d63dd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63dd9 call 0x12d66780 */
  push32(0x12d63ddeu); f_12d66780();
  /* 12d63dde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63de1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63de4 push eax */
  push32((uint32_t)(EAX));
  /* 12d63de5 call 0x12d64380 */
  push32(0x12d63deau); f_12d64380();
  /* 12d63dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63def je 0x12d63e5c */
  if (C.zf) goto L_12d63e5c;
  /* 12d63df1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63df4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63df7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d63dfa:;
  /* 12d63dfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63dfd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63e00 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d63e05 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63e08 je 0x12d63e4d */
  if (C.zf) goto L_12d63e4d;
  /* 12d63e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63e0d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63e11 je 0x12d63e4d */
  if (C.zf) goto L_12d63e4d;
  /* 12d63e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63e16 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d63e19 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d63e1e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63e21 je 0x12d63e4d */
  if (C.zf) goto L_12d63e4d;
  /* 12d63e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63e26 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63e2a je 0x12d63e4d */
  if (C.zf) goto L_12d63e4d;
  /* 12d63e2c push 0x12d79738 */
  push32((uint32_t)(0x12d79738u));
  /* 12d63e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63e33 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12d63e38 push 0x12d79490 */
  push32((uint32_t)(0x12d79490u));
  /* 12d63e3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d63e3f call 0x12d61e40 */
  push32(0x12d63e44u); f_12d61e40();
  /* 12d63e44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63e47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63e4a jne 0x12d63e4d */
  if (!C.zf) goto L_12d63e4d;
  /* 12d63e4c int3  */
  x86_unimpl("int3 @ 0x12d63e4c");
L_12d63e4d:;
  /* 12d63e4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63e4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d63e51 jne 0x12d63dfa */
  if (!C.zf) goto L_12d63dfa;
  /* 12d63e53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63e56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63e59 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12d63e5c:;
  /* 12d63e5c push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63e5e call 0x12d66820 */
  push32(0x12d63e63u); f_12d66820();
  /* 12d63e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63e66 pop edi */
  EDI = (pop32());
  /* 12d63e67 pop esi */
  ESI = (pop32());
  /* 12d63e68 pop ebx */
  EBX = (pop32());
  /* 12d63e69 mov esp, ebp */
  ESP = (EBP);
  /* 12d63e6b pop ebp */
  EBP = (pop32());
  /* 12d63e6c ret  */
  ESPCHK(0x12d63dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x12d63e70 (28 bytes, 11 insns) */
void f_12d63e70(void) {
  FTRACE(0x12d63e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63e71 mov ebp, esp */
  EBP = (ESP);
  /* 12d63e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63e74 mov eax, dword ptr [0x12d7ccb0] */
  EAX = (r32((uint32_t)(0x12d7ccb0)));
  /* 12d63e79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d63e7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63e7f mov dword ptr [0x12d7ccb0], ecx */
  w32((uint32_t)(0x12d7ccb0), (ECX));
  /* 12d63e85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63e88 mov esp, ebp */
  ESP = (EBP);
  /* 12d63e8a pop ebp */
  EBP = (pop32());
  /* 12d63e8b ret  */
  ESPCHK(0x12d63e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e90 @ 0x12d63e90 (136 bytes, 55 insns) */
void f_12d63e90(void) {
  FTRACE(0x12d63e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63e91 mov ebp, esp */
  EBP = (ESP);
  /* 12d63e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d63e94 push ebx */
  push32((uint32_t)(EBX));
  /* 12d63e95 push esi */
  push32((uint32_t)(ESI));
  /* 12d63e96 push edi */
  push32((uint32_t)(EDI));
  /* 12d63e97 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12d63e9e:;
  /* 12d63e9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d63ea1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d63ea4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63ea7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d63eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63eac je 0x12d63f0e */
  if (C.zf) goto L_12d63f0e;
  /* 12d63eae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63eb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d63eb3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d63eb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63eb8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d63ebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63ec1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63ec4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d63ec7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63ec9 je 0x12d63f0c */
  if (C.zf) goto L_12d63f0c;
L_12d63ecb:;
  /* 12d63ecb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d63ece and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d63ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12d63ed4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63ed7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63ed9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12d63edc push edx */
  push32((uint32_t)(EDX));
  /* 12d63edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d63ee0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63ee3 push eax */
  push32((uint32_t)(EAX));
  /* 12d63ee4 push 0x12d7977c */
  push32((uint32_t)(0x12d7977cu));
  /* 12d63ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63eed push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63eef push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63ef1 call 0x12d61e40 */
  push32(0x12d63ef6u); f_12d61e40();
  /* 12d63ef6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63ef9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63efc jne 0x12d63eff */
  if (!C.zf) goto L_12d63eff;
  /* 12d63efe int3  */
  x86_unimpl("int3 @ 0x12d63efe");
L_12d63eff:;
  /* 12d63eff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63f01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63f03 jne 0x12d63ecb */
  if (!C.zf) goto L_12d63ecb;
  /* 12d63f05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d63f0c:;
  /* 12d63f0c jmp 0x12d63e9e */
  goto L_12d63e9e;
L_12d63f0e:;
  /* 12d63f0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d63f11 pop edi */
  EDI = (pop32());
  /* 12d63f12 pop esi */
  ESI = (pop32());
  /* 12d63f13 pop ebx */
  EBX = (pop32());
  /* 12d63f14 mov esp, ebp */
  ESP = (EBP);
  /* 12d63f16 pop ebp */
  EBP = (pop32());
  /* 12d63f17 ret  */
  ESPCHK(0x12d63e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f20 @ 0x12d63f20 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12d63f20(void) {
  FTRACE(0x12d63f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d63f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d63f21 mov ebp, esp */
  EBP = (ESP);
  /* 12d63f23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d63f26 push ebx */
  push32((uint32_t)(EBX));
  /* 12d63f27 push esi */
  push32((uint32_t)(ESI));
  /* 12d63f28 push edi */
  push32((uint32_t)(EDI));
  /* 12d63f29 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d63f30 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d63f35 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d63f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d63f3a jne 0x12d63f46 */
  if (!C.zf) goto L_12d63f46;
  /* 12d63f3c mov eax, 1 */
  EAX = (0x1u);
  /* 12d63f41 jmp 0x12d64278 */
  goto L_12d64278;
L_12d63f46:;
  /* 12d63f46 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d63f48 call 0x12d66780 */
  push32(0x12d63f4du); f_12d66780();
  /* 12d63f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63f50 call 0x12d66f60 */
  push32(0x12d63f55u); f_12d66f60();
  /* 12d63f55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d63f58 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63f5c je 0x12d64069 */
  if (C.zf) goto L_12d64069;
  /* 12d63f62 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63f66 je 0x12d64069 */
  if (C.zf) goto L_12d64069;
  /* 12d63f6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d63f6f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d63f72 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d63f75 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63f78 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d63f7b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63f7f ja 0x12d64032 */
  if ((!C.cf&&!C.zf)) goto L_12d64032;
  /* 12d63f85 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d63f88 jmp dword ptr [eax*4 + 0x12d6427f] */
  switch (EAX) {
    case 0: goto L_12d6400a;
    case 1: goto L_12d63fe2;
    case 2: goto L_12d63fba;
    case 3: goto L_12d63f8f;
    default: x86_unimpl("switch@0x12d63f88 out of table"); return;
  }
L_12d63f8f:;
  /* 12d63f8f push 0x12d798d0 */
  push32((uint32_t)(0x12d798d0u));
  /* 12d63f94 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d63f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63fa1 call 0x12d61e40 */
  push32(0x12d63fa6u); f_12d61e40();
  /* 12d63fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63fa9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63fac jne 0x12d63faf */
  if (!C.zf) goto L_12d63faf;
  /* 12d63fae int3  */
  x86_unimpl("int3 @ 0x12d63fae");
L_12d63faf:;
  /* 12d63faf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d63fb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d63fb3 jne 0x12d63f8f */
  if (!C.zf) goto L_12d63f8f;
  /* 12d63fb5 jmp 0x12d64058 */
  goto L_12d64058;
L_12d63fba:;
  /* 12d63fba push 0x12d798ac */
  push32((uint32_t)(0x12d798acu));
  /* 12d63fbf push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d63fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63fca push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63fcc call 0x12d61e40 */
  push32(0x12d63fd1u); f_12d61e40();
  /* 12d63fd1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63fd7 jne 0x12d63fda */
  if (!C.zf) goto L_12d63fda;
  /* 12d63fd9 int3  */
  x86_unimpl("int3 @ 0x12d63fd9");
L_12d63fda:;
  /* 12d63fda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d63fdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d63fde jne 0x12d63fba */
  if (!C.zf) goto L_12d63fba;
  /* 12d63fe0 jmp 0x12d64058 */
  goto L_12d64058;
L_12d63fe2:;
  /* 12d63fe2 push 0x12d79888 */
  push32((uint32_t)(0x12d79888u));
  /* 12d63fe7 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d63fec push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63fee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d63ff4 call 0x12d61e40 */
  push32(0x12d63ff9u); f_12d61e40();
  /* 12d63ff9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d63ffc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d63fff jne 0x12d64002 */
  if (!C.zf) goto L_12d64002;
  /* 12d64001 int3  */
  x86_unimpl("int3 @ 0x12d64001");
L_12d64002:;
  /* 12d64002 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64006 jne 0x12d63fe2 */
  if (!C.zf) goto L_12d63fe2;
  /* 12d64008 jmp 0x12d64058 */
  goto L_12d64058;
L_12d6400a:;
  /* 12d6400a push 0x12d79864 */
  push32((uint32_t)(0x12d79864u));
  /* 12d6400f push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d64014 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64016 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64018 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6401a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6401c call 0x12d61e40 */
  push32(0x12d64021u); f_12d61e40();
  /* 12d64021 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64024 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64027 jne 0x12d6402a */
  if (!C.zf) goto L_12d6402a;
  /* 12d64029 int3  */
  x86_unimpl("int3 @ 0x12d64029");
L_12d6402a:;
  /* 12d6402a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d6402c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6402e jne 0x12d6400a */
  if (!C.zf) goto L_12d6400a;
  /* 12d64030 jmp 0x12d64058 */
  goto L_12d64058;
L_12d64032:;
  /* 12d64032 push 0x12d79838 */
  push32((uint32_t)(0x12d79838u));
  /* 12d64037 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d6403c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6403e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64040 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64042 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64044 call 0x12d61e40 */
  push32(0x12d64049u); f_12d61e40();
  /* 12d64049 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6404c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6404f jne 0x12d64052 */
  if (!C.zf) goto L_12d64052;
  /* 12d64051 int3  */
  x86_unimpl("int3 @ 0x12d64051");
L_12d64052:;
  /* 12d64052 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d64054 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d64056 jne 0x12d64032 */
  if (!C.zf) goto L_12d64032;
L_12d64058:;
  /* 12d64058 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d6405a call 0x12d66820 */
  push32(0x12d6405fu); f_12d66820();
  /* 12d6405f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64064 jmp 0x12d64278 */
  goto L_12d64278;
L_12d64069:;
  /* 12d64069 mov eax, dword ptr [0x12d7e4cc] */
  EAX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d6406e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d64071 jmp 0x12d6407b */
  goto L_12d6407b;
L_12d64073:;
  /* 12d64073 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64076 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d64078 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d6407b:;
  /* 12d6407b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6407f je 0x12d6426b */
  if (C.zf) goto L_12d6426b;
  /* 12d64085 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d6408c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6408f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d64092 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d64098 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6409b je 0x12d640c0 */
  if (C.zf) goto L_12d640c0;
  /* 12d6409d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d640a0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d640a4 je 0x12d640c0 */
  if (C.zf) goto L_12d640c0;
  /* 12d640a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d640a9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d640ac and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d640b2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d640b5 je 0x12d640c0 */
  if (C.zf) goto L_12d640c0;
  /* 12d640b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d640ba cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d640be jne 0x12d640d8 */
  if (!C.zf) goto L_12d640d8;
L_12d640c0:;
  /* 12d640c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d640c3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d640c6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d640cc mov edx, dword ptr [ecx*4 + 0x12d7caac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7caac)));
  /* 12d640d3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d640d6 jmp 0x12d640df */
  goto L_12d640df;
L_12d640d8:;
  /* 12d640d8 mov dword ptr [ebp - 0x14], 0x12d79830 */
  w32((uint32_t)(EBP + -0x14), (0x12d79830u));
L_12d640df:;
  /* 12d640df push 4 */
  push32((uint32_t)(0x4u));
  /* 12d640e1 mov al, byte ptr [0x12d7caa8] */
  AL = (r8((uint32_t)(0x12d7caa8)));
  /* 12d640e6 push eax */
  push32((uint32_t)(EAX));
  /* 12d640e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d640ea add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d640ed push ecx */
  push32((uint32_t)(ECX));
  /* 12d640ee call 0x12d63e90 */
  push32(0x12d640f3u); f_12d63e90();
  /* 12d640f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d640f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d640f8 jne 0x12d64134 */
  if (!C.zf) goto L_12d64134;
L_12d640fa:;
  /* 12d640fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d640fd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64100 push edx */
  push32((uint32_t)(EDX));
  /* 12d64101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64104 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d64107 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64108 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6410b push edx */
  push32((uint32_t)(EDX));
  /* 12d6410c push 0x12d7970c */
  push32((uint32_t)(0x12d7970cu));
  /* 12d64111 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64113 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64115 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64117 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64119 call 0x12d61e40 */
  push32(0x12d6411eu); f_12d61e40();
  /* 12d6411e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64121 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64124 jne 0x12d64127 */
  if (!C.zf) goto L_12d64127;
  /* 12d64126 int3  */
  x86_unimpl("int3 @ 0x12d64126");
L_12d64127:;
  /* 12d64127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6412b jne 0x12d640fa */
  if (!C.zf) goto L_12d640fa;
  /* 12d6412d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d64134:;
  /* 12d64134 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d64136 mov cl, byte ptr [0x12d7caa8] */
  CL = (r8((uint32_t)(0x12d7caa8)));
  /* 12d6413c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6413d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64140 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d64143 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64146 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12d6414a push edx */
  push32((uint32_t)(EDX));
  /* 12d6414b call 0x12d63e90 */
  push32(0x12d64150u); f_12d63e90();
  /* 12d64150 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64153 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64155 jne 0x12d64191 */
  if (!C.zf) goto L_12d64191;
L_12d64157:;
  /* 12d64157 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6415a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6415d push eax */
  push32((uint32_t)(EAX));
  /* 12d6415e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64161 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d64164 push edx */
  push32((uint32_t)(EDX));
  /* 12d64165 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d64168 push eax */
  push32((uint32_t)(EAX));
  /* 12d64169 push 0x12d796e0 */
  push32((uint32_t)(0x12d796e0u));
  /* 12d6416e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64170 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64172 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64174 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64176 call 0x12d61e40 */
  push32(0x12d6417bu); f_12d61e40();
  /* 12d6417b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6417e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64181 jne 0x12d64184 */
  if (!C.zf) goto L_12d64184;
  /* 12d64183 int3  */
  x86_unimpl("int3 @ 0x12d64183");
L_12d64184:;
  /* 12d64184 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d64186 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d64188 jne 0x12d64157 */
  if (!C.zf) goto L_12d64157;
  /* 12d6418a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d64191:;
  /* 12d64191 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64194 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64198 jne 0x12d641ea */
  if (!C.zf) goto L_12d641ea;
  /* 12d6419a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6419d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d641a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d641a1 mov dl, byte ptr [0x12d7caa9] */
  DL = (r8((uint32_t)(0x12d7caa9)));
  /* 12d641a7 push edx */
  push32((uint32_t)(EDX));
  /* 12d641a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d641ab add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d641ae push eax */
  push32((uint32_t)(EAX));
  /* 12d641af call 0x12d63e90 */
  push32(0x12d641b4u); f_12d63e90();
  /* 12d641b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d641b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d641b9 jne 0x12d641ea */
  if (!C.zf) goto L_12d641ea;
L_12d641bb:;
  /* 12d641bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d641be add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d641c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d641c2 push 0x12d79804 */
  push32((uint32_t)(0x12d79804u));
  /* 12d641c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d641c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d641cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d641cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d641cf call 0x12d61e40 */
  push32(0x12d641d4u); f_12d61e40();
  /* 12d641d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d641d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d641da jne 0x12d641dd */
  if (!C.zf) goto L_12d641dd;
  /* 12d641dc int3  */
  x86_unimpl("int3 @ 0x12d641dc");
L_12d641dd:;
  /* 12d641dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d641df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d641e1 jne 0x12d641bb */
  if (!C.zf) goto L_12d641bb;
  /* 12d641e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d641ea:;
  /* 12d641ea cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d641ee jne 0x12d64266 */
  if (!C.zf) goto L_12d64266;
  /* 12d641f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d641f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d641f7 je 0x12d6422c */
  if (C.zf) goto L_12d6422c;
L_12d641f9:;
  /* 12d641f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d641fc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d641ff push edx */
  push32((uint32_t)(EDX));
  /* 12d64200 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64203 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d64206 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64207 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6420a push edx */
  push32((uint32_t)(EDX));
  /* 12d6420b push 0x12d797e4 */
  push32((uint32_t)(0x12d797e4u));
  /* 12d64210 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64212 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64214 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64216 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64218 call 0x12d61e40 */
  push32(0x12d6421du); f_12d61e40();
  /* 12d6421d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64220 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64223 jne 0x12d64226 */
  if (!C.zf) goto L_12d64226;
  /* 12d64225 int3  */
  x86_unimpl("int3 @ 0x12d64225");
L_12d64226:;
  /* 12d64226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6422a jne 0x12d641f9 */
  if (!C.zf) goto L_12d641f9;
L_12d6422c:;
  /* 12d6422c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6422f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d64232 push edx */
  push32((uint32_t)(EDX));
  /* 12d64233 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64236 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64239 push eax */
  push32((uint32_t)(EAX));
  /* 12d6423a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6423d push ecx */
  push32((uint32_t)(ECX));
  /* 12d6423e push 0x12d797b8 */
  push32((uint32_t)(0x12d797b8u));
  /* 12d64243 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64245 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64247 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64249 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6424b call 0x12d61e40 */
  push32(0x12d64250u); f_12d61e40();
  /* 12d64250 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64253 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64256 jne 0x12d64259 */
  if (!C.zf) goto L_12d64259;
  /* 12d64258 int3  */
  x86_unimpl("int3 @ 0x12d64258");
L_12d64259:;
  /* 12d64259 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6425b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6425d jne 0x12d6422c */
  if (!C.zf) goto L_12d6422c;
  /* 12d6425f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d64266:;
  /* 12d64266 jmp 0x12d64073 */
  goto L_12d64073;
L_12d6426b:;
  /* 12d6426b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d6426d call 0x12d66820 */
  push32(0x12d64272u); f_12d66820();
  /* 12d64272 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64275 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d64278:;
  /* 12d64278 pop edi */
  EDI = (pop32());
  /* 12d64279 pop esi */
  ESI = (pop32());
  /* 12d6427a pop ebx */
  EBX = (pop32());
  /* 12d6427b mov esp, ebp */
  ESP = (EBP);
  /* 12d6427d pop ebp */
  EBP = (pop32());
  /* 12d6427e ret  */
  ESPCHK(0x12d63f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004290 @ 0x12d64290 (34 bytes, 13 insns) */
void f_12d64290(void) {
  FTRACE(0x12d64290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64290 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64291 mov ebp, esp */
  EBP = (ESP);
  /* 12d64293 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64294 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d64299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6429c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d642a0 je 0x12d642ab */
  if (C.zf) goto L_12d642ab;
  /* 12d642a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d642a5 mov dword ptr [0x12d7ca9c], ecx */
  w32((uint32_t)(0x12d7ca9c), (ECX));
L_12d642ab:;
  /* 12d642ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d642ae mov esp, ebp */
  ESP = (EBP);
  /* 12d642b0 pop ebp */
  EBP = (pop32());
  /* 12d642b1 ret  */
  ESPCHK(0x12d64290u, _esp0);
  ESP += 4; return;
}

/* FUN_100042c0 @ 0x12d642c0 (103 bytes, 38 insns) */
void f_12d642c0(void) {
  FTRACE(0x12d642c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d642c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d642c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d642c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d642c4 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d642c9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d642cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d642ce jne 0x12d642d2 */
  if (!C.zf) goto L_12d642d2;
  /* 12d642d0 jmp 0x12d64323 */
  goto L_12d64323;
L_12d642d2:;
  /* 12d642d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d642d4 call 0x12d66780 */
  push32(0x12d642d9u); f_12d66780();
  /* 12d642d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d642dc mov ecx, dword ptr [0x12d7e4cc] */
  ECX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d642e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d642e5 jmp 0x12d642ef */
  goto L_12d642ef;
L_12d642e7:;
  /* 12d642e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d642ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d642ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d642ef:;
  /* 12d642ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d642f3 je 0x12d64319 */
  if (C.zf) goto L_12d64319;
  /* 12d642f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d642f8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d642fb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d64301 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64304 jne 0x12d64317 */
  if (!C.zf) goto L_12d64317;
  /* 12d64306 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64309 push eax */
  push32((uint32_t)(EAX));
  /* 12d6430a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6430d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64310 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64311 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12d64314u);
  /* 12d64314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64317:;
  /* 12d64317 jmp 0x12d642e7 */
  goto L_12d642e7;
L_12d64319:;
  /* 12d64319 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d6431b call 0x12d66820 */
  push32(0x12d64320u); f_12d66820();
  /* 12d64320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64323:;
  /* 12d64323 mov esp, ebp */
  ESP = (EBP);
  /* 12d64325 pop ebp */
  EBP = (pop32());
  /* 12d64326 ret  */
  ESPCHK(0x12d642c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12d64330 (75 bytes, 28 insns) */
void f_12d64330(void) {
  FTRACE(0x12d64330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64330 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64331 mov ebp, esp */
  EBP = (ESP);
  /* 12d64333 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64334 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64338 je 0x12d6436d */
  if (C.zf) goto L_12d6436d;
  /* 12d6433a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6433d push eax */
  push32((uint32_t)(EAX));
  /* 12d6433e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64341 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64342 call dword ptr [0x12d8023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8023c))), 0x12d64348u);
  /* 12d64348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6434a jne 0x12d6436d */
  if (!C.zf) goto L_12d6436d;
  /* 12d6434c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64350 je 0x12d64364 */
  if (C.zf) goto L_12d64364;
  /* 12d64352 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64355 push edx */
  push32((uint32_t)(EDX));
  /* 12d64356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64359 push eax */
  push32((uint32_t)(EAX));
  /* 12d6435a call dword ptr [0x12d802e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e8))), 0x12d64360u);
  /* 12d64360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64362 jne 0x12d6436d */
  if (!C.zf) goto L_12d6436d;
L_12d64364:;
  /* 12d64364 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d6436b jmp 0x12d64374 */
  goto L_12d64374;
L_12d6436d:;
  /* 12d6436d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d64374:;
  /* 12d64374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64377 mov esp, ebp */
  ESP = (EBP);
  /* 12d64379 pop ebp */
  EBP = (pop32());
  /* 12d6437a ret  */
  ESPCHK(0x12d64330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x12d64380 (134 bytes, 50 insns) */
void f_12d64380(void) {
  FTRACE(0x12d64380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64380 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64381 mov ebp, esp */
  EBP = (ESP);
  /* 12d64383 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64384 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64388 jne 0x12d6438e */
  if (!C.zf) goto L_12d6438e;
  /* 12d6438a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6438c jmp 0x12d64402 */
  goto L_12d64402;
L_12d6438e:;
  /* 12d6438e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d64390 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d64392 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64395 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64398 push eax */
  push32((uint32_t)(EAX));
  /* 12d64399 call 0x12d64330 */
  push32(0x12d6439eu); f_12d64330();
  /* 12d6439e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d643a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d643a3 jne 0x12d643a9 */
  if (!C.zf) goto L_12d643a9;
  /* 12d643a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d643a7 jmp 0x12d64402 */
  goto L_12d64402;
L_12d643a9:;
  /* 12d643a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d643ac sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d643af push ecx */
  push32((uint32_t)(ECX));
  /* 12d643b0 call 0x12d67080 */
  push32(0x12d643b5u); f_12d67080();
  /* 12d643b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d643b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d643bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d643bf je 0x12d643d6 */
  if (C.zf) goto L_12d643d6;
  /* 12d643c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d643c4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d643c7 push edx */
  push32((uint32_t)(EDX));
  /* 12d643c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d643cb push eax */
  push32((uint32_t)(EAX));
  /* 12d643cc call 0x12d670e0 */
  push32(0x12d643d1u); f_12d670e0();
  /* 12d643d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d643d4 jmp 0x12d64402 */
  goto L_12d64402;
L_12d643d6:;
  /* 12d643d6 mov ecx, dword ptr [0x12d7e480] */
  ECX = (r32((uint32_t)(0x12d7e480)));
  /* 12d643dc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d643e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d643e4 je 0x12d643ed */
  if (C.zf) goto L_12d643ed;
  /* 12d643e6 mov eax, 1 */
  EAX = (0x1u);
  /* 12d643eb jmp 0x12d64402 */
  goto L_12d64402;
L_12d643ed:;
  /* 12d643ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d643f0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d643f3 push edx */
  push32((uint32_t)(EDX));
  /* 12d643f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d643f6 mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d643fb push eax */
  push32((uint32_t)(EAX));
  /* 12d643fc call dword ptr [0x12d80240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80240))), 0x12d64402u);
L_12d64402:;
  /* 12d64402 mov esp, ebp */
  ESP = (EBP);
  /* 12d64404 pop ebp */
  EBP = (pop32());
  /* 12d64405 ret  */
  ESPCHK(0x12d64380u, _esp0);
  ESP += 4; return;
}

/* FUN_10004410 @ 0x12d64410 (227 bytes, 80 insns) */
void f_12d64410(void) {
  FTRACE(0x12d64410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64410 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64411 mov ebp, esp */
  EBP = (ESP);
  /* 12d64413 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64417 push eax */
  push32((uint32_t)(EAX));
  /* 12d64418 call 0x12d64380 */
  push32(0x12d6441du); f_12d64380();
  /* 12d6441d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64422 jne 0x12d6442b */
  if (!C.zf) goto L_12d6442b;
  /* 12d64424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64426 jmp 0x12d644ef */
  goto L_12d644ef;
L_12d6442b:;
  /* 12d6442b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d6442d call 0x12d66780 */
  push32(0x12d64432u); f_12d66780();
  /* 12d64432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64435 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64438 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6443b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6443e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64441 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d64444 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d64449 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6444c je 0x12d64470 */
  if (C.zf) goto L_12d64470;
  /* 12d6444e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64451 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64455 je 0x12d64470 */
  if (C.zf) goto L_12d64470;
  /* 12d64457 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6445a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d6445d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d64462 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64465 je 0x12d64470 */
  if (C.zf) goto L_12d64470;
  /* 12d64467 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6446a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6446e jne 0x12d644e3 */
  if (!C.zf) goto L_12d644e3;
L_12d64470:;
  /* 12d64470 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d64472 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64475 push edx */
  push32((uint32_t)(EDX));
  /* 12d64476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64479 push eax */
  push32((uint32_t)(EAX));
  /* 12d6447a call 0x12d64330 */
  push32(0x12d6447fu); f_12d64330();
  /* 12d6447f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64482 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64484 je 0x12d644e3 */
  if (C.zf) goto L_12d644e3;
  /* 12d64486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64489 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d6448c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6448f jne 0x12d644e3 */
  if (!C.zf) goto L_12d644e3;
  /* 12d64491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64494 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d64497 cmp ecx, dword ptr [0x12d7caa0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d7caa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6449d jg 0x12d644e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d644e3;
  /* 12d6449f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d644a3 je 0x12d644b0 */
  if (C.zf) goto L_12d644b0;
  /* 12d644a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d644a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d644ab mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d644ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d644b0:;
  /* 12d644b0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d644b4 je 0x12d644c1 */
  if (C.zf) goto L_12d644c1;
  /* 12d644b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d644b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d644bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d644bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d644c1:;
  /* 12d644c1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d644c5 je 0x12d644d2 */
  if (C.zf) goto L_12d644d2;
  /* 12d644c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d644ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d644cd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d644d0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d644d2:;
  /* 12d644d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d644d4 call 0x12d66820 */
  push32(0x12d644d9u); f_12d66820();
  /* 12d644d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d644dc mov eax, 1 */
  EAX = (0x1u);
  /* 12d644e1 jmp 0x12d644ef */
  goto L_12d644ef;
L_12d644e3:;
  /* 12d644e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d644e5 call 0x12d66820 */
  push32(0x12d644eau); f_12d66820();
  /* 12d644ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d644ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d644ef:;
  /* 12d644ef mov esp, ebp */
  ESP = (EBP);
  /* 12d644f1 pop ebp */
  EBP = (pop32());
  /* 12d644f2 ret  */
  ESPCHK(0x12d64410u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x12d64500 (28 bytes, 11 insns) */
void f_12d64500(void) {
  FTRACE(0x12d64500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64500 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64501 mov ebp, esp */
  EBP = (ESP);
  /* 12d64503 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64504 mov eax, dword ptr [0x12d7fe38] */
  EAX = (r32((uint32_t)(0x12d7fe38)));
  /* 12d64509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6450c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6450f mov dword ptr [0x12d7fe38], ecx */
  w32((uint32_t)(0x12d7fe38), (ECX));
  /* 12d64515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64518 mov esp, ebp */
  ESP = (EBP);
  /* 12d6451a pop ebp */
  EBP = (pop32());
  /* 12d6451b ret  */
  ESPCHK(0x12d64500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004520 @ 0x12d64520 (362 bytes, 116 insns) */
void f_12d64520(void) {
  FTRACE(0x12d64520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64521 mov ebp, esp */
  EBP = (ESP);
  /* 12d64523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64526 push ebx */
  push32((uint32_t)(EBX));
  /* 12d64527 push esi */
  push32((uint32_t)(ESI));
  /* 12d64528 push edi */
  push32((uint32_t)(EDI));
  /* 12d64529 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6452d jne 0x12d6455a */
  if (!C.zf) goto L_12d6455a;
L_12d6452f:;
  /* 12d6452f push 0x12d79918 */
  push32((uint32_t)(0x12d79918u));
  /* 12d64534 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d64539 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6453b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6453d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6453f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64541 call 0x12d61e40 */
  push32(0x12d64546u); f_12d61e40();
  /* 12d64546 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64549 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6454c jne 0x12d6454f */
  if (!C.zf) goto L_12d6454f;
  /* 12d6454e int3  */
  x86_unimpl("int3 @ 0x12d6454e");
L_12d6454f:;
  /* 12d6454f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64553 jne 0x12d6452f */
  if (!C.zf) goto L_12d6452f;
  /* 12d64555 jmp 0x12d64683 */
  goto L_12d64683;
L_12d6455a:;
  /* 12d6455a push 9 */
  push32((uint32_t)(0x9u));
  /* 12d6455c call 0x12d66780 */
  push32(0x12d64561u); f_12d66780();
  /* 12d64561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64564 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64567 mov edx, dword ptr [0x12d7e4cc] */
  EDX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d6456d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d6456f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d64576 jmp 0x12d64581 */
  goto L_12d64581;
L_12d64578:;
  /* 12d64578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6457b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6457e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d64581:;
  /* 12d64581 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64585 jge 0x12d645a5 */
  if ((C.sf==C.of)) goto L_12d645a5;
  /* 12d64587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6458a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6458d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12d64595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64598 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6459b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12d645a3 jmp 0x12d64578 */
  goto L_12d64578;
L_12d645a5:;
  /* 12d645a5 mov edx, dword ptr [0x12d7e4cc] */
  EDX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d645ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d645ae jmp 0x12d645b8 */
  goto L_12d645b8;
L_12d645b0:;
  /* 12d645b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d645b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d645b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d645b8:;
  /* 12d645b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d645bc je 0x12d64661 */
  if (C.zf) goto L_12d64661;
  /* 12d645c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d645c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d645c8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d645cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d645cf jl 0x12d64637 */
  if ((C.sf!=C.of)) goto L_12d64637;
  /* 12d645d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d645d4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d645d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d645dd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d645e0 jge 0x12d64637 */
  if ((C.sf==C.of)) goto L_12d64637;
  /* 12d645e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d645e5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d645e8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d645ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d645f1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12d645f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d645f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d645fb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d645fe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d64604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64607 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12d6460b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6460e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d64611 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d64616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64619 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12d6461d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64620 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64623 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64626 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d64629 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6462e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64631 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12d64635 jmp 0x12d6465c */
  goto L_12d6465c;
L_12d64637:;
  /* 12d64637 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6463a push edx */
  push32((uint32_t)(EDX));
  /* 12d6463b push 0x12d798f4 */
  push32((uint32_t)(0x12d798f4u));
  /* 12d64640 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64644 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64646 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64648 call 0x12d61e40 */
  push32(0x12d6464du); f_12d61e40();
  /* 12d6464d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64650 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64653 jne 0x12d64656 */
  if (!C.zf) goto L_12d64656;
  /* 12d64655 int3  */
  x86_unimpl("int3 @ 0x12d64655");
L_12d64656:;
  /* 12d64656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6465a jne 0x12d64637 */
  if (!C.zf) goto L_12d64637;
L_12d6465c:;
  /* 12d6465c jmp 0x12d645b0 */
  goto L_12d645b0;
L_12d64661:;
  /* 12d64661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64664 mov edx, dword ptr [0x12d7e4d4] */
  EDX = (r32((uint32_t)(0x12d7e4d4)));
  /* 12d6466a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12d6466d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64670 mov ecx, dword ptr [0x12d7e4c8] */
  ECX = (r32((uint32_t)(0x12d7e4c8)));
  /* 12d64676 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12d64679 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d6467b call 0x12d66820 */
  push32(0x12d64680u); f_12d66820();
  /* 12d64680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64683:;
  /* 12d64683 pop edi */
  EDI = (pop32());
  /* 12d64684 pop esi */
  ESI = (pop32());
  /* 12d64685 pop ebx */
  EBX = (pop32());
  /* 12d64686 mov esp, ebp */
  ESP = (EBP);
  /* 12d64688 pop ebp */
  EBP = (pop32());
  /* 12d64689 ret  */
  ESPCHK(0x12d64520u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x12d64690 (291 bytes, 95 insns) */
void f_12d64690(void) {
  FTRACE(0x12d64690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64690 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64691 mov ebp, esp */
  EBP = (ESP);
  /* 12d64693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64696 push ebx */
  push32((uint32_t)(EBX));
  /* 12d64697 push esi */
  push32((uint32_t)(ESI));
  /* 12d64698 push edi */
  push32((uint32_t)(EDI));
  /* 12d64699 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d646a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d646a4 je 0x12d646b2 */
  if (C.zf) goto L_12d646b2;
  /* 12d646a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d646aa je 0x12d646b2 */
  if (C.zf) goto L_12d646b2;
  /* 12d646ac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d646b0 jne 0x12d646e0 */
  if (!C.zf) goto L_12d646e0;
L_12d646b2:;
  /* 12d646b2 push 0x12d79940 */
  push32((uint32_t)(0x12d79940u));
  /* 12d646b7 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d646bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d646be push 0 */
  push32((uint32_t)(0x0u));
  /* 12d646c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d646c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d646c4 call 0x12d61e40 */
  push32(0x12d646c9u); f_12d61e40();
  /* 12d646c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d646cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d646cf jne 0x12d646d2 */
  if (!C.zf) goto L_12d646d2;
  /* 12d646d1 int3  */
  x86_unimpl("int3 @ 0x12d646d1");
L_12d646d2:;
  /* 12d646d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d646d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d646d6 jne 0x12d646b2 */
  if (!C.zf) goto L_12d646b2;
  /* 12d646d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d646db jmp 0x12d647ac */
  goto L_12d647ac;
L_12d646e0:;
  /* 12d646e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d646e7 jmp 0x12d646f2 */
  goto L_12d646f2;
L_12d646e9:;
  /* 12d646e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d646ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d646ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d646f2:;
  /* 12d646f2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d646f6 jge 0x12d6477c */
  if ((C.sf==C.of)) goto L_12d6477c;
  /* 12d646fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d646ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64702 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64705 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64708 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12d6470c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64716 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12d6471a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6471d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64720 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64723 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64726 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12d6472a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6472e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64731 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64734 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12d64738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6473b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6473e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64743 jne 0x12d64752 */
  if (!C.zf) goto L_12d64752;
  /* 12d64745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64748 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6474b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64750 je 0x12d64777 */
  if (C.zf) goto L_12d64777;
L_12d64752:;
  /* 12d64752 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64756 je 0x12d64777 */
  if (C.zf) goto L_12d64777;
  /* 12d64758 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6475c jne 0x12d64770 */
  if (!C.zf) goto L_12d64770;
  /* 12d6475e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64762 jne 0x12d64777 */
  if (!C.zf) goto L_12d64777;
  /* 12d64764 mov eax, dword ptr [0x12d7ca9c] */
  EAX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d64769 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12d6476c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6476e je 0x12d64777 */
  if (C.zf) goto L_12d64777;
L_12d64770:;
  /* 12d64770 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12d64777:;
  /* 12d64777 jmp 0x12d646e9 */
  goto L_12d646e9;
L_12d6477c:;
  /* 12d6477c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6477f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64782 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12d64785 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6478b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12d6478e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64791 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64794 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12d64797 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6479a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6479d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12d647a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d647a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d647a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d647ac:;
  /* 12d647ac pop edi */
  EDI = (pop32());
  /* 12d647ad pop esi */
  ESI = (pop32());
  /* 12d647ae pop ebx */
  EBX = (pop32());
  /* 12d647af mov esp, ebp */
  ESP = (EBP);
  /* 12d647b1 pop ebp */
  EBP = (pop32());
  /* 12d647b2 ret  */
  ESPCHK(0x12d64690u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x12d647c0 (697 bytes, 253 insns) */
void f_12d647c0(void) {
  FTRACE(0x12d647c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d647c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d647c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d647c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d647c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d647c7 push esi */
  push32((uint32_t)(ESI));
  /* 12d647c8 push edi */
  push32((uint32_t)(EDI));
  /* 12d647c9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d647d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d647d2 call 0x12d66780 */
  push32(0x12d647d7u); f_12d66780();
  /* 12d647d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d647da:;
  /* 12d647da push 0x12d79a38 */
  push32((uint32_t)(0x12d79a38u));
  /* 12d647df push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d647e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d647e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d647e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d647ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d647ec call 0x12d61e40 */
  push32(0x12d647f1u); f_12d61e40();
  /* 12d647f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d647f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d647f7 jne 0x12d647fa */
  if (!C.zf) goto L_12d647fa;
  /* 12d647f9 int3  */
  x86_unimpl("int3 @ 0x12d647f9");
L_12d647fa:;
  /* 12d647fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d647fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d647fe jne 0x12d647da */
  if (!C.zf) goto L_12d647da;
  /* 12d64800 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64804 je 0x12d6480e */
  if (C.zf) goto L_12d6480e;
  /* 12d64806 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64809 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6480b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d6480e:;
  /* 12d6480e mov eax, dword ptr [0x12d7e4cc] */
  EAX = (r32((uint32_t)(0x12d7e4cc)));
  /* 12d64813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d64816 jmp 0x12d64820 */
  goto L_12d64820;
L_12d64818:;
  /* 12d64818 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6481b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6481d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d64820:;
  /* 12d64820 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64824 je 0x12d64a42 */
  if (C.zf) goto L_12d64a42;
  /* 12d6482a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6482d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64830 je 0x12d64a42 */
  if (C.zf) goto L_12d64a42;
  /* 12d64836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64839 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d6483c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d64842 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64845 je 0x12d64874 */
  if (C.zf) goto L_12d64874;
  /* 12d64847 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6484a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d6484d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d64853 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d64855 je 0x12d64874 */
  if (C.zf) goto L_12d64874;
  /* 12d64857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6485a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d6485d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d64862 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64865 jne 0x12d64879 */
  if (!C.zf) goto L_12d64879;
  /* 12d64867 mov ecx, dword ptr [0x12d7ca9c] */
  ECX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d6486d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12d64870 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d64872 jne 0x12d64879 */
  if (!C.zf) goto L_12d64879;
L_12d64874:;
  /* 12d64874 jmp 0x12d64a3d */
  goto L_12d64a3d;
L_12d64879:;
  /* 12d64879 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6487c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64880 je 0x12d648f2 */
  if (C.zf) goto L_12d648f2;
  /* 12d64882 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64884 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d64886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64889 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d6488c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6488d call 0x12d64330 */
  push32(0x12d64892u); f_12d64330();
  /* 12d64892 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64897 jne 0x12d648c3 */
  if (!C.zf) goto L_12d648c3;
L_12d64899:;
  /* 12d64899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6489c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d6489f push eax */
  push32((uint32_t)(EAX));
  /* 12d648a0 push 0x12d79a24 */
  push32((uint32_t)(0x12d79a24u));
  /* 12d648a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648ad call 0x12d61e40 */
  push32(0x12d648b2u); f_12d61e40();
  /* 12d648b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d648b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d648b8 jne 0x12d648bb */
  if (!C.zf) goto L_12d648bb;
  /* 12d648ba int3  */
  x86_unimpl("int3 @ 0x12d648ba");
L_12d648bb:;
  /* 12d648bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d648bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d648bf jne 0x12d64899 */
  if (!C.zf) goto L_12d64899;
  /* 12d648c1 jmp 0x12d648f2 */
  goto L_12d648f2;
L_12d648c3:;
  /* 12d648c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d648c6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d648c9 push eax */
  push32((uint32_t)(EAX));
  /* 12d648ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d648cd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d648d0 push edx */
  push32((uint32_t)(EDX));
  /* 12d648d1 push 0x12d79a18 */
  push32((uint32_t)(0x12d79a18u));
  /* 12d648d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648da push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d648de call 0x12d61e40 */
  push32(0x12d648e3u); f_12d61e40();
  /* 12d648e3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d648e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d648e9 jne 0x12d648ec */
  if (!C.zf) goto L_12d648ec;
  /* 12d648eb int3  */
  x86_unimpl("int3 @ 0x12d648eb");
L_12d648ec:;
  /* 12d648ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d648ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d648f0 jne 0x12d648c3 */
  if (!C.zf) goto L_12d648c3;
L_12d648f2:;
  /* 12d648f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d648f5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d648f8 push edx */
  push32((uint32_t)(EDX));
  /* 12d648f9 push 0x12d79a10 */
  push32((uint32_t)(0x12d79a10u));
  /* 12d648fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64900 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64902 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64904 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64906 call 0x12d61e40 */
  push32(0x12d6490bu); f_12d61e40();
  /* 12d6490b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6490e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64911 jne 0x12d64914 */
  if (!C.zf) goto L_12d64914;
  /* 12d64913 int3  */
  x86_unimpl("int3 @ 0x12d64913");
L_12d64914:;
  /* 12d64914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64918 jne 0x12d648f2 */
  if (!C.zf) goto L_12d648f2;
  /* 12d6491a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6491d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d64920 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d64926 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64929 jne 0x12d6499c */
  if (!C.zf) goto L_12d6499c;
L_12d6492b:;
  /* 12d6492b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6492e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d64931 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64935 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d64938 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d6493b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d64940 push eax */
  push32((uint32_t)(EAX));
  /* 12d64941 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64944 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64947 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64948 push 0x12d799dc */
  push32((uint32_t)(0x12d799dcu));
  /* 12d6494d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6494f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64951 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64955 call 0x12d61e40 */
  push32(0x12d6495au); f_12d61e40();
  /* 12d6495a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6495d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64960 jne 0x12d64963 */
  if (!C.zf) goto L_12d64963;
  /* 12d64962 int3  */
  x86_unimpl("int3 @ 0x12d64962");
L_12d64963:;
  /* 12d64963 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d64965 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d64967 jne 0x12d6492b */
  if (!C.zf) goto L_12d6492b;
  /* 12d64969 cmp dword ptr [0x12d7fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64970 je 0x12d6498b */
  if (C.zf) goto L_12d6498b;
  /* 12d64972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64975 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d64978 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64979 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6497c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6497f push edx */
  push32((uint32_t)(EDX));
  /* 12d64980 call dword ptr [0x12d7fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7fe38))), 0x12d64986u);
  /* 12d64986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64989 jmp 0x12d64997 */
  goto L_12d64997;
L_12d6498b:;
  /* 12d6498b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6498e push eax */
  push32((uint32_t)(EAX));
  /* 12d6498f call 0x12d64a80 */
  push32(0x12d64994u); f_12d64a80();
  /* 12d64994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64997:;
  /* 12d64997 jmp 0x12d64a3d */
  goto L_12d64a3d;
L_12d6499c:;
  /* 12d6499c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6499f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d649a3 jne 0x12d649e2 */
  if (!C.zf) goto L_12d649e2;
L_12d649a5:;
  /* 12d649a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d649a8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d649ab push eax */
  push32((uint32_t)(EAX));
  /* 12d649ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d649af add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d649b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d649b3 push 0x12d799b4 */
  push32((uint32_t)(0x12d799b4u));
  /* 12d649b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d649ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12d649bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d649be push 0 */
  push32((uint32_t)(0x0u));
  /* 12d649c0 call 0x12d61e40 */
  push32(0x12d649c5u); f_12d61e40();
  /* 12d649c5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d649c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d649cb jne 0x12d649ce */
  if (!C.zf) goto L_12d649ce;
  /* 12d649cd int3  */
  x86_unimpl("int3 @ 0x12d649cd");
L_12d649ce:;
  /* 12d649ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d649d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d649d2 jne 0x12d649a5 */
  if (!C.zf) goto L_12d649a5;
  /* 12d649d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d649d7 push eax */
  push32((uint32_t)(EAX));
  /* 12d649d8 call 0x12d64a80 */
  push32(0x12d649ddu); f_12d64a80();
  /* 12d649dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d649e0 jmp 0x12d64a3d */
  goto L_12d64a3d;
L_12d649e2:;
  /* 12d649e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d649e5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d649e8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d649ee cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d649f1 jne 0x12d64a3d */
  if (!C.zf) goto L_12d64a3d;
L_12d649f3:;
  /* 12d649f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d649f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d649f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d649fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d649fd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d64a00 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d64a03 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d64a08 push eax */
  push32((uint32_t)(EAX));
  /* 12d64a09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64a0c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64a0f push ecx */
  push32((uint32_t)(ECX));
  /* 12d64a10 push 0x12d79980 */
  push32((uint32_t)(0x12d79980u));
  /* 12d64a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a1d call 0x12d61e40 */
  push32(0x12d64a22u); f_12d61e40();
  /* 12d64a22 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64a25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64a28 jne 0x12d64a2b */
  if (!C.zf) goto L_12d64a2b;
  /* 12d64a2a int3  */
  x86_unimpl("int3 @ 0x12d64a2a");
L_12d64a2b:;
  /* 12d64a2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d64a2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d64a2f jne 0x12d649f3 */
  if (!C.zf) goto L_12d649f3;
  /* 12d64a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64a34 push eax */
  push32((uint32_t)(EAX));
  /* 12d64a35 call 0x12d64a80 */
  push32(0x12d64a3au); f_12d64a80();
  /* 12d64a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64a3d:;
  /* 12d64a3d jmp 0x12d64818 */
  goto L_12d64818;
L_12d64a42:;
  /* 12d64a42 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d64a44 call 0x12d66820 */
  push32(0x12d64a49u); f_12d66820();
  /* 12d64a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64a4c:;
  /* 12d64a4c push 0x12d79968 */
  push32((uint32_t)(0x12d79968u));
  /* 12d64a51 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d64a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64a5e call 0x12d61e40 */
  push32(0x12d64a63u); f_12d61e40();
  /* 12d64a63 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64a66 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64a69 jne 0x12d64a6c */
  if (!C.zf) goto L_12d64a6c;
  /* 12d64a6b int3  */
  x86_unimpl("int3 @ 0x12d64a6b");
L_12d64a6c:;
  /* 12d64a6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d64a6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d64a70 jne 0x12d64a4c */
  if (!C.zf) goto L_12d64a4c;
  /* 12d64a72 pop edi */
  EDI = (pop32());
  /* 12d64a73 pop esi */
  ESI = (pop32());
  /* 12d64a74 pop ebx */
  EBX = (pop32());
  /* 12d64a75 mov esp, ebp */
  ESP = (EBP);
  /* 12d64a77 pop ebp */
  EBP = (pop32());
  /* 12d64a78 ret  */
  ESPCHK(0x12d647c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x12d64a80 (276 bytes, 89 insns) */
void f_12d64a80(void) {
  FTRACE(0x12d64a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64a81 mov ebp, esp */
  EBP = (ESP);
  /* 12d64a83 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64a86 push ebx */
  push32((uint32_t)(EBX));
  /* 12d64a87 push esi */
  push32((uint32_t)(ESI));
  /* 12d64a88 push edi */
  push32((uint32_t)(EDI));
  /* 12d64a89 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12d64a90 jmp 0x12d64a9b */
  goto L_12d64a9b;
L_12d64a92:;
  /* 12d64a92 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d64a95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64a98 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12d64a9b:;
  /* 12d64a9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64a9e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64aa2 jge 0x12d64aaf */
  if ((C.sf==C.of)) goto L_12d64aaf;
  /* 12d64aa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64aa7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d64aaa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12d64aad jmp 0x12d64ab6 */
  goto L_12d64ab6;
L_12d64aaf:;
  /* 12d64aaf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12d64ab6:;
  /* 12d64ab6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d64ab9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64abc jge 0x12d64b5c */
  if ((C.sf==C.of)) goto L_12d64b5c;
  /* 12d64ac2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64ac5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64ac8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12d64acb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12d64ace cmp dword ptr [0x12d7cec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7cec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64ad5 jle 0x12d64af3 */
  if ((C.zf||C.sf!=C.of)) goto L_12d64af3;
  /* 12d64ad7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12d64adc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d64adf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d64ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64ae6 call 0x12d68d90 */
  push32(0x12d64aebu); f_12d68d90();
  /* 12d64aeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64aee mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12d64af1 jmp 0x12d64b10 */
  goto L_12d64b10;
L_12d64af3:;
  /* 12d64af3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d64af6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d64afc mov eax, dword ptr [0x12d7ccb8] */
  EAX = (r32((uint32_t)(0x12d7ccb8)));
  /* 12d64b01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d64b03 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d64b07 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12d64b0d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12d64b10:;
  /* 12d64b10 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64b14 je 0x12d64b24 */
  if (C.zf) goto L_12d64b24;
  /* 12d64b16 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d64b19 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d64b1f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12d64b22 jmp 0x12d64b2b */
  goto L_12d64b2b;
L_12d64b24:;
  /* 12d64b24 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12d64b2b:;
  /* 12d64b2b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d64b2e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12d64b31 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12d64b35 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d64b38 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d64b3e push edx */
  push32((uint32_t)(EDX));
  /* 12d64b3f push 0x12d79a5c */
  push32((uint32_t)(0x12d79a5cu));
  /* 12d64b44 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d64b47 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d64b4a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12d64b4e push ecx */
  push32((uint32_t)(ECX));
  /* 12d64b4f call 0x12d68c90 */
  push32(0x12d64b54u); f_12d68c90();
  /* 12d64b54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64b57 jmp 0x12d64a92 */
  goto L_12d64a92;
L_12d64b5c:;
  /* 12d64b5c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d64b5f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12d64b64:;
  /* 12d64b64 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12d64b67 push eax */
  push32((uint32_t)(EAX));
  /* 12d64b68 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12d64b6b push ecx */
  push32((uint32_t)(ECX));
  /* 12d64b6c push 0x12d79a4c */
  push32((uint32_t)(0x12d79a4cu));
  /* 12d64b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64b79 call 0x12d61e40 */
  push32(0x12d64b7eu); f_12d61e40();
  /* 12d64b7e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64b81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64b84 jne 0x12d64b87 */
  if (!C.zf) goto L_12d64b87;
  /* 12d64b86 int3  */
  x86_unimpl("int3 @ 0x12d64b86");
L_12d64b87:;
  /* 12d64b87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d64b89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d64b8b jne 0x12d64b64 */
  if (!C.zf) goto L_12d64b64;
  /* 12d64b8d pop edi */
  EDI = (pop32());
  /* 12d64b8e pop esi */
  ESI = (pop32());
  /* 12d64b8f pop ebx */
  EBX = (pop32());
  /* 12d64b90 mov esp, ebp */
  ESP = (EBP);
  /* 12d64b92 pop ebp */
  EBP = (pop32());
  /* 12d64b93 ret  */
  ESPCHK(0x12d64a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x12d64ba0 (116 bytes, 46 insns) */
void f_12d64ba0(void) {
  FTRACE(0x12d64ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12d64ba3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d64ba7 push esi */
  push32((uint32_t)(ESI));
  /* 12d64ba8 push edi */
  push32((uint32_t)(EDI));
  /* 12d64ba9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12d64bac push eax */
  push32((uint32_t)(EAX));
  /* 12d64bad call 0x12d64520 */
  push32(0x12d64bb2u); f_12d64520();
  /* 12d64bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64bb5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64bb9 jne 0x12d64bd4 */
  if (!C.zf) goto L_12d64bd4;
  /* 12d64bbb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64bbf jne 0x12d64bd4 */
  if (!C.zf) goto L_12d64bd4;
  /* 12d64bc1 mov ecx, dword ptr [0x12d7ca9c] */
  ECX = (r32((uint32_t)(0x12d7ca9c)));
  /* 12d64bc7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12d64bca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d64bcc je 0x12d64c0b */
  if (C.zf) goto L_12d64c0b;
  /* 12d64bce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64bd2 je 0x12d64c0b */
  if (C.zf) goto L_12d64c0b;
L_12d64bd4:;
  /* 12d64bd4 push 0x12d79a64 */
  push32((uint32_t)(0x12d79a64u));
  /* 12d64bd9 push 0x12d79430 */
  push32((uint32_t)(0x12d79430u));
  /* 12d64bde push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64be6 call 0x12d61e40 */
  push32(0x12d64bebu); f_12d61e40();
  /* 12d64beb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64bee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64bf1 jne 0x12d64bf4 */
  if (!C.zf) goto L_12d64bf4;
  /* 12d64bf3 int3  */
  x86_unimpl("int3 @ 0x12d64bf3");
L_12d64bf4:;
  /* 12d64bf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d64bf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d64bf8 jne 0x12d64bd4 */
  if (!C.zf) goto L_12d64bd4;
  /* 12d64bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64bfc call 0x12d647c0 */
  push32(0x12d64c01u); f_12d647c0();
  /* 12d64c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64c04 mov eax, 1 */
  EAX = (0x1u);
  /* 12d64c09 jmp 0x12d64c0d */
  goto L_12d64c0d;
L_12d64c0b:;
  /* 12d64c0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d64c0d:;
  /* 12d64c0d pop edi */
  EDI = (pop32());
  /* 12d64c0e pop esi */
  ESI = (pop32());
  /* 12d64c0f pop ebx */
  EBX = (pop32());
  /* 12d64c10 mov esp, ebp */
  ESP = (EBP);
  /* 12d64c12 pop ebp */
  EBP = (pop32());
  /* 12d64c13 ret  */
  ESPCHK(0x12d64ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x12d64c20 (197 bytes, 79 insns) */
void f_12d64c20(void) {
  FTRACE(0x12d64c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64c21 mov ebp, esp */
  EBP = (ESP);
  /* 12d64c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64c24 push ebx */
  push32((uint32_t)(EBX));
  /* 12d64c25 push esi */
  push32((uint32_t)(ESI));
  /* 12d64c26 push edi */
  push32((uint32_t)(EDI));
  /* 12d64c27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64c2b jne 0x12d64c32 */
  if (!C.zf) goto L_12d64c32;
  /* 12d64c2d jmp 0x12d64cde */
  goto L_12d64cde;
L_12d64c32:;
  /* 12d64c32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d64c39 jmp 0x12d64c44 */
  goto L_12d64c44;
L_12d64c3b:;
  /* 12d64c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64c3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64c41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d64c44:;
  /* 12d64c44 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64c48 jge 0x12d64c8e */
  if ((C.sf==C.of)) goto L_12d64c8e;
L_12d64c4a:;
  /* 12d64c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64c4d mov edx, dword ptr [ecx*4 + 0x12d7caac] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7caac)));
  /* 12d64c54 push edx */
  push32((uint32_t)(EDX));
  /* 12d64c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64c58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64c5b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12d64c5f push edx */
  push32((uint32_t)(EDX));
  /* 12d64c60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64c63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64c66 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12d64c6a push edx */
  push32((uint32_t)(EDX));
  /* 12d64c6b push 0x12d79ac0 */
  push32((uint32_t)(0x12d79ac0u));
  /* 12d64c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64c78 call 0x12d61e40 */
  push32(0x12d64c7du); f_12d61e40();
  /* 12d64c7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64c80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64c83 jne 0x12d64c86 */
  if (!C.zf) goto L_12d64c86;
  /* 12d64c85 int3  */
  x86_unimpl("int3 @ 0x12d64c85");
L_12d64c86:;
  /* 12d64c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64c8a jne 0x12d64c4a */
  if (!C.zf) goto L_12d64c4a;
  /* 12d64c8c jmp 0x12d64c3b */
  goto L_12d64c3b;
L_12d64c8e:;
  /* 12d64c8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64c91 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12d64c94 push edx */
  push32((uint32_t)(EDX));
  /* 12d64c95 push 0x12d79a9c */
  push32((uint32_t)(0x12d79a9cu));
  /* 12d64c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64ca2 call 0x12d61e40 */
  push32(0x12d64ca7u); f_12d61e40();
  /* 12d64ca7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64caa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64cad jne 0x12d64cb0 */
  if (!C.zf) goto L_12d64cb0;
  /* 12d64caf int3  */
  x86_unimpl("int3 @ 0x12d64caf");
L_12d64cb0:;
  /* 12d64cb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64cb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64cb4 jne 0x12d64c8e */
  if (!C.zf) goto L_12d64c8e;
L_12d64cb6:;
  /* 12d64cb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64cb9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12d64cbc push edx */
  push32((uint32_t)(EDX));
  /* 12d64cbd push 0x12d79a7c */
  push32((uint32_t)(0x12d79a7cu));
  /* 12d64cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64cca call 0x12d61e40 */
  push32(0x12d64ccfu); f_12d61e40();
  /* 12d64ccf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64cd2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64cd5 jne 0x12d64cd8 */
  if (!C.zf) goto L_12d64cd8;
  /* 12d64cd7 int3  */
  x86_unimpl("int3 @ 0x12d64cd7");
L_12d64cd8:;
  /* 12d64cd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64cdc jne 0x12d64cb6 */
  if (!C.zf) goto L_12d64cb6;
L_12d64cde:;
  /* 12d64cde pop edi */
  EDI = (pop32());
  /* 12d64cdf pop esi */
  ESI = (pop32());
  /* 12d64ce0 pop ebx */
  EBX = (pop32());
  /* 12d64ce1 mov esp, ebp */
  ESP = (EBP);
  /* 12d64ce3 pop ebp */
  EBP = (pop32());
  /* 12d64ce4 ret  */
  ESPCHK(0x12d64c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf0 @ 0x12d64cf0 (329 bytes, 102 insns) */
void f_12d64cf0(void) {
  FTRACE(0x12d64cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d64cf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64cf6 cmp dword ptr [0x12d7ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64cfd jne 0x12d64d04 */
  if (!C.zf) goto L_12d64d04;
  /* 12d64cff call 0x12d69630 */
  push32(0x12d64d04u); f_12d69630();
L_12d64d04:;
  /* 12d64d04 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d64d0b mov eax, dword ptr [0x12d7e468] */
  EAX = (r32((uint32_t)(0x12d7e468)));
  /* 12d64d10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d64d13:;
  /* 12d64d13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64d16 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d64d19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d64d1b je 0x12d64d49 */
  if (C.zf) goto L_12d64d49;
  /* 12d64d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64d20 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d64d23 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64d26 je 0x12d64d31 */
  if (C.zf) goto L_12d64d31;
  /* 12d64d28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64d2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64d2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d64d31:;
  /* 12d64d31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64d34 push eax */
  push32((uint32_t)(EAX));
  /* 12d64d35 call 0x12d65bb0 */
  push32(0x12d64d3au); f_12d65bb0();
  /* 12d64d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64d3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64d40 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d64d44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d64d47 jmp 0x12d64d13 */
  goto L_12d64d13;
L_12d64d49:;
  /* 12d64d49 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12d64d4b push 0x12d79ae0 */
  push32((uint32_t)(0x12d79ae0u));
  /* 12d64d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d64d52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64d55 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12d64d5c push ecx */
  push32((uint32_t)(ECX));
  /* 12d64d5d call 0x12d62d80 */
  push32(0x12d64d62u); f_12d62d80();
  /* 12d64d62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64d65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d64d68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64d6b mov dword ptr [0x12d7e49c], edx */
  w32((uint32_t)(0x12d7e49c), (EDX));
  /* 12d64d71 cmp dword ptr [0x12d7e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64d78 jne 0x12d64d84 */
  if (!C.zf) goto L_12d64d84;
  /* 12d64d7a push 9 */
  push32((uint32_t)(0x9u));
  /* 12d64d7c call 0x12d61cf0 */
  push32(0x12d64d81u); f_12d61cf0();
  /* 12d64d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64d84:;
  /* 12d64d84 mov eax, dword ptr [0x12d7e468] */
  EAX = (r32((uint32_t)(0x12d7e468)));
  /* 12d64d89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d64d8c jmp 0x12d64d97 */
  goto L_12d64d97;
L_12d64d8e:;
  /* 12d64d8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64d91 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64d94 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d64d97:;
  /* 12d64d97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64d9a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d64d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64d9f je 0x12d64e07 */
  if (C.zf) goto L_12d64e07;
  /* 12d64da1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64da4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64da5 call 0x12d65bb0 */
  push32(0x12d64daau); f_12d65bb0();
  /* 12d64daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64dad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64db0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d64db3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64db6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d64db9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64dbc je 0x12d64e05 */
  if (C.zf) goto L_12d64e05;
  /* 12d64dbe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12d64dc0 push 0x12d79ae0 */
  push32((uint32_t)(0x12d79ae0u));
  /* 12d64dc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d64dc7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d64dca push ecx */
  push32((uint32_t)(ECX));
  /* 12d64dcb call 0x12d62d80 */
  push32(0x12d64dd0u); f_12d62d80();
  /* 12d64dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64dd3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64dd6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d64dd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64ddb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64dde jne 0x12d64dea */
  if (!C.zf) goto L_12d64dea;
  /* 12d64de0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d64de2 call 0x12d61cf0 */
  push32(0x12d64de7u); f_12d61cf0();
  /* 12d64de7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64dea:;
  /* 12d64dea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64ded push ecx */
  push32((uint32_t)(ECX));
  /* 12d64dee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64df1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d64df3 push eax */
  push32((uint32_t)(EAX));
  /* 12d64df4 call 0x12d65d30 */
  push32(0x12d64df9u); f_12d65d30();
  /* 12d64df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64dfc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64dff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64e02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d64e05:;
  /* 12d64e05 jmp 0x12d64d8e */
  goto L_12d64d8e;
L_12d64e07:;
  /* 12d64e07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d64e09 mov edx, dword ptr [0x12d7e468] */
  EDX = (r32((uint32_t)(0x12d7e468)));
  /* 12d64e0f push edx */
  push32((uint32_t)(EDX));
  /* 12d64e10 call 0x12d63810 */
  push32(0x12d64e15u); f_12d63810();
  /* 12d64e15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64e18 mov dword ptr [0x12d7e468], 0 */
  w32((uint32_t)(0x12d7e468), (0x0u));
  /* 12d64e22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64e25 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d64e2b mov dword ptr [0x12d7ffa0], 1 */
  w32((uint32_t)(0x12d7ffa0), (0x1u));
  /* 12d64e35 mov esp, ebp */
  ESP = (EBP);
  /* 12d64e37 pop ebp */
  EBP = (pop32());
  /* 12d64e38 ret  */
  ESPCHK(0x12d64cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x12d64e40 (216 bytes, 69 insns) */
void f_12d64e40(void) {
  FTRACE(0x12d64e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64e41 mov ebp, esp */
  EBP = (ESP);
  /* 12d64e43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64e46 cmp dword ptr [0x12d7ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64e4d jne 0x12d64e54 */
  if (!C.zf) goto L_12d64e54;
  /* 12d64e4f call 0x12d69630 */
  push32(0x12d64e54u); f_12d69630();
L_12d64e54:;
  /* 12d64e54 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d64e59 push 0x12d7e4d8 */
  push32((uint32_t)(0x12d7e4d8u));
  /* 12d64e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64e60 call dword ptr [0x12d802a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a8))), 0x12d64e66u);
  /* 12d64e66 mov dword ptr [0x12d7e4ac], 0x12d7e4d8 */
  w32((uint32_t)(0x12d7e4ac), (0x12d7e4d8u));
  /* 12d64e70 mov eax, dword ptr [0x12d7ffcc] */
  EAX = (r32((uint32_t)(0x12d7ffcc)));
  /* 12d64e75 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d64e78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d64e7a jne 0x12d64e87 */
  if (!C.zf) goto L_12d64e87;
  /* 12d64e7c mov edx, dword ptr [0x12d7e4ac] */
  EDX = (r32((uint32_t)(0x12d7e4ac)));
  /* 12d64e82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d64e85 jmp 0x12d64e8f */
  goto L_12d64e8f;
L_12d64e87:;
  /* 12d64e87 mov eax, dword ptr [0x12d7ffcc] */
  EAX = (r32((uint32_t)(0x12d7ffcc)));
  /* 12d64e8c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12d64e8f:;
  /* 12d64e8f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d64e92 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d64e95 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12d64e98 push edx */
  push32((uint32_t)(EDX));
  /* 12d64e99 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d64e9c push eax */
  push32((uint32_t)(EAX));
  /* 12d64e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d64ea1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d64ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64ea5 call 0x12d64f20 */
  push32(0x12d64eaau); f_12d64f20();
  /* 12d64eaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64ead push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12d64eb2 push 0x12d79aec */
  push32((uint32_t)(0x12d79aecu));
  /* 12d64eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d64eb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64ebc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64ebf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12d64ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64ec3 call 0x12d62d80 */
  push32(0x12d64ec8u); f_12d62d80();
  /* 12d64ec8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64ecb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d64ece cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64ed2 jne 0x12d64ede */
  if (!C.zf) goto L_12d64ede;
  /* 12d64ed4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d64ed6 call 0x12d61cf0 */
  push32(0x12d64edbu); f_12d61cf0();
  /* 12d64edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d64ede:;
  /* 12d64ede lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12d64ee1 push edx */
  push32((uint32_t)(EDX));
  /* 12d64ee2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d64ee5 push eax */
  push32((uint32_t)(EAX));
  /* 12d64ee6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64ee9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64eec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12d64eef push eax */
  push32((uint32_t)(EAX));
  /* 12d64ef0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d64ef4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d64ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12d64ef8 call 0x12d64f20 */
  push32(0x12d64efdu); f_12d64f20();
  /* 12d64efd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64f00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d64f03 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64f06 mov dword ptr [0x12d7e490], eax */
  w32((uint32_t)(0x12d7e490), (EAX));
  /* 12d64f0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d64f0e mov dword ptr [0x12d7e494], ecx */
  w32((uint32_t)(0x12d7e494), (ECX));
  /* 12d64f14 mov esp, ebp */
  ESP = (EBP);
  /* 12d64f16 pop ebp */
  EBP = (pop32());
  /* 12d64f17 ret  */
  ESPCHK(0x12d64e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x12d64f20 (1060 bytes, 360 insns) */
void f_12d64f20(void) {
  FTRACE(0x12d64f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d64f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d64f21 mov ebp, esp */
  EBP = (ESP);
  /* 12d64f23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d64f26 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d64f29 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d64f2f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d64f32 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12d64f38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d64f3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d64f3e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64f42 je 0x12d64f55 */
  if (C.zf) goto L_12d64f55;
  /* 12d64f44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64f47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64f4a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d64f4c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d64f4f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64f52 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12d64f55:;
  /* 12d64f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64f58 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d64f5b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64f5e jne 0x12d6502d */
  if (!C.zf) goto L_12d6502d;
L_12d64f64:;
  /* 12d64f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64f67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64f6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d64f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64f70 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d64f73 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64f76 je 0x12d64ff2 */
  if (C.zf) goto L_12d64ff2;
  /* 12d64f78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64f7b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d64f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64f80 je 0x12d64ff2 */
  if (C.zf) goto L_12d64ff2;
  /* 12d64f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64f85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d64f87 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d64f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d64f8b mov al, byte ptr [edx + 0x12d7fd01] */
  AL = (r8((uint32_t)(EDX + 0x12d7fd01)));
  /* 12d64f91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d64f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d64f96 je 0x12d64fc7 */
  if (C.zf) goto L_12d64fc7;
  /* 12d64f98 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d64f9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d64f9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64fa0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d64fa3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d64fa5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64fa9 je 0x12d64fc7 */
  if (C.zf) goto L_12d64fc7;
  /* 12d64fab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64fae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64fb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d64fb3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d64fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64fb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64fbb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d64fbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64fc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64fc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d64fc7:;
  /* 12d64fc7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d64fca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d64fcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64fcf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d64fd2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d64fd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d64fd8 je 0x12d64fed */
  if (C.zf) goto L_12d64fed;
  /* 12d64fda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64fdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d64fe0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d64fe2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d64fe4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d64fe7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64fea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d64fed:;
  /* 12d64fed jmp 0x12d64f64 */
  goto L_12d64f64;
L_12d64ff2:;
  /* 12d64ff2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d64ff5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d64ff7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d64ffa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d64ffd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d64fff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65003 je 0x12d65014 */
  if (C.zf) goto L_12d65014;
  /* 12d65005 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65008 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d6500b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6500e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65011 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12d65014:;
  /* 12d65014 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65017 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6501a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6501d jne 0x12d65028 */
  if (!C.zf) goto L_12d65028;
  /* 12d6501f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65022 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65025 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d65028:;
  /* 12d65028 jmp 0x12d650fc */
  goto L_12d650fc;
L_12d6502d:;
  /* 12d6502d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d65030 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d65032 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65035 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d65038 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d6503a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6503e je 0x12d65053 */
  if (C.zf) goto L_12d65053;
  /* 12d65040 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65046 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d65048 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d6504a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6504d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65050 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d65053:;
  /* 12d65053 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65056 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d65058 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12d6505b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6505e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65061 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d65064 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d65067 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d6506d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6506f mov dl, byte ptr [ecx + 0x12d7fd01] */
  DL = (r8((uint32_t)(ECX + 0x12d7fd01)));
  /* 12d65075 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d65078 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d6507a je 0x12d650ab */
  if (C.zf) goto L_12d650ab;
  /* 12d6507c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6507f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d65081 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65084 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d65087 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d65089 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6508d je 0x12d650a2 */
  if (C.zf) goto L_12d650a2;
  /* 12d6508f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65095 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d65097 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d65099 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6509c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6509f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d650a2:;
  /* 12d650a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d650a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d650a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d650ab:;
  /* 12d650ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d650ae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d650b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d650b7 je 0x12d650d7 */
  if (C.zf) goto L_12d650d7;
  /* 12d650b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d650bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d650c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d650c3 je 0x12d650d7 */
  if (C.zf) goto L_12d650d7;
  /* 12d650c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d650c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d650ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d650d1 jne 0x12d6502d */
  if (!C.zf) goto L_12d6502d;
L_12d650d7:;
  /* 12d650d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d650da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d650e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d650e2 jne 0x12d650ef */
  if (!C.zf) goto L_12d650ef;
  /* 12d650e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d650e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d650ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d650ed jmp 0x12d650fc */
  goto L_12d650fc;
L_12d650ef:;
  /* 12d650ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d650f3 je 0x12d650fc */
  if (C.zf) goto L_12d650fc;
  /* 12d650f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d650f8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12d650fc:;
  /* 12d650fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12d65103:;
  /* 12d65103 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65106 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d65109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6510b je 0x12d6512e */
  if (C.zf) goto L_12d6512e;
L_12d6510d:;
  /* 12d6510d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65110 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d65113 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65116 je 0x12d65123 */
  if (C.zf) goto L_12d65123;
  /* 12d65118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6511b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6511e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65121 jne 0x12d6512e */
  if (!C.zf) goto L_12d6512e;
L_12d65123:;
  /* 12d65123 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65126 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65129 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d6512c jmp 0x12d6510d */
  goto L_12d6510d;
L_12d6512e:;
  /* 12d6512e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65131 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d65134 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d65136 jne 0x12d6513d */
  if (!C.zf) goto L_12d6513d;
  /* 12d65138 jmp 0x12d6531b */
  goto L_12d6531b;
L_12d6513d:;
  /* 12d6513d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65141 je 0x12d65154 */
  if (C.zf) goto L_12d65154;
  /* 12d65143 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65146 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65149 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d6514b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6514e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65151 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d65154:;
  /* 12d65154 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d65157 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d65159 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6515c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6515f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d65161:;
  /* 12d65161 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d65168 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d6516f:;
  /* 12d6516f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65172 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d65175 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65178 jne 0x12d6518e */
  if (!C.zf) goto L_12d6518e;
  /* 12d6517a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6517d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65180 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d65183 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d65186 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65189 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d6518c jmp 0x12d6516f */
  goto L_12d6516f;
L_12d6518e:;
  /* 12d6518e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65191 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d65194 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65197 jne 0x12d651ea */
  if (!C.zf) goto L_12d651ea;
  /* 12d65199 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6519c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6519e mov ecx, 2 */
  ECX = (0x2u);
  /* 12d651a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d651a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d651a7 jne 0x12d651e2 */
  if (!C.zf) goto L_12d651e2;
  /* 12d651a9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d651ad je 0x12d651cf */
  if (C.zf) goto L_12d651cf;
  /* 12d651af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d651b2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d651b6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d651b9 jne 0x12d651c6 */
  if (!C.zf) goto L_12d651c6;
  /* 12d651bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d651be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d651c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d651c4 jmp 0x12d651cd */
  goto L_12d651cd;
L_12d651c6:;
  /* 12d651c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d651cd:;
  /* 12d651cd jmp 0x12d651d6 */
  goto L_12d651d6;
L_12d651cf:;
  /* 12d651cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d651d6:;
  /* 12d651d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d651d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d651dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12d651df mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d651e2:;
  /* 12d651e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d651e5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d651e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d651ea:;
  /* 12d651ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d651ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d651f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d651f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d651f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d651f8 je 0x12d6521e */
  if (C.zf) goto L_12d6521e;
  /* 12d651fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d651fe je 0x12d6520f */
  if (C.zf) goto L_12d6520f;
  /* 12d65200 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65203 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12d65206 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65209 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6520c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12d6520f:;
  /* 12d6520f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d65212 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d65214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65217 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6521a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d6521c jmp 0x12d651ea */
  goto L_12d651ea;
L_12d6521e:;
  /* 12d6521e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65221 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d65224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d65226 je 0x12d65244 */
  if (C.zf) goto L_12d65244;
  /* 12d65228 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6522c jne 0x12d65249 */
  if (!C.zf) goto L_12d65249;
  /* 12d6522e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65231 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d65234 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65237 je 0x12d65244 */
  if (C.zf) goto L_12d65244;
  /* 12d65239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6523c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d6523f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65242 jne 0x12d65249 */
  if (!C.zf) goto L_12d65249;
L_12d65244:;
  /* 12d65244 jmp 0x12d652f4 */
  goto L_12d652f4;
L_12d65249:;
  /* 12d65249 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6524d je 0x12d652e6 */
  if (C.zf) goto L_12d652e6;
  /* 12d65253 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65257 je 0x12d652ad */
  if (C.zf) goto L_12d652ad;
  /* 12d65259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6525c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6525e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d65260 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d65262 mov cl, byte ptr [eax + 0x12d7fd01] */
  CL = (r8((uint32_t)(EAX + 0x12d7fd01)));
  /* 12d65268 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d6526b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d6526d je 0x12d65298 */
  if (C.zf) goto L_12d65298;
  /* 12d6526f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65275 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d65277 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d65279 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6527c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6527f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12d65282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65285 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65288 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6528b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6528e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d65290 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65293 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d65296 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d65298:;
  /* 12d65298 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d6529b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6529e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d652a0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d652a2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d652a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d652a8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d652ab jmp 0x12d652d9 */
  goto L_12d652d9;
L_12d652ad:;
  /* 12d652ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d652b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d652b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d652b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d652b6 mov cl, byte ptr [eax + 0x12d7fd01] */
  CL = (r8((uint32_t)(EAX + 0x12d7fd01)));
  /* 12d652bc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d652bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d652c1 je 0x12d652d9 */
  if (C.zf) goto L_12d652d9;
  /* 12d652c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d652c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d652c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d652cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d652cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d652d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d652d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d652d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d652d9:;
  /* 12d652d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d652dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d652de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d652e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d652e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d652e6:;
  /* 12d652e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d652e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d652ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d652ef jmp 0x12d65161 */
  goto L_12d65161;
L_12d652f4:;
  /* 12d652f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d652f8 je 0x12d65309 */
  if (C.zf) goto L_12d65309;
  /* 12d652fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d652fd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d65300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65303 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65306 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12d65309:;
  /* 12d65309 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d6530c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d6530e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65311 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d65314 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d65316 jmp 0x12d65103 */
  goto L_12d65103;
L_12d6531b:;
  /* 12d6531b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6531f je 0x12d65333 */
  if (C.zf) goto L_12d65333;
  /* 12d65321 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65324 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d6532a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6532d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65330 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d65333:;
  /* 12d65333 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d65336 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d65338 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6533b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d6533e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d65340 mov esp, ebp */
  ESP = (EBP);
  /* 12d65342 pop ebp */
  EBP = (pop32());
  /* 12d65343 ret  */
  ESPCHK(0x12d64f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x12d65350 (537 bytes, 173 insns) */
void f_12d65350(void) {
  FTRACE(0x12d65350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65350 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65351 mov ebp, esp */
  EBP = (ESP);
  /* 12d65353 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65356 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d6535d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12d65364 cmp dword ptr [0x12d7e5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6536b jne 0x12d653aa */
  if (!C.zf) goto L_12d653aa;
  /* 12d6536d call dword ptr [0x12d80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80304))), 0x12d65373u);
  /* 12d65373 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d65376 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6537a je 0x12d65388 */
  if (C.zf) goto L_12d65388;
  /* 12d6537c mov dword ptr [0x12d7e5dc], 1 */
  w32((uint32_t)(0x12d7e5dc), (0x1u));
  /* 12d65386 jmp 0x12d653aa */
  goto L_12d653aa;
L_12d65388:;
  /* 12d65388 call dword ptr [0x12d80300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80300))), 0x12d6538eu);
  /* 12d6538e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d65391 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65395 je 0x12d653a3 */
  if (C.zf) goto L_12d653a3;
  /* 12d65397 mov dword ptr [0x12d7e5dc], 2 */
  w32((uint32_t)(0x12d7e5dc), (0x2u));
  /* 12d653a1 jmp 0x12d653aa */
  goto L_12d653aa;
L_12d653a3:;
  /* 12d653a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d653a5 jmp 0x12d65565 */
  goto L_12d65565;
L_12d653aa:;
  /* 12d653aa cmp dword ptr [0x12d7e5dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d653b1 jne 0x12d654ae */
  if (!C.zf) goto L_12d654ae;
  /* 12d653b7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d653bb jne 0x12d653d3 */
  if (!C.zf) goto L_12d653d3;
  /* 12d653bd call dword ptr [0x12d80304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80304))), 0x12d653c3u);
  /* 12d653c3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d653c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d653ca jne 0x12d653d3 */
  if (!C.zf) goto L_12d653d3;
  /* 12d653cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d653ce jmp 0x12d65565 */
  goto L_12d65565;
L_12d653d3:;
  /* 12d653d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d653d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d653d9:;
  /* 12d653d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d653dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d653de mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d653e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d653e3 je 0x12d65405 */
  if (C.zf) goto L_12d65405;
  /* 12d653e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d653e8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d653eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d653ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d653f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d653f3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d653f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d653f8 jne 0x12d65403 */
  if (!C.zf) goto L_12d65403;
  /* 12d653fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d653fd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65400 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d65403:;
  /* 12d65403 jmp 0x12d653d9 */
  goto L_12d653d9;
L_12d65405:;
  /* 12d65405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65408 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6540b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d6540d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65410 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d65413 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65415 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65417 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65419 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6541b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6541e push edx */
  push32((uint32_t)(EDX));
  /* 12d6541f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d65422 push eax */
  push32((uint32_t)(EAX));
  /* 12d65423 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65425 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65427 call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d6542du);
  /* 12d6542d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d65430 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65434 je 0x12d65454 */
  if (C.zf) goto L_12d65454;
  /* 12d65436 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12d65438 push 0x12d79af8 */
  push32((uint32_t)(0x12d79af8u));
  /* 12d6543d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6543f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d65442 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65443 call 0x12d62d80 */
  push32(0x12d65448u); f_12d62d80();
  /* 12d65448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6544b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d6544e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65452 jne 0x12d65465 */
  if (!C.zf) goto L_12d65465;
L_12d65454:;
  /* 12d65454 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d65457 push edx */
  push32((uint32_t)(EDX));
  /* 12d65458 call dword ptr [0x12d802f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f8))), 0x12d6545eu);
  /* 12d6545e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d65460 jmp 0x12d65565 */
  goto L_12d65565;
L_12d65465:;
  /* 12d65465 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65467 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65469 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d6546c push eax */
  push32((uint32_t)(EAX));
  /* 12d6546d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d65470 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65474 push edx */
  push32((uint32_t)(EDX));
  /* 12d65475 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d65478 push eax */
  push32((uint32_t)(EAX));
  /* 12d65479 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6547b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6547d call dword ptr [0x12d802fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802fc))), 0x12d65483u);
  /* 12d65483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d65485 jne 0x12d6549c */
  if (!C.zf) goto L_12d6549c;
  /* 12d65487 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d65489 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6548c push ecx */
  push32((uint32_t)(ECX));
  /* 12d6548d call 0x12d63810 */
  push32(0x12d65492u); f_12d63810();
  /* 12d65492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65495 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12d6549c:;
  /* 12d6549c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d6549f push edx */
  push32((uint32_t)(EDX));
  /* 12d654a0 call dword ptr [0x12d802f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f8))), 0x12d654a6u);
  /* 12d654a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d654a9 jmp 0x12d65565 */
  goto L_12d65565;
L_12d654ae:;
  /* 12d654ae cmp dword ptr [0x12d7e5dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d654b5 jne 0x12d65563 */
  if (!C.zf) goto L_12d65563;
  /* 12d654bb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d654bf jne 0x12d654d7 */
  if (!C.zf) goto L_12d654d7;
  /* 12d654c1 call dword ptr [0x12d80300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80300))), 0x12d654c7u);
  /* 12d654c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d654ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d654ce jne 0x12d654d7 */
  if (!C.zf) goto L_12d654d7;
  /* 12d654d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d654d2 jmp 0x12d65565 */
  goto L_12d65565;
L_12d654d7:;
  /* 12d654d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d654da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d654dd:;
  /* 12d654dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d654e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d654e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d654e5 je 0x12d65505 */
  if (C.zf) goto L_12d65505;
  /* 12d654e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d654ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d654ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d654f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d654f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d654f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d654f8 jne 0x12d65503 */
  if (!C.zf) goto L_12d65503;
  /* 12d654fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d654fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65500 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d65503:;
  /* 12d65503 jmp 0x12d654dd */
  goto L_12d654dd;
L_12d65505:;
  /* 12d65505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d65508 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d6550b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6550e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d65511 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12d65516 push 0x12d79af8 */
  push32((uint32_t)(0x12d79af8u));
  /* 12d6551b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d6551d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d65520 push edx */
  push32((uint32_t)(EDX));
  /* 12d65521 call 0x12d62d80 */
  push32(0x12d65526u); f_12d62d80();
  /* 12d65526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65529 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6552c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65530 jne 0x12d65540 */
  if (!C.zf) goto L_12d65540;
  /* 12d65532 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d65535 push eax */
  push32((uint32_t)(EAX));
  /* 12d65536 call dword ptr [0x12d802f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f4))), 0x12d6553cu);
  /* 12d6553c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6553e jmp 0x12d65565 */
  goto L_12d65565;
L_12d65540:;
  /* 12d65540 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d65543 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65544 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d65547 push edx */
  push32((uint32_t)(EDX));
  /* 12d65548 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6554b push eax */
  push32((uint32_t)(EAX));
  /* 12d6554c call 0x12d69660 */
  push32(0x12d65551u); f_12d69660();
  /* 12d65551 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65554 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d65557 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65558 call dword ptr [0x12d802f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802f4))), 0x12d6555eu);
  /* 12d6555e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d65561 jmp 0x12d65565 */
  goto L_12d65565;
L_12d65563:;
  /* 12d65563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d65565:;
  /* 12d65565 mov esp, ebp */
  ESP = (EBP);
  /* 12d65567 pop ebp */
  EBP = (pop32());
  /* 12d65568 ret  */
  ESPCHK(0x12d65350u, _esp0);
  ESP += 4; return;
}

/* FUN_10005570 @ 0x12d65570 (77 bytes, 25 insns) */
void f_12d65570(void) {
  FTRACE(0x12d65570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65570 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65571 mov ebp, esp */
  EBP = (ESP);
  /* 12d65573 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65575 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d6557a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6557c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65580 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12d65583 push eax */
  push32((uint32_t)(EAX));
  /* 12d65584 call dword ptr [0x12d8030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8030c))), 0x12d6558au);
  /* 12d6558a mov dword ptr [0x12d7fe2c], eax */
  w32((uint32_t)(0x12d7fe2c), (EAX));
  /* 12d6558f cmp dword ptr [0x12d7fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65596 jne 0x12d6559c */
  if (!C.zf) goto L_12d6559c;
  /* 12d65598 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6559a jmp 0x12d655bb */
  goto L_12d655bb;
L_12d6559c:;
  /* 12d6559c call 0x12d67020 */
  push32(0x12d655a1u); f_12d67020();
  /* 12d655a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d655a3 jne 0x12d655b6 */
  if (!C.zf) goto L_12d655b6;
  /* 12d655a5 mov ecx, dword ptr [0x12d7fe2c] */
  ECX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d655ab push ecx */
  push32((uint32_t)(ECX));
  /* 12d655ac call dword ptr [0x12d80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80308))), 0x12d655b2u);
  /* 12d655b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d655b4 jmp 0x12d655bb */
  goto L_12d655bb;
L_12d655b6:;
  /* 12d655b6 mov eax, 1 */
  EAX = (0x1u);
L_12d655bb:;
  /* 12d655bb pop ebp */
  EBP = (pop32());
  /* 12d655bc ret  */
  ESPCHK(0x12d65570u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c0 @ 0x12d655c0 (156 bytes, 48 insns) */
void f_12d655c0(void) {
  FTRACE(0x12d655c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d655c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d655c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d655c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d655c6 mov eax, dword ptr [0x12d7fe28] */
  EAX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d655cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d655ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d655d5 jmp 0x12d655e0 */
  goto L_12d655e0;
L_12d655d7:;
  /* 12d655d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d655da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d655dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d655e0:;
  /* 12d655e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d655e3 cmp edx, dword ptr [0x12d7fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d655e9 jge 0x12d65636 */
  if ((C.sf==C.of)) goto L_12d65636;
  /* 12d655eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d655f0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12d655f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d655f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d655fb push ecx */
  push32((uint32_t)(ECX));
  /* 12d655fc call dword ptr [0x12d80314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80314))), 0x12d65602u);
  /* 12d65602 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d65607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65609 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6560c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d6560f push eax */
  push32((uint32_t)(EAX));
  /* 12d65610 call dword ptr [0x12d80314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80314))), 0x12d65616u);
  /* 12d65616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65619 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d6561c push edx */
  push32((uint32_t)(EDX));
  /* 12d6561d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6561f mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d65624 push eax */
  push32((uint32_t)(EAX));
  /* 12d65625 call dword ptr [0x12d80310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80310))), 0x12d6562bu);
  /* 12d6562b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6562e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65631 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d65634 jmp 0x12d655d7 */
  goto L_12d655d7;
L_12d65636:;
  /* 12d65636 mov edx, dword ptr [0x12d7fe28] */
  EDX = (r32((uint32_t)(0x12d7fe28)));
  /* 12d6563c push edx */
  push32((uint32_t)(EDX));
  /* 12d6563d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d6563f mov eax, dword ptr [0x12d7fe2c] */
  EAX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d65644 push eax */
  push32((uint32_t)(EAX));
  /* 12d65645 call dword ptr [0x12d80310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80310))), 0x12d6564bu);
  /* 12d6564b mov ecx, dword ptr [0x12d7fe2c] */
  ECX = (r32((uint32_t)(0x12d7fe2c)));
  /* 12d65651 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65652 call dword ptr [0x12d80308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80308))), 0x12d65658u);
  /* 12d65658 mov esp, ebp */
  ESP = (EBP);
  /* 12d6565a pop ebp */
  EBP = (pop32());
  /* 12d6565b ret  */
  ESPCHK(0x12d655c0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12d65660 (73 bytes, 19 insns) */
void f_12d65660(void) {
  FTRACE(0x12d65660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65660 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65661 mov ebp, esp */
  EBP = (ESP);
  /* 12d65663 cmp dword ptr [0x12d7e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6566a je 0x12d6567e */
  if (C.zf) goto L_12d6567e;
  /* 12d6566c cmp dword ptr [0x12d7e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65673 jne 0x12d656a7 */
  if (!C.zf) goto L_12d656a7;
  /* 12d65675 cmp dword ptr [0x12d7e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6567c jne 0x12d656a7 */
  if (!C.zf) goto L_12d656a7;
L_12d6567e:;
  /* 12d6567e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12d65683 call 0x12d656b0 */
  push32(0x12d65688u); f_12d656b0();
  /* 12d65688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6568b cmp dword ptr [0x12d7e5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65692 je 0x12d6569a */
  if (C.zf) goto L_12d6569a;
  /* 12d65694 call dword ptr [0x12d7e5e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e5e0))), 0x12d6569au);
L_12d6569a:;
  /* 12d6569a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d6569f call 0x12d656b0 */
  push32(0x12d656a4u); f_12d656b0();
  /* 12d656a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d656a7:;
  /* 12d656a7 pop ebp */
  EBP = (pop32());
  /* 12d656a8 ret  */
  ESPCHK(0x12d65660u, _esp0);
  ESP += 4; return;
}

/* FUN_100056b0 @ 0x12d656b0 (447 bytes, 131 insns) */
void f_12d656b0(void) {
  FTRACE(0x12d656b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d656b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d656b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d656b3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d656b9 push ebx */
  push32((uint32_t)(EBX));
  /* 12d656ba push esi */
  push32((uint32_t)(ESI));
  /* 12d656bb push edi */
  push32((uint32_t)(EDI));
  /* 12d656bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d656c3 jmp 0x12d656ce */
  goto L_12d656ce;
L_12d656c5:;
  /* 12d656c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d656c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d656cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d656ce:;
  /* 12d656ce cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d656d2 jae 0x12d656e7 */
  if (!C.cf) goto L_12d656e7;
  /* 12d656d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d656d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d656da cmp edx, dword ptr [ecx*8 + 0x12d7cac8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12d7cac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d656e1 jne 0x12d656e5 */
  if (!C.zf) goto L_12d656e5;
  /* 12d656e3 jmp 0x12d656e7 */
  goto L_12d656e7;
L_12d656e5:;
  /* 12d656e5 jmp 0x12d656c5 */
  goto L_12d656c5;
L_12d656e7:;
  /* 12d656e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d656ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d656ed cmp ecx, dword ptr [eax*8 + 0x12d7cac8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d7cac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d656f4 jne 0x12d65868 */
  if (!C.zf) goto L_12d65868;
  /* 12d656fa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65701 je 0x12d65724 */
  if (C.zf) goto L_12d65724;
  /* 12d65703 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65706 mov eax, dword ptr [edx*8 + 0x12d7cacc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d7cacc)));
  /* 12d6570d push eax */
  push32((uint32_t)(EAX));
  /* 12d6570e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65710 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65714 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d65716 call 0x12d61e40 */
  push32(0x12d6571bu); f_12d61e40();
  /* 12d6571b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6571e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65721 jne 0x12d65724 */
  if (!C.zf) goto L_12d65724;
  /* 12d65723 int3  */
  x86_unimpl("int3 @ 0x12d65723");
L_12d65724:;
  /* 12d65724 cmp dword ptr [0x12d7e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6572b je 0x12d6573f */
  if (C.zf) goto L_12d6573f;
  /* 12d6572d cmp dword ptr [0x12d7e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65734 jne 0x12d65778 */
  if (!C.zf) goto L_12d65778;
  /* 12d65736 cmp dword ptr [0x12d7e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6573d jne 0x12d65778 */
  if (!C.zf) goto L_12d65778;
L_12d6573f:;
  /* 12d6573f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65741 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12d65744 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65745 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65748 mov eax, dword ptr [edx*8 + 0x12d7cacc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d7cacc)));
  /* 12d6574f push eax */
  push32((uint32_t)(EAX));
  /* 12d65750 call 0x12d65bb0 */
  push32(0x12d65755u); f_12d65bb0();
  /* 12d65755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65758 push eax */
  push32((uint32_t)(EAX));
  /* 12d65759 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6575c mov edx, dword ptr [ecx*8 + 0x12d7cacc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12d7cacc)));
  /* 12d65763 push edx */
  push32((uint32_t)(EDX));
  /* 12d65764 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d65766 call dword ptr [0x12d8028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8028c))), 0x12d6576cu);
  /* 12d6576c push eax */
  push32((uint32_t)(EAX));
  /* 12d6576d call dword ptr [0x12d80290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80290))), 0x12d65773u);
  /* 12d65773 jmp 0x12d65868 */
  goto L_12d65868;
L_12d65778:;
  /* 12d65778 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6577f je 0x12d65868 */
  if (C.zf) goto L_12d65868;
  /* 12d65785 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d6578a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12d65790 push eax */
  push32((uint32_t)(EAX));
  /* 12d65791 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65793 call dword ptr [0x12d802a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a8))), 0x12d65799u);
  /* 12d65799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d6579b jne 0x12d657b1 */
  if (!C.zf) goto L_12d657b1;
  /* 12d6579d push 0x12d79360 */
  push32((uint32_t)(0x12d79360u));
  /* 12d657a2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12d657a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d657a9 call 0x12d65d30 */
  push32(0x12d657aeu); f_12d65d30();
  /* 12d657ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d657b1:;
  /* 12d657b1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12d657b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d657ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d657bd push eax */
  push32((uint32_t)(EAX));
  /* 12d657be call 0x12d65bb0 */
  push32(0x12d657c3u); f_12d65bb0();
  /* 12d657c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d657c6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d657c9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d657cc jbe 0x12d657fa */
  if ((C.cf||C.zf)) goto L_12d657fa;
  /* 12d657ce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12d657d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d657d5 call 0x12d65bb0 */
  push32(0x12d657dau); f_12d65bb0();
  /* 12d657da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d657dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d657e0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12d657e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d657e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d657e9 push 0x12d7935c */
  push32((uint32_t)(0x12d7935cu));
  /* 12d657ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d657f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d657f2 call 0x12d665a0 */
  push32(0x12d657f7u); f_12d665a0();
  /* 12d657f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d657fa:;
  /* 12d657fa push 0x12d79db4 */
  push32((uint32_t)(0x12d79db4u));
  /* 12d657ff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d65805 push edx */
  push32((uint32_t)(EDX));
  /* 12d65806 call 0x12d65d30 */
  push32(0x12d6580bu); f_12d65d30();
  /* 12d6580b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6580e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d65811 push eax */
  push32((uint32_t)(EAX));
  /* 12d65812 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12d65818 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65819 call 0x12d65d40 */
  push32(0x12d6581eu); f_12d65d40();
  /* 12d6581e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65821 push 0x12d792d4 */
  push32((uint32_t)(0x12d792d4u));
  /* 12d65826 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d6582c push edx */
  push32((uint32_t)(EDX));
  /* 12d6582d call 0x12d65d40 */
  push32(0x12d65832u); f_12d65d40();
  /* 12d65832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65835 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65838 mov ecx, dword ptr [eax*8 + 0x12d7cacc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12d7cacc)));
  /* 12d6583f push ecx */
  push32((uint32_t)(ECX));
  /* 12d65840 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d65846 push edx */
  push32((uint32_t)(EDX));
  /* 12d65847 call 0x12d65d40 */
  push32(0x12d6584cu); f_12d65d40();
  /* 12d6584c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6584f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12d65854 push 0x12d79d8c */
  push32((uint32_t)(0x12d79d8cu));
  /* 12d65859 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12d6585f push eax */
  push32((uint32_t)(EAX));
  /* 12d65860 call 0x12d664e0 */
  push32(0x12d65865u); f_12d664e0();
  /* 12d65865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d65868:;
  /* 12d65868 pop edi */
  EDI = (pop32());
  /* 12d65869 pop esi */
  ESI = (pop32());
  /* 12d6586a pop ebx */
  EBX = (pop32());
  /* 12d6586b mov esp, ebp */
  ESP = (EBP);
  /* 12d6586d pop ebp */
  EBP = (pop32());
  /* 12d6586e ret  */
  ESPCHK(0x12d656b0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12d65870 (80 bytes, 27 insns) */
void f_12d65870(void) {
  FTRACE(0x12d65870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65870 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65871 mov ebp, esp */
  EBP = (ESP);
  /* 12d65873 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65874 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d6587b jmp 0x12d65886 */
  goto L_12d65886;
L_12d6587d:;
  /* 12d6587d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65883 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d65886:;
  /* 12d65886 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6588a jae 0x12d6589f */
  if (!C.cf) goto L_12d6589f;
  /* 12d6588c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6588f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65892 cmp edx, dword ptr [ecx*8 + 0x12d7cac8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12d7cac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65899 jne 0x12d6589d */
  if (!C.zf) goto L_12d6589d;
  /* 12d6589b jmp 0x12d6589f */
  goto L_12d6589f;
L_12d6589d:;
  /* 12d6589d jmp 0x12d6587d */
  goto L_12d6587d;
L_12d6589f:;
  /* 12d6589f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d658a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d658a5 cmp ecx, dword ptr [eax*8 + 0x12d7cac8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d7cac8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d658ac jne 0x12d658ba */
  if (!C.zf) goto L_12d658ba;
  /* 12d658ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d658b1 mov eax, dword ptr [edx*8 + 0x12d7cacc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12d7cacc)));
  /* 12d658b8 jmp 0x12d658bc */
  goto L_12d658bc;
L_12d658ba:;
  /* 12d658ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d658bc:;
  /* 12d658bc mov esp, ebp */
  ESP = (EBP);
  /* 12d658be pop ebp */
  EBP = (pop32());
  /* 12d658bf ret  */
  ESPCHK(0x12d65870u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12d658c0 (66 bytes, 28 insns) */
void f_12d658c0(void) {
  FTRACE(0x12d658c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d658c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d658c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d658c3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d658c7 jne 0x12d658e7 */
  if (!C.zf) goto L_12d658e7;
  /* 12d658c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d658cd jge 0x12d658e7 */
  if ((C.sf==C.of)) goto L_12d658e7;
  /* 12d658cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d658d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d658d4 push eax */
  push32((uint32_t)(EAX));
  /* 12d658d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d658d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d658d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d658dc push edx */
  push32((uint32_t)(EDX));
  /* 12d658dd call 0x12d65910 */
  push32(0x12d658e2u); f_12d65910();
  /* 12d658e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d658e5 jmp 0x12d658fd */
  goto L_12d658fd;
L_12d658e7:;
  /* 12d658e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d658e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d658ec push eax */
  push32((uint32_t)(EAX));
  /* 12d658ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d658f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d658f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d658f4 push edx */
  push32((uint32_t)(EDX));
  /* 12d658f5 call 0x12d65910 */
  push32(0x12d658fau); f_12d65910();
  /* 12d658fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d658fd:;
  /* 12d658fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65900 pop ebp */
  EBP = (pop32());
  /* 12d65901 ret  */
  ESPCHK(0x12d658c0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12d65910 (194 bytes, 71 insns) */
void f_12d65910(void) {
  FTRACE(0x12d65910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65910 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65911 mov ebp, esp */
  EBP = (ESP);
  /* 12d65913 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65916 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65919 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6591c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65920 je 0x12d65939 */
  if (C.zf) goto L_12d65939;
  /* 12d65922 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65925 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12d65928 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6592b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6592e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d65931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65934 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d65936 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d65939:;
  /* 12d65939 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6593c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d6593f:;
  /* 12d6593f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65942 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d65944 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d65947 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d6594a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6594d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6594f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d65952 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d65955 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65959 jbe 0x12d65971 */
  if ((C.cf||C.zf)) goto L_12d65971;
  /* 12d6595b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6595e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65961 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65964 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d65966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65969 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6596c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d6596f jmp 0x12d65985 */
  goto L_12d65985;
L_12d65971:;
  /* 12d65971 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d65974 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6597a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d6597c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6597f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65982 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d65985:;
  /* 12d65985 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65989 ja 0x12d6593f */
  if ((!C.cf&&!C.zf)) goto L_12d6593f;
  /* 12d6598b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6598e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d65991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65994 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65997 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6599a:;
  /* 12d6599a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6599d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d6599f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12d659a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d659a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d659a8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d659aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d659ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d659af mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12d659b2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d659b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d659b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d659ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d659bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d659c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d659c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d659c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d659c9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d659cc jb 0x12d6599a */
  if (C.cf) goto L_12d6599a;
  /* 12d659ce mov esp, ebp */
  ESP = (EBP);
  /* 12d659d0 pop ebp */
  EBP = (pop32());
  /* 12d659d1 ret  */
  ESPCHK(0x12d65910u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12d659e0 (63 bytes, 24 insns) */
void f_12d659e0(void) {
  FTRACE(0x12d659e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d659e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d659e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d659e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d659e4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d659e8 jne 0x12d659f9 */
  if (!C.zf) goto L_12d659f9;
  /* 12d659ea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d659ee jge 0x12d659f9 */
  if ((C.sf==C.of)) goto L_12d659f9;
  /* 12d659f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d659f7 jmp 0x12d65a00 */
  goto L_12d65a00;
L_12d659f9:;
  /* 12d659f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d65a00:;
  /* 12d65a00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65a03 push eax */
  push32((uint32_t)(EAX));
  /* 12d65a04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65a07 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65a08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65a0b push edx */
  push32((uint32_t)(EDX));
  /* 12d65a0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65a0f push eax */
  push32((uint32_t)(EAX));
  /* 12d65a10 call 0x12d65910 */
  push32(0x12d65a15u); f_12d65910();
  /* 12d65a15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65a18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65a1b mov esp, ebp */
  ESP = (EBP);
  /* 12d65a1d pop ebp */
  EBP = (pop32());
  /* 12d65a1e ret  */
  ESPCHK(0x12d659e0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12d65a20 (30 bytes, 14 insns) */
void f_12d65a20(void) {
  FTRACE(0x12d65a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65a21 mov ebp, esp */
  EBP = (ESP);
  /* 12d65a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65a25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65a28 push eax */
  push32((uint32_t)(EAX));
  /* 12d65a29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65a2c push ecx */
  push32((uint32_t)(ECX));
  /* 12d65a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65a30 push edx */
  push32((uint32_t)(EDX));
  /* 12d65a31 call 0x12d65910 */
  push32(0x12d65a36u); f_12d65910();
  /* 12d65a36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65a39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65a3c pop ebp */
  EBP = (pop32());
  /* 12d65a3d ret  */
  ESPCHK(0x12d65a20u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12d65a40 (72 bytes, 28 insns) */
void f_12d65a40(void) {
  FTRACE(0x12d65a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65a41 mov ebp, esp */
  EBP = (ESP);
  /* 12d65a43 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65a44 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65a48 jne 0x12d65a61 */
  if (!C.zf) goto L_12d65a61;
  /* 12d65a4a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65a4e jg 0x12d65a61 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d65a61;
  /* 12d65a50 jl 0x12d65a58 */
  if ((C.sf!=C.of)) goto L_12d65a58;
  /* 12d65a52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65a56 jae 0x12d65a61 */
  if (!C.cf) goto L_12d65a61;
L_12d65a58:;
  /* 12d65a58 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d65a5f jmp 0x12d65a68 */
  goto L_12d65a68;
L_12d65a61:;
  /* 12d65a61 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d65a68:;
  /* 12d65a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65a6b push eax */
  push32((uint32_t)(EAX));
  /* 12d65a6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d65a6f push ecx */
  push32((uint32_t)(ECX));
  /* 12d65a70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65a73 push edx */
  push32((uint32_t)(EDX));
  /* 12d65a74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65a77 push eax */
  push32((uint32_t)(EAX));
  /* 12d65a78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65a7b push ecx */
  push32((uint32_t)(ECX));
  /* 12d65a7c call 0x12d65a90 */
  push32(0x12d65a81u); f_12d65a90();
  /* 12d65a81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65a84 mov esp, ebp */
  ESP = (EBP);
  /* 12d65a86 pop ebp */
  EBP = (pop32());
  /* 12d65a87 ret  */
  ESPCHK(0x12d65a40u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12d65a90 (242 bytes, 91 insns) */
void f_12d65a90(void) {
  FTRACE(0x12d65a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65a91 mov ebp, esp */
  EBP = (ESP);
  /* 12d65a93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65a96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65a99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d65a9c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65aa0 je 0x12d65ac4 */
  if (C.zf) goto L_12d65ac4;
  /* 12d65aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65aa5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12d65aa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65aab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65aae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d65ab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65ab4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d65ab6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65ab9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65abc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d65abe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d65ac1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d65ac4:;
  /* 12d65ac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65ac7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d65aca:;
  /* 12d65aca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d65acd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d65acf push ecx */
  push32((uint32_t)(ECX));
  /* 12d65ad0 push eax */
  push32((uint32_t)(EAX));
  /* 12d65ad1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65ad4 push edx */
  push32((uint32_t)(EDX));
  /* 12d65ad5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65ad8 push eax */
  push32((uint32_t)(EAX));
  /* 12d65ad9 call 0x12d69a10 */
  push32(0x12d65adeu); f_12d69a10();
  /* 12d65ade mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d65ae1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d65ae4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d65ae6 push edx */
  push32((uint32_t)(EDX));
  /* 12d65ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65ae8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65aeb push eax */
  push32((uint32_t)(EAX));
  /* 12d65aec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65aef push ecx */
  push32((uint32_t)(ECX));
  /* 12d65af0 call 0x12d699a0 */
  push32(0x12d65af5u); f_12d699a0();
  /* 12d65af5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d65af8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d65afb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65aff jbe 0x12d65b17 */
  if ((C.cf||C.zf)) goto L_12d65b17;
  /* 12d65b01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d65b04 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d65b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65b12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d65b15 jmp 0x12d65b2b */
  goto L_12d65b2b;
L_12d65b17:;
  /* 12d65b17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d65b1a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65b1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b20 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d65b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65b28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d65b2b:;
  /* 12d65b2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65b2f ja 0x12d65aca */
  if ((!C.cf&&!C.zf)) goto L_12d65aca;
  /* 12d65b31 jb 0x12d65b39 */
  if (C.cf) goto L_12d65b39;
  /* 12d65b33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65b37 ja 0x12d65aca */
  if ((!C.cf&&!C.zf)) goto L_12d65aca;
L_12d65b39:;
  /* 12d65b39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b3c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d65b3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b42 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65b45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d65b48:;
  /* 12d65b48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d65b4d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12d65b50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65b56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d65b58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d65b5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65b5d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12d65b60 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d65b62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d65b65 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65b68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d65b6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65b6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65b71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d65b74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d65b77 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65b7a jb 0x12d65b48 */
  if (C.cf) goto L_12d65b48;
  /* 12d65b7c mov esp, ebp */
  ESP = (EBP);
  /* 12d65b7e pop ebp */
  EBP = (pop32());
  /* 12d65b7f ret 0x14 */
  ESPCHK(0x12d65a90u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12d65b90 (31 bytes, 15 insns) */
void f_12d65b90(void) {
  FTRACE(0x12d65b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65b91 mov ebp, esp */
  EBP = (ESP);
  /* 12d65b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65b95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d65b98 push eax */
  push32((uint32_t)(EAX));
  /* 12d65b99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65b9c push ecx */
  push32((uint32_t)(ECX));
  /* 12d65b9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65ba0 push edx */
  push32((uint32_t)(EDX));
  /* 12d65ba1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12d65ba5 call 0x12d65a90 */
  push32(0x12d65baau); f_12d65a90();
  /* 12d65baa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65bad pop ebp */
  EBP = (pop32());
  /* 12d65bae ret  */
  ESPCHK(0x12d65b90u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12d65bb0 (123 bytes, 44 insns) */
void f_12d65bb0(void) {
  FTRACE(0x12d65bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65bb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d65bb4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d65bba je 0x12d65bd0 */
  if (C.zf) goto L_12d65bd0;
L_12d65bbc:;
  /* 12d65bbc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12d65bbe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d65bbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d65bc1 je 0x12d65c03 */
  if (C.zf) goto L_12d65c03;
  /* 12d65bc3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d65bc9 jne 0x12d65bbc */
  if (!C.zf) goto L_12d65bbc;
  /* 12d65bcb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d65bd0:;
  /* 12d65bd0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d65bd2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d65bd7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65bd9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d65bdc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d65bde add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65be1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d65be6 je 0x12d65bd0 */
  if (C.zf) goto L_12d65bd0;
  /* 12d65be8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d65beb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d65bed je 0x12d65c21 */
  if (C.zf) goto L_12d65c21;
  /* 12d65bef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d65bf1 je 0x12d65c17 */
  if (C.zf) goto L_12d65c17;
  /* 12d65bf3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d65bf8 je 0x12d65c0d */
  if (C.zf) goto L_12d65c0d;
  /* 12d65bfa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d65bff je 0x12d65c03 */
  if (C.zf) goto L_12d65c03;
  /* 12d65c01 jmp 0x12d65bd0 */
  goto L_12d65bd0;
L_12d65c03:;
  /* 12d65c03 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12d65c06 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d65c0a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65c0c ret  */
  ESPCHK(0x12d65bb0u, _esp0);
  ESP += 4; return;
L_12d65c0d:;
  /* 12d65c0d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12d65c10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d65c14 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65c16 ret  */
  ESPCHK(0x12d65bb0u, _esp0);
  ESP += 4; return;
L_12d65c17:;
  /* 12d65c17 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12d65c1a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d65c1e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65c20 ret  */
  ESPCHK(0x12d65bb0u, _esp0);
  ESP += 4; return;
L_12d65c21:;
  /* 12d65c21 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12d65c24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d65c28 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65c2a ret  */
  ESPCHK(0x12d65bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x12d65c30 (249 bytes, 93 insns) */
void f_12d65c30(void) {
  FTRACE(0x12d65c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65c31 mov ebp, esp */
  EBP = (ESP);
  /* 12d65c33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65c36 push ebx */
  push32((uint32_t)(EBX));
  /* 12d65c37 push esi */
  push32((uint32_t)(ESI));
  /* 12d65c38 push edi */
  push32((uint32_t)(EDI));
  /* 12d65c39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d65c3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d65c3f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12d65c42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12d65c45:;
  /* 12d65c45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65c49 jne 0x12d65c69 */
  if (!C.zf) goto L_12d65c69;
  /* 12d65c4b push 0x12d79dec */
  push32((uint32_t)(0x12d79decu));
  /* 12d65c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65c52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12d65c54 push 0x12d79de0 */
  push32((uint32_t)(0x12d79de0u));
  /* 12d65c59 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d65c5b call 0x12d61e40 */
  push32(0x12d65c60u); f_12d61e40();
  /* 12d65c60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65c63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65c66 jne 0x12d65c69 */
  if (!C.zf) goto L_12d65c69;
  /* 12d65c68 int3  */
  x86_unimpl("int3 @ 0x12d65c68");
L_12d65c69:;
  /* 12d65c69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d65c6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d65c6d jne 0x12d65c45 */
  if (!C.zf) goto L_12d65c45;
L_12d65c6f:;
  /* 12d65c6f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65c73 jne 0x12d65c93 */
  if (!C.zf) goto L_12d65c93;
  /* 12d65c75 push 0x12d79dd0 */
  push32((uint32_t)(0x12d79dd0u));
  /* 12d65c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65c7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d65c7e push 0x12d79de0 */
  push32((uint32_t)(0x12d79de0u));
  /* 12d65c83 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d65c85 call 0x12d61e40 */
  push32(0x12d65c8au); f_12d61e40();
  /* 12d65c8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65c8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65c90 jne 0x12d65c93 */
  if (!C.zf) goto L_12d65c93;
  /* 12d65c92 int3  */
  x86_unimpl("int3 @ 0x12d65c92");
L_12d65c93:;
  /* 12d65c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d65c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d65c97 jne 0x12d65c6f */
  if (!C.zf) goto L_12d65c6f;
  /* 12d65c99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65c9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12d65ca3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65ca9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d65cac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65caf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65cb2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d65cb4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65cb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65cba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d65cbd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d65cc0 push edx */
  push32((uint32_t)(EDX));
  /* 12d65cc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65cc4 push eax */
  push32((uint32_t)(EAX));
  /* 12d65cc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65cc9 call 0x12d69d10 */
  push32(0x12d65cceu); f_12d69d10();
  /* 12d65cce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65cd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d65cd4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65cd7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d65cda sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65cdd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ce0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d65ce3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ce6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65cea jl 0x12d65d0e */
  if ((C.sf!=C.of)) goto L_12d65d0e;
  /* 12d65cec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65cef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d65cf1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d65cf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d65cf6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d65cfc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d65cff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65d02 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d65d04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65d07 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65d0a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d65d0c jmp 0x12d65d1f */
  goto L_12d65d1f;
L_12d65d0e:;
  /* 12d65d0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65d11 push eax */
  push32((uint32_t)(EAX));
  /* 12d65d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65d14 call 0x12d69a90 */
  push32(0x12d65d19u); f_12d69a90();
  /* 12d65d19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65d1c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12d65d1f:;
  /* 12d65d1f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d65d22 pop edi */
  EDI = (pop32());
  /* 12d65d23 pop esi */
  ESI = (pop32());
  /* 12d65d24 pop ebx */
  EBX = (pop32());
  /* 12d65d25 mov esp, ebp */
  ESP = (EBP);
  /* 12d65d27 pop ebp */
  EBP = (pop32());
  /* 12d65d28 ret  */
  ESPCHK(0x12d65c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d30 @ 0x12d65d30 (7 bytes, 3 insns) */
void f_12d65d30(void) {
  FTRACE(0x12d65d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65d30 push edi */
  push32((uint32_t)(EDI));
  /* 12d65d31 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12d65d35 jmp 0x12d65da1 */
  jmp_ind(0x12d65da1u); return;
}

/* FUN_10005d40 @ 0x12d65d40 (224 bytes, 84 insns) */
void f_12d65d40(void) {
  FTRACE(0x12d65d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65d40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d65d44 push edi */
  push32((uint32_t)(EDI));
  /* 12d65d45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d65d4b je 0x12d65d5c */
  if (C.zf) goto L_12d65d5c;
L_12d65d4d:;
  /* 12d65d4d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12d65d4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d65d50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d65d52 je 0x12d65d8f */
  if (C.zf) goto L_12d65d8f;
  /* 12d65d54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d65d5a jne 0x12d65d4d */
  if (!C.zf) goto L_12d65d4d;
L_12d65d5c:;
  /* 12d65d5c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d65d5e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d65d63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65d65 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d65d68 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d65d6a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65d6d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d65d72 je 0x12d65d5c */
  if (C.zf) goto L_12d65d5c;
  /* 12d65d74 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d65d77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d65d79 je 0x12d65d9e */
  if (C.zf) goto L_12d65d9e;
  /* 12d65d7b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d65d7d je 0x12d65d99 */
  if (C.zf) goto L_12d65d99;
  /* 12d65d7f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d65d84 je 0x12d65d94 */
  if (C.zf) goto L_12d65d94;
  /* 12d65d86 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d65d8b je 0x12d65d8f */
  if (C.zf) goto L_12d65d8f;
  /* 12d65d8d jmp 0x12d65d5c */
  goto L_12d65d5c;
L_12d65d8f:;
  /* 12d65d8f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12d65d92 jmp 0x12d65da1 */
  goto L_12d65da1;
L_12d65d94:;
  /* 12d65d94 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12d65d97 jmp 0x12d65da1 */
  goto L_12d65da1;
L_12d65d99:;
  /* 12d65d99 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12d65d9c jmp 0x12d65da1 */
  goto L_12d65da1;
L_12d65d9e:;
  /* 12d65d9e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12d65da1:;
  /* 12d65da1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d65da5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d65dab je 0x12d65dc6 */
  if (C.zf) goto L_12d65dc6;
L_12d65dad:;
  /* 12d65dad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d65daf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d65db0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d65db2 je 0x12d65e18 */
  if (C.zf) goto L_12d65e18;
  /* 12d65db4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12d65db6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d65db7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d65dbd jne 0x12d65dad */
  if (!C.zf) goto L_12d65dad;
  /* 12d65dbf jmp 0x12d65dc6 */
  goto L_12d65dc6;
L_12d65dc1:;
  /* 12d65dc1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d65dc3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d65dc6:;
  /* 12d65dc6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d65dcb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d65dcd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65dcf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d65dd2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d65dd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d65dd6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65dd9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d65dde je 0x12d65dc1 */
  if (C.zf) goto L_12d65dc1;
  /* 12d65de0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d65de2 je 0x12d65e18 */
  if (C.zf) goto L_12d65e18;
  /* 12d65de4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12d65de6 je 0x12d65e0f */
  if (C.zf) goto L_12d65e0f;
  /* 12d65de8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d65dee je 0x12d65e02 */
  if (C.zf) goto L_12d65e02;
  /* 12d65df0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d65df6 je 0x12d65dfa */
  if (C.zf) goto L_12d65dfa;
  /* 12d65df8 jmp 0x12d65dc1 */
  goto L_12d65dc1;
L_12d65dfa:;
  /* 12d65dfa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d65dfc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d65e00 pop edi */
  EDI = (pop32());
  /* 12d65e01 ret  */
  ESPCHK(0x12d65d40u, _esp0);
  ESP += 4; return;
L_12d65e02:;
  /* 12d65e02 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12d65e05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d65e09 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12d65e0d pop edi */
  EDI = (pop32());
  /* 12d65e0e ret  */
  ESPCHK(0x12d65d40u, _esp0);
  ESP += 4; return;
L_12d65e0f:;
  /* 12d65e0f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12d65e12 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d65e16 pop edi */
  EDI = (pop32());
  /* 12d65e17 ret  */
  ESPCHK(0x12d65d40u, _esp0);
  ESP += 4; return;
L_12d65e18:;
  /* 12d65e18 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12d65e1a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d65e1e pop edi */
  EDI = (pop32());
  /* 12d65e1f ret  */
  ESPCHK(0x12d65d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e20 @ 0x12d65e20 (243 bytes, 91 insns) */
void f_12d65e20(void) {
  FTRACE(0x12d65e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65e21 mov ebp, esp */
  EBP = (ESP);
  /* 12d65e23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65e26 push ebx */
  push32((uint32_t)(EBX));
  /* 12d65e27 push esi */
  push32((uint32_t)(ESI));
  /* 12d65e28 push edi */
  push32((uint32_t)(EDI));
  /* 12d65e29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d65e2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d65e2f:;
  /* 12d65e2f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65e33 jne 0x12d65e53 */
  if (!C.zf) goto L_12d65e53;
  /* 12d65e35 push 0x12d79dec */
  push32((uint32_t)(0x12d79decu));
  /* 12d65e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65e3c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12d65e3e push 0x12d79dfc */
  push32((uint32_t)(0x12d79dfcu));
  /* 12d65e43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d65e45 call 0x12d61e40 */
  push32(0x12d65e4au); f_12d61e40();
  /* 12d65e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65e4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65e50 jne 0x12d65e53 */
  if (!C.zf) goto L_12d65e53;
  /* 12d65e52 int3  */
  x86_unimpl("int3 @ 0x12d65e52");
L_12d65e53:;
  /* 12d65e53 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d65e55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d65e57 jne 0x12d65e2f */
  if (!C.zf) goto L_12d65e2f;
L_12d65e59:;
  /* 12d65e59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65e5d jne 0x12d65e7d */
  if (!C.zf) goto L_12d65e7d;
  /* 12d65e5f push 0x12d79dd0 */
  push32((uint32_t)(0x12d79dd0u));
  /* 12d65e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65e66 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12d65e68 push 0x12d79dfc */
  push32((uint32_t)(0x12d79dfcu));
  /* 12d65e6d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d65e6f call 0x12d61e40 */
  push32(0x12d65e74u); f_12d61e40();
  /* 12d65e74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65e77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65e7a jne 0x12d65e7d */
  if (!C.zf) goto L_12d65e7d;
  /* 12d65e7c int3  */
  x86_unimpl("int3 @ 0x12d65e7c");
L_12d65e7d:;
  /* 12d65e7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d65e7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d65e81 jne 0x12d65e59 */
  if (!C.zf) goto L_12d65e59;
  /* 12d65e83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65e86 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12d65e8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65e90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65e93 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d65e96 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65e99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65e9c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d65e9e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ea1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d65ea4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d65ea7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d65eaa push ecx */
  push32((uint32_t)(ECX));
  /* 12d65eab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d65eae push edx */
  push32((uint32_t)(EDX));
  /* 12d65eaf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65eb2 push eax */
  push32((uint32_t)(EAX));
  /* 12d65eb3 call 0x12d69d10 */
  push32(0x12d65eb8u); f_12d69d10();
  /* 12d65eb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65ebb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d65ebe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ec1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d65ec4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65ec7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65eca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d65ecd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ed0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65ed4 jl 0x12d65ef8 */
  if ((C.sf!=C.of)) goto L_12d65ef8;
  /* 12d65ed6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ed9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d65edb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d65ede xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d65ee0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d65ee6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d65ee9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65eec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d65eee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65ef1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65ef4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d65ef6 jmp 0x12d65f09 */
  goto L_12d65f09;
L_12d65ef8:;
  /* 12d65ef8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d65efb push edx */
  push32((uint32_t)(EDX));
  /* 12d65efc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d65efe call 0x12d69a90 */
  push32(0x12d65f03u); f_12d69a90();
  /* 12d65f03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65f06 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12d65f09:;
  /* 12d65f09 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d65f0c pop edi */
  EDI = (pop32());
  /* 12d65f0d pop esi */
  ESI = (pop32());
  /* 12d65f0e pop ebx */
  EBX = (pop32());
  /* 12d65f0f mov esp, ebp */
  ESP = (EBP);
  /* 12d65f11 pop ebp */
  EBP = (pop32());
  /* 12d65f12 ret  */
  ESPCHK(0x12d65e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x12d65f20 (47 bytes, 17 insns) */
void f_12d65f20(void) {
  FTRACE(0x12d65f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65f20 push ecx */
  push32((uint32_t)(ECX));
  /* 12d65f21 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f26 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12d65f2a jb 0x12d65f40 */
  if (C.cf) goto L_12d65f40;
L_12d65f2c:;
  /* 12d65f2c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65f32 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65f37 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12d65f39 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f3e jae 0x12d65f2c */
  if (!C.cf) goto L_12d65f2c;
L_12d65f40:;
  /* 12d65f40 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65f42 mov eax, esp */
  EAX = (ESP);
  /* 12d65f44 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12d65f46 mov esp, ecx */
  ESP = (ECX);
  /* 12d65f48 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d65f4a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d65f4d push eax */
  push32((uint32_t)(EAX));
  /* 12d65f4e ret  */
  ESPCHK(0x12d65f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x12d65f50 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12d65f50(void) {
  FTRACE(0x12d65f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d65f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d65f51 mov ebp, esp */
  EBP = (ESP);
  /* 12d65f53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65f56 push esi */
  push32((uint32_t)(ESI));
  /* 12d65f57 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f5b je 0x12d65f63 */
  if (C.zf) goto L_12d65f63;
  /* 12d65f5d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f61 jne 0x12d65f68 */
  if (!C.zf) goto L_12d65f68;
L_12d65f63:;
  /* 12d65f63 jmp 0x12d66138 */
  goto L_12d66138;
L_12d65f68:;
  /* 12d65f68 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f6c je 0x12d65f84 */
  if (C.zf) goto L_12d65f84;
  /* 12d65f6e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f72 je 0x12d65f84 */
  if (C.zf) goto L_12d65f84;
  /* 12d65f74 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f78 je 0x12d65f84 */
  if (C.zf) goto L_12d65f84;
  /* 12d65f7a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f7e jne 0x12d66061 */
  if (!C.zf) goto L_12d66061;
L_12d65f84:;
  /* 12d65f84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d65f86 call 0x12d66780 */
  push32(0x12d65f8bu); f_12d66780();
  /* 12d65f8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65f8e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f92 je 0x12d65f9a */
  if (C.zf) goto L_12d65f9a;
  /* 12d65f94 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65f98 jne 0x12d65fdf */
  if (!C.zf) goto L_12d65fdf;
L_12d65f9a:;
  /* 12d65f9a cmp dword ptr [0x12d7e5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65fa1 jne 0x12d65fdf */
  if (!C.zf) goto L_12d65fdf;
  /* 12d65fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d65fa5 push 0x12d66180 */
  push32((uint32_t)(0x12d66180u));
  /* 12d65faa call dword ptr [0x12d80318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d80318))), 0x12d65fb0u);
  /* 12d65fb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65fb3 jne 0x12d65fc1 */
  if (!C.zf) goto L_12d65fc1;
  /* 12d65fb5 mov dword ptr [0x12d7e5f4], 1 */
  w32((uint32_t)(0x12d7e5f4), (0x1u));
  /* 12d65fbf jmp 0x12d65fdf */
  goto L_12d65fdf;
L_12d65fc1:;
  /* 12d65fc1 call dword ptr [0x12d802d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802d0))), 0x12d65fc7u);
  /* 12d65fc7 mov esi, eax */
  ESI = (EAX);
  /* 12d65fc9 call 0x12d6ac60 */
  push32(0x12d65fceu); f_12d6ac60();
  /* 12d65fce mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12d65fd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d65fd2 call 0x12d66820 */
  push32(0x12d65fd7u); f_12d66820();
  /* 12d65fd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d65fda jmp 0x12d66138 */
  goto L_12d66138;
L_12d65fdf:;
  /* 12d65fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d65fe2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d65fe5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d65fe8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d65feb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d65fee cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d65ff2 ja 0x12d66052 */
  if ((!C.cf&&!C.zf)) goto L_12d66052;
  /* 12d65ff4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d65ff7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d65ff9 mov dl, byte ptr [eax + 0x12d6615f] */
  DL = (r8((uint32_t)(EAX + 0x12d6615f)));
  /* 12d65fff jmp dword ptr [edx*4 + 0x12d6614b] */
  switch (EDX) {
    case 0: goto L_12d66006;
    case 1: goto L_12d66040;
    case 2: goto L_12d6601a;
    case 3: goto L_12d6602d;
    case 4: goto L_12d66052;
    default: x86_unimpl("switch@0x12d65fff out of table"); return;
  }
L_12d66006:;
  /* 12d66006 mov ecx, dword ptr [0x12d7e5e4] */
  ECX = (r32((uint32_t)(0x12d7e5e4)));
  /* 12d6600c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d6600f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66012 mov dword ptr [0x12d7e5e4], edx */
  w32((uint32_t)(0x12d7e5e4), (EDX));
  /* 12d66018 jmp 0x12d66052 */
  goto L_12d66052;
L_12d6601a:;
  /* 12d6601a mov eax, dword ptr [0x12d7e5e8] */
  EAX = (r32((uint32_t)(0x12d7e5e8)));
  /* 12d6601f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d66022 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66025 mov dword ptr [0x12d7e5e8], ecx */
  w32((uint32_t)(0x12d7e5e8), (ECX));
  /* 12d6602b jmp 0x12d66052 */
  goto L_12d66052;
L_12d6602d:;
  /* 12d6602d mov edx, dword ptr [0x12d7e5ec] */
  EDX = (r32((uint32_t)(0x12d7e5ec)));
  /* 12d66033 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d66036 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66039 mov dword ptr [0x12d7e5ec], eax */
  w32((uint32_t)(0x12d7e5ec), (EAX));
  /* 12d6603e jmp 0x12d66052 */
  goto L_12d66052;
L_12d66040:;
  /* 12d66040 mov ecx, dword ptr [0x12d7e5f0] */
  ECX = (r32((uint32_t)(0x12d7e5f0)));
  /* 12d66046 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d66049 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6604c mov dword ptr [0x12d7e5f0], edx */
  w32((uint32_t)(0x12d7e5f0), (EDX));
L_12d66052:;
  /* 12d66052 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d66054 call 0x12d66820 */
  push32(0x12d66059u); f_12d66820();
  /* 12d66059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6605c jmp 0x12d66133 */
  goto L_12d66133;
L_12d66061:;
  /* 12d66061 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66065 je 0x12d66078 */
  if (C.zf) goto L_12d66078;
  /* 12d66067 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6606b je 0x12d66078 */
  if (C.zf) goto L_12d66078;
  /* 12d6606d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66071 je 0x12d66078 */
  if (C.zf) goto L_12d66078;
  /* 12d66073 jmp 0x12d66138 */
  goto L_12d66138;
L_12d66078:;
  /* 12d66078 call 0x12d627c0 */
  push32(0x12d6607du); f_12d627c0();
  /* 12d6607d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d66080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66083 cmp dword ptr [eax + 0x50], 0x12d7cc20 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12d7cc20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6608a jne 0x12d660d5 */
  if (!C.zf) goto L_12d660d5;
  /* 12d6608c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12d66091 push 0x12d79e08 */
  push32((uint32_t)(0x12d79e08u));
  /* 12d66096 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d66098 mov ecx, dword ptr [0x12d7cca0] */
  ECX = (r32((uint32_t)(0x12d7cca0)));
  /* 12d6609e push ecx */
  push32((uint32_t)(ECX));
  /* 12d6609f call 0x12d62d80 */
  push32(0x12d660a4u); f_12d62d80();
  /* 12d660a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d660a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d660aa mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12d660ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d660b0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d660b4 je 0x12d660d3 */
  if (C.zf) goto L_12d660d3;
  /* 12d660b6 mov ecx, dword ptr [0x12d7cca0] */
  ECX = (r32((uint32_t)(0x12d7cca0)));
  /* 12d660bc push ecx */
  push32((uint32_t)(ECX));
  /* 12d660bd push 0x12d7cc20 */
  push32((uint32_t)(0x12d7cc20u));
  /* 12d660c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d660c5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12d660c8 push eax */
  push32((uint32_t)(EAX));
  /* 12d660c9 call 0x12d69660 */
  push32(0x12d660ceu); f_12d69660();
  /* 12d660ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d660d1 jmp 0x12d660d5 */
  goto L_12d660d5;
L_12d660d3:;
  /* 12d660d3 jmp 0x12d66138 */
  goto L_12d66138;
L_12d660d5:;
  /* 12d660d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d660d8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d660db push edx */
  push32((uint32_t)(EDX));
  /* 12d660dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d660df push eax */
  push32((uint32_t)(EAX));
  /* 12d660e0 call 0x12d66460 */
  push32(0x12d660e5u); f_12d66460();
  /* 12d660e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d660e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d660eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d660ef jne 0x12d660f3 */
  if (!C.zf) goto L_12d660f3;
  /* 12d660f1 jmp 0x12d66138 */
  goto L_12d66138;
L_12d660f3:;
  /* 12d660f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d660f6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d660f9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d660fc:;
  /* 12d660fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d660ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d66102 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66105 jne 0x12d66133 */
  if (!C.zf) goto L_12d66133;
  /* 12d66107 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d6610a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6610d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d66110 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66113 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66116 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d66119 mov edx, dword ptr [0x12d7cca4] */
  EDX = (r32((uint32_t)(0x12d7cca4)));
  /* 12d6611f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d66122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66125 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12d66128 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6612a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6612d jb 0x12d66131 */
  if (C.cf) goto L_12d66131;
  /* 12d6612f jmp 0x12d66133 */
  goto L_12d66133;
L_12d66131:;
  /* 12d66131 jmp 0x12d660fc */
  goto L_12d660fc;
L_12d66133:;
  /* 12d66133 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d66136 jmp 0x12d66146 */
  goto L_12d66146;
L_12d66138:;
  /* 12d66138 call 0x12d6ac50 */
  push32(0x12d6613du); f_12d6ac50();
  /* 12d6613d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12d66143 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d66146:;
  /* 12d66146 pop esi */
  ESI = (pop32());
  /* 12d66147 mov esp, ebp */
  ESP = (EBP);
  /* 12d66149 pop ebp */
  EBP = (pop32());
  /* 12d6614a ret  */
  ESPCHK(0x12d65f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006180 @ 0x12d66180 (146 bytes, 45 insns) */
void f_12d66180(void) {
  FTRACE(0x12d66180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66180 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66181 mov ebp, esp */
  EBP = (ESP);
  /* 12d66183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66186 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d66188 call 0x12d66780 */
  push32(0x12d6618du); f_12d66780();
  /* 12d6618d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66190 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66194 jne 0x12d661ae */
  if (!C.zf) goto L_12d661ae;
  /* 12d66196 mov dword ptr [ebp - 8], 0x12d7e5e4 */
  w32((uint32_t)(EBP + -0x8), (0x12d7e5e4u));
  /* 12d6619d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d661a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d661a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d661a5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d661ac jmp 0x12d661c4 */
  goto L_12d661c4;
L_12d661ae:;
  /* 12d661ae mov dword ptr [ebp - 8], 0x12d7e5e8 */
  w32((uint32_t)(EBP + -0x8), (0x12d7e5e8u));
  /* 12d661b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d661b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d661ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d661bd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12d661c4:;
  /* 12d661c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d661c8 jne 0x12d661d8 */
  if (!C.zf) goto L_12d661d8;
  /* 12d661ca push 1 */
  push32((uint32_t)(0x1u));
  /* 12d661cc call 0x12d66820 */
  push32(0x12d661d1u); f_12d66820();
  /* 12d661d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d661d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d661d6 jmp 0x12d6620c */
  goto L_12d6620c;
L_12d661d8:;
  /* 12d661d8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d661dc je 0x12d661fd */
  if (C.zf) goto L_12d661fd;
  /* 12d661de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d661e1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12d661e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d661e9 call 0x12d66820 */
  push32(0x12d661eeu); f_12d66820();
  /* 12d661ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d661f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d661f4 push edx */
  push32((uint32_t)(EDX));
  /* 12d661f5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12d661f8u);
  /* 12d661f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d661fb jmp 0x12d66207 */
  goto L_12d66207;
L_12d661fd:;
  /* 12d661fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d661ff call 0x12d66820 */
  push32(0x12d66204u); f_12d66820();
  /* 12d66204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66207:;
  /* 12d66207 mov eax, 1 */
  EAX = (0x1u);
L_12d6620c:;
  /* 12d6620c mov esp, ebp */
  ESP = (EBP);
  /* 12d6620e pop ebp */
  EBP = (pop32());
  /* 12d6620f ret 4 */
  ESPCHK(0x12d66180u, _esp0);
  ESP += 8; return;
}

/* FUN_10006220 @ 0x12d66220 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12d66220(void) {
  FTRACE(0x12d66220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66220 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66221 mov ebp, esp */
  EBP = (ESP);
  /* 12d66223 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66226 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d6622d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d66230 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d66233 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d66236 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d66239 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d6623c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66240 ja 0x12d662ee */
  if ((!C.cf&&!C.zf)) goto L_12d662ee;
  /* 12d66246 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d66249 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6624b mov dl, byte ptr [eax + 0x12d66442] */
  DL = (r8((uint32_t)(EAX + 0x12d66442)));
  /* 12d66251 jmp dword ptr [edx*4 + 0x12d6642a] */
  switch (EDX) {
    case 0: goto L_12d66258;
    case 1: goto L_12d662c3;
    case 2: goto L_12d662a9;
    case 3: goto L_12d66275;
    case 4: goto L_12d6628f;
    case 5: goto L_12d662ee;
    default: x86_unimpl("switch@0x12d66251 out of table"); return;
  }
L_12d66258:;
  /* 12d66258 mov dword ptr [ebp - 0x18], 0x12d7e5e4 */
  w32((uint32_t)(EBP + -0x18), (0x12d7e5e4u));
  /* 12d6625f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d66262 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d66264 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d66267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d6626a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6626d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d66270 jmp 0x12d662f6 */
  goto L_12d662f6;
L_12d66275:;
  /* 12d66275 mov dword ptr [ebp - 0x18], 0x12d7e5e8 */
  w32((uint32_t)(EBP + -0x18), (0x12d7e5e8u));
  /* 12d6627c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d6627f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d66281 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d66284 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d66287 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6628a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d6628d jmp 0x12d662f6 */
  goto L_12d662f6;
L_12d6628f:;
  /* 12d6628f mov dword ptr [ebp - 0x18], 0x12d7e5ec */
  w32((uint32_t)(EBP + -0x18), (0x12d7e5ecu));
  /* 12d66296 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d66299 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d6629b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d6629e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d662a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d662a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d662a7 jmp 0x12d662f6 */
  goto L_12d662f6;
L_12d662a9:;
  /* 12d662a9 mov dword ptr [ebp - 0x18], 0x12d7e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x12d7e5f0u));
  /* 12d662b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d662b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d662b5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d662b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d662bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d662be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d662c1 jmp 0x12d662f6 */
  goto L_12d662f6;
L_12d662c3:;
  /* 12d662c3 call 0x12d627c0 */
  push32(0x12d662c8u); f_12d627c0();
  /* 12d662c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d662cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d662ce mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d662d1 push edx */
  push32((uint32_t)(EDX));
  /* 12d662d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d662d5 push eax */
  push32((uint32_t)(EAX));
  /* 12d662d6 call 0x12d66460 */
  push32(0x12d662dbu); f_12d66460();
  /* 12d662db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d662de add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d662e1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d662e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d662e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d662e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d662ec jmp 0x12d662f6 */
  goto L_12d662f6;
L_12d662ee:;
  /* 12d662ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d662f1 jmp 0x12d66426 */
  goto L_12d66426;
L_12d662f6:;
  /* 12d662f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d662fa je 0x12d66306 */
  if (C.zf) goto L_12d66306;
  /* 12d662fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d662fe call 0x12d66780 */
  push32(0x12d66303u); f_12d66780();
  /* 12d66303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66306:;
  /* 12d66306 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6630a jne 0x12d66323 */
  if (!C.zf) goto L_12d66323;
  /* 12d6630c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66310 je 0x12d6631c */
  if (C.zf) goto L_12d6631c;
  /* 12d66312 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d66314 call 0x12d66820 */
  push32(0x12d66319u); f_12d66820();
  /* 12d66319 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d6631c:;
  /* 12d6631c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6631e jmp 0x12d66426 */
  goto L_12d66426;
L_12d66323:;
  /* 12d66323 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66327 jne 0x12d66340 */
  if (!C.zf) goto L_12d66340;
  /* 12d66329 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6632d je 0x12d66339 */
  if (C.zf) goto L_12d66339;
  /* 12d6632f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d66331 call 0x12d66820 */
  push32(0x12d66336u); f_12d66820();
  /* 12d66336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66339:;
  /* 12d66339 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d6633b call 0x12d62540 */
  push32(0x12d66340u); f_12d62540();
L_12d66340:;
  /* 12d66340 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66344 je 0x12d66352 */
  if (C.zf) goto L_12d66352;
  /* 12d66346 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6634a je 0x12d66352 */
  if (C.zf) goto L_12d66352;
  /* 12d6634c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66350 jne 0x12d6637e */
  if (!C.zf) goto L_12d6637e;
L_12d66352:;
  /* 12d66352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66355 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12d66358 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d6635b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6635e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12d66365 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66369 jne 0x12d6637e */
  if (!C.zf) goto L_12d6637e;
  /* 12d6636b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6636e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12d66371 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d66374 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66377 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12d6637e:;
  /* 12d6637e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66382 jne 0x12d663c0 */
  if (!C.zf) goto L_12d663c0;
  /* 12d66384 mov eax, dword ptr [0x12d7cc98] */
  EAX = (r32((uint32_t)(0x12d7cc98)));
  /* 12d66389 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d6638c jmp 0x12d66397 */
  goto L_12d66397;
L_12d6638e:;
  /* 12d6638e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d66391 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66394 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d66397:;
  /* 12d66397 mov edx, dword ptr [0x12d7cc98] */
  EDX = (r32((uint32_t)(0x12d7cc98)));
  /* 12d6639d add edx, dword ptr [0x12d7cc9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d7cc9c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d663a3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d663a6 jge 0x12d663be */
  if ((C.sf==C.of)) goto L_12d663be;
  /* 12d663a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d663ab imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d663ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d663b1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d663b4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12d663bc jmp 0x12d6638e */
  goto L_12d6638e;
L_12d663be:;
  /* 12d663be jmp 0x12d663c9 */
  goto L_12d663c9;
L_12d663c0:;
  /* 12d663c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d663c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d663c9:;
  /* 12d663c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d663cd je 0x12d663d9 */
  if (C.zf) goto L_12d663d9;
  /* 12d663cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d663d1 call 0x12d66820 */
  push32(0x12d663d6u); f_12d66820();
  /* 12d663d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d663d9:;
  /* 12d663d9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d663dd jne 0x12d663f0 */
  if (!C.zf) goto L_12d663f0;
  /* 12d663df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d663e2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12d663e5 push edx */
  push32((uint32_t)(EDX));
  /* 12d663e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d663e8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12d663ebu);
  /* 12d663eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d663ee jmp 0x12d663fa */
  goto L_12d663fa;
L_12d663f0:;
  /* 12d663f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d663f3 push eax */
  push32((uint32_t)(EAX));
  /* 12d663f4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12d663f7u);
  /* 12d663f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d663fa:;
  /* 12d663fa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d663fe je 0x12d6640c */
  if (C.zf) goto L_12d6640c;
  /* 12d66400 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66404 je 0x12d6640c */
  if (C.zf) goto L_12d6640c;
  /* 12d66406 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6640a jne 0x12d66424 */
  if (!C.zf) goto L_12d66424;
L_12d6640c:;
  /* 12d6640c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6640f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d66412 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12d66415 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66419 jne 0x12d66424 */
  if (!C.zf) goto L_12d66424;
  /* 12d6641b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6641e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66421 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12d66424:;
  /* 12d66424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d66426:;
  /* 12d66426 mov esp, ebp */
  ESP = (EBP);
  /* 12d66428 pop ebp */
  EBP = (pop32());
  /* 12d66429 ret  */
  ESPCHK(0x12d66220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x12d66460 (91 bytes, 35 insns) */
void f_12d66460(void) {
  FTRACE(0x12d66460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d66460 push ebp */
  push32((uint32_t)(EBP));
  /* 12d66461 mov ebp, esp */
  EBP = (ESP);
  /* 12d66463 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66467 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d6646a:;
  /* 12d6646a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d6646d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d66470 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66473 je 0x12d66493 */
  if (C.zf) goto L_12d66493;
  /* 12d66475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66478 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6647b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d6647e mov ecx, dword ptr [0x12d7cca4] */
  ECX = (r32((uint32_t)(0x12d7cca4)));
  /* 12d66484 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d66487 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6648a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6648c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6648f jae 0x12d66493 */
  if (!C.cf) goto L_12d66493;
  /* 12d66491 jmp 0x12d6646a */
  goto L_12d6646a;
L_12d66493:;
  /* 12d66493 mov eax, dword ptr [0x12d7cca4] */
  EAX = (r32((uint32_t)(0x12d7cca4)));
  /* 12d66498 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d6649b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d6649e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d664a0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d664a3 jae 0x12d664b5 */
  if (!C.cf) goto L_12d664b5;
  /* 12d664a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d664a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d664ab cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d664ae jne 0x12d664b5 */
  if (!C.zf) goto L_12d664b5;
  /* 12d664b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d664b3 jmp 0x12d664b7 */
  goto L_12d664b7;
L_12d664b5:;
  /* 12d664b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d664b7:;
  /* 12d664b7 mov esp, ebp */
  ESP = (EBP);
  /* 12d664b9 pop ebp */
  EBP = (pop32());
  /* 12d664ba ret  */
  ESPCHK(0x12d66460u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c0 @ 0x12d664c0 (13 bytes, 6 insns) */
void f_12d664c0(void) {
  FTRACE(0x12d664c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d664c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d664c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d664c3 call 0x12d627c0 */
  push32(0x12d664c8u); f_12d627c0();
  /* 12d664c8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d664cb pop ebp */
  EBP = (pop32());
  /* 12d664cc ret  */
  ESPCHK(0x12d664c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x12d664d0 (13 bytes, 6 insns) */
void f_12d664d0(void) {
  FTRACE(0x12d664d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d664d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d664d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d664d3 call 0x12d627c0 */
  push32(0x12d664d8u); f_12d627c0();
  /* 12d664d8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d664db pop ebp */
  EBP = (pop32());
  /* 12d664dc ret  */
  ESPCHK(0x12d664d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064e0 @ 0x12d664e0 (187 bytes, 54 insns) */
void f_12d664e0(void) {
  FTRACE(0x12d664e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d664e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d664e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d664e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d664e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d664ed cmp dword ptr [0x12d7e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d664f4 jne 0x12d66553 */
  if (!C.zf) goto L_12d66553;
  /* 12d664f6 push 0x12d79234 */
  push32((uint32_t)(0x12d79234u));
  /* 12d664fb call dword ptr [0x12d802a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802a0))), 0x12d66501u);
  /* 12d66501 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d66504 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66508 je 0x12d66527 */
  if (C.zf) goto L_12d66527;
  /* 12d6650a push 0x12d79e38 */
  push32((uint32_t)(0x12d79e38u));
  /* 12d6650f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66512 push eax */
  push32((uint32_t)(EAX));
  /* 12d66513 call dword ptr [0x12d8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8029c))), 0x12d66519u);
  /* 12d66519 mov dword ptr [0x12d7e5f8], eax */
  w32((uint32_t)(0x12d7e5f8), (EAX));
  /* 12d6651e cmp dword ptr [0x12d7e5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66525 jne 0x12d6652b */
  if (!C.zf) goto L_12d6652b;
L_12d66527:;
  /* 12d66527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66529 jmp 0x12d66597 */
  goto L_12d66597;
L_12d6652b:;
  /* 12d6652b push 0x12d79e28 */
  push32((uint32_t)(0x12d79e28u));
  /* 12d66530 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66533 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66534 call dword ptr [0x12d8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8029c))), 0x12d6653au);
  /* 12d6653a mov dword ptr [0x12d7e5fc], eax */
  w32((uint32_t)(0x12d7e5fc), (EAX));
  /* 12d6653f push 0x12d79e14 */
  push32((uint32_t)(0x12d79e14u));
  /* 12d66544 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d66547 push edx */
  push32((uint32_t)(EDX));
  /* 12d66548 call dword ptr [0x12d8029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8029c))), 0x12d6654eu);
  /* 12d6654e mov dword ptr [0x12d7e600], eax */
  w32((uint32_t)(0x12d7e600), (EAX));
L_12d66553:;
  /* 12d66553 cmp dword ptr [0x12d7e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6655a je 0x12d66565 */
  if (C.zf) goto L_12d66565;
  /* 12d6655c call dword ptr [0x12d7e5fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e5fc))), 0x12d66562u);
  /* 12d66562 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d66565:;
  /* 12d66565 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66569 je 0x12d66581 */
  if (C.zf) goto L_12d66581;
  /* 12d6656b cmp dword ptr [0x12d7e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d7e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66572 je 0x12d66581 */
  if (C.zf) goto L_12d66581;
  /* 12d66574 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66577 push eax */
  push32((uint32_t)(EAX));
  /* 12d66578 call dword ptr [0x12d7e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e600))), 0x12d6657eu);
  /* 12d6657e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d66581:;
  /* 12d66581 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d66584 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66585 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d66588 push edx */
  push32((uint32_t)(EDX));
  /* 12d66589 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d6658c push eax */
  push32((uint32_t)(EAX));
  /* 12d6658d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66590 push ecx */
  push32((uint32_t)(ECX));
  /* 12d66591 call dword ptr [0x12d7e5f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d7e5f8))), 0x12d66597u);
L_12d66597:;
  /* 12d66597 mov esp, ebp */
  ESP = (EBP);
  /* 12d66599 pop ebp */
  EBP = (pop32());
  /* 12d6659a ret  */
  ESPCHK(0x12d664e0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12d665a0 (254 bytes, 109 insns) */
void f_12d665a0(void) {
  FTRACE(0x12d665a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d665a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d665a4 push edi */
  push32((uint32_t)(EDI));
  /* 12d665a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d665a7 je 0x12d66623 */
  if (C.zf) goto L_12d66623;
  /* 12d665a9 push esi */
  push32((uint32_t)(ESI));
  /* 12d665aa push ebx */
  push32((uint32_t)(EBX));
  /* 12d665ab mov ebx, ecx */
  EBX = (ECX);
  /* 12d665ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12d665b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12d665b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12d665bb jne 0x12d665c4 */
  if (!C.zf) goto L_12d665c4;
  /* 12d665bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d665c0 jne 0x12d66631 */
  if (!C.zf) goto L_12d66631;
  /* 12d665c2 jmp 0x12d665e5 */
  goto L_12d665e5;
L_12d665c4:;
  /* 12d665c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d665c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d665c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d665c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d665ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d665cb je 0x12d665f2 */
  if (C.zf) goto L_12d665f2;
  /* 12d665cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d665cf je 0x12d665fa */
  if (C.zf) goto L_12d665fa;
  /* 12d665d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12d665d7 jne 0x12d665c4 */
  if (!C.zf) goto L_12d665c4;
  /* 12d665d9 mov ebx, ecx */
  EBX = (ECX);
  /* 12d665db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d665de jne 0x12d66631 */
  if (!C.zf) goto L_12d66631;
L_12d665e0:;
  /* 12d665e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12d665e3 je 0x12d665f2 */
  if (C.zf) goto L_12d665f2;
L_12d665e5:;
  /* 12d665e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d665e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d665e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d665ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d665eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d665ed je 0x12d6661e */
  if (C.zf) goto L_12d6661e;
  /* 12d665ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12d665f0 jne 0x12d665e5 */
  if (!C.zf) goto L_12d665e5;
L_12d665f2:;
  /* 12d665f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d665f6 pop ebx */
  EBX = (pop32());
  /* 12d665f7 pop esi */
  ESI = (pop32());
  /* 12d665f8 pop edi */
  EDI = (pop32());
  /* 12d665f9 ret  */
  ESPCHK(0x12d665a0u, _esp0);
  ESP += 4; return;
L_12d665fa:;
  /* 12d665fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d66600 je 0x12d66614 */
  if (C.zf) goto L_12d66614;
L_12d66602:;
  /* 12d66602 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d66604 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d66605 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d66606 je 0x12d66696 */
  if (C.zf) goto L_12d66696;
  /* 12d6660c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d66612 jne 0x12d66602 */
  if (!C.zf) goto L_12d66602;
L_12d66614:;
  /* 12d66614 mov ebx, ecx */
  EBX = (ECX);
  /* 12d66616 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d66619 jne 0x12d66687 */
  if (!C.zf) goto L_12d66687;
L_12d6661b:;
  /* 12d6661b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d6661d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12d6661e:;
  /* 12d6661e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12d6661f jne 0x12d6661b */
  if (!C.zf) goto L_12d6661b;
  /* 12d66621 pop ebx */
  EBX = (pop32());
  /* 12d66622 pop esi */
  ESI = (pop32());
L_12d66623:;
  /* 12d66623 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d66627 pop edi */
  EDI = (pop32());
  /* 12d66628 ret  */
  ESPCHK(0x12d665a0u, _esp0);
  ESP += 4; return;
L_12d66629:;
  /* 12d66629 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d6662b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6662e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d6662f je 0x12d665e0 */
  if (C.zf) goto L_12d665e0;
L_12d66631:;
  /* 12d66631 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d66636 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12d66638 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6663a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d6663d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d6663f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12d66641 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66644 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d66649 je 0x12d66629 */
  if (C.zf) goto L_12d66629;
  /* 12d6664b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d6664d je 0x12d6667b */
  if (C.zf) goto L_12d6667b;
  /* 12d6664f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12d66651 je 0x12d66671 */
  if (C.zf) goto L_12d66671;
  /* 12d66653 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d66659 je 0x12d66667 */
  if (C.zf) goto L_12d66667;
  /* 12d6665b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d66661 jne 0x12d66629 */
  if (!C.zf) goto L_12d66629;
  /* 12d66663 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d66665 jmp 0x12d6667f */
  goto L_12d6667f;
L_12d66667:;
  /* 12d66667 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d6666d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d6666f jmp 0x12d6667f */
  goto L_12d6667f;
L_12d66671:;
  /* 12d66671 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d66677 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d66679 jmp 0x12d6667f */
  goto L_12d6667f;
L_12d6667b:;
  /* 12d6667b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d6667d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12d6667f:;
  /* 12d6667f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d66682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d66684 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d66685 je 0x12d66691 */
  if (C.zf) goto L_12d66691;
L_12d66687:;
  /* 12d66687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d66689:;
  /* 12d66689 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12d6668b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d6668e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d6668f jne 0x12d66689 */
  if (!C.zf) goto L_12d66689;
L_12d66691:;
  /* 12d66691 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12d66694 jne 0x12d6661b */
  if (!C.zf) goto L_12d6661b;
L_12d66696:;
  /* 12d66696 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d6669a pop ebx */
  EBX = (pop32());
  /* 12d6669b pop esi */
  ESI = (pop32());
  /* 12d6669c pop edi */
  EDI = (pop32());
  /* 12d6669d ret  */
  ESPCHK(0x12d665a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066a0 @ 0x12d666a0 (55 bytes, 16 insns) */
void f_12d666a0(void) {
  FTRACE(0x12d666a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d666a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d666a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d666a3 mov eax, dword ptr [0x12d7cba4] */
  EAX = (r32((uint32_t)(0x12d7cba4)));
  /* 12d666a8 push eax */
  push32((uint32_t)(EAX));
  /* 12d666a9 call dword ptr [0x12d8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8031c))), 0x12d666afu);
  /* 12d666af mov ecx, dword ptr [0x12d7cb94] */
  ECX = (r32((uint32_t)(0x12d7cb94)));
  /* 12d666b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d666b6 call dword ptr [0x12d8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8031c))), 0x12d666bcu);
  /* 12d666bc mov edx, dword ptr [0x12d7cb84] */
  EDX = (r32((uint32_t)(0x12d7cb84)));
  /* 12d666c2 push edx */
  push32((uint32_t)(EDX));
  /* 12d666c3 call dword ptr [0x12d8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8031c))), 0x12d666c9u);
  /* 12d666c9 mov eax, dword ptr [0x12d7cb64] */
  EAX = (r32((uint32_t)(0x12d7cb64)));
  /* 12d666ce push eax */
  push32((uint32_t)(EAX));
  /* 12d666cf call dword ptr [0x12d8031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d8031c))), 0x12d666d5u);
  /* 12d666d5 pop ebp */
  EBP = (pop32());
  /* 12d666d6 ret  */
  ESPCHK(0x12d666a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x12d666e0 (159 bytes, 47 insns) */
void f_12d666e0(void) {
  FTRACE(0x12d666e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d666e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d666e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d666e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d666e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d666eb jmp 0x12d666f6 */
  goto L_12d666f6;
L_12d666ed:;
  /* 12d666ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d666f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d666f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d666f6:;
  /* 12d666f6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d666fa jge 0x12d66749 */
  if ((C.sf==C.of)) goto L_12d66749;
  /* 12d666fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d666ff cmp dword ptr [ecx*4 + 0x12d7cb60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d7cb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66707 je 0x12d66747 */
  if (C.zf) goto L_12d66747;
  /* 12d66709 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6670d je 0x12d66747 */
  if (C.zf) goto L_12d66747;
  /* 12d6670f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66713 je 0x12d66747 */
  if (C.zf) goto L_12d66747;
  /* 12d66715 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d66719 je 0x12d66747 */
  if (C.zf) goto L_12d66747;
  /* 12d6671b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d6671f je 0x12d66747 */
  if (C.zf) goto L_12d66747;
  /* 12d66721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66724 mov eax, dword ptr [edx*4 + 0x12d7cb60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d7cb60)));
  /* 12d6672b push eax */
  push32((uint32_t)(EAX));
  /* 12d6672c call dword ptr [0x12d802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e4))), 0x12d66732u);
  /* 12d66732 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d66734 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d66737 mov edx, dword ptr [ecx*4 + 0x12d7cb60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d7cb60)));
  /* 12d6673e push edx */
  push32((uint32_t)(EDX));
  /* 12d6673f call 0x12d63810 */
  push32(0x12d66744u); f_12d63810();
  /* 12d66744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d66747:;
  /* 12d66747 jmp 0x12d666ed */
  goto L_12d666ed;
L_12d66749:;
  /* 12d66749 mov eax, dword ptr [0x12d7cb84] */
  EAX = (r32((uint32_t)(0x12d7cb84)));
  /* 12d6674e push eax */
  push32((uint32_t)(EAX));
  /* 12d6674f call dword ptr [0x12d802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e4))), 0x12d66755u);
  /* 12d66755 mov ecx, dword ptr [0x12d7cb94] */
  ECX = (r32((uint32_t)(0x12d7cb94)));
  /* 12d6675b push ecx */
  push32((uint32_t)(ECX));
  /* 12d6675c call dword ptr [0x12d802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e4))), 0x12d66762u);
  /* 12d66762 mov edx, dword ptr [0x12d7cba4] */
  EDX = (r32((uint32_t)(0x12d7cba4)));
  /* 12d66768 push edx */
  push32((uint32_t)(EDX));
  /* 12d66769 call dword ptr [0x12d802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e4))), 0x12d6676fu);
  /* 12d6676f mov eax, dword ptr [0x12d7cb64] */
  EAX = (r32((uint32_t)(0x12d7cb64)));
  /* 12d66774 push eax */
  push32((uint32_t)(EAX));
  /* 12d66775 call dword ptr [0x12d802e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d802e4))), 0x12d6677bu);
  /* 12d6677b mov esp, ebp */
  ESP = (EBP);
  /* 12d6677d pop ebp */
  EBP = (pop32());
  /* 12d6677e ret  */
  ESPCHK(0x12d666e0u, _esp0);
  ESP += 4; return;
}

