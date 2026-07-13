#include "recomp.h"

/* OnInit @ 0x11721005 (5 bytes, 1 insns) */
void f_11721005(void) {
  FTRACE(0x11721005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721005 jmp 0x11721800 */
  f_11721800(); return;
}

/* thunk_FUN_100015b0 @ 0x1172100a (5 bytes, 1 insns) */
void f_1172100a(void) {
  FTRACE(0x1172100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172100a jmp 0x117215b0 */
  f_117215b0(); return;
}

/* thunk_FUN_100011f0 @ 0x1172100f (5 bytes, 1 insns) */
void f_1172100f(void) {
  FTRACE(0x1172100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172100f jmp 0x117211f0 */
  f_117211f0(); return;
}

/* thunk_FUN_100010a0 @ 0x11721014 (5 bytes, 1 insns) */
void f_11721014(void) {
  FTRACE(0x11721014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721014 jmp 0x117210a0 */
  f_117210a0(); return;
}

/* thunk_FUN_10001c10 @ 0x11721019 (5 bytes, 1 insns) */
void f_11721019(void) {
  FTRACE(0x11721019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721019 jmp 0x11721c10 */
  f_11721c10(); return;
}

/* thunk_FUN_10001100 @ 0x1172101e (5 bytes, 1 insns) */
void f_1172101e(void) {
  FTRACE(0x1172101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172101e jmp 0x11721100 */
  f_11721100(); return;
}

/* thunk_FUN_10001400 @ 0x11721023 (5 bytes, 1 insns) */
void f_11721023(void) {
  FTRACE(0x11721023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721023 jmp 0x11721400 */
  f_11721400(); return;
}

/* thunk_FUN_100013b0 @ 0x11721028 (5 bytes, 1 insns) */
void f_11721028(void) {
  FTRACE(0x11721028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721028 jmp 0x117213b0 */
  f_117213b0(); return;
}

/* thunk_FUN_10001230 @ 0x1172102d (5 bytes, 1 insns) */
void f_1172102d(void) {
  FTRACE(0x1172102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172102d jmp 0x11721230 */
  f_11721230(); return;
}

/* ProcessScenary @ 0x11721032 (5 bytes, 1 insns) */
void f_11721032(void) {
  FTRACE(0x11721032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721032 jmp 0x11721eb0 */
  f_11721eb0(); return;
}

/* thunk_FUN_100011c0 @ 0x11721037 (5 bytes, 1 insns) */
void f_11721037(void) {
  FTRACE(0x11721037u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721037 jmp 0x117211c0 */
  f_117211c0(); return;
}

/* thunk_FUN_10001540 @ 0x1172103c (5 bytes, 1 insns) */
void f_1172103c(void) {
  FTRACE(0x1172103cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172103c jmp 0x11721540 */
  f_11721540(); return;
}

/* thunk_FUN_10001140 @ 0x11721041 (5 bytes, 1 insns) */
void f_11721041(void) {
  FTRACE(0x11721041u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721041 jmp 0x11721140 */
  f_11721140(); return;
}

/* thunk_FUN_10001270 @ 0x11721046 (5 bytes, 1 insns) */
void f_11721046(void) {
  FTRACE(0x11721046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721046 jmp 0x11721270 */
  f_11721270(); return;
}

/* thunk_FUN_100012b0 @ 0x1172104b (5 bytes, 1 insns) */
void f_1172104b(void) {
  FTRACE(0x1172104bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172104b jmp 0x117212b0 */
  f_117212b0(); return;
}

/* FUN_100010a0 @ 0x117210a0 (67 bytes, 26 insns) */
void f_117210a0(void) {
  FTRACE(0x117210a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117210a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117210a1 mov ebp, esp */
  EBP = (ESP);
  /* 117210a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117210a6 push ebx */
  push32((uint32_t)(EBX));
  /* 117210a7 push esi */
  push32((uint32_t)(ESI));
  /* 117210a8 push edi */
  push32((uint32_t)(EDI));
  /* 117210a9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 117210ac mov ecx, 0x11 */
  ECX = (0x11u);
  /* 117210b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117210b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117210b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117210bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117210be cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117210c2 je 0x117210c6 */
  if (C.zf) goto L_117210c6;
  /* 117210c4 jmp 0x117210cb */
  goto L_117210cb;
L_117210c6:;
  /* 117210c6 call 0x11721005 */
  push32(0x117210cbu); f_11721005();
L_117210cb:;
  /* 117210cb mov eax, 1 */
  EAX = (0x1u);
  /* 117210d0 pop edi */
  EDI = (pop32());
  /* 117210d1 pop esi */
  ESI = (pop32());
  /* 117210d2 pop ebx */
  EBX = (pop32());
  /* 117210d3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117210d6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117210d8 call 0x117228e0 */
  push32(0x117210ddu); f_117228e0();
  /* 117210dd mov esp, ebp */
  ESP = (EBP);
  /* 117210df pop ebp */
  EBP = (pop32());
  /* 117210e0 ret 0xc */
  ESPCHK(0x117210a0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001100 @ 0x11721100 (49 bytes, 22 insns) */
void f_11721100(void) {
  FTRACE(0x11721100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721100 push ebp */
  push32((uint32_t)(EBP));
  /* 11721101 mov ebp, esp */
  EBP = (ESP);
  /* 11721103 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721106 push ebx */
  push32((uint32_t)(EBX));
  /* 11721107 push esi */
  push32((uint32_t)(ESI));
  /* 11721108 push edi */
  push32((uint32_t)(EDI));
  /* 11721109 push ecx */
  push32((uint32_t)(ECX));
  /* 1172110a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1172110d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11721112 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721117 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721119 pop ecx */
  ECX = (pop32());
  /* 1172111a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172111d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721120 mov dword ptr [eax + 0x2c], 0 */
  w32((uint32_t)(EAX + 0x2c), (0x0u));
  /* 11721127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172112a pop edi */
  EDI = (pop32());
  /* 1172112b pop esi */
  ESI = (pop32());
  /* 1172112c pop ebx */
  EBX = (pop32());
  /* 1172112d mov esp, ebp */
  ESP = (EBP);
  /* 1172112f pop ebp */
  EBP = (pop32());
  /* 11721130 ret  */
  ESPCHK(0x11721100u, _esp0);
  ESP += 4; return;
}

/* FUN_10001140 @ 0x11721140 (95 bytes, 35 insns) */
void f_11721140(void) {
  FTRACE(0x11721140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721140 push ebp */
  push32((uint32_t)(EBP));
  /* 11721141 mov ebp, esp */
  EBP = (ESP);
  /* 11721143 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721146 push ebx */
  push32((uint32_t)(EBX));
  /* 11721147 push esi */
  push32((uint32_t)(ESI));
  /* 11721148 push edi */
  push32((uint32_t)(EDI));
  /* 11721149 push ecx */
  push32((uint32_t)(ECX));
  /* 1172114a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1172114d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11721152 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721157 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721159 pop ecx */
  ECX = (pop32());
  /* 1172115a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172115d mov ecx, 0xb */
  ECX = (0xbu);
  /* 11721162 lea esi, [ebp + 8] */
  ESI = ((uint32_t)(EBP + 0x8));
  /* 11721165 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11721168 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172116a mov esi, esp */
  ESI = (ESP);
  /* 1172116c call dword ptr [0x11755450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755450))), 0x11721172u);
  /* 11721172 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721174 call 0x117228e0 */
  push32(0x11721179u); f_117228e0();
  /* 11721179 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172117c mov dword ptr [ecx + 0x30], eax */
  w32((uint32_t)(ECX + 0x30), (EAX));
  /* 1172117f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721182 mov dword ptr [edx + 0x2c], 0 */
  w32((uint32_t)(EDX + 0x2c), (0x0u));
  /* 11721189 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172118c pop edi */
  EDI = (pop32());
  /* 1172118d pop esi */
  ESI = (pop32());
  /* 1172118e pop ebx */
  EBX = (pop32());
  /* 1172118f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721192 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721194 call 0x117228e0 */
  push32(0x11721199u); f_117228e0();
  /* 11721199 mov esp, ebp */
  ESP = (EBP);
  /* 1172119b pop ebp */
  EBP = (pop32());
  /* 1172119c ret 0x2c */
  ESPCHK(0x11721140u, _esp0);
  ESP += 48; return;
}

/* FUN_100011c0 @ 0x117211c0 (36 bytes, 19 insns) */
void f_117211c0(void) {
  FTRACE(0x117211c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117211c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117211c1 mov ebp, esp */
  EBP = (ESP);
  /* 117211c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117211c6 push ebx */
  push32((uint32_t)(EBX));
  /* 117211c7 push esi */
  push32((uint32_t)(ESI));
  /* 117211c8 push edi */
  push32((uint32_t)(EDI));
  /* 117211c9 push ecx */
  push32((uint32_t)(ECX));
  /* 117211ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 117211cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 117211d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117211d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117211d9 pop ecx */
  ECX = (pop32());
  /* 117211da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117211dd pop edi */
  EDI = (pop32());
  /* 117211de pop esi */
  ESI = (pop32());
  /* 117211df pop ebx */
  EBX = (pop32());
  /* 117211e0 mov esp, ebp */
  ESP = (EBP);
  /* 117211e2 pop ebp */
  EBP = (pop32());
  /* 117211e3 ret  */
  ESPCHK(0x117211c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100011f0 @ 0x117211f0 (47 bytes, 22 insns) */
void f_117211f0(void) {
  FTRACE(0x117211f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117211f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117211f1 mov ebp, esp */
  EBP = (ESP);
  /* 117211f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117211f6 push ebx */
  push32((uint32_t)(EBX));
  /* 117211f7 push esi */
  push32((uint32_t)(ESI));
  /* 117211f8 push edi */
  push32((uint32_t)(EDI));
  /* 117211f9 push ecx */
  push32((uint32_t)(ECX));
  /* 117211fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 117211fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11721202 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721207 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721209 pop ecx */
  ECX = (pop32());
  /* 1172120a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172120d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721210 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11721213 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 11721216 pop edi */
  EDI = (pop32());
  /* 11721217 pop esi */
  ESI = (pop32());
  /* 11721218 pop ebx */
  EBX = (pop32());
  /* 11721219 mov esp, ebp */
  ESP = (EBP);
  /* 1172121b pop ebp */
  EBP = (pop32());
  /* 1172121c ret 4 */
  ESPCHK(0x117211f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001230 @ 0x11721230 (42 bytes, 21 insns) */
void f_11721230(void) {
  FTRACE(0x11721230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721230 push ebp */
  push32((uint32_t)(EBP));
  /* 11721231 mov ebp, esp */
  EBP = (ESP);
  /* 11721233 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721236 push ebx */
  push32((uint32_t)(EBX));
  /* 11721237 push esi */
  push32((uint32_t)(ESI));
  /* 11721238 push edi */
  push32((uint32_t)(EDI));
  /* 11721239 push ecx */
  push32((uint32_t)(ECX));
  /* 1172123a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1172123d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11721242 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721247 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721249 pop ecx */
  ECX = (pop32());
  /* 1172124a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172124d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721250 mov eax, dword ptr [eax + 0x2c] */
  EAX = (r32((uint32_t)(EAX + 0x2c)));
  /* 11721253 pop edi */
  EDI = (pop32());
  /* 11721254 pop esi */
  ESI = (pop32());
  /* 11721255 pop ebx */
  EBX = (pop32());
  /* 11721256 mov esp, ebp */
  ESP = (EBP);
  /* 11721258 pop ebp */
  EBP = (pop32());
  /* 11721259 ret  */
  ESPCHK(0x11721230u, _esp0);
  ESP += 4; return;
}

/* FUN_10001270 @ 0x11721270 (42 bytes, 21 insns) */
void f_11721270(void) {
  FTRACE(0x11721270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721270 push ebp */
  push32((uint32_t)(EBP));
  /* 11721271 mov ebp, esp */
  EBP = (ESP);
  /* 11721273 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721276 push ebx */
  push32((uint32_t)(EBX));
  /* 11721277 push esi */
  push32((uint32_t)(ESI));
  /* 11721278 push edi */
  push32((uint32_t)(EDI));
  /* 11721279 push ecx */
  push32((uint32_t)(ECX));
  /* 1172127a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1172127d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11721282 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721287 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721289 pop ecx */
  ECX = (pop32());
  /* 1172128a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172128d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721290 mov eax, dword ptr [eax + 0x30] */
  EAX = (r32((uint32_t)(EAX + 0x30)));
  /* 11721293 pop edi */
  EDI = (pop32());
  /* 11721294 pop esi */
  ESI = (pop32());
  /* 11721295 pop ebx */
  EBX = (pop32());
  /* 11721296 mov esp, ebp */
  ESP = (EBP);
  /* 11721298 pop ebp */
  EBP = (pop32());
  /* 11721299 ret  */
  ESPCHK(0x11721270u, _esp0);
  ESP += 4; return;
}

/* FUN_100012b0 @ 0x117212b0 (196 bytes, 63 insns) */
void f_117212b0(void) {
  FTRACE(0x117212b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117212b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117212b1 mov ebp, esp */
  EBP = (ESP);
  /* 117212b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117212b5 push 0x1173b50b */
  push32((uint32_t)(0x1173b50bu));
  /* 117212ba mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117212c0 push eax */
  push32((uint32_t)(EAX));
  /* 117212c1 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117212c8 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117212cb push ebx */
  push32((uint32_t)(EBX));
  /* 117212cc push esi */
  push32((uint32_t)(ESI));
  /* 117212cd push edi */
  push32((uint32_t)(EDI));
  /* 117212ce push ecx */
  push32((uint32_t)(ECX));
  /* 117212cf lea edi, [ebp - 0x60] */
  EDI = ((uint32_t)(EBP + -0x60));
  /* 117212d2 mov ecx, 0x15 */
  ECX = (0x15u);
  /* 117212d7 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117212dc rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117212de pop ecx */
  ECX = (pop32());
  /* 117212df mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117212e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117212e5 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_117212e8:;
  /* 117212e8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117212eb call 0x1172102d */
  push32(0x117212f0u); f_1172102d();
  /* 117212f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117212f2 je 0x11721301 */
  if (C.zf) goto L_11721301;
  /* 117212f4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117212f7 call 0x1172102d */
  push32(0x117212fcu); f_1172102d();
  /* 117212fc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117212ff jmp 0x117212e8 */
  goto L_117212e8;
L_11721301:;
  /* 11721301 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11721303 call 0x117229d0 */
  push32(0x11721308u); f_117229d0();
  /* 11721308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172130b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1172130e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11721315 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721319 je 0x11721337 */
  if (C.zf) goto L_11721337;
  /* 1172131b sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172131e mov ecx, 0xb */
  ECX = (0xbu);
  /* 11721323 lea esi, [ebp + 8] */
  ESI = ((uint32_t)(EBP + 0x8));
  /* 11721326 mov edi, esp */
  EDI = (ESP);
  /* 11721328 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172132a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172132d call 0x11721041 */
  push32(0x11721332u); f_11721041();
  /* 11721332 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11721335 jmp 0x1172133e */
  goto L_1172133e;
L_11721337:;
  /* 11721337 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
L_1172133e:;
  /* 1172133e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11721341 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11721344 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1172134b mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172134e push edx */
  push32((uint32_t)(EDX));
  /* 1172134f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11721352 call 0x1172100f */
  push32(0x11721357u); f_1172100f();
  /* 11721357 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172135a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11721361 pop edi */
  EDI = (pop32());
  /* 11721362 pop esi */
  ESI = (pop32());
  /* 11721363 pop ebx */
  EBX = (pop32());
  /* 11721364 add esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721367 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721369 call 0x117228e0 */
  push32(0x1172136eu); f_117228e0();
  /* 1172136e mov esp, ebp */
  ESP = (EBP);
  /* 11721370 pop ebp */
  EBP = (pop32());
  /* 11721371 ret 0x2c */
  ESPCHK(0x117212b0u, _esp0);
  ESP += 48; return;
}

/* FUN_100013b0 @ 0x117213b0 (54 bytes, 24 insns) */
void f_117213b0(void) {
  FTRACE(0x117213b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117213b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117213b1 mov ebp, esp */
  EBP = (ESP);
  /* 117213b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117213b6 push ebx */
  push32((uint32_t)(EBX));
  /* 117213b7 push esi */
  push32((uint32_t)(ESI));
  /* 117213b8 push edi */
  push32((uint32_t)(EDI));
  /* 117213b9 push ecx */
  push32((uint32_t)(ECX));
  /* 117213ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 117213bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 117213c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117213c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117213c9 pop ecx */
  ECX = (pop32());
  /* 117213ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117213cd mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 117213d0 mov ecx, 0xb */
  ECX = (0xbu);
  /* 117213d5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117213d8 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117213da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117213dd pop edi */
  EDI = (pop32());
  /* 117213de pop esi */
  ESI = (pop32());
  /* 117213df pop ebx */
  EBX = (pop32());
  /* 117213e0 mov esp, ebp */
  ESP = (EBP);
  /* 117213e2 pop ebp */
  EBP = (pop32());
  /* 117213e3 ret 4 */
  ESPCHK(0x117213b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001400 @ 0x11721400 (252 bytes, 82 insns) */
void f_11721400(void) {
  FTRACE(0x11721400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721400 push ebp */
  push32((uint32_t)(EBP));
  /* 11721401 mov ebp, esp */
  EBP = (ESP);
  /* 11721403 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721409 push ebx */
  push32((uint32_t)(EBX));
  /* 1172140a push esi */
  push32((uint32_t)(ESI));
  /* 1172140b push edi */
  push32((uint32_t)(EDI));
  /* 1172140c lea edi, [ebp - 0xa8] */
  EDI = ((uint32_t)(EBP + -0xa8));
  /* 11721412 mov ecx, 0x2a */
  ECX = (0x2au);
  /* 11721417 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 1172141c rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1172141e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11721421 call 0x1172102d */
  push32(0x11721426u); f_1172102d();
  /* 11721426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11721428 je 0x117214e8 */
  if (C.zf) goto L_117214e8;
  /* 1172142e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11721431 call 0x1172102d */
  push32(0x11721436u); f_1172102d();
  /* 11721436 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11721439 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172143c call 0x11721046 */
  push32(0x11721441u); f_11721046();
  /* 11721441 mov esi, eax */
  ESI = (EAX);
  /* 11721443 mov edi, esp */
  EDI = (ESP);
  /* 11721445 call dword ptr [0x11755450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755450))), 0x1172144bu);
  /* 1172144b cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172144d call 0x117228e0 */
  push32(0x11721452u); f_117228e0();
  /* 11721452 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721455 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721457 jge 0x117214e8 */
  if ((C.sf==C.of)) goto L_117214e8;
  /* 1172145d lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11721460 push eax */
  push32((uint32_t)(EAX));
  /* 11721461 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721464 call 0x11721028 */
  push32(0x11721469u); f_11721028();
  /* 11721469 mov esi, eax */
  ESI = (EAX);
  /* 1172146b mov ecx, 0xb */
  ECX = (0xbu);
  /* 11721470 lea edi, [ebp - 0x30] */
  EDI = ((uint32_t)(EBP + -0x30));
  /* 11721473 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11721475 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11721478 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 1172147b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172147e mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11721481 mov esi, esp */
  ESI = (ESP);
  /* 11721483 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11721486 push eax */
  push32((uint32_t)(EAX));
  /* 11721487 call dword ptr [0x11755458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755458))), 0x1172148du);
  /* 1172148d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721492 call 0x117228e0 */
  push32(0x11721497u); f_117228e0();
  /* 11721497 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172149a call 0x1172102d */
  push32(0x1172149fu); f_1172102d();
  /* 1172149f push eax */
  push32((uint32_t)(EAX));
  /* 117214a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117214a3 call 0x1172100f */
  push32(0x117214a8u); f_1172100f();
  /* 117214a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117214ab mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 117214ae mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 117214b1 mov dword ptr [ebp - 0x60], edx */
  w32((uint32_t)(EBP + -0x60), (EDX));
  /* 117214b4 cmp dword ptr [ebp - 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117214b8 je 0x117214c9 */
  if (C.zf) goto L_117214c9;
  /* 117214ba push 1 */
  push32((uint32_t)(0x1u));
  /* 117214bc mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 117214bf call 0x1172103c */
  push32(0x117214c4u); f_1172103c();
  /* 117214c4 mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 117214c7 jmp 0x117214d0 */
  goto L_117214d0;
L_117214c9:;
  /* 117214c9 mov dword ptr [ebp - 0x68], 0 */
  w32((uint32_t)(EBP + -0x68), (0x0u));
L_117214d0:;
  /* 117214d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117214d3 push eax */
  push32((uint32_t)(EAX));
  /* 117214d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117214d7 push ecx */
  push32((uint32_t)(ECX));
  /* 117214d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117214db push edx */
  push32((uint32_t)(EDX));
  /* 117214dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117214df push eax */
  push32((uint32_t)(EAX));
  /* 117214e0 call 0x11721023 */
  push32(0x117214e5u); f_11721023();
  /* 117214e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117214e8:;
  /* 117214e8 pop edi */
  EDI = (pop32());
  /* 117214e9 pop esi */
  ESI = (pop32());
  /* 117214ea pop ebx */
  EBX = (pop32());
  /* 117214eb add esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117214f1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117214f3 call 0x117228e0 */
  push32(0x117214f8u); f_117228e0();
  /* 117214f8 mov esp, ebp */
  ESP = (EBP);
  /* 117214fa pop ebp */
  EBP = (pop32());
  /* 117214fb ret  */
  ESPCHK(0x11721400u, _esp0);
  ESP += 4; return;
}

/* FUN_10001540 @ 0x11721540 (81 bytes, 33 insns) */
void f_11721540(void) {
  FTRACE(0x11721540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721540 push ebp */
  push32((uint32_t)(EBP));
  /* 11721541 mov ebp, esp */
  EBP = (ESP);
  /* 11721543 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721546 push ebx */
  push32((uint32_t)(EBX));
  /* 11721547 push esi */
  push32((uint32_t)(ESI));
  /* 11721548 push edi */
  push32((uint32_t)(EDI));
  /* 11721549 push ecx */
  push32((uint32_t)(ECX));
  /* 1172154a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1172154d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11721552 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721557 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721559 pop ecx */
  ECX = (pop32());
  /* 1172155a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172155d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721560 call 0x11721037 */
  push32(0x11721565u); f_11721037();
  /* 11721565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11721568 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1172156b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172156d je 0x1172157b */
  if (C.zf) goto L_1172157b;
  /* 1172156f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11721572 push ecx */
  push32((uint32_t)(ECX));
  /* 11721573 call 0x11722920 */
  push32(0x11721578u); f_11722920();
  /* 11721578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172157b:;
  /* 1172157b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172157e pop edi */
  EDI = (pop32());
  /* 1172157f pop esi */
  ESI = (pop32());
  /* 11721580 pop ebx */
  EBX = (pop32());
  /* 11721581 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721584 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721586 call 0x117228e0 */
  push32(0x1172158bu); f_117228e0();
  /* 1172158b mov esp, ebp */
  ESP = (EBP);
  /* 1172158d pop ebp */
  EBP = (pop32());
  /* 1172158e ret 4 */
  ESPCHK(0x11721540u, _esp0);
  ESP += 8; return;
}

/* FUN_100015b0 @ 0x117215b0 (98 bytes, 37 insns) */
void f_117215b0(void) {
  FTRACE(0x117215b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117215b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117215b1 mov ebp, esp */
  EBP = (ESP);
  /* 117215b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117215b6 push ebx */
  push32((uint32_t)(EBX));
  /* 117215b7 push esi */
  push32((uint32_t)(ESI));
  /* 117215b8 push edi */
  push32((uint32_t)(EDI));
  /* 117215b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 117215bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 117215c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 117215c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117215c8 mov eax, dword ptr [ebp + 0x38] */
  EAX = (r32((uint32_t)(EBP + 0x38)));
  /* 117215cb mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
  /* 117215ce mov ecx, dword ptr [ebp + 0x3c] */
  ECX = (r32((uint32_t)(EBP + 0x3c)));
  /* 117215d1 mov dword ptr [ebp + 0x24], ecx */
  w32((uint32_t)(EBP + 0x24), (ECX));
  /* 117215d4 mov esi, esp */
  ESI = (ESP);
  /* 117215d6 lea edx, [ebp + 0xc] */
  EDX = ((uint32_t)(EBP + 0xc));
  /* 117215d9 push edx */
  push32((uint32_t)(EDX));
  /* 117215da call dword ptr [0x11755458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755458))), 0x117215e0u);
  /* 117215e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117215e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117215e5 call 0x117228e0 */
  push32(0x117215eau); f_117228e0();
  /* 117215ea sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117215ed mov ecx, 0xb */
  ECX = (0xbu);
  /* 117215f2 lea esi, [ebp + 0xc] */
  ESI = ((uint32_t)(EBP + 0xc));
  /* 117215f5 mov edi, esp */
  EDI = (ESP);
  /* 117215f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117215f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117215fc call 0x1172104b */
  push32(0x11721601u); f_1172104b();
  /* 11721601 pop edi */
  EDI = (pop32());
  /* 11721602 pop esi */
  ESI = (pop32());
  /* 11721603 pop ebx */
  EBX = (pop32());
  /* 11721604 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721607 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721609 call 0x117228e0 */
  push32(0x1172160eu); f_117228e0();
  /* 1172160e mov esp, ebp */
  ESP = (EBP);
  /* 11721610 pop ebp */
  EBP = (pop32());
  /* 11721611 ret  */
  ESPCHK(0x117215b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001630 @ 0x11721630 (51 bytes, 21 insns) */
void f_11721630(void) {
  FTRACE(0x11721630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721630 push ebp */
  push32((uint32_t)(EBP));
  /* 11721631 mov ebp, esp */
  EBP = (ESP);
  /* 11721633 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721636 push ebx */
  push32((uint32_t)(EBX));
  /* 11721637 push esi */
  push32((uint32_t)(ESI));
  /* 11721638 push edi */
  push32((uint32_t)(EDI));
  /* 11721639 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1172163c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11721641 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721646 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721648 call 0x11721670 */
  push32(0x1172164du); f_11721670();
  /* 1172164d call 0x11721710 */
  push32(0x11721652u); f_11721710();
  /* 11721652 pop edi */
  EDI = (pop32());
  /* 11721653 pop esi */
  ESI = (pop32());
  /* 11721654 pop ebx */
  EBX = (pop32());
  /* 11721655 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721658 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172165a call 0x117228e0 */
  push32(0x1172165fu); f_117228e0();
  /* 1172165f mov esp, ebp */
  ESP = (EBP);
  /* 11721661 pop ebp */
  EBP = (pop32());
  /* 11721662 ret  */
  ESPCHK(0x11721630u, _esp0);
  ESP += 4; return;
}

/* FUN_10001670 @ 0x11721670 (121 bytes, 35 insns) */
void f_11721670(void) {
  FTRACE(0x11721670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721670 push ebp */
  push32((uint32_t)(EBP));
  /* 11721671 mov ebp, esp */
  EBP = (ESP);
  /* 11721673 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721676 push ebx */
  push32((uint32_t)(EBX));
  /* 11721677 push esi */
  push32((uint32_t)(ESI));
  /* 11721678 push edi */
  push32((uint32_t)(EDI));
  /* 11721679 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1172167c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11721681 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721686 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721688 mov ecx, 0x11752898 */
  ECX = (0x11752898u);
  /* 1172168d call 0x1172101e */
  push32(0x11721692u); f_1172101e();
  /* 11721692 mov ecx, 0x117528d0 */
  ECX = (0x117528d0u);
  /* 11721697 call 0x1172101e */
  push32(0x1172169cu); f_1172101e();
  /* 1172169c mov ecx, 0x117526f0 */
  ECX = (0x117526f0u);
  /* 117216a1 call 0x1172101e */
  push32(0x117216a6u); f_1172101e();
  /* 117216a6 mov ecx, 0x11752728 */
  ECX = (0x11752728u);
  /* 117216ab call 0x1172101e */
  push32(0x117216b0u); f_1172101e();
  /* 117216b0 mov ecx, 0x11752760 */
  ECX = (0x11752760u);
  /* 117216b5 call 0x1172101e */
  push32(0x117216bau); f_1172101e();
  /* 117216ba mov ecx, 0x11752798 */
  ECX = (0x11752798u);
  /* 117216bf call 0x1172101e */
  push32(0x117216c4u); f_1172101e();
  /* 117216c4 mov ecx, 0x117527d0 */
  ECX = (0x117527d0u);
  /* 117216c9 call 0x1172101e */
  push32(0x117216ceu); f_1172101e();
  /* 117216ce mov ecx, 0x11752808 */
  ECX = (0x11752808u);
  /* 117216d3 call 0x1172101e */
  push32(0x117216d8u); f_1172101e();
  /* 117216d8 pop edi */
  EDI = (pop32());
  /* 117216d9 pop esi */
  ESI = (pop32());
  /* 117216da pop ebx */
  EBX = (pop32());
  /* 117216db add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117216de cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117216e0 call 0x117228e0 */
  push32(0x117216e5u); f_117228e0();
  /* 117216e5 mov esp, ebp */
  ESP = (EBP);
  /* 117216e7 pop ebp */
  EBP = (pop32());
  /* 117216e8 ret  */
  ESPCHK(0x11721670u, _esp0);
  ESP += 4; return;
}

/* FUN_10001710 @ 0x11721710 (54 bytes, 22 insns) */
void f_11721710(void) {
  FTRACE(0x11721710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721710 push ebp */
  push32((uint32_t)(EBP));
  /* 11721711 mov ebp, esp */
  EBP = (ESP);
  /* 11721713 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721716 push ebx */
  push32((uint32_t)(EBX));
  /* 11721717 push esi */
  push32((uint32_t)(ESI));
  /* 11721718 push edi */
  push32((uint32_t)(EDI));
  /* 11721719 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1172171c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11721721 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721726 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721728 push 0x11721760 */
  push32((uint32_t)(0x11721760u));
  /* 1172172d call 0x11722f80 */
  push32(0x11721732u); f_11722f80();
  /* 11721732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721735 pop edi */
  EDI = (pop32());
  /* 11721736 pop esi */
  ESI = (pop32());
  /* 11721737 pop ebx */
  EBX = (pop32());
  /* 11721738 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172173b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172173d call 0x117228e0 */
  push32(0x11721742u); f_117228e0();
  /* 11721742 mov esp, ebp */
  ESP = (EBP);
  /* 11721744 pop ebp */
  EBP = (pop32());
  /* 11721745 ret  */
  ESPCHK(0x11721710u, _esp0);
  ESP += 4; return;
}

/* FUN_10001760 @ 0x11721760 (121 bytes, 35 insns) */
void f_11721760(void) {
  FTRACE(0x11721760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721760 push ebp */
  push32((uint32_t)(EBP));
  /* 11721761 mov ebp, esp */
  EBP = (ESP);
  /* 11721763 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721766 push ebx */
  push32((uint32_t)(EBX));
  /* 11721767 push esi */
  push32((uint32_t)(ESI));
  /* 11721768 push edi */
  push32((uint32_t)(EDI));
  /* 11721769 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1172176c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11721771 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721776 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721778 mov ecx, 0x11752808 */
  ECX = (0x11752808u);
  /* 1172177d call 0x11721037 */
  push32(0x11721782u); f_11721037();
  /* 11721782 mov ecx, 0x117527d0 */
  ECX = (0x117527d0u);
  /* 11721787 call 0x11721037 */
  push32(0x1172178cu); f_11721037();
  /* 1172178c mov ecx, 0x11752798 */
  ECX = (0x11752798u);
  /* 11721791 call 0x11721037 */
  push32(0x11721796u); f_11721037();
  /* 11721796 mov ecx, 0x11752760 */
  ECX = (0x11752760u);
  /* 1172179b call 0x11721037 */
  push32(0x117217a0u); f_11721037();
  /* 117217a0 mov ecx, 0x11752728 */
  ECX = (0x11752728u);
  /* 117217a5 call 0x11721037 */
  push32(0x117217aau); f_11721037();
  /* 117217aa mov ecx, 0x117526f0 */
  ECX = (0x117526f0u);
  /* 117217af call 0x11721037 */
  push32(0x117217b4u); f_11721037();
  /* 117217b4 mov ecx, 0x117528d0 */
  ECX = (0x117528d0u);
  /* 117217b9 call 0x11721037 */
  push32(0x117217beu); f_11721037();
  /* 117217be mov ecx, 0x11752898 */
  ECX = (0x11752898u);
  /* 117217c3 call 0x11721037 */
  push32(0x117217c8u); f_11721037();
  /* 117217c8 pop edi */
  EDI = (pop32());
  /* 117217c9 pop esi */
  ESI = (pop32());
  /* 117217ca pop ebx */
  EBX = (pop32());
  /* 117217cb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117217ce cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117217d0 call 0x117228e0 */
  push32(0x117217d5u); f_117228e0();
  /* 117217d5 mov esp, ebp */
  ESP = (EBP);
  /* 117217d7 pop ebp */
  EBP = (pop32());
  /* 117217d8 ret  */
  ESPCHK(0x11721760u, _esp0);
  ESP += 4; return;
}

/* FUN_10001800 @ 0x11721800 (822 bytes, 220 insns) */
void f_11721800(void) {
  FTRACE(0x11721800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721800 push ebp */
  push32((uint32_t)(EBP));
  /* 11721801 mov ebp, esp */
  EBP = (ESP);
  /* 11721803 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721806 push ebx */
  push32((uint32_t)(EBX));
  /* 11721807 push esi */
  push32((uint32_t)(ESI));
  /* 11721808 push edi */
  push32((uint32_t)(EDI));
  /* 11721809 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1172180c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11721811 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721816 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721818 mov esi, esp */
  ESI = (ESP);
  /* 1172181a push 0x1174d090 */
  push32((uint32_t)(0x1174d090u));
  /* 1172181f push 0 */
  push32((uint32_t)(0x0u));
  /* 11721821 call dword ptr [0x11755448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755448))), 0x11721827u);
  /* 11721827 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172182a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172182c call 0x117228e0 */
  push32(0x11721831u); f_117228e0();
  /* 11721831 mov esi, esp */
  ESI = (ESP);
  /* 11721833 push 0x1174d090 */
  push32((uint32_t)(0x1174d090u));
  /* 11721838 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172183a call dword ptr [0x11755448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755448))), 0x11721840u);
  /* 11721840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721845 call 0x117228e0 */
  push32(0x1172184au); f_117228e0();
  /* 1172184a mov esi, esp */
  ESI = (ESP);
  /* 1172184c push 0x1174d088 */
  push32((uint32_t)(0x1174d088u));
  /* 11721851 push 2 */
  push32((uint32_t)(0x2u));
  /* 11721853 call dword ptr [0x11755448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755448))), 0x11721859u);
  /* 11721859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172185c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172185e call 0x117228e0 */
  push32(0x11721863u); f_117228e0();
  /* 11721863 mov esi, esp */
  ESI = (ESP);
  /* 11721865 push 0x1174d07c */
  push32((uint32_t)(0x1174d07cu));
  /* 1172186a push 3 */
  push32((uint32_t)(0x3u));
  /* 1172186c call dword ptr [0x11755448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755448))), 0x11721872u);
  /* 11721872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721877 call 0x117228e0 */
  push32(0x1172187cu); f_117228e0();
  /* 1172187c mov esi, esp */
  ESI = (ESP);
  /* 1172187e push 0x1174d074 */
  push32((uint32_t)(0x1174d074u));
  /* 11721883 push 4 */
  push32((uint32_t)(0x4u));
  /* 11721885 call dword ptr [0x11755448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755448))), 0x1172188bu);
  /* 1172188b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172188e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721890 call 0x117228e0 */
  push32(0x11721895u); f_117228e0();
  /* 11721895 mov esi, esp */
  ESI = (ESP);
  /* 11721897 push 0x1174d06c */
  push32((uint32_t)(0x1174d06cu));
  /* 1172189c push 5 */
  push32((uint32_t)(0x5u));
  /* 1172189e call dword ptr [0x11755448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755448))), 0x117218a4u);
  /* 117218a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117218a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117218a9 call 0x117228e0 */
  push32(0x117218aeu); f_117228e0();
  /* 117218ae mov esi, esp */
  ESI = (ESP);
  /* 117218b0 push 0x1174d068 */
  push32((uint32_t)(0x1174d068u));
  /* 117218b5 push 0x11752840 */
  push32((uint32_t)(0x11752840u));
  /* 117218ba call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x117218c0u);
  /* 117218c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117218c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117218c5 call 0x117228e0 */
  push32(0x117218cau); f_117228e0();
  /* 117218ca mov esi, esp */
  ESI = (ESP);
  /* 117218cc push 0x1174d064 */
  push32((uint32_t)(0x1174d064u));
  /* 117218d1 push 0x11752848 */
  push32((uint32_t)(0x11752848u));
  /* 117218d6 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x117218dcu);
  /* 117218dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117218df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117218e1 call 0x117228e0 */
  push32(0x117218e6u); f_117228e0();
  /* 117218e6 mov esi, esp */
  ESI = (ESP);
  /* 117218e8 push 0x1174d060 */
  push32((uint32_t)(0x1174d060u));
  /* 117218ed push 0x11752850 */
  push32((uint32_t)(0x11752850u));
  /* 117218f2 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x117218f8u);
  /* 117218f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117218fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117218fd call 0x117228e0 */
  push32(0x11721902u); f_117228e0();
  /* 11721902 mov esi, esp */
  ESI = (ESP);
  /* 11721904 push 0x1174d05c */
  push32((uint32_t)(0x1174d05cu));
  /* 11721909 push 0x11752858 */
  push32((uint32_t)(0x11752858u));
  /* 1172190e call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721914u);
  /* 11721914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721917 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721919 call 0x117228e0 */
  push32(0x1172191eu); f_117228e0();
  /* 1172191e mov esi, esp */
  ESI = (ESP);
  /* 11721920 push 0x1174d058 */
  push32((uint32_t)(0x1174d058u));
  /* 11721925 push 0x11752860 */
  push32((uint32_t)(0x11752860u));
  /* 1172192a call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721930u);
  /* 11721930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721935 call 0x117228e0 */
  push32(0x1172193au); f_117228e0();
  /* 1172193a mov esi, esp */
  ESI = (ESP);
  /* 1172193c push 0x1174d054 */
  push32((uint32_t)(0x1174d054u));
  /* 11721941 push 0x11752868 */
  push32((uint32_t)(0x11752868u));
  /* 11721946 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x1172194cu);
  /* 1172194c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172194f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721951 call 0x117228e0 */
  push32(0x11721956u); f_117228e0();
  /* 11721956 mov esi, esp */
  ESI = (ESP);
  /* 11721958 push 0x1174d050 */
  push32((uint32_t)(0x1174d050u));
  /* 1172195d push 0x11752870 */
  push32((uint32_t)(0x11752870u));
  /* 11721962 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721968u);
  /* 11721968 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172196b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172196d call 0x117228e0 */
  push32(0x11721972u); f_117228e0();
  /* 11721972 mov esi, esp */
  ESI = (ESP);
  /* 11721974 push 0x1174d04c */
  push32((uint32_t)(0x1174d04cu));
  /* 11721979 push 0x11752878 */
  push32((uint32_t)(0x11752878u));
  /* 1172197e call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721984u);
  /* 11721984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721989 call 0x117228e0 */
  push32(0x1172198eu); f_117228e0();
  /* 1172198e mov esi, esp */
  ESI = (ESP);
  /* 11721990 push 0x1174d048 */
  push32((uint32_t)(0x1174d048u));
  /* 11721995 push 0x11752880 */
  push32((uint32_t)(0x11752880u));
  /* 1172199a call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x117219a0u);
  /* 117219a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117219a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117219a5 call 0x117228e0 */
  push32(0x117219aau); f_117228e0();
  /* 117219aa mov esi, esp */
  ESI = (ESP);
  /* 117219ac push 0x1174d044 */
  push32((uint32_t)(0x1174d044u));
  /* 117219b1 push 0x11752908 */
  push32((uint32_t)(0x11752908u));
  /* 117219b6 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x117219bcu);
  /* 117219bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117219bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117219c1 call 0x117228e0 */
  push32(0x117219c6u); f_117228e0();
  /* 117219c6 mov esi, esp */
  ESI = (ESP);
  /* 117219c8 push 0x1174d040 */
  push32((uint32_t)(0x1174d040u));
  /* 117219cd push 0x11752910 */
  push32((uint32_t)(0x11752910u));
  /* 117219d2 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x117219d8u);
  /* 117219d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117219db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117219dd call 0x117228e0 */
  push32(0x117219e2u); f_117228e0();
  /* 117219e2 mov esi, esp */
  ESI = (ESP);
  /* 117219e4 push 0x1174d03c */
  push32((uint32_t)(0x1174d03cu));
  /* 117219e9 push 0x11752918 */
  push32((uint32_t)(0x11752918u));
  /* 117219ee call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x117219f4u);
  /* 117219f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117219f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117219f9 call 0x117228e0 */
  push32(0x117219feu); f_117228e0();
  /* 117219fe mov esi, esp */
  ESI = (ESP);
  /* 11721a00 push 0x1174d038 */
  push32((uint32_t)(0x1174d038u));
  /* 11721a05 push 0x11752920 */
  push32((uint32_t)(0x11752920u));
  /* 11721a0a call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721a10u);
  /* 11721a10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721a13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721a15 call 0x117228e0 */
  push32(0x11721a1au); f_117228e0();
  /* 11721a1a mov esi, esp */
  ESI = (ESP);
  /* 11721a1c push 0x1174d034 */
  push32((uint32_t)(0x1174d034u));
  /* 11721a21 push 0x11752930 */
  push32((uint32_t)(0x11752930u));
  /* 11721a26 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721a2cu);
  /* 11721a2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721a2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721a31 call 0x117228e0 */
  push32(0x11721a36u); f_117228e0();
  /* 11721a36 mov esi, esp */
  ESI = (ESP);
  /* 11721a38 push 0x1174d030 */
  push32((uint32_t)(0x1174d030u));
  /* 11721a3d push 0x11752938 */
  push32((uint32_t)(0x11752938u));
  /* 11721a42 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721a48u);
  /* 11721a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721a4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721a4d call 0x117228e0 */
  push32(0x11721a52u); f_117228e0();
  /* 11721a52 mov esi, esp */
  ESI = (ESP);
  /* 11721a54 push 0x1174d02c */
  push32((uint32_t)(0x1174d02cu));
  /* 11721a59 push 0x11752940 */
  push32((uint32_t)(0x11752940u));
  /* 11721a5e call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721a64u);
  /* 11721a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721a67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721a69 call 0x117228e0 */
  push32(0x11721a6eu); f_117228e0();
  /* 11721a6e mov esi, esp */
  ESI = (ESP);
  /* 11721a70 push 0x1174d028 */
  push32((uint32_t)(0x1174d028u));
  /* 11721a75 push 0x11752948 */
  push32((uint32_t)(0x11752948u));
  /* 11721a7a call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721a80u);
  /* 11721a80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721a83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721a85 call 0x117228e0 */
  push32(0x11721a8au); f_117228e0();
  /* 11721a8a mov esi, esp */
  ESI = (ESP);
  /* 11721a8c push 0x1174d024 */
  push32((uint32_t)(0x1174d024u));
  /* 11721a91 push 0x11752950 */
  push32((uint32_t)(0x11752950u));
  /* 11721a96 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721a9cu);
  /* 11721a9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721aa1 call 0x117228e0 */
  push32(0x11721aa6u); f_117228e0();
  /* 11721aa6 mov esi, esp */
  ESI = (ESP);
  /* 11721aa8 push 0x1174d020 */
  push32((uint32_t)(0x1174d020u));
  /* 11721aad push 0x11752958 */
  push32((uint32_t)(0x11752958u));
  /* 11721ab2 call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721ab8u);
  /* 11721ab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721abb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721abd call 0x117228e0 */
  push32(0x11721ac2u); f_117228e0();
  /* 11721ac2 mov esi, esp */
  ESI = (ESP);
  /* 11721ac4 push 0x1174d01c */
  push32((uint32_t)(0x1174d01cu));
  /* 11721ac9 push 0x11752928 */
  push32((uint32_t)(0x11752928u));
  /* 11721ace call dword ptr [0x1175544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175544c))), 0x11721ad4u);
  /* 11721ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721ad9 call 0x117228e0 */
  push32(0x11721adeu); f_117228e0();
  /* 11721ade mov esi, esp */
  ESI = (ESP);
  /* 11721ae0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11721ae2 push 0x11752960 */
  push32((uint32_t)(0x11752960u));
  /* 11721ae7 call dword ptr [0x11755444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755444))), 0x11721aedu);
  /* 11721aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721af2 call 0x117228e0 */
  push32(0x11721af7u); f_117228e0();
  /* 11721af7 mov esi, esp */
  ESI = (ESP);
  /* 11721af9 push 0x11752890 */
  push32((uint32_t)(0x11752890u));
  /* 11721afe call dword ptr [0x11755454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755454))), 0x11721b04u);
  /* 11721b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721b07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721b09 call 0x117228e0 */
  push32(0x11721b0eu); f_117228e0();
  /* 11721b0e mov esi, esp */
  ESI = (ESP);
  /* 11721b10 push 0x11752888 */
  push32((uint32_t)(0x11752888u));
  /* 11721b15 call dword ptr [0x11755454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755454))), 0x11721b1bu);
  /* 11721b1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721b20 call 0x117228e0 */
  push32(0x11721b25u); f_117228e0();
  /* 11721b25 pop edi */
  EDI = (pop32());
  /* 11721b26 pop esi */
  ESI = (pop32());
  /* 11721b27 pop ebx */
  EBX = (pop32());
  /* 11721b28 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721b2b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721b2d call 0x117228e0 */
  push32(0x11721b32u); f_117228e0();
  /* 11721b32 mov esp, ebp */
  ESP = (EBP);
  /* 11721b34 pop ebp */
  EBP = (pop32());
  /* 11721b35 ret  */
  ESPCHK(0x11721800u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c10 @ 0x11721c10 (528 bytes, 177 insns) */
void f_11721c10(void) {
  FTRACE(0x11721c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11721c11 mov ebp, esp */
  EBP = (ESP);
  /* 11721c13 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721c16 push ebx */
  push32((uint32_t)(EBX));
  /* 11721c17 push esi */
  push32((uint32_t)(ESI));
  /* 11721c18 push edi */
  push32((uint32_t)(EDI));
  /* 11721c19 lea edi, [ebp - 0x74] */
  EDI = ((uint32_t)(EBP + -0x74));
  /* 11721c1c mov ecx, 0x1d */
  ECX = (0x1du);
  /* 11721c21 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721c26 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721c28 mov esi, esp */
  ESI = (ESP);
  /* 11721c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11721c2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11721c2f push eax */
  push32((uint32_t)(EAX));
  /* 11721c30 call dword ptr [0x11755428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755428))), 0x11721c36u);
  /* 11721c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721c3b call 0x117228e0 */
  push32(0x11721c40u); f_117228e0();
  /* 11721c40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11721c43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721c47 jle 0x11721d42 */
  if ((C.zf||C.sf!=C.of)) goto L_11721d42;
  /* 11721c4d mov esi, esp */
  ESI = (ESP);
  /* 11721c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11721c51 push 0x11752888 */
  push32((uint32_t)(0x11752888u));
  /* 11721c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721c58 call dword ptr [0x11755420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755420))), 0x11721c5eu);
  /* 11721c5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721c63 call 0x117228e0 */
  push32(0x11721c68u); f_117228e0();
  /* 11721c68 mov esi, esp */
  ESI = (ESP);
  /* 11721c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11721c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11721c6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11721c71 push ecx */
  push32((uint32_t)(ECX));
  /* 11721c72 call dword ptr [0x11755430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755430))), 0x11721c78u);
  /* 11721c78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721c7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721c7d call 0x117228e0 */
  push32(0x11721c82u); f_117228e0();
  /* 11721c82 mov esi, esp */
  ESI = (ESP);
  /* 11721c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721c86 push 0x11752890 */
  push32((uint32_t)(0x11752890u));
  /* 11721c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11721c8d call dword ptr [0x11755420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755420))), 0x11721c93u);
  /* 11721c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721c96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721c98 call 0x117228e0 */
  push32(0x11721c9du); f_117228e0();
  /* 11721c9d mov esi, esp */
  ESI = (ESP);
  /* 11721c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11721ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721ca3 call dword ptr [0x11755434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755434))), 0x11721ca9u);
  /* 11721ca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721cae call 0x117228e0 */
  push32(0x11721cb3u); f_117228e0();
  /* 11721cb3 mov esi, esp */
  ESI = (ESP);
  /* 11721cb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11721cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721cb9 call dword ptr [0x1175542c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175542c))), 0x11721cbfu);
  /* 11721cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721cc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721cc4 call 0x117228e0 */
  push32(0x11721cc9u); f_117228e0();
  /* 11721cc9 mov esi, esp */
  ESI = (ESP);
  /* 11721ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 11721ccd push 0x11752888 */
  push32((uint32_t)(0x11752888u));
  /* 11721cd2 call dword ptr [0x1175543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175543c))), 0x11721cd8u);
  /* 11721cd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721cdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721cdd call 0x117228e0 */
  push32(0x11721ce2u); f_117228e0();
  /* 11721ce2 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11721ce9 jmp 0x11721cf4 */
  goto L_11721cf4;
L_11721ceb:;
  /* 11721ceb mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11721cee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11721cf1 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
L_11721cf4:;
  /* 11721cf4 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11721cf7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721cfa jge 0x11721d42 */
  if ((C.sf==C.of)) goto L_11721d42;
  /* 11721cfc mov esi, esp */
  ESI = (ESP);
  /* 11721cfe lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11721d01 push ecx */
  push32((uint32_t)(ECX));
  /* 11721d02 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11721d05 push edx */
  push32((uint32_t)(EDX));
  /* 11721d06 push 0x11752890 */
  push32((uint32_t)(0x11752890u));
  /* 11721d0b call dword ptr [0x11755440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755440))), 0x11721d11u);
  /* 11721d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721d14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721d16 call 0x117228e0 */
  push32(0x11721d1bu); f_117228e0();
  /* 11721d1b push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11721d20 push 0x3b88 */
  push32((uint32_t)(0x3b88u));
  /* 11721d25 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721d28 mov ecx, 0xb */
  ECX = (0xbu);
  /* 11721d2d lea esi, [ebp - 0x30] */
  ESI = ((uint32_t)(EBP + -0x30));
  /* 11721d30 mov edi, esp */
  EDI = (ESP);
  /* 11721d32 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11721d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11721d37 push eax */
  push32((uint32_t)(EAX));
  /* 11721d38 call 0x1172100a */
  push32(0x11721d3du); f_1172100a();
  /* 11721d3d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721d40 jmp 0x11721ceb */
  goto L_11721ceb;
L_11721d42:;
  /* 11721d42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11721d45 push ecx */
  push32((uint32_t)(ECX));
  /* 11721d46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11721d49 push edx */
  push32((uint32_t)(EDX));
  /* 11721d4a push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11721d4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11721d52 push eax */
  push32((uint32_t)(EAX));
  /* 11721d53 call 0x11721023 */
  push32(0x11721d58u); f_11721023();
  /* 11721d58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721d5b mov esi, esp */
  ESI = (ESP);
  /* 11721d5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11721d5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11721d62 push ecx */
  push32((uint32_t)(ECX));
  /* 11721d63 call dword ptr [0x11755428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755428))), 0x11721d69u);
  /* 11721d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721d6e call 0x117228e0 */
  push32(0x11721d73u); f_117228e0();
  /* 11721d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11721d75 jle 0x11721dad */
  if ((C.zf||C.sf!=C.of)) goto L_11721dad;
  /* 11721d77 mov esi, esp */
  ESI = (ESP);
  /* 11721d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721d7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11721d7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11721d80 push edx */
  push32((uint32_t)(EDX));
  /* 11721d81 call dword ptr [0x11755430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755430))), 0x11721d87u);
  /* 11721d87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721d8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721d8c call 0x117228e0 */
  push32(0x11721d91u); f_117228e0();
  /* 11721d91 mov esi, esp */
  ESI = (ESP);
  /* 11721d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721d97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11721d9a push eax */
  push32((uint32_t)(EAX));
  /* 11721d9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11721d9d call dword ptr [0x11755438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755438))), 0x11721da3u);
  /* 11721da3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721da6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721da8 call 0x117228e0 */
  push32(0x11721dadu); f_117228e0();
L_11721dad:;
  /* 11721dad mov esi, esp */
  ESI = (ESP);
  /* 11721daf push 1 */
  push32((uint32_t)(0x1u));
  /* 11721db1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11721db4 push ecx */
  push32((uint32_t)(ECX));
  /* 11721db5 call dword ptr [0x11755428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755428))), 0x11721dbbu);
  /* 11721dbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721dbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721dc0 call 0x117228e0 */
  push32(0x11721dc5u); f_117228e0();
  /* 11721dc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11721dc7 jle 0x11721e0f */
  if ((C.zf||C.sf!=C.of)) goto L_11721e0f;
  /* 11721dc9 mov esi, esp */
  ESI = (ESP);
  /* 11721dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11721dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 11721dcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11721dd2 push edx */
  push32((uint32_t)(EDX));
  /* 11721dd3 call dword ptr [0x11755430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755430))), 0x11721dd9u);
  /* 11721dd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721dde call 0x117228e0 */
  push32(0x11721de3u); f_117228e0();
  /* 11721de3 mov esi, esp */
  ESI = (ESP);
  /* 11721de5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11721de7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11721de9 call dword ptr [0x11755434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755434))), 0x11721defu);
  /* 11721def add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721df2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721df4 call 0x117228e0 */
  push32(0x11721df9u); f_117228e0();
  /* 11721df9 mov esi, esp */
  ESI = (ESP);
  /* 11721dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11721dfd push 1 */
  push32((uint32_t)(0x1u));
  /* 11721dff call dword ptr [0x1175542c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175542c))), 0x11721e05u);
  /* 11721e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721e08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721e0a call 0x117228e0 */
  push32(0x11721e0fu); f_117228e0();
L_11721e0f:;
  /* 11721e0f pop edi */
  EDI = (pop32());
  /* 11721e10 pop esi */
  ESI = (pop32());
  /* 11721e11 pop ebx */
  EBX = (pop32());
  /* 11721e12 add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721e15 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721e17 call 0x117228e0 */
  push32(0x11721e1cu); f_117228e0();
  /* 11721e1c mov esp, ebp */
  ESP = (EBP);
  /* 11721e1e pop ebp */
  EBP = (pop32());
  /* 11721e1f ret  */
  ESPCHK(0x11721c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001eb0 @ 0x11721eb0 (1957 bytes, 568 insns) */
void f_11721eb0(void) {
  FTRACE(0x11721eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11721eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11721eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11721eb3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11721eb7 push esi */
  push32((uint32_t)(ESI));
  /* 11721eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11721eb9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11721ebc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11721ec1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11721ec6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11721ec8 mov esi, esp */
  ESI = (ESP);
  /* 11721eca push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11721ecc call dword ptr [0x117553f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553f8))), 0x11721ed2u);
  /* 11721ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721ed5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721ed7 call 0x117228e0 */
  push32(0x11721edcu); f_117228e0();
  /* 11721edc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11721ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11721ee3 je 0x1172248d */
  if (C.zf) goto L_1172248d;
  /* 11721ee9 mov esi, esp */
  ESI = (ESP);
  /* 11721eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 11721eed call dword ptr [0x11755400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755400))), 0x11721ef3u);
  /* 11721ef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721ef6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721ef8 call 0x117228e0 */
  push32(0x11721efdu); f_117228e0();
  /* 11721efd mov dword ptr [0x11752960], eax */
  w32((uint32_t)(0x11752960), (EAX));
  /* 11721f02 mov eax, dword ptr [0x11752960] */
  EAX = (r32((uint32_t)(0x11752960)));
  /* 11721f07 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11721f0d mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 11721f12 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721f14 mov esi, esp */
  ESI = (ESP);
  /* 11721f16 push ecx */
  push32((uint32_t)(ECX));
  /* 11721f17 push 3 */
  push32((uint32_t)(0x3u));
  /* 11721f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721f1b call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11721f21u);
  /* 11721f21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721f26 call 0x117228e0 */
  push32(0x11721f2bu); f_117228e0();
  /* 11721f2b mov edx, dword ptr [0x11752960] */
  EDX = (r32((uint32_t)(0x11752960)));
  /* 11721f31 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11721f37 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11721f3c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721f3e mov esi, esp */
  ESI = (ESP);
  /* 11721f40 push eax */
  push32((uint32_t)(EAX));
  /* 11721f41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11721f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721f45 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11721f4bu);
  /* 11721f4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721f50 call 0x117228e0 */
  push32(0x11721f55u); f_117228e0();
  /* 11721f55 mov ecx, dword ptr [0x11752960] */
  ECX = (r32((uint32_t)(0x11752960)));
  /* 11721f5b imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11721f61 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 11721f66 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721f68 mov esi, esp */
  ESI = (ESP);
  /* 11721f6a push edx */
  push32((uint32_t)(EDX));
  /* 11721f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11721f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11721f6f call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11721f75u);
  /* 11721f75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721f7a call 0x117228e0 */
  push32(0x11721f7fu); f_117228e0();
  /* 11721f7f mov eax, dword ptr [0x11752960] */
  EAX = (r32((uint32_t)(0x11752960)));
  /* 11721f84 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11721f8a mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 11721f8f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721f91 mov esi, esp */
  ESI = (ESP);
  /* 11721f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11721f94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11721f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721f98 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11721f9eu);
  /* 11721f9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721fa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721fa3 call 0x117228e0 */
  push32(0x11721fa8u); f_117228e0();
  /* 11721fa8 mov edx, dword ptr [0x11752960] */
  EDX = (r32((uint32_t)(0x11752960)));
  /* 11721fae imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11721fb4 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11721fb9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721fbb mov esi, esp */
  ESI = (ESP);
  /* 11721fbd push eax */
  push32((uint32_t)(EAX));
  /* 11721fbe push 5 */
  push32((uint32_t)(0x5u));
  /* 11721fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11721fc2 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11721fc8u);
  /* 11721fc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721fcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721fcd call 0x117228e0 */
  push32(0x11721fd2u); f_117228e0();
  /* 11721fd2 mov ecx, dword ptr [0x11752960] */
  ECX = (r32((uint32_t)(0x11752960)));
  /* 11721fd8 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11721fde mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 11721fe3 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11721fe5 mov esi, esp */
  ESI = (ESP);
  /* 11721fe7 push edx */
  push32((uint32_t)(EDX));
  /* 11721fe8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11721fea push 0 */
  push32((uint32_t)(0x0u));
  /* 11721fec call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11721ff2u);
  /* 11721ff2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11721ff5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11721ff7 call 0x117228e0 */
  push32(0x11721ffcu); f_117228e0();
  /* 11721ffc mov esi, esp */
  ESI = (ESP);
  /* 11721ffe push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722003 push 3 */
  push32((uint32_t)(0x3u));
  /* 11722005 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722007 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x1172200du);
  /* 1172200d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722010 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722012 call 0x117228e0 */
  push32(0x11722017u); f_117228e0();
  /* 11722017 mov esi, esp */
  ESI = (ESP);
  /* 11722019 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1172201e push 1 */
  push32((uint32_t)(0x1u));
  /* 11722020 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722022 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722028u);
  /* 11722028 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172202b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172202d call 0x117228e0 */
  push32(0x11722032u); f_117228e0();
  /* 11722032 mov esi, esp */
  ESI = (ESP);
  /* 11722034 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722039 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172203b push 2 */
  push32((uint32_t)(0x2u));
  /* 1172203d call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722043u);
  /* 11722043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722046 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722048 call 0x117228e0 */
  push32(0x1172204du); f_117228e0();
  /* 1172204d mov esi, esp */
  ESI = (ESP);
  /* 1172204f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722054 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722056 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722058 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x1172205eu);
  /* 1172205e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722061 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722063 call 0x117228e0 */
  push32(0x11722068u); f_117228e0();
  /* 11722068 mov esi, esp */
  ESI = (ESP);
  /* 1172206a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1172206f push 5 */
  push32((uint32_t)(0x5u));
  /* 11722071 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722073 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722079u);
  /* 11722079 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172207c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172207e call 0x117228e0 */
  push32(0x11722083u); f_117228e0();
  /* 11722083 mov esi, esp */
  ESI = (ESP);
  /* 11722085 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1172208a push 4 */
  push32((uint32_t)(0x4u));
  /* 1172208c push 2 */
  push32((uint32_t)(0x2u));
  /* 1172208e call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722094u);
  /* 11722094 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722097 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722099 call 0x117228e0 */
  push32(0x1172209eu); f_117228e0();
  /* 1172209e mov esi, esp */
  ESI = (ESP);
  /* 117220a0 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117220a5 push 3 */
  push32((uint32_t)(0x3u));
  /* 117220a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 117220a9 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x117220afu);
  /* 117220af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117220b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117220b4 call 0x117228e0 */
  push32(0x117220b9u); f_117228e0();
  /* 117220b9 mov esi, esp */
  ESI = (ESP);
  /* 117220bb push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117220c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117220c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 117220c4 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x117220cau);
  /* 117220ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117220cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117220cf call 0x117228e0 */
  push32(0x117220d4u); f_117228e0();
  /* 117220d4 mov esi, esp */
  ESI = (ESP);
  /* 117220d6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117220db push 0 */
  push32((uint32_t)(0x0u));
  /* 117220dd push 3 */
  push32((uint32_t)(0x3u));
  /* 117220df call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x117220e5u);
  /* 117220e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117220e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117220ea call 0x117228e0 */
  push32(0x117220efu); f_117228e0();
  /* 117220ef mov esi, esp */
  ESI = (ESP);
  /* 117220f1 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117220f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117220f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 117220fa call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722100u);
  /* 11722100 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722103 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722105 call 0x117228e0 */
  push32(0x1172210au); f_117228e0();
  /* 1172210a mov esi, esp */
  ESI = (ESP);
  /* 1172210c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722111 push 5 */
  push32((uint32_t)(0x5u));
  /* 11722113 push 3 */
  push32((uint32_t)(0x3u));
  /* 11722115 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x1172211bu);
  /* 1172211b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172211e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722120 call 0x117228e0 */
  push32(0x11722125u); f_117228e0();
  /* 11722125 mov esi, esp */
  ESI = (ESP);
  /* 11722127 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1172212c push 4 */
  push32((uint32_t)(0x4u));
  /* 1172212e push 3 */
  push32((uint32_t)(0x3u));
  /* 11722130 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722136u);
  /* 11722136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172213b call 0x117228e0 */
  push32(0x11722140u); f_117228e0();
  /* 11722140 mov esi, esp */
  ESI = (ESP);
  /* 11722142 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722147 push 3 */
  push32((uint32_t)(0x3u));
  /* 11722149 push 4 */
  push32((uint32_t)(0x4u));
  /* 1172214b call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722151u);
  /* 11722151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722156 call 0x117228e0 */
  push32(0x1172215bu); f_117228e0();
  /* 1172215b mov esi, esp */
  ESI = (ESP);
  /* 1172215d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722162 push 1 */
  push32((uint32_t)(0x1u));
  /* 11722164 push 4 */
  push32((uint32_t)(0x4u));
  /* 11722166 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x1172216cu);
  /* 1172216c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172216f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722171 call 0x117228e0 */
  push32(0x11722176u); f_117228e0();
  /* 11722176 mov esi, esp */
  ESI = (ESP);
  /* 11722178 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1172217d push 0 */
  push32((uint32_t)(0x0u));
  /* 1172217f push 4 */
  push32((uint32_t)(0x4u));
  /* 11722181 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722187u);
  /* 11722187 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172218a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172218c call 0x117228e0 */
  push32(0x11722191u); f_117228e0();
  /* 11722191 mov esi, esp */
  ESI = (ESP);
  /* 11722193 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172219a push 4 */
  push32((uint32_t)(0x4u));
  /* 1172219c call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x117221a2u);
  /* 117221a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117221a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117221a7 call 0x117228e0 */
  push32(0x117221acu); f_117228e0();
  /* 117221ac mov esi, esp */
  ESI = (ESP);
  /* 117221ae push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117221b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 117221b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 117221b7 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x117221bdu);
  /* 117221bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117221c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117221c2 call 0x117228e0 */
  push32(0x117221c7u); f_117228e0();
  /* 117221c7 mov esi, esp */
  ESI = (ESP);
  /* 117221c9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117221ce push 4 */
  push32((uint32_t)(0x4u));
  /* 117221d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 117221d2 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x117221d8u);
  /* 117221d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117221db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117221dd call 0x117228e0 */
  push32(0x117221e2u); f_117228e0();
  /* 117221e2 mov esi, esp */
  ESI = (ESP);
  /* 117221e4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 117221e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 117221eb push 5 */
  push32((uint32_t)(0x5u));
  /* 117221ed call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x117221f3u);
  /* 117221f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117221f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117221f8 call 0x117228e0 */
  push32(0x117221fdu); f_117228e0();
  /* 117221fd mov esi, esp */
  ESI = (ESP);
  /* 117221ff push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722204 push 1 */
  push32((uint32_t)(0x1u));
  /* 11722206 push 5 */
  push32((uint32_t)(0x5u));
  /* 11722208 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x1172220eu);
  /* 1172220e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722211 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722213 call 0x117228e0 */
  push32(0x11722218u); f_117228e0();
  /* 11722218 mov esi, esp */
  ESI = (ESP);
  /* 1172221a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1172221f push 0 */
  push32((uint32_t)(0x0u));
  /* 11722221 push 5 */
  push32((uint32_t)(0x5u));
  /* 11722223 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722229u);
  /* 11722229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172222c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172222e call 0x117228e0 */
  push32(0x11722233u); f_117228e0();
  /* 11722233 mov esi, esp */
  ESI = (ESP);
  /* 11722235 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1172223a push 2 */
  push32((uint32_t)(0x2u));
  /* 1172223c push 5 */
  push32((uint32_t)(0x5u));
  /* 1172223e call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x11722244u);
  /* 11722244 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722247 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722249 call 0x117228e0 */
  push32(0x1172224eu); f_117228e0();
  /* 1172224e mov esi, esp */
  ESI = (ESP);
  /* 11722250 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722255 push 5 */
  push32((uint32_t)(0x5u));
  /* 11722257 push 5 */
  push32((uint32_t)(0x5u));
  /* 11722259 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x1172225fu);
  /* 1172225f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722264 call 0x117228e0 */
  push32(0x11722269u); f_117228e0();
  /* 11722269 mov esi, esp */
  ESI = (ESP);
  /* 1172226b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11722270 push 4 */
  push32((uint32_t)(0x4u));
  /* 11722272 push 5 */
  push32((uint32_t)(0x5u));
  /* 11722274 call dword ptr [0x11755404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755404))), 0x1172227au);
  /* 1172227a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172227d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172227f call 0x117228e0 */
  push32(0x11722284u); f_117228e0();
  /* 11722284 mov esi, esp */
  ESI = (ESP);
  /* 11722286 push 1 */
  push32((uint32_t)(0x1u));
  /* 11722288 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172228a push 0x11752940 */
  push32((uint32_t)(0x11752940u));
  /* 1172228f call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x11722295u);
  /* 11722295 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722298 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172229a call 0x117228e0 */
  push32(0x1172229fu); f_117228e0();
  /* 1172229f mov esi, esp */
  ESI = (ESP);
  /* 117222a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 117222a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117222a5 push 0x11752858 */
  push32((uint32_t)(0x11752858u));
  /* 117222aa call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x117222b0u);
  /* 117222b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117222b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117222b5 call 0x117228e0 */
  push32(0x117222bau); f_117228e0();
  /* 117222ba mov esi, esp */
  ESI = (ESP);
  /* 117222bc push 3 */
  push32((uint32_t)(0x3u));
  /* 117222be push 1 */
  push32((uint32_t)(0x1u));
  /* 117222c0 push 0x11752878 */
  push32((uint32_t)(0x11752878u));
  /* 117222c5 call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x117222cbu);
  /* 117222cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117222ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117222d0 call 0x117228e0 */
  push32(0x117222d5u); f_117228e0();
  /* 117222d5 mov esi, esp */
  ESI = (ESP);
  /* 117222d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 117222d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117222db push 0x11752918 */
  push32((uint32_t)(0x11752918u));
  /* 117222e0 call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x117222e6u);
  /* 117222e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117222e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117222eb call 0x117228e0 */
  push32(0x117222f0u); f_117228e0();
  /* 117222f0 mov esi, esp */
  ESI = (ESP);
  /* 117222f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 117222f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 117222f6 push 0x11752948 */
  push32((uint32_t)(0x11752948u));
  /* 117222fb call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x11722301u);
  /* 11722301 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722304 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722306 call 0x117228e0 */
  push32(0x1172230bu); f_117228e0();
  /* 1172230b mov esi, esp */
  ESI = (ESP);
  /* 1172230d push 6 */
  push32((uint32_t)(0x6u));
  /* 1172230f push 1 */
  push32((uint32_t)(0x1u));
  /* 11722311 push 0x11752950 */
  push32((uint32_t)(0x11752950u));
  /* 11722316 call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x1172231cu);
  /* 1172231c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172231f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722321 call 0x117228e0 */
  push32(0x11722326u); f_117228e0();
  /* 11722326 mov esi, esp */
  ESI = (ESP);
  /* 11722328 push 7 */
  push32((uint32_t)(0x7u));
  /* 1172232a push 1 */
  push32((uint32_t)(0x1u));
  /* 1172232c push 0x11752958 */
  push32((uint32_t)(0x11752958u));
  /* 11722331 call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x11722337u);
  /* 11722337 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172233a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172233c call 0x117228e0 */
  push32(0x11722341u); f_117228e0();
  /* 11722341 mov esi, esp */
  ESI = (ESP);
  /* 11722343 push 8 */
  push32((uint32_t)(0x8u));
  /* 11722345 push 1 */
  push32((uint32_t)(0x1u));
  /* 11722347 push 0x11752928 */
  push32((uint32_t)(0x11752928u));
  /* 1172234c call dword ptr [0x117553fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117553fc))), 0x11722352u);
  /* 11722352 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722357 call 0x117228e0 */
  push32(0x1172235cu); f_117228e0();
  /* 1172235c mov esi, esp */
  ESI = (ESP);
  /* 1172235e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11722360 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722362 call dword ptr [0x1175540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175540c))), 0x11722368u);
  /* 11722368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172236b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172236d call 0x117228e0 */
  push32(0x11722372u); f_117228e0();
  /* 11722372 mov esi, esp */
  ESI = (ESP);
  /* 11722374 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11722376 push 3 */
  push32((uint32_t)(0x3u));
  /* 11722378 call dword ptr [0x1175540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175540c))), 0x1172237eu);
  /* 1172237e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722381 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722383 call 0x117228e0 */
  push32(0x11722388u); f_117228e0();
  /* 11722388 mov esi, esp */
  ESI = (ESP);
  /* 1172238a push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1172238c push 4 */
  push32((uint32_t)(0x4u));
  /* 1172238e call dword ptr [0x1175540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175540c))), 0x11722394u);
  /* 11722394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722397 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722399 call 0x117228e0 */
  push32(0x1172239eu); f_117228e0();
  /* 1172239e mov esi, esp */
  ESI = (ESP);
  /* 117223a0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 117223a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 117223a4 call dword ptr [0x1175540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175540c))), 0x117223aau);
  /* 117223aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117223ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117223af call 0x117228e0 */
  push32(0x117223b4u); f_117228e0();
  /* 117223b4 mov esi, esp */
  ESI = (ESP);
  /* 117223b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 117223b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117223ba call dword ptr [0x1175540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175540c))), 0x117223c0u);
  /* 117223c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117223c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117223c5 call 0x117228e0 */
  push32(0x117223cau); f_117228e0();
  /* 117223ca mov esi, esp */
  ESI = (ESP);
  /* 117223cc mov eax, dword ptr [0x11752960] */
  EAX = (r32((uint32_t)(0x11752960)));
  /* 117223d1 push eax */
  push32((uint32_t)(EAX));
  /* 117223d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117223d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117223d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117223d8 push 0x1174d0c4 */
  push32((uint32_t)(0x1174d0c4u));
  /* 117223dd push 2 */
  push32((uint32_t)(0x2u));
  /* 117223df call dword ptr [0x11755410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755410))), 0x117223e5u);
  /* 117223e5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117223e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117223ea call 0x117228e0 */
  push32(0x117223efu); f_117228e0();
  /* 117223ef mov esi, esp */
  ESI = (ESP);
  /* 117223f1 mov ecx, dword ptr [0x11752960] */
  ECX = (r32((uint32_t)(0x11752960)));
  /* 117223f7 push ecx */
  push32((uint32_t)(ECX));
  /* 117223f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117223fa push 0 */
  push32((uint32_t)(0x0u));
  /* 117223fc push 0 */
  push32((uint32_t)(0x0u));
  /* 117223fe push 0x1174d0b8 */
  push32((uint32_t)(0x1174d0b8u));
  /* 11722403 push 3 */
  push32((uint32_t)(0x3u));
  /* 11722405 call dword ptr [0x11755410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755410))), 0x1172240bu);
  /* 1172240b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172240e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722410 call 0x117228e0 */
  push32(0x11722415u); f_117228e0();
  /* 11722415 mov esi, esp */
  ESI = (ESP);
  /* 11722417 mov edx, dword ptr [0x11752960] */
  EDX = (r32((uint32_t)(0x11752960)));
  /* 1172241d push edx */
  push32((uint32_t)(EDX));
  /* 1172241e push 0 */
  push32((uint32_t)(0x0u));
  /* 11722420 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722422 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722424 push 0x1174d0ac */
  push32((uint32_t)(0x1174d0acu));
  /* 11722429 push 4 */
  push32((uint32_t)(0x4u));
  /* 1172242b call dword ptr [0x11755410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755410))), 0x11722431u);
  /* 11722431 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722436 call 0x117228e0 */
  push32(0x1172243bu); f_117228e0();
  /* 1172243b mov esi, esp */
  ESI = (ESP);
  /* 1172243d mov eax, dword ptr [0x11752960] */
  EAX = (r32((uint32_t)(0x11752960)));
  /* 11722442 push eax */
  push32((uint32_t)(EAX));
  /* 11722443 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722445 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722447 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722449 push 0x1174d0a0 */
  push32((uint32_t)(0x1174d0a0u));
  /* 1172244e push 5 */
  push32((uint32_t)(0x5u));
  /* 11722450 call dword ptr [0x11755410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755410))), 0x11722456u);
  /* 11722456 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172245b call 0x117228e0 */
  push32(0x11722460u); f_117228e0();
  /* 11722460 mov esi, esp */
  ESI = (ESP);
  /* 11722462 push 0x1174d098 */
  push32((uint32_t)(0x1174d098u));
  /* 11722467 call dword ptr [0x11755408] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755408))), 0x1172246du);
  /* 1172246d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722470 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722472 call 0x117228e0 */
  push32(0x11722477u); f_117228e0();
  /* 11722477 mov esi, esp */
  ESI = (ESP);
  /* 11722479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172247b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1172247d call dword ptr [0x11755418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755418))), 0x11722483u);
  /* 11722483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722486 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722488 call 0x117228e0 */
  push32(0x1172248du); f_117228e0();
L_1172248d:;
  /* 1172248d push 0x1c79 */
  push32((uint32_t)(0x1c79u));
  /* 11722492 push 0x2837 */
  push32((uint32_t)(0x2837u));
  /* 11722497 push 0x11752850 */
  push32((uint32_t)(0x11752850u));
  /* 1172249c push 0x11752840 */
  push32((uint32_t)(0x11752840u));
  /* 117224a1 push 0x11752898 */
  push32((uint32_t)(0x11752898u));
  /* 117224a6 call 0x11721019 */
  push32(0x117224abu); f_11721019();
  /* 117224ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117224ae push 0x1dc0 */
  push32((uint32_t)(0x1dc0u));
  /* 117224b3 push 0x3945 */
  push32((uint32_t)(0x3945u));
  /* 117224b8 push 0x11752858 */
  push32((uint32_t)(0x11752858u));
  /* 117224bd push 0x11752848 */
  push32((uint32_t)(0x11752848u));
  /* 117224c2 push 0x117528d0 */
  push32((uint32_t)(0x117528d0u));
  /* 117224c7 call 0x11721019 */
  push32(0x117224ccu); f_11721019();
  /* 117224cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117224cf push 0x378c */
  push32((uint32_t)(0x378cu));
  /* 117224d4 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 117224d9 push 0x11752878 */
  push32((uint32_t)(0x11752878u));
  /* 117224de push 0x11752870 */
  push32((uint32_t)(0x11752870u));
  /* 117224e3 push 0x117526f0 */
  push32((uint32_t)(0x117526f0u));
  /* 117224e8 call 0x11721019 */
  push32(0x117224edu); f_11721019();
  /* 117224ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117224f0 push 0x23e9 */
  push32((uint32_t)(0x23e9u));
  /* 117224f5 push 0x1fba */
  push32((uint32_t)(0x1fbau));
  /* 117224fa push 0x11752868 */
  push32((uint32_t)(0x11752868u));
  /* 117224ff push 0x11752860 */
  push32((uint32_t)(0x11752860u));
  /* 11722504 push 0x11752728 */
  push32((uint32_t)(0x11752728u));
  /* 11722509 call 0x11721019 */
  push32(0x1172250eu); f_11721019();
  /* 1172250e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722511 push 0x1cf0 */
  push32((uint32_t)(0x1cf0u));
  /* 11722516 push 0x6a1 */
  push32((uint32_t)(0x6a1u));
  /* 1172251b push 0x11752918 */
  push32((uint32_t)(0x11752918u));
  /* 11722520 push 0x11752910 */
  push32((uint32_t)(0x11752910u));
  /* 11722525 push 0x11752760 */
  push32((uint32_t)(0x11752760u));
  /* 1172252a call 0x11721019 */
  push32(0x1172252fu); f_11721019();
  /* 1172252f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722532 push 0x1d0c */
  push32((uint32_t)(0x1d0cu));
  /* 11722537 push 0x17c1 */
  push32((uint32_t)(0x17c1u));
  /* 1172253c push 0x11752908 */
  push32((uint32_t)(0x11752908u));
  /* 11722541 push 0x11752880 */
  push32((uint32_t)(0x11752880u));
  /* 11722546 push 0x11752798 */
  push32((uint32_t)(0x11752798u));
  /* 1172254b call 0x11721019 */
  push32(0x11722550u); f_11721019();
  /* 11722550 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722553 push 0x6a6 */
  push32((uint32_t)(0x6a6u));
  /* 11722558 push 0x1f78 */
  push32((uint32_t)(0x1f78u));
  /* 1172255d push 0x11752940 */
  push32((uint32_t)(0x11752940u));
  /* 11722562 push 0x11752938 */
  push32((uint32_t)(0x11752938u));
  /* 11722567 push 0x117527d0 */
  push32((uint32_t)(0x117527d0u));
  /* 1172256c call 0x11721019 */
  push32(0x11722571u); f_11721019();
  /* 11722571 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722574 push 0x157c */
  push32((uint32_t)(0x157cu));
  /* 11722579 push 0x2008 */
  push32((uint32_t)(0x2008u));
  /* 1172257e push 0x11752930 */
  push32((uint32_t)(0x11752930u));
  /* 11722583 push 0x11752920 */
  push32((uint32_t)(0x11752920u));
  /* 11722588 push 0x11752808 */
  push32((uint32_t)(0x11752808u));
  /* 1172258d call 0x11721019 */
  push32(0x11722592u); f_11721019();
  /* 11722592 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722595 mov esi, esp */
  ESI = (ESP);
  /* 11722597 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722599 call dword ptr [0x1175541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175541c))), 0x1172259fu);
  /* 1172259f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117225a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117225a4 call 0x117228e0 */
  push32(0x117225a9u); f_117228e0();
  /* 117225a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117225ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117225b0 je 0x117225c1 */
  if (C.zf) goto L_117225c1;
  /* 117225b2 mov esi, esp */
  ESI = (ESP);
  /* 117225b4 call dword ptr [0x11755414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755414))), 0x117225bau);
  /* 117225ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117225bc call 0x117228e0 */
  push32(0x117225c1u); f_117228e0();
L_117225c1:;
  /* 117225c1 mov esi, esp */
  ESI = (ESP);
  /* 117225c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117225c5 call dword ptr [0x1175541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175541c))), 0x117225cbu);
  /* 117225cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117225ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117225d0 call 0x117228e0 */
  push32(0x117225d5u); f_117228e0();
  /* 117225d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117225da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117225dc je 0x11722644 */
  if (C.zf) goto L_11722644;
  /* 117225de mov esi, esp */
  ESI = (ESP);
  /* 117225e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 117225e2 call dword ptr [0x1175541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175541c))), 0x117225e8u);
  /* 117225e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117225eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117225ed call 0x117228e0 */
  push32(0x117225f2u); f_117228e0();
  /* 117225f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117225f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117225f9 je 0x11722644 */
  if (C.zf) goto L_11722644;
  /* 117225fb mov esi, esp */
  ESI = (ESP);
  /* 117225fd push 4 */
  push32((uint32_t)(0x4u));
  /* 117225ff call dword ptr [0x1175541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175541c))), 0x11722605u);
  /* 11722605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722608 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172260a call 0x117228e0 */
  push32(0x1172260fu); f_117228e0();
  /* 1172260f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11722614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11722616 je 0x11722644 */
  if (C.zf) goto L_11722644;
  /* 11722618 mov esi, esp */
  ESI = (ESP);
  /* 1172261a push 5 */
  push32((uint32_t)(0x5u));
  /* 1172261c call dword ptr [0x1175541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175541c))), 0x11722622u);
  /* 11722622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722627 call 0x117228e0 */
  push32(0x1172262cu); f_117228e0();
  /* 1172262c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11722631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11722633 je 0x11722644 */
  if (C.zf) goto L_11722644;
  /* 11722635 mov esi, esp */
  ESI = (ESP);
  /* 11722637 call dword ptr [0x11755424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755424))), 0x1172263du);
  /* 1172263d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172263f call 0x117228e0 */
  push32(0x11722644u); f_117228e0();
L_11722644:;
  /* 11722644 pop edi */
  EDI = (pop32());
  /* 11722645 pop esi */
  ESI = (pop32());
  /* 11722646 pop ebx */
  EBX = (pop32());
  /* 11722647 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172264a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172264c call 0x117228e0 */
  push32(0x11722651u); f_117228e0();
  /* 11722651 mov esp, ebp */
  ESP = (EBP);
  /* 11722653 pop ebp */
  EBP = (pop32());
  /* 11722654 ret  */
  ESPCHK(0x11721eb0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x117228e0 (56 bytes, 28 insns) */
void f_117228e0(void) {
  FTRACE(0x117228e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117228e0 jne 0x117228e3 */
  if (!C.zf) goto L_117228e3;
  /* 117228e2 ret  */
  ESPCHK(0x117228e0u, _esp0);
  ESP += 4; return;
L_117228e3:;
  /* 117228e3 push ebp */
  push32((uint32_t)(EBP));
  /* 117228e4 mov ebp, esp */
  EBP = (ESP);
  /* 117228e6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117228e9 push eax */
  push32((uint32_t)(EAX));
  /* 117228ea push edx */
  push32((uint32_t)(EDX));
  /* 117228eb push ebx */
  push32((uint32_t)(EBX));
  /* 117228ec push esi */
  push32((uint32_t)(ESI));
  /* 117228ed push edi */
  push32((uint32_t)(EDI));
  /* 117228ee push 0x1174d0e4 */
  push32((uint32_t)(0x1174d0e4u));
  /* 117228f3 push 0x1174d0e0 */
  push32((uint32_t)(0x1174d0e0u));
  /* 117228f8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 117228fa push 0x1174d0d0 */
  push32((uint32_t)(0x1174d0d0u));
  /* 117228ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11722901 call 0x11723380 */
  push32(0x11722906u); f_11723380();
  /* 11722906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722909 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172290c jne 0x1172290f */
  if (!C.zf) goto L_1172290f;
  /* 1172290e int3  */
  x86_unimpl("int3 @ 0x1172290e");
L_1172290f:;
  /* 1172290f pop edi */
  EDI = (pop32());
  /* 11722910 pop esi */
  ESI = (pop32());
  /* 11722911 pop ebx */
  EBX = (pop32());
  /* 11722912 pop edx */
  EDX = (pop32());
  /* 11722913 pop eax */
  EAX = (pop32());
  /* 11722914 mov esp, ebp */
  ESP = (EBP);
  /* 11722916 pop ebp */
  EBP = (pop32());
  /* 11722917 ret  */
  ESPCHK(0x117228e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002920 @ 0x11722920 (161 bytes, 60 insns) */
void f_11722920(void) {
  FTRACE(0x11722920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722920 push ebp */
  push32((uint32_t)(EBP));
  /* 11722921 mov ebp, esp */
  EBP = (ESP);
  /* 11722923 push ecx */
  push32((uint32_t)(ECX));
  /* 11722924 push ebx */
  push32((uint32_t)(EBX));
  /* 11722925 push esi */
  push32((uint32_t)(ESI));
  /* 11722926 push edi */
  push32((uint32_t)(EDI));
  /* 11722927 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172292b jne 0x11722932 */
  if (!C.zf) goto L_11722932;
  /* 1172292d jmp 0x117229ba */
  goto L_117229ba;
L_11722932:;
  /* 11722932 push 9 */
  push32((uint32_t)(0x9u));
  /* 11722934 call 0x11723b00 */
  push32(0x11722939u); f_11723b00();
  /* 11722939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172293c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172293f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722942 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11722945:;
  /* 11722945 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722948 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1172294b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11722951 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722954 je 0x11722997 */
  if (C.zf) goto L_11722997;
  /* 11722956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722959 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172295d je 0x11722997 */
  if (C.zf) goto L_11722997;
  /* 1172295f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722962 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11722965 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172296b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172296e je 0x11722997 */
  if (C.zf) goto L_11722997;
  /* 11722970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722973 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722977 je 0x11722997 */
  if (C.zf) goto L_11722997;
  /* 11722979 push 0x1174d1cc */
  push32((uint32_t)(0x1174d1ccu));
  /* 1172297e push 0 */
  push32((uint32_t)(0x0u));
  /* 11722980 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11722982 push 0x1174d1c0 */
  push32((uint32_t)(0x1174d1c0u));
  /* 11722987 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722989 call 0x11723380 */
  push32(0x1172298eu); f_11723380();
  /* 1172298e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722991 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722994 jne 0x11722997 */
  if (!C.zf) goto L_11722997;
  /* 11722996 int3  */
  x86_unimpl("int3 @ 0x11722996");
L_11722997:;
  /* 11722997 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11722999 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172299b jne 0x11722945 */
  if (!C.zf) goto L_11722945;
  /* 1172299d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117229a0 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117229a3 push eax */
  push32((uint32_t)(EAX));
  /* 117229a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117229a7 push ecx */
  push32((uint32_t)(ECX));
  /* 117229a8 call 0x11724690 */
  push32(0x117229adu); f_11724690();
  /* 117229ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117229b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 117229b2 call 0x11723ba0 */
  push32(0x117229b7u); f_11723ba0();
  /* 117229b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117229ba:;
  /* 117229ba pop edi */
  EDI = (pop32());
  /* 117229bb pop esi */
  ESI = (pop32());
  /* 117229bc pop ebx */
  EBX = (pop32());
  /* 117229bd mov esp, ebp */
  ESP = (EBP);
  /* 117229bf pop ebp */
  EBP = (pop32());
  /* 117229c0 ret  */
  ESPCHK(0x11722920u, _esp0);
  ESP += 4; return;
}

/* FUN_100029d0 @ 0x117229d0 (19 bytes, 9 insns) */
void f_117229d0(void) {
  FTRACE(0x117229d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117229d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117229d1 mov ebp, esp */
  EBP = (ESP);
  /* 117229d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117229d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117229d8 push eax */
  push32((uint32_t)(EAX));
  /* 117229d9 call 0x11723c30 */
  push32(0x117229deu); f_11723c30();
  /* 117229de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117229e1 pop ebp */
  EBP = (pop32());
  /* 117229e2 ret  */
  ESPCHK(0x117229d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f0 @ 0x117229f0 (45 bytes, 17 insns) */
void f_117229f0(void) {
  FTRACE(0x117229f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117229f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117229f1 mov ebp, esp */
  EBP = (ESP);
  /* 117229f3 push ecx */
  push32((uint32_t)(ECX));
  /* 117229f4 push ebx */
  push32((uint32_t)(EBX));
  /* 117229f5 push esi */
  push32((uint32_t)(ESI));
  /* 117229f6 push edi */
  push32((uint32_t)(EDI));
  /* 117229f7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117229fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117229fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11722a00 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11722a07 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11722a09 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11722a0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722a12 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722a15 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11722a18 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11722a1b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x11722a30 (7 bytes, 4 insns) */
void f_11722a30(void) {
  FTRACE(0x11722a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722a30 pop eax */
  EAX = (pop32());
  /* 11722a31 pop ecx */
  ECX = (pop32());
  /* 11722a32 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11722a35 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10002a40 @ 0x11722a40 (7 bytes, 4 insns) */
void f_11722a40(void) {
  FTRACE(0x11722a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722a40 pop eax */
  EAX = (pop32());
  /* 11722a41 pop ecx */
  ECX = (pop32());
  /* 11722a42 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11722a45 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10002a50 @ 0x11722a50 (7 bytes, 4 insns) */
void f_11722a50(void) {
  FTRACE(0x11722a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722a50 pop eax */
  EAX = (pop32());
  /* 11722a51 pop ecx */
  ECX = (pop32());
  /* 11722a52 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11722a55 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10002a60 @ 0x11722a60 (86 bytes, 32 insns) */
void f_11722a60(void) {
  FTRACE(0x11722a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11722a61 mov ebp, esp */
  EBP = (ESP);
  /* 11722a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722a66 push ebx */
  push32((uint32_t)(EBX));
  /* 11722a67 push esi */
  push32((uint32_t)(ESI));
  /* 11722a68 push edi */
  push32((uint32_t)(EDI));
  /* 11722a69 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11722a6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11722a72 mov dword ptr [ebp - 4], 0x11722a8c */
  w32((uint32_t)(EBP + -0x4), (0x11722a8cu));
  /* 11722a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722a7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722a7e push eax */
  push32((uint32_t)(EAX));
  /* 11722a7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722a82 push ecx */
  push32((uint32_t)(ECX));
  /* 11722a83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722a86 push edx */
  push32((uint32_t)(EDX));
  /* 11722a87 call 0x1173571c */
  push32(0x11722a8cu); f_1173571c();
  /* 11722a8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722a8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11722a92 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11722a95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722a98 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11722a9b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11722aa1 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11722aa4 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11722aa6 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11722aad pop edi */
  EDI = (pop32());
  /* 11722aae pop esi */
  ESI = (pop32());
  /* 11722aaf pop ebx */
  EBX = (pop32());
  /* 11722ab0 mov esp, ebp */
  ESP = (EBP);
  /* 11722ab2 pop ebp */
  EBP = (pop32());
  /* 11722ab3 ret 8 */
  ESPCHK(0x11722a60u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x11722ac0 (60 bytes, 31 insns) */
void f_11722ac0(void) {
  FTRACE(0x11722ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11722ac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 11722ac7 push esi */
  push32((uint32_t)(ESI));
  /* 11722ac8 push edi */
  push32((uint32_t)(EDI));
  /* 11722ac9 cld  */
  C.df=0;
  /* 11722aca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11722acd push 0 */
  push32((uint32_t)(0x0u));
  /* 11722acf push 0 */
  push32((uint32_t)(0x0u));
  /* 11722ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722ad3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11722ad6 push eax */
  push32((uint32_t)(EAX));
  /* 11722ad7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11722ada push ecx */
  push32((uint32_t)(ECX));
  /* 11722adb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11722ade push edx */
  push32((uint32_t)(EDX));
  /* 11722adf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11722ae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11722ae7 call 0x11725b70 */
  push32(0x11722aecu); f_11725b70();
  /* 11722aec add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722aef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11722af2 pop edi */
  EDI = (pop32());
  /* 11722af3 pop esi */
  ESI = (pop32());
  /* 11722af4 pop ebx */
  EBX = (pop32());
  /* 11722af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722af8 mov esp, ebp */
  ESP = (EBP);
  /* 11722afa pop ebp */
  EBP = (pop32());
  /* 11722afb ret  */
  ESPCHK(0x11722ac0u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x11722b00 (38 bytes, 16 insns) */
void f_11722b00(void) {
  FTRACE(0x11722b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11722b01 mov ebp, esp */
  EBP = (ESP);
  /* 11722b03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722b06 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11722b09 push ecx */
  push32((uint32_t)(ECX));
  /* 11722b0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722b0d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11722b10 push eax */
  push32((uint32_t)(EAX));
  /* 11722b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722b13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722b16 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11722b19 push edx */
  push32((uint32_t)(EDX));
  /* 11722b1a call 0x117260e0 */
  push32(0x11722b1fu); f_117260e0();
  /* 11722b1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722b22 pop ebp */
  EBP = (pop32());
  /* 11722b23 ret 4 */
  ESPCHK(0x11722b00u, _esp0);
  ESP += 8; return;
}

/* FUN_10002b30 @ 0x11722b30 (104 bytes, 36 insns) */
void f_11722b30(void) {
  FTRACE(0x11722b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11722b31 mov ebp, esp */
  EBP = (ESP);
  /* 11722b33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722b36 push ebx */
  push32((uint32_t)(EBX));
  /* 11722b37 push esi */
  push32((uint32_t)(ESI));
  /* 11722b38 push edi */
  push32((uint32_t)(EDI));
  /* 11722b39 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11722b40 mov dword ptr [ebp - 0x10], 0x11722ba0 */
  w32((uint32_t)(EBP + -0x10), (0x11722ba0u));
  /* 11722b47 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722b4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11722b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722b50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11722b53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11722b56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11722b59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11722b5c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11722b62 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11722b65 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11722b6b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11722b71 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11722b74 push eax */
  push32((uint32_t)(EAX));
  /* 11722b75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722b78 push ecx */
  push32((uint32_t)(ECX));
  /* 11722b79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11722b7c push edx */
  push32((uint32_t)(EDX));
  /* 11722b7d call 0x117267d0 */
  push32(0x11722b82u); f_117267d0();
  /* 11722b82 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11722b85 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11722b88 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11722b8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11722b91 pop edi */
  EDI = (pop32());
  /* 11722b92 pop esi */
  ESI = (pop32());
  /* 11722b93 pop ebx */
  EBX = (pop32());
  /* 11722b94 mov esp, ebp */
  ESP = (EBP);
  /* 11722b96 pop ebp */
  EBP = (pop32());
  /* 11722b97 ret  */
  ESPCHK(0x11722b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba0 @ 0x11722ba0 (57 bytes, 30 insns) */
void f_11722ba0(void) {
  FTRACE(0x11722ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11722ba3 push ebx */
  push32((uint32_t)(EBX));
  /* 11722ba4 push esi */
  push32((uint32_t)(ESI));
  /* 11722ba5 push edi */
  push32((uint32_t)(EDI));
  /* 11722ba6 cld  */
  C.df=0;
  /* 11722ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722ba9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722bac push eax */
  push32((uint32_t)(EAX));
  /* 11722bad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722bb0 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11722bb3 push edx */
  push32((uint32_t)(EDX));
  /* 11722bb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722bb7 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11722bba push ecx */
  push32((uint32_t)(ECX));
  /* 11722bbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11722bbd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11722bc0 push edx */
  push32((uint32_t)(EDX));
  /* 11722bc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722bc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11722bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11722bc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722bcb push edx */
  push32((uint32_t)(EDX));
  /* 11722bcc call 0x11725b70 */
  push32(0x11722bd1u); f_11725b70();
  /* 11722bd1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722bd4 pop edi */
  EDI = (pop32());
  /* 11722bd5 pop esi */
  ESI = (pop32());
  /* 11722bd6 pop ebx */
  EBX = (pop32());
  /* 11722bd7 pop ebp */
  EBP = (pop32());
  /* 11722bd8 ret  */
  ESPCHK(0x11722ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002be0 @ 0x11722be0 (204 bytes, 58 insns) */
void f_11722be0(void) {
  FTRACE(0x11722be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722be1 mov ebp, esp */
  EBP = (ESP);
  /* 11722be3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722be6 push ebx */
  push32((uint32_t)(EBX));
  /* 11722be7 push esi */
  push32((uint32_t)(ESI));
  /* 11722be8 push edi */
  push32((uint32_t)(EDI));
  /* 11722be9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11722bf0 mov dword ptr [ebp - 0x24], 0x11722cb0 */
  w32((uint32_t)(EBP + -0x24), (0x11722cb0u));
  /* 11722bf7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11722bfa mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11722bfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722c00 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11722c03 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11722c06 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11722c09 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11722c0c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11722c0f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11722c16 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11722c1d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11722c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11722c2b mov dword ptr [ebp - 0x10], 0x11722c7c */
  w32((uint32_t)(EBP + -0x10), (0x11722c7cu));
  /* 11722c32 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11722c35 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11722c38 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11722c3e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11722c41 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11722c47 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11722c4d mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11722c54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722c57 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11722c5a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11722c5d mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11722c60 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11722c63 push eax */
  push32((uint32_t)(EAX));
  /* 11722c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722c67 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11722c69 push edx */
  push32((uint32_t)(EDX));
  /* 11722c6a call 0x11726900 */
  push32(0x11722c6fu); f_11726900();
  /* 11722c6f call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11722c72u);
  /* 11722c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722c75 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11722c7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722c80 je 0x11722c99 */
  if (C.zf) goto L_11722c99;
  /* 11722c82 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11722c89 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11722c8b mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11722c8e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11722c90 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11722c97 jmp 0x11722ca2 */
  goto L_11722ca2;
L_11722c99:;
  /* 11722c99 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11722c9c mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11722ca2:;
  /* 11722ca2 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11722ca5 pop edi */
  EDI = (pop32());
  /* 11722ca6 pop esi */
  ESI = (pop32());
  /* 11722ca7 pop ebx */
  EBX = (pop32());
  /* 11722ca8 mov esp, ebp */
  ESP = (EBP);
  /* 11722caa pop ebp */
  EBP = (pop32());
  /* 11722cab ret  */
  ESPCHK(0x11722be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb0 @ 0x11722cb0 (124 bytes, 53 insns) */
void f_11722cb0(void) {
  FTRACE(0x11722cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11722cb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11722cb4 push esi */
  push32((uint32_t)(ESI));
  /* 11722cb5 push edi */
  push32((uint32_t)(EDI));
  /* 11722cb6 cld  */
  C.df=0;
  /* 11722cb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722cba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11722cbd and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 11722cc0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11722cc2 je 0x11722cd5 */
  if (C.zf) goto L_11722cd5;
  /* 11722cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722cc7 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 11722cce mov eax, 1 */
  EAX = (0x1u);
  /* 11722cd3 jmp 0x11722d2c */
  goto L_11722d2c;
L_11722cd5:;
  /* 11722cd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11722cd7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722cda mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11722cdd push ecx */
  push32((uint32_t)(ECX));
  /* 11722cde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722ce1 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11722ce4 push eax */
  push32((uint32_t)(EAX));
  /* 11722ce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722ce8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11722ceb push edx */
  push32((uint32_t)(EDX));
  /* 11722cec push 0 */
  push32((uint32_t)(0x0u));
  /* 11722cee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11722cf1 push eax */
  push32((uint32_t)(EAX));
  /* 11722cf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722cf5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11722cf8 push edx */
  push32((uint32_t)(EDX));
  /* 11722cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722cfc push eax */
  push32((uint32_t)(EAX));
  /* 11722cfd call 0x11725b70 */
  push32(0x11722d02u); f_11725b70();
  /* 11722d02 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722d05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722d08 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722d0c jne 0x11722d1b */
  if (!C.zf) goto L_11722d1b;
  /* 11722d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722d11 push edx */
  push32((uint32_t)(EDX));
  /* 11722d12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722d15 push eax */
  push32((uint32_t)(EAX));
  /* 11722d16 call 0x11722a60 */
  push32(0x11722d1bu); f_11722a60();
L_11722d1b:;
  /* 11722d1b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722d1e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11722d21 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11722d24 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11722d27 mov eax, 1 */
  EAX = (0x1u);
L_11722d2c:;
  /* 11722d2c pop edi */
  EDI = (pop32());
  /* 11722d2d pop esi */
  ESI = (pop32());
  /* 11722d2e pop ebx */
  EBX = (pop32());
  /* 11722d2f pop ebp */
  EBP = (pop32());
  /* 11722d30 ret  */
  ESPCHK(0x11722cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d40 @ 0x11722d40 (130 bytes, 57 insns) */
void f_11722d40(void) {
  FTRACE(0x11722d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11722d41 mov ebp, esp */
  EBP = (ESP);
  /* 11722d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11722d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722d47 push ebx */
  push32((uint32_t)(EBX));
  /* 11722d48 push esi */
  push32((uint32_t)(ESI));
  /* 11722d49 push edi */
  push32((uint32_t)(EDI));
  /* 11722d4a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11722d4d mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11722d50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11722d53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722d56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11722d58 mov edi, esi */
  EDI = (ESI);
  /* 11722d5a mov ebx, esi */
  EBX = (ESI);
  /* 11722d5c jl 0x11722d99 */
  if ((C.sf!=C.of)) goto L_11722d99;
L_11722d5e:;
  /* 11722d5e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722d61 jne 0x11722d68 */
  if (!C.zf) goto L_11722d68;
  /* 11722d63 call 0x11726b80 */
  push32(0x11722d68u); f_11726b80();
L_11722d68:;
  /* 11722d68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722d6b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11722d6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11722d6f lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 11722d72 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11722d75 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722d78 jge 0x11722d7f */
  if ((C.sf==C.of)) goto L_11722d7f;
  /* 11722d7a cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722d7d jle 0x11722d84 */
  if ((C.zf||C.sf!=C.of)) goto L_11722d84;
L_11722d7f:;
  /* 11722d7f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722d82 jne 0x11722d8f */
  if (!C.zf) goto L_11722d8f;
L_11722d84:;
  /* 11722d84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722d87 mov edi, ebx */
  EDI = (EBX);
  /* 11722d89 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11722d8a mov ebx, esi */
  EBX = (ESI);
  /* 11722d8c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11722d8f:;
  /* 11722d8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11722d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11722d94 jge 0x11722d5e */
  if ((C.sf==C.of)) goto L_11722d5e;
  /* 11722d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11722d99:;
  /* 11722d99 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11722d9c mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11722d9f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11722da0 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11722da2 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 11722da4 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722da7 ja 0x11722dad */
  if ((!C.cf&&!C.zf)) goto L_11722dad;
  /* 11722da9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722dab jbe 0x11722db2 */
  if ((C.cf||C.zf)) goto L_11722db2;
L_11722dad:;
  /* 11722dad call 0x11726b80 */
  push32(0x11722db2u); f_11726b80();
L_11722db2:;
  /* 11722db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722db5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11722db8 pop edi */
  EDI = (pop32());
  /* 11722db9 pop esi */
  ESI = (pop32());
  /* 11722dba lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11722dbd pop ebx */
  EBX = (pop32());
  /* 11722dbe mov esp, ebp */
  ESP = (EBP);
  /* 11722dc0 pop ebp */
  EBP = (pop32());
  /* 11722dc1 ret  */
  ESPCHK(0x11722d40u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11722dd0 (32 bytes, 18 insns) */
void f_11722dd0(void) {
  FTRACE(0x11722dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11722dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11722dd4 push esi */
  push32((uint32_t)(ESI));
  /* 11722dd5 push edi */
  push32((uint32_t)(EDI));
  /* 11722dd6 push ebp */
  push32((uint32_t)(EBP));
  /* 11722dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11722ddb push 0x11722de8 */
  push32((uint32_t)(0x11722de8u));
  /* 11722de0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11722de3 call 0x1173571c */
  push32(0x11722de8u); f_1173571c();
  /* 11722de8 pop ebp */
  EBP = (pop32());
  /* 11722de9 pop edi */
  EDI = (pop32());
  /* 11722dea pop esi */
  ESI = (pop32());
  /* 11722deb pop ebx */
  EBX = (pop32());
  /* 11722dec mov esp, ebp */
  ESP = (EBP);
  /* 11722dee pop ebp */
  EBP = (pop32());
  /* 11722def ret  */
  ESPCHK(0x11722dd0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11722e12 (104 bytes, 33 insns) */
void f_11722e12(void) {
  FTRACE(0x11722e12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722e12 push ebx */
  push32((uint32_t)(EBX));
  /* 11722e13 push esi */
  push32((uint32_t)(ESI));
  /* 11722e14 push edi */
  push32((uint32_t)(EDI));
  /* 11722e15 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11722e19 push eax */
  push32((uint32_t)(EAX));
  /* 11722e1a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11722e1c push 0x11722df0 */
  push32((uint32_t)(0x11722df0u));
  /* 11722e21 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11722e28 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11722e2f:;
  /* 11722e2f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11722e33 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11722e36 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11722e39 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722e3c je 0x11722e6c */
  if (C.zf) goto L_11722e6c;
  /* 11722e3e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722e42 je 0x11722e6c */
  if (C.zf) goto L_11722e6c;
  /* 11722e44 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11722e47 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11722e4a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11722e4e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11722e51 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722e56 jne 0x11722e6a */
  if (!C.zf) goto L_11722e6a;
  /* 11722e58 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11722e5d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11722e61 call 0x11722ea6 */
  push32(0x11722e66u); f_11722ea6();
  /* 11722e66 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11722e6au);
L_11722e6a:;
  /* 11722e6a jmp 0x11722e2f */
  goto L_11722e2f;
L_11722e6c:;
  /* 11722e6c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11722e73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722e76 pop edi */
  EDI = (pop32());
  /* 11722e77 pop esi */
  ESI = (pop32());
  /* 11722e78 pop ebx */
  EBX = (pop32());
  /* 11722e79 ret  */
  ESPCHK(0x11722e12u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11722e7a (35 bytes, 10 insns) */
void f_11722e7a(void) {
  FTRACE(0x11722e7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11722e7c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11722e83 cmp dword ptr [ecx + 4], 0x11722df0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11722df0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722e8a jne 0x11722e9c */
  if (!C.zf) goto L_11722e9c;
  /* 11722e8c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11722e8f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11722e92 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722e95 jne 0x11722e9c */
  if (!C.zf) goto L_11722e9c;
  /* 11722e97 mov eax, 1 */
  EAX = (0x1u);
L_11722e9c:;
  /* 11722e9c ret  */
  ESPCHK(0x11722e7au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11722e9d (9 bytes, 4 insns) */
void f_11722e9d(void) {
  FTRACE(0x11722e9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722e9d push ebx */
  push32((uint32_t)(EBX));
  /* 11722e9e push ecx */
  push32((uint32_t)(ECX));
  /* 11722e9f mov ebx, 0x11750d40 */
  EBX = (0x11750d40u);
  /* 11722ea4 jmp 0x11722eb0 */
  jmp_ind(0x11722eb0u); return;
}

/* FUN_10002ea6 @ 0x11722ea6 (24 bytes, 10 insns) */
void f_11722ea6(void) {
  FTRACE(0x11722ea6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 11722ea7 push ecx */
  push32((uint32_t)(ECX));
  /* 11722ea8 mov ebx, 0x11750d40 */
  EBX = (0x11750d40u);
  /* 11722ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722eb0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11722eb3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11722eb6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11722eb9 pop ecx */
  ECX = (pop32());
  /* 11722eba pop ebx */
  EBX = (pop32());
  /* 11722ebb ret 4 */
  ESPCHK(0x11722ea6u, _esp0);
  ESP += 8; return;
}

/* FUN_10002ec0 @ 0x11722ec0 (179 bytes, 53 insns) */
void f_11722ec0(void) {
  FTRACE(0x11722ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11722ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11722ec4 call 0x11726dc0 */
  push32(0x11722ec9u); f_11726dc0();
  /* 11722ec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722ecb mov eax, dword ptr [0x11754518] */
  EAX = (r32((uint32_t)(0x11754518)));
  /* 11722ed0 push eax */
  push32((uint32_t)(EAX));
  /* 11722ed1 call 0x11724ad0 */
  push32(0x11722ed6u); f_11724ad0();
  /* 11722ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722ed9 mov ecx, dword ptr [0x11754514] */
  ECX = (r32((uint32_t)(0x11754514)));
  /* 11722edf sub ecx, dword ptr [0x11754518] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11754518))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722ee5 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11722ee8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722eea jae 0x11722f4d */
  if (!C.cf) goto L_11722f4d;
  /* 11722eec push 0x68 */
  push32((uint32_t)(0x68u));
  /* 11722eee push 0x1174d1f4 */
  push32((uint32_t)(0x1174d1f4u));
  /* 11722ef3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722ef5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11722ef7 mov edx, dword ptr [0x11754518] */
  EDX = (r32((uint32_t)(0x11754518)));
  /* 11722efd push edx */
  push32((uint32_t)(EDX));
  /* 11722efe call 0x11724ad0 */
  push32(0x11722f03u); f_11724ad0();
  /* 11722f03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722f06 add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11722f09 push eax */
  push32((uint32_t)(EAX));
  /* 11722f0a mov eax, dword ptr [0x11754518] */
  EAX = (r32((uint32_t)(0x11754518)));
  /* 11722f0f push eax */
  push32((uint32_t)(EAX));
  /* 11722f10 call 0x11724090 */
  push32(0x11722f15u); f_11724090();
  /* 11722f15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722f18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11722f1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722f1f jne 0x11722f2a */
  if (!C.zf) goto L_11722f2a;
  /* 11722f21 call 0x11726dd0 */
  push32(0x11722f26u); f_11726dd0();
  /* 11722f26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11722f28 jmp 0x11722f6f */
  goto L_11722f6f;
L_11722f2a:;
  /* 11722f2a mov ecx, dword ptr [0x11754514] */
  ECX = (r32((uint32_t)(0x11754514)));
  /* 11722f30 sub ecx, dword ptr [0x11754518] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11754518))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722f36 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11722f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722f3c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11722f3f mov dword ptr [0x11754514], eax */
  w32((uint32_t)(0x11754514), (EAX));
  /* 11722f44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11722f47 mov dword ptr [0x11754518], ecx */
  w32((uint32_t)(0x11754518), (ECX));
L_11722f4d:;
  /* 11722f4d mov edx, dword ptr [0x11754514] */
  EDX = (r32((uint32_t)(0x11754514)));
  /* 11722f53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722f56 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11722f58 mov ecx, dword ptr [0x11754514] */
  ECX = (r32((uint32_t)(0x11754514)));
  /* 11722f5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11722f61 mov dword ptr [0x11754514], ecx */
  w32((uint32_t)(0x11754514), (ECX));
  /* 11722f67 call 0x11726dd0 */
  push32(0x11722f6cu); f_11726dd0();
  /* 11722f6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11722f6f:;
  /* 11722f6f mov esp, ebp */
  ESP = (EBP);
  /* 11722f71 pop ebp */
  EBP = (pop32());
  /* 11722f72 ret  */
  ESPCHK(0x11722ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f80 @ 0x11722f80 (24 bytes, 12 insns) */
void f_11722f80(void) {
  FTRACE(0x11722f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11722f81 mov ebp, esp */
  EBP = (ESP);
  /* 11722f83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11722f86 push eax */
  push32((uint32_t)(EAX));
  /* 11722f87 call 0x11722ec0 */
  push32(0x11722f8cu); f_11722ec0();
  /* 11722f8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722f8f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11722f91 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11722f93 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11722f95 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11722f96 pop ebp */
  EBP = (pop32());
  /* 11722f97 ret  */
  ESPCHK(0x11722f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa0 @ 0x11722fa0 (77 bytes, 20 insns) */
void f_11722fa0(void) {
  FTRACE(0x11722fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11722fa3 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11722fa8 push 0x1174d1f4 */
  push32((uint32_t)(0x1174d1f4u));
  /* 11722fad push 2 */
  push32((uint32_t)(0x2u));
  /* 11722faf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11722fb4 call 0x11723c00 */
  push32(0x11722fb9u); f_11723c00();
  /* 11722fb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11722fbc mov dword ptr [0x11754518], eax */
  w32((uint32_t)(0x11754518), (EAX));
  /* 11722fc1 cmp dword ptr [0x11754518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722fc8 jne 0x11722fd4 */
  if (!C.zf) goto L_11722fd4;
  /* 11722fca push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11722fcc call 0x11723230 */
  push32(0x11722fd1u); f_11723230();
  /* 11722fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11722fd4:;
  /* 11722fd4 mov eax, dword ptr [0x11754518] */
  EAX = (r32((uint32_t)(0x11754518)));
  /* 11722fd9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11722fdf mov ecx, dword ptr [0x11754518] */
  ECX = (r32((uint32_t)(0x11754518)));
  /* 11722fe5 mov dword ptr [0x11754514], ecx */
  w32((uint32_t)(0x11754514), (ECX));
  /* 11722feb pop ebp */
  EBP = (pop32());
  /* 11722fec ret  */
  ESPCHK(0x11722fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ff0 @ 0x11722ff0 (313 bytes, 78 insns) */
void f_11722ff0(void) {
  FTRACE(0x11722ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11722ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11722ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11722ff3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11722ff7 jne 0x117230b7 */
  if (!C.zf) goto L_117230b7;
  /* 11722ffd call dword ptr [0x117552d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552d8))), 0x11723003u);
  /* 11723003 mov dword ptr [0x11752a78], eax */
  w32((uint32_t)(0x11752a78), (EAX));
  /* 11723008 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172300a call 0x11727a60 */
  push32(0x1172300fu); f_11727a60();
  /* 1172300f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723014 jne 0x1172301d */
  if (!C.zf) goto L_1172301d;
  /* 11723016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723018 jmp 0x11723125 */
  goto L_11723125;
L_1172301d:;
  /* 1172301d mov eax, dword ptr [0x11752a78] */
  EAX = (r32((uint32_t)(0x11752a78)));
  /* 11723022 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11723025 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172302a mov dword ptr [0x11752a84], eax */
  w32((uint32_t)(0x11752a84), (EAX));
  /* 1172302f mov ecx, dword ptr [0x11752a78] */
  ECX = (r32((uint32_t)(0x11752a78)));
  /* 11723035 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172303b mov dword ptr [0x11752a80], ecx */
  w32((uint32_t)(0x11752a80), (ECX));
  /* 11723041 mov edx, dword ptr [0x11752a80] */
  EDX = (r32((uint32_t)(0x11752a80)));
  /* 11723047 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1172304a add edx, dword ptr [0x11752a84] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11752a84))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723050 mov dword ptr [0x11752a7c], edx */
  w32((uint32_t)(0x11752a7c), (EDX));
  /* 11723056 mov eax, dword ptr [0x11752a78] */
  EAX = (r32((uint32_t)(0x11752a78)));
  /* 1172305b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1172305e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11723063 mov dword ptr [0x11752a78], eax */
  w32((uint32_t)(0x11752a78), (EAX));
  /* 11723068 call 0x11726820 */
  push32(0x1172306du); f_11726820();
  /* 1172306d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172306f jne 0x1172307d */
  if (!C.zf) goto L_1172307d;
  /* 11723071 call 0x11727ab0 */
  push32(0x11723076u); f_11727ab0();
  /* 11723076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723078 jmp 0x11723125 */
  goto L_11723125;
L_1172307d:;
  /* 1172307d call dword ptr [0x117552d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552d4))), 0x11723083u);
  /* 11723083 mov dword ptr [0x11754538], eax */
  w32((uint32_t)(0x11754538), (EAX));
  /* 11723088 call 0x11727840 */
  push32(0x1172308du); f_11727840();
  /* 1172308d mov dword ptr [0x117529ec], eax */
  w32((uint32_t)(0x117529ec), (EAX));
  /* 11723092 call 0x11726e10 */
  push32(0x11723097u); f_11726e10();
  /* 11723097 call 0x11727330 */
  push32(0x1172309cu); f_11727330();
  /* 1172309c call 0x117271e0 */
  push32(0x117230a1u); f_117271e0();
  /* 117230a1 call 0x11726c10 */
  push32(0x117230a6u); f_11726c10();
  /* 117230a6 mov ecx, dword ptr [0x117529e8] */
  ECX = (r32((uint32_t)(0x117529e8)));
  /* 117230ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117230af mov dword ptr [0x117529e8], ecx */
  w32((uint32_t)(0x117529e8), (ECX));
  /* 117230b5 jmp 0x11723120 */
  goto L_11723120;
L_117230b7:;
  /* 117230b7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117230bb jne 0x11723110 */
  if (!C.zf) goto L_11723110;
  /* 117230bd cmp dword ptr [0x117529e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117529e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117230c4 jle 0x1172310a */
  if ((C.zf||C.sf!=C.of)) goto L_1172310a;
  /* 117230c6 mov edx, dword ptr [0x117529e8] */
  EDX = (r32((uint32_t)(0x117529e8)));
  /* 117230cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117230cf mov dword ptr [0x117529e8], edx */
  w32((uint32_t)(0x117529e8), (EDX));
  /* 117230d5 cmp dword ptr [0x11752ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117230dc jne 0x117230e3 */
  if (!C.zf) goto L_117230e3;
  /* 117230de call 0x11726c90 */
  push32(0x117230e3u); f_11726c90();
L_117230e3:;
  /* 117230e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117230e5 call 0x11725110 */
  push32(0x117230eau); f_11725110();
  /* 117230ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117230ed and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 117230f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117230f2 je 0x117230f9 */
  if (C.zf) goto L_117230f9;
  /* 117230f4 call 0x11725a20 */
  push32(0x117230f9u); f_11725a20();
L_117230f9:;
  /* 117230f9 call 0x11727140 */
  push32(0x117230feu); f_11727140();
  /* 117230fe call 0x117268b0 */
  push32(0x11723103u); f_117268b0();
  /* 11723103 call 0x11727ab0 */
  push32(0x11723108u); f_11727ab0();
  /* 11723108 jmp 0x1172310e */
  goto L_1172310e;
L_1172310a:;
  /* 1172310a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172310c jmp 0x11723125 */
  goto L_11723125;
L_1172310e:;
  /* 1172310e jmp 0x11723120 */
  goto L_11723120;
L_11723110:;
  /* 11723110 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723114 jne 0x11723120 */
  if (!C.zf) goto L_11723120;
  /* 11723116 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723118 call 0x117269a0 */
  push32(0x1172311du); f_117269a0();
  /* 1172311d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723120:;
  /* 11723120 mov eax, 1 */
  EAX = (0x1u);
L_11723125:;
  /* 11723125 pop ebp */
  EBP = (pop32());
  /* 11723126 ret 0xc */
  ESPCHK(0x11722ff0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11723130 (243 bytes, 86 insns) */
void f_11723130(void) {
  FTRACE(0x11723130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723130 push ebp */
  push32((uint32_t)(EBP));
  /* 11723131 mov ebp, esp */
  EBP = (ESP);
  /* 11723133 push ecx */
  push32((uint32_t)(ECX));
  /* 11723134 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172313b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172313f jne 0x11723151 */
  if (!C.zf) goto L_11723151;
  /* 11723141 cmp dword ptr [0x117529e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117529e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723148 jne 0x11723151 */
  if (!C.zf) goto L_11723151;
  /* 1172314a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172314c jmp 0x1172321d */
  goto L_1172321d;
L_11723151:;
  /* 11723151 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723155 je 0x1172315d */
  if (C.zf) goto L_1172315d;
  /* 11723157 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172315b jne 0x1172319f */
  if (!C.zf) goto L_1172319f;
L_1172315d:;
  /* 1172315d cmp dword ptr [0x11754548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723164 je 0x1172317b */
  if (C.zf) goto L_1172317b;
  /* 11723166 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723169 push eax */
  push32((uint32_t)(EAX));
  /* 1172316a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172316d push ecx */
  push32((uint32_t)(ECX));
  /* 1172316e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723171 push edx */
  push32((uint32_t)(EDX));
  /* 11723172 call dword ptr [0x11754548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11754548))), 0x11723178u);
  /* 11723178 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172317b:;
  /* 1172317b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172317f je 0x11723195 */
  if (C.zf) goto L_11723195;
  /* 11723181 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723184 push eax */
  push32((uint32_t)(EAX));
  /* 11723185 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723188 push ecx */
  push32((uint32_t)(ECX));
  /* 11723189 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172318c push edx */
  push32((uint32_t)(EDX));
  /* 1172318d call 0x11722ff0 */
  push32(0x11723192u); f_11722ff0();
  /* 11723192 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11723195:;
  /* 11723195 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723199 jne 0x1172319f */
  if (!C.zf) goto L_1172319f;
  /* 1172319b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172319d jmp 0x1172321d */
  goto L_1172321d;
L_1172319f:;
  /* 1172319f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117231a2 push eax */
  push32((uint32_t)(EAX));
  /* 117231a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117231a6 push ecx */
  push32((uint32_t)(ECX));
  /* 117231a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117231aa push edx */
  push32((uint32_t)(EDX));
  /* 117231ab call 0x11721014 */
  push32(0x117231b0u); f_11721014();
  /* 117231b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117231b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117231b7 jne 0x117231ce */
  if (!C.zf) goto L_117231ce;
  /* 117231b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117231bd jne 0x117231ce */
  if (!C.zf) goto L_117231ce;
  /* 117231bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117231c2 push eax */
  push32((uint32_t)(EAX));
  /* 117231c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117231c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117231c8 push ecx */
  push32((uint32_t)(ECX));
  /* 117231c9 call 0x11722ff0 */
  push32(0x117231ceu); f_11722ff0();
L_117231ce:;
  /* 117231ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117231d2 je 0x117231da */
  if (C.zf) goto L_117231da;
  /* 117231d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117231d8 jne 0x1172321a */
  if (!C.zf) goto L_1172321a;
L_117231da:;
  /* 117231da mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117231dd push edx */
  push32((uint32_t)(EDX));
  /* 117231de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117231e1 push eax */
  push32((uint32_t)(EAX));
  /* 117231e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117231e5 push ecx */
  push32((uint32_t)(ECX));
  /* 117231e6 call 0x11722ff0 */
  push32(0x117231ebu); f_11722ff0();
  /* 117231eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117231ed jne 0x117231f6 */
  if (!C.zf) goto L_117231f6;
  /* 117231ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117231f6:;
  /* 117231f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117231fa je 0x1172321a */
  if (C.zf) goto L_1172321a;
  /* 117231fc cmp dword ptr [0x11754548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723203 je 0x1172321a */
  if (C.zf) goto L_1172321a;
  /* 11723205 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723208 push edx */
  push32((uint32_t)(EDX));
  /* 11723209 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172320c push eax */
  push32((uint32_t)(EAX));
  /* 1172320d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723210 push ecx */
  push32((uint32_t)(ECX));
  /* 11723211 call dword ptr [0x11754548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11754548))), 0x11723217u);
  /* 11723217 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172321a:;
  /* 1172321a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172321d:;
  /* 1172321d mov esp, ebp */
  ESP = (EBP);
  /* 1172321f pop ebp */
  EBP = (pop32());
  /* 11723220 ret 0xc */
  ESPCHK(0x11723130u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11723230 (58 bytes, 18 insns) */
void f_11723230(void) {
  FTRACE(0x11723230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723230 push ebp */
  push32((uint32_t)(EBP));
  /* 11723231 mov ebp, esp */
  EBP = (ESP);
  /* 11723233 cmp dword ptr [0x117529f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172323a je 0x1172324e */
  if (C.zf) goto L_1172324e;
  /* 1172323c cmp dword ptr [0x117529f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117529f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723243 jne 0x11723253 */
  if (!C.zf) goto L_11723253;
  /* 11723245 cmp dword ptr [0x117529f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172324c jne 0x11723253 */
  if (!C.zf) goto L_11723253;
L_1172324e:;
  /* 1172324e call 0x11727b50 */
  push32(0x11723253u); f_11727b50();
L_11723253:;
  /* 11723253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723256 push eax */
  push32((uint32_t)(EAX));
  /* 11723257 call 0x11727ba0 */
  push32(0x1172325cu); f_11727ba0();
  /* 1172325c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172325f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11723264 call dword ptr [0x11750d50] */
  call_ind((uint32_t)(r32((uint32_t)(0x11750d50))), 0x1172326au);
  /* 1172326a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172326d pop ebp */
  EBP = (pop32());
  /* 1172326e ret  */
  ESPCHK(0x11723230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x11723270 (11 bytes, 5 insns) */
void f_11723270(void) {
  FTRACE(0x11723270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723270 push ebp */
  push32((uint32_t)(EBP));
  /* 11723271 mov ebp, esp */
  EBP = (ESP);
  /* 11723273 call dword ptr [0x117552dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552dc))), 0x11723279u);
  /* 11723279 pop ebp */
  EBP = (pop32());
  /* 1172327a ret  */
  ESPCHK(0x11723270u, _esp0);
  ESP += 4; return;
}

/* FUN_10003280 @ 0x11723280 (87 bytes, 30 insns) */
void f_11723280(void) {
  FTRACE(0x11723280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723280 push ebp */
  push32((uint32_t)(EBP));
  /* 11723281 mov ebp, esp */
  EBP = (ESP);
  /* 11723283 push ecx */
  push32((uint32_t)(ECX));
  /* 11723284 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723288 jl 0x11723290 */
  if ((C.sf!=C.of)) goto L_11723290;
  /* 1172328a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172328e jl 0x11723295 */
  if ((C.sf!=C.of)) goto L_11723295;
L_11723290:;
  /* 11723290 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11723293 jmp 0x117232d3 */
  goto L_117232d3;
L_11723295:;
  /* 11723295 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723299 jne 0x117232a7 */
  if (!C.zf) goto L_117232a7;
  /* 1172329b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172329e mov eax, dword ptr [eax*4 + 0x11750d58] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11750d58)));
  /* 117232a5 jmp 0x117232d3 */
  goto L_117232d3;
L_117232a7:;
  /* 117232a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117232aa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 117232ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117232af je 0x117232b6 */
  if (C.zf) goto L_117232b6;
  /* 117232b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117232b4 jmp 0x117232d3 */
  goto L_117232d3;
L_117232b6:;
  /* 117232b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117232b9 mov eax, dword ptr [edx*4 + 0x11750d58] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11750d58)));
  /* 117232c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117232c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117232c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117232c9 mov dword ptr [ecx*4 + 0x11750d58], edx */
  w32((uint32_t)(ECX*4 + 0x11750d58), (EDX));
  /* 117232d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117232d3:;
  /* 117232d3 mov esp, ebp */
  ESP = (EBP);
  /* 117232d5 pop ebp */
  EBP = (pop32());
  /* 117232d6 ret  */
  ESPCHK(0x11723280u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x117232e0 (126 bytes, 38 insns) */
void f_117232e0(void) {
  FTRACE(0x117232e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117232e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117232e1 mov ebp, esp */
  EBP = (ESP);
  /* 117232e3 push ecx */
  push32((uint32_t)(ECX));
  /* 117232e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117232e8 jl 0x117232f0 */
  if ((C.sf!=C.of)) goto L_117232f0;
  /* 117232ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117232ee jl 0x117232f7 */
  if ((C.sf!=C.of)) goto L_117232f7;
L_117232f0:;
  /* 117232f0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 117232f5 jmp 0x1172335a */
  goto L_1172335a;
L_117232f7:;
  /* 117232f7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117232fb jne 0x11723309 */
  if (!C.zf) goto L_11723309;
  /* 117232fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723300 mov eax, dword ptr [eax*4 + 0x11750d64] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11750d64)));
  /* 11723307 jmp 0x1172335a */
  goto L_1172335a;
L_11723309:;
  /* 11723309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172330c mov edx, dword ptr [ecx*4 + 0x11750d64] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750d64)));
  /* 11723313 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11723316 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172331a jne 0x11723330 */
  if (!C.zf) goto L_11723330;
  /* 1172331c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1172331e call dword ptr [0x117552e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e0))), 0x11723324u);
  /* 11723324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723327 mov dword ptr [ecx*4 + 0x11750d64], eax */
  w32((uint32_t)(ECX*4 + 0x11750d64), (EAX));
  /* 1172332e jmp 0x11723357 */
  goto L_11723357;
L_11723330:;
  /* 11723330 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723334 jne 0x1172334a */
  if (!C.zf) goto L_1172334a;
  /* 11723336 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11723338 call dword ptr [0x117552e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e0))), 0x1172333eu);
  /* 1172333e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723341 mov dword ptr [edx*4 + 0x11750d64], eax */
  w32((uint32_t)(EDX*4 + 0x11750d64), (EAX));
  /* 11723348 jmp 0x11723357 */
  goto L_11723357;
L_1172334a:;
  /* 1172334a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172334d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723350 mov dword ptr [eax*4 + 0x11750d64], ecx */
  w32((uint32_t)(EAX*4 + 0x11750d64), (ECX));
L_11723357:;
  /* 11723357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172335a:;
  /* 1172335a mov esp, ebp */
  ESP = (EBP);
  /* 1172335c pop ebp */
  EBP = (pop32());
  /* 1172335d ret  */
  ESPCHK(0x117232e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003360 @ 0x11723360 (28 bytes, 11 insns) */
void f_11723360(void) {
  FTRACE(0x11723360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723360 push ebp */
  push32((uint32_t)(EBP));
  /* 11723361 mov ebp, esp */
  EBP = (ESP);
  /* 11723363 push ecx */
  push32((uint32_t)(ECX));
  /* 11723364 mov eax, dword ptr [0x1175452c] */
  EAX = (r32((uint32_t)(0x1175452c)));
  /* 11723369 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172336c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172336f mov dword ptr [0x1175452c], ecx */
  w32((uint32_t)(0x1175452c), (ECX));
  /* 11723375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723378 mov esp, ebp */
  ESP = (EBP);
  /* 1172337a pop ebp */
  EBP = (pop32());
  /* 1172337b ret  */
  ESPCHK(0x11723360u, _esp0);
  ESP += 4; return;
}

/* FUN_10003380 @ 0x11723380 (912 bytes, 248 insns) */
void f_11723380(void) {
  FTRACE(0x11723380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723380 push ebp */
  push32((uint32_t)(EBP));
  /* 11723381 mov ebp, esp */
  EBP = (ESP);
  /* 11723383 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11723388 call 0x11728410 */
  push32(0x1172338du); f_11728410();
  /* 1172338d push edi */
  push32((uint32_t)(EDI));
  /* 1172338e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11723395 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1172339a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172339c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 117233a2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117233a4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 117233a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117233a7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 117233ae mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 117233b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117233b5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 117233bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117233bd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 117233bf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117233c0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 117233c7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 117233cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117233ce lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 117233d4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117233d6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 117233d8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117233d9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 117233dc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 117233e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117233e6 jl 0x117233ee */
  if ((C.sf!=C.of)) goto L_117233ee;
  /* 117233e8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117233ec jl 0x117233f6 */
  if ((C.sf!=C.of)) goto L_117233f6;
L_117233ee:;
  /* 117233ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117233f1 jmp 0x1172370b */
  goto L_1172370b;
L_117233f6:;
  /* 117233f6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117233fa jne 0x117234a0 */
  if (!C.zf) goto L_117234a0;
  /* 11723400 push 0x11750d54 */
  push32((uint32_t)(0x11750d54u));
  /* 11723405 call dword ptr [0x117552f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f8))), 0x1172340bu);
  /* 1172340b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172340d jle 0x117234a0 */
  if ((C.zf||C.sf!=C.of)) goto L_117234a0;
  /* 11723413 cmp dword ptr [0x117529fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117529fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172341a jne 0x1172345e */
  if (!C.zf) goto L_1172345e;
  /* 1172341c push 0x1174d2cc */
  push32((uint32_t)(0x1174d2ccu));
  /* 11723421 call dword ptr [0x117552f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f4))), 0x11723427u);
  /* 11723427 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1172342d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723434 je 0x11723456 */
  if (C.zf) goto L_11723456;
  /* 11723436 push 0x1174d2c0 */
  push32((uint32_t)(0x1174d2c0u));
  /* 1172343b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11723441 push ecx */
  push32((uint32_t)(ECX));
  /* 11723442 call dword ptr [0x117552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f0))), 0x11723448u);
  /* 11723448 mov dword ptr [0x117529fc], eax */
  w32((uint32_t)(0x117529fc), (EAX));
  /* 1172344d cmp dword ptr [0x117529fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117529fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723454 jne 0x1172345e */
  if (!C.zf) goto L_1172345e;
L_11723456:;
  /* 11723456 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11723459 jmp 0x1172370b */
  goto L_1172370b;
L_1172345e:;
  /* 1172345e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723461 push edx */
  push32((uint32_t)(EDX));
  /* 11723462 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723465 push eax */
  push32((uint32_t)(EAX));
  /* 11723466 push 0x1174d28c */
  push32((uint32_t)(0x1174d28cu));
  /* 1172346b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11723471 push ecx */
  push32((uint32_t)(ECX));
  /* 11723472 call dword ptr [0x117529fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117529fc))), 0x11723478u);
  /* 11723478 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172347b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11723481 push edx */
  push32((uint32_t)(EDX));
  /* 11723482 call dword ptr [0x117552ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552ec))), 0x11723488u);
  /* 11723488 push 0x11750d54 */
  push32((uint32_t)(0x11750d54u));
  /* 1172348d call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x11723493u);
  /* 11723493 call 0x11723270 */
  push32(0x11723498u); f_11723270();
  /* 11723498 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172349b jmp 0x1172370b */
  goto L_1172370b;
L_117234a0:;
  /* 117234a0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117234a4 je 0x117234dd */
  if (C.zf) goto L_117234dd;
  /* 117234a6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 117234ac push eax */
  push32((uint32_t)(EAX));
  /* 117234ad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117234b0 push ecx */
  push32((uint32_t)(ECX));
  /* 117234b1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 117234b6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 117234bc push edx */
  push32((uint32_t)(EDX));
  /* 117234bd call 0x11728310 */
  push32(0x117234c2u); f_11728310();
  /* 117234c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117234c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117234c7 jge 0x117234dd */
  if ((C.sf==C.of)) goto L_117234dd;
  /* 117234c9 push 0x1174d260 */
  push32((uint32_t)(0x1174d260u));
  /* 117234ce lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 117234d4 push eax */
  push32((uint32_t)(EAX));
  /* 117234d5 call 0x11728220 */
  push32(0x117234dau); f_11728220();
  /* 117234da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117234dd:;
  /* 117234dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117234e1 jne 0x11723515 */
  if (!C.zf) goto L_11723515;
  /* 117234e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117234e7 je 0x117234f5 */
  if (C.zf) goto L_117234f5;
  /* 117234e9 mov dword ptr [ebp - 0x3028], 0x1174d24c */
  w32((uint32_t)(EBP + -0x3028), (0x1174d24cu));
  /* 117234f3 jmp 0x117234ff */
  goto L_117234ff;
L_117234f5:;
  /* 117234f5 mov dword ptr [ebp - 0x3028], 0x1174d238 */
  w32((uint32_t)(EBP + -0x3028), (0x1174d238u));
L_117234ff:;
  /* 117234ff mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11723505 push ecx */
  push32((uint32_t)(ECX));
  /* 11723506 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1172350c push edx */
  push32((uint32_t)(EDX));
  /* 1172350d call 0x11728220 */
  push32(0x11723512u); f_11728220();
  /* 11723512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723515:;
  /* 11723515 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1172351b push eax */
  push32((uint32_t)(EAX));
  /* 1172351c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11723522 push ecx */
  push32((uint32_t)(ECX));
  /* 11723523 call 0x11728230 */
  push32(0x11723528u); f_11728230();
  /* 11723528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172352b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172352f jne 0x1172356a */
  if (!C.zf) goto L_1172356a;
  /* 11723531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723534 mov eax, dword ptr [edx*4 + 0x11750d58] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11750d58)));
  /* 1172353b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1172353e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723540 je 0x11723556 */
  if (C.zf) goto L_11723556;
  /* 11723542 push 0x1174d234 */
  push32((uint32_t)(0x1174d234u));
  /* 11723547 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1172354d push ecx */
  push32((uint32_t)(ECX));
  /* 1172354e call 0x11728230 */
  push32(0x11723553u); f_11728230();
  /* 11723553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723556:;
  /* 11723556 push 0x1174d230 */
  push32((uint32_t)(0x1174d230u));
  /* 1172355b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11723561 push edx */
  push32((uint32_t)(EDX));
  /* 11723562 call 0x11728230 */
  push32(0x11723567u); f_11728230();
  /* 11723567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172356a:;
  /* 1172356a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172356e je 0x117235b2 */
  if (C.zf) goto L_117235b2;
  /* 11723570 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11723576 push eax */
  push32((uint32_t)(EAX));
  /* 11723577 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172357a push ecx */
  push32((uint32_t)(ECX));
  /* 1172357b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172357e push edx */
  push32((uint32_t)(EDX));
  /* 1172357f push 0x1174d224 */
  push32((uint32_t)(0x1174d224u));
  /* 11723584 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11723589 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1172358f push eax */
  push32((uint32_t)(EAX));
  /* 11723590 call 0x11728120 */
  push32(0x11723595u); f_11728120();
  /* 11723595 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172359a jge 0x117235b0 */
  if ((C.sf==C.of)) goto L_117235b0;
  /* 1172359c push 0x1174d260 */
  push32((uint32_t)(0x1174d260u));
  /* 117235a1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 117235a7 push ecx */
  push32((uint32_t)(ECX));
  /* 117235a8 call 0x11728220 */
  push32(0x117235adu); f_11728220();
  /* 117235ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117235b0:;
  /* 117235b0 jmp 0x117235c8 */
  goto L_117235c8;
L_117235b2:;
  /* 117235b2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 117235b8 push edx */
  push32((uint32_t)(EDX));
  /* 117235b9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 117235bf push eax */
  push32((uint32_t)(EAX));
  /* 117235c0 call 0x11728220 */
  push32(0x117235c5u); f_11728220();
  /* 117235c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117235c8:;
  /* 117235c8 cmp dword ptr [0x1175452c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1175452c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117235cf je 0x1172360c */
  if (C.zf) goto L_1172360c;
  /* 117235d1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 117235d7 push ecx */
  push32((uint32_t)(ECX));
  /* 117235d8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 117235de push edx */
  push32((uint32_t)(EDX));
  /* 117235df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117235e2 push eax */
  push32((uint32_t)(EAX));
  /* 117235e3 call dword ptr [0x1175452c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175452c))), 0x117235e9u);
  /* 117235e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117235ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117235ee je 0x1172360c */
  if (C.zf) goto L_1172360c;
  /* 117235f0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117235f4 jne 0x11723601 */
  if (!C.zf) goto L_11723601;
  /* 117235f6 push 0x11750d54 */
  push32((uint32_t)(0x11750d54u));
  /* 117235fb call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x11723601u);
L_11723601:;
  /* 11723601 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11723607 jmp 0x1172370b */
  goto L_1172370b;
L_1172360c:;
  /* 1172360c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172360f mov edx, dword ptr [ecx*4 + 0x11750d58] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750d58)));
  /* 11723616 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11723619 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172361b je 0x1172365b */
  if (C.zf) goto L_1172365b;
  /* 1172361d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723620 cmp dword ptr [eax*4 + 0x11750d64], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11750d64))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723628 je 0x1172365b */
  if (C.zf) goto L_1172365b;
  /* 1172362a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172362c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11723632 push ecx */
  push32((uint32_t)(ECX));
  /* 11723633 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11723639 push edx */
  push32((uint32_t)(EDX));
  /* 1172363a call 0x117280a0 */
  push32(0x1172363fu); f_117280a0();
  /* 1172363f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723642 push eax */
  push32((uint32_t)(EAX));
  /* 11723643 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11723649 push eax */
  push32((uint32_t)(EAX));
  /* 1172364a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172364d mov edx, dword ptr [ecx*4 + 0x11750d64] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750d64)));
  /* 11723654 push edx */
  push32((uint32_t)(EDX));
  /* 11723655 call dword ptr [0x117552e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e4))), 0x1172365bu);
L_1172365b:;
  /* 1172365b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172365e mov ecx, dword ptr [eax*4 + 0x11750d58] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11750d58)));
  /* 11723665 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11723668 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172366a je 0x11723679 */
  if (C.zf) goto L_11723679;
  /* 1172366c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11723672 push edx */
  push32((uint32_t)(EDX));
  /* 11723673 call dword ptr [0x117552ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552ec))), 0x11723679u);
L_11723679:;
  /* 11723679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172367c mov ecx, dword ptr [eax*4 + 0x11750d58] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11750d58)));
  /* 11723683 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11723686 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11723688 je 0x117236f8 */
  if (C.zf) goto L_117236f8;
  /* 1172368a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172368e je 0x117236ad */
  if (C.zf) goto L_117236ad;
  /* 11723690 push 0xa */
  push32((uint32_t)(0xau));
  /* 11723692 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11723698 push edx */
  push32((uint32_t)(EDX));
  /* 11723699 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172369c push eax */
  push32((uint32_t)(EAX));
  /* 1172369d call 0x11727db0 */
  push32(0x117236a2u); f_11727db0();
  /* 117236a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117236a5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 117236ab jmp 0x117236b7 */
  goto L_117236b7;
L_117236ad:;
  /* 117236ad mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_117236b7:;
  /* 117236b7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 117236bd push ecx */
  push32((uint32_t)(ECX));
  /* 117236be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117236c1 push edx */
  push32((uint32_t)(EDX));
  /* 117236c2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 117236c8 push eax */
  push32((uint32_t)(EAX));
  /* 117236c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117236cc push ecx */
  push32((uint32_t)(ECX));
  /* 117236cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117236d0 push edx */
  push32((uint32_t)(EDX));
  /* 117236d1 call 0x11723710 */
  push32(0x117236d6u); f_11723710();
  /* 117236d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117236d9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 117236df cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117236e3 jne 0x117236f0 */
  if (!C.zf) goto L_117236f0;
  /* 117236e5 push 0x11750d54 */
  push32((uint32_t)(0x11750d54u));
  /* 117236ea call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x117236f0u);
L_117236f0:;
  /* 117236f0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 117236f6 jmp 0x1172370b */
  goto L_1172370b;
L_117236f8:;
  /* 117236f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117236fc jne 0x11723709 */
  if (!C.zf) goto L_11723709;
  /* 117236fe push 0x11750d54 */
  push32((uint32_t)(0x11750d54u));
  /* 11723703 call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x11723709u);
L_11723709:;
  /* 11723709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172370b:;
  /* 1172370b pop edi */
  EDI = (pop32());
  /* 1172370c mov esp, ebp */
  ESP = (EBP);
  /* 1172370e pop ebp */
  EBP = (pop32());
  /* 1172370f ret  */
  ESPCHK(0x11723380u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x11723710 (780 bytes, 197 insns) */
void f_11723710(void) {
  FTRACE(0x11723710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723710 push ebp */
  push32((uint32_t)(EBP));
  /* 11723711 mov ebp, esp */
  EBP = (ESP);
  /* 11723713 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11723718 call 0x11728410 */
  push32(0x1172371du); f_11728410();
L_1172371d:;
  /* 1172371d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723721 jne 0x11723748 */
  if (!C.zf) goto L_11723748;
  /* 11723723 push 0x1174d41c */
  push32((uint32_t)(0x1174d41cu));
  /* 11723728 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172372a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1172372f push 0x1174d410 */
  push32((uint32_t)(0x1174d410u));
  /* 11723734 push 2 */
  push32((uint32_t)(0x2u));
  /* 11723736 call 0x11723380 */
  push32(0x1172373bu); f_11723380();
  /* 1172373b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172373e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723741 jne 0x11723748 */
  if (!C.zf) goto L_11723748;
  /* 11723743 call 0x11723270 */
  push32(0x11723748u); f_11723270();
L_11723748:;
  /* 11723748 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172374a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172374c jne 0x1172371d */
  if (!C.zf) goto L_1172371d;
  /* 1172374e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11723753 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11723759 push ecx */
  push32((uint32_t)(ECX));
  /* 1172375a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172375c call dword ptr [0x117552fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552fc))), 0x11723762u);
  /* 11723762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723764 jne 0x1172377a */
  if (!C.zf) goto L_1172377a;
  /* 11723766 push 0x1174d3f8 */
  push32((uint32_t)(0x1174d3f8u));
  /* 1172376b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11723771 push edx */
  push32((uint32_t)(EDX));
  /* 11723772 call 0x11728220 */
  push32(0x11723777u); f_11728220();
  /* 11723777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172377a:;
  /* 1172377a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11723780 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11723783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723786 push ecx */
  push32((uint32_t)(ECX));
  /* 11723787 call 0x117280a0 */
  push32(0x1172378cu); f_117280a0();
  /* 1172378c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172378f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723792 jbe 0x117237bd */
  if ((C.cf||C.zf)) goto L_117237bd;
  /* 11723794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723797 push edx */
  push32((uint32_t)(EDX));
  /* 11723798 call 0x117280a0 */
  push32(0x1172379du); f_117280a0();
  /* 1172379d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117237a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117237a3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 117237a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117237aa push 3 */
  push32((uint32_t)(0x3u));
  /* 117237ac push 0x1174d3f4 */
  push32((uint32_t)(0x1174d3f4u));
  /* 117237b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117237b4 push eax */
  push32((uint32_t)(EAX));
  /* 117237b5 call 0x11728a90 */
  push32(0x117237bau); f_11728a90();
  /* 117237ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117237bd:;
  /* 117237bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117237c0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 117237c6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117237cd je 0x11723818 */
  if (C.zf) goto L_11723818;
  /* 117237cf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117237d5 push edx */
  push32((uint32_t)(EDX));
  /* 117237d6 call 0x117280a0 */
  push32(0x117237dbu); f_117280a0();
  /* 117237db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117237de cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117237e1 jbe 0x11723818 */
  if ((C.cf||C.zf)) goto L_11723818;
  /* 117237e3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117237e9 push eax */
  push32((uint32_t)(EAX));
  /* 117237ea call 0x117280a0 */
  push32(0x117237efu); f_117280a0();
  /* 117237ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117237f2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 117237f8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 117237fc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11723802 push 3 */
  push32((uint32_t)(0x3u));
  /* 11723804 push 0x1174d3f4 */
  push32((uint32_t)(0x1174d3f4u));
  /* 11723809 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1172380f push eax */
  push32((uint32_t)(EAX));
  /* 11723810 call 0x11728a90 */
  push32(0x11723815u); f_11728a90();
  /* 11723815 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723818:;
  /* 11723818 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172381c jne 0x1172382a */
  if (!C.zf) goto L_1172382a;
  /* 1172381e mov dword ptr [ebp - 0x1114], 0x1174d380 */
  w32((uint32_t)(EBP + -0x1114), (0x1174d380u));
  /* 11723828 jmp 0x11723834 */
  goto L_11723834;
L_1172382a:;
  /* 1172382a mov dword ptr [ebp - 0x1114], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1114), (0x1174d0e0u));
L_11723834:;
  /* 11723834 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11723837 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172383a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172383c je 0x11723849 */
  if (C.zf) goto L_11723849;
  /* 1172383e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11723841 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11723847 jmp 0x11723853 */
  goto L_11723853;
L_11723849:;
  /* 11723849 mov dword ptr [ebp - 0x1118], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1118), (0x1174d0e0u));
L_11723853:;
  /* 11723853 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11723856 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11723859 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172385b je 0x1172386f */
  if (C.zf) goto L_1172386f;
  /* 1172385d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723861 jne 0x1172386f */
  if (!C.zf) goto L_1172386f;
  /* 11723863 mov dword ptr [ebp - 0x111c], 0x1174d370 */
  w32((uint32_t)(EBP + -0x111c), (0x1174d370u));
  /* 1172386d jmp 0x11723879 */
  goto L_11723879;
L_1172386f:;
  /* 1172386f mov dword ptr [ebp - 0x111c], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x111c), (0x1174d0e0u));
L_11723879:;
  /* 11723879 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172387c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172387f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11723881 je 0x1172388f */
  if (C.zf) goto L_1172388f;
  /* 11723883 mov dword ptr [ebp - 0x1120], 0x1174d36c */
  w32((uint32_t)(EBP + -0x1120), (0x1174d36cu));
  /* 1172388d jmp 0x11723899 */
  goto L_11723899;
L_1172388f:;
  /* 1172388f mov dword ptr [ebp - 0x1120], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1120), (0x1174d0e0u));
L_11723899:;
  /* 11723899 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172389d je 0x117238aa */
  if (C.zf) goto L_117238aa;
  /* 1172389f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117238a2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 117238a8 jmp 0x117238b4 */
  goto L_117238b4;
L_117238aa:;
  /* 117238aa mov dword ptr [ebp - 0x1124], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1124), (0x1174d0e0u));
L_117238b4:;
  /* 117238b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117238b8 je 0x117238c6 */
  if (C.zf) goto L_117238c6;
  /* 117238ba mov dword ptr [ebp - 0x1128], 0x1174d364 */
  w32((uint32_t)(EBP + -0x1128), (0x1174d364u));
  /* 117238c4 jmp 0x117238d0 */
  goto L_117238d0;
L_117238c6:;
  /* 117238c6 mov dword ptr [ebp - 0x1128], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1128), (0x1174d0e0u));
L_117238d0:;
  /* 117238d0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117238d4 je 0x117238e1 */
  if (C.zf) goto L_117238e1;
  /* 117238d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117238d9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 117238df jmp 0x117238eb */
  goto L_117238eb;
L_117238e1:;
  /* 117238e1 mov dword ptr [ebp - 0x112c], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x112c), (0x1174d0e0u));
L_117238eb:;
  /* 117238eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117238ef je 0x117238fd */
  if (C.zf) goto L_117238fd;
  /* 117238f1 mov dword ptr [ebp - 0x1130], 0x1174d35c */
  w32((uint32_t)(EBP + -0x1130), (0x1174d35cu));
  /* 117238fb jmp 0x11723907 */
  goto L_11723907;
L_117238fd:;
  /* 117238fd mov dword ptr [ebp - 0x1130], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1130), (0x1174d0e0u));
L_11723907:;
  /* 11723907 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172390e je 0x1172391e */
  if (C.zf) goto L_1172391e;
  /* 11723910 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11723916 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1172391c jmp 0x11723928 */
  goto L_11723928;
L_1172391e:;
  /* 1172391e mov dword ptr [ebp - 0x1134], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1134), (0x1174d0e0u));
L_11723928:;
  /* 11723928 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172392f je 0x1172393d */
  if (C.zf) goto L_1172393d;
  /* 11723931 mov dword ptr [ebp - 0x1138], 0x1174d350 */
  w32((uint32_t)(EBP + -0x1138), (0x1174d350u));
  /* 1172393b jmp 0x11723947 */
  goto L_11723947;
L_1172393d:;
  /* 1172393d mov dword ptr [ebp - 0x1138], 0x1174d0e0 */
  w32((uint32_t)(EBP + -0x1138), (0x1174d0e0u));
L_11723947:;
  /* 11723947 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1172394d push edx */
  push32((uint32_t)(EDX));
  /* 1172394e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11723954 push eax */
  push32((uint32_t)(EAX));
  /* 11723955 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1172395b push ecx */
  push32((uint32_t)(ECX));
  /* 1172395c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11723962 push edx */
  push32((uint32_t)(EDX));
  /* 11723963 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11723969 push eax */
  push32((uint32_t)(EAX));
  /* 1172396a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11723970 push ecx */
  push32((uint32_t)(ECX));
  /* 11723971 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11723977 push edx */
  push32((uint32_t)(EDX));
  /* 11723978 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1172397e push eax */
  push32((uint32_t)(EAX));
  /* 1172397f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11723985 push ecx */
  push32((uint32_t)(ECX));
  /* 11723986 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1172398c push edx */
  push32((uint32_t)(EDX));
  /* 1172398d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723990 push eax */
  push32((uint32_t)(EAX));
  /* 11723991 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723994 mov edx, dword ptr [ecx*4 + 0x11750d70] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750d70)));
  /* 1172399b push edx */
  push32((uint32_t)(EDX));
  /* 1172399c push 0x1174d2fc */
  push32((uint32_t)(0x1174d2fcu));
  /* 117239a1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117239a6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 117239ac push eax */
  push32((uint32_t)(EAX));
  /* 117239ad call 0x11728120 */
  push32(0x117239b2u); f_11728120();
  /* 117239b2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117239b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117239b7 jge 0x117239cd */
  if ((C.sf==C.of)) goto L_117239cd;
  /* 117239b9 push 0x1174d260 */
  push32((uint32_t)(0x1174d260u));
  /* 117239be lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 117239c4 push ecx */
  push32((uint32_t)(ECX));
  /* 117239c5 call 0x11728220 */
  push32(0x117239cau); f_11728220();
  /* 117239ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117239cd:;
  /* 117239cd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 117239d2 push 0x1174d2d8 */
  push32((uint32_t)(0x1174d2d8u));
  /* 117239d7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 117239dd push edx */
  push32((uint32_t)(EDX));
  /* 117239de call 0x117289d0 */
  push32(0x117239e3u); f_117289d0();
  /* 117239e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117239e6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 117239ec cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117239f3 jne 0x11723a06 */
  if (!C.zf) goto L_11723a06;
  /* 117239f5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 117239f7 call 0x11728710 */
  push32(0x117239fcu); f_11728710();
  /* 117239fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117239ff push 3 */
  push32((uint32_t)(0x3u));
  /* 11723a01 call 0x11726c70 */
  push32(0x11723a06u); f_11726c70();
L_11723a06:;
  /* 11723a06 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723a0d jne 0x11723a16 */
  if (!C.zf) goto L_11723a16;
  /* 11723a0f mov eax, 1 */
  EAX = (0x1u);
  /* 11723a14 jmp 0x11723a18 */
  goto L_11723a18;
L_11723a16:;
  /* 11723a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11723a18:;
  /* 11723a18 mov esp, ebp */
  ESP = (EBP);
  /* 11723a1a pop ebp */
  EBP = (pop32());
  /* 11723a1b ret  */
  ESPCHK(0x11723710u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x11723a20 (55 bytes, 16 insns) */
void f_11723a20(void) {
  FTRACE(0x11723a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11723a21 mov ebp, esp */
  EBP = (ESP);
  /* 11723a23 mov eax, dword ptr [0x11750dc0] */
  EAX = (r32((uint32_t)(0x11750dc0)));
  /* 11723a28 push eax */
  push32((uint32_t)(EAX));
  /* 11723a29 call dword ptr [0x11755300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755300))), 0x11723a2fu);
  /* 11723a2f mov ecx, dword ptr [0x11750db0] */
  ECX = (r32((uint32_t)(0x11750db0)));
  /* 11723a35 push ecx */
  push32((uint32_t)(ECX));
  /* 11723a36 call dword ptr [0x11755300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755300))), 0x11723a3cu);
  /* 11723a3c mov edx, dword ptr [0x11750da0] */
  EDX = (r32((uint32_t)(0x11750da0)));
  /* 11723a42 push edx */
  push32((uint32_t)(EDX));
  /* 11723a43 call dword ptr [0x11755300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755300))), 0x11723a49u);
  /* 11723a49 mov eax, dword ptr [0x11750d80] */
  EAX = (r32((uint32_t)(0x11750d80)));
  /* 11723a4e push eax */
  push32((uint32_t)(EAX));
  /* 11723a4f call dword ptr [0x11755300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755300))), 0x11723a55u);
  /* 11723a55 pop ebp */
  EBP = (pop32());
  /* 11723a56 ret  */
  ESPCHK(0x11723a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a60 @ 0x11723a60 (159 bytes, 47 insns) */
void f_11723a60(void) {
  FTRACE(0x11723a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11723a61 mov ebp, esp */
  EBP = (ESP);
  /* 11723a63 push ecx */
  push32((uint32_t)(ECX));
  /* 11723a64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11723a6b jmp 0x11723a76 */
  goto L_11723a76;
L_11723a6d:;
  /* 11723a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723a70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723a73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11723a76:;
  /* 11723a76 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723a7a jge 0x11723ac9 */
  if ((C.sf==C.of)) goto L_11723ac9;
  /* 11723a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723a7f cmp dword ptr [ecx*4 + 0x11750d7c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11750d7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723a87 je 0x11723ac7 */
  if (C.zf) goto L_11723ac7;
  /* 11723a89 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723a8d je 0x11723ac7 */
  if (C.zf) goto L_11723ac7;
  /* 11723a8f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723a93 je 0x11723ac7 */
  if (C.zf) goto L_11723ac7;
  /* 11723a95 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723a99 je 0x11723ac7 */
  if (C.zf) goto L_11723ac7;
  /* 11723a9b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723a9f je 0x11723ac7 */
  if (C.zf) goto L_11723ac7;
  /* 11723aa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723aa4 mov eax, dword ptr [edx*4 + 0x11750d7c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11750d7c)));
  /* 11723aab push eax */
  push32((uint32_t)(EAX));
  /* 11723aac call dword ptr [0x11755304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755304))), 0x11723ab2u);
  /* 11723ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11723ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723ab7 mov edx, dword ptr [ecx*4 + 0x11750d7c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750d7c)));
  /* 11723abe push edx */
  push32((uint32_t)(EDX));
  /* 11723abf call 0x11724690 */
  push32(0x11723ac4u); f_11724690();
  /* 11723ac4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723ac7:;
  /* 11723ac7 jmp 0x11723a6d */
  goto L_11723a6d;
L_11723ac9:;
  /* 11723ac9 mov eax, dword ptr [0x11750da0] */
  EAX = (r32((uint32_t)(0x11750da0)));
  /* 11723ace push eax */
  push32((uint32_t)(EAX));
  /* 11723acf call dword ptr [0x11755304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755304))), 0x11723ad5u);
  /* 11723ad5 mov ecx, dword ptr [0x11750db0] */
  ECX = (r32((uint32_t)(0x11750db0)));
  /* 11723adb push ecx */
  push32((uint32_t)(ECX));
  /* 11723adc call dword ptr [0x11755304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755304))), 0x11723ae2u);
  /* 11723ae2 mov edx, dword ptr [0x11750dc0] */
  EDX = (r32((uint32_t)(0x11750dc0)));
  /* 11723ae8 push edx */
  push32((uint32_t)(EDX));
  /* 11723ae9 call dword ptr [0x11755304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755304))), 0x11723aefu);
  /* 11723aef mov eax, dword ptr [0x11750d80] */
  EAX = (r32((uint32_t)(0x11750d80)));
  /* 11723af4 push eax */
  push32((uint32_t)(EAX));
  /* 11723af5 call dword ptr [0x11755304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755304))), 0x11723afbu);
  /* 11723afb mov esp, ebp */
  ESP = (EBP);
  /* 11723afd pop ebp */
  EBP = (pop32());
  /* 11723afe ret  */
  ESPCHK(0x11723a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b00 @ 0x11723b00 (151 bytes, 46 insns) */
void f_11723b00(void) {
  FTRACE(0x11723b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11723b01 mov ebp, esp */
  EBP = (ESP);
  /* 11723b03 push ecx */
  push32((uint32_t)(ECX));
  /* 11723b04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723b07 cmp dword ptr [eax*4 + 0x11750d7c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11750d7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723b0f jne 0x11723b82 */
  if (!C.zf) goto L_11723b82;
  /* 11723b11 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11723b16 push 0x1174d434 */
  push32((uint32_t)(0x1174d434u));
  /* 11723b1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11723b1d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11723b1f call 0x11723c00 */
  push32(0x11723b24u); f_11723c00();
  /* 11723b24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723b27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11723b2a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723b2e jne 0x11723b3a */
  if (!C.zf) goto L_11723b3a;
  /* 11723b30 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11723b32 call 0x11723230 */
  push32(0x11723b37u); f_11723230();
  /* 11723b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723b3a:;
  /* 11723b3a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11723b3c call 0x11723b00 */
  push32(0x11723b41u); f_11723b00();
  /* 11723b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723b44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723b47 cmp dword ptr [ecx*4 + 0x11750d7c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11750d7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723b4f jne 0x11723b6a */
  if (!C.zf) goto L_11723b6a;
  /* 11723b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723b54 push edx */
  push32((uint32_t)(EDX));
  /* 11723b55 call dword ptr [0x11755300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755300))), 0x11723b5bu);
  /* 11723b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723b5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723b61 mov dword ptr [eax*4 + 0x11750d7c], ecx */
  w32((uint32_t)(EAX*4 + 0x11750d7c), (ECX));
  /* 11723b68 jmp 0x11723b78 */
  goto L_11723b78;
L_11723b6a:;
  /* 11723b6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11723b6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723b6f push edx */
  push32((uint32_t)(EDX));
  /* 11723b70 call 0x11724690 */
  push32(0x11723b75u); f_11724690();
  /* 11723b75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723b78:;
  /* 11723b78 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11723b7a call 0x11723ba0 */
  push32(0x11723b7fu); f_11723ba0();
  /* 11723b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11723b82:;
  /* 11723b82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723b85 mov ecx, dword ptr [eax*4 + 0x11750d7c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11750d7c)));
  /* 11723b8c push ecx */
  push32((uint32_t)(ECX));
  /* 11723b8d call dword ptr [0x11755308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755308))), 0x11723b93u);
  /* 11723b93 mov esp, ebp */
  ESP = (EBP);
  /* 11723b95 pop ebp */
  EBP = (pop32());
  /* 11723b96 ret  */
  ESPCHK(0x11723b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x11723ba0 (22 bytes, 8 insns) */
void f_11723ba0(void) {
  FTRACE(0x11723ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11723ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11723ba3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723ba6 mov ecx, dword ptr [eax*4 + 0x11750d7c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11750d7c)));
  /* 11723bad push ecx */
  push32((uint32_t)(ECX));
  /* 11723bae call dword ptr [0x1175530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175530c))), 0x11723bb4u);
  /* 11723bb4 pop ebp */
  EBP = (pop32());
  /* 11723bb5 ret  */
  ESPCHK(0x11723ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bc0 @ 0x11723bc0 (26 bytes, 10 insns) */
void f_11723bc0(void) {
  FTRACE(0x11723bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11723bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11723bc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723bc6 push eax */
  push32((uint32_t)(EAX));
  /* 11723bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723bc9 call dword ptr [0x11755314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755314))), 0x11723bcfu);
  /* 11723bcf push 0xff */
  push32((uint32_t)(0xffu));
  /* 11723bd4 call dword ptr [0x11755310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755310))), 0x11723bdau);
  /* 11723bda pop ebp */
  EBP = (pop32());
  /* 11723bdb ret  */
  ESPCHK(0x11723bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003be0 @ 0x11723be0 (29 bytes, 13 insns) */
void f_11723be0(void) {
  FTRACE(0x11723be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11723be1 mov ebp, esp */
  EBP = (ESP);
  /* 11723be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723be7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11723be9 mov eax, dword ptr [0x11752be8] */
  EAX = (r32((uint32_t)(0x11752be8)));
  /* 11723bee push eax */
  push32((uint32_t)(EAX));
  /* 11723bef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11723bf3 call 0x11723c50 */
  push32(0x11723bf8u); f_11723c50();
  /* 11723bf8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723bfb pop ebp */
  EBP = (pop32());
  /* 11723bfc ret  */
  ESPCHK(0x11723be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c00 @ 0x11723c00 (35 bytes, 16 insns) */
void f_11723c00(void) {
  FTRACE(0x11723c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11723c01 mov ebp, esp */
  EBP = (ESP);
  /* 11723c03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11723c06 push eax */
  push32((uint32_t)(EAX));
  /* 11723c07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723c0a push ecx */
  push32((uint32_t)(ECX));
  /* 11723c0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723c0e push edx */
  push32((uint32_t)(EDX));
  /* 11723c0f mov eax, dword ptr [0x11752be8] */
  EAX = (r32((uint32_t)(0x11752be8)));
  /* 11723c14 push eax */
  push32((uint32_t)(EAX));
  /* 11723c15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723c18 push ecx */
  push32((uint32_t)(ECX));
  /* 11723c19 call 0x11723c50 */
  push32(0x11723c1eu); f_11723c50();
  /* 11723c1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723c21 pop ebp */
  EBP = (pop32());
  /* 11723c22 ret  */
  ESPCHK(0x11723c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c30 @ 0x11723c30 (27 bytes, 13 insns) */
void f_11723c30(void) {
  FTRACE(0x11723c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11723c31 mov ebp, esp */
  EBP = (ESP);
  /* 11723c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11723c39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723c3c push eax */
  push32((uint32_t)(EAX));
  /* 11723c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723c40 push ecx */
  push32((uint32_t)(ECX));
  /* 11723c41 call 0x11723c50 */
  push32(0x11723c46u); f_11723c50();
  /* 11723c46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723c49 pop ebp */
  EBP = (pop32());
  /* 11723c4a ret  */
  ESPCHK(0x11723c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c50 @ 0x11723c50 (94 bytes, 38 insns) */
void f_11723c50(void) {
  FTRACE(0x11723c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11723c51 mov ebp, esp */
  EBP = (ESP);
  /* 11723c53 push ecx */
  push32((uint32_t)(ECX));
L_11723c54:;
  /* 11723c54 push 9 */
  push32((uint32_t)(0x9u));
  /* 11723c56 call 0x11723b00 */
  push32(0x11723c5bu); f_11723b00();
  /* 11723c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723c5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11723c61 push eax */
  push32((uint32_t)(EAX));
  /* 11723c62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11723c65 push ecx */
  push32((uint32_t)(ECX));
  /* 11723c66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723c69 push edx */
  push32((uint32_t)(EDX));
  /* 11723c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723c6d push eax */
  push32((uint32_t)(EAX));
  /* 11723c6e call 0x11723cd0 */
  push32(0x11723c73u); f_11723cd0();
  /* 11723c73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723c76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11723c79 push 9 */
  push32((uint32_t)(0x9u));
  /* 11723c7b call 0x11723ba0 */
  push32(0x11723c80u); f_11723ba0();
  /* 11723c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723c83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723c87 jne 0x11723c8f */
  if (!C.zf) goto L_11723c8f;
  /* 11723c89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723c8d jne 0x11723c94 */
  if (!C.zf) goto L_11723c94;
L_11723c8f:;
  /* 11723c8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723c92 jmp 0x11723caa */
  goto L_11723caa;
L_11723c94:;
  /* 11723c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723c97 push ecx */
  push32((uint32_t)(ECX));
  /* 11723c98 call 0x11728bd0 */
  push32(0x11723c9du); f_11728bd0();
  /* 11723c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723ca2 jne 0x11723ca8 */
  if (!C.zf) goto L_11723ca8;
  /* 11723ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723ca6 jmp 0x11723caa */
  goto L_11723caa;
L_11723ca8:;
  /* 11723ca8 jmp 0x11723c54 */
  goto L_11723c54;
L_11723caa:;
  /* 11723caa mov esp, ebp */
  ESP = (EBP);
  /* 11723cac pop ebp */
  EBP = (pop32());
  /* 11723cad ret  */
  ESPCHK(0x11723c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb0 @ 0x11723cb0 (23 bytes, 11 insns) */
void f_11723cb0(void) {
  FTRACE(0x11723cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11723cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11723cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723cb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11723cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723cbc push eax */
  push32((uint32_t)(EAX));
  /* 11723cbd call 0x11723cd0 */
  push32(0x11723cc2u); f_11723cd0();
  /* 11723cc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723cc5 pop ebp */
  EBP = (pop32());
  /* 11723cc6 ret  */
  ESPCHK(0x11723cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x11723cd0 (787 bytes, 254 insns) */
void f_11723cd0(void) {
  FTRACE(0x11723cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11723cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11723cd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11723cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11723cd7 push esi */
  push32((uint32_t)(ESI));
  /* 11723cd8 push edi */
  push32((uint32_t)(EDI));
  /* 11723cd9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11723ce0 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 11723ce5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11723ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723cea je 0x11723d1c */
  if (C.zf) goto L_11723d1c;
L_11723cec:;
  /* 11723cec call 0x11724da0 */
  push32(0x11723cf1u); f_11724da0();
  /* 11723cf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723cf3 jne 0x11723d16 */
  if (!C.zf) goto L_11723d16;
  /* 11723cf5 push 0x1174d524 */
  push32((uint32_t)(0x1174d524u));
  /* 11723cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11723cfc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11723d01 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11723d06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11723d08 call 0x11723380 */
  push32(0x11723d0du); f_11723380();
  /* 11723d0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723d10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723d13 jne 0x11723d16 */
  if (!C.zf) goto L_11723d16;
  /* 11723d15 int3  */
  x86_unimpl("int3 @ 0x11723d15");
L_11723d16:;
  /* 11723d16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11723d18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11723d1a jne 0x11723cec */
  if (!C.zf) goto L_11723cec;
L_11723d1c:;
  /* 11723d1c mov edx, dword ptr [0x11750e40] */
  EDX = (r32((uint32_t)(0x11750e40)));
  /* 11723d22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11723d25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11723d28 cmp eax, dword ptr [0x11750e44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11750e44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723d2e jne 0x11723d31 */
  if (!C.zf) goto L_11723d31;
  /* 11723d30 int3  */
  x86_unimpl("int3 @ 0x11723d30");
L_11723d31:;
  /* 11723d31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11723d34 push ecx */
  push32((uint32_t)(ECX));
  /* 11723d35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723d38 push edx */
  push32((uint32_t)(EDX));
  /* 11723d39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11723d3c push eax */
  push32((uint32_t)(EAX));
  /* 11723d3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723d40 push ecx */
  push32((uint32_t)(ECX));
  /* 11723d41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723d44 push edx */
  push32((uint32_t)(EDX));
  /* 11723d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11723d49 call dword ptr [0x11750f30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11750f30))), 0x11723d4fu);
  /* 11723d4f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723d54 jne 0x11723db4 */
  if (!C.zf) goto L_11723db4;
  /* 11723d56 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723d5a je 0x11723d87 */
  if (C.zf) goto L_11723d87;
L_11723d5c:;
  /* 11723d5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11723d5f push eax */
  push32((uint32_t)(EAX));
  /* 11723d60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11723d64 push 0x1174d4e0 */
  push32((uint32_t)(0x1174d4e0u));
  /* 11723d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d71 call 0x11723380 */
  push32(0x11723d76u); f_11723380();
  /* 11723d76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723d79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723d7c jne 0x11723d7f */
  if (!C.zf) goto L_11723d7f;
  /* 11723d7e int3  */
  x86_unimpl("int3 @ 0x11723d7e");
L_11723d7f:;
  /* 11723d7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11723d81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11723d83 jne 0x11723d5c */
  if (!C.zf) goto L_11723d5c;
  /* 11723d85 jmp 0x11723dad */
  goto L_11723dad;
L_11723d87:;
  /* 11723d87 push 0x1174d4bc */
  push32((uint32_t)(0x1174d4bcu));
  /* 11723d8c push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11723d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723d99 call 0x11723380 */
  push32(0x11723d9eu); f_11723380();
  /* 11723d9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723da1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723da4 jne 0x11723da7 */
  if (!C.zf) goto L_11723da7;
  /* 11723da6 int3  */
  x86_unimpl("int3 @ 0x11723da6");
L_11723da7:;
  /* 11723da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11723dab jne 0x11723d87 */
  if (!C.zf) goto L_11723d87;
L_11723dad:;
  /* 11723dad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723daf jmp 0x11723fdc */
  goto L_11723fdc;
L_11723db4:;
  /* 11723db4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723db7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11723dbd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723dc0 je 0x11723dd6 */
  if (C.zf) goto L_11723dd6;
  /* 11723dc2 mov edx, dword ptr [0x11750e3c] */
  EDX = (r32((uint32_t)(0x11750e3c)));
  /* 11723dc8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11723dcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11723dcd jne 0x11723dd6 */
  if (!C.zf) goto L_11723dd6;
  /* 11723dcf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11723dd6:;
  /* 11723dd6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723dda ja 0x11723de7 */
  if ((!C.cf&&!C.zf)) goto L_11723de7;
  /* 11723ddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723ddf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723de2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723de5 jbe 0x11723e13 */
  if ((C.cf||C.zf)) goto L_11723e13;
L_11723de7:;
  /* 11723de7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723dea push ecx */
  push32((uint32_t)(ECX));
  /* 11723deb push 0x1174d494 */
  push32((uint32_t)(0x1174d494u));
  /* 11723df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723df6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11723df8 call 0x11723380 */
  push32(0x11723dfdu); f_11723380();
  /* 11723dfd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723e00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e03 jne 0x11723e06 */
  if (!C.zf) goto L_11723e06;
  /* 11723e05 int3  */
  x86_unimpl("int3 @ 0x11723e05");
L_11723e06:;
  /* 11723e06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11723e08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11723e0a jne 0x11723de7 */
  if (!C.zf) goto L_11723de7;
  /* 11723e0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723e0e jmp 0x11723fdc */
  goto L_11723fdc;
L_11723e13:;
  /* 11723e13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723e16 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11723e1b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e1e je 0x11723e60 */
  if (C.zf) goto L_11723e60;
  /* 11723e20 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e24 je 0x11723e60 */
  if (C.zf) goto L_11723e60;
  /* 11723e26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723e29 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11723e2f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e32 je 0x11723e60 */
  if (C.zf) goto L_11723e60;
  /* 11723e34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e38 je 0x11723e60 */
  if (C.zf) goto L_11723e60;
L_11723e3a:;
  /* 11723e3a push 0x1174d460 */
  push32((uint32_t)(0x1174d460u));
  /* 11723e3f push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11723e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723e4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11723e4c call 0x11723380 */
  push32(0x11723e51u); f_11723380();
  /* 11723e51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723e54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e57 jne 0x11723e5a */
  if (!C.zf) goto L_11723e5a;
  /* 11723e59 int3  */
  x86_unimpl("int3 @ 0x11723e59");
L_11723e5a:;
  /* 11723e5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11723e5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11723e5e jne 0x11723e3a */
  if (!C.zf) goto L_11723e3a;
L_11723e60:;
  /* 11723e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723e63 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723e66 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11723e69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11723e6c push ecx */
  push32((uint32_t)(ECX));
  /* 11723e6d call 0x11728ce0 */
  push32(0x11723e72u); f_11728ce0();
  /* 11723e72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723e75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11723e78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e7c jne 0x11723e85 */
  if (!C.zf) goto L_11723e85;
  /* 11723e7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723e80 jmp 0x11723fdc */
  goto L_11723fdc;
L_11723e85:;
  /* 11723e85 mov edx, dword ptr [0x11750e40] */
  EDX = (r32((uint32_t)(0x11750e40)));
  /* 11723e8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723e8e mov dword ptr [0x11750e40], edx */
  w32((uint32_t)(0x11750e40), (EDX));
  /* 11723e94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723e98 je 0x11723ee3 */
  if (C.zf) goto L_11723ee3;
  /* 11723e9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723e9d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11723ea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723ea6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11723ead mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723eb0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11723eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723eba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11723ec1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723ec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723ec7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11723eca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723ecd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11723ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723ed7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11723ede jmp 0x11723f83 */
  goto L_11723f83;
L_11723ee3:;
  /* 11723ee3 mov edx, dword ptr [0x11752a64] */
  EDX = (r32((uint32_t)(0x11752a64)));
  /* 11723ee9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723eec mov dword ptr [0x11752a64], edx */
  w32((uint32_t)(0x11752a64), (EDX));
  /* 11723ef2 mov eax, dword ptr [0x11752a6c] */
  EAX = (r32((uint32_t)(0x11752a6c)));
  /* 11723ef7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723efa mov dword ptr [0x11752a6c], eax */
  w32((uint32_t)(0x11752a6c), (EAX));
  /* 11723eff mov ecx, dword ptr [0x11752a6c] */
  ECX = (r32((uint32_t)(0x11752a6c)));
  /* 11723f05 cmp ecx, dword ptr [0x11752a70] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11752a70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723f0b jbe 0x11723f19 */
  if ((C.cf||C.zf)) goto L_11723f19;
  /* 11723f0d mov edx, dword ptr [0x11752a6c] */
  EDX = (r32((uint32_t)(0x11752a6c)));
  /* 11723f13 mov dword ptr [0x11752a70], edx */
  w32((uint32_t)(0x11752a70), (EDX));
L_11723f19:;
  /* 11723f19 cmp dword ptr [0x11752a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11723f20 je 0x11723f2f */
  if (C.zf) goto L_11723f2f;
  /* 11723f22 mov eax, dword ptr [0x11752a68] */
  EAX = (r32((uint32_t)(0x11752a68)));
  /* 11723f27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f2a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11723f2d jmp 0x11723f38 */
  goto L_11723f38;
L_11723f2f:;
  /* 11723f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f32 mov dword ptr [0x11752a60], edx */
  w32((uint32_t)(0x11752a60), (EDX));
L_11723f38:;
  /* 11723f38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f3b mov ecx, dword ptr [0x11752a68] */
  ECX = (r32((uint32_t)(0x11752a68)));
  /* 11723f41 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11723f43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f46 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11723f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11723f53 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11723f56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11723f5c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11723f5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723f65 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11723f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f6b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723f6e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11723f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11723f77 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11723f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f7d mov dword ptr [0x11752a68], ecx */
  w32((uint32_t)(0x11752a68), (ECX));
L_11723f83:;
  /* 11723f83 push 4 */
  push32((uint32_t)(0x4u));
  /* 11723f85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11723f87 mov dl, byte ptr [0x11750e48] */
  DL = (r8((uint32_t)(0x11750e48)));
  /* 11723f8d push edx */
  push32((uint32_t)(EDX));
  /* 11723f8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723f91 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723f94 push eax */
  push32((uint32_t)(EAX));
  /* 11723f95 call 0x11728c00 */
  push32(0x11723f9au); f_11728c00();
  /* 11723f9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723f9d push 4 */
  push32((uint32_t)(0x4u));
  /* 11723f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11723fa1 mov cl, byte ptr [0x11750e48] */
  CL = (r8((uint32_t)(0x11750e48)));
  /* 11723fa7 push ecx */
  push32((uint32_t)(ECX));
  /* 11723fa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723fab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723fae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11723fb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11723fb3 call 0x11728c00 */
  push32(0x11723fb8u); f_11728c00();
  /* 11723fb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723fbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11723fbe push edx */
  push32((uint32_t)(EDX));
  /* 11723fbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11723fc1 mov al, byte ptr [0x11750e4a] */
  AL = (r8((uint32_t)(0x11750e4a)));
  /* 11723fc6 push eax */
  push32((uint32_t)(EAX));
  /* 11723fc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723fca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11723fcd push ecx */
  push32((uint32_t)(ECX));
  /* 11723fce call 0x11728c00 */
  push32(0x11723fd3u); f_11728c00();
  /* 11723fd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11723fd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11723fd9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11723fdc:;
  /* 11723fdc pop edi */
  EDI = (pop32());
  /* 11723fdd pop esi */
  ESI = (pop32());
  /* 11723fde pop ebx */
  EBX = (pop32());
  /* 11723fdf mov esp, ebp */
  ESP = (EBP);
  /* 11723fe1 pop ebp */
  EBP = (pop32());
  /* 11723fe2 ret  */
  ESPCHK(0x11723cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ff0 @ 0x11723ff0 (27 bytes, 13 insns) */
void f_11723ff0(void) {
  FTRACE(0x11723ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11723ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11723ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11723ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11723ff7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11723ff9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11723ffc push eax */
  push32((uint32_t)(EAX));
  /* 11723ffd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724000 push ecx */
  push32((uint32_t)(ECX));
  /* 11724001 call 0x11724010 */
  push32(0x11724006u); f_11724010();
  /* 11724006 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724009 pop ebp */
  EBP = (pop32());
  /* 1172400a ret  */
  ESPCHK(0x11723ff0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11724010 (96 bytes, 37 insns) */
void f_11724010(void) {
  FTRACE(0x11724010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724010 push ebp */
  push32((uint32_t)(EBP));
  /* 11724011 mov ebp, esp */
  EBP = (ESP);
  /* 11724013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724016 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724019 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172401d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11724020 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11724023 push ecx */
  push32((uint32_t)(ECX));
  /* 11724024 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11724027 push edx */
  push32((uint32_t)(EDX));
  /* 11724028 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172402b push eax */
  push32((uint32_t)(EAX));
  /* 1172402c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172402f push ecx */
  push32((uint32_t)(ECX));
  /* 11724030 call 0x11723c00 */
  push32(0x11724035u); f_11723c00();
  /* 11724035 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724038 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172403b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172403f je 0x11724069 */
  if (C.zf) goto L_11724069;
  /* 11724041 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724044 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11724047 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172404a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172404d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11724050:;
  /* 11724050 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724053 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724056 jae 0x11724069 */
  if (!C.cf) goto L_11724069;
  /* 11724058 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172405b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1172405e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724061 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724064 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11724067 jmp 0x11724050 */
  goto L_11724050;
L_11724069:;
  /* 11724069 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172406c mov esp, ebp */
  ESP = (EBP);
  /* 1172406e pop ebp */
  EBP = (pop32());
  /* 1172406f ret  */
  ESPCHK(0x11724010u, _esp0);
  ESP += 4; return;
}

/* FUN_10004070 @ 0x11724070 (27 bytes, 13 insns) */
void f_11724070(void) {
  FTRACE(0x11724070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724070 push ebp */
  push32((uint32_t)(EBP));
  /* 11724071 mov ebp, esp */
  EBP = (ESP);
  /* 11724073 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724075 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724077 push 1 */
  push32((uint32_t)(0x1u));
  /* 11724079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172407c push eax */
  push32((uint32_t)(EAX));
  /* 1172407d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724080 push ecx */
  push32((uint32_t)(ECX));
  /* 11724081 call 0x11724090 */
  push32(0x11724086u); f_11724090();
  /* 11724086 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724089 pop ebp */
  EBP = (pop32());
  /* 1172408a ret  */
  ESPCHK(0x11724070u, _esp0);
  ESP += 4; return;
}

/* FUN_10004090 @ 0x11724090 (64 bytes, 27 insns) */
void f_11724090(void) {
  FTRACE(0x11724090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724090 push ebp */
  push32((uint32_t)(EBP));
  /* 11724091 mov ebp, esp */
  EBP = (ESP);
  /* 11724093 push ecx */
  push32((uint32_t)(ECX));
  /* 11724094 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724096 call 0x11723b00 */
  push32(0x1172409bu); f_11723b00();
  /* 1172409b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172409e push 1 */
  push32((uint32_t)(0x1u));
  /* 117240a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117240a3 push eax */
  push32((uint32_t)(EAX));
  /* 117240a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117240a7 push ecx */
  push32((uint32_t)(ECX));
  /* 117240a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117240ab push edx */
  push32((uint32_t)(EDX));
  /* 117240ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117240af push eax */
  push32((uint32_t)(EAX));
  /* 117240b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117240b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117240b4 call 0x117240d0 */
  push32(0x117240b9u); f_117240d0();
  /* 117240b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117240bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117240bf push 9 */
  push32((uint32_t)(0x9u));
  /* 117240c1 call 0x11723ba0 */
  push32(0x117240c6u); f_11723ba0();
  /* 117240c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117240c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117240cc mov esp, ebp */
  ESP = (EBP);
  /* 117240ce pop ebp */
  EBP = (pop32());
  /* 117240cf ret  */
  ESPCHK(0x11724090u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d0 @ 0x117240d0 (1297 bytes, 431 insns) */
void f_117240d0(void) {
  FTRACE(0x117240d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117240d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117240d1 mov ebp, esp */
  EBP = (ESP);
  /* 117240d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117240d6 push ebx */
  push32((uint32_t)(EBX));
  /* 117240d7 push esi */
  push32((uint32_t)(ESI));
  /* 117240d8 push edi */
  push32((uint32_t)(EDI));
  /* 117240d9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 117240e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117240e4 jne 0x11724103 */
  if (!C.zf) goto L_11724103;
  /* 117240e6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117240e9 push eax */
  push32((uint32_t)(EAX));
  /* 117240ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117240ed push ecx */
  push32((uint32_t)(ECX));
  /* 117240ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117240f1 push edx */
  push32((uint32_t)(EDX));
  /* 117240f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117240f5 push eax */
  push32((uint32_t)(EAX));
  /* 117240f6 call 0x11723c00 */
  push32(0x117240fbu); f_11723c00();
  /* 117240fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117240fe jmp 0x117245da */
  goto L_117245da;
L_11724103:;
  /* 11724103 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724107 je 0x11724126 */
  if (C.zf) goto L_11724126;
  /* 11724109 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172410d jne 0x11724126 */
  if (!C.zf) goto L_11724126;
  /* 1172410f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11724112 push ecx */
  push32((uint32_t)(ECX));
  /* 11724113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724116 push edx */
  push32((uint32_t)(EDX));
  /* 11724117 call 0x11724690 */
  push32(0x1172411cu); f_11724690();
  /* 1172411c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172411f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724121 jmp 0x117245da */
  goto L_117245da;
L_11724126:;
  /* 11724126 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 1172412b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1172412e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724130 je 0x11724162 */
  if (C.zf) goto L_11724162;
L_11724132:;
  /* 11724132 call 0x11724da0 */
  push32(0x11724137u); f_11724da0();
  /* 11724137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724139 jne 0x1172415c */
  if (!C.zf) goto L_1172415c;
  /* 1172413b push 0x1174d524 */
  push32((uint32_t)(0x1174d524u));
  /* 11724140 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724142 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11724147 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 1172414c push 2 */
  push32((uint32_t)(0x2u));
  /* 1172414e call 0x11723380 */
  push32(0x11724153u); f_11723380();
  /* 11724153 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724156 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724159 jne 0x1172415c */
  if (!C.zf) goto L_1172415c;
  /* 1172415b int3  */
  x86_unimpl("int3 @ 0x1172415b");
L_1172415c:;
  /* 1172415c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172415e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724160 jne 0x11724132 */
  if (!C.zf) goto L_11724132;
L_11724162:;
  /* 11724162 mov edx, dword ptr [0x11750e40] */
  EDX = (r32((uint32_t)(0x11750e40)));
  /* 11724168 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1172416b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172416e cmp eax, dword ptr [0x11750e44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11750e44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724174 jne 0x11724177 */
  if (!C.zf) goto L_11724177;
  /* 11724176 int3  */
  x86_unimpl("int3 @ 0x11724176");
L_11724177:;
  /* 11724177 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172417a push ecx */
  push32((uint32_t)(ECX));
  /* 1172417b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172417e push edx */
  push32((uint32_t)(EDX));
  /* 1172417f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11724182 push eax */
  push32((uint32_t)(EAX));
  /* 11724183 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11724186 push ecx */
  push32((uint32_t)(ECX));
  /* 11724187 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172418a push edx */
  push32((uint32_t)(EDX));
  /* 1172418b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172418e push eax */
  push32((uint32_t)(EAX));
  /* 1172418f push 2 */
  push32((uint32_t)(0x2u));
  /* 11724191 call dword ptr [0x11750f30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11750f30))), 0x11724197u);
  /* 11724197 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172419a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172419c jne 0x117241fc */
  if (!C.zf) goto L_117241fc;
  /* 1172419e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117241a2 je 0x117241cf */
  if (C.zf) goto L_117241cf;
L_117241a4:;
  /* 117241a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117241a7 push ecx */
  push32((uint32_t)(ECX));
  /* 117241a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117241ab push edx */
  push32((uint32_t)(EDX));
  /* 117241ac push 0x1174d6a0 */
  push32((uint32_t)(0x1174d6a0u));
  /* 117241b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117241b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117241b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117241b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117241b9 call 0x11723380 */
  push32(0x117241beu); f_11723380();
  /* 117241be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117241c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117241c4 jne 0x117241c7 */
  if (!C.zf) goto L_117241c7;
  /* 117241c6 int3  */
  x86_unimpl("int3 @ 0x117241c6");
L_117241c7:;
  /* 117241c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117241c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117241cb jne 0x117241a4 */
  if (!C.zf) goto L_117241a4;
  /* 117241cd jmp 0x117241f5 */
  goto L_117241f5;
L_117241cf:;
  /* 117241cf push 0x1174d67c */
  push32((uint32_t)(0x1174d67cu));
  /* 117241d4 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 117241d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117241db push 0 */
  push32((uint32_t)(0x0u));
  /* 117241dd push 0 */
  push32((uint32_t)(0x0u));
  /* 117241df push 0 */
  push32((uint32_t)(0x0u));
  /* 117241e1 call 0x11723380 */
  push32(0x117241e6u); f_11723380();
  /* 117241e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117241e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117241ec jne 0x117241ef */
  if (!C.zf) goto L_117241ef;
  /* 117241ee int3  */
  x86_unimpl("int3 @ 0x117241ee");
L_117241ef:;
  /* 117241ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117241f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117241f3 jne 0x117241cf */
  if (!C.zf) goto L_117241cf;
L_117241f5:;
  /* 117241f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117241f7 jmp 0x117245da */
  goto L_117245da;
L_117241fc:;
  /* 117241fc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724200 jbe 0x1172422e */
  if ((C.cf||C.zf)) goto L_1172422e;
L_11724202:;
  /* 11724202 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724205 push edx */
  push32((uint32_t)(EDX));
  /* 11724206 push 0x1174d64c */
  push32((uint32_t)(0x1174d64cu));
  /* 1172420b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172420d push 0 */
  push32((uint32_t)(0x0u));
  /* 1172420f push 0 */
  push32((uint32_t)(0x0u));
  /* 11724211 push 1 */
  push32((uint32_t)(0x1u));
  /* 11724213 call 0x11723380 */
  push32(0x11724218u); f_11723380();
  /* 11724218 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172421b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172421e jne 0x11724221 */
  if (!C.zf) goto L_11724221;
  /* 11724220 int3  */
  x86_unimpl("int3 @ 0x11724220");
L_11724221:;
  /* 11724221 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724223 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724225 jne 0x11724202 */
  if (!C.zf) goto L_11724202;
  /* 11724227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724229 jmp 0x117245da */
  goto L_117245da;
L_1172422e:;
  /* 1172422e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724232 je 0x11724276 */
  if (C.zf) goto L_11724276;
  /* 11724234 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11724237 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172423d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724240 je 0x11724276 */
  if (C.zf) goto L_11724276;
  /* 11724242 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11724245 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172424b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172424e je 0x11724276 */
  if (C.zf) goto L_11724276;
L_11724250:;
  /* 11724250 push 0x1174d460 */
  push32((uint32_t)(0x1174d460u));
  /* 11724255 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 1172425a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172425c push 0 */
  push32((uint32_t)(0x0u));
  /* 1172425e push 0 */
  push32((uint32_t)(0x0u));
  /* 11724260 push 1 */
  push32((uint32_t)(0x1u));
  /* 11724262 call 0x11723380 */
  push32(0x11724267u); f_11723380();
  /* 11724267 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172426a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172426d jne 0x11724270 */
  if (!C.zf) goto L_11724270;
  /* 1172426f int3  */
  x86_unimpl("int3 @ 0x1172426f");
L_11724270:;
  /* 11724270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724274 jne 0x11724250 */
  if (!C.zf) goto L_11724250;
L_11724276:;
  /* 11724276 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724279 push ecx */
  push32((uint32_t)(ECX));
  /* 1172427a call 0x11725200 */
  push32(0x1172427fu); f_11725200();
  /* 1172427f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724284 jne 0x117242a7 */
  if (!C.zf) goto L_117242a7;
  /* 11724286 push 0x1174d628 */
  push32((uint32_t)(0x1174d628u));
  /* 1172428b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172428d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11724292 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724297 push 2 */
  push32((uint32_t)(0x2u));
  /* 11724299 call 0x11723380 */
  push32(0x1172429eu); f_11723380();
  /* 1172429e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117242a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117242a4 jne 0x117242a7 */
  if (!C.zf) goto L_117242a7;
  /* 117242a6 int3  */
  x86_unimpl("int3 @ 0x117242a6");
L_117242a7:;
  /* 117242a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117242a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117242ab jne 0x11724276 */
  if (!C.zf) goto L_11724276;
  /* 117242ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117242b0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117242b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117242b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117242b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117242bd jne 0x117242c6 */
  if (!C.zf) goto L_117242c6;
  /* 117242bf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_117242c6:;
  /* 117242c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117242ca je 0x1172430a */
  if (C.zf) goto L_1172430a;
L_117242cc:;
  /* 117242cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117242cf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117242d6 jne 0x117242e1 */
  if (!C.zf) goto L_117242e1;
  /* 117242d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117242db cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117242df je 0x11724302 */
  if (C.zf) goto L_11724302;
L_117242e1:;
  /* 117242e1 push 0x1174d5e0 */
  push32((uint32_t)(0x1174d5e0u));
  /* 117242e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117242e8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 117242ed push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 117242f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117242f4 call 0x11723380 */
  push32(0x117242f9u); f_11723380();
  /* 117242f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117242fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117242ff jne 0x11724302 */
  if (!C.zf) goto L_11724302;
  /* 11724301 int3  */
  x86_unimpl("int3 @ 0x11724301");
L_11724302:;
  /* 11724302 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724304 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724306 jne 0x117242cc */
  if (!C.zf) goto L_117242cc;
  /* 11724308 jmp 0x1172436e */
  goto L_1172436e;
L_1172430a:;
  /* 1172430a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172430d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724310 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11724315 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724318 jne 0x1172432f */
  if (!C.zf) goto L_1172432f;
  /* 1172431a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172431d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11724323 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724326 jne 0x1172432f */
  if (!C.zf) goto L_1172432f;
  /* 11724328 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1172432f:;
  /* 1172432f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724332 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724335 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172433a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172433d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11724343 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724345 je 0x11724368 */
  if (C.zf) goto L_11724368;
  /* 11724347 push 0x1174d5a4 */
  push32((uint32_t)(0x1174d5a4u));
  /* 1172434c push 0 */
  push32((uint32_t)(0x0u));
  /* 1172434e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11724353 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724358 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172435a call 0x11723380 */
  push32(0x1172435fu); f_11723380();
  /* 1172435f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724362 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724365 jne 0x11724368 */
  if (!C.zf) goto L_11724368;
  /* 11724367 int3  */
  x86_unimpl("int3 @ 0x11724367");
L_11724368:;
  /* 11724368 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172436a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172436c jne 0x1172432f */
  if (!C.zf) goto L_1172432f;
L_1172436e:;
  /* 1172436e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724372 je 0x11724399 */
  if (C.zf) goto L_11724399;
  /* 11724374 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724377 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172437a push eax */
  push32((uint32_t)(EAX));
  /* 1172437b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172437e push ecx */
  push32((uint32_t)(ECX));
  /* 1172437f call 0x11728e10 */
  push32(0x11724384u); f_11728e10();
  /* 11724384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724387 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1172438a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172438e jne 0x11724397 */
  if (!C.zf) goto L_11724397;
  /* 11724390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724392 jmp 0x117245da */
  goto L_117245da;
L_11724397:;
  /* 11724397 jmp 0x117243bc */
  goto L_117243bc;
L_11724399:;
  /* 11724399 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172439c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172439f push edx */
  push32((uint32_t)(EDX));
  /* 117243a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117243a3 push eax */
  push32((uint32_t)(EAX));
  /* 117243a4 call 0x11728d60 */
  push32(0x117243a9u); f_11728d60();
  /* 117243a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117243ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117243af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117243b3 jne 0x117243bc */
  if (!C.zf) goto L_117243bc;
  /* 117243b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117243b7 jmp 0x117245da */
  goto L_117245da;
L_117243bc:;
  /* 117243bc mov ecx, dword ptr [0x11750e40] */
  ECX = (r32((uint32_t)(0x11750e40)));
  /* 117243c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117243c5 mov dword ptr [0x11750e40], ecx */
  w32((uint32_t)(0x11750e40), (ECX));
  /* 117243cb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117243cf jne 0x11724427 */
  if (!C.zf) goto L_11724427;
  /* 117243d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117243d4 mov eax, dword ptr [0x11752a64] */
  EAX = (r32((uint32_t)(0x11752a64)));
  /* 117243d9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117243dc mov dword ptr [0x11752a64], eax */
  w32((uint32_t)(0x11752a64), (EAX));
  /* 117243e1 mov ecx, dword ptr [0x11752a64] */
  ECX = (r32((uint32_t)(0x11752a64)));
  /* 117243e7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117243ea mov dword ptr [0x11752a64], ecx */
  w32((uint32_t)(0x11752a64), (ECX));
  /* 117243f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117243f3 mov eax, dword ptr [0x11752a6c] */
  EAX = (r32((uint32_t)(0x11752a6c)));
  /* 117243f8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117243fb mov dword ptr [0x11752a6c], eax */
  w32((uint32_t)(0x11752a6c), (EAX));
  /* 11724400 mov ecx, dword ptr [0x11752a6c] */
  ECX = (r32((uint32_t)(0x11752a6c)));
  /* 11724406 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724409 mov dword ptr [0x11752a6c], ecx */
  w32((uint32_t)(0x11752a6c), (ECX));
  /* 1172440f mov edx, dword ptr [0x11752a6c] */
  EDX = (r32((uint32_t)(0x11752a6c)));
  /* 11724415 cmp edx, dword ptr [0x11752a70] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11752a70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172441b jbe 0x11724427 */
  if ((C.cf||C.zf)) goto L_11724427;
  /* 1172441d mov eax, dword ptr [0x11752a6c] */
  EAX = (r32((uint32_t)(0x11752a6c)));
  /* 11724422 mov dword ptr [0x11752a70], eax */
  w32((uint32_t)(0x11752a70), (EAX));
L_11724427:;
  /* 11724427 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172442a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172442d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11724430 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724433 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724436 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724439 jbe 0x1172445f */
  if ((C.cf||C.zf)) goto L_1172445f;
  /* 1172443b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172443e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724441 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724444 push edx */
  push32((uint32_t)(EDX));
  /* 11724445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724447 mov al, byte ptr [0x11750e4a] */
  AL = (r8((uint32_t)(0x11750e4a)));
  /* 1172444c push eax */
  push32((uint32_t)(EAX));
  /* 1172444d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724450 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724453 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724456 push edx */
  push32((uint32_t)(EDX));
  /* 11724457 call 0x11728c00 */
  push32(0x1172445cu); f_11728c00();
  /* 1172445c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172445f:;
  /* 1172445f push 4 */
  push32((uint32_t)(0x4u));
  /* 11724461 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724463 mov al, byte ptr [0x11750e48] */
  AL = (r8((uint32_t)(0x11750e48)));
  /* 11724468 push eax */
  push32((uint32_t)(EAX));
  /* 11724469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172446c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172446f push ecx */
  push32((uint32_t)(ECX));
  /* 11724470 call 0x11728c00 */
  push32(0x11724475u); f_11728c00();
  /* 11724475 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724478 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172447c jne 0x11724499 */
  if (!C.zf) goto L_11724499;
  /* 1172447e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724481 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11724484 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11724487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172448a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172448d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11724490 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724493 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11724496 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11724499:;
  /* 11724499 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172449c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172449f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_117244a2:;
  /* 117244a2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117244a6 jne 0x117244d7 */
  if (!C.zf) goto L_117244d7;
  /* 117244a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117244ac jne 0x117244b6 */
  if (!C.zf) goto L_117244b6;
  /* 117244ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117244b1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117244b4 je 0x117244d7 */
  if (C.zf) goto L_117244d7;
L_117244b6:;
  /* 117244b6 push 0x1174d570 */
  push32((uint32_t)(0x1174d570u));
  /* 117244bb push 0 */
  push32((uint32_t)(0x0u));
  /* 117244bd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 117244c2 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 117244c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117244c9 call 0x11723380 */
  push32(0x117244ceu); f_11723380();
  /* 117244ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117244d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117244d4 jne 0x117244d7 */
  if (!C.zf) goto L_117244d7;
  /* 117244d6 int3  */
  x86_unimpl("int3 @ 0x117244d6");
L_117244d7:;
  /* 117244d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117244d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117244db jne 0x117244a2 */
  if (!C.zf) goto L_117244a2;
  /* 117244dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117244e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117244e3 je 0x117244eb */
  if (C.zf) goto L_117244eb;
  /* 117244e5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117244e9 je 0x117244f3 */
  if (C.zf) goto L_117244f3;
L_117244eb:;
  /* 117244eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117244ee jmp 0x117245da */
  goto L_117245da;
L_117244f3:;
  /* 117244f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117244f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117244f9 je 0x1172450b */
  if (C.zf) goto L_1172450b;
  /* 117244fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117244fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11724500 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724503 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11724506 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11724509 jmp 0x11724547 */
  goto L_11724547;
L_1172450b:;
  /* 1172450b mov eax, dword ptr [0x11752a60] */
  EAX = (r32((uint32_t)(0x11752a60)));
  /* 11724510 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724513 je 0x11724536 */
  if (C.zf) goto L_11724536;
  /* 11724515 push 0x1174d554 */
  push32((uint32_t)(0x1174d554u));
  /* 1172451a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172451c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11724521 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724526 push 2 */
  push32((uint32_t)(0x2u));
  /* 11724528 call 0x11723380 */
  push32(0x1172452du); f_11723380();
  /* 1172452d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724530 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724533 jne 0x11724536 */
  if (!C.zf) goto L_11724536;
  /* 11724535 int3  */
  x86_unimpl("int3 @ 0x11724535");
L_11724536:;
  /* 11724536 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724538 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172453a jne 0x1172450b */
  if (!C.zf) goto L_1172450b;
  /* 1172453c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172453f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11724542 mov dword ptr [0x11752a60], eax */
  w32((uint32_t)(0x11752a60), (EAX));
L_11724547:;
  /* 11724547 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172454a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172454e je 0x1172455f */
  if (C.zf) goto L_1172455f;
  /* 11724550 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724553 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11724556 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724559 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172455b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1172455d jmp 0x1172459a */
  goto L_1172459a;
L_1172455f:;
  /* 1172455f mov eax, dword ptr [0x11752a68] */
  EAX = (r32((uint32_t)(0x11752a68)));
  /* 11724564 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724567 je 0x1172458a */
  if (C.zf) goto L_1172458a;
  /* 11724569 push 0x1174d538 */
  push32((uint32_t)(0x1174d538u));
  /* 1172456e push 0 */
  push32((uint32_t)(0x0u));
  /* 11724570 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11724575 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 1172457a push 2 */
  push32((uint32_t)(0x2u));
  /* 1172457c call 0x11723380 */
  push32(0x11724581u); f_11723380();
  /* 11724581 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724584 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724587 jne 0x1172458a */
  if (!C.zf) goto L_1172458a;
  /* 11724589 int3  */
  x86_unimpl("int3 @ 0x11724589");
L_1172458a:;
  /* 1172458a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172458c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172458e jne 0x1172455f */
  if (!C.zf) goto L_1172455f;
  /* 11724590 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724593 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11724595 mov dword ptr [0x11752a68], eax */
  w32((uint32_t)(0x11752a68), (EAX));
L_1172459a:;
  /* 1172459a cmp dword ptr [0x11752a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117245a1 je 0x117245b1 */
  if (C.zf) goto L_117245b1;
  /* 117245a3 mov ecx, dword ptr [0x11752a68] */
  ECX = (r32((uint32_t)(0x11752a68)));
  /* 117245a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117245ac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117245af jmp 0x117245b9 */
  goto L_117245b9;
L_117245b1:;
  /* 117245b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117245b4 mov dword ptr [0x11752a60], eax */
  w32((uint32_t)(0x11752a60), (EAX));
L_117245b9:;
  /* 117245b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117245bc mov edx, dword ptr [0x11752a68] */
  EDX = (r32((uint32_t)(0x11752a68)));
  /* 117245c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117245c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117245c7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 117245ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117245d1 mov dword ptr [0x11752a68], ecx */
  w32((uint32_t)(0x11752a68), (ECX));
  /* 117245d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117245da:;
  /* 117245da pop edi */
  EDI = (pop32());
  /* 117245db pop esi */
  ESI = (pop32());
  /* 117245dc pop ebx */
  EBX = (pop32());
  /* 117245dd mov esp, ebp */
  ESP = (EBP);
  /* 117245df pop ebp */
  EBP = (pop32());
  /* 117245e0 ret  */
  ESPCHK(0x117240d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045f0 @ 0x117245f0 (27 bytes, 13 insns) */
void f_117245f0(void) {
  FTRACE(0x117245f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117245f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117245f1 mov ebp, esp */
  EBP = (ESP);
  /* 117245f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117245f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117245f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117245f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117245fc push eax */
  push32((uint32_t)(EAX));
  /* 117245fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724600 push ecx */
  push32((uint32_t)(ECX));
  /* 11724601 call 0x11724610 */
  push32(0x11724606u); f_11724610();
  /* 11724606 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724609 pop ebp */
  EBP = (pop32());
  /* 1172460a ret  */
  ESPCHK(0x117245f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004610 @ 0x11724610 (64 bytes, 27 insns) */
void f_11724610(void) {
  FTRACE(0x11724610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724610 push ebp */
  push32((uint32_t)(EBP));
  /* 11724611 mov ebp, esp */
  EBP = (ESP);
  /* 11724613 push ecx */
  push32((uint32_t)(ECX));
  /* 11724614 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724616 call 0x11723b00 */
  push32(0x1172461bu); f_11723b00();
  /* 1172461b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172461e push 0 */
  push32((uint32_t)(0x0u));
  /* 11724620 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11724623 push eax */
  push32((uint32_t)(EAX));
  /* 11724624 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11724627 push ecx */
  push32((uint32_t)(ECX));
  /* 11724628 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172462b push edx */
  push32((uint32_t)(EDX));
  /* 1172462c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172462f push eax */
  push32((uint32_t)(EAX));
  /* 11724630 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724633 push ecx */
  push32((uint32_t)(ECX));
  /* 11724634 call 0x117240d0 */
  push32(0x11724639u); f_117240d0();
  /* 11724639 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172463c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172463f push 9 */
  push32((uint32_t)(0x9u));
  /* 11724641 call 0x11723ba0 */
  push32(0x11724646u); f_11723ba0();
  /* 11724646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172464c mov esp, ebp */
  ESP = (EBP);
  /* 1172464e pop ebp */
  EBP = (pop32());
  /* 1172464f ret  */
  ESPCHK(0x11724610u, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x11724650 (19 bytes, 9 insns) */
void f_11724650(void) {
  FTRACE(0x11724650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724650 push ebp */
  push32((uint32_t)(EBP));
  /* 11724651 mov ebp, esp */
  EBP = (ESP);
  /* 11724653 push 1 */
  push32((uint32_t)(0x1u));
  /* 11724655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724658 push eax */
  push32((uint32_t)(EAX));
  /* 11724659 call 0x11724690 */
  push32(0x1172465eu); f_11724690();
  /* 1172465e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724661 pop ebp */
  EBP = (pop32());
  /* 11724662 ret  */
  ESPCHK(0x11724650u, _esp0);
  ESP += 4; return;
}

/* FUN_10004670 @ 0x11724670 (19 bytes, 9 insns) */
void f_11724670(void) {
  FTRACE(0x11724670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724670 push ebp */
  push32((uint32_t)(EBP));
  /* 11724671 mov ebp, esp */
  EBP = (ESP);
  /* 11724673 push 1 */
  push32((uint32_t)(0x1u));
  /* 11724675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724678 push eax */
  push32((uint32_t)(EAX));
  /* 11724679 call 0x117246c0 */
  push32(0x1172467eu); f_117246c0();
  /* 1172467e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724681 pop ebp */
  EBP = (pop32());
  /* 11724682 ret  */
  ESPCHK(0x11724670u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x11724690 (41 bytes, 16 insns) */
void f_11724690(void) {
  FTRACE(0x11724690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724690 push ebp */
  push32((uint32_t)(EBP));
  /* 11724691 mov ebp, esp */
  EBP = (ESP);
  /* 11724693 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724695 call 0x11723b00 */
  push32(0x1172469au); f_11723b00();
  /* 1172469a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172469d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117246a0 push eax */
  push32((uint32_t)(EAX));
  /* 117246a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117246a4 push ecx */
  push32((uint32_t)(ECX));
  /* 117246a5 call 0x117246c0 */
  push32(0x117246aau); f_117246c0();
  /* 117246aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117246ad push 9 */
  push32((uint32_t)(0x9u));
  /* 117246af call 0x11723ba0 */
  push32(0x117246b4u); f_11723ba0();
  /* 117246b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117246b7 pop ebp */
  EBP = (pop32());
  /* 117246b8 ret  */
  ESPCHK(0x11724690u, _esp0);
  ESP += 4; return;
}

/* FUN_100046c0 @ 0x117246c0 (1004 bytes, 342 insns) */
void f_117246c0(void) {
  FTRACE(0x117246c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117246c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117246c1 mov ebp, esp */
  EBP = (ESP);
  /* 117246c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117246c4 push ebx */
  push32((uint32_t)(EBX));
  /* 117246c5 push esi */
  push32((uint32_t)(ESI));
  /* 117246c6 push edi */
  push32((uint32_t)(EDI));
  /* 117246c7 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 117246cc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117246cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117246d1 je 0x11724703 */
  if (C.zf) goto L_11724703;
L_117246d3:;
  /* 117246d3 call 0x11724da0 */
  push32(0x117246d8u); f_11724da0();
  /* 117246d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117246da jne 0x117246fd */
  if (!C.zf) goto L_117246fd;
  /* 117246dc push 0x1174d524 */
  push32((uint32_t)(0x1174d524u));
  /* 117246e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117246e3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 117246e8 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 117246ed push 2 */
  push32((uint32_t)(0x2u));
  /* 117246ef call 0x11723380 */
  push32(0x117246f4u); f_11723380();
  /* 117246f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117246f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117246fa jne 0x117246fd */
  if (!C.zf) goto L_117246fd;
  /* 117246fc int3  */
  x86_unimpl("int3 @ 0x117246fc");
L_117246fd:;
  /* 117246fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117246ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724701 jne 0x117246d3 */
  if (!C.zf) goto L_117246d3;
L_11724703:;
  /* 11724703 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724707 jne 0x1172470e */
  if (!C.zf) goto L_1172470e;
  /* 11724709 jmp 0x11724aa5 */
  goto L_11724aa5;
L_1172470e:;
  /* 1172470e push 0 */
  push32((uint32_t)(0x0u));
  /* 11724710 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724712 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724714 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724717 push edx */
  push32((uint32_t)(EDX));
  /* 11724718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172471a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172471d push eax */
  push32((uint32_t)(EAX));
  /* 1172471e push 3 */
  push32((uint32_t)(0x3u));
  /* 11724720 call dword ptr [0x11750f30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11750f30))), 0x11724726u);
  /* 11724726 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172472b jne 0x11724758 */
  if (!C.zf) goto L_11724758;
L_1172472d:;
  /* 1172472d push 0x1174d7c0 */
  push32((uint32_t)(0x1174d7c0u));
  /* 11724732 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11724737 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724739 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172473b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172473d push 0 */
  push32((uint32_t)(0x0u));
  /* 1172473f call 0x11723380 */
  push32(0x11724744u); f_11723380();
  /* 11724744 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724747 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172474a jne 0x1172474d */
  if (!C.zf) goto L_1172474d;
  /* 1172474c int3  */
  x86_unimpl("int3 @ 0x1172474c");
L_1172474d:;
  /* 1172474d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172474f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724751 jne 0x1172472d */
  if (!C.zf) goto L_1172472d;
  /* 11724753 jmp 0x11724aa5 */
  goto L_11724aa5;
L_11724758:;
  /* 11724758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172475b push edx */
  push32((uint32_t)(EDX));
  /* 1172475c call 0x11725200 */
  push32(0x11724761u); f_11725200();
  /* 11724761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724766 jne 0x11724789 */
  if (!C.zf) goto L_11724789;
  /* 11724768 push 0x1174d628 */
  push32((uint32_t)(0x1174d628u));
  /* 1172476d push 0 */
  push32((uint32_t)(0x0u));
  /* 1172476f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11724774 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724779 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172477b call 0x11723380 */
  push32(0x11724780u); f_11723380();
  /* 11724780 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724783 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724786 jne 0x11724789 */
  if (!C.zf) goto L_11724789;
  /* 11724788 int3  */
  x86_unimpl("int3 @ 0x11724788");
L_11724789:;
  /* 11724789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172478b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172478d jne 0x11724758 */
  if (!C.zf) goto L_11724758;
  /* 1172478f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724792 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724795 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11724798:;
  /* 11724798 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172479b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1172479e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117247a3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117247a6 je 0x117247eb */
  if (C.zf) goto L_117247eb;
  /* 117247a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117247ab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117247af je 0x117247eb */
  if (C.zf) goto L_117247eb;
  /* 117247b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117247b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117247b7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117247bc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117247bf je 0x117247eb */
  if (C.zf) goto L_117247eb;
  /* 117247c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117247c4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117247c8 je 0x117247eb */
  if (C.zf) goto L_117247eb;
  /* 117247ca push 0x1174d1cc */
  push32((uint32_t)(0x1174d1ccu));
  /* 117247cf push 0 */
  push32((uint32_t)(0x0u));
  /* 117247d1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 117247d6 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 117247db push 2 */
  push32((uint32_t)(0x2u));
  /* 117247dd call 0x11723380 */
  push32(0x117247e2u); f_11723380();
  /* 117247e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117247e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117247e8 jne 0x117247eb */
  if (!C.zf) goto L_117247eb;
  /* 117247ea int3  */
  x86_unimpl("int3 @ 0x117247ea");
L_117247eb:;
  /* 117247eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117247ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117247ef jne 0x11724798 */
  if (!C.zf) goto L_11724798;
  /* 117247f1 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 117247f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 117247f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117247fb jne 0x117248c6 */
  if (!C.zf) goto L_117248c6;
  /* 11724801 push 4 */
  push32((uint32_t)(0x4u));
  /* 11724803 mov cl, byte ptr [0x11750e48] */
  CL = (r8((uint32_t)(0x11750e48)));
  /* 11724809 push ecx */
  push32((uint32_t)(ECX));
  /* 1172480a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172480d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724810 push edx */
  push32((uint32_t)(EDX));
  /* 11724811 call 0x11724d10 */
  push32(0x11724816u); f_11724d10();
  /* 11724816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172481b jne 0x11724860 */
  if (!C.zf) goto L_11724860;
L_1172481d:;
  /* 1172481d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724820 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724823 push eax */
  push32((uint32_t)(EAX));
  /* 11724824 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724827 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1172482a push edx */
  push32((uint32_t)(EDX));
  /* 1172482b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172482e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11724831 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11724837 mov edx, dword ptr [ecx*4 + 0x11750e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750e4c)));
  /* 1172483e push edx */
  push32((uint32_t)(EDX));
  /* 1172483f push 0x1174d794 */
  push32((uint32_t)(0x1174d794u));
  /* 11724844 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724846 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724848 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172484a push 1 */
  push32((uint32_t)(0x1u));
  /* 1172484c call 0x11723380 */
  push32(0x11724851u); f_11723380();
  /* 11724851 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724854 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724857 jne 0x1172485a */
  if (!C.zf) goto L_1172485a;
  /* 11724859 int3  */
  x86_unimpl("int3 @ 0x11724859");
L_1172485a:;
  /* 1172485a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172485c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172485e jne 0x1172481d */
  if (!C.zf) goto L_1172481d;
L_11724860:;
  /* 11724860 push 4 */
  push32((uint32_t)(0x4u));
  /* 11724862 mov cl, byte ptr [0x11750e48] */
  CL = (r8((uint32_t)(0x11750e48)));
  /* 11724868 push ecx */
  push32((uint32_t)(ECX));
  /* 11724869 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172486c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172486f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724872 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11724876 push edx */
  push32((uint32_t)(EDX));
  /* 11724877 call 0x11724d10 */
  push32(0x1172487cu); f_11724d10();
  /* 1172487c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172487f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724881 jne 0x117248c6 */
  if (!C.zf) goto L_117248c6;
L_11724883:;
  /* 11724883 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724886 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724889 push eax */
  push32((uint32_t)(EAX));
  /* 1172488a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172488d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11724890 push edx */
  push32((uint32_t)(EDX));
  /* 11724891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724894 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11724897 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172489d mov edx, dword ptr [ecx*4 + 0x11750e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750e4c)));
  /* 117248a4 push edx */
  push32((uint32_t)(EDX));
  /* 117248a5 push 0x1174d768 */
  push32((uint32_t)(0x1174d768u));
  /* 117248aa push 0 */
  push32((uint32_t)(0x0u));
  /* 117248ac push 0 */
  push32((uint32_t)(0x0u));
  /* 117248ae push 0 */
  push32((uint32_t)(0x0u));
  /* 117248b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117248b2 call 0x11723380 */
  push32(0x117248b7u); f_11723380();
  /* 117248b7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117248ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117248bd jne 0x117248c0 */
  if (!C.zf) goto L_117248c0;
  /* 117248bf int3  */
  x86_unimpl("int3 @ 0x117248bf");
L_117248c0:;
  /* 117248c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117248c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117248c4 jne 0x11724883 */
  if (!C.zf) goto L_11724883;
L_117248c6:;
  /* 117248c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117248c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117248cd jne 0x1172493b */
  if (!C.zf) goto L_1172493b;
L_117248cf:;
  /* 117248cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117248d2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117248d9 jne 0x117248e4 */
  if (!C.zf) goto L_117248e4;
  /* 117248db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117248de cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117248e2 je 0x11724905 */
  if (C.zf) goto L_11724905;
L_117248e4:;
  /* 117248e4 push 0x1174d728 */
  push32((uint32_t)(0x1174d728u));
  /* 117248e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117248eb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 117248f0 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 117248f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117248f7 call 0x11723380 */
  push32(0x117248fcu); f_11723380();
  /* 117248fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117248ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724902 jne 0x11724905 */
  if (!C.zf) goto L_11724905;
  /* 11724904 int3  */
  x86_unimpl("int3 @ 0x11724904");
L_11724905:;
  /* 11724905 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724907 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724909 jne 0x117248cf */
  if (!C.zf) goto L_117248cf;
  /* 1172490b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172490e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11724911 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724914 push eax */
  push32((uint32_t)(EAX));
  /* 11724915 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724917 mov cl, byte ptr [0x11750e49] */
  CL = (r8((uint32_t)(0x11750e49)));
  /* 1172491d push ecx */
  push32((uint32_t)(ECX));
  /* 1172491e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724921 push edx */
  push32((uint32_t)(EDX));
  /* 11724922 call 0x11728c00 */
  push32(0x11724927u); f_11728c00();
  /* 11724927 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172492a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172492d push eax */
  push32((uint32_t)(EAX));
  /* 1172492e call 0x11729000 */
  push32(0x11724933u); f_11729000();
  /* 11724933 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724936 jmp 0x11724aa5 */
  goto L_11724aa5;
L_1172493b:;
  /* 1172493b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172493e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724942 jne 0x11724951 */
  if (!C.zf) goto L_11724951;
  /* 11724944 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724948 jne 0x11724951 */
  if (!C.zf) goto L_11724951;
  /* 1172494a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11724951:;
  /* 11724951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724954 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724957 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172495a je 0x1172497d */
  if (C.zf) goto L_1172497d;
  /* 1172495c push 0x1174d708 */
  push32((uint32_t)(0x1174d708u));
  /* 11724961 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724963 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11724968 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 1172496d push 2 */
  push32((uint32_t)(0x2u));
  /* 1172496f call 0x11723380 */
  push32(0x11724974u); f_11723380();
  /* 11724974 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724977 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172497a jne 0x1172497d */
  if (!C.zf) goto L_1172497d;
  /* 1172497c int3  */
  x86_unimpl("int3 @ 0x1172497c");
L_1172497d:;
  /* 1172497d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172497f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724981 jne 0x11724951 */
  if (!C.zf) goto L_11724951;
  /* 11724983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724986 mov eax, dword ptr [0x11752a6c] */
  EAX = (r32((uint32_t)(0x11752a6c)));
  /* 1172498b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172498e mov dword ptr [0x11752a6c], eax */
  w32((uint32_t)(0x11752a6c), (EAX));
  /* 11724993 mov ecx, dword ptr [0x11750e3c] */
  ECX = (r32((uint32_t)(0x11750e3c)));
  /* 11724999 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1172499c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172499e jne 0x11724a7c */
  if (!C.zf) goto L_11724a7c;
  /* 117249a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117249a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117249aa je 0x117249bc */
  if (C.zf) goto L_117249bc;
  /* 117249ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117249af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117249b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117249b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117249b7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117249ba jmp 0x117249fa */
  goto L_117249fa;
L_117249bc:;
  /* 117249bc mov ecx, dword ptr [0x11752a60] */
  ECX = (r32((uint32_t)(0x11752a60)));
  /* 117249c2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117249c5 je 0x117249e8 */
  if (C.zf) goto L_117249e8;
  /* 117249c7 push 0x1174d6f0 */
  push32((uint32_t)(0x1174d6f0u));
  /* 117249cc push 0 */
  push32((uint32_t)(0x0u));
  /* 117249ce push 0x42a */
  push32((uint32_t)(0x42au));
  /* 117249d3 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 117249d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117249da call 0x11723380 */
  push32(0x117249dfu); f_11723380();
  /* 117249df add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117249e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117249e5 jne 0x117249e8 */
  if (!C.zf) goto L_117249e8;
  /* 117249e7 int3  */
  x86_unimpl("int3 @ 0x117249e7");
L_117249e8:;
  /* 117249e8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117249ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117249ec jne 0x117249bc */
  if (!C.zf) goto L_117249bc;
  /* 117249ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117249f1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117249f4 mov dword ptr [0x11752a60], ecx */
  w32((uint32_t)(0x11752a60), (ECX));
L_117249fa:;
  /* 117249fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117249fd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724a01 je 0x11724a12 */
  if (C.zf) goto L_11724a12;
  /* 11724a03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11724a09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11724a0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11724a10 jmp 0x11724a4f */
  goto L_11724a4f;
L_11724a12:;
  /* 11724a12 mov ecx, dword ptr [0x11752a68] */
  ECX = (r32((uint32_t)(0x11752a68)));
  /* 11724a18 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724a1b je 0x11724a3e */
  if (C.zf) goto L_11724a3e;
  /* 11724a1d push 0x1174d6d8 */
  push32((uint32_t)(0x1174d6d8u));
  /* 11724a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724a24 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11724a29 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724a2e push 2 */
  push32((uint32_t)(0x2u));
  /* 11724a30 call 0x11723380 */
  push32(0x11724a35u); f_11723380();
  /* 11724a35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724a38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724a3b jne 0x11724a3e */
  if (!C.zf) goto L_11724a3e;
  /* 11724a3d int3  */
  x86_unimpl("int3 @ 0x11724a3d");
L_11724a3e:;
  /* 11724a3e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11724a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11724a42 jne 0x11724a12 */
  if (!C.zf) goto L_11724a12;
  /* 11724a44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11724a49 mov dword ptr [0x11752a68], ecx */
  w32((uint32_t)(0x11752a68), (ECX));
L_11724a4f:;
  /* 11724a4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a52 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11724a55 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724a58 push eax */
  push32((uint32_t)(EAX));
  /* 11724a59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724a5b mov cl, byte ptr [0x11750e49] */
  CL = (r8((uint32_t)(0x11750e49)));
  /* 11724a61 push ecx */
  push32((uint32_t)(ECX));
  /* 11724a62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a65 push edx */
  push32((uint32_t)(EDX));
  /* 11724a66 call 0x11728c00 */
  push32(0x11724a6bu); f_11728c00();
  /* 11724a6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a71 push eax */
  push32((uint32_t)(EAX));
  /* 11724a72 call 0x11729000 */
  push32(0x11724a77u); f_11729000();
  /* 11724a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724a7a jmp 0x11724aa5 */
  goto L_11724aa5;
L_11724a7c:;
  /* 11724a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a7f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11724a86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a89 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11724a8c push eax */
  push32((uint32_t)(EAX));
  /* 11724a8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724a8f mov cl, byte ptr [0x11750e49] */
  CL = (r8((uint32_t)(0x11750e49)));
  /* 11724a95 push ecx */
  push32((uint32_t)(ECX));
  /* 11724a96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724a99 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724a9c push edx */
  push32((uint32_t)(EDX));
  /* 11724a9d call 0x11728c00 */
  push32(0x11724aa2u); f_11728c00();
  /* 11724aa2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11724aa5:;
  /* 11724aa5 pop edi */
  EDI = (pop32());
  /* 11724aa6 pop esi */
  ESI = (pop32());
  /* 11724aa7 pop ebx */
  EBX = (pop32());
  /* 11724aa8 mov esp, ebp */
  ESP = (EBP);
  /* 11724aaa pop ebp */
  EBP = (pop32());
  /* 11724aab ret  */
  ESPCHK(0x117246c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab0 @ 0x11724ab0 (19 bytes, 9 insns) */
void f_11724ab0(void) {
  FTRACE(0x11724ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11724ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11724ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11724ab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724ab8 push eax */
  push32((uint32_t)(EAX));
  /* 11724ab9 call 0x11724ad0 */
  push32(0x11724abeu); f_11724ad0();
  /* 11724abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724ac1 pop ebp */
  EBP = (pop32());
  /* 11724ac2 ret  */
  ESPCHK(0x11724ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ad0 @ 0x11724ad0 (342 bytes, 119 insns) */
void f_11724ad0(void) {
  FTRACE(0x11724ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11724ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11724ad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11724ad7 push esi */
  push32((uint32_t)(ESI));
  /* 11724ad8 push edi */
  push32((uint32_t)(EDI));
  /* 11724ad9 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 11724ade and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11724ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724ae3 je 0x11724b15 */
  if (C.zf) goto L_11724b15;
L_11724ae5:;
  /* 11724ae5 call 0x11724da0 */
  push32(0x11724aeau); f_11724da0();
  /* 11724aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724aec jne 0x11724b0f */
  if (!C.zf) goto L_11724b0f;
  /* 11724aee push 0x1174d524 */
  push32((uint32_t)(0x1174d524u));
  /* 11724af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724af5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11724afa push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724aff push 2 */
  push32((uint32_t)(0x2u));
  /* 11724b01 call 0x11723380 */
  push32(0x11724b06u); f_11723380();
  /* 11724b06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724b09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724b0c jne 0x11724b0f */
  if (!C.zf) goto L_11724b0f;
  /* 11724b0e int3  */
  x86_unimpl("int3 @ 0x11724b0e");
L_11724b0f:;
  /* 11724b0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724b11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724b13 jne 0x11724ae5 */
  if (!C.zf) goto L_11724ae5;
L_11724b15:;
  /* 11724b15 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724b17 call 0x11723b00 */
  push32(0x11724b1cu); f_11723b00();
  /* 11724b1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11724b1f:;
  /* 11724b1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724b22 push edx */
  push32((uint32_t)(EDX));
  /* 11724b23 call 0x11725200 */
  push32(0x11724b28u); f_11725200();
  /* 11724b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724b2d jne 0x11724b50 */
  if (!C.zf) goto L_11724b50;
  /* 11724b2f push 0x1174d628 */
  push32((uint32_t)(0x1174d628u));
  /* 11724b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724b36 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11724b3b push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724b40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11724b42 call 0x11723380 */
  push32(0x11724b47u); f_11723380();
  /* 11724b47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724b4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724b4d jne 0x11724b50 */
  if (!C.zf) goto L_11724b50;
  /* 11724b4f int3  */
  x86_unimpl("int3 @ 0x11724b4f");
L_11724b50:;
  /* 11724b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724b52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724b54 jne 0x11724b1f */
  if (!C.zf) goto L_11724b1f;
  /* 11724b56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724b59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724b5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11724b5f:;
  /* 11724b5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724b62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724b65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11724b6a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724b6d je 0x11724bb2 */
  if (C.zf) goto L_11724bb2;
  /* 11724b6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724b72 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724b76 je 0x11724bb2 */
  if (C.zf) goto L_11724bb2;
  /* 11724b78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724b7b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724b7e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11724b83 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724b86 je 0x11724bb2 */
  if (C.zf) goto L_11724bb2;
  /* 11724b88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724b8b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724b8f je 0x11724bb2 */
  if (C.zf) goto L_11724bb2;
  /* 11724b91 push 0x1174d1cc */
  push32((uint32_t)(0x1174d1ccu));
  /* 11724b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724b98 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11724b9d push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11724ba4 call 0x11723380 */
  push32(0x11724ba9u); f_11723380();
  /* 11724ba9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724bac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724baf jne 0x11724bb2 */
  if (!C.zf) goto L_11724bb2;
  /* 11724bb1 int3  */
  x86_unimpl("int3 @ 0x11724bb1");
L_11724bb2:;
  /* 11724bb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11724bb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11724bb6 jne 0x11724b5f */
  if (!C.zf) goto L_11724b5f;
  /* 11724bb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724bbb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724bbf jne 0x11724bce */
  if (!C.zf) goto L_11724bce;
  /* 11724bc1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724bc5 jne 0x11724bce */
  if (!C.zf) goto L_11724bce;
  /* 11724bc7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11724bce:;
  /* 11724bce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724bd1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724bd5 je 0x11724c09 */
  if (C.zf) goto L_11724c09;
L_11724bd7:;
  /* 11724bd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724bda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724bdd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724be0 je 0x11724c03 */
  if (C.zf) goto L_11724c03;
  /* 11724be2 push 0x1174d708 */
  push32((uint32_t)(0x1174d708u));
  /* 11724be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724be9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11724bee push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724bf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11724bf5 call 0x11723380 */
  push32(0x11724bfau); f_11723380();
  /* 11724bfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724bfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724c00 jne 0x11724c03 */
  if (!C.zf) goto L_11724c03;
  /* 11724c02 int3  */
  x86_unimpl("int3 @ 0x11724c02");
L_11724c03:;
  /* 11724c03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724c05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724c07 jne 0x11724bd7 */
  if (!C.zf) goto L_11724bd7;
L_11724c09:;
  /* 11724c09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724c0c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11724c0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11724c12 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724c14 call 0x11723ba0 */
  push32(0x11724c19u); f_11723ba0();
  /* 11724c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724c1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724c1f pop edi */
  EDI = (pop32());
  /* 11724c20 pop esi */
  ESI = (pop32());
  /* 11724c21 pop ebx */
  EBX = (pop32());
  /* 11724c22 mov esp, ebp */
  ESP = (EBP);
  /* 11724c24 pop ebp */
  EBP = (pop32());
  /* 11724c25 ret  */
  ESPCHK(0x11724ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c30 @ 0x11724c30 (28 bytes, 11 insns) */
void f_11724c30(void) {
  FTRACE(0x11724c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11724c31 mov ebp, esp */
  EBP = (ESP);
  /* 11724c33 push ecx */
  push32((uint32_t)(ECX));
  /* 11724c34 mov eax, dword ptr [0x11750e44] */
  EAX = (r32((uint32_t)(0x11750e44)));
  /* 11724c39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11724c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724c3f mov dword ptr [0x11750e44], ecx */
  w32((uint32_t)(0x11750e44), (ECX));
  /* 11724c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724c48 mov esp, ebp */
  ESP = (EBP);
  /* 11724c4a pop ebp */
  EBP = (pop32());
  /* 11724c4b ret  */
  ESPCHK(0x11724c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c50 @ 0x11724c50 (157 bytes, 59 insns) */
void f_11724c50(void) {
  FTRACE(0x11724c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11724c51 mov ebp, esp */
  EBP = (ESP);
  /* 11724c53 push ecx */
  push32((uint32_t)(ECX));
  /* 11724c54 push ebx */
  push32((uint32_t)(EBX));
  /* 11724c55 push esi */
  push32((uint32_t)(ESI));
  /* 11724c56 push edi */
  push32((uint32_t)(EDI));
  /* 11724c57 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724c59 call 0x11723b00 */
  push32(0x11724c5eu); f_11723b00();
  /* 11724c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724c61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724c64 push eax */
  push32((uint32_t)(EAX));
  /* 11724c65 call 0x11725200 */
  push32(0x11724c6au); f_11725200();
  /* 11724c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724c6f je 0x11724cdc */
  if (C.zf) goto L_11724cdc;
  /* 11724c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724c74 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724c77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11724c7a:;
  /* 11724c7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724c7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724c80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11724c85 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724c88 je 0x11724ccd */
  if (C.zf) goto L_11724ccd;
  /* 11724c8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724c8d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724c91 je 0x11724ccd */
  if (C.zf) goto L_11724ccd;
  /* 11724c93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724c96 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11724c99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11724c9e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724ca1 je 0x11724ccd */
  if (C.zf) goto L_11724ccd;
  /* 11724ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724ca6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724caa je 0x11724ccd */
  if (C.zf) goto L_11724ccd;
  /* 11724cac push 0x1174d1cc */
  push32((uint32_t)(0x1174d1ccu));
  /* 11724cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724cb3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11724cb8 push 0x1174d518 */
  push32((uint32_t)(0x1174d518u));
  /* 11724cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 11724cbf call 0x11723380 */
  push32(0x11724cc4u); f_11723380();
  /* 11724cc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724cc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724cca jne 0x11724ccd */
  if (!C.zf) goto L_11724ccd;
  /* 11724ccc int3  */
  x86_unimpl("int3 @ 0x11724ccc");
L_11724ccd:;
  /* 11724ccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11724ccf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11724cd1 jne 0x11724c7a */
  if (!C.zf) goto L_11724c7a;
  /* 11724cd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724cd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724cd9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11724cdc:;
  /* 11724cdc push 9 */
  push32((uint32_t)(0x9u));
  /* 11724cde call 0x11723ba0 */
  push32(0x11724ce3u); f_11723ba0();
  /* 11724ce3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724ce6 pop edi */
  EDI = (pop32());
  /* 11724ce7 pop esi */
  ESI = (pop32());
  /* 11724ce8 pop ebx */
  EBX = (pop32());
  /* 11724ce9 mov esp, ebp */
  ESP = (EBP);
  /* 11724ceb pop ebp */
  EBP = (pop32());
  /* 11724cec ret  */
  ESPCHK(0x11724c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf0 @ 0x11724cf0 (28 bytes, 11 insns) */
void f_11724cf0(void) {
  FTRACE(0x11724cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11724cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11724cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11724cf4 mov eax, dword ptr [0x11750f30] */
  EAX = (r32((uint32_t)(0x11750f30)));
  /* 11724cf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11724cfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724cff mov dword ptr [0x11750f30], ecx */
  w32((uint32_t)(0x11750f30), (ECX));
  /* 11724d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724d08 mov esp, ebp */
  ESP = (EBP);
  /* 11724d0a pop ebp */
  EBP = (pop32());
  /* 11724d0b ret  */
  ESPCHK(0x11724cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d10 @ 0x11724d10 (136 bytes, 55 insns) */
void f_11724d10(void) {
  FTRACE(0x11724d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11724d11 mov ebp, esp */
  EBP = (ESP);
  /* 11724d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11724d14 push ebx */
  push32((uint32_t)(EBX));
  /* 11724d15 push esi */
  push32((uint32_t)(ESI));
  /* 11724d16 push edi */
  push32((uint32_t)(EDI));
  /* 11724d17 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11724d1e:;
  /* 11724d1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11724d21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11724d24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724d27 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11724d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724d2c je 0x11724d8e */
  if (C.zf) goto L_11724d8e;
  /* 11724d2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724d31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724d33 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11724d35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724d38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11724d3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724d41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724d44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11724d47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724d49 je 0x11724d8c */
  if (C.zf) goto L_11724d8c;
L_11724d4b:;
  /* 11724d4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11724d4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11724d53 push eax */
  push32((uint32_t)(EAX));
  /* 11724d54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724d57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11724d59 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11724d5c push edx */
  push32((uint32_t)(EDX));
  /* 11724d5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11724d60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724d63 push eax */
  push32((uint32_t)(EAX));
  /* 11724d64 push 0x1174d7dc */
  push32((uint32_t)(0x1174d7dcu));
  /* 11724d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11724d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11724d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11724d71 call 0x11723380 */
  push32(0x11724d76u); f_11723380();
  /* 11724d76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724d79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724d7c jne 0x11724d7f */
  if (!C.zf) goto L_11724d7f;
  /* 11724d7e int3  */
  x86_unimpl("int3 @ 0x11724d7e");
L_11724d7f:;
  /* 11724d7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724d81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724d83 jne 0x11724d4b */
  if (!C.zf) goto L_11724d4b;
  /* 11724d85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11724d8c:;
  /* 11724d8c jmp 0x11724d1e */
  goto L_11724d1e;
L_11724d8e:;
  /* 11724d8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11724d91 pop edi */
  EDI = (pop32());
  /* 11724d92 pop esi */
  ESI = (pop32());
  /* 11724d93 pop ebx */
  EBX = (pop32());
  /* 11724d94 mov esp, ebp */
  ESP = (EBP);
  /* 11724d96 pop ebp */
  EBP = (pop32());
  /* 11724d97 ret  */
  ESPCHK(0x11724d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x11724da0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11724da0(void) {
  FTRACE(0x11724da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11724da0 push ebp */
  push32((uint32_t)(EBP));
  /* 11724da1 mov ebp, esp */
  EBP = (ESP);
  /* 11724da3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11724da6 push ebx */
  push32((uint32_t)(EBX));
  /* 11724da7 push esi */
  push32((uint32_t)(ESI));
  /* 11724da8 push edi */
  push32((uint32_t)(EDI));
  /* 11724da9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11724db0 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 11724db5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11724db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724dba jne 0x11724dc6 */
  if (!C.zf) goto L_11724dc6;
  /* 11724dbc mov eax, 1 */
  EAX = (0x1u);
  /* 11724dc1 jmp 0x117250f8 */
  goto L_117250f8;
L_11724dc6:;
  /* 11724dc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724dc8 call 0x11723b00 */
  push32(0x11724dcdu); f_11723b00();
  /* 11724dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724dd0 call 0x11729070 */
  push32(0x11724dd5u); f_11729070();
  /* 11724dd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11724dd8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724ddc je 0x11724ee9 */
  if (C.zf) goto L_11724ee9;
  /* 11724de2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724de6 je 0x11724ee9 */
  if (C.zf) goto L_11724ee9;
  /* 11724dec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11724def mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11724df2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11724df5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724df8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11724dfb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724dff ja 0x11724eb2 */
  if ((!C.cf&&!C.zf)) goto L_11724eb2;
  /* 11724e05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11724e08 jmp dword ptr [eax*4 + 0x117250ff] */
  switch (EAX) {
    case 0: goto L_11724e8a;
    case 1: goto L_11724e62;
    case 2: goto L_11724e3a;
    case 3: goto L_11724e0f;
    default: x86_unimpl("switch@0x11724e08 out of table"); return;
  }
L_11724e0f:;
  /* 11724e0f push 0x1174d930 */
  push32((uint32_t)(0x1174d930u));
  /* 11724e14 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11724e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e21 call 0x11723380 */
  push32(0x11724e26u); f_11723380();
  /* 11724e26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724e29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724e2c jne 0x11724e2f */
  if (!C.zf) goto L_11724e2f;
  /* 11724e2e int3  */
  x86_unimpl("int3 @ 0x11724e2e");
L_11724e2f:;
  /* 11724e2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724e31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724e33 jne 0x11724e0f */
  if (!C.zf) goto L_11724e0f;
  /* 11724e35 jmp 0x11724ed8 */
  goto L_11724ed8;
L_11724e3a:;
  /* 11724e3a push 0x1174d90c */
  push32((uint32_t)(0x1174d90cu));
  /* 11724e3f push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11724e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e4c call 0x11723380 */
  push32(0x11724e51u); f_11723380();
  /* 11724e51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724e54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724e57 jne 0x11724e5a */
  if (!C.zf) goto L_11724e5a;
  /* 11724e59 int3  */
  x86_unimpl("int3 @ 0x11724e59");
L_11724e5a:;
  /* 11724e5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11724e5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11724e5e jne 0x11724e3a */
  if (!C.zf) goto L_11724e3a;
  /* 11724e60 jmp 0x11724ed8 */
  goto L_11724ed8;
L_11724e62:;
  /* 11724e62 push 0x1174d8e8 */
  push32((uint32_t)(0x1174d8e8u));
  /* 11724e67 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11724e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e74 call 0x11723380 */
  push32(0x11724e79u); f_11723380();
  /* 11724e79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724e7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724e7f jne 0x11724e82 */
  if (!C.zf) goto L_11724e82;
  /* 11724e81 int3  */
  x86_unimpl("int3 @ 0x11724e81");
L_11724e82:;
  /* 11724e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724e84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724e86 jne 0x11724e62 */
  if (!C.zf) goto L_11724e62;
  /* 11724e88 jmp 0x11724ed8 */
  goto L_11724ed8;
L_11724e8a:;
  /* 11724e8a push 0x1174d8c4 */
  push32((uint32_t)(0x1174d8c4u));
  /* 11724e8f push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11724e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11724e9c call 0x11723380 */
  push32(0x11724ea1u); f_11723380();
  /* 11724ea1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724ea4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724ea7 jne 0x11724eaa */
  if (!C.zf) goto L_11724eaa;
  /* 11724ea9 int3  */
  x86_unimpl("int3 @ 0x11724ea9");
L_11724eaa:;
  /* 11724eaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11724eac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11724eae jne 0x11724e8a */
  if (!C.zf) goto L_11724e8a;
  /* 11724eb0 jmp 0x11724ed8 */
  goto L_11724ed8;
L_11724eb2:;
  /* 11724eb2 push 0x1174d898 */
  push32((uint32_t)(0x1174d898u));
  /* 11724eb7 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11724ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ec4 call 0x11723380 */
  push32(0x11724ec9u); f_11723380();
  /* 11724ec9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724ecc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724ecf jne 0x11724ed2 */
  if (!C.zf) goto L_11724ed2;
  /* 11724ed1 int3  */
  x86_unimpl("int3 @ 0x11724ed1");
L_11724ed2:;
  /* 11724ed2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11724ed4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11724ed6 jne 0x11724eb2 */
  if (!C.zf) goto L_11724eb2;
L_11724ed8:;
  /* 11724ed8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11724eda call 0x11723ba0 */
  push32(0x11724edfu); f_11723ba0();
  /* 11724edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724ee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724ee4 jmp 0x117250f8 */
  goto L_117250f8;
L_11724ee9:;
  /* 11724ee9 mov eax, dword ptr [0x11752a68] */
  EAX = (r32((uint32_t)(0x11752a68)));
  /* 11724eee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11724ef1 jmp 0x11724efb */
  goto L_11724efb;
L_11724ef3:;
  /* 11724ef3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724ef6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11724ef8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11724efb:;
  /* 11724efb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724eff je 0x117250eb */
  if (C.zf) goto L_117250eb;
  /* 11724f05 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11724f0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f0f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11724f12 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11724f18 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724f1b je 0x11724f40 */
  if (C.zf) goto L_11724f40;
  /* 11724f1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f20 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724f24 je 0x11724f40 */
  if (C.zf) goto L_11724f40;
  /* 11724f26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f29 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11724f2c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11724f32 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724f35 je 0x11724f40 */
  if (C.zf) goto L_11724f40;
  /* 11724f37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f3a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724f3e jne 0x11724f58 */
  if (!C.zf) goto L_11724f58;
L_11724f40:;
  /* 11724f40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f43 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11724f46 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11724f4c mov edx, dword ptr [ecx*4 + 0x11750e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750e4c)));
  /* 11724f53 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11724f56 jmp 0x11724f5f */
  goto L_11724f5f;
L_11724f58:;
  /* 11724f58 mov dword ptr [ebp - 0x14], 0x1174d890 */
  w32((uint32_t)(EBP + -0x14), (0x1174d890u));
L_11724f5f:;
  /* 11724f5f push 4 */
  push32((uint32_t)(0x4u));
  /* 11724f61 mov al, byte ptr [0x11750e48] */
  AL = (r8((uint32_t)(0x11750e48)));
  /* 11724f66 push eax */
  push32((uint32_t)(EAX));
  /* 11724f67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f6a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724f6d push ecx */
  push32((uint32_t)(ECX));
  /* 11724f6e call 0x11724d10 */
  push32(0x11724f73u); f_11724d10();
  /* 11724f73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724f76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724f78 jne 0x11724fb4 */
  if (!C.zf) goto L_11724fb4;
L_11724f7a:;
  /* 11724f7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f7d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724f80 push edx */
  push32((uint32_t)(EDX));
  /* 11724f81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724f84 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11724f87 push ecx */
  push32((uint32_t)(ECX));
  /* 11724f88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11724f8b push edx */
  push32((uint32_t)(EDX));
  /* 11724f8c push 0x1174d794 */
  push32((uint32_t)(0x1174d794u));
  /* 11724f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724f99 call 0x11723380 */
  push32(0x11724f9eu); f_11723380();
  /* 11724f9e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724fa1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11724fa4 jne 0x11724fa7 */
  if (!C.zf) goto L_11724fa7;
  /* 11724fa6 int3  */
  x86_unimpl("int3 @ 0x11724fa6");
L_11724fa7:;
  /* 11724fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11724fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724fab jne 0x11724f7a */
  if (!C.zf) goto L_11724f7a;
  /* 11724fad mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11724fb4:;
  /* 11724fb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11724fb6 mov cl, byte ptr [0x11750e48] */
  CL = (r8((uint32_t)(0x11750e48)));
  /* 11724fbc push ecx */
  push32((uint32_t)(ECX));
  /* 11724fbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724fc0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11724fc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724fc6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11724fca push edx */
  push32((uint32_t)(EDX));
  /* 11724fcb call 0x11724d10 */
  push32(0x11724fd0u); f_11724d10();
  /* 11724fd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11724fd5 jne 0x11725011 */
  if (!C.zf) goto L_11725011;
L_11724fd7:;
  /* 11724fd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724fda add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11724fdd push eax */
  push32((uint32_t)(EAX));
  /* 11724fde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11724fe1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11724fe4 push edx */
  push32((uint32_t)(EDX));
  /* 11724fe5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11724fe8 push eax */
  push32((uint32_t)(EAX));
  /* 11724fe9 push 0x1174d768 */
  push32((uint32_t)(0x1174d768u));
  /* 11724fee push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11724ff6 call 0x11723380 */
  push32(0x11724ffbu); f_11723380();
  /* 11724ffb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11724ffe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725001 jne 0x11725004 */
  if (!C.zf) goto L_11725004;
  /* 11725003 int3  */
  x86_unimpl("int3 @ 0x11725003");
L_11725004:;
  /* 11725004 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11725006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11725008 jne 0x11724fd7 */
  if (!C.zf) goto L_11724fd7;
  /* 1172500a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11725011:;
  /* 11725011 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725014 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725018 jne 0x1172506a */
  if (!C.zf) goto L_1172506a;
  /* 1172501a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172501d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11725020 push ecx */
  push32((uint32_t)(ECX));
  /* 11725021 mov dl, byte ptr [0x11750e49] */
  DL = (r8((uint32_t)(0x11750e49)));
  /* 11725027 push edx */
  push32((uint32_t)(EDX));
  /* 11725028 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172502b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172502e push eax */
  push32((uint32_t)(EAX));
  /* 1172502f call 0x11724d10 */
  push32(0x11725034u); f_11724d10();
  /* 11725034 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725039 jne 0x1172506a */
  if (!C.zf) goto L_1172506a;
L_1172503b:;
  /* 1172503b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172503e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725041 push ecx */
  push32((uint32_t)(ECX));
  /* 11725042 push 0x1174d864 */
  push32((uint32_t)(0x1174d864u));
  /* 11725047 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725049 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172504b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172504d push 0 */
  push32((uint32_t)(0x0u));
  /* 1172504f call 0x11723380 */
  push32(0x11725054u); f_11723380();
  /* 11725054 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725057 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172505a jne 0x1172505d */
  if (!C.zf) goto L_1172505d;
  /* 1172505c int3  */
  x86_unimpl("int3 @ 0x1172505c");
L_1172505d:;
  /* 1172505d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172505f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11725061 jne 0x1172503b */
  if (!C.zf) goto L_1172503b;
  /* 11725063 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1172506a:;
  /* 1172506a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172506e jne 0x117250e6 */
  if (!C.zf) goto L_117250e6;
  /* 11725070 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725073 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725077 je 0x117250ac */
  if (C.zf) goto L_117250ac;
L_11725079:;
  /* 11725079 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172507c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172507f push edx */
  push32((uint32_t)(EDX));
  /* 11725080 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725083 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11725086 push ecx */
  push32((uint32_t)(ECX));
  /* 11725087 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172508a push edx */
  push32((uint32_t)(EDX));
  /* 1172508b push 0x1174d844 */
  push32((uint32_t)(0x1174d844u));
  /* 11725090 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725092 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725096 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725098 call 0x11723380 */
  push32(0x1172509du); f_11723380();
  /* 1172509d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117250a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117250a3 jne 0x117250a6 */
  if (!C.zf) goto L_117250a6;
  /* 117250a5 int3  */
  x86_unimpl("int3 @ 0x117250a5");
L_117250a6:;
  /* 117250a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117250a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117250aa jne 0x11725079 */
  if (!C.zf) goto L_11725079;
L_117250ac:;
  /* 117250ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117250af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117250b2 push edx */
  push32((uint32_t)(EDX));
  /* 117250b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117250b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117250b9 push eax */
  push32((uint32_t)(EAX));
  /* 117250ba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117250bd push ecx */
  push32((uint32_t)(ECX));
  /* 117250be push 0x1174d818 */
  push32((uint32_t)(0x1174d818u));
  /* 117250c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117250c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117250c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117250c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117250cb call 0x11723380 */
  push32(0x117250d0u); f_11723380();
  /* 117250d0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117250d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117250d6 jne 0x117250d9 */
  if (!C.zf) goto L_117250d9;
  /* 117250d8 int3  */
  x86_unimpl("int3 @ 0x117250d8");
L_117250d9:;
  /* 117250d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117250db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117250dd jne 0x117250ac */
  if (!C.zf) goto L_117250ac;
  /* 117250df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117250e6:;
  /* 117250e6 jmp 0x11724ef3 */
  goto L_11724ef3;
L_117250eb:;
  /* 117250eb push 9 */
  push32((uint32_t)(0x9u));
  /* 117250ed call 0x11723ba0 */
  push32(0x117250f2u); f_11723ba0();
  /* 117250f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117250f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117250f8:;
  /* 117250f8 pop edi */
  EDI = (pop32());
  /* 117250f9 pop esi */
  ESI = (pop32());
  /* 117250fa pop ebx */
  EBX = (pop32());
  /* 117250fb mov esp, ebp */
  ESP = (EBP);
  /* 117250fd pop ebp */
  EBP = (pop32());
  /* 117250fe ret  */
  ESPCHK(0x11724da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x11725110 (34 bytes, 13 insns) */
void f_11725110(void) {
  FTRACE(0x11725110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725110 push ebp */
  push32((uint32_t)(EBP));
  /* 11725111 mov ebp, esp */
  EBP = (ESP);
  /* 11725113 push ecx */
  push32((uint32_t)(ECX));
  /* 11725114 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 11725119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172511c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725120 je 0x1172512b */
  if (C.zf) goto L_1172512b;
  /* 11725122 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725125 mov dword ptr [0x11750e3c], ecx */
  w32((uint32_t)(0x11750e3c), (ECX));
L_1172512b:;
  /* 1172512b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172512e mov esp, ebp */
  ESP = (EBP);
  /* 11725130 pop ebp */
  EBP = (pop32());
  /* 11725131 ret  */
  ESPCHK(0x11725110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005140 @ 0x11725140 (103 bytes, 38 insns) */
void f_11725140(void) {
  FTRACE(0x11725140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725140 push ebp */
  push32((uint32_t)(EBP));
  /* 11725141 mov ebp, esp */
  EBP = (ESP);
  /* 11725143 push ecx */
  push32((uint32_t)(ECX));
  /* 11725144 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 11725149 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1172514c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172514e jne 0x11725152 */
  if (!C.zf) goto L_11725152;
  /* 11725150 jmp 0x117251a3 */
  goto L_117251a3;
L_11725152:;
  /* 11725152 push 9 */
  push32((uint32_t)(0x9u));
  /* 11725154 call 0x11723b00 */
  push32(0x11725159u); f_11723b00();
  /* 11725159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172515c mov ecx, dword ptr [0x11752a68] */
  ECX = (r32((uint32_t)(0x11752a68)));
  /* 11725162 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11725165 jmp 0x1172516f */
  goto L_1172516f;
L_11725167:;
  /* 11725167 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172516a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172516c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172516f:;
  /* 1172516f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725173 je 0x11725199 */
  if (C.zf) goto L_11725199;
  /* 11725175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725178 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1172517b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11725181 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725184 jne 0x11725197 */
  if (!C.zf) goto L_11725197;
  /* 11725186 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725189 push eax */
  push32((uint32_t)(EAX));
  /* 1172518a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172518d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725190 push ecx */
  push32((uint32_t)(ECX));
  /* 11725191 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11725194u);
  /* 11725194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11725197:;
  /* 11725197 jmp 0x11725167 */
  goto L_11725167;
L_11725199:;
  /* 11725199 push 9 */
  push32((uint32_t)(0x9u));
  /* 1172519b call 0x11723ba0 */
  push32(0x117251a0u); f_11723ba0();
  /* 117251a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117251a3:;
  /* 117251a3 mov esp, ebp */
  ESP = (EBP);
  /* 117251a5 pop ebp */
  EBP = (pop32());
  /* 117251a6 ret  */
  ESPCHK(0x11725140u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x117251b0 (75 bytes, 28 insns) */
void f_117251b0(void) {
  FTRACE(0x117251b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117251b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117251b1 mov ebp, esp */
  EBP = (ESP);
  /* 117251b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117251b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117251b8 je 0x117251ed */
  if (C.zf) goto L_117251ed;
  /* 117251ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117251bd push eax */
  push32((uint32_t)(EAX));
  /* 117251be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117251c1 push ecx */
  push32((uint32_t)(ECX));
  /* 117251c2 call dword ptr [0x1175531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175531c))), 0x117251c8u);
  /* 117251c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117251ca jne 0x117251ed */
  if (!C.zf) goto L_117251ed;
  /* 117251cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117251d0 je 0x117251e4 */
  if (C.zf) goto L_117251e4;
  /* 117251d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117251d5 push edx */
  push32((uint32_t)(EDX));
  /* 117251d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117251d9 push eax */
  push32((uint32_t)(EAX));
  /* 117251da call dword ptr [0x11755318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755318))), 0x117251e0u);
  /* 117251e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117251e2 jne 0x117251ed */
  if (!C.zf) goto L_117251ed;
L_117251e4:;
  /* 117251e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117251eb jmp 0x117251f4 */
  goto L_117251f4;
L_117251ed:;
  /* 117251ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117251f4:;
  /* 117251f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117251f7 mov esp, ebp */
  ESP = (EBP);
  /* 117251f9 pop ebp */
  EBP = (pop32());
  /* 117251fa ret  */
  ESPCHK(0x117251b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x11725200 (134 bytes, 50 insns) */
void f_11725200(void) {
  FTRACE(0x11725200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725200 push ebp */
  push32((uint32_t)(EBP));
  /* 11725201 mov ebp, esp */
  EBP = (ESP);
  /* 11725203 push ecx */
  push32((uint32_t)(ECX));
  /* 11725204 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725208 jne 0x1172520e */
  if (!C.zf) goto L_1172520e;
  /* 1172520a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172520c jmp 0x11725282 */
  goto L_11725282;
L_1172520e:;
  /* 1172520e push 1 */
  push32((uint32_t)(0x1u));
  /* 11725210 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11725212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725215 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725218 push eax */
  push32((uint32_t)(EAX));
  /* 11725219 call 0x117251b0 */
  push32(0x1172521eu); f_117251b0();
  /* 1172521e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725223 jne 0x11725229 */
  if (!C.zf) goto L_11725229;
  /* 11725225 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11725227 jmp 0x11725282 */
  goto L_11725282;
L_11725229:;
  /* 11725229 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172522c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172522f push ecx */
  push32((uint32_t)(ECX));
  /* 11725230 call 0x11729190 */
  push32(0x11725235u); f_11729190();
  /* 11725235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172523b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172523f je 0x11725256 */
  if (C.zf) goto L_11725256;
  /* 11725241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725244 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725247 push edx */
  push32((uint32_t)(EDX));
  /* 11725248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172524b push eax */
  push32((uint32_t)(EAX));
  /* 1172524c call 0x117291f0 */
  push32(0x11725251u); f_117291f0();
  /* 11725251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725254 jmp 0x11725282 */
  goto L_11725282;
L_11725256:;
  /* 11725256 mov ecx, dword ptr [0x11752a78] */
  ECX = (r32((uint32_t)(0x11752a78)));
  /* 1172525c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11725262 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11725264 je 0x1172526d */
  if (C.zf) goto L_1172526d;
  /* 11725266 mov eax, 1 */
  EAX = (0x1u);
  /* 1172526b jmp 0x11725282 */
  goto L_11725282;
L_1172526d:;
  /* 1172526d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725270 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725273 push edx */
  push32((uint32_t)(EDX));
  /* 11725274 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725276 mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 1172527b push eax */
  push32((uint32_t)(EAX));
  /* 1172527c call dword ptr [0x11755320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755320))), 0x11725282u);
L_11725282:;
  /* 11725282 mov esp, ebp */
  ESP = (EBP);
  /* 11725284 pop ebp */
  EBP = (pop32());
  /* 11725285 ret  */
  ESPCHK(0x11725200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005290 @ 0x11725290 (227 bytes, 80 insns) */
void f_11725290(void) {
  FTRACE(0x11725290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725290 push ebp */
  push32((uint32_t)(EBP));
  /* 11725291 mov ebp, esp */
  EBP = (ESP);
  /* 11725293 push ecx */
  push32((uint32_t)(ECX));
  /* 11725294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725297 push eax */
  push32((uint32_t)(EAX));
  /* 11725298 call 0x11725200 */
  push32(0x1172529du); f_11725200();
  /* 1172529d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117252a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117252a2 jne 0x117252ab */
  if (!C.zf) goto L_117252ab;
  /* 117252a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117252a6 jmp 0x1172536f */
  goto L_1172536f;
L_117252ab:;
  /* 117252ab push 9 */
  push32((uint32_t)(0x9u));
  /* 117252ad call 0x11723b00 */
  push32(0x117252b2u); f_11723b00();
  /* 117252b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117252b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117252b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117252bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117252be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117252c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117252c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117252c9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117252cc je 0x117252f0 */
  if (C.zf) goto L_117252f0;
  /* 117252ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117252d1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117252d5 je 0x117252f0 */
  if (C.zf) goto L_117252f0;
  /* 117252d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117252da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117252dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117252e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117252e5 je 0x117252f0 */
  if (C.zf) goto L_117252f0;
  /* 117252e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117252ea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117252ee jne 0x11725363 */
  if (!C.zf) goto L_11725363;
L_117252f0:;
  /* 117252f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117252f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117252f5 push edx */
  push32((uint32_t)(EDX));
  /* 117252f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117252f9 push eax */
  push32((uint32_t)(EAX));
  /* 117252fa call 0x117251b0 */
  push32(0x117252ffu); f_117251b0();
  /* 117252ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725304 je 0x11725363 */
  if (C.zf) goto L_11725363;
  /* 11725306 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725309 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1172530c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172530f jne 0x11725363 */
  if (!C.zf) goto L_11725363;
  /* 11725311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725314 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11725317 cmp ecx, dword ptr [0x11750e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11750e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172531d jg 0x11725363 */
  if ((!C.zf&&C.sf==C.of)) goto L_11725363;
  /* 1172531f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725323 je 0x11725330 */
  if (C.zf) goto L_11725330;
  /* 11725325 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172532b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1172532e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11725330:;
  /* 11725330 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725334 je 0x11725341 */
  if (C.zf) goto L_11725341;
  /* 11725336 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172533c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172533f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11725341:;
  /* 11725341 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725345 je 0x11725352 */
  if (C.zf) goto L_11725352;
  /* 11725347 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172534a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172534d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11725350 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11725352:;
  /* 11725352 push 9 */
  push32((uint32_t)(0x9u));
  /* 11725354 call 0x11723ba0 */
  push32(0x11725359u); f_11723ba0();
  /* 11725359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172535c mov eax, 1 */
  EAX = (0x1u);
  /* 11725361 jmp 0x1172536f */
  goto L_1172536f;
L_11725363:;
  /* 11725363 push 9 */
  push32((uint32_t)(0x9u));
  /* 11725365 call 0x11723ba0 */
  push32(0x1172536au); f_11723ba0();
  /* 1172536a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172536d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172536f:;
  /* 1172536f mov esp, ebp */
  ESP = (EBP);
  /* 11725371 pop ebp */
  EBP = (pop32());
  /* 11725372 ret  */
  ESPCHK(0x11725290u, _esp0);
  ESP += 4; return;
}

/* FUN_10005380 @ 0x11725380 (28 bytes, 11 insns) */
void f_11725380(void) {
  FTRACE(0x11725380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725380 push ebp */
  push32((uint32_t)(EBP));
  /* 11725381 mov ebp, esp */
  EBP = (ESP);
  /* 11725383 push ecx */
  push32((uint32_t)(ECX));
  /* 11725384 mov eax, dword ptr [0x11754520] */
  EAX = (r32((uint32_t)(0x11754520)));
  /* 11725389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172538c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172538f mov dword ptr [0x11754520], ecx */
  w32((uint32_t)(0x11754520), (ECX));
  /* 11725395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725398 mov esp, ebp */
  ESP = (EBP);
  /* 1172539a pop ebp */
  EBP = (pop32());
  /* 1172539b ret  */
  ESPCHK(0x11725380u, _esp0);
  ESP += 4; return;
}

/* FUN_100053a0 @ 0x117253a0 (362 bytes, 116 insns) */
void f_117253a0(void) {
  FTRACE(0x117253a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117253a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117253a1 mov ebp, esp */
  EBP = (ESP);
  /* 117253a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117253a6 push ebx */
  push32((uint32_t)(EBX));
  /* 117253a7 push esi */
  push32((uint32_t)(ESI));
  /* 117253a8 push edi */
  push32((uint32_t)(EDI));
  /* 117253a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117253ad jne 0x117253da */
  if (!C.zf) goto L_117253da;
L_117253af:;
  /* 117253af push 0x1174d978 */
  push32((uint32_t)(0x1174d978u));
  /* 117253b4 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 117253b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117253bb push 0 */
  push32((uint32_t)(0x0u));
  /* 117253bd push 0 */
  push32((uint32_t)(0x0u));
  /* 117253bf push 0 */
  push32((uint32_t)(0x0u));
  /* 117253c1 call 0x11723380 */
  push32(0x117253c6u); f_11723380();
  /* 117253c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117253c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117253cc jne 0x117253cf */
  if (!C.zf) goto L_117253cf;
  /* 117253ce int3  */
  x86_unimpl("int3 @ 0x117253ce");
L_117253cf:;
  /* 117253cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117253d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117253d3 jne 0x117253af */
  if (!C.zf) goto L_117253af;
  /* 117253d5 jmp 0x11725503 */
  goto L_11725503;
L_117253da:;
  /* 117253da push 9 */
  push32((uint32_t)(0x9u));
  /* 117253dc call 0x11723b00 */
  push32(0x117253e1u); f_11723b00();
  /* 117253e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117253e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117253e7 mov edx, dword ptr [0x11752a68] */
  EDX = (r32((uint32_t)(0x11752a68)));
  /* 117253ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117253ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117253f6 jmp 0x11725401 */
  goto L_11725401;
L_117253f8:;
  /* 117253f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117253fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117253fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11725401:;
  /* 11725401 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725405 jge 0x11725425 */
  if ((C.sf==C.of)) goto L_11725425;
  /* 11725407 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172540a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172540d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11725415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725418 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172541b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11725423 jmp 0x117253f8 */
  goto L_117253f8;
L_11725425:;
  /* 11725425 mov edx, dword ptr [0x11752a68] */
  EDX = (r32((uint32_t)(0x11752a68)));
  /* 1172542b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1172542e jmp 0x11725438 */
  goto L_11725438;
L_11725430:;
  /* 11725430 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725433 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11725435 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11725438:;
  /* 11725438 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172543c je 0x117254e1 */
  if (C.zf) goto L_117254e1;
  /* 11725442 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725445 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11725448 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172544d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172544f jl 0x117254b7 */
  if ((C.sf!=C.of)) goto L_117254b7;
  /* 11725451 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725454 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11725457 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172545d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725460 jge 0x117254b7 */
  if ((C.sf==C.of)) goto L_117254b7;
  /* 11725462 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725465 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11725468 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172546e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725471 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11725475 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725478 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172547b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1172547e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11725484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725487 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1172548b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172548e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11725491 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11725496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725499 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1172549d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117254a0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117254a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117254a6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 117254a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117254ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117254b1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 117254b5 jmp 0x117254dc */
  goto L_117254dc;
L_117254b7:;
  /* 117254b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117254ba push edx */
  push32((uint32_t)(EDX));
  /* 117254bb push 0x1174d954 */
  push32((uint32_t)(0x1174d954u));
  /* 117254c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117254c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117254c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117254c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117254c8 call 0x11723380 */
  push32(0x117254cdu); f_11723380();
  /* 117254cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117254d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117254d3 jne 0x117254d6 */
  if (!C.zf) goto L_117254d6;
  /* 117254d5 int3  */
  x86_unimpl("int3 @ 0x117254d5");
L_117254d6:;
  /* 117254d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117254d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117254da jne 0x117254b7 */
  if (!C.zf) goto L_117254b7;
L_117254dc:;
  /* 117254dc jmp 0x11725430 */
  goto L_11725430;
L_117254e1:;
  /* 117254e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117254e4 mov edx, dword ptr [0x11752a70] */
  EDX = (r32((uint32_t)(0x11752a70)));
  /* 117254ea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 117254ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117254f0 mov ecx, dword ptr [0x11752a64] */
  ECX = (r32((uint32_t)(0x11752a64)));
  /* 117254f6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 117254f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 117254fb call 0x11723ba0 */
  push32(0x11725500u); f_11723ba0();
  /* 11725500 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11725503:;
  /* 11725503 pop edi */
  EDI = (pop32());
  /* 11725504 pop esi */
  ESI = (pop32());
  /* 11725505 pop ebx */
  EBX = (pop32());
  /* 11725506 mov esp, ebp */
  ESP = (EBP);
  /* 11725508 pop ebp */
  EBP = (pop32());
  /* 11725509 ret  */
  ESPCHK(0x117253a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005510 @ 0x11725510 (291 bytes, 95 insns) */
void f_11725510(void) {
  FTRACE(0x11725510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725510 push ebp */
  push32((uint32_t)(EBP));
  /* 11725511 mov ebp, esp */
  EBP = (ESP);
  /* 11725513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725516 push ebx */
  push32((uint32_t)(EBX));
  /* 11725517 push esi */
  push32((uint32_t)(ESI));
  /* 11725518 push edi */
  push32((uint32_t)(EDI));
  /* 11725519 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11725520 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725524 je 0x11725532 */
  if (C.zf) goto L_11725532;
  /* 11725526 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172552a je 0x11725532 */
  if (C.zf) goto L_11725532;
  /* 1172552c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725530 jne 0x11725560 */
  if (!C.zf) goto L_11725560;
L_11725532:;
  /* 11725532 push 0x1174d9a0 */
  push32((uint32_t)(0x1174d9a0u));
  /* 11725537 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 1172553c push 0 */
  push32((uint32_t)(0x0u));
  /* 1172553e push 0 */
  push32((uint32_t)(0x0u));
  /* 11725540 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725542 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725544 call 0x11723380 */
  push32(0x11725549u); f_11723380();
  /* 11725549 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172554c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172554f jne 0x11725552 */
  if (!C.zf) goto L_11725552;
  /* 11725551 int3  */
  x86_unimpl("int3 @ 0x11725551");
L_11725552:;
  /* 11725552 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11725554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725556 jne 0x11725532 */
  if (!C.zf) goto L_11725532;
  /* 11725558 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172555b jmp 0x1172562c */
  goto L_1172562c;
L_11725560:;
  /* 11725560 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11725567 jmp 0x11725572 */
  goto L_11725572;
L_11725569:;
  /* 11725569 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172556c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172556f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11725572:;
  /* 11725572 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725576 jge 0x117255fc */
  if ((C.sf==C.of)) goto L_117255fc;
  /* 1172557c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172557f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725585 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11725588 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1172558c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725593 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725596 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1172559a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172559d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117255a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117255a3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117255a6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 117255aa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117255ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117255b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117255b4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 117255b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117255bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117255be cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117255c3 jne 0x117255d2 */
  if (!C.zf) goto L_117255d2;
  /* 117255c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117255c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117255cb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117255d0 je 0x117255f7 */
  if (C.zf) goto L_117255f7;
L_117255d2:;
  /* 117255d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117255d6 je 0x117255f7 */
  if (C.zf) goto L_117255f7;
  /* 117255d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117255dc jne 0x117255f0 */
  if (!C.zf) goto L_117255f0;
  /* 117255de cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117255e2 jne 0x117255f7 */
  if (!C.zf) goto L_117255f7;
  /* 117255e4 mov eax, dword ptr [0x11750e3c] */
  EAX = (r32((uint32_t)(0x11750e3c)));
  /* 117255e9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 117255ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117255ee je 0x117255f7 */
  if (C.zf) goto L_117255f7;
L_117255f0:;
  /* 117255f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_117255f7:;
  /* 117255f7 jmp 0x11725569 */
  goto L_11725569;
L_117255fc:;
  /* 117255fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117255ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725602 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11725605 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725608 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172560b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1172560e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725611 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725614 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11725617 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172561a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172561d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11725620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725623 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11725629 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1172562c:;
  /* 1172562c pop edi */
  EDI = (pop32());
  /* 1172562d pop esi */
  ESI = (pop32());
  /* 1172562e pop ebx */
  EBX = (pop32());
  /* 1172562f mov esp, ebp */
  ESP = (EBP);
  /* 11725631 pop ebp */
  EBP = (pop32());
  /* 11725632 ret  */
  ESPCHK(0x11725510u, _esp0);
  ESP += 4; return;
}

/* FUN_10005640 @ 0x11725640 (697 bytes, 253 insns) */
void f_11725640(void) {
  FTRACE(0x11725640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725640 push ebp */
  push32((uint32_t)(EBP));
  /* 11725641 mov ebp, esp */
  EBP = (ESP);
  /* 11725643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725646 push ebx */
  push32((uint32_t)(EBX));
  /* 11725647 push esi */
  push32((uint32_t)(ESI));
  /* 11725648 push edi */
  push32((uint32_t)(EDI));
  /* 11725649 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11725650 push 9 */
  push32((uint32_t)(0x9u));
  /* 11725652 call 0x11723b00 */
  push32(0x11725657u); f_11723b00();
  /* 11725657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172565a:;
  /* 1172565a push 0x1174da98 */
  push32((uint32_t)(0x1174da98u));
  /* 1172565f push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11725664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725666 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172566a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172566c call 0x11723380 */
  push32(0x11725671u); f_11723380();
  /* 11725671 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725674 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725677 jne 0x1172567a */
  if (!C.zf) goto L_1172567a;
  /* 11725679 int3  */
  x86_unimpl("int3 @ 0x11725679");
L_1172567a:;
  /* 1172567a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172567c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172567e jne 0x1172565a */
  if (!C.zf) goto L_1172565a;
  /* 11725680 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725684 je 0x1172568e */
  if (C.zf) goto L_1172568e;
  /* 11725686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725689 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172568b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1172568e:;
  /* 1172568e mov eax, dword ptr [0x11752a68] */
  EAX = (r32((uint32_t)(0x11752a68)));
  /* 11725693 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11725696 jmp 0x117256a0 */
  goto L_117256a0;
L_11725698:;
  /* 11725698 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172569b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172569d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117256a0:;
  /* 117256a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117256a4 je 0x117258c2 */
  if (C.zf) goto L_117258c2;
  /* 117256aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117256ad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117256b0 je 0x117258c2 */
  if (C.zf) goto L_117258c2;
  /* 117256b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117256b9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117256bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117256c2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117256c5 je 0x117256f4 */
  if (C.zf) goto L_117256f4;
  /* 117256c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117256ca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117256cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117256d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117256d5 je 0x117256f4 */
  if (C.zf) goto L_117256f4;
  /* 117256d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117256da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117256dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117256e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117256e5 jne 0x117256f9 */
  if (!C.zf) goto L_117256f9;
  /* 117256e7 mov ecx, dword ptr [0x11750e3c] */
  ECX = (r32((uint32_t)(0x11750e3c)));
  /* 117256ed and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 117256f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117256f2 jne 0x117256f9 */
  if (!C.zf) goto L_117256f9;
L_117256f4:;
  /* 117256f4 jmp 0x117258bd */
  goto L_117258bd;
L_117256f9:;
  /* 117256f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117256fc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725700 je 0x11725772 */
  if (C.zf) goto L_11725772;
  /* 11725702 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725704 push 1 */
  push32((uint32_t)(0x1u));
  /* 11725706 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725709 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172570c push ecx */
  push32((uint32_t)(ECX));
  /* 1172570d call 0x117251b0 */
  push32(0x11725712u); f_117251b0();
  /* 11725712 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725717 jne 0x11725743 */
  if (!C.zf) goto L_11725743;
L_11725719:;
  /* 11725719 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172571c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1172571f push eax */
  push32((uint32_t)(EAX));
  /* 11725720 push 0x1174da84 */
  push32((uint32_t)(0x1174da84u));
  /* 11725725 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725727 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725729 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172572b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172572d call 0x11723380 */
  push32(0x11725732u); f_11723380();
  /* 11725732 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725735 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725738 jne 0x1172573b */
  if (!C.zf) goto L_1172573b;
  /* 1172573a int3  */
  x86_unimpl("int3 @ 0x1172573a");
L_1172573b:;
  /* 1172573b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172573d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172573f jne 0x11725719 */
  if (!C.zf) goto L_11725719;
  /* 11725741 jmp 0x11725772 */
  goto L_11725772;
L_11725743:;
  /* 11725743 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725746 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11725749 push eax */
  push32((uint32_t)(EAX));
  /* 1172574a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172574d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11725750 push edx */
  push32((uint32_t)(EDX));
  /* 11725751 push 0x1174da78 */
  push32((uint32_t)(0x1174da78u));
  /* 11725756 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172575a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172575c push 0 */
  push32((uint32_t)(0x0u));
  /* 1172575e call 0x11723380 */
  push32(0x11725763u); f_11723380();
  /* 11725763 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725766 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725769 jne 0x1172576c */
  if (!C.zf) goto L_1172576c;
  /* 1172576b int3  */
  x86_unimpl("int3 @ 0x1172576b");
L_1172576c:;
  /* 1172576c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172576e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725770 jne 0x11725743 */
  if (!C.zf) goto L_11725743;
L_11725772:;
  /* 11725772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725775 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11725778 push edx */
  push32((uint32_t)(EDX));
  /* 11725779 push 0x1174da70 */
  push32((uint32_t)(0x1174da70u));
  /* 1172577e push 0 */
  push32((uint32_t)(0x0u));
  /* 11725780 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725786 call 0x11723380 */
  push32(0x1172578bu); f_11723380();
  /* 1172578b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172578e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725791 jne 0x11725794 */
  if (!C.zf) goto L_11725794;
  /* 11725793 int3  */
  x86_unimpl("int3 @ 0x11725793");
L_11725794:;
  /* 11725794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11725796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725798 jne 0x11725772 */
  if (!C.zf) goto L_11725772;
  /* 1172579a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172579d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 117257a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117257a6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117257a9 jne 0x1172581c */
  if (!C.zf) goto L_1172581c;
L_117257ab:;
  /* 117257ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117257ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117257b1 push ecx */
  push32((uint32_t)(ECX));
  /* 117257b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117257b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117257b8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117257bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117257c0 push eax */
  push32((uint32_t)(EAX));
  /* 117257c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117257c4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117257c7 push ecx */
  push32((uint32_t)(ECX));
  /* 117257c8 push 0x1174da3c */
  push32((uint32_t)(0x1174da3cu));
  /* 117257cd push 0 */
  push32((uint32_t)(0x0u));
  /* 117257cf push 0 */
  push32((uint32_t)(0x0u));
  /* 117257d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117257d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117257d5 call 0x11723380 */
  push32(0x117257dau); f_11723380();
  /* 117257da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117257dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117257e0 jne 0x117257e3 */
  if (!C.zf) goto L_117257e3;
  /* 117257e2 int3  */
  x86_unimpl("int3 @ 0x117257e2");
L_117257e3:;
  /* 117257e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117257e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117257e7 jne 0x117257ab */
  if (!C.zf) goto L_117257ab;
  /* 117257e9 cmp dword ptr [0x11754520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117257f0 je 0x1172580b */
  if (C.zf) goto L_1172580b;
  /* 117257f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117257f5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117257f8 push ecx */
  push32((uint32_t)(ECX));
  /* 117257f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117257fc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117257ff push edx */
  push32((uint32_t)(EDX));
  /* 11725800 call dword ptr [0x11754520] */
  call_ind((uint32_t)(r32((uint32_t)(0x11754520))), 0x11725806u);
  /* 11725806 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725809 jmp 0x11725817 */
  goto L_11725817;
L_1172580b:;
  /* 1172580b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172580e push eax */
  push32((uint32_t)(EAX));
  /* 1172580f call 0x11725900 */
  push32(0x11725814u); f_11725900();
  /* 11725814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11725817:;
  /* 11725817 jmp 0x117258bd */
  goto L_117258bd;
L_1172581c:;
  /* 1172581c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172581f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725823 jne 0x11725862 */
  if (!C.zf) goto L_11725862;
L_11725825:;
  /* 11725825 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725828 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172582b push eax */
  push32((uint32_t)(EAX));
  /* 1172582c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172582f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725832 push ecx */
  push32((uint32_t)(ECX));
  /* 11725833 push 0x1174da14 */
  push32((uint32_t)(0x1174da14u));
  /* 11725838 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172583a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172583c push 0 */
  push32((uint32_t)(0x0u));
  /* 1172583e push 0 */
  push32((uint32_t)(0x0u));
  /* 11725840 call 0x11723380 */
  push32(0x11725845u); f_11723380();
  /* 11725845 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725848 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172584b jne 0x1172584e */
  if (!C.zf) goto L_1172584e;
  /* 1172584d int3  */
  x86_unimpl("int3 @ 0x1172584d");
L_1172584e:;
  /* 1172584e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11725850 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11725852 jne 0x11725825 */
  if (!C.zf) goto L_11725825;
  /* 11725854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725857 push eax */
  push32((uint32_t)(EAX));
  /* 11725858 call 0x11725900 */
  push32(0x1172585du); f_11725900();
  /* 1172585d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725860 jmp 0x117258bd */
  goto L_117258bd;
L_11725862:;
  /* 11725862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725865 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11725868 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172586e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725871 jne 0x117258bd */
  if (!C.zf) goto L_117258bd;
L_11725873:;
  /* 11725873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725876 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11725879 push ecx */
  push32((uint32_t)(ECX));
  /* 1172587a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172587d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11725880 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11725883 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11725888 push eax */
  push32((uint32_t)(EAX));
  /* 11725889 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172588c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172588f push ecx */
  push32((uint32_t)(ECX));
  /* 11725890 push 0x1174d9e0 */
  push32((uint32_t)(0x1174d9e0u));
  /* 11725895 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725897 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725899 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172589b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172589d call 0x11723380 */
  push32(0x117258a2u); f_11723380();
  /* 117258a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117258a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117258a8 jne 0x117258ab */
  if (!C.zf) goto L_117258ab;
  /* 117258aa int3  */
  x86_unimpl("int3 @ 0x117258aa");
L_117258ab:;
  /* 117258ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117258ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117258af jne 0x11725873 */
  if (!C.zf) goto L_11725873;
  /* 117258b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117258b4 push eax */
  push32((uint32_t)(EAX));
  /* 117258b5 call 0x11725900 */
  push32(0x117258bau); f_11725900();
  /* 117258ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117258bd:;
  /* 117258bd jmp 0x11725698 */
  goto L_11725698;
L_117258c2:;
  /* 117258c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 117258c4 call 0x11723ba0 */
  push32(0x117258c9u); f_11723ba0();
  /* 117258c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117258cc:;
  /* 117258cc push 0x1174d9c8 */
  push32((uint32_t)(0x1174d9c8u));
  /* 117258d1 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 117258d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117258d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117258da push 0 */
  push32((uint32_t)(0x0u));
  /* 117258dc push 0 */
  push32((uint32_t)(0x0u));
  /* 117258de call 0x11723380 */
  push32(0x117258e3u); f_11723380();
  /* 117258e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117258e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117258e9 jne 0x117258ec */
  if (!C.zf) goto L_117258ec;
  /* 117258eb int3  */
  x86_unimpl("int3 @ 0x117258eb");
L_117258ec:;
  /* 117258ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117258ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117258f0 jne 0x117258cc */
  if (!C.zf) goto L_117258cc;
  /* 117258f2 pop edi */
  EDI = (pop32());
  /* 117258f3 pop esi */
  ESI = (pop32());
  /* 117258f4 pop ebx */
  EBX = (pop32());
  /* 117258f5 mov esp, ebp */
  ESP = (EBP);
  /* 117258f7 pop ebp */
  EBP = (pop32());
  /* 117258f8 ret  */
  ESPCHK(0x11725640u, _esp0);
  ESP += 4; return;
}

/* FUN_10005900 @ 0x11725900 (276 bytes, 89 insns) */
void f_11725900(void) {
  FTRACE(0x11725900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725900 push ebp */
  push32((uint32_t)(EBP));
  /* 11725901 mov ebp, esp */
  EBP = (ESP);
  /* 11725903 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725906 push ebx */
  push32((uint32_t)(EBX));
  /* 11725907 push esi */
  push32((uint32_t)(ESI));
  /* 11725908 push edi */
  push32((uint32_t)(EDI));
  /* 11725909 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11725910 jmp 0x1172591b */
  goto L_1172591b;
L_11725912:;
  /* 11725912 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11725915 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725918 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1172591b:;
  /* 1172591b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172591e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725922 jge 0x1172592f */
  if ((C.sf==C.of)) goto L_1172592f;
  /* 11725924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725927 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172592a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1172592d jmp 0x11725936 */
  goto L_11725936;
L_1172592f:;
  /* 1172592f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11725936:;
  /* 11725936 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11725939 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172593c jge 0x117259dc */
  if ((C.sf==C.of)) goto L_117259dc;
  /* 11725942 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725945 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725948 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1172594b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1172594e cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725955 jle 0x11725973 */
  if ((C.zf||C.sf!=C.of)) goto L_11725973;
  /* 11725957 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1172595c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1172595f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11725965 push ecx */
  push32((uint32_t)(ECX));
  /* 11725966 call 0x1172aea0 */
  push32(0x1172596bu); f_1172aea0();
  /* 1172596b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172596e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11725971 jmp 0x11725990 */
  goto L_11725990;
L_11725973:;
  /* 11725973 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11725976 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172597c mov eax, dword ptr [0x11750f38] */
  EAX = (r32((uint32_t)(0x11750f38)));
  /* 11725981 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11725983 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11725987 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1172598d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11725990:;
  /* 11725990 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725994 je 0x117259a4 */
  if (C.zf) goto L_117259a4;
  /* 11725996 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11725999 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172599f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 117259a2 jmp 0x117259ab */
  goto L_117259ab;
L_117259a4:;
  /* 117259a4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_117259ab:;
  /* 117259ab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117259ae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 117259b1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 117259b5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117259b8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117259be push edx */
  push32((uint32_t)(EDX));
  /* 117259bf push 0x1174dabc */
  push32((uint32_t)(0x1174dabcu));
  /* 117259c4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117259c7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117259ca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 117259ce push ecx */
  push32((uint32_t)(ECX));
  /* 117259cf call 0x1172ada0 */
  push32(0x117259d4u); f_1172ada0();
  /* 117259d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117259d7 jmp 0x11725912 */
  goto L_11725912;
L_117259dc:;
  /* 117259dc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117259df mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_117259e4:;
  /* 117259e4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 117259e7 push eax */
  push32((uint32_t)(EAX));
  /* 117259e8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 117259eb push ecx */
  push32((uint32_t)(ECX));
  /* 117259ec push 0x1174daac */
  push32((uint32_t)(0x1174daacu));
  /* 117259f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117259f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117259f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117259f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117259f9 call 0x11723380 */
  push32(0x117259feu); f_11723380();
  /* 117259fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725a01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725a04 jne 0x11725a07 */
  if (!C.zf) goto L_11725a07;
  /* 11725a06 int3  */
  x86_unimpl("int3 @ 0x11725a06");
L_11725a07:;
  /* 11725a07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11725a09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11725a0b jne 0x117259e4 */
  if (!C.zf) goto L_117259e4;
  /* 11725a0d pop edi */
  EDI = (pop32());
  /* 11725a0e pop esi */
  ESI = (pop32());
  /* 11725a0f pop ebx */
  EBX = (pop32());
  /* 11725a10 mov esp, ebp */
  ESP = (EBP);
  /* 11725a12 pop ebp */
  EBP = (pop32());
  /* 11725a13 ret  */
  ESPCHK(0x11725900u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a20 @ 0x11725a20 (116 bytes, 46 insns) */
void f_11725a20(void) {
  FTRACE(0x11725a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11725a21 mov ebp, esp */
  EBP = (ESP);
  /* 11725a23 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725a26 push ebx */
  push32((uint32_t)(EBX));
  /* 11725a27 push esi */
  push32((uint32_t)(ESI));
  /* 11725a28 push edi */
  push32((uint32_t)(EDI));
  /* 11725a29 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11725a2c push eax */
  push32((uint32_t)(EAX));
  /* 11725a2d call 0x117253a0 */
  push32(0x11725a32u); f_117253a0();
  /* 11725a32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725a35 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725a39 jne 0x11725a54 */
  if (!C.zf) goto L_11725a54;
  /* 11725a3b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725a3f jne 0x11725a54 */
  if (!C.zf) goto L_11725a54;
  /* 11725a41 mov ecx, dword ptr [0x11750e3c] */
  ECX = (r32((uint32_t)(0x11750e3c)));
  /* 11725a47 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11725a4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11725a4c je 0x11725a8b */
  if (C.zf) goto L_11725a8b;
  /* 11725a4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725a52 je 0x11725a8b */
  if (C.zf) goto L_11725a8b;
L_11725a54:;
  /* 11725a54 push 0x1174dac4 */
  push32((uint32_t)(0x1174dac4u));
  /* 11725a59 push 0x1174d4b8 */
  push32((uint32_t)(0x1174d4b8u));
  /* 11725a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11725a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725a66 call 0x11723380 */
  push32(0x11725a6bu); f_11723380();
  /* 11725a6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725a6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725a71 jne 0x11725a74 */
  if (!C.zf) goto L_11725a74;
  /* 11725a73 int3  */
  x86_unimpl("int3 @ 0x11725a73");
L_11725a74:;
  /* 11725a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11725a76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11725a78 jne 0x11725a54 */
  if (!C.zf) goto L_11725a54;
  /* 11725a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11725a7c call 0x11725640 */
  push32(0x11725a81u); f_11725640();
  /* 11725a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725a84 mov eax, 1 */
  EAX = (0x1u);
  /* 11725a89 jmp 0x11725a8d */
  goto L_11725a8d;
L_11725a8b:;
  /* 11725a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11725a8d:;
  /* 11725a8d pop edi */
  EDI = (pop32());
  /* 11725a8e pop esi */
  ESI = (pop32());
  /* 11725a8f pop ebx */
  EBX = (pop32());
  /* 11725a90 mov esp, ebp */
  ESP = (EBP);
  /* 11725a92 pop ebp */
  EBP = (pop32());
  /* 11725a93 ret  */
  ESPCHK(0x11725a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aa0 @ 0x11725aa0 (197 bytes, 79 insns) */
void f_11725aa0(void) {
  FTRACE(0x11725aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11725aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11725aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11725aa4 push ebx */
  push32((uint32_t)(EBX));
  /* 11725aa5 push esi */
  push32((uint32_t)(ESI));
  /* 11725aa6 push edi */
  push32((uint32_t)(EDI));
  /* 11725aa7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725aab jne 0x11725ab2 */
  if (!C.zf) goto L_11725ab2;
  /* 11725aad jmp 0x11725b5e */
  goto L_11725b5e;
L_11725ab2:;
  /* 11725ab2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11725ab9 jmp 0x11725ac4 */
  goto L_11725ac4;
L_11725abb:;
  /* 11725abb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725abe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725ac1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11725ac4:;
  /* 11725ac4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725ac8 jge 0x11725b0e */
  if ((C.sf==C.of)) goto L_11725b0e;
L_11725aca:;
  /* 11725aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725acd mov edx, dword ptr [ecx*4 + 0x11750e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11750e4c)));
  /* 11725ad4 push edx */
  push32((uint32_t)(EDX));
  /* 11725ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725ad8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725adb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11725adf push edx */
  push32((uint32_t)(EDX));
  /* 11725ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725ae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725ae6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11725aea push edx */
  push32((uint32_t)(EDX));
  /* 11725aeb push 0x1174db20 */
  push32((uint32_t)(0x1174db20u));
  /* 11725af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725af8 call 0x11723380 */
  push32(0x11725afdu); f_11723380();
  /* 11725afd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725b00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725b03 jne 0x11725b06 */
  if (!C.zf) goto L_11725b06;
  /* 11725b05 int3  */
  x86_unimpl("int3 @ 0x11725b05");
L_11725b06:;
  /* 11725b06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11725b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725b0a jne 0x11725aca */
  if (!C.zf) goto L_11725aca;
  /* 11725b0c jmp 0x11725abb */
  goto L_11725abb;
L_11725b0e:;
  /* 11725b0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725b11 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11725b14 push edx */
  push32((uint32_t)(EDX));
  /* 11725b15 push 0x1174dafc */
  push32((uint32_t)(0x1174dafcu));
  /* 11725b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b22 call 0x11723380 */
  push32(0x11725b27u); f_11723380();
  /* 11725b27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725b2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725b2d jne 0x11725b30 */
  if (!C.zf) goto L_11725b30;
  /* 11725b2f int3  */
  x86_unimpl("int3 @ 0x11725b2f");
L_11725b30:;
  /* 11725b30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11725b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725b34 jne 0x11725b0e */
  if (!C.zf) goto L_11725b0e;
L_11725b36:;
  /* 11725b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725b39 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11725b3c push edx */
  push32((uint32_t)(EDX));
  /* 11725b3d push 0x1174dadc */
  push32((uint32_t)(0x1174dadcu));
  /* 11725b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725b4a call 0x11723380 */
  push32(0x11725b4fu); f_11723380();
  /* 11725b4f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725b52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725b55 jne 0x11725b58 */
  if (!C.zf) goto L_11725b58;
  /* 11725b57 int3  */
  x86_unimpl("int3 @ 0x11725b57");
L_11725b58:;
  /* 11725b58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11725b5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725b5c jne 0x11725b36 */
  if (!C.zf) goto L_11725b36;
L_11725b5e:;
  /* 11725b5e pop edi */
  EDI = (pop32());
  /* 11725b5f pop esi */
  ESI = (pop32());
  /* 11725b60 pop ebx */
  EBX = (pop32());
  /* 11725b61 mov esp, ebp */
  ESP = (EBP);
  /* 11725b63 pop ebp */
  EBP = (pop32());
  /* 11725b64 ret  */
  ESPCHK(0x11725aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b70 @ 0x11725b70 (239 bytes, 88 insns) */
void f_11725b70(void) {
  FTRACE(0x11725b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11725b71 mov ebp, esp */
  EBP = (ESP);
  /* 11725b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725b76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725b79 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725b7f jne 0x11725b8a */
  if (!C.zf) goto L_11725b8a;
  /* 11725b81 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11725b88 jmp 0x11725b92 */
  goto L_11725b92;
L_11725b8a:;
  /* 11725b8a call 0x11726b80 */
  push32(0x11725b8fu); f_11726b80();
  /* 11725b8f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11725b92:;
  /* 11725b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725b95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11725b98 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 11725b9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11725b9d je 0x11725bce */
  if (C.zf) goto L_11725bce;
  /* 11725b9f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725ba2 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725ba6 je 0x11725bc4 */
  if (C.zf) goto L_11725bc4;
  /* 11725ba8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725bac jne 0x11725bc4 */
  if (!C.zf) goto L_11725bc4;
  /* 11725bae push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11725bb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11725bb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725bb7 push edx */
  push32((uint32_t)(EDX));
  /* 11725bb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725bbb push eax */
  push32((uint32_t)(EAX));
  /* 11725bbc call 0x117260e0 */
  push32(0x11725bc1u); f_117260e0();
  /* 11725bc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11725bc4:;
  /* 11725bc4 mov eax, 1 */
  EAX = (0x1u);
  /* 11725bc9 jmp 0x11725c5b */
  goto L_11725c5b;
L_11725bce:;
  /* 11725bce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725bd1 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725bd5 je 0x11725c56 */
  if (C.zf) goto L_11725c56;
  /* 11725bd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725bda cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725be0 jne 0x11725c2e */
  if (!C.zf) goto L_11725c2e;
  /* 11725be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725be5 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725bec jbe 0x11725c2e */
  if ((C.cf||C.zf)) goto L_11725c2e;
  /* 11725bee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725bf1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11725bf4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11725bf7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11725bfa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725bfe je 0x11725c2e */
  if (C.zf) goto L_11725c2e;
  /* 11725c00 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11725c03 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11725c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11725c0a mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725c0d push edx */
  push32((uint32_t)(EDX));
  /* 11725c0e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11725c11 push eax */
  push32((uint32_t)(EAX));
  /* 11725c12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725c15 push ecx */
  push32((uint32_t)(ECX));
  /* 11725c16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725c19 push edx */
  push32((uint32_t)(EDX));
  /* 11725c1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725c1d push eax */
  push32((uint32_t)(EAX));
  /* 11725c1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725c21 push ecx */
  push32((uint32_t)(ECX));
  /* 11725c22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725c25 push edx */
  push32((uint32_t)(EDX));
  /* 11725c26 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11725c29u);
  /* 11725c29 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725c2c jmp 0x11725c5b */
  goto L_11725c5b;
L_11725c2e:;
  /* 11725c2e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725c31 push eax */
  push32((uint32_t)(EAX));
  /* 11725c32 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11725c35 push ecx */
  push32((uint32_t)(ECX));
  /* 11725c36 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 11725c39 push edx */
  push32((uint32_t)(EDX));
  /* 11725c3a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725c3d push eax */
  push32((uint32_t)(EAX));
  /* 11725c3e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725c41 push ecx */
  push32((uint32_t)(ECX));
  /* 11725c42 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725c45 push edx */
  push32((uint32_t)(EDX));
  /* 11725c46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725c49 push eax */
  push32((uint32_t)(EAX));
  /* 11725c4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725c4d push ecx */
  push32((uint32_t)(ECX));
  /* 11725c4e call 0x11725c60 */
  push32(0x11725c53u); f_11725c60();
  /* 11725c53 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11725c56:;
  /* 11725c56 mov eax, 1 */
  EAX = (0x1u);
L_11725c5b:;
  /* 11725c5b mov esp, ebp */
  ESP = (EBP);
  /* 11725c5d pop ebp */
  EBP = (pop32());
  /* 11725c5e ret  */
  ESPCHK(0x11725b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c60 @ 0x11725c60 (672 bytes, 222 insns) */
void f_11725c60(void) {
  FTRACE(0x11725c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11725c61 mov ebp, esp */
  EBP = (ESP);
  /* 11725c63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725c66 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11725c6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725c6d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11725c70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11725c73 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725c77 jl 0x11725c8d */
  if ((C.sf!=C.of)) goto L_11725c8d;
  /* 11725c79 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725c7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725c7f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725c82 jge 0x11725c8d */
  if ((C.sf==C.of)) goto L_11725c8d;
  /* 11725c84 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11725c8b jmp 0x11725c95 */
  goto L_11725c95;
L_11725c8d:;
  /* 11725c8d call 0x11726b80 */
  push32(0x11725c92u); f_11726b80();
  /* 11725c92 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_11725c95:;
  /* 11725c95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725c98 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725c9e jne 0x11725d55 */
  if (!C.zf) goto L_11725d55;
  /* 11725ca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725ca7 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725cab jne 0x11725d55 */
  if (!C.zf) goto L_11725d55;
  /* 11725cb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725cb4 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725cbb jne 0x11725d55 */
  if (!C.zf) goto L_11725d55;
  /* 11725cc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725cc4 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725cc8 jne 0x11725d55 */
  if (!C.zf) goto L_11725d55;
  /* 11725cce call 0x11726900 */
  push32(0x11725cd3u); f_11726900();
  /* 11725cd3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725cd7 jne 0x11725cde */
  if (!C.zf) goto L_11725cde;
  /* 11725cd9 jmp 0x11725efc */
  goto L_11725efc;
L_11725cde:;
  /* 11725cde call 0x11726900 */
  push32(0x11725ce3u); f_11726900();
  /* 11725ce3 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11725ce6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11725ce9 call 0x11726900 */
  push32(0x11725ceeu); f_11726900();
  /* 11725cee mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11725cf1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11725cf4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 11725cf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11725cfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725cfd push ecx */
  push32((uint32_t)(ECX));
  /* 11725cfe call 0x1172b000 */
  push32(0x11725d03u); f_1172b000();
  /* 11725d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725d06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725d08 je 0x11725d13 */
  if (C.zf) goto L_11725d13;
  /* 11725d0a mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11725d11 jmp 0x11725d1b */
  goto L_11725d1b;
L_11725d13:;
  /* 11725d13 call 0x11726b80 */
  push32(0x11725d18u); f_11726b80();
  /* 11725d18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11725d1b:;
  /* 11725d1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725d1e cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725d24 jne 0x11725d4e */
  if (!C.zf) goto L_11725d4e;
  /* 11725d26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725d29 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725d2d jne 0x11725d4e */
  if (!C.zf) goto L_11725d4e;
  /* 11725d2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725d32 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725d39 jne 0x11725d4e */
  if (!C.zf) goto L_11725d4e;
  /* 11725d3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725d3e cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725d42 jne 0x11725d4e */
  if (!C.zf) goto L_11725d4e;
  /* 11725d44 call 0x11726b80 */
  push32(0x11725d49u); f_11726b80();
  /* 11725d49 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11725d4c jmp 0x11725d55 */
  goto L_11725d55;
L_11725d4e:;
  /* 11725d4e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11725d55:;
  /* 11725d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725d58 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725d5e jne 0x11725ebc */
  if (!C.zf) goto L_11725ebc;
  /* 11725d64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725d67 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725d6b jne 0x11725ebc */
  if (!C.zf) goto L_11725ebc;
  /* 11725d71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725d74 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725d7b jne 0x11725ebc */
  if (!C.zf) goto L_11725ebc;
  /* 11725d81 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11725d84 push eax */
  push32((uint32_t)(EAX));
  /* 11725d85 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11725d88 push ecx */
  push32((uint32_t)(ECX));
  /* 11725d89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725d8c push edx */
  push32((uint32_t)(EDX));
  /* 11725d8d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725d90 push eax */
  push32((uint32_t)(EAX));
  /* 11725d91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725d94 push ecx */
  push32((uint32_t)(ECX));
  /* 11725d95 call 0x11722d40 */
  push32(0x11725d9au); f_11722d40();
  /* 11725d9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725d9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11725da0 jmp 0x11725db4 */
  goto L_11725db4;
L_11725da2:;
  /* 11725da2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11725da5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725da8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11725dab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11725dae add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725db1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11725db4:;
  /* 11725db4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11725db7 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725dba jae 0x11725e9f */
  if (!C.cf) goto L_11725e9f;
  /* 11725dc0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11725dc3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11725dc5 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725dc8 jg 0x11725dd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11725dd5;
  /* 11725dca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11725dcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725dd0 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725dd3 jle 0x11725dd7 */
  if ((C.zf||C.sf!=C.of)) goto L_11725dd7;
L_11725dd5:;
  /* 11725dd5 jmp 0x11725da2 */
  goto L_11725da2;
L_11725dd7:;
  /* 11725dd7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11725dda mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11725ddd mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11725de0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11725de3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11725de6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11725de9 jmp 0x11725dfd */
  goto L_11725dfd;
L_11725deb:;
  /* 11725deb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11725dee sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725df1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11725df4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11725df7 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725dfa mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11725dfd:;
  /* 11725dfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725e01 jle 0x11725e9a */
  if ((C.zf||C.sf!=C.of)) goto L_11725e9a;
  /* 11725e07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725e0a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11725e0d mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11725e10 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725e13 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11725e16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725e19 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11725e1c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11725e1f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11725e21 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11725e24 jmp 0x11725e38 */
  goto L_11725e38;
L_11725e26:;
  /* 11725e26 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11725e29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725e2c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11725e2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11725e32 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725e35 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11725e38:;
  /* 11725e38 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725e3c jle 0x11725e95 */
  if ((C.zf||C.sf!=C.of)) goto L_11725e95;
  /* 11725e3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725e41 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11725e44 push ecx */
  push32((uint32_t)(ECX));
  /* 11725e45 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11725e48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11725e4a push eax */
  push32((uint32_t)(EAX));
  /* 11725e4b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11725e4e push ecx */
  push32((uint32_t)(ECX));
  /* 11725e4f call 0x11726020 */
  push32(0x11725e54u); f_11726020();
  /* 11725e54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725e59 jne 0x11725e5d */
  if (!C.zf) goto L_11725e5d;
  /* 11725e5b jmp 0x11725e26 */
  goto L_11725e26;
L_11725e5d:;
  /* 11725e5d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11725e60 push edx */
  push32((uint32_t)(EDX));
  /* 11725e61 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11725e64 push eax */
  push32((uint32_t)(EAX));
  /* 11725e65 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725e68 push ecx */
  push32((uint32_t)(ECX));
  /* 11725e69 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11725e6c push edx */
  push32((uint32_t)(EDX));
  /* 11725e6d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11725e70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11725e72 push ecx */
  push32((uint32_t)(ECX));
  /* 11725e73 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11725e76 push edx */
  push32((uint32_t)(EDX));
  /* 11725e77 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725e7a push eax */
  push32((uint32_t)(EAX));
  /* 11725e7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725e7e push ecx */
  push32((uint32_t)(ECX));
  /* 11725e7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725e82 push edx */
  push32((uint32_t)(EDX));
  /* 11725e83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725e86 push eax */
  push32((uint32_t)(EAX));
  /* 11725e87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725e8a push ecx */
  push32((uint32_t)(ECX));
  /* 11725e8b call 0x11726210 */
  push32(0x11725e90u); f_11726210();
  /* 11725e90 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725e93 jmp 0x11725efa */
  goto L_11725efa;
L_11725e95:;
  /* 11725e95 jmp 0x11725deb */
  goto L_11725deb;
L_11725e9a:;
  /* 11725e9a jmp 0x11725da2 */
  goto L_11725da2;
L_11725e9f:;
  /* 11725e9f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11725ea2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11725ea8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11725eaa je 0x11725eba */
  if (C.zf) goto L_11725eba;
  /* 11725eac push 1 */
  push32((uint32_t)(0x1u));
  /* 11725eae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725eb1 push eax */
  push32((uint32_t)(EAX));
  /* 11725eb2 call 0x117266f0 */
  push32(0x11725eb7u); f_117266f0();
  /* 11725eb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11725eba:;
  /* 11725eba jmp 0x11725ef8 */
  goto L_11725ef8;
L_11725ebc:;
  /* 11725ebc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11725ebf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11725ec5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11725ec7 jne 0x11725ef3 */
  if (!C.zf) goto L_11725ef3;
  /* 11725ec9 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11725ecc push edx */
  push32((uint32_t)(EDX));
  /* 11725ecd mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725ed0 push eax */
  push32((uint32_t)(EAX));
  /* 11725ed1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11725ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 11725ed5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725ed8 push edx */
  push32((uint32_t)(EDX));
  /* 11725ed9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725edc push eax */
  push32((uint32_t)(EAX));
  /* 11725edd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 11725ee1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725ee4 push edx */
  push32((uint32_t)(EDX));
  /* 11725ee5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725ee8 push eax */
  push32((uint32_t)(EAX));
  /* 11725ee9 call 0x11725f00 */
  push32(0x11725eeeu); f_11725f00();
  /* 11725eee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725ef1 jmp 0x11725ef8 */
  goto L_11725ef8;
L_11725ef3:;
  /* 11725ef3 call 0x11726ad0 */
  push32(0x11725ef8u); f_11726ad0();
L_11725ef8:;
  /* 11725ef8 jmp 0x11725efc */
  goto L_11725efc;
L_11725efa:;
  /* 11725efa jmp 0x11725e9a */
  goto L_11725e9a;
L_11725efc:;
  /* 11725efc mov esp, ebp */
  ESP = (EBP);
  /* 11725efe pop ebp */
  EBP = (pop32());
  /* 11725eff ret  */
  ESPCHK(0x11725c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f00 @ 0x11725f00 (277 bytes, 107 insns) */
void f_11725f00(void) {
  FTRACE(0x11725f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11725f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11725f01 mov ebp, esp */
  EBP = (ESP);
  /* 11725f03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725f06 call 0x11726900 */
  push32(0x11725f0bu); f_11726900();
  /* 11725f0b cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725f0f je 0x11725f3e */
  if (C.zf) goto L_11725f3e;
  /* 11725f11 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11725f14 push eax */
  push32((uint32_t)(EAX));
  /* 11725f15 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725f18 push ecx */
  push32((uint32_t)(ECX));
  /* 11725f19 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725f1c push edx */
  push32((uint32_t)(EDX));
  /* 11725f1d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725f20 push eax */
  push32((uint32_t)(EAX));
  /* 11725f21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725f24 push ecx */
  push32((uint32_t)(ECX));
  /* 11725f25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725f28 push edx */
  push32((uint32_t)(EDX));
  /* 11725f29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11725f2c push eax */
  push32((uint32_t)(EAX));
  /* 11725f2d call 0x11722be0 */
  push32(0x11725f32u); f_11722be0();
  /* 11725f32 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11725f37 je 0x11725f3e */
  if (C.zf) goto L_11725f3e;
  /* 11725f39 jmp 0x11726011 */
  goto L_11726011;
L_11725f3e:;
  /* 11725f3e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11725f41 push ecx */
  push32((uint32_t)(ECX));
  /* 11725f42 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11725f45 push edx */
  push32((uint32_t)(EDX));
  /* 11725f46 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11725f49 push eax */
  push32((uint32_t)(EAX));
  /* 11725f4a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725f4d push ecx */
  push32((uint32_t)(ECX));
  /* 11725f4e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725f51 push edx */
  push32((uint32_t)(EDX));
  /* 11725f52 call 0x11722d40 */
  push32(0x11725f57u); f_11722d40();
  /* 11725f57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11725f5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11725f5d jmp 0x11725f71 */
  goto L_11725f71;
L_11725f5f:;
  /* 11725f5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11725f62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725f65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11725f68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725f6b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725f6e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11725f71:;
  /* 11725f71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11725f74 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725f77 jae 0x11726011 */
  if (!C.cf) goto L_11726011;
  /* 11725f7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725f80 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11725f83 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725f85 jl 0x11725fc9 */
  if ((C.sf!=C.of)) goto L_11725fc9;
  /* 11725f87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725f8a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11725f8d cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725f90 jg 0x11725fc9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11725fc9;
  /* 11725f92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725f95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11725f98 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725f9b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11725f9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725fa1 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11725fa4 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11725fa9 je 0x11725fcb */
  if (C.zf) goto L_11725fcb;
  /* 11725fab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725fae mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11725fb1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725fb4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11725fb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725fba mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11725fbd mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11725fc1 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 11725fc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11725fc7 je 0x11725fcb */
  if (C.zf) goto L_11725fcb;
L_11725fc9:;
  /* 11725fc9 jmp 0x11725f5f */
  goto L_11725f5f;
L_11725fcb:;
  /* 11725fcb push 1 */
  push32((uint32_t)(0x1u));
  /* 11725fcd mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11725fd0 push edx */
  push32((uint32_t)(EDX));
  /* 11725fd1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11725fd4 push eax */
  push32((uint32_t)(EAX));
  /* 11725fd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11725fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11725fdb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725fde mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11725fe1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11725fe4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11725fe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11725fea mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11725fed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11725fef push edx */
  push32((uint32_t)(EDX));
  /* 11725ff0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11725ff3 push eax */
  push32((uint32_t)(EAX));
  /* 11725ff4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11725ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 11725ff8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11725ffb push edx */
  push32((uint32_t)(EDX));
  /* 11725ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11725fff push eax */
  push32((uint32_t)(EAX));
  /* 11726000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726003 push ecx */
  push32((uint32_t)(ECX));
  /* 11726004 call 0x11726210 */
  push32(0x11726009u); f_11726210();
  /* 11726009 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172600c jmp 0x11725f5f */
  goto L_11725f5f;
L_11726011:;
  /* 11726011 mov esp, ebp */
  ESP = (EBP);
  /* 11726013 pop ebp */
  EBP = (pop32());
  /* 11726014 ret  */
  ESPCHK(0x11725f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006020 @ 0x11726020 (182 bytes, 69 insns) */
void f_11726020(void) {
  FTRACE(0x11726020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726020 push ebp */
  push32((uint32_t)(EBP));
  /* 11726021 mov ebp, esp */
  EBP = (ESP);
  /* 11726023 push ecx */
  push32((uint32_t)(ECX));
  /* 11726024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726027 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172602b je 0x1172603b */
  if (C.zf) goto L_1172603b;
  /* 1172602d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726030 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11726033 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11726037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726039 jne 0x11726045 */
  if (!C.zf) goto L_11726045;
L_1172603b:;
  /* 1172603b mov eax, 1 */
  EAX = (0x1u);
  /* 11726040 jmp 0x117260d2 */
  goto L_117260d2;
L_11726045:;
  /* 11726045 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726048 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172604b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172604e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726051 je 0x11726077 */
  if (C.zf) goto L_11726077;
  /* 11726053 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726056 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11726059 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172605c push edx */
  push32((uint32_t)(EDX));
  /* 1172605d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726060 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11726063 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726066 push ecx */
  push32((uint32_t)(ECX));
  /* 11726067 call 0x1172b090 */
  push32(0x1172606cu); f_1172b090();
  /* 1172606c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172606f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726071 je 0x11726077 */
  if (C.zf) goto L_11726077;
  /* 11726073 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11726075 jmp 0x117260d2 */
  goto L_117260d2;
L_11726077:;
  /* 11726077 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172607a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172607c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1172607f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726081 je 0x1172608f */
  if (C.zf) goto L_1172608f;
  /* 11726083 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726086 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11726088 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1172608b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172608d je 0x117260c8 */
  if (C.zf) goto L_117260c8;
L_1172608f:;
  /* 1172608f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11726092 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11726094 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11726097 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11726099 je 0x117260a7 */
  if (C.zf) goto L_117260a7;
  /* 1172609b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172609e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117260a0 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 117260a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117260a5 je 0x117260c8 */
  if (C.zf) goto L_117260c8;
L_117260a7:;
  /* 117260a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117260aa mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117260ac and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 117260af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117260b1 je 0x117260bf */
  if (C.zf) goto L_117260bf;
  /* 117260b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117260b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117260b8 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 117260bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117260bd je 0x117260c8 */
  if (C.zf) goto L_117260c8;
L_117260bf:;
  /* 117260bf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117260c6 jmp 0x117260cf */
  goto L_117260cf;
L_117260c8:;
  /* 117260c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117260cf:;
  /* 117260cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117260d2:;
  /* 117260d2 mov esp, ebp */
  ESP = (EBP);
  /* 117260d4 pop ebp */
  EBP = (pop32());
  /* 117260d5 ret  */
  ESPCHK(0x11726020u, _esp0);
  ESP += 4; return;
}

/* FUN_100060e0 @ 0x117260e0 (224 bytes, 77 insns) */
void f_117260e0(void) {
  FTRACE(0x117260e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117260e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117260e1 mov ebp, esp */
  EBP = (ESP);
  /* 117260e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117260e5 push 0x1174db40 */
  push32((uint32_t)(0x1174db40u));
  /* 117260ea push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 117260ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117260f5 push eax */
  push32((uint32_t)(EAX));
  /* 117260f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117260fd add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726100 push ebx */
  push32((uint32_t)(EBX));
  /* 11726101 push esi */
  push32((uint32_t)(ESI));
  /* 11726102 push edi */
  push32((uint32_t)(EDI));
  /* 11726103 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11726106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726109 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172610c mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_1172610f:;
  /* 1172610f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11726112 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726115 je 0x117261a4 */
  if (C.zf) goto L_117261a4;
  /* 1172611b cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172611f jle 0x11726135 */
  if ((C.zf||C.sf!=C.of)) goto L_11726135;
  /* 11726121 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11726124 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11726127 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172612a jge 0x11726135 */
  if ((C.sf==C.of)) goto L_11726135;
  /* 1172612c mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11726133 jmp 0x1172613d */
  goto L_1172613d;
L_11726135:;
  /* 11726135 call 0x11726b80 */
  push32(0x1172613au); f_11726b80();
  /* 1172613a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1172613d:;
  /* 1172613d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11726144 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11726147 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172614a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172614d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726152 je 0x11726170 */
  if (C.zf) goto L_11726170;
  /* 11726154 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11726159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172615c push edx */
  push32((uint32_t)(EDX));
  /* 1172615d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11726160 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11726163 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11726166 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1172616a push eax */
  push32((uint32_t)(EAX));
  /* 1172616b call 0x117267d0 */
  push32(0x11726170u); f_117267d0();
L_11726170:;
  /* 11726170 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11726177 jmp 0x11726190 */
  goto L_11726190;
  /* 11726179 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172617c push ecx */
  push32((uint32_t)(ECX));
  /* 1172617d call 0x117261e0 */
  push32(0x11726182u); f_117261e0();
  /* 11726182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726185 ret  */
  ESPCHK(0x117260e0u, _esp0);
  ESP += 4; return;
  /* 11726186 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11726189 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11726190:;
  /* 11726190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11726193 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11726196 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11726199 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 1172619c mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1172619f jmp 0x1172610f */
  goto L_1172610f;
L_117261a4:;
  /* 117261a4 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117261a7 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117261aa jne 0x117261b5 */
  if (!C.zf) goto L_117261b5;
  /* 117261ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117261b3 jmp 0x117261bd */
  goto L_117261bd;
L_117261b5:;
  /* 117261b5 call 0x11726b80 */
  push32(0x117261bau); f_11726b80();
  /* 117261ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117261bd:;
  /* 117261bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117261c0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117261c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117261c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117261c9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117261d0 pop edi */
  EDI = (pop32());
  /* 117261d1 pop esi */
  ESI = (pop32());
  /* 117261d2 pop ebx */
  EBX = (pop32());
  /* 117261d3 mov esp, ebp */
  ESP = (EBP);
  /* 117261d5 pop ebp */
  EBP = (pop32());
  /* 117261d6 ret  */
  ESPCHK(0x117260e0u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x117261e0 (44 bytes, 17 insns) */
void f_117261e0(void) {
  FTRACE(0x117261e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117261e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117261e1 mov ebp, esp */
  EBP = (ESP);
  /* 117261e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117261e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117261e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117261eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117261ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117261f1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117261f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117261f6 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117261fd je 0x11726201 */
  if (C.zf) goto L_11726201;
  /* 117261ff jmp 0x11726206 */
  goto L_11726206;
L_11726201:;
  /* 11726201 call 0x11726ad0 */
  push32(0x11726206u); f_11726ad0();
L_11726206:;
  /* 11726206 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11726208 mov esp, ebp */
  ESP = (EBP);
  /* 1172620a pop ebp */
  EBP = (pop32());
  /* 1172620b ret  */
  ESPCHK(0x117261e0u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x11726210 (183 bytes, 73 insns) */
void f_11726210(void) {
  FTRACE(0x11726210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726210 push ebp */
  push32((uint32_t)(EBP));
  /* 11726211 mov ebp, esp */
  EBP = (ESP);
  /* 11726213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11726216 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172621c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726220 je 0x1172623a */
  if (C.zf) goto L_1172623a;
  /* 11726222 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11726225 push ecx */
  push32((uint32_t)(ECX));
  /* 11726226 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11726229 push edx */
  push32((uint32_t)(EDX));
  /* 1172622a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172622d push eax */
  push32((uint32_t)(EAX));
  /* 1172622e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726231 push ecx */
  push32((uint32_t)(ECX));
  /* 11726232 call 0x11726470 */
  push32(0x11726237u); f_11726470();
  /* 11726237 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172623a:;
  /* 1172623a cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172623e jne 0x1172624f */
  if (!C.zf) goto L_1172624f;
  /* 11726240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726243 push edx */
  push32((uint32_t)(EDX));
  /* 11726244 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726247 push eax */
  push32((uint32_t)(EAX));
  /* 11726248 call 0x11722a60 */
  push32(0x1172624du); f_11722a60();
  /* 1172624d jmp 0x1172625c */
  goto L_1172625c;
L_1172624f:;
  /* 1172624f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726252 push ecx */
  push32((uint32_t)(ECX));
  /* 11726253 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11726256 push edx */
  push32((uint32_t)(EDX));
  /* 11726257 call 0x11722a60 */
  push32(0x1172625cu); f_11722a60();
L_1172625c:;
  /* 1172625c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1172625f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11726261 push ecx */
  push32((uint32_t)(ECX));
  /* 11726262 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11726265 push edx */
  push32((uint32_t)(EDX));
  /* 11726266 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726269 push eax */
  push32((uint32_t)(EAX));
  /* 1172626a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172626d push ecx */
  push32((uint32_t)(ECX));
  /* 1172626e call 0x117260e0 */
  push32(0x11726273u); f_117260e0();
  /* 11726273 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726276 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11726279 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1172627c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172627f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726282 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11726285 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172628a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 1172628d push edx */
  push32((uint32_t)(EDX));
  /* 1172628e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11726291 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11726294 push ecx */
  push32((uint32_t)(ECX));
  /* 11726295 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11726298 push edx */
  push32((uint32_t)(EDX));
  /* 11726299 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172629c push eax */
  push32((uint32_t)(EAX));
  /* 1172629d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117262a0 push ecx */
  push32((uint32_t)(ECX));
  /* 117262a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117262a4 push edx */
  push32((uint32_t)(EDX));
  /* 117262a5 call 0x117262d0 */
  push32(0x117262aau); f_117262d0();
  /* 117262aa add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117262ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117262b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117262b4 je 0x117262c3 */
  if (C.zf) goto L_117262c3;
  /* 117262b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117262b9 push eax */
  push32((uint32_t)(EAX));
  /* 117262ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117262bd push ecx */
  push32((uint32_t)(ECX));
  /* 117262be call 0x117229f0 */
  push32(0x117262c3u); f_117229f0();
L_117262c3:;
  /* 117262c3 mov esp, ebp */
  ESP = (EBP);
  /* 117262c5 pop ebp */
  EBP = (pop32());
  /* 117262c6 ret  */
  ESPCHK(0x11726210u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x117262d0 (172 bytes, 66 insns) */
void f_117262d0(void) {
  FTRACE(0x117262d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117262d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117262d1 mov ebp, esp */
  EBP = (ESP);
  /* 117262d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117262d5 push 0x1174db50 */
  push32((uint32_t)(0x1174db50u));
  /* 117262da push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 117262df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117262e5 push eax */
  push32((uint32_t)(EAX));
  /* 117262e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117262ed add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117262f0 push ebx */
  push32((uint32_t)(EBX));
  /* 117262f1 push esi */
  push32((uint32_t)(ESI));
  /* 117262f2 push edi */
  push32((uint32_t)(EDI));
  /* 117262f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117262f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117262f9 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 117262fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11726303 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726306 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11726309 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1172630c call 0x11726900 */
  push32(0x11726311u); f_11726900();
  /* 11726311 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11726314 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11726317 call 0x11726900 */
  push32(0x1172631cu); f_11726900();
  /* 1172631c mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 1172631f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11726322 call 0x11726900 */
  push32(0x11726327u); f_11726900();
  /* 11726327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172632a mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 1172632d call 0x11726900 */
  push32(0x11726332u); f_11726900();
  /* 11726332 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11726335 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11726338 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172633f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11726346 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11726349 push edx */
  push32((uint32_t)(EDX));
  /* 1172634a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1172634d push eax */
  push32((uint32_t)(EAX));
  /* 1172634e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11726351 push ecx */
  push32((uint32_t)(ECX));
  /* 11726352 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726355 push edx */
  push32((uint32_t)(EDX));
  /* 11726356 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726359 push eax */
  push32((uint32_t)(EAX));
  /* 1172635a call 0x11722b30 */
  push32(0x1172635fu); f_11722b30();
  /* 1172635f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726362 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11726365 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172636c jmp 0x1172639f */
  goto L_1172639f;
  /* 1172636e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11726371 push ecx */
  push32((uint32_t)(ECX));
  /* 11726372 call 0x11726420 */
  push32(0x11726377u); f_11726420();
  /* 11726377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172637a ret  */
  ESPCHK(0x117262d0u, _esp0);
  ESP += 4; return;
  /* 1172637b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1172637e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11726385 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11726387 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 1172638e lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11726391 push edx */
  push32((uint32_t)(EDX));
  /* 11726392 call 0x11722e12 */
  push32(0x11726397u); f_11722e12();
  /* 11726397 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172639a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172639d jmp 0x1172640e */
  jmp_ind(0x1172640eu); return;
L_1172639f:;
  /* 1172639f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117263a6 call 0x117263ad */
  push32(0x117263abu); f_117263ad();
  /* 117263ab jmp 0x1172640b */
  f_1172640b(); return;
}

/* FUN_100063ad @ 0x117263ad (94 bytes, 29 insns) */
void f_117263ad(void) {
  FTRACE(0x117263adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117263ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117263b0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117263b3 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 117263b6 call 0x11726900 */
  push32(0x117263bbu); f_11726900();
  /* 117263bb mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117263be mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 117263c1 call 0x11726900 */
  push32(0x117263c6u); f_11726900();
  /* 117263c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117263c9 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 117263cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117263cf cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117263d5 jne 0x1172640a */
  if (!C.zf) goto L_1172640a;
  /* 117263d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117263da cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117263de jne 0x1172640a */
  if (!C.zf) goto L_1172640a;
  /* 117263e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117263e3 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117263ea jne 0x1172640a */
  if (!C.zf) goto L_1172640a;
  /* 117263ec cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117263f0 jne 0x1172640a */
  if (!C.zf) goto L_1172640a;
  /* 117263f2 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117263f6 je 0x1172640a */
  if (C.zf) goto L_1172640a;
  /* 117263f8 call 0x11722e7a */
  push32(0x117263fdu); f_11722e7a();
  /* 117263fd push eax */
  push32((uint32_t)(EAX));
  /* 117263fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726401 push edx */
  push32((uint32_t)(EDX));
  /* 11726402 call 0x117266f0 */
  push32(0x11726407u); f_117266f0();
  /* 11726407 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172640a:;
  /* 1172640a ret  */
  ESPCHK(0x117263adu, _esp0);
  ESP += 4; return;
}

/* FUN_1000640b @ 0x1172640b (20 bytes, 9 insns) */
void f_1172640b(void) {
  FTRACE(0x1172640bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172640b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172640e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11726411 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11726418 pop edi */
  EDI = (pop32());
  /* 11726419 pop esi */
  ESI = (pop32());
  /* 1172641a pop ebx */
  EBX = (pop32());
  /* 1172641b mov esp, ebp */
  ESP = (EBP);
  /* 1172641d pop ebp */
  EBP = (pop32());
  /* 1172641e ret  */
  ESPCHK(0x1172640bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006420 @ 0x11726420 (66 bytes, 24 insns) */
void f_11726420(void) {
  FTRACE(0x11726420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726420 push ebp */
  push32((uint32_t)(EBP));
  /* 11726421 mov ebp, esp */
  EBP = (ESP);
  /* 11726423 push ecx */
  push32((uint32_t)(ECX));
  /* 11726424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726427 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11726429 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172642c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172642f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726435 jne 0x1172645c */
  if (!C.zf) goto L_1172645c;
  /* 11726437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172643a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172643e jne 0x1172645c */
  if (!C.zf) goto L_1172645c;
  /* 11726440 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726443 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172644a jne 0x1172645c */
  if (!C.zf) goto L_1172645c;
  /* 1172644c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172644f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726453 jne 0x1172645c */
  if (!C.zf) goto L_1172645c;
  /* 11726455 mov eax, 1 */
  EAX = (0x1u);
  /* 1172645a jmp 0x1172645e */
  goto L_1172645e;
L_1172645c:;
  /* 1172645c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172645e:;
  /* 1172645e mov esp, ebp */
  ESP = (EBP);
  /* 11726460 pop ebp */
  EBP = (pop32());
  /* 11726461 ret  */
  ESPCHK(0x11726420u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x11726470 (621 bytes, 229 insns) */
void f_11726470(void) {
  FTRACE(0x11726470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726470 push ebp */
  push32((uint32_t)(EBP));
  /* 11726471 mov ebp, esp */
  EBP = (ESP);
  /* 11726473 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11726475 push 0x1174db68 */
  push32((uint32_t)(0x1174db68u));
  /* 1172647a push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 1172647f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11726485 push eax */
  push32((uint32_t)(EAX));
  /* 11726486 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1172648d add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726490 push ebx */
  push32((uint32_t)(EBX));
  /* 11726491 push esi */
  push32((uint32_t)(ESI));
  /* 11726492 push edi */
  push32((uint32_t)(EDI));
  /* 11726493 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11726496 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11726499 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172649d je 0x117264b6 */
  if (C.zf) goto L_117264b6;
  /* 1172649f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117264a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117264a5 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 117264a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117264ab je 0x117264b6 */
  if (C.zf) goto L_117264b6;
  /* 117264ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117264b0 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117264b4 jne 0x117264bb */
  if (!C.zf) goto L_117264bb;
L_117264b6:;
  /* 117264b6 jmp 0x117266da */
  goto L_117266da;
L_117264bb:;
  /* 117264bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117264be mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117264c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117264c4 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 117264c8 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117264cb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117264d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117264d5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117264d7 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 117264da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117264dc je 0x11726536 */
  if (C.zf) goto L_11726536;
  /* 117264de push 1 */
  push32((uint32_t)(0x1u));
  /* 117264e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117264e3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 117264e6 push eax */
  push32((uint32_t)(EAX));
  /* 117264e7 call 0x1172b000 */
  push32(0x117264ecu); f_1172b000();
  /* 117264ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117264ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117264f1 je 0x1172652c */
  if (C.zf) goto L_1172652c;
  /* 117264f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117264f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117264f8 push ecx */
  push32((uint32_t)(ECX));
  /* 117264f9 call 0x1172b030 */
  push32(0x117264feu); f_1172b030();
  /* 117264fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726503 je 0x1172652c */
  if (C.zf) goto L_1172652c;
  /* 11726505 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11726508 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172650b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1172650e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11726510 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726513 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726516 push edx */
  push32((uint32_t)(EDX));
  /* 11726517 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172651a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172651c push ecx */
  push32((uint32_t)(ECX));
  /* 1172651d call 0x11726780 */
  push32(0x11726522u); f_11726780();
  /* 11726522 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726525 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11726528 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1172652a jmp 0x11726531 */
  goto L_11726531;
L_1172652c:;
  /* 1172652c call 0x11726b80 */
  push32(0x11726531u); f_11726b80();
L_11726531:;
  /* 11726531 jmp 0x117266c3 */
  goto L_117266c3;
L_11726536:;
  /* 11726536 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726539 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172653b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172653e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11726540 je 0x117265ba */
  if (C.zf) goto L_117265ba;
  /* 11726542 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726547 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1172654a push eax */
  push32((uint32_t)(EAX));
  /* 1172654b call 0x1172b000 */
  push32(0x11726550u); f_1172b000();
  /* 11726550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726555 je 0x117265b0 */
  if (C.zf) goto L_117265b0;
  /* 11726557 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726559 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172655c push ecx */
  push32((uint32_t)(ECX));
  /* 1172655d call 0x1172b030 */
  push32(0x11726562u); f_1172b030();
  /* 11726562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726565 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726567 je 0x117265b0 */
  if (C.zf) goto L_117265b0;
  /* 11726569 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172656c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1172656f push eax */
  push32((uint32_t)(EAX));
  /* 11726570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726573 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11726576 push edx */
  push32((uint32_t)(EDX));
  /* 11726577 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172657a push eax */
  push32((uint32_t)(EAX));
  /* 1172657b call 0x1172b200 */
  push32(0x11726580u); f_1172b200();
  /* 11726580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726583 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726586 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172658a jne 0x117265ae */
  if (!C.zf) goto L_117265ae;
  /* 1172658c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172658f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726592 je 0x117265ae */
  if (C.zf) goto L_117265ae;
  /* 11726594 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726597 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172659a push eax */
  push32((uint32_t)(EAX));
  /* 1172659b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172659e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117265a0 push edx */
  push32((uint32_t)(EDX));
  /* 117265a1 call 0x11726780 */
  push32(0x117265a6u); f_11726780();
  /* 117265a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117265a9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117265ac mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_117265ae:;
  /* 117265ae jmp 0x117265b5 */
  goto L_117265b5;
L_117265b0:;
  /* 117265b0 call 0x11726b80 */
  push32(0x117265b5u); f_11726b80();
L_117265b5:;
  /* 117265b5 jmp 0x117266c3 */
  goto L_117266c3;
L_117265ba:;
  /* 117265ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117265bd cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117265c1 jne 0x11726620 */
  if (!C.zf) goto L_11726620;
  /* 117265c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117265c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117265c8 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 117265cb push ecx */
  push32((uint32_t)(ECX));
  /* 117265cc call 0x1172b000 */
  push32(0x117265d1u); f_1172b000();
  /* 117265d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117265d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117265d6 je 0x11726616 */
  if (C.zf) goto L_11726616;
  /* 117265d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117265da mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117265dd push edx */
  push32((uint32_t)(EDX));
  /* 117265de call 0x1172b030 */
  push32(0x117265e3u); f_1172b030();
  /* 117265e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117265e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117265e8 je 0x11726616 */
  if (C.zf) goto L_11726616;
  /* 117265ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117265ed mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117265f0 push ecx */
  push32((uint32_t)(ECX));
  /* 117265f1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117265f4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117265f7 push edx */
  push32((uint32_t)(EDX));
  /* 117265f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117265fb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 117265fe push ecx */
  push32((uint32_t)(ECX));
  /* 117265ff call 0x11726780 */
  push32(0x11726604u); f_11726780();
  /* 11726604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726607 push eax */
  push32((uint32_t)(EAX));
  /* 11726608 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172660b push edx */
  push32((uint32_t)(EDX));
  /* 1172660c call 0x1172b200 */
  push32(0x11726611u); f_1172b200();
  /* 11726611 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726614 jmp 0x1172661b */
  goto L_1172661b;
L_11726616:;
  /* 11726616 call 0x11726b80 */
  push32(0x1172661bu); f_11726b80();
L_1172661b:;
  /* 1172661b jmp 0x117266c3 */
  goto L_117266c3;
L_11726620:;
  /* 11726620 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726625 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11726628 push ecx */
  push32((uint32_t)(ECX));
  /* 11726629 call 0x1172b000 */
  push32(0x1172662eu); f_1172b000();
  /* 1172662e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726633 je 0x117266be */
  if (C.zf) goto L_117266be;
  /* 11726639 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172663b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172663e push edx */
  push32((uint32_t)(EDX));
  /* 1172663f call 0x1172b030 */
  push32(0x11726644u); f_1172b030();
  /* 11726644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726649 je 0x117266be */
  if (C.zf) goto L_117266be;
  /* 1172664b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172664e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11726651 push ecx */
  push32((uint32_t)(ECX));
  /* 11726652 call 0x1172b060 */
  push32(0x11726657u); f_1172b060();
  /* 11726657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172665a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172665c je 0x117266be */
  if (C.zf) goto L_117266be;
  /* 1172665e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726661 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11726663 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11726666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726668 je 0x11726695 */
  if (C.zf) goto L_11726695;
  /* 1172666a push 1 */
  push32((uint32_t)(0x1u));
  /* 1172666c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172666f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726672 push ecx */
  push32((uint32_t)(ECX));
  /* 11726673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726676 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11726679 push eax */
  push32((uint32_t)(EAX));
  /* 1172667a call 0x11726780 */
  push32(0x1172667fu); f_11726780();
  /* 1172667f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726682 push eax */
  push32((uint32_t)(EAX));
  /* 11726683 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726686 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11726689 push edx */
  push32((uint32_t)(EDX));
  /* 1172668a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172668d push eax */
  push32((uint32_t)(EAX));
  /* 1172668e call 0x11722a50 */
  push32(0x11726693u); f_11722a50();
  /* 11726693 jmp 0x117266bc */
  goto L_117266bc;
L_11726695:;
  /* 11726695 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11726698 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172669b push ecx */
  push32((uint32_t)(ECX));
  /* 1172669c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172669f mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 117266a2 push eax */
  push32((uint32_t)(EAX));
  /* 117266a3 call 0x11726780 */
  push32(0x117266a8u); f_11726780();
  /* 117266a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117266ab push eax */
  push32((uint32_t)(EAX));
  /* 117266ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117266af mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117266b2 push edx */
  push32((uint32_t)(EDX));
  /* 117266b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117266b6 push eax */
  push32((uint32_t)(EAX));
  /* 117266b7 call 0x11722a40 */
  push32(0x117266bcu); f_11722a40();
L_117266bc:;
  /* 117266bc jmp 0x117266c3 */
  goto L_117266c3;
L_117266be:;
  /* 117266be call 0x11726b80 */
  push32(0x117266c3u); f_11726b80();
L_117266c3:;
  /* 117266c3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117266ca jmp 0x117266da */
  goto L_117266da;
  /* 117266cc mov eax, 1 */
  EAX = (0x1u);
  /* 117266d1 ret  */
  ESPCHK(0x11726470u, _esp0);
  ESP += 4; return;
  /* 117266d2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117266d5 call 0x11726ad0 */
  push32(0x117266dau); f_11726ad0();
L_117266da:;
  /* 117266da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117266dd mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117266e4 pop edi */
  EDI = (pop32());
  /* 117266e5 pop esi */
  ESI = (pop32());
  /* 117266e6 pop ebx */
  EBX = (pop32());
  /* 117266e7 mov esp, ebp */
  ESP = (EBP);
  /* 117266e9 pop ebp */
  EBP = (pop32());
  /* 117266ea ret  */
  ESPCHK(0x11726470u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x117266f0 (111 bytes, 46 insns) */
void f_117266f0(void) {
  FTRACE(0x117266f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117266f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117266f1 mov ebp, esp */
  EBP = (ESP);
  /* 117266f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117266f5 push 0x1174db78 */
  push32((uint32_t)(0x1174db78u));
  /* 117266fa push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 117266ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11726705 push eax */
  push32((uint32_t)(EAX));
  /* 11726706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1172670d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11726710 push ebx */
  push32((uint32_t)(EBX));
  /* 11726711 push esi */
  push32((uint32_t)(ESI));
  /* 11726712 push edi */
  push32((uint32_t)(EDI));
  /* 11726713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11726716 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172671a je 0x11726765 */
  if (C.zf) goto L_11726765;
  /* 1172671c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172671f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11726722 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726726 je 0x11726765 */
  if (C.zf) goto L_11726765;
  /* 11726728 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172672f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726732 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11726735 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11726738 push ecx */
  push32((uint32_t)(ECX));
  /* 11726739 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172673c mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1172673f push eax */
  push32((uint32_t)(EAX));
  /* 11726740 call 0x11722a30 */
  push32(0x11726745u); f_11722a30();
  /* 11726745 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1172674c jmp 0x11726765 */
  goto L_11726765;
  /* 1172674e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726751 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11726756 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11726758 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172675a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172675c ret  */
  ESPCHK(0x117266f0u, _esp0);
  ESP += 4; return;
  /* 1172675d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11726760 call 0x11726ad0 */
  push32(0x11726765u); f_11726ad0();
L_11726765:;
  /* 11726765 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11726768 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1172676f pop edi */
  EDI = (pop32());
  /* 11726770 pop esi */
  ESI = (pop32());
  /* 11726771 pop ebx */
  EBX = (pop32());
  /* 11726772 mov esp, ebp */
  ESP = (EBP);
  /* 11726774 pop ebp */
  EBP = (pop32());
  /* 11726775 ret  */
  ESPCHK(0x117266f0u, _esp0);
  ESP += 4; return;
}

