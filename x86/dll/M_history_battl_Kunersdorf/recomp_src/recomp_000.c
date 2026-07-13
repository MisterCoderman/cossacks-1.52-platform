#include "recomp.h"

/* thunk_FUN_100017a0 @ 0x12941005 (5 bytes, 1 insns) */
void f_12941005(void) {
  FTRACE(0x12941005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941005 jmp 0x129417a0 */
  f_129417a0(); return;
}

/* OnInit @ 0x1294100a (5 bytes, 1 insns) */
void f_1294100a(void) {
  FTRACE(0x1294100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294100a jmp 0x129411b0 */
  f_129411b0(); return;
}

/* thunk_FUN_10001130 @ 0x1294100f (5 bytes, 1 insns) */
void f_1294100f(void) {
  FTRACE(0x1294100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294100f jmp 0x12941130 */
  f_12941130(); return;
}

/* thunk_FUN_10001050 @ 0x12941014 (5 bytes, 1 insns) */
void f_12941014(void) {
  FTRACE(0x12941014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941014 jmp 0x12941050 */
  f_12941050(); return;
}

/* thunk_FUN_100010b0 @ 0x12941019 (5 bytes, 1 insns) */
void f_12941019(void) {
  FTRACE(0x12941019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941019 jmp 0x129410b0 */
  f_129410b0(); return;
}

/* ProcessScenary @ 0x1294101e (5 bytes, 1 insns) */
void f_1294101e(void) {
  FTRACE(0x1294101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1294101e jmp 0x12941390 */
  f_12941390(); return;
}

/* FUN_10001050 @ 0x12941050 (67 bytes, 26 insns) */
void f_12941050(void) {
  FTRACE(0x12941050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941050 push ebp */
  push32((uint32_t)(EBP));
  /* 12941051 mov ebp, esp */
  EBP = (ESP);
  /* 12941053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12941056 push ebx */
  push32((uint32_t)(EBX));
  /* 12941057 push esi */
  push32((uint32_t)(ESI));
  /* 12941058 push edi */
  push32((uint32_t)(EDI));
  /* 12941059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1294105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12941061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12941066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12941068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941072 je 0x12941076 */
  if (C.zf) goto L_12941076;
  /* 12941074 jmp 0x1294107b */
  goto L_1294107b;
L_12941076:;
  /* 12941076 call 0x1294100a */
  push32(0x1294107bu); f_1294100a();
L_1294107b:;
  /* 1294107b mov eax, 1 */
  EAX = (0x1u);
  /* 12941080 pop edi */
  EDI = (pop32());
  /* 12941081 pop esi */
  ESI = (pop32());
  /* 12941082 pop ebx */
  EBX = (pop32());
  /* 12941083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941088 call 0x12941840 */
  push32(0x1294108du); f_12941840();
  /* 1294108d mov esp, ebp */
  ESP = (EBP);
  /* 1294108f pop ebp */
  EBP = (pop32());
  /* 12941090 ret 0xc */
  ESPCHK(0x12941050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x129410b0 (92 bytes, 34 insns) */
void f_129410b0(void) {
  FTRACE(0x129410b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129410b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129410b1 mov ebp, esp */
  EBP = (ESP);
  /* 129410b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129410b6 push ebx */
  push32((uint32_t)(EBX));
  /* 129410b7 push esi */
  push32((uint32_t)(ESI));
  /* 129410b8 push edi */
  push32((uint32_t)(EDI));
  /* 129410b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129410bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129410c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129410c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129410c8 mov esi, esp */
  ESI = (ESP);
  /* 129410ca call dword ptr [0x129703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703cc))), 0x129410d0u);
  /* 129410d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129410d2 call 0x12941840 */
  push32(0x129410d7u); f_12941840();
  /* 129410d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129410d9 jne 0x129410ec */
  if (!C.zf) goto L_129410ec;
  /* 129410db mov esi, esp */
  ESI = (ESP);
  /* 129410dd call dword ptr [0x129703d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703d0))), 0x129410e3u);
  /* 129410e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129410e5 call 0x12941840 */
  push32(0x129410eau); f_12941840();
  /* 129410ea jmp 0x129410fb */
  goto L_129410fb;
L_129410ec:;
  /* 129410ec mov esi, esp */
  ESI = (ESP);
  /* 129410ee call dword ptr [0x129703d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703d4))), 0x129410f4u);
  /* 129410f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129410f6 call 0x12941840 */
  push32(0x129410fbu); f_12941840();
L_129410fb:;
  /* 129410fb pop edi */
  EDI = (pop32());
  /* 129410fc pop esi */
  ESI = (pop32());
  /* 129410fd pop ebx */
  EBX = (pop32());
  /* 129410fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941103 call 0x12941840 */
  push32(0x12941108u); f_12941840();
  /* 12941108 mov esp, ebp */
  ESP = (EBP);
  /* 1294110a pop ebp */
  EBP = (pop32());
  /* 1294110b ret  */
  ESPCHK(0x129410b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12941130 (93 bytes, 34 insns) */
void f_12941130(void) {
  FTRACE(0x12941130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941130 push ebp */
  push32((uint32_t)(EBP));
  /* 12941131 mov ebp, esp */
  EBP = (ESP);
  /* 12941133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12941136 push ebx */
  push32((uint32_t)(EBX));
  /* 12941137 push esi */
  push32((uint32_t)(ESI));
  /* 12941138 push edi */
  push32((uint32_t)(EDI));
  /* 12941139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1294113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12941141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12941146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12941148 mov esi, esp */
  ESI = (ESP);
  /* 1294114a call dword ptr [0x129703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703cc))), 0x12941150u);
  /* 12941150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941152 call 0x12941840 */
  push32(0x12941157u); f_12941840();
  /* 12941157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294115a jne 0x1294116d */
  if (!C.zf) goto L_1294116d;
  /* 1294115c mov esi, esp */
  ESI = (ESP);
  /* 1294115e call dword ptr [0x129703d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703d0))), 0x12941164u);
  /* 12941164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941166 call 0x12941840 */
  push32(0x1294116bu); f_12941840();
  /* 1294116b jmp 0x1294117c */
  goto L_1294117c;
L_1294116d:;
  /* 1294116d mov esi, esp */
  ESI = (ESP);
  /* 1294116f call dword ptr [0x129703d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703d4))), 0x12941175u);
  /* 12941175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941177 call 0x12941840 */
  push32(0x1294117cu); f_12941840();
L_1294117c:;
  /* 1294117c pop edi */
  EDI = (pop32());
  /* 1294117d pop esi */
  ESI = (pop32());
  /* 1294117e pop ebx */
  EBX = (pop32());
  /* 1294117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941184 call 0x12941840 */
  push32(0x12941189u); f_12941840();
  /* 12941189 mov esp, ebp */
  ESP = (EBP);
  /* 1294118b pop ebp */
  EBP = (pop32());
  /* 1294118c ret  */
  ESPCHK(0x12941130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x129411b0 (376 bytes, 101 insns) */
void f_129411b0(void) {
  FTRACE(0x129411b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129411b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129411b1 mov ebp, esp */
  EBP = (ESP);
  /* 129411b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129411b6 push ebx */
  push32((uint32_t)(EBX));
  /* 129411b7 push esi */
  push32((uint32_t)(ESI));
  /* 129411b8 push edi */
  push32((uint32_t)(EDI));
  /* 129411b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129411bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129411c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129411c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129411c8 mov esi, esp */
  ESI = (ESP);
  /* 129411ca push 0x1296904c */
  push32((uint32_t)(0x1296904cu));
  /* 129411cf push 0x1296e420 */
  push32((uint32_t)(0x1296e420u));
  /* 129411d4 call dword ptr [0x129703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c0))), 0x129411dau);
  /* 129411da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129411dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129411df call 0x12941840 */
  push32(0x129411e4u); f_12941840();
  /* 129411e4 mov esi, esp */
  ESI = (ESP);
  /* 129411e6 push 0x12969044 */
  push32((uint32_t)(0x12969044u));
  /* 129411eb push 0x1296e428 */
  push32((uint32_t)(0x1296e428u));
  /* 129411f0 call dword ptr [0x129703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c0))), 0x129411f6u);
  /* 129411f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129411f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129411fb call 0x12941840 */
  push32(0x12941200u); f_12941840();
  /* 12941200 mov esi, esp */
  ESI = (ESP);
  /* 12941202 push 0x1296903c */
  push32((uint32_t)(0x1296903cu));
  /* 12941207 push 0x1296e430 */
  push32((uint32_t)(0x1296e430u));
  /* 1294120c call dword ptr [0x129703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c0))), 0x12941212u);
  /* 12941212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941217 call 0x12941840 */
  push32(0x1294121cu); f_12941840();
  /* 1294121c mov esi, esp */
  ESI = (ESP);
  /* 1294121e push 0x12969034 */
  push32((uint32_t)(0x12969034u));
  /* 12941223 push 0x1296e438 */
  push32((uint32_t)(0x1296e438u));
  /* 12941228 call dword ptr [0x129703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c0))), 0x1294122eu);
  /* 1294122e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941233 call 0x12941840 */
  push32(0x12941238u); f_12941840();
  /* 12941238 mov esi, esp */
  ESI = (ESP);
  /* 1294123a push 0x1296902c */
  push32((uint32_t)(0x1296902cu));
  /* 1294123f push 0x1296e440 */
  push32((uint32_t)(0x1296e440u));
  /* 12941244 call dword ptr [0x129703c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c0))), 0x1294124au);
  /* 1294124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294124d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294124f call 0x12941840 */
  push32(0x12941254u); f_12941840();
  /* 12941254 mov esi, esp */
  ESI = (ESP);
  /* 12941256 push 0x12969024 */
  push32((uint32_t)(0x12969024u));
  /* 1294125b push 0x1296e410 */
  push32((uint32_t)(0x1296e410u));
  /* 12941260 call dword ptr [0x129703c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c4))), 0x12941266u);
  /* 12941266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294126b call 0x12941840 */
  push32(0x12941270u); f_12941840();
  /* 12941270 mov esi, esp */
  ESI = (ESP);
  /* 12941272 push 0x1296901c */
  push32((uint32_t)(0x1296901cu));
  /* 12941277 push 0x1296e418 */
  push32((uint32_t)(0x1296e418u));
  /* 1294127c call dword ptr [0x129703c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c4))), 0x12941282u);
  /* 12941282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941287 call 0x12941840 */
  push32(0x1294128cu); f_12941840();
  /* 1294128c mov esi, esp */
  ESI = (ESP);
  /* 1294128e push 1 */
  push32((uint32_t)(0x1u));
  /* 12941290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12941292 call dword ptr [0x129703c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c8))), 0x12941298u);
  /* 12941298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294129b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294129d call 0x12941840 */
  push32(0x129412a2u); f_12941840();
  /* 129412a2 mov esi, esp */
  ESI = (ESP);
  /* 129412a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 129412a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129412a8 call dword ptr [0x129703c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c8))), 0x129412aeu);
  /* 129412ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129412b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129412b3 call 0x12941840 */
  push32(0x129412b8u); f_12941840();
  /* 129412b8 mov esi, esp */
  ESI = (ESP);
  /* 129412ba push 0x83 */
  push32((uint32_t)(0x83u));
  /* 129412bf push 7 */
  push32((uint32_t)(0x7u));
  /* 129412c1 call dword ptr [0x129703c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703c8))), 0x129412c7u);
  /* 129412c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129412ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129412cc call 0x12941840 */
  push32(0x129412d1u); f_12941840();
  /* 129412d1 mov dword ptr [0x1296e3e0], 0 */
  w32((uint32_t)(0x1296e3e0), (0x0u));
  /* 129412db jmp 0x129412ea */
  goto L_129412ea;
L_129412dd:;
  /* 129412dd mov eax, dword ptr [0x1296e3e0] */
  EAX = (r32((uint32_t)(0x1296e3e0)));
  /* 129412e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129412e5 mov dword ptr [0x1296e3e0], eax */
  w32((uint32_t)(0x1296e3e0), (EAX));
L_129412ea:;
  /* 129412ea cmp dword ptr [0x1296e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1296e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129412f1 jge 0x12941317 */
  if ((C.sf==C.of)) goto L_12941317;
  /* 129412f3 mov ecx, dword ptr [0x1296e3e0] */
  ECX = (r32((uint32_t)(0x1296e3e0)));
  /* 129412f9 mov dword ptr [ecx*4 + 0x1296e3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x1296e3e4), (0x0u));
  /* 12941304 mov edx, dword ptr [0x1296e3e0] */
  EDX = (r32((uint32_t)(0x1296e3e0)));
  /* 1294130a mov dword ptr [edx*4 + 0x1296e3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x1296e3f8), (0x0u));
  /* 12941315 jmp 0x129412dd */
  goto L_129412dd;
L_12941317:;
  /* 12941317 pop edi */
  EDI = (pop32());
  /* 12941318 pop esi */
  ESI = (pop32());
  /* 12941319 pop ebx */
  EBX = (pop32());
  /* 1294131a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294131d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294131f call 0x12941840 */
  push32(0x12941324u); f_12941840();
  /* 12941324 mov esp, ebp */
  ESP = (EBP);
  /* 12941326 pop ebp */
  EBP = (pop32());
  /* 12941327 ret  */
  ESPCHK(0x129411b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001390 @ 0x12941390 (830 bytes, 219 insns) */
void f_12941390(void) {
  FTRACE(0x12941390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941390 push ebp */
  push32((uint32_t)(EBP));
  /* 12941391 mov ebp, esp */
  EBP = (ESP);
  /* 12941393 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12941396 push ebx */
  push32((uint32_t)(EBX));
  /* 12941397 push esi */
  push32((uint32_t)(ESI));
  /* 12941398 push edi */
  push32((uint32_t)(EDI));
  /* 12941399 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1294139c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129413a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129413a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129413a8 mov dword ptr [0x1296e3e0], 0 */
  w32((uint32_t)(0x1296e3e0), (0x0u));
  /* 129413b2 jmp 0x129413c1 */
  goto L_129413c1;
L_129413b4:;
  /* 129413b4 mov eax, dword ptr [0x1296e3e0] */
  EAX = (r32((uint32_t)(0x1296e3e0)));
  /* 129413b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129413bc mov dword ptr [0x1296e3e0], eax */
  w32((uint32_t)(0x1296e3e0), (EAX));
L_129413c1:;
  /* 129413c1 cmp dword ptr [0x1296e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1296e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129413c8 jge 0x129414ab */
  if ((C.sf==C.of)) goto L_129414ab;
  /* 129413ce mov esi, esp */
  ESI = (ESP);
  /* 129413d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129413d2 mov ecx, dword ptr [0x1296e3e0] */
  ECX = (r32((uint32_t)(0x1296e3e0)));
  /* 129413d8 lea edx, [ecx*8 + 0x1296e420] */
  EDX = ((uint32_t)(ECX*8 + 0x1296e420));
  /* 129413df push edx */
  push32((uint32_t)(EDX));
  /* 129413e0 call dword ptr [0x129703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703ac))), 0x129413e6u);
  /* 129413e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129413e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129413eb call 0x12941840 */
  push32(0x129413f0u); f_12941840();
  /* 129413f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129413f2 jle 0x1294143a */
  if ((C.zf||C.sf!=C.of)) goto L_1294143a;
  /* 129413f4 mov esi, esp */
  ESI = (ESP);
  /* 129413f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129413f8 mov eax, dword ptr [0x1296e3e0] */
  EAX = (r32((uint32_t)(0x1296e3e0)));
  /* 129413fd lea ecx, [eax*8 + 0x1296e420] */
  ECX = ((uint32_t)(EAX*8 + 0x1296e420));
  /* 12941404 push ecx */
  push32((uint32_t)(ECX));
  /* 12941405 call dword ptr [0x129703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703ac))), 0x1294140bu);
  /* 1294140b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294140e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941410 call 0x12941840 */
  push32(0x12941415u); f_12941840();
  /* 12941415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941417 jne 0x1294143a */
  if (!C.zf) goto L_1294143a;
  /* 12941419 mov edx, dword ptr [0x1296e3e0] */
  EDX = (r32((uint32_t)(0x1296e3e0)));
  /* 1294141f mov dword ptr [edx*4 + 0x1296e3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x1296e3e4), (0x1u));
  /* 1294142a mov eax, dword ptr [0x1296e3e0] */
  EAX = (r32((uint32_t)(0x1296e3e0)));
  /* 1294142f mov dword ptr [eax*4 + 0x1296e3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x1296e3f8), (0x0u));
L_1294143a:;
  /* 1294143a mov esi, esp */
  ESI = (ESP);
  /* 1294143c push 1 */
  push32((uint32_t)(0x1u));
  /* 1294143e mov ecx, dword ptr [0x1296e3e0] */
  ECX = (r32((uint32_t)(0x1296e3e0)));
  /* 12941444 lea edx, [ecx*8 + 0x1296e420] */
  EDX = ((uint32_t)(ECX*8 + 0x1296e420));
  /* 1294144b push edx */
  push32((uint32_t)(EDX));
  /* 1294144c call dword ptr [0x129703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703ac))), 0x12941452u);
  /* 12941452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941457 call 0x12941840 */
  push32(0x1294145cu); f_12941840();
  /* 1294145c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294145e jle 0x129414a6 */
  if ((C.zf||C.sf!=C.of)) goto L_129414a6;
  /* 12941460 mov esi, esp */
  ESI = (ESP);
  /* 12941462 push 0 */
  push32((uint32_t)(0x0u));
  /* 12941464 mov eax, dword ptr [0x1296e3e0] */
  EAX = (r32((uint32_t)(0x1296e3e0)));
  /* 12941469 lea ecx, [eax*8 + 0x1296e420] */
  ECX = ((uint32_t)(EAX*8 + 0x1296e420));
  /* 12941470 push ecx */
  push32((uint32_t)(ECX));
  /* 12941471 call dword ptr [0x129703ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703ac))), 0x12941477u);
  /* 12941477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294147a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294147c call 0x12941840 */
  push32(0x12941481u); f_12941840();
  /* 12941481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941483 jne 0x129414a6 */
  if (!C.zf) goto L_129414a6;
  /* 12941485 mov edx, dword ptr [0x1296e3e0] */
  EDX = (r32((uint32_t)(0x1296e3e0)));
  /* 1294148b mov dword ptr [edx*4 + 0x1296e3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x1296e3e4), (0x0u));
  /* 12941496 mov eax, dword ptr [0x1296e3e0] */
  EAX = (r32((uint32_t)(0x1296e3e0)));
  /* 1294149b mov dword ptr [eax*4 + 0x1296e3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x1296e3f8), (0x1u));
L_129414a6:;
  /* 129414a6 jmp 0x129413b4 */
  goto L_129413b4;
L_129414ab:;
  /* 129414ab mov dword ptr [0x1296e448], 0 */
  w32((uint32_t)(0x1296e448), (0x0u));
  /* 129414b5 mov dword ptr [0x1296e44c], 0 */
  w32((uint32_t)(0x1296e44c), (0x0u));
  /* 129414bf mov dword ptr [0x1296e3e0], 0 */
  w32((uint32_t)(0x1296e3e0), (0x0u));
  /* 129414c9 jmp 0x129414da */
  goto L_129414da;
L_129414cb:;
  /* 129414cb mov ecx, dword ptr [0x1296e3e0] */
  ECX = (r32((uint32_t)(0x1296e3e0)));
  /* 129414d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129414d4 mov dword ptr [0x1296e3e0], ecx */
  w32((uint32_t)(0x1296e3e0), (ECX));
L_129414da:;
  /* 129414da cmp dword ptr [0x1296e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1296e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129414e1 jge 0x12941515 */
  if ((C.sf==C.of)) goto L_12941515;
  /* 129414e3 mov edx, dword ptr [0x1296e3e0] */
  EDX = (r32((uint32_t)(0x1296e3e0)));
  /* 129414e9 mov eax, dword ptr [0x1296e448] */
  EAX = (r32((uint32_t)(0x1296e448)));
  /* 129414ee add eax, dword ptr [edx*4 + 0x1296e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1296e3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129414f5 mov dword ptr [0x1296e448], eax */
  w32((uint32_t)(0x1296e448), (EAX));
  /* 129414fa mov ecx, dword ptr [0x1296e3e0] */
  ECX = (r32((uint32_t)(0x1296e3e0)));
  /* 12941500 mov edx, dword ptr [0x1296e44c] */
  EDX = (r32((uint32_t)(0x1296e44c)));
  /* 12941506 add edx, dword ptr [ecx*4 + 0x1296e3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x1296e3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294150d mov dword ptr [0x1296e44c], edx */
  w32((uint32_t)(0x1296e44c), (EDX));
  /* 12941513 jmp 0x129414cb */
  goto L_129414cb;
L_12941515:;
  /* 12941515 cmp dword ptr [0x1296e448], 3 */
  { uint32_t _a=(r32((uint32_t)(0x1296e448))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294151c jl 0x12941520 */
  if ((C.sf!=C.of)) goto L_12941520;
  /* 1294151e jmp 0x1294152e */
  goto L_1294152e;
L_12941520:;
  /* 12941520 cmp dword ptr [0x1296e44c], 3 */
  { uint32_t _a=(r32((uint32_t)(0x1296e44c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941527 jl 0x1294152e */
  if ((C.sf!=C.of)) goto L_1294152e;
  /* 12941529 call 0x1294100f */
  push32(0x1294152eu); f_1294100f();
L_1294152e:;
  /* 1294152e mov esi, esp */
  ESI = (ESP);
  /* 12941530 push 0xa */
  push32((uint32_t)(0xau));
  /* 12941532 call dword ptr [0x129703b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b0))), 0x12941538u);
  /* 12941538 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294153b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294153d call 0x12941840 */
  push32(0x12941542u); f_12941840();
  /* 12941542 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12941547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941549 je 0x12941593 */
  if (C.zf) goto L_12941593;
  /* 1294154b mov esi, esp */
  ESI = (ESP);
  /* 1294154d call dword ptr [0x129703b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b4))), 0x12941553u);
  /* 12941553 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941555 call 0x12941840 */
  push32(0x1294155au); f_12941840();
  /* 1294155a cmp eax, 0xbb80 */
  { uint32_t _a=(EAX),_b=(0xbb80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294155f jle 0x12941593 */
  if ((C.zf||C.sf!=C.of)) goto L_12941593;
  /* 12941561 mov esi, esp */
  ESI = (ESP);
  /* 12941563 push 0 */
  push32((uint32_t)(0x0u));
  /* 12941565 push 0xa */
  push32((uint32_t)(0xau));
  /* 12941567 call dword ptr [0x129703b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b8))), 0x1294156du);
  /* 1294156d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941570 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941572 call 0x12941840 */
  push32(0x12941577u); f_12941840();
  /* 12941577 mov esi, esp */
  ESI = (ESP);
  /* 12941579 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 1294157e push 0x1296905c */
  push32((uint32_t)(0x1296905cu));
  /* 12941583 call dword ptr [0x129703bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703bc))), 0x12941589u);
  /* 12941589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294158c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294158e call 0x12941840 */
  push32(0x12941593u); f_12941840();
L_12941593:;
  /* 12941593 mov esi, esp */
  ESI = (ESP);
  /* 12941595 call dword ptr [0x129703b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b4))), 0x1294159bu);
  /* 1294159b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294159d call 0x12941840 */
  push32(0x129415a2u); f_12941840();
  /* 129415a2 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129415a7 jle 0x129415ae */
  if ((C.zf||C.sf!=C.of)) goto L_129415ae;
  /* 129415a9 call 0x12941019 */
  push32(0x129415aeu); f_12941019();
L_129415ae:;
  /* 129415ae mov esi, esp */
  ESI = (ESP);
  /* 129415b0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 129415b2 call dword ptr [0x129703b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b0))), 0x129415b8u);
  /* 129415b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129415bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129415bd call 0x12941840 */
  push32(0x129415c2u); f_12941840();
  /* 129415c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129415c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129415c9 je 0x12941620 */
  if (C.zf) goto L_12941620;
  /* 129415cb push 0x1296e410 */
  push32((uint32_t)(0x1296e410u));
  /* 129415d0 call 0x12941005 */
  push32(0x129415d5u); f_12941005();
  /* 129415d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129415d8 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129415db jge 0x12941620 */
  if ((C.sf==C.of)) goto L_12941620;
  /* 129415dd mov esi, esp */
  ESI = (ESP);
  /* 129415df push 0 */
  push32((uint32_t)(0x0u));
  /* 129415e1 push 0xf */
  push32((uint32_t)(0xfu));
  /* 129415e3 call dword ptr [0x129703b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b8))), 0x129415e9u);
  /* 129415e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129415ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129415ee call 0x12941840 */
  push32(0x129415f3u); f_12941840();
  /* 129415f3 mov esi, esp */
  ESI = (ESP);
  /* 129415f5 call dword ptr [0x129703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703cc))), 0x129415fbu);
  /* 129415fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129415fd call 0x12941840 */
  push32(0x12941602u); f_12941840();
  /* 12941602 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941605 jne 0x12941620 */
  if (!C.zf) goto L_12941620;
  /* 12941607 mov esi, esp */
  ESI = (ESP);
  /* 12941609 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1294160b push 0x12969054 */
  push32((uint32_t)(0x12969054u));
  /* 12941610 call dword ptr [0x129703bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703bc))), 0x12941616u);
  /* 12941616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294161b call 0x12941840 */
  push32(0x12941620u); f_12941840();
L_12941620:;
  /* 12941620 mov esi, esp */
  ESI = (ESP);
  /* 12941622 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12941624 call dword ptr [0x129703b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b0))), 0x1294162au);
  /* 1294162a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294162d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294162f call 0x12941840 */
  push32(0x12941634u); f_12941840();
  /* 12941634 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12941639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294163b je 0x12941691 */
  if (C.zf) goto L_12941691;
  /* 1294163d push 0x1296e418 */
  push32((uint32_t)(0x1296e418u));
  /* 12941642 call 0x12941005 */
  push32(0x12941647u); f_12941005();
  /* 12941647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294164a cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294164d jge 0x12941691 */
  if ((C.sf==C.of)) goto L_12941691;
  /* 1294164f mov esi, esp */
  ESI = (ESP);
  /* 12941651 push 0 */
  push32((uint32_t)(0x0u));
  /* 12941653 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12941655 call dword ptr [0x129703b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703b8))), 0x1294165bu);
  /* 1294165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941660 call 0x12941840 */
  push32(0x12941665u); f_12941840();
  /* 12941665 mov esi, esp */
  ESI = (ESP);
  /* 12941667 call dword ptr [0x129703cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703cc))), 0x1294166du);
  /* 1294166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294166f call 0x12941840 */
  push32(0x12941674u); f_12941840();
  /* 12941674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941676 jne 0x12941691 */
  if (!C.zf) goto L_12941691;
  /* 12941678 mov esi, esp */
  ESI = (ESP);
  /* 1294167a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1294167c push 0x12969054 */
  push32((uint32_t)(0x12969054u));
  /* 12941681 call dword ptr [0x129703bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703bc))), 0x12941687u);
  /* 12941687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294168a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294168c call 0x12941840 */
  push32(0x12941691u); f_12941840();
L_12941691:;
  /* 12941691 push 0x1296e410 */
  push32((uint32_t)(0x1296e410u));
  /* 12941696 call 0x12941005 */
  push32(0x1294169bu); f_12941005();
  /* 1294169b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294169e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129416a0 jne 0x129416a7 */
  if (!C.zf) goto L_129416a7;
  /* 129416a2 call 0x1294100f */
  push32(0x129416a7u); f_1294100f();
L_129416a7:;
  /* 129416a7 push 0x1296e418 */
  push32((uint32_t)(0x1296e418u));
  /* 129416ac call 0x12941005 */
  push32(0x129416b1u); f_12941005();
  /* 129416b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129416b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129416b6 jne 0x129416bd */
  if (!C.zf) goto L_129416bd;
  /* 129416b8 call 0x12941019 */
  push32(0x129416bdu); f_12941019();
L_129416bd:;
  /* 129416bd pop edi */
  EDI = (pop32());
  /* 129416be pop esi */
  ESI = (pop32());
  /* 129416bf pop ebx */
  EBX = (pop32());
  /* 129416c0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129416c3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129416c5 call 0x12941840 */
  push32(0x129416cau); f_12941840();
  /* 129416ca mov esp, ebp */
  ESP = (EBP);
  /* 129416cc pop ebp */
  EBP = (pop32());
  /* 129416cd ret  */
  ESPCHK(0x12941390u, _esp0);
  ESP += 4; return;
}

/* FUN_100017a0 @ 0x129417a0 (63 bytes, 26 insns) */
void f_129417a0(void) {
  FTRACE(0x129417a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129417a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129417a1 mov ebp, esp */
  EBP = (ESP);
  /* 129417a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129417a6 push ebx */
  push32((uint32_t)(EBX));
  /* 129417a7 push esi */
  push32((uint32_t)(ESI));
  /* 129417a8 push edi */
  push32((uint32_t)(EDI));
  /* 129417a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129417ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129417b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129417b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129417b8 mov esi, esp */
  ESI = (ESP);
  /* 129417ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129417bd push eax */
  push32((uint32_t)(EAX));
  /* 129417be call dword ptr [0x129703a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129703a8))), 0x129417c4u);
  /* 129417c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129417c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129417c9 call 0x12941840 */
  push32(0x129417ceu); f_12941840();
  /* 129417ce pop edi */
  EDI = (pop32());
  /* 129417cf pop esi */
  ESI = (pop32());
  /* 129417d0 pop ebx */
  EBX = (pop32());
  /* 129417d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129417d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129417d6 call 0x12941840 */
  push32(0x129417dbu); f_12941840();
  /* 129417db mov esp, ebp */
  ESP = (EBP);
  /* 129417dd pop ebp */
  EBP = (pop32());
  /* 129417de ret  */
  ESPCHK(0x129417a0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12941840 (56 bytes, 28 insns) */
void f_12941840(void) {
  FTRACE(0x12941840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941840 jne 0x12941843 */
  if (!C.zf) goto L_12941843;
  /* 12941842 ret  */
  ESPCHK(0x12941840u, _esp0);
  ESP += 4; return;
L_12941843:;
  /* 12941843 push ebp */
  push32((uint32_t)(EBP));
  /* 12941844 mov ebp, esp */
  EBP = (ESP);
  /* 12941846 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12941849 push eax */
  push32((uint32_t)(EAX));
  /* 1294184a push edx */
  push32((uint32_t)(EDX));
  /* 1294184b push ebx */
  push32((uint32_t)(EBX));
  /* 1294184c push esi */
  push32((uint32_t)(ESI));
  /* 1294184d push edi */
  push32((uint32_t)(EDI));
  /* 1294184e push 0x12969078 */
  push32((uint32_t)(0x12969078u));
  /* 12941853 push 0x12969074 */
  push32((uint32_t)(0x12969074u));
  /* 12941858 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1294185a push 0x12969064 */
  push32((uint32_t)(0x12969064u));
  /* 1294185f push 1 */
  push32((uint32_t)(0x1u));
  /* 12941861 call 0x12941c10 */
  push32(0x12941866u); f_12941c10();
  /* 12941866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941869 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294186c jne 0x1294186f */
  if (!C.zf) goto L_1294186f;
  /* 1294186e int3  */
  x86_unimpl("int3 @ 0x1294186e");
L_1294186f:;
  /* 1294186f pop edi */
  EDI = (pop32());
  /* 12941870 pop esi */
  ESI = (pop32());
  /* 12941871 pop ebx */
  EBX = (pop32());
  /* 12941872 pop edx */
  EDX = (pop32());
  /* 12941873 pop eax */
  EAX = (pop32());
  /* 12941874 mov esp, ebp */
  ESP = (EBP);
  /* 12941876 pop ebp */
  EBP = (pop32());
  /* 12941877 ret  */
  ESPCHK(0x12941840u, _esp0);
  ESP += 4; return;
}

/* FUN_10001880 @ 0x12941880 (313 bytes, 78 insns) */
void f_12941880(void) {
  FTRACE(0x12941880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941880 push ebp */
  push32((uint32_t)(EBP));
  /* 12941881 mov ebp, esp */
  EBP = (ESP);
  /* 12941883 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941887 jne 0x12941947 */
  if (!C.zf) goto L_12941947;
  /* 1294188d call dword ptr [0x12970258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970258))), 0x12941893u);
  /* 12941893 mov dword ptr [0x1296e488], eax */
  w32((uint32_t)(0x1296e488), (EAX));
  /* 12941898 push 1 */
  push32((uint32_t)(0x1u));
  /* 1294189a call 0x12945340 */
  push32(0x1294189fu); f_12945340();
  /* 1294189f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129418a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129418a4 jne 0x129418ad */
  if (!C.zf) goto L_129418ad;
  /* 129418a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129418a8 jmp 0x129419b5 */
  goto L_129419b5;
L_129418ad:;
  /* 129418ad mov eax, dword ptr [0x1296e488] */
  EAX = (r32((uint32_t)(0x1296e488)));
  /* 129418b2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129418b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129418ba mov dword ptr [0x1296e494], eax */
  w32((uint32_t)(0x1296e494), (EAX));
  /* 129418bf mov ecx, dword ptr [0x1296e488] */
  ECX = (r32((uint32_t)(0x1296e488)));
  /* 129418c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129418cb mov dword ptr [0x1296e490], ecx */
  w32((uint32_t)(0x1296e490), (ECX));
  /* 129418d1 mov edx, dword ptr [0x1296e490] */
  EDX = (r32((uint32_t)(0x1296e490)));
  /* 129418d7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 129418da add edx, dword ptr [0x1296e494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296e494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129418e0 mov dword ptr [0x1296e48c], edx */
  w32((uint32_t)(0x1296e48c), (EDX));
  /* 129418e6 mov eax, dword ptr [0x1296e488] */
  EAX = (r32((uint32_t)(0x1296e488)));
  /* 129418eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129418ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129418f3 mov dword ptr [0x1296e488], eax */
  w32((uint32_t)(0x1296e488), (EAX));
  /* 129418f8 call 0x129424b0 */
  push32(0x129418fdu); f_129424b0();
  /* 129418fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129418ff jne 0x1294190d */
  if (!C.zf) goto L_1294190d;
  /* 12941901 call 0x12945390 */
  push32(0x12941906u); f_12945390();
  /* 12941906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12941908 jmp 0x129419b5 */
  goto L_129419b5;
L_1294190d:;
  /* 1294190d call dword ptr [0x12970254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970254))), 0x12941913u);
  /* 12941913 mov dword ptr [0x1296ffcc], eax */
  w32((uint32_t)(0x1296ffcc), (EAX));
  /* 12941918 call 0x12945120 */
  push32(0x1294191du); f_12945120();
  /* 1294191d mov dword ptr [0x1296e470], eax */
  w32((uint32_t)(0x1296e470), (EAX));
  /* 12941922 call 0x12942760 */
  push32(0x12941927u); f_12942760();
  /* 12941927 call 0x12944c10 */
  push32(0x1294192cu); f_12944c10();
  /* 1294192c call 0x12944ac0 */
  push32(0x12941931u); f_12944ac0();
  /* 12941931 call 0x129422b0 */
  push32(0x12941936u); f_129422b0();
  /* 12941936 mov ecx, dword ptr [0x1296e46c] */
  ECX = (r32((uint32_t)(0x1296e46c)));
  /* 1294193c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294193f mov dword ptr [0x1296e46c], ecx */
  w32((uint32_t)(0x1296e46c), (ECX));
  /* 12941945 jmp 0x129419b0 */
  goto L_129419b0;
L_12941947:;
  /* 12941947 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294194b jne 0x129419a0 */
  if (!C.zf) goto L_129419a0;
  /* 1294194d cmp dword ptr [0x1296e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941954 jle 0x1294199a */
  if ((C.zf||C.sf!=C.of)) goto L_1294199a;
  /* 12941956 mov edx, dword ptr [0x1296e46c] */
  EDX = (r32((uint32_t)(0x1296e46c)));
  /* 1294195c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294195f mov dword ptr [0x1296e46c], edx */
  w32((uint32_t)(0x1296e46c), (EDX));
  /* 12941965 cmp dword ptr [0x1296e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294196c jne 0x12941973 */
  if (!C.zf) goto L_12941973;
  /* 1294196e call 0x12942330 */
  push32(0x12941973u); f_12942330();
L_12941973:;
  /* 12941973 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12941975 call 0x12944060 */
  push32(0x1294197au); f_12944060();
  /* 1294197a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294197d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12941980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941982 je 0x12941989 */
  if (C.zf) goto L_12941989;
  /* 12941984 call 0x12944970 */
  push32(0x12941989u); f_12944970();
L_12941989:;
  /* 12941989 call 0x12942a90 */
  push32(0x1294198eu); f_12942a90();
  /* 1294198e call 0x12942540 */
  push32(0x12941993u); f_12942540();
  /* 12941993 call 0x12945390 */
  push32(0x12941998u); f_12945390();
  /* 12941998 jmp 0x1294199e */
  goto L_1294199e;
L_1294199a:;
  /* 1294199a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294199c jmp 0x129419b5 */
  goto L_129419b5;
L_1294199e:;
  /* 1294199e jmp 0x129419b0 */
  goto L_129419b0;
L_129419a0:;
  /* 129419a0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129419a4 jne 0x129419b0 */
  if (!C.zf) goto L_129419b0;
  /* 129419a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129419a8 call 0x12942630 */
  push32(0x129419adu); f_12942630();
  /* 129419ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129419b0:;
  /* 129419b0 mov eax, 1 */
  EAX = (0x1u);
L_129419b5:;
  /* 129419b5 pop ebp */
  EBP = (pop32());
  /* 129419b6 ret 0xc */
  ESPCHK(0x12941880u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x129419c0 (243 bytes, 86 insns) */
void f_129419c0(void) {
  FTRACE(0x129419c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129419c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129419c1 mov ebp, esp */
  EBP = (ESP);
  /* 129419c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129419c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129419cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129419cf jne 0x129419e1 */
  if (!C.zf) goto L_129419e1;
  /* 129419d1 cmp dword ptr [0x1296e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129419d8 jne 0x129419e1 */
  if (!C.zf) goto L_129419e1;
  /* 129419da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129419dc jmp 0x12941aad */
  goto L_12941aad;
L_129419e1:;
  /* 129419e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129419e5 je 0x129419ed */
  if (C.zf) goto L_129419ed;
  /* 129419e7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129419eb jne 0x12941a2f */
  if (!C.zf) goto L_12941a2f;
L_129419ed:;
  /* 129419ed cmp dword ptr [0x1296ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129419f4 je 0x12941a0b */
  if (C.zf) goto L_12941a0b;
  /* 129419f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129419f9 push eax */
  push32((uint32_t)(EAX));
  /* 129419fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129419fd push ecx */
  push32((uint32_t)(ECX));
  /* 129419fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941a01 push edx */
  push32((uint32_t)(EDX));
  /* 12941a02 call dword ptr [0x1296ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296ffdc))), 0x12941a08u);
  /* 12941a08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12941a0b:;
  /* 12941a0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a0f je 0x12941a25 */
  if (C.zf) goto L_12941a25;
  /* 12941a11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941a14 push eax */
  push32((uint32_t)(EAX));
  /* 12941a15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941a18 push ecx */
  push32((uint32_t)(ECX));
  /* 12941a19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941a1c push edx */
  push32((uint32_t)(EDX));
  /* 12941a1d call 0x12941880 */
  push32(0x12941a22u); f_12941880();
  /* 12941a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12941a25:;
  /* 12941a25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a29 jne 0x12941a2f */
  if (!C.zf) goto L_12941a2f;
  /* 12941a2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12941a2d jmp 0x12941aad */
  goto L_12941aad;
L_12941a2f:;
  /* 12941a2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941a32 push eax */
  push32((uint32_t)(EAX));
  /* 12941a33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941a36 push ecx */
  push32((uint32_t)(ECX));
  /* 12941a37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941a3a push edx */
  push32((uint32_t)(EDX));
  /* 12941a3b call 0x12941014 */
  push32(0x12941a40u); f_12941014();
  /* 12941a40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12941a43 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a47 jne 0x12941a5e */
  if (!C.zf) goto L_12941a5e;
  /* 12941a49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a4d jne 0x12941a5e */
  if (!C.zf) goto L_12941a5e;
  /* 12941a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941a52 push eax */
  push32((uint32_t)(EAX));
  /* 12941a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12941a55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941a58 push ecx */
  push32((uint32_t)(ECX));
  /* 12941a59 call 0x12941880 */
  push32(0x12941a5eu); f_12941880();
L_12941a5e:;
  /* 12941a5e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a62 je 0x12941a6a */
  if (C.zf) goto L_12941a6a;
  /* 12941a64 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a68 jne 0x12941aaa */
  if (!C.zf) goto L_12941aaa;
L_12941a6a:;
  /* 12941a6a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941a6d push edx */
  push32((uint32_t)(EDX));
  /* 12941a6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941a71 push eax */
  push32((uint32_t)(EAX));
  /* 12941a72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12941a76 call 0x12941880 */
  push32(0x12941a7bu); f_12941880();
  /* 12941a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941a7d jne 0x12941a86 */
  if (!C.zf) goto L_12941a86;
  /* 12941a7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12941a86:;
  /* 12941a86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a8a je 0x12941aaa */
  if (C.zf) goto L_12941aaa;
  /* 12941a8c cmp dword ptr [0x1296ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941a93 je 0x12941aaa */
  if (C.zf) goto L_12941aaa;
  /* 12941a95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941a98 push edx */
  push32((uint32_t)(EDX));
  /* 12941a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941a9c push eax */
  push32((uint32_t)(EAX));
  /* 12941a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12941aa1 call dword ptr [0x1296ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296ffdc))), 0x12941aa7u);
  /* 12941aa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12941aaa:;
  /* 12941aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12941aad:;
  /* 12941aad mov esp, ebp */
  ESP = (EBP);
  /* 12941aaf pop ebp */
  EBP = (pop32());
  /* 12941ab0 ret 0xc */
  ESPCHK(0x129419c0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12941ac0 (58 bytes, 18 insns) */
void f_12941ac0(void) {
  FTRACE(0x12941ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12941ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12941ac3 cmp dword ptr [0x1296e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941aca je 0x12941ade */
  if (C.zf) goto L_12941ade;
  /* 12941acc cmp dword ptr [0x1296e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941ad3 jne 0x12941ae3 */
  if (!C.zf) goto L_12941ae3;
  /* 12941ad5 cmp dword ptr [0x1296e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941adc jne 0x12941ae3 */
  if (!C.zf) goto L_12941ae3;
L_12941ade:;
  /* 12941ade call 0x12945430 */
  push32(0x12941ae3u); f_12945430();
L_12941ae3:;
  /* 12941ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941ae6 push eax */
  push32((uint32_t)(EAX));
  /* 12941ae7 call 0x12945480 */
  push32(0x12941aecu); f_12945480();
  /* 12941aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941aef push 0xff */
  push32((uint32_t)(0xffu));
  /* 12941af4 call dword ptr [0x1296ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296ca30))), 0x12941afau);
  /* 12941afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941afd pop ebp */
  EBP = (pop32());
  /* 12941afe ret  */
  ESPCHK(0x12941ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b00 @ 0x12941b00 (11 bytes, 5 insns) */
void f_12941b00(void) {
  FTRACE(0x12941b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12941b01 mov ebp, esp */
  EBP = (ESP);
  /* 12941b03 call dword ptr [0x1297025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297025c))), 0x12941b09u);
  /* 12941b09 pop ebp */
  EBP = (pop32());
  /* 12941b0a ret  */
  ESPCHK(0x12941b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b10 @ 0x12941b10 (87 bytes, 30 insns) */
void f_12941b10(void) {
  FTRACE(0x12941b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12941b11 mov ebp, esp */
  EBP = (ESP);
  /* 12941b13 push ecx */
  push32((uint32_t)(ECX));
  /* 12941b14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941b18 jl 0x12941b20 */
  if ((C.sf!=C.of)) goto L_12941b20;
  /* 12941b1a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941b1e jl 0x12941b25 */
  if ((C.sf!=C.of)) goto L_12941b25;
L_12941b20:;
  /* 12941b20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12941b23 jmp 0x12941b63 */
  goto L_12941b63;
L_12941b25:;
  /* 12941b25 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941b29 jne 0x12941b37 */
  if (!C.zf) goto L_12941b37;
  /* 12941b2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941b2e mov eax, dword ptr [eax*4 + 0x1296ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1296ca38)));
  /* 12941b35 jmp 0x12941b63 */
  goto L_12941b63;
L_12941b37:;
  /* 12941b37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941b3a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12941b3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12941b3f je 0x12941b46 */
  if (C.zf) goto L_12941b46;
  /* 12941b41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12941b44 jmp 0x12941b63 */
  goto L_12941b63;
L_12941b46:;
  /* 12941b46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941b49 mov eax, dword ptr [edx*4 + 0x1296ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296ca38)));
  /* 12941b50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12941b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941b59 mov dword ptr [ecx*4 + 0x1296ca38], edx */
  w32((uint32_t)(ECX*4 + 0x1296ca38), (EDX));
  /* 12941b60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12941b63:;
  /* 12941b63 mov esp, ebp */
  ESP = (EBP);
  /* 12941b65 pop ebp */
  EBP = (pop32());
  /* 12941b66 ret  */
  ESPCHK(0x12941b10u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12941b70 (126 bytes, 38 insns) */
void f_12941b70(void) {
  FTRACE(0x12941b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12941b71 mov ebp, esp */
  EBP = (ESP);
  /* 12941b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12941b74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941b78 jl 0x12941b80 */
  if ((C.sf!=C.of)) goto L_12941b80;
  /* 12941b7a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941b7e jl 0x12941b87 */
  if ((C.sf!=C.of)) goto L_12941b87;
L_12941b80:;
  /* 12941b80 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12941b85 jmp 0x12941bea */
  goto L_12941bea;
L_12941b87:;
  /* 12941b87 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941b8b jne 0x12941b99 */
  if (!C.zf) goto L_12941b99;
  /* 12941b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941b90 mov eax, dword ptr [eax*4 + 0x1296ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1296ca44)));
  /* 12941b97 jmp 0x12941bea */
  goto L_12941bea;
L_12941b99:;
  /* 12941b99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941b9c mov edx, dword ptr [ecx*4 + 0x1296ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca44)));
  /* 12941ba3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12941ba6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941baa jne 0x12941bc0 */
  if (!C.zf) goto L_12941bc0;
  /* 12941bac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12941bae call dword ptr [0x12970260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970260))), 0x12941bb4u);
  /* 12941bb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941bb7 mov dword ptr [ecx*4 + 0x1296ca44], eax */
  w32((uint32_t)(ECX*4 + 0x1296ca44), (EAX));
  /* 12941bbe jmp 0x12941be7 */
  goto L_12941be7;
L_12941bc0:;
  /* 12941bc0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941bc4 jne 0x12941bda */
  if (!C.zf) goto L_12941bda;
  /* 12941bc6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12941bc8 call dword ptr [0x12970260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970260))), 0x12941bceu);
  /* 12941bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941bd1 mov dword ptr [edx*4 + 0x1296ca44], eax */
  w32((uint32_t)(EDX*4 + 0x1296ca44), (EAX));
  /* 12941bd8 jmp 0x12941be7 */
  goto L_12941be7;
L_12941bda:;
  /* 12941bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941bdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941be0 mov dword ptr [eax*4 + 0x1296ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x1296ca44), (ECX));
L_12941be7:;
  /* 12941be7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12941bea:;
  /* 12941bea mov esp, ebp */
  ESP = (EBP);
  /* 12941bec pop ebp */
  EBP = (pop32());
  /* 12941bed ret  */
  ESPCHK(0x12941b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bf0 @ 0x12941bf0 (28 bytes, 11 insns) */
void f_12941bf0(void) {
  FTRACE(0x12941bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12941bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12941bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12941bf4 mov eax, dword ptr [0x1296ffc0] */
  EAX = (r32((uint32_t)(0x1296ffc0)));
  /* 12941bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12941bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941bff mov dword ptr [0x1296ffc0], ecx */
  w32((uint32_t)(0x1296ffc0), (ECX));
  /* 12941c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12941c08 mov esp, ebp */
  ESP = (EBP);
  /* 12941c0a pop ebp */
  EBP = (pop32());
  /* 12941c0b ret  */
  ESPCHK(0x12941bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c10 @ 0x12941c10 (912 bytes, 248 insns) */
void f_12941c10(void) {
  FTRACE(0x12941c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12941c11 mov ebp, esp */
  EBP = (ESP);
  /* 12941c13 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12941c18 call 0x12945cf0 */
  push32(0x12941c1du); f_12945cf0();
  /* 12941c1d push edi */
  push32((uint32_t)(EDI));
  /* 12941c1e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12941c25 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12941c2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12941c2c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12941c32 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12941c34 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12941c36 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12941c37 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12941c3e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12941c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12941c45 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12941c4b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12941c4d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12941c4f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12941c50 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12941c57 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12941c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12941c5e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12941c64 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12941c66 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12941c68 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12941c69 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12941c6c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12941c72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941c76 jl 0x12941c7e */
  if ((C.sf!=C.of)) goto L_12941c7e;
  /* 12941c78 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941c7c jl 0x12941c86 */
  if ((C.sf!=C.of)) goto L_12941c86;
L_12941c7e:;
  /* 12941c7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12941c81 jmp 0x12941f9b */
  goto L_12941f9b;
L_12941c86:;
  /* 12941c86 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941c8a jne 0x12941d30 */
  if (!C.zf) goto L_12941d30;
  /* 12941c90 push 0x1296ca34 */
  push32((uint32_t)(0x1296ca34u));
  /* 12941c95 call dword ptr [0x12970278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970278))), 0x12941c9bu);
  /* 12941c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941c9d jle 0x12941d30 */
  if ((C.zf||C.sf!=C.of)) goto L_12941d30;
  /* 12941ca3 cmp dword ptr [0x1296e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941caa jne 0x12941cee */
  if (!C.zf) goto L_12941cee;
  /* 12941cac push 0x12969220 */
  push32((uint32_t)(0x12969220u));
  /* 12941cb1 call dword ptr [0x12970274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970274))), 0x12941cb7u);
  /* 12941cb7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12941cbd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941cc4 je 0x12941ce6 */
  if (C.zf) goto L_12941ce6;
  /* 12941cc6 push 0x12969214 */
  push32((uint32_t)(0x12969214u));
  /* 12941ccb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12941cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12941cd2 call dword ptr [0x12970270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970270))), 0x12941cd8u);
  /* 12941cd8 mov dword ptr [0x1296e480], eax */
  w32((uint32_t)(0x1296e480), (EAX));
  /* 12941cdd cmp dword ptr [0x1296e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941ce4 jne 0x12941cee */
  if (!C.zf) goto L_12941cee;
L_12941ce6:;
  /* 12941ce6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12941ce9 jmp 0x12941f9b */
  goto L_12941f9b;
L_12941cee:;
  /* 12941cee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941cf1 push edx */
  push32((uint32_t)(EDX));
  /* 12941cf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941cf5 push eax */
  push32((uint32_t)(EAX));
  /* 12941cf6 push 0x129691e0 */
  push32((uint32_t)(0x129691e0u));
  /* 12941cfb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12941d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12941d02 call dword ptr [0x1296e480] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e480))), 0x12941d08u);
  /* 12941d08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941d0b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12941d11 push edx */
  push32((uint32_t)(EDX));
  /* 12941d12 call dword ptr [0x1297026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297026c))), 0x12941d18u);
  /* 12941d18 push 0x1296ca34 */
  push32((uint32_t)(0x1296ca34u));
  /* 12941d1d call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x12941d23u);
  /* 12941d23 call 0x12941b00 */
  push32(0x12941d28u); f_12941b00();
  /* 12941d28 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12941d2b jmp 0x12941f9b */
  goto L_12941f9b;
L_12941d30:;
  /* 12941d30 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941d34 je 0x12941d6d */
  if (C.zf) goto L_12941d6d;
  /* 12941d36 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12941d3c push eax */
  push32((uint32_t)(EAX));
  /* 12941d3d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12941d40 push ecx */
  push32((uint32_t)(ECX));
  /* 12941d41 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12941d46 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12941d4c push edx */
  push32((uint32_t)(EDX));
  /* 12941d4d call 0x12945bf0 */
  push32(0x12941d52u); f_12945bf0();
  /* 12941d52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941d57 jge 0x12941d6d */
  if ((C.sf==C.of)) goto L_12941d6d;
  /* 12941d59 push 0x129691b4 */
  push32((uint32_t)(0x129691b4u));
  /* 12941d5e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12941d64 push eax */
  push32((uint32_t)(EAX));
  /* 12941d65 call 0x12945b00 */
  push32(0x12941d6au); f_12945b00();
  /* 12941d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12941d6d:;
  /* 12941d6d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941d71 jne 0x12941da5 */
  if (!C.zf) goto L_12941da5;
  /* 12941d73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941d77 je 0x12941d85 */
  if (C.zf) goto L_12941d85;
  /* 12941d79 mov dword ptr [ebp - 0x3028], 0x129691a0 */
  w32((uint32_t)(EBP + -0x3028), (0x129691a0u));
  /* 12941d83 jmp 0x12941d8f */
  goto L_12941d8f;
L_12941d85:;
  /* 12941d85 mov dword ptr [ebp - 0x3028], 0x1296918c */
  w32((uint32_t)(EBP + -0x3028), (0x1296918cu));
L_12941d8f:;
  /* 12941d8f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12941d95 push ecx */
  push32((uint32_t)(ECX));
  /* 12941d96 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12941d9c push edx */
  push32((uint32_t)(EDX));
  /* 12941d9d call 0x12945b00 */
  push32(0x12941da2u); f_12945b00();
  /* 12941da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12941da5:;
  /* 12941da5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12941dab push eax */
  push32((uint32_t)(EAX));
  /* 12941dac lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12941db2 push ecx */
  push32((uint32_t)(ECX));
  /* 12941db3 call 0x12945b10 */
  push32(0x12941db8u); f_12945b10();
  /* 12941db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941dbb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941dbf jne 0x12941dfa */
  if (!C.zf) goto L_12941dfa;
  /* 12941dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941dc4 mov eax, dword ptr [edx*4 + 0x1296ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296ca38)));
  /* 12941dcb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12941dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941dd0 je 0x12941de6 */
  if (C.zf) goto L_12941de6;
  /* 12941dd2 push 0x12969188 */
  push32((uint32_t)(0x12969188u));
  /* 12941dd7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12941ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12941dde call 0x12945b10 */
  push32(0x12941de3u); f_12945b10();
  /* 12941de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12941de6:;
  /* 12941de6 push 0x12969184 */
  push32((uint32_t)(0x12969184u));
  /* 12941deb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12941df1 push edx */
  push32((uint32_t)(EDX));
  /* 12941df2 call 0x12945b10 */
  push32(0x12941df7u); f_12945b10();
  /* 12941df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12941dfa:;
  /* 12941dfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941dfe je 0x12941e42 */
  if (C.zf) goto L_12941e42;
  /* 12941e00 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12941e06 push eax */
  push32((uint32_t)(EAX));
  /* 12941e07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941e0a push ecx */
  push32((uint32_t)(ECX));
  /* 12941e0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941e0e push edx */
  push32((uint32_t)(EDX));
  /* 12941e0f push 0x12969178 */
  push32((uint32_t)(0x12969178u));
  /* 12941e14 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12941e19 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12941e1f push eax */
  push32((uint32_t)(EAX));
  /* 12941e20 call 0x12945a00 */
  push32(0x12941e25u); f_12945a00();
  /* 12941e25 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941e2a jge 0x12941e40 */
  if ((C.sf==C.of)) goto L_12941e40;
  /* 12941e2c push 0x129691b4 */
  push32((uint32_t)(0x129691b4u));
  /* 12941e31 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12941e37 push ecx */
  push32((uint32_t)(ECX));
  /* 12941e38 call 0x12945b00 */
  push32(0x12941e3du); f_12945b00();
  /* 12941e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12941e40:;
  /* 12941e40 jmp 0x12941e58 */
  goto L_12941e58;
L_12941e42:;
  /* 12941e42 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12941e48 push edx */
  push32((uint32_t)(EDX));
  /* 12941e49 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12941e4f push eax */
  push32((uint32_t)(EAX));
  /* 12941e50 call 0x12945b00 */
  push32(0x12941e55u); f_12945b00();
  /* 12941e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12941e58:;
  /* 12941e58 cmp dword ptr [0x1296ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941e5f je 0x12941e9c */
  if (C.zf) goto L_12941e9c;
  /* 12941e61 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12941e67 push ecx */
  push32((uint32_t)(ECX));
  /* 12941e68 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12941e6e push edx */
  push32((uint32_t)(EDX));
  /* 12941e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941e72 push eax */
  push32((uint32_t)(EAX));
  /* 12941e73 call dword ptr [0x1296ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296ffc0))), 0x12941e79u);
  /* 12941e79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941e7e je 0x12941e9c */
  if (C.zf) goto L_12941e9c;
  /* 12941e80 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941e84 jne 0x12941e91 */
  if (!C.zf) goto L_12941e91;
  /* 12941e86 push 0x1296ca34 */
  push32((uint32_t)(0x1296ca34u));
  /* 12941e8b call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x12941e91u);
L_12941e91:;
  /* 12941e91 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12941e97 jmp 0x12941f9b */
  goto L_12941f9b;
L_12941e9c:;
  /* 12941e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941e9f mov edx, dword ptr [ecx*4 + 0x1296ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca38)));
  /* 12941ea6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12941ea9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12941eab je 0x12941eeb */
  if (C.zf) goto L_12941eeb;
  /* 12941ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941eb0 cmp dword ptr [eax*4 + 0x1296ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1296ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941eb8 je 0x12941eeb */
  if (C.zf) goto L_12941eeb;
  /* 12941eba push 0 */
  push32((uint32_t)(0x0u));
  /* 12941ebc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12941ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 12941ec3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12941ec9 push edx */
  push32((uint32_t)(EDX));
  /* 12941eca call 0x12945980 */
  push32(0x12941ecfu); f_12945980();
  /* 12941ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941ed2 push eax */
  push32((uint32_t)(EAX));
  /* 12941ed3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12941ed9 push eax */
  push32((uint32_t)(EAX));
  /* 12941eda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941edd mov edx, dword ptr [ecx*4 + 0x1296ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca44)));
  /* 12941ee4 push edx */
  push32((uint32_t)(EDX));
  /* 12941ee5 call dword ptr [0x12970264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970264))), 0x12941eebu);
L_12941eeb:;
  /* 12941eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941eee mov ecx, dword ptr [eax*4 + 0x1296ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296ca38)));
  /* 12941ef5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12941ef8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12941efa je 0x12941f09 */
  if (C.zf) goto L_12941f09;
  /* 12941efc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12941f02 push edx */
  push32((uint32_t)(EDX));
  /* 12941f03 call dword ptr [0x1297026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297026c))), 0x12941f09u);
L_12941f09:;
  /* 12941f09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941f0c mov ecx, dword ptr [eax*4 + 0x1296ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296ca38)));
  /* 12941f13 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12941f16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12941f18 je 0x12941f88 */
  if (C.zf) goto L_12941f88;
  /* 12941f1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941f1e je 0x12941f3d */
  if (C.zf) goto L_12941f3d;
  /* 12941f20 push 0xa */
  push32((uint32_t)(0xau));
  /* 12941f22 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12941f28 push edx */
  push32((uint32_t)(EDX));
  /* 12941f29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12941f2c push eax */
  push32((uint32_t)(EAX));
  /* 12941f2d call 0x12945690 */
  push32(0x12941f32u); f_12945690();
  /* 12941f32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941f35 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12941f3b jmp 0x12941f47 */
  goto L_12941f47;
L_12941f3d:;
  /* 12941f3d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12941f47:;
  /* 12941f47 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12941f4d push ecx */
  push32((uint32_t)(ECX));
  /* 12941f4e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12941f51 push edx */
  push32((uint32_t)(EDX));
  /* 12941f52 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12941f58 push eax */
  push32((uint32_t)(EAX));
  /* 12941f59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12941f5c push ecx */
  push32((uint32_t)(ECX));
  /* 12941f5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12941f60 push edx */
  push32((uint32_t)(EDX));
  /* 12941f61 call 0x12941fa0 */
  push32(0x12941f66u); f_12941fa0();
  /* 12941f66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941f69 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12941f6f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941f73 jne 0x12941f80 */
  if (!C.zf) goto L_12941f80;
  /* 12941f75 push 0x1296ca34 */
  push32((uint32_t)(0x1296ca34u));
  /* 12941f7a call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x12941f80u);
L_12941f80:;
  /* 12941f80 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12941f86 jmp 0x12941f9b */
  goto L_12941f9b;
L_12941f88:;
  /* 12941f88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941f8c jne 0x12941f99 */
  if (!C.zf) goto L_12941f99;
  /* 12941f8e push 0x1296ca34 */
  push32((uint32_t)(0x1296ca34u));
  /* 12941f93 call dword ptr [0x12970268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970268))), 0x12941f99u);
L_12941f99:;
  /* 12941f99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12941f9b:;
  /* 12941f9b pop edi */
  EDI = (pop32());
  /* 12941f9c mov esp, ebp */
  ESP = (EBP);
  /* 12941f9e pop ebp */
  EBP = (pop32());
  /* 12941f9f ret  */
  ESPCHK(0x12941c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fa0 @ 0x12941fa0 (780 bytes, 197 insns) */
void f_12941fa0(void) {
  FTRACE(0x12941fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12941fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12941fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12941fa3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12941fa8 call 0x12945cf0 */
  push32(0x12941fadu); f_12945cf0();
L_12941fad:;
  /* 12941fad cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941fb1 jne 0x12941fd8 */
  if (!C.zf) goto L_12941fd8;
  /* 12941fb3 push 0x12969370 */
  push32((uint32_t)(0x12969370u));
  /* 12941fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12941fba push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12941fbf push 0x12969364 */
  push32((uint32_t)(0x12969364u));
  /* 12941fc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12941fc6 call 0x12941c10 */
  push32(0x12941fcbu); f_12941c10();
  /* 12941fcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12941fce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12941fd1 jne 0x12941fd8 */
  if (!C.zf) goto L_12941fd8;
  /* 12941fd3 call 0x12941b00 */
  push32(0x12941fd8u); f_12941b00();
L_12941fd8:;
  /* 12941fd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12941fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941fdc jne 0x12941fad */
  if (!C.zf) goto L_12941fad;
  /* 12941fde push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12941fe3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12941fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 12941fea push 0 */
  push32((uint32_t)(0x0u));
  /* 12941fec call dword ptr [0x1297027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297027c))), 0x12941ff2u);
  /* 12941ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12941ff4 jne 0x1294200a */
  if (!C.zf) goto L_1294200a;
  /* 12941ff6 push 0x1296934c */
  push32((uint32_t)(0x1296934cu));
  /* 12941ffb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12942001 push edx */
  push32((uint32_t)(EDX));
  /* 12942002 call 0x12945b00 */
  push32(0x12942007u); f_12945b00();
  /* 12942007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294200a:;
  /* 1294200a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12942010 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12942013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942016 push ecx */
  push32((uint32_t)(ECX));
  /* 12942017 call 0x12945980 */
  push32(0x1294201cu); f_12945980();
  /* 1294201c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294201f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942022 jbe 0x1294204d */
  if ((C.cf||C.zf)) goto L_1294204d;
  /* 12942024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942027 push edx */
  push32((uint32_t)(EDX));
  /* 12942028 call 0x12945980 */
  push32(0x1294202du); f_12945980();
  /* 1294202d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942030 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942033 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12942037 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294203a push 3 */
  push32((uint32_t)(0x3u));
  /* 1294203c push 0x12969348 */
  push32((uint32_t)(0x12969348u));
  /* 12942041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942044 push eax */
  push32((uint32_t)(EAX));
  /* 12942045 call 0x12946370 */
  push32(0x1294204au); f_12946370();
  /* 1294204a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294204d:;
  /* 1294204d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942050 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12942056 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294205d je 0x129420a8 */
  if (C.zf) goto L_129420a8;
  /* 1294205f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12942065 push edx */
  push32((uint32_t)(EDX));
  /* 12942066 call 0x12945980 */
  push32(0x1294206bu); f_12945980();
  /* 1294206b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294206e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942071 jbe 0x129420a8 */
  if ((C.cf||C.zf)) goto L_129420a8;
  /* 12942073 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12942079 push eax */
  push32((uint32_t)(EAX));
  /* 1294207a call 0x12945980 */
  push32(0x1294207fu); f_12945980();
  /* 1294207f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942082 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12942088 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1294208c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12942092 push 3 */
  push32((uint32_t)(0x3u));
  /* 12942094 push 0x12969348 */
  push32((uint32_t)(0x12969348u));
  /* 12942099 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1294209f push eax */
  push32((uint32_t)(EAX));
  /* 129420a0 call 0x12946370 */
  push32(0x129420a5u); f_12946370();
  /* 129420a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129420a8:;
  /* 129420a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129420ac jne 0x129420ba */
  if (!C.zf) goto L_129420ba;
  /* 129420ae mov dword ptr [ebp - 0x1114], 0x129692d4 */
  w32((uint32_t)(EBP + -0x1114), (0x129692d4u));
  /* 129420b8 jmp 0x129420c4 */
  goto L_129420c4;
L_129420ba:;
  /* 129420ba mov dword ptr [ebp - 0x1114], 0x12969074 */
  w32((uint32_t)(EBP + -0x1114), (0x12969074u));
L_129420c4:;
  /* 129420c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129420c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129420ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129420cc je 0x129420d9 */
  if (C.zf) goto L_129420d9;
  /* 129420ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129420d1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 129420d7 jmp 0x129420e3 */
  goto L_129420e3;
L_129420d9:;
  /* 129420d9 mov dword ptr [ebp - 0x1118], 0x12969074 */
  w32((uint32_t)(EBP + -0x1118), (0x12969074u));
L_129420e3:;
  /* 129420e3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129420e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129420e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129420eb je 0x129420ff */
  if (C.zf) goto L_129420ff;
  /* 129420ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129420f1 jne 0x129420ff */
  if (!C.zf) goto L_129420ff;
  /* 129420f3 mov dword ptr [ebp - 0x111c], 0x129692c4 */
  w32((uint32_t)(EBP + -0x111c), (0x129692c4u));
  /* 129420fd jmp 0x12942109 */
  goto L_12942109;
L_129420ff:;
  /* 129420ff mov dword ptr [ebp - 0x111c], 0x12969074 */
  w32((uint32_t)(EBP + -0x111c), (0x12969074u));
L_12942109:;
  /* 12942109 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294210c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294210f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12942111 je 0x1294211f */
  if (C.zf) goto L_1294211f;
  /* 12942113 mov dword ptr [ebp - 0x1120], 0x129692c0 */
  w32((uint32_t)(EBP + -0x1120), (0x129692c0u));
  /* 1294211d jmp 0x12942129 */
  goto L_12942129;
L_1294211f:;
  /* 1294211f mov dword ptr [ebp - 0x1120], 0x12969074 */
  w32((uint32_t)(EBP + -0x1120), (0x12969074u));
L_12942129:;
  /* 12942129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294212d je 0x1294213a */
  if (C.zf) goto L_1294213a;
  /* 1294212f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942132 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12942138 jmp 0x12942144 */
  goto L_12942144;
L_1294213a:;
  /* 1294213a mov dword ptr [ebp - 0x1124], 0x12969074 */
  w32((uint32_t)(EBP + -0x1124), (0x12969074u));
L_12942144:;
  /* 12942144 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942148 je 0x12942156 */
  if (C.zf) goto L_12942156;
  /* 1294214a mov dword ptr [ebp - 0x1128], 0x129692b8 */
  w32((uint32_t)(EBP + -0x1128), (0x129692b8u));
  /* 12942154 jmp 0x12942160 */
  goto L_12942160;
L_12942156:;
  /* 12942156 mov dword ptr [ebp - 0x1128], 0x12969074 */
  w32((uint32_t)(EBP + -0x1128), (0x12969074u));
L_12942160:;
  /* 12942160 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942164 je 0x12942171 */
  if (C.zf) goto L_12942171;
  /* 12942166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942169 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1294216f jmp 0x1294217b */
  goto L_1294217b;
L_12942171:;
  /* 12942171 mov dword ptr [ebp - 0x112c], 0x12969074 */
  w32((uint32_t)(EBP + -0x112c), (0x12969074u));
L_1294217b:;
  /* 1294217b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294217f je 0x1294218d */
  if (C.zf) goto L_1294218d;
  /* 12942181 mov dword ptr [ebp - 0x1130], 0x129692b0 */
  w32((uint32_t)(EBP + -0x1130), (0x129692b0u));
  /* 1294218b jmp 0x12942197 */
  goto L_12942197;
L_1294218d:;
  /* 1294218d mov dword ptr [ebp - 0x1130], 0x12969074 */
  w32((uint32_t)(EBP + -0x1130), (0x12969074u));
L_12942197:;
  /* 12942197 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294219e je 0x129421ae */
  if (C.zf) goto L_129421ae;
  /* 129421a0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 129421a6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 129421ac jmp 0x129421b8 */
  goto L_129421b8;
L_129421ae:;
  /* 129421ae mov dword ptr [ebp - 0x1134], 0x12969074 */
  w32((uint32_t)(EBP + -0x1134), (0x12969074u));
L_129421b8:;
  /* 129421b8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129421bf je 0x129421cd */
  if (C.zf) goto L_129421cd;
  /* 129421c1 mov dword ptr [ebp - 0x1138], 0x129692a4 */
  w32((uint32_t)(EBP + -0x1138), (0x129692a4u));
  /* 129421cb jmp 0x129421d7 */
  goto L_129421d7;
L_129421cd:;
  /* 129421cd mov dword ptr [ebp - 0x1138], 0x12969074 */
  w32((uint32_t)(EBP + -0x1138), (0x12969074u));
L_129421d7:;
  /* 129421d7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 129421dd push edx */
  push32((uint32_t)(EDX));
  /* 129421de mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 129421e4 push eax */
  push32((uint32_t)(EAX));
  /* 129421e5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 129421eb push ecx */
  push32((uint32_t)(ECX));
  /* 129421ec mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 129421f2 push edx */
  push32((uint32_t)(EDX));
  /* 129421f3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 129421f9 push eax */
  push32((uint32_t)(EAX));
  /* 129421fa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12942200 push ecx */
  push32((uint32_t)(ECX));
  /* 12942201 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12942207 push edx */
  push32((uint32_t)(EDX));
  /* 12942208 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1294220e push eax */
  push32((uint32_t)(EAX));
  /* 1294220f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12942215 push ecx */
  push32((uint32_t)(ECX));
  /* 12942216 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1294221c push edx */
  push32((uint32_t)(EDX));
  /* 1294221d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942220 push eax */
  push32((uint32_t)(EAX));
  /* 12942221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942224 mov edx, dword ptr [ecx*4 + 0x1296ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca50)));
  /* 1294222b push edx */
  push32((uint32_t)(EDX));
  /* 1294222c push 0x12969250 */
  push32((uint32_t)(0x12969250u));
  /* 12942231 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12942236 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1294223c push eax */
  push32((uint32_t)(EAX));
  /* 1294223d call 0x12945a00 */
  push32(0x12942242u); f_12945a00();
  /* 12942242 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12942247 jge 0x1294225d */
  if ((C.sf==C.of)) goto L_1294225d;
  /* 12942249 push 0x129691b4 */
  push32((uint32_t)(0x129691b4u));
  /* 1294224e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12942254 push ecx */
  push32((uint32_t)(ECX));
  /* 12942255 call 0x12945b00 */
  push32(0x1294225au); f_12945b00();
  /* 1294225a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294225d:;
  /* 1294225d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12942262 push 0x1296922c */
  push32((uint32_t)(0x1296922cu));
  /* 12942267 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1294226d push edx */
  push32((uint32_t)(EDX));
  /* 1294226e call 0x129462b0 */
  push32(0x12942273u); f_129462b0();
  /* 12942273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942276 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1294227c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942283 jne 0x12942296 */
  if (!C.zf) goto L_12942296;
  /* 12942285 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12942287 call 0x12945ff0 */
  push32(0x1294228cu); f_12945ff0();
  /* 1294228c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294228f push 3 */
  push32((uint32_t)(0x3u));
  /* 12942291 call 0x12942310 */
  push32(0x12942296u); f_12942310();
L_12942296:;
  /* 12942296 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294229d jne 0x129422a6 */
  if (!C.zf) goto L_129422a6;
  /* 1294229f mov eax, 1 */
  EAX = (0x1u);
  /* 129422a4 jmp 0x129422a8 */
  goto L_129422a8;
L_129422a6:;
  /* 129422a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129422a8:;
  /* 129422a8 mov esp, ebp */
  ESP = (EBP);
  /* 129422aa pop ebp */
  EBP = (pop32());
  /* 129422ab ret  */
  ESPCHK(0x12941fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022b0 @ 0x129422b0 (56 bytes, 15 insns) */
void f_129422b0(void) {
  FTRACE(0x129422b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129422b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129422b1 mov ebp, esp */
  EBP = (ESP);
  /* 129422b3 cmp dword ptr [0x1296ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129422ba je 0x129422c2 */
  if (C.zf) goto L_129422c2;
  /* 129422bc call dword ptr [0x1296ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296ffbc))), 0x129422c2u);
L_129422c2:;
  /* 129422c2 push 0x1296c418 */
  push32((uint32_t)(0x1296c418u));
  /* 129422c7 push 0x1296c208 */
  push32((uint32_t)(0x1296c208u));
  /* 129422cc call 0x12942480 */
  push32(0x129422d1u); f_12942480();
  /* 129422d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129422d4 push 0x1296c104 */
  push32((uint32_t)(0x1296c104u));
  /* 129422d9 push 0x1296c000 */
  push32((uint32_t)(0x1296c000u));
  /* 129422de call 0x12942480 */
  push32(0x129422e3u); f_12942480();
  /* 129422e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129422e6 pop ebp */
  EBP = (pop32());
  /* 129422e7 ret  */
  ESPCHK(0x129422b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022f0 @ 0x129422f0 (21 bytes, 10 insns) */
void f_129422f0(void) {
  FTRACE(0x129422f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129422f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129422f1 mov ebp, esp */
  EBP = (ESP);
  /* 129422f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129422f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129422f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129422fa push eax */
  push32((uint32_t)(EAX));
  /* 129422fb call 0x12942370 */
  push32(0x12942300u); f_12942370();
  /* 12942300 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942303 pop ebp */
  EBP = (pop32());
  /* 12942304 ret  */
  ESPCHK(0x129422f0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12942310 (21 bytes, 10 insns) */
void f_12942310(void) {
  FTRACE(0x12942310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942310 push ebp */
  push32((uint32_t)(EBP));
  /* 12942311 mov ebp, esp */
  EBP = (ESP);
  /* 12942313 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942315 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942317 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294231a push eax */
  push32((uint32_t)(EAX));
  /* 1294231b call 0x12942370 */
  push32(0x12942320u); f_12942370();
  /* 12942320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942323 pop ebp */
  EBP = (pop32());
  /* 12942324 ret  */
  ESPCHK(0x12942310u, _esp0);
  ESP += 4; return;
}

/* FUN_10002330 @ 0x12942330 (19 bytes, 9 insns) */
void f_12942330(void) {
  FTRACE(0x12942330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942330 push ebp */
  push32((uint32_t)(EBP));
  /* 12942331 mov ebp, esp */
  EBP = (ESP);
  /* 12942333 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942335 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942337 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942339 call 0x12942370 */
  push32(0x1294233eu); f_12942370();
  /* 1294233e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942341 pop ebp */
  EBP = (pop32());
  /* 12942342 ret  */
  ESPCHK(0x12942330u, _esp0);
  ESP += 4; return;
}

/* FUN_10002350 @ 0x12942350 (19 bytes, 9 insns) */
void f_12942350(void) {
  FTRACE(0x12942350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942350 push ebp */
  push32((uint32_t)(EBP));
  /* 12942351 mov ebp, esp */
  EBP = (ESP);
  /* 12942353 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942355 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942357 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942359 call 0x12942370 */
  push32(0x1294235eu); f_12942370();
  /* 1294235e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942361 pop ebp */
  EBP = (pop32());
  /* 12942362 ret  */
  ESPCHK(0x12942350u, _esp0);
  ESP += 4; return;
}

/* FUN_10002370 @ 0x12942370 (227 bytes, 61 insns) */
void f_12942370(void) {
  FTRACE(0x12942370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942370 push ebp */
  push32((uint32_t)(EBP));
  /* 12942371 mov ebp, esp */
  EBP = (ESP);
  /* 12942373 push ecx */
  push32((uint32_t)(ECX));
  /* 12942374 call 0x12942460 */
  push32(0x12942379u); f_12942460();
  /* 12942379 cmp dword ptr [0x1296e4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942380 jne 0x12942393 */
  if (!C.zf) goto L_12942393;
  /* 12942382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942385 push eax */
  push32((uint32_t)(EAX));
  /* 12942386 call dword ptr [0x12970288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970288))), 0x1294238cu);
  /* 1294238c push eax */
  push32((uint32_t)(EAX));
  /* 1294238d call dword ptr [0x12970284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970284))), 0x12942393u);
L_12942393:;
  /* 12942393 mov dword ptr [0x1296e4c0], 1 */
  w32((uint32_t)(0x1296e4c0), (0x1u));
  /* 1294239d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 129423a0 mov byte ptr [0x1296e4bc], cl */
  w8((uint32_t)(0x1296e4bc), (CL));
  /* 129423a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129423aa jne 0x129423f3 */
  if (!C.zf) goto L_129423f3;
  /* 129423ac cmp dword ptr [0x1296ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129423b3 je 0x129423e1 */
  if (C.zf) goto L_129423e1;
  /* 129423b5 mov edx, dword ptr [0x1296ffb4] */
  EDX = (r32((uint32_t)(0x1296ffb4)));
  /* 129423bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129423be:;
  /* 129423be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129423c1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129423c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129423c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129423ca cmp ecx, dword ptr [0x1296ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129423d0 jb 0x129423e1 */
  if (C.cf) goto L_129423e1;
  /* 129423d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129423d5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129423d8 je 0x129423df */
  if (C.zf) goto L_129423df;
  /* 129423da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129423dd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x129423dfu);
L_129423df:;
  /* 129423df jmp 0x129423be */
  goto L_129423be;
L_129423e1:;
  /* 129423e1 push 0x1296c724 */
  push32((uint32_t)(0x1296c724u));
  /* 129423e6 push 0x1296c51c */
  push32((uint32_t)(0x1296c51cu));
  /* 129423eb call 0x12942480 */
  push32(0x129423f0u); f_12942480();
  /* 129423f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129423f3:;
  /* 129423f3 push 0x1296c92c */
  push32((uint32_t)(0x1296c92cu));
  /* 129423f8 push 0x1296c828 */
  push32((uint32_t)(0x1296c828u));
  /* 129423fd call 0x12942480 */
  push32(0x12942402u); f_12942480();
  /* 12942402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942405 cmp dword ptr [0x1296e4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294240c jne 0x1294242e */
  if (!C.zf) goto L_1294242e;
  /* 1294240e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12942410 call 0x12944060 */
  push32(0x12942415u); f_12944060();
  /* 12942415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942418 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1294241b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294241d je 0x1294242e */
  if (C.zf) goto L_1294242e;
  /* 1294241f mov dword ptr [0x1296e4c8], 1 */
  w32((uint32_t)(0x1296e4c8), (0x1u));
  /* 12942429 call 0x12944970 */
  push32(0x1294242eu); f_12944970();
L_1294242e:;
  /* 1294242e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942432 je 0x1294243b */
  if (C.zf) goto L_1294243b;
  /* 12942434 call 0x12942470 */
  push32(0x12942439u); f_12942470();
  /* 12942439 jmp 0x1294244f */
  goto L_1294244f;
L_1294243b:;
  /* 1294243b mov dword ptr [0x1296e4c4], 1 */
  w32((uint32_t)(0x1296e4c4), (0x1u));
  /* 12942445 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942448 push ecx */
  push32((uint32_t)(ECX));
  /* 12942449 call dword ptr [0x12970280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970280))), 0x1294244fu);
L_1294244f:;
  /* 1294244f mov esp, ebp */
  ESP = (EBP);
  /* 12942451 pop ebp */
  EBP = (pop32());
  /* 12942452 ret  */
  ESPCHK(0x12942370u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x12942460 (15 bytes, 7 insns) */
void f_12942460(void) {
  FTRACE(0x12942460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942460 push ebp */
  push32((uint32_t)(EBP));
  /* 12942461 mov ebp, esp */
  EBP = (ESP);
  /* 12942463 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12942465 call 0x12946550 */
  push32(0x1294246au); f_12946550();
  /* 1294246a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294246d pop ebp */
  EBP = (pop32());
  /* 1294246e ret  */
  ESPCHK(0x12942460u, _esp0);
  ESP += 4; return;
}

/* FUN_10002470 @ 0x12942470 (15 bytes, 7 insns) */
void f_12942470(void) {
  FTRACE(0x12942470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942470 push ebp */
  push32((uint32_t)(EBP));
  /* 12942471 mov ebp, esp */
  EBP = (ESP);
  /* 12942473 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12942475 call 0x129465f0 */
  push32(0x1294247au); f_129465f0();
  /* 1294247a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294247d pop ebp */
  EBP = (pop32());
  /* 1294247e ret  */
  ESPCHK(0x12942470u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12942480 (37 bytes, 16 insns) */
void f_12942480(void) {
  FTRACE(0x12942480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942480 push ebp */
  push32((uint32_t)(EBP));
  /* 12942481 mov ebp, esp */
  EBP = (ESP);
L_12942483:;
  /* 12942483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942486 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942489 jae 0x129424a3 */
  if (!C.cf) goto L_129424a3;
  /* 1294248b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294248e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942491 je 0x12942498 */
  if (C.zf) goto L_12942498;
  /* 12942493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942496 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12942498u);
L_12942498:;
  /* 12942498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294249b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294249e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129424a1 jmp 0x12942483 */
  goto L_12942483;
L_129424a3:;
  /* 129424a3 pop ebp */
  EBP = (pop32());
  /* 129424a4 ret  */
  ESPCHK(0x12942480u, _esp0);
  ESP += 4; return;
}

/* FUN_100024b0 @ 0x129424b0 (130 bytes, 42 insns) */
void f_129424b0(void) {
  FTRACE(0x129424b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129424b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129424b1 mov ebp, esp */
  EBP = (ESP);
  /* 129424b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129424b4 call 0x12946470 */
  push32(0x129424b9u); f_12946470();
  /* 129424b9 call dword ptr [0x12970294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970294))), 0x129424bfu);
  /* 129424bf mov dword ptr [0x1296ca5c], eax */
  w32((uint32_t)(0x1296ca5c), (EAX));
  /* 129424c4 cmp dword ptr [0x1296ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1296ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129424cb jne 0x129424d1 */
  if (!C.zf) goto L_129424d1;
  /* 129424cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129424cf jmp 0x1294252e */
  goto L_1294252e;
L_129424d1:;
  /* 129424d1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 129424d3 push 0x12969388 */
  push32((uint32_t)(0x12969388u));
  /* 129424d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129424da push 0x74 */
  push32((uint32_t)(0x74u));
  /* 129424dc push 1 */
  push32((uint32_t)(0x1u));
  /* 129424de call 0x12942f60 */
  push32(0x129424e3u); f_12942f60();
  /* 129424e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129424e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129424e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129424ed je 0x12942504 */
  if (C.zf) goto L_12942504;
  /* 129424ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129424f2 push eax */
  push32((uint32_t)(EAX));
  /* 129424f3 mov ecx, dword ptr [0x1296ca5c] */
  ECX = (r32((uint32_t)(0x1296ca5c)));
  /* 129424f9 push ecx */
  push32((uint32_t)(ECX));
  /* 129424fa call dword ptr [0x12970290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970290))), 0x12942500u);
  /* 12942500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12942502 jne 0x12942508 */
  if (!C.zf) goto L_12942508;
L_12942504:;
  /* 12942504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12942506 jmp 0x1294252e */
  goto L_1294252e;
L_12942508:;
  /* 12942508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294250b push edx */
  push32((uint32_t)(EDX));
  /* 1294250c call 0x12942570 */
  push32(0x12942511u); f_12942570();
  /* 12942511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942514 call dword ptr [0x1297028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297028c))), 0x1294251au);
  /* 1294251a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294251d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1294251f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942522 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12942529 mov eax, 1 */
  EAX = (0x1u);
L_1294252e:;
  /* 1294252e mov esp, ebp */
  ESP = (EBP);
  /* 12942530 pop ebp */
  EBP = (pop32());
  /* 12942531 ret  */
  ESPCHK(0x129424b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002540 @ 0x12942540 (41 bytes, 11 insns) */
void f_12942540(void) {
  FTRACE(0x12942540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942540 push ebp */
  push32((uint32_t)(EBP));
  /* 12942541 mov ebp, esp */
  EBP = (ESP);
  /* 12942543 call 0x129464b0 */
  push32(0x12942548u); f_129464b0();
  /* 12942548 cmp dword ptr [0x1296ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1296ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294254f je 0x12942567 */
  if (C.zf) goto L_12942567;
  /* 12942551 mov eax, dword ptr [0x1296ca5c] */
  EAX = (r32((uint32_t)(0x1296ca5c)));
  /* 12942556 push eax */
  push32((uint32_t)(EAX));
  /* 12942557 call dword ptr [0x12970298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970298))), 0x1294255du);
  /* 1294255d mov dword ptr [0x1296ca5c], 0xffffffff */
  w32((uint32_t)(0x1296ca5c), (0xffffffffu));
L_12942567:;
  /* 12942567 pop ebp */
  EBP = (pop32());
  /* 12942568 ret  */
  ESPCHK(0x12942540u, _esp0);
  ESP += 4; return;
}

/* FUN_10002570 @ 0x12942570 (25 bytes, 8 insns) */
void f_12942570(void) {
  FTRACE(0x12942570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942570 push ebp */
  push32((uint32_t)(EBP));
  /* 12942571 mov ebp, esp */
  EBP = (ESP);
  /* 12942573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942576 mov dword ptr [eax + 0x50], 0x1296cc00 */
  w32((uint32_t)(EAX + 0x50), (0x1296cc00u));
  /* 1294257d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942580 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12942587 pop ebp */
  EBP = (pop32());
  /* 12942588 ret  */
  ESPCHK(0x12942570u, _esp0);
  ESP += 4; return;
}

/* FUN_10002590 @ 0x12942590 (152 bytes, 48 insns) */
void f_12942590(void) {
  FTRACE(0x12942590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942590 push ebp */
  push32((uint32_t)(EBP));
  /* 12942591 mov ebp, esp */
  EBP = (ESP);
  /* 12942593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12942596 call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x1294259cu);
  /* 1294259c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294259f mov eax, dword ptr [0x1296ca5c] */
  EAX = (r32((uint32_t)(0x1296ca5c)));
  /* 129425a4 push eax */
  push32((uint32_t)(EAX));
  /* 129425a5 call dword ptr [0x129702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a0))), 0x129425abu);
  /* 129425ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129425ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129425b2 jne 0x12942617 */
  if (!C.zf) goto L_12942617;
  /* 129425b4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 129425b9 push 0x12969388 */
  push32((uint32_t)(0x12969388u));
  /* 129425be push 2 */
  push32((uint32_t)(0x2u));
  /* 129425c0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 129425c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129425c4 call 0x12942f60 */
  push32(0x129425c9u); f_12942f60();
  /* 129425c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129425cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129425cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129425d3 je 0x1294260d */
  if (C.zf) goto L_1294260d;
  /* 129425d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129425d8 push ecx */
  push32((uint32_t)(ECX));
  /* 129425d9 mov edx, dword ptr [0x1296ca5c] */
  EDX = (r32((uint32_t)(0x1296ca5c)));
  /* 129425df push edx */
  push32((uint32_t)(EDX));
  /* 129425e0 call dword ptr [0x12970290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970290))), 0x129425e6u);
  /* 129425e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129425e8 je 0x1294260d */
  if (C.zf) goto L_1294260d;
  /* 129425ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129425ed push eax */
  push32((uint32_t)(EAX));
  /* 129425ee call 0x12942570 */
  push32(0x129425f3u); f_12942570();
  /* 129425f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129425f6 call dword ptr [0x1297028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297028c))), 0x129425fcu);
  /* 129425fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129425ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12942601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942604 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1294260b jmp 0x12942617 */
  goto L_12942617;
L_1294260d:;
  /* 1294260d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1294260f call 0x12941ac0 */
  push32(0x12942614u); f_12941ac0();
  /* 12942614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12942617:;
  /* 12942617 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294261a push eax */
  push32((uint32_t)(EAX));
  /* 1294261b call dword ptr [0x1297029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297029c))), 0x12942621u);
  /* 12942621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942624 mov esp, ebp */
  ESP = (EBP);
  /* 12942626 pop ebp */
  EBP = (pop32());
  /* 12942627 ret  */
  ESPCHK(0x12942590u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x12942630 (263 bytes, 86 insns) */
void f_12942630(void) {
  FTRACE(0x12942630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942630 push ebp */
  push32((uint32_t)(EBP));
  /* 12942631 mov ebp, esp */
  EBP = (ESP);
  /* 12942633 cmp dword ptr [0x1296ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1296ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294263a je 0x12942735 */
  if (C.zf) goto L_12942735;
  /* 12942640 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942644 jne 0x12942655 */
  if (!C.zf) goto L_12942655;
  /* 12942646 mov eax, dword ptr [0x1296ca5c] */
  EAX = (r32((uint32_t)(0x1296ca5c)));
  /* 1294264b push eax */
  push32((uint32_t)(EAX));
  /* 1294264c call dword ptr [0x129702a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a0))), 0x12942652u);
  /* 12942652 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12942655:;
  /* 12942655 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942659 je 0x12942726 */
  if (C.zf) goto L_12942726;
  /* 1294265f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942662 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942666 je 0x12942679 */
  if (C.zf) goto L_12942679;
  /* 12942668 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294266a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294266d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12942670 push eax */
  push32((uint32_t)(EAX));
  /* 12942671 call 0x129435e0 */
  push32(0x12942676u); f_129435e0();
  /* 12942676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12942679:;
  /* 12942679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294267c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942680 je 0x12942693 */
  if (C.zf) goto L_12942693;
  /* 12942682 push 2 */
  push32((uint32_t)(0x2u));
  /* 12942684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942687 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1294268a push eax */
  push32((uint32_t)(EAX));
  /* 1294268b call 0x129435e0 */
  push32(0x12942690u); f_129435e0();
  /* 12942690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12942693:;
  /* 12942693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942696 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294269a je 0x129426ad */
  if (C.zf) goto L_129426ad;
  /* 1294269c push 2 */
  push32((uint32_t)(0x2u));
  /* 1294269e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426a1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 129426a4 push eax */
  push32((uint32_t)(EAX));
  /* 129426a5 call 0x129435e0 */
  push32(0x129426aau); f_129435e0();
  /* 129426aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129426ad:;
  /* 129426ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426b0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129426b4 je 0x129426c7 */
  if (C.zf) goto L_129426c7;
  /* 129426b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129426b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426bb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 129426be push eax */
  push32((uint32_t)(EAX));
  /* 129426bf call 0x129435e0 */
  push32(0x129426c4u); f_129435e0();
  /* 129426c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129426c7:;
  /* 129426c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426ca cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129426ce je 0x129426e1 */
  if (C.zf) goto L_129426e1;
  /* 129426d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129426d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426d5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 129426d8 push eax */
  push32((uint32_t)(EAX));
  /* 129426d9 call 0x129435e0 */
  push32(0x129426deu); f_129435e0();
  /* 129426de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129426e1:;
  /* 129426e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426e4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129426e8 je 0x129426fb */
  if (C.zf) goto L_129426fb;
  /* 129426ea push 2 */
  push32((uint32_t)(0x2u));
  /* 129426ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426ef mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 129426f2 push eax */
  push32((uint32_t)(EAX));
  /* 129426f3 call 0x129435e0 */
  push32(0x129426f8u); f_129435e0();
  /* 129426f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129426fb:;
  /* 129426fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129426fe cmp dword ptr [ecx + 0x50], 0x1296cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1296cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942705 je 0x12942718 */
  if (C.zf) goto L_12942718;
  /* 12942707 push 2 */
  push32((uint32_t)(0x2u));
  /* 12942709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294270c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1294270f push eax */
  push32((uint32_t)(EAX));
  /* 12942710 call 0x129435e0 */
  push32(0x12942715u); f_129435e0();
  /* 12942715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12942718:;
  /* 12942718 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294271a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294271d push ecx */
  push32((uint32_t)(ECX));
  /* 1294271e call 0x129435e0 */
  push32(0x12942723u); f_129435e0();
  /* 12942723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12942726:;
  /* 12942726 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942728 mov edx, dword ptr [0x1296ca5c] */
  EDX = (r32((uint32_t)(0x1296ca5c)));
  /* 1294272e push edx */
  push32((uint32_t)(EDX));
  /* 1294272f call dword ptr [0x12970290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970290))), 0x12942735u);
L_12942735:;
  /* 12942735 pop ebp */
  EBP = (pop32());
  /* 12942736 ret  */
  ESPCHK(0x12942630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x12942740 (11 bytes, 5 insns) */
void f_12942740(void) {
  FTRACE(0x12942740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942740 push ebp */
  push32((uint32_t)(EBP));
  /* 12942741 mov ebp, esp */
  EBP = (ESP);
  /* 12942743 call dword ptr [0x1297028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297028c))), 0x12942749u);
  /* 12942749 pop ebp */
  EBP = (pop32());
  /* 1294274a ret  */
  ESPCHK(0x12942740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x12942750 (11 bytes, 5 insns) */
void f_12942750(void) {
  FTRACE(0x12942750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942750 push ebp */
  push32((uint32_t)(EBP));
  /* 12942751 mov ebp, esp */
  EBP = (ESP);
  /* 12942753 call dword ptr [0x129702a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a8))), 0x12942759u);
  /* 12942759 pop ebp */
  EBP = (pop32());
  /* 1294275a ret  */
  ESPCHK(0x12942750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x12942760 (804 bytes, 236 insns) */
void f_12942760(void) {
  FTRACE(0x12942760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942760 push ebp */
  push32((uint32_t)(EBP));
  /* 12942761 mov ebp, esp */
  EBP = (ESP);
  /* 12942763 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12942766 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1294276b push 0x12969394 */
  push32((uint32_t)(0x12969394u));
  /* 12942770 push 2 */
  push32((uint32_t)(0x2u));
  /* 12942772 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12942777 call 0x12942b50 */
  push32(0x1294277cu); f_12942b50();
  /* 1294277c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294277f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12942782 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942786 jne 0x12942792 */
  if (!C.zf) goto L_12942792;
  /* 12942788 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1294278a call 0x12941ac0 */
  push32(0x1294278fu); f_12941ac0();
  /* 1294278f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12942792:;
  /* 12942792 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942795 mov dword ptr [0x1296fe60], eax */
  w32((uint32_t)(0x1296fe60), (EAX));
  /* 1294279a mov dword ptr [0x1296ff9c], 0x20 */
  w32((uint32_t)(0x1296ff9c), (0x20u));
  /* 129427a4 jmp 0x129427af */
  goto L_129427af;
L_129427a6:;
  /* 129427a6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129427a9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129427ac mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_129427af:;
  /* 129427af mov edx, dword ptr [0x1296fe60] */
  EDX = (r32((uint32_t)(0x1296fe60)));
  /* 129427b5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129427bb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129427be jae 0x129427e3 */
  if (!C.cf) goto L_129427e3;
  /* 129427c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129427c3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 129427c7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129427ca mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129427d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129427d3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 129427d7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129427da mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129427e1 jmp 0x129427a6 */
  goto L_129427a6;
L_129427e3:;
  /* 129427e3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 129427e6 push ecx */
  push32((uint32_t)(ECX));
  /* 129427e7 call dword ptr [0x129702b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b4))), 0x129427edu);
  /* 129427ed mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 129427f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129427f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129427f8 je 0x12942985 */
  if (C.zf) goto L_12942985;
  /* 129427fe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942802 je 0x12942985 */
  if (C.zf) goto L_12942985;
  /* 12942808 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294280b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1294280d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12942810 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12942813 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942816 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12942819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294281c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294281f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12942822 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942829 jge 0x12942833 */
  if ((C.sf==C.of)) goto L_12942833;
  /* 1294282b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1294282e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12942831 jmp 0x1294283a */
  goto L_1294283a;
L_12942833:;
  /* 12942833 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1294283a:;
  /* 1294283a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1294283d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12942840 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12942847 jmp 0x12942852 */
  goto L_12942852;
L_12942849:;
  /* 12942849 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1294284c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294284f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12942852:;
  /* 12942852 mov ecx, dword ptr [0x1296ff9c] */
  ECX = (r32((uint32_t)(0x1296ff9c)));
  /* 12942858 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294285b jge 0x129428f2 */
  if ((C.sf==C.of)) goto L_129428f2;
  /* 12942861 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12942866 push 0x12969394 */
  push32((uint32_t)(0x12969394u));
  /* 1294286b push 2 */
  push32((uint32_t)(0x2u));
  /* 1294286d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12942872 call 0x12942b50 */
  push32(0x12942877u); f_12942b50();
  /* 12942877 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294287a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1294287d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942881 jne 0x1294288e */
  if (!C.zf) goto L_1294288e;
  /* 12942883 mov edx, dword ptr [0x1296ff9c] */
  EDX = (r32((uint32_t)(0x1296ff9c)));
  /* 12942889 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1294288c jmp 0x129428f2 */
  goto L_129428f2;
L_1294288e:;
  /* 1294288e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12942891 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942894 mov dword ptr [eax*4 + 0x1296fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1296fe60), (ECX));
  /* 1294289b mov edx, dword ptr [0x1296ff9c] */
  EDX = (r32((uint32_t)(0x1296ff9c)));
  /* 129428a1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129428a4 mov dword ptr [0x1296ff9c], edx */
  w32((uint32_t)(0x1296ff9c), (EDX));
  /* 129428aa jmp 0x129428b5 */
  goto L_129428b5;
L_129428ac:;
  /* 129428ac mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129428af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129428b2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_129428b5:;
  /* 129428b5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 129428b8 mov edx, dword ptr [ecx*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296fe60)));
  /* 129428bf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129428c5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129428c8 jae 0x129428ed */
  if (!C.cf) goto L_129428ed;
  /* 129428ca mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129428cd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 129428d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129428d4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129428da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129428dd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 129428e1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129428e4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129428eb jmp 0x129428ac */
  goto L_129428ac;
L_129428ed:;
  /* 129428ed jmp 0x12942849 */
  goto L_12942849;
L_129428f2:;
  /* 129428f2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 129428f9 jmp 0x12942916 */
  goto L_12942916;
L_129428fb:;
  /* 129428fb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129428fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942901 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12942904 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942907 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294290a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294290d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12942910 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942913 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12942916:;
  /* 12942916 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12942919 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294291c jge 0x12942985 */
  if ((C.sf==C.of)) goto L_12942985;
  /* 1294291e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12942921 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942924 je 0x12942980 */
  if (C.zf) goto L_12942980;
  /* 12942926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942929 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294292c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1294292f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12942931 je 0x12942980 */
  if (C.zf) goto L_12942980;
  /* 12942933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942936 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12942939 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1294293c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294293e jne 0x12942950 */
  if (!C.zf) goto L_12942950;
  /* 12942940 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12942943 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12942945 push edx */
  push32((uint32_t)(EDX));
  /* 12942946 call dword ptr [0x129702b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b0))), 0x1294294cu);
  /* 1294294c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294294e je 0x12942980 */
  if (C.zf) goto L_12942980;
L_12942950:;
  /* 12942950 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12942953 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12942956 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12942959 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1294295c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294295f mov edx, dword ptr [eax*4 + 0x1296fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 12942966 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942968 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1294296b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1294296e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12942971 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12942973 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12942975 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942978 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294297b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294297d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12942980:;
  /* 12942980 jmp 0x129428fb */
  goto L_129428fb;
L_12942985:;
  /* 12942985 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1294298c jmp 0x12942997 */
  goto L_12942997;
L_1294298e:;
  /* 1294298e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12942991 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942994 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12942997:;
  /* 12942997 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294299b jge 0x12942a74 */
  if ((C.sf==C.of)) goto L_12942a74;
  /* 129429a1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129429a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129429a7 mov edx, dword ptr [0x1296fe60] */
  EDX = (r32((uint32_t)(0x1296fe60)));
  /* 129429ad add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129429af mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 129429b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129429b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129429b8 jne 0x12942a60 */
  if (!C.zf) goto L_12942a60;
  /* 129429be mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129429c1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 129429c5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129429c9 jne 0x129429d4 */
  if (!C.zf) goto L_129429d4;
  /* 129429cb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 129429d2 jmp 0x129429e4 */
  goto L_129429e4;
L_129429d4:;
  /* 129429d4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 129429d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129429da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129429dc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129429de add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129429e1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_129429e4:;
  /* 129429e4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 129429e7 push eax */
  push32((uint32_t)(EAX));
  /* 129429e8 call dword ptr [0x12970260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970260))), 0x129429eeu);
  /* 129429ee mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 129429f1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129429f5 je 0x12942a4f */
  if (C.zf) goto L_12942a4f;
  /* 129429f7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129429fa push ecx */
  push32((uint32_t)(ECX));
  /* 129429fb call dword ptr [0x129702b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b0))), 0x12942a01u);
  /* 12942a01 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12942a04 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942a08 je 0x12942a4f */
  if (C.zf) goto L_12942a4f;
  /* 12942a0a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a0d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12942a10 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12942a12 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12942a15 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12942a1b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942a1e jne 0x12942a30 */
  if (!C.zf) goto L_12942a30;
  /* 12942a20 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a23 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12942a26 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12942a28 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a2b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12942a2e jmp 0x12942a4d */
  goto L_12942a4d;
L_12942a30:;
  /* 12942a30 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12942a33 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12942a39 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942a3c jne 0x12942a4d */
  if (!C.zf) goto L_12942a4d;
  /* 12942a3e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a41 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12942a44 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12942a47 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a4a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12942a4d:;
  /* 12942a4d jmp 0x12942a5e */
  goto L_12942a5e;
L_12942a4f:;
  /* 12942a4f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a52 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12942a55 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12942a58 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a5b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12942a5e:;
  /* 12942a5e jmp 0x12942a6f */
  goto L_12942a6f;
L_12942a60:;
  /* 12942a60 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a63 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12942a66 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12942a69 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12942a6c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12942a6f:;
  /* 12942a6f jmp 0x1294298e */
  goto L_1294298e;
L_12942a74:;
  /* 12942a74 mov eax, dword ptr [0x1296ff9c] */
  EAX = (r32((uint32_t)(0x1296ff9c)));
  /* 12942a79 push eax */
  push32((uint32_t)(EAX));
  /* 12942a7a call dword ptr [0x129702ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702ac))), 0x12942a80u);
  /* 12942a80 mov esp, ebp */
  ESP = (EBP);
  /* 12942a82 pop ebp */
  EBP = (pop32());
  /* 12942a83 ret  */
  ESPCHK(0x12942760u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12942a90 (155 bytes, 45 insns) */
void f_12942a90(void) {
  FTRACE(0x12942a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12942a91 mov ebp, esp */
  EBP = (ESP);
  /* 12942a93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12942a96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12942a9d jmp 0x12942aa8 */
  goto L_12942aa8;
L_12942a9f:;
  /* 12942a9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942aa2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942aa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12942aa8:;
  /* 12942aa8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942aac jge 0x12942b27 */
  if ((C.sf==C.of)) goto L_12942b27;
  /* 12942aae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942ab1 cmp dword ptr [ecx*4 + 0x1296fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1296fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942ab9 je 0x12942b22 */
  if (C.zf) goto L_12942b22;
  /* 12942abb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942abe mov eax, dword ptr [edx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 12942ac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12942ac8 jmp 0x12942ad3 */
  goto L_12942ad3;
L_12942aca:;
  /* 12942aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942acd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942ad0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12942ad3:;
  /* 12942ad3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942ad6 mov eax, dword ptr [edx*4 + 0x1296fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296fe60)));
  /* 12942add add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942ae2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942ae5 jae 0x12942aff */
  if (!C.cf) goto L_12942aff;
  /* 12942ae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942aea cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942aee je 0x12942afd */
  if (C.zf) goto L_12942afd;
  /* 12942af0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942af3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942af6 push edx */
  push32((uint32_t)(EDX));
  /* 12942af7 call dword ptr [0x129702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b8))), 0x12942afdu);
L_12942afd:;
  /* 12942afd jmp 0x12942aca */
  goto L_12942aca;
L_12942aff:;
  /* 12942aff push 2 */
  push32((uint32_t)(0x2u));
  /* 12942b01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942b04 mov ecx, dword ptr [eax*4 + 0x1296fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296fe60)));
  /* 12942b0b push ecx */
  push32((uint32_t)(ECX));
  /* 12942b0c call 0x129435e0 */
  push32(0x12942b11u); f_129435e0();
  /* 12942b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942b14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942b17 mov dword ptr [edx*4 + 0x1296fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x1296fe60), (0x0u));
L_12942b22:;
  /* 12942b22 jmp 0x12942a9f */
  goto L_12942a9f;
L_12942b27:;
  /* 12942b27 mov esp, ebp */
  ESP = (EBP);
  /* 12942b29 pop ebp */
  EBP = (pop32());
  /* 12942b2a ret  */
  ESPCHK(0x12942a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b30 @ 0x12942b30 (29 bytes, 13 insns) */
void f_12942b30(void) {
  FTRACE(0x12942b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12942b31 mov ebp, esp */
  EBP = (ESP);
  /* 12942b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942b39 mov eax, dword ptr [0x1296e670] */
  EAX = (r32((uint32_t)(0x1296e670)));
  /* 12942b3e push eax */
  push32((uint32_t)(EAX));
  /* 12942b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942b42 push ecx */
  push32((uint32_t)(ECX));
  /* 12942b43 call 0x12942ba0 */
  push32(0x12942b48u); f_12942ba0();
  /* 12942b48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942b4b pop ebp */
  EBP = (pop32());
  /* 12942b4c ret  */
  ESPCHK(0x12942b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x12942b50 (35 bytes, 16 insns) */
void f_12942b50(void) {
  FTRACE(0x12942b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12942b51 mov ebp, esp */
  EBP = (ESP);
  /* 12942b53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942b56 push eax */
  push32((uint32_t)(EAX));
  /* 12942b57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942b5a push ecx */
  push32((uint32_t)(ECX));
  /* 12942b5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942b5e push edx */
  push32((uint32_t)(EDX));
  /* 12942b5f mov eax, dword ptr [0x1296e670] */
  EAX = (r32((uint32_t)(0x1296e670)));
  /* 12942b64 push eax */
  push32((uint32_t)(EAX));
  /* 12942b65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942b68 push ecx */
  push32((uint32_t)(ECX));
  /* 12942b69 call 0x12942ba0 */
  push32(0x12942b6eu); f_12942ba0();
  /* 12942b6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942b71 pop ebp */
  EBP = (pop32());
  /* 12942b72 ret  */
  ESPCHK(0x12942b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b80 @ 0x12942b80 (27 bytes, 13 insns) */
void f_12942b80(void) {
  FTRACE(0x12942b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12942b81 mov ebp, esp */
  EBP = (ESP);
  /* 12942b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942b87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942b89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942b8c push eax */
  push32((uint32_t)(EAX));
  /* 12942b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942b90 push ecx */
  push32((uint32_t)(ECX));
  /* 12942b91 call 0x12942ba0 */
  push32(0x12942b96u); f_12942ba0();
  /* 12942b96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942b99 pop ebp */
  EBP = (pop32());
  /* 12942b9a ret  */
  ESPCHK(0x12942b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba0 @ 0x12942ba0 (94 bytes, 38 insns) */
void f_12942ba0(void) {
  FTRACE(0x12942ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12942ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12942ba3 push ecx */
  push32((uint32_t)(ECX));
L_12942ba4:;
  /* 12942ba4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12942ba6 call 0x12946550 */
  push32(0x12942babu); f_12946550();
  /* 12942bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942bae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12942bb1 push eax */
  push32((uint32_t)(EAX));
  /* 12942bb2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12942bb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942bb9 push edx */
  push32((uint32_t)(EDX));
  /* 12942bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942bbd push eax */
  push32((uint32_t)(EAX));
  /* 12942bbe call 0x12942c20 */
  push32(0x12942bc3u); f_12942c20();
  /* 12942bc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942bc6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12942bc9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12942bcb call 0x129465f0 */
  push32(0x12942bd0u); f_129465f0();
  /* 12942bd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942bd3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942bd7 jne 0x12942bdf */
  if (!C.zf) goto L_12942bdf;
  /* 12942bd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942bdd jne 0x12942be4 */
  if (!C.zf) goto L_12942be4;
L_12942bdf:;
  /* 12942bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942be2 jmp 0x12942bfa */
  goto L_12942bfa;
L_12942be4:;
  /* 12942be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942be7 push ecx */
  push32((uint32_t)(ECX));
  /* 12942be8 call 0x12946890 */
  push32(0x12942bedu); f_12946890();
  /* 12942bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12942bf2 jne 0x12942bf8 */
  if (!C.zf) goto L_12942bf8;
  /* 12942bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12942bf6 jmp 0x12942bfa */
  goto L_12942bfa;
L_12942bf8:;
  /* 12942bf8 jmp 0x12942ba4 */
  goto L_12942ba4;
L_12942bfa:;
  /* 12942bfa mov esp, ebp */
  ESP = (EBP);
  /* 12942bfc pop ebp */
  EBP = (pop32());
  /* 12942bfd ret  */
  ESPCHK(0x12942ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c00 @ 0x12942c00 (23 bytes, 11 insns) */
void f_12942c00(void) {
  FTRACE(0x12942c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12942c01 mov ebp, esp */
  EBP = (ESP);
  /* 12942c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942c09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942c0c push eax */
  push32((uint32_t)(EAX));
  /* 12942c0d call 0x12942c20 */
  push32(0x12942c12u); f_12942c20();
  /* 12942c12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942c15 pop ebp */
  EBP = (pop32());
  /* 12942c16 ret  */
  ESPCHK(0x12942c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c20 @ 0x12942c20 (787 bytes, 254 insns) */
void f_12942c20(void) {
  FTRACE(0x12942c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12942c21 mov ebp, esp */
  EBP = (ESP);
  /* 12942c23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12942c26 push ebx */
  push32((uint32_t)(EBX));
  /* 12942c27 push esi */
  push32((uint32_t)(ESI));
  /* 12942c28 push edi */
  push32((uint32_t)(EDI));
  /* 12942c29 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12942c30 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 12942c35 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12942c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12942c3a je 0x12942c6c */
  if (C.zf) goto L_12942c6c;
L_12942c3c:;
  /* 12942c3c call 0x12943cf0 */
  push32(0x12942c41u); f_12943cf0();
  /* 12942c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12942c43 jne 0x12942c66 */
  if (!C.zf) goto L_12942c66;
  /* 12942c45 push 0x12969488 */
  push32((uint32_t)(0x12969488u));
  /* 12942c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12942c4c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12942c51 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12942c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12942c58 call 0x12941c10 */
  push32(0x12942c5du); f_12941c10();
  /* 12942c5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942c60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942c63 jne 0x12942c66 */
  if (!C.zf) goto L_12942c66;
  /* 12942c65 int3  */
  x86_unimpl("int3 @ 0x12942c65");
L_12942c66:;
  /* 12942c66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12942c68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12942c6a jne 0x12942c3c */
  if (!C.zf) goto L_12942c3c;
L_12942c6c:;
  /* 12942c6c mov edx, dword ptr [0x1296ca88] */
  EDX = (r32((uint32_t)(0x1296ca88)));
  /* 12942c72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12942c75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942c78 cmp eax, dword ptr [0x1296ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942c7e jne 0x12942c81 */
  if (!C.zf) goto L_12942c81;
  /* 12942c80 int3  */
  x86_unimpl("int3 @ 0x12942c80");
L_12942c81:;
  /* 12942c81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942c84 push ecx */
  push32((uint32_t)(ECX));
  /* 12942c85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942c88 push edx */
  push32((uint32_t)(EDX));
  /* 12942c89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942c8c push eax */
  push32((uint32_t)(EAX));
  /* 12942c8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942c90 push ecx */
  push32((uint32_t)(ECX));
  /* 12942c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942c94 push edx */
  push32((uint32_t)(EDX));
  /* 12942c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942c99 call dword ptr [0x1296cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296cc90))), 0x12942c9fu);
  /* 12942c9f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12942ca4 jne 0x12942d04 */
  if (!C.zf) goto L_12942d04;
  /* 12942ca6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942caa je 0x12942cd7 */
  if (C.zf) goto L_12942cd7;
L_12942cac:;
  /* 12942cac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942caf push eax */
  push32((uint32_t)(EAX));
  /* 12942cb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12942cb4 push 0x12969444 */
  push32((uint32_t)(0x12969444u));
  /* 12942cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12942cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12942cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12942cc1 call 0x12941c10 */
  push32(0x12942cc6u); f_12941c10();
  /* 12942cc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942ccc jne 0x12942ccf */
  if (!C.zf) goto L_12942ccf;
  /* 12942cce int3  */
  x86_unimpl("int3 @ 0x12942cce");
L_12942ccf:;
  /* 12942ccf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12942cd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12942cd3 jne 0x12942cac */
  if (!C.zf) goto L_12942cac;
  /* 12942cd5 jmp 0x12942cfd */
  goto L_12942cfd;
L_12942cd7:;
  /* 12942cd7 push 0x12969420 */
  push32((uint32_t)(0x12969420u));
  /* 12942cdc push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12942ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942ce9 call 0x12941c10 */
  push32(0x12942ceeu); f_12941c10();
  /* 12942cee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942cf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942cf4 jne 0x12942cf7 */
  if (!C.zf) goto L_12942cf7;
  /* 12942cf6 int3  */
  x86_unimpl("int3 @ 0x12942cf6");
L_12942cf7:;
  /* 12942cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12942cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12942cfb jne 0x12942cd7 */
  if (!C.zf) goto L_12942cd7;
L_12942cfd:;
  /* 12942cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12942cff jmp 0x12942f2c */
  goto L_12942f2c;
L_12942d04:;
  /* 12942d04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942d07 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12942d0d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d10 je 0x12942d26 */
  if (C.zf) goto L_12942d26;
  /* 12942d12 mov edx, dword ptr [0x1296ca84] */
  EDX = (r32((uint32_t)(0x1296ca84)));
  /* 12942d18 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12942d1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12942d1d jne 0x12942d26 */
  if (!C.zf) goto L_12942d26;
  /* 12942d1f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12942d26:;
  /* 12942d26 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d2a ja 0x12942d37 */
  if ((!C.cf&&!C.zf)) goto L_12942d37;
  /* 12942d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942d2f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942d32 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d35 jbe 0x12942d63 */
  if ((C.cf||C.zf)) goto L_12942d63;
L_12942d37:;
  /* 12942d37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942d3a push ecx */
  push32((uint32_t)(ECX));
  /* 12942d3b push 0x129693f8 */
  push32((uint32_t)(0x129693f8u));
  /* 12942d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942d48 call 0x12941c10 */
  push32(0x12942d4du); f_12941c10();
  /* 12942d4d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942d50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d53 jne 0x12942d56 */
  if (!C.zf) goto L_12942d56;
  /* 12942d55 int3  */
  x86_unimpl("int3 @ 0x12942d55");
L_12942d56:;
  /* 12942d56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12942d58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12942d5a jne 0x12942d37 */
  if (!C.zf) goto L_12942d37;
  /* 12942d5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12942d5e jmp 0x12942f2c */
  goto L_12942f2c;
L_12942d63:;
  /* 12942d63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942d66 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12942d6b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d6e je 0x12942db0 */
  if (C.zf) goto L_12942db0;
  /* 12942d70 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d74 je 0x12942db0 */
  if (C.zf) goto L_12942db0;
  /* 12942d76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942d79 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12942d7f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d82 je 0x12942db0 */
  if (C.zf) goto L_12942db0;
  /* 12942d84 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942d88 je 0x12942db0 */
  if (C.zf) goto L_12942db0;
L_12942d8a:;
  /* 12942d8a push 0x129693c4 */
  push32((uint32_t)(0x129693c4u));
  /* 12942d8f push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12942d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942d9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12942d9c call 0x12941c10 */
  push32(0x12942da1u); f_12941c10();
  /* 12942da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942da7 jne 0x12942daa */
  if (!C.zf) goto L_12942daa;
  /* 12942da9 int3  */
  x86_unimpl("int3 @ 0x12942da9");
L_12942daa:;
  /* 12942daa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12942dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12942dae jne 0x12942d8a */
  if (!C.zf) goto L_12942d8a;
L_12942db0:;
  /* 12942db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942db3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942db6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12942db9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12942dbc push ecx */
  push32((uint32_t)(ECX));
  /* 12942dbd call 0x129469a0 */
  push32(0x12942dc2u); f_129469a0();
  /* 12942dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942dc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12942dc8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942dcc jne 0x12942dd5 */
  if (!C.zf) goto L_12942dd5;
  /* 12942dce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12942dd0 jmp 0x12942f2c */
  goto L_12942f2c;
L_12942dd5:;
  /* 12942dd5 mov edx, dword ptr [0x1296ca88] */
  EDX = (r32((uint32_t)(0x1296ca88)));
  /* 12942ddb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942dde mov dword ptr [0x1296ca88], edx */
  w32((uint32_t)(0x1296ca88), (EDX));
  /* 12942de4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942de8 je 0x12942e33 */
  if (C.zf) goto L_12942e33;
  /* 12942dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942ded mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12942df3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942df6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12942dfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e00 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12942e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e0a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12942e11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942e17 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12942e1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e1d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12942e24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e27 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12942e2e jmp 0x12942ed3 */
  goto L_12942ed3;
L_12942e33:;
  /* 12942e33 mov edx, dword ptr [0x1296e4d0] */
  EDX = (r32((uint32_t)(0x1296e4d0)));
  /* 12942e39 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942e3c mov dword ptr [0x1296e4d0], edx */
  w32((uint32_t)(0x1296e4d0), (EDX));
  /* 12942e42 mov eax, dword ptr [0x1296e4d8] */
  EAX = (r32((uint32_t)(0x1296e4d8)));
  /* 12942e47 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942e4a mov dword ptr [0x1296e4d8], eax */
  w32((uint32_t)(0x1296e4d8), (EAX));
  /* 12942e4f mov ecx, dword ptr [0x1296e4d8] */
  ECX = (r32((uint32_t)(0x1296e4d8)));
  /* 12942e55 cmp ecx, dword ptr [0x1296e4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942e5b jbe 0x12942e69 */
  if ((C.cf||C.zf)) goto L_12942e69;
  /* 12942e5d mov edx, dword ptr [0x1296e4d8] */
  EDX = (r32((uint32_t)(0x1296e4d8)));
  /* 12942e63 mov dword ptr [0x1296e4dc], edx */
  w32((uint32_t)(0x1296e4dc), (EDX));
L_12942e69:;
  /* 12942e69 cmp dword ptr [0x1296e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942e70 je 0x12942e7f */
  if (C.zf) goto L_12942e7f;
  /* 12942e72 mov eax, dword ptr [0x1296e4d4] */
  EAX = (r32((uint32_t)(0x1296e4d4)));
  /* 12942e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e7a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12942e7d jmp 0x12942e88 */
  goto L_12942e88;
L_12942e7f:;
  /* 12942e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e82 mov dword ptr [0x1296e4cc], edx */
  w32((uint32_t)(0x1296e4cc), (EDX));
L_12942e88:;
  /* 12942e88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e8b mov ecx, dword ptr [0x1296e4d4] */
  ECX = (r32((uint32_t)(0x1296e4d4)));
  /* 12942e91 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12942e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942e96 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12942e9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942ea3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12942ea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942ea9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942eac mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12942eaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942eb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942eb5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12942eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942ebb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942ebe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12942ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942ec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942ec7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12942eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942ecd mov dword ptr [0x1296e4d4], ecx */
  w32((uint32_t)(0x1296e4d4), (ECX));
L_12942ed3:;
  /* 12942ed3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12942ed5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12942ed7 mov dl, byte ptr [0x1296ca90] */
  DL = (r8((uint32_t)(0x1296ca90)));
  /* 12942edd push edx */
  push32((uint32_t)(EDX));
  /* 12942ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942ee1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942ee4 push eax */
  push32((uint32_t)(EAX));
  /* 12942ee5 call 0x129468c0 */
  push32(0x12942eeau); f_129468c0();
  /* 12942eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942eed push 4 */
  push32((uint32_t)(0x4u));
  /* 12942eef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12942ef1 mov cl, byte ptr [0x1296ca90] */
  CL = (r8((uint32_t)(0x1296ca90)));
  /* 12942ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 12942ef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942efe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12942f02 push ecx */
  push32((uint32_t)(ECX));
  /* 12942f03 call 0x129468c0 */
  push32(0x12942f08u); f_129468c0();
  /* 12942f08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942f0e push edx */
  push32((uint32_t)(EDX));
  /* 12942f0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12942f11 mov al, byte ptr [0x1296ca92] */
  AL = (r8((uint32_t)(0x1296ca92)));
  /* 12942f16 push eax */
  push32((uint32_t)(EAX));
  /* 12942f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942f1a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942f1d push ecx */
  push32((uint32_t)(ECX));
  /* 12942f1e call 0x129468c0 */
  push32(0x12942f23u); f_129468c0();
  /* 12942f23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942f26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12942f29 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12942f2c:;
  /* 12942f2c pop edi */
  EDI = (pop32());
  /* 12942f2d pop esi */
  ESI = (pop32());
  /* 12942f2e pop ebx */
  EBX = (pop32());
  /* 12942f2f mov esp, ebp */
  ESP = (EBP);
  /* 12942f31 pop ebp */
  EBP = (pop32());
  /* 12942f32 ret  */
  ESPCHK(0x12942c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x12942f40 (27 bytes, 13 insns) */
void f_12942f40(void) {
  FTRACE(0x12942f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12942f41 mov ebp, esp */
  EBP = (ESP);
  /* 12942f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942f4c push eax */
  push32((uint32_t)(EAX));
  /* 12942f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942f50 push ecx */
  push32((uint32_t)(ECX));
  /* 12942f51 call 0x12942f60 */
  push32(0x12942f56u); f_12942f60();
  /* 12942f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942f59 pop ebp */
  EBP = (pop32());
  /* 12942f5a ret  */
  ESPCHK(0x12942f40u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12942f60 (96 bytes, 37 insns) */
void f_12942f60(void) {
  FTRACE(0x12942f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12942f61 mov ebp, esp */
  EBP = (ESP);
  /* 12942f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12942f66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942f69 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12942f6d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12942f70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12942f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12942f74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942f77 push edx */
  push32((uint32_t)(EDX));
  /* 12942f78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942f7b push eax */
  push32((uint32_t)(EAX));
  /* 12942f7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942f7f push ecx */
  push32((uint32_t)(ECX));
  /* 12942f80 call 0x12942b50 */
  push32(0x12942f85u); f_12942b50();
  /* 12942f85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942f88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12942f8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942f8f je 0x12942fb9 */
  if (C.zf) goto L_12942fb9;
  /* 12942f91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942f94 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12942f97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12942f9a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942f9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12942fa0:;
  /* 12942fa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12942fa3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12942fa6 jae 0x12942fb9 */
  if (!C.cf) goto L_12942fb9;
  /* 12942fa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12942fab mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12942fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12942fb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12942fb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12942fb7 jmp 0x12942fa0 */
  goto L_12942fa0;
L_12942fb9:;
  /* 12942fb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12942fbc mov esp, ebp */
  ESP = (EBP);
  /* 12942fbe pop ebp */
  EBP = (pop32());
  /* 12942fbf ret  */
  ESPCHK(0x12942f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fc0 @ 0x12942fc0 (27 bytes, 13 insns) */
void f_12942fc0(void) {
  FTRACE(0x12942fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12942fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12942fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12942fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12942fc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942fcc push eax */
  push32((uint32_t)(EAX));
  /* 12942fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12942fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12942fd1 call 0x12942fe0 */
  push32(0x12942fd6u); f_12942fe0();
  /* 12942fd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942fd9 pop ebp */
  EBP = (pop32());
  /* 12942fda ret  */
  ESPCHK(0x12942fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x12942fe0 (64 bytes, 27 insns) */
void f_12942fe0(void) {
  FTRACE(0x12942fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12942fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12942fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12942fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12942fe4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12942fe6 call 0x12946550 */
  push32(0x12942febu); f_12946550();
  /* 12942feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12942fee push 1 */
  push32((uint32_t)(0x1u));
  /* 12942ff0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12942ff3 push eax */
  push32((uint32_t)(EAX));
  /* 12942ff4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12942ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 12942ff8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12942ffb push edx */
  push32((uint32_t)(EDX));
  /* 12942ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12942fff push eax */
  push32((uint32_t)(EAX));
  /* 12943000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943003 push ecx */
  push32((uint32_t)(ECX));
  /* 12943004 call 0x12943020 */
  push32(0x12943009u); f_12943020();
  /* 12943009 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294300c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294300f push 9 */
  push32((uint32_t)(0x9u));
  /* 12943011 call 0x129465f0 */
  push32(0x12943016u); f_129465f0();
  /* 12943016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294301c mov esp, ebp */
  ESP = (EBP);
  /* 1294301e pop ebp */
  EBP = (pop32());
  /* 1294301f ret  */
  ESPCHK(0x12942fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x12943020 (1297 bytes, 431 insns) */
void f_12943020(void) {
  FTRACE(0x12943020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943020 push ebp */
  push32((uint32_t)(EBP));
  /* 12943021 mov ebp, esp */
  EBP = (ESP);
  /* 12943023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943026 push ebx */
  push32((uint32_t)(EBX));
  /* 12943027 push esi */
  push32((uint32_t)(ESI));
  /* 12943028 push edi */
  push32((uint32_t)(EDI));
  /* 12943029 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12943030 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943034 jne 0x12943053 */
  if (!C.zf) goto L_12943053;
  /* 12943036 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12943039 push eax */
  push32((uint32_t)(EAX));
  /* 1294303a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294303d push ecx */
  push32((uint32_t)(ECX));
  /* 1294303e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12943041 push edx */
  push32((uint32_t)(EDX));
  /* 12943042 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943045 push eax */
  push32((uint32_t)(EAX));
  /* 12943046 call 0x12942b50 */
  push32(0x1294304bu); f_12942b50();
  /* 1294304b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294304e jmp 0x1294352a */
  goto L_1294352a;
L_12943053:;
  /* 12943053 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943057 je 0x12943076 */
  if (C.zf) goto L_12943076;
  /* 12943059 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294305d jne 0x12943076 */
  if (!C.zf) goto L_12943076;
  /* 1294305f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12943062 push ecx */
  push32((uint32_t)(ECX));
  /* 12943063 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943066 push edx */
  push32((uint32_t)(EDX));
  /* 12943067 call 0x129435e0 */
  push32(0x1294306cu); f_129435e0();
  /* 1294306c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294306f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943071 jmp 0x1294352a */
  goto L_1294352a;
L_12943076:;
  /* 12943076 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 1294307b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1294307e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943080 je 0x129430b2 */
  if (C.zf) goto L_129430b2;
L_12943082:;
  /* 12943082 call 0x12943cf0 */
  push32(0x12943087u); f_12943cf0();
  /* 12943087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943089 jne 0x129430ac */
  if (!C.zf) goto L_129430ac;
  /* 1294308b push 0x12969488 */
  push32((uint32_t)(0x12969488u));
  /* 12943090 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943092 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12943097 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 1294309c push 2 */
  push32((uint32_t)(0x2u));
  /* 1294309e call 0x12941c10 */
  push32(0x129430a3u); f_12941c10();
  /* 129430a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129430a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129430a9 jne 0x129430ac */
  if (!C.zf) goto L_129430ac;
  /* 129430ab int3  */
  x86_unimpl("int3 @ 0x129430ab");
L_129430ac:;
  /* 129430ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129430ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129430b0 jne 0x12943082 */
  if (!C.zf) goto L_12943082;
L_129430b2:;
  /* 129430b2 mov edx, dword ptr [0x1296ca88] */
  EDX = (r32((uint32_t)(0x1296ca88)));
  /* 129430b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129430bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129430be cmp eax, dword ptr [0x1296ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129430c4 jne 0x129430c7 */
  if (!C.zf) goto L_129430c7;
  /* 129430c6 int3  */
  x86_unimpl("int3 @ 0x129430c6");
L_129430c7:;
  /* 129430c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129430ca push ecx */
  push32((uint32_t)(ECX));
  /* 129430cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129430ce push edx */
  push32((uint32_t)(EDX));
  /* 129430cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129430d2 push eax */
  push32((uint32_t)(EAX));
  /* 129430d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129430d6 push ecx */
  push32((uint32_t)(ECX));
  /* 129430d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129430da push edx */
  push32((uint32_t)(EDX));
  /* 129430db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129430de push eax */
  push32((uint32_t)(EAX));
  /* 129430df push 2 */
  push32((uint32_t)(0x2u));
  /* 129430e1 call dword ptr [0x1296cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296cc90))), 0x129430e7u);
  /* 129430e7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129430ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129430ec jne 0x1294314c */
  if (!C.zf) goto L_1294314c;
  /* 129430ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129430f2 je 0x1294311f */
  if (C.zf) goto L_1294311f;
L_129430f4:;
  /* 129430f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129430f7 push ecx */
  push32((uint32_t)(ECX));
  /* 129430f8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129430fb push edx */
  push32((uint32_t)(EDX));
  /* 129430fc push 0x12969604 */
  push32((uint32_t)(0x12969604u));
  /* 12943101 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943103 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943105 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943107 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943109 call 0x12941c10 */
  push32(0x1294310eu); f_12941c10();
  /* 1294310e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943111 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943114 jne 0x12943117 */
  if (!C.zf) goto L_12943117;
  /* 12943116 int3  */
  x86_unimpl("int3 @ 0x12943116");
L_12943117:;
  /* 12943117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294311b jne 0x129430f4 */
  if (!C.zf) goto L_129430f4;
  /* 1294311d jmp 0x12943145 */
  goto L_12943145;
L_1294311f:;
  /* 1294311f push 0x129695e0 */
  push32((uint32_t)(0x129695e0u));
  /* 12943124 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12943129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294312b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294312d push 0 */
  push32((uint32_t)(0x0u));
  /* 1294312f push 0 */
  push32((uint32_t)(0x0u));
  /* 12943131 call 0x12941c10 */
  push32(0x12943136u); f_12941c10();
  /* 12943136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943139 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294313c jne 0x1294313f */
  if (!C.zf) goto L_1294313f;
  /* 1294313e int3  */
  x86_unimpl("int3 @ 0x1294313e");
L_1294313f:;
  /* 1294313f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943141 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943143 jne 0x1294311f */
  if (!C.zf) goto L_1294311f;
L_12943145:;
  /* 12943145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943147 jmp 0x1294352a */
  goto L_1294352a;
L_1294314c:;
  /* 1294314c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943150 jbe 0x1294317e */
  if ((C.cf||C.zf)) goto L_1294317e;
L_12943152:;
  /* 12943152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943155 push edx */
  push32((uint32_t)(EDX));
  /* 12943156 push 0x129695b0 */
  push32((uint32_t)(0x129695b0u));
  /* 1294315b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294315d push 0 */
  push32((uint32_t)(0x0u));
  /* 1294315f push 0 */
  push32((uint32_t)(0x0u));
  /* 12943161 push 1 */
  push32((uint32_t)(0x1u));
  /* 12943163 call 0x12941c10 */
  push32(0x12943168u); f_12941c10();
  /* 12943168 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294316b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294316e jne 0x12943171 */
  if (!C.zf) goto L_12943171;
  /* 12943170 int3  */
  x86_unimpl("int3 @ 0x12943170");
L_12943171:;
  /* 12943171 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943175 jne 0x12943152 */
  if (!C.zf) goto L_12943152;
  /* 12943177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943179 jmp 0x1294352a */
  goto L_1294352a;
L_1294317e:;
  /* 1294317e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943182 je 0x129431c6 */
  if (C.zf) goto L_129431c6;
  /* 12943184 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12943187 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1294318d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943190 je 0x129431c6 */
  if (C.zf) goto L_129431c6;
  /* 12943192 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12943195 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1294319b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294319e je 0x129431c6 */
  if (C.zf) goto L_129431c6;
L_129431a0:;
  /* 129431a0 push 0x129693c4 */
  push32((uint32_t)(0x129693c4u));
  /* 129431a5 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 129431aa push 0 */
  push32((uint32_t)(0x0u));
  /* 129431ac push 0 */
  push32((uint32_t)(0x0u));
  /* 129431ae push 0 */
  push32((uint32_t)(0x0u));
  /* 129431b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 129431b2 call 0x12941c10 */
  push32(0x129431b7u); f_12941c10();
  /* 129431b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129431ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129431bd jne 0x129431c0 */
  if (!C.zf) goto L_129431c0;
  /* 129431bf int3  */
  x86_unimpl("int3 @ 0x129431bf");
L_129431c0:;
  /* 129431c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129431c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129431c4 jne 0x129431a0 */
  if (!C.zf) goto L_129431a0;
L_129431c6:;
  /* 129431c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129431c9 push ecx */
  push32((uint32_t)(ECX));
  /* 129431ca call 0x12944150 */
  push32(0x129431cfu); f_12944150();
  /* 129431cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129431d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129431d4 jne 0x129431f7 */
  if (!C.zf) goto L_129431f7;
  /* 129431d6 push 0x1296958c */
  push32((uint32_t)(0x1296958cu));
  /* 129431db push 0 */
  push32((uint32_t)(0x0u));
  /* 129431dd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 129431e2 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 129431e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129431e9 call 0x12941c10 */
  push32(0x129431eeu); f_12941c10();
  /* 129431ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129431f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129431f4 jne 0x129431f7 */
  if (!C.zf) goto L_129431f7;
  /* 129431f6 int3  */
  x86_unimpl("int3 @ 0x129431f6");
L_129431f7:;
  /* 129431f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129431f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129431fb jne 0x129431c6 */
  if (!C.zf) goto L_129431c6;
  /* 129431fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943200 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943203 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12943206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943209 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294320d jne 0x12943216 */
  if (!C.zf) goto L_12943216;
  /* 1294320f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12943216:;
  /* 12943216 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294321a je 0x1294325a */
  if (C.zf) goto L_1294325a;
L_1294321c:;
  /* 1294321c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294321f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943226 jne 0x12943231 */
  if (!C.zf) goto L_12943231;
  /* 12943228 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294322b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294322f je 0x12943252 */
  if (C.zf) goto L_12943252;
L_12943231:;
  /* 12943231 push 0x12969544 */
  push32((uint32_t)(0x12969544u));
  /* 12943236 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943238 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1294323d push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943242 push 2 */
  push32((uint32_t)(0x2u));
  /* 12943244 call 0x12941c10 */
  push32(0x12943249u); f_12941c10();
  /* 12943249 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294324c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294324f jne 0x12943252 */
  if (!C.zf) goto L_12943252;
  /* 12943251 int3  */
  x86_unimpl("int3 @ 0x12943251");
L_12943252:;
  /* 12943252 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943254 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943256 jne 0x1294321c */
  if (!C.zf) goto L_1294321c;
  /* 12943258 jmp 0x129432be */
  goto L_129432be;
L_1294325a:;
  /* 1294325a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294325d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943260 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12943265 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943268 jne 0x1294327f */
  if (!C.zf) goto L_1294327f;
  /* 1294326a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294326d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12943273 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943276 jne 0x1294327f */
  if (!C.zf) goto L_1294327f;
  /* 12943278 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1294327f:;
  /* 1294327f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943282 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943285 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294328a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294328d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12943293 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943295 je 0x129432b8 */
  if (C.zf) goto L_129432b8;
  /* 12943297 push 0x12969508 */
  push32((uint32_t)(0x12969508u));
  /* 1294329c push 0 */
  push32((uint32_t)(0x0u));
  /* 1294329e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 129432a3 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 129432a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129432aa call 0x12941c10 */
  push32(0x129432afu); f_12941c10();
  /* 129432af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129432b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129432b5 jne 0x129432b8 */
  if (!C.zf) goto L_129432b8;
  /* 129432b7 int3  */
  x86_unimpl("int3 @ 0x129432b7");
L_129432b8:;
  /* 129432b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129432ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129432bc jne 0x1294327f */
  if (!C.zf) goto L_1294327f;
L_129432be:;
  /* 129432be cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129432c2 je 0x129432e9 */
  if (C.zf) goto L_129432e9;
  /* 129432c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129432c7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129432ca push eax */
  push32((uint32_t)(EAX));
  /* 129432cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129432ce push ecx */
  push32((uint32_t)(ECX));
  /* 129432cf call 0x12946ad0 */
  push32(0x129432d4u); f_12946ad0();
  /* 129432d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129432d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129432da cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129432de jne 0x129432e7 */
  if (!C.zf) goto L_129432e7;
  /* 129432e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129432e2 jmp 0x1294352a */
  goto L_1294352a;
L_129432e7:;
  /* 129432e7 jmp 0x1294330c */
  goto L_1294330c;
L_129432e9:;
  /* 129432e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129432ec add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129432ef push edx */
  push32((uint32_t)(EDX));
  /* 129432f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129432f3 push eax */
  push32((uint32_t)(EAX));
  /* 129432f4 call 0x12946a20 */
  push32(0x129432f9u); f_12946a20();
  /* 129432f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129432fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129432ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943303 jne 0x1294330c */
  if (!C.zf) goto L_1294330c;
  /* 12943305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943307 jmp 0x1294352a */
  goto L_1294352a;
L_1294330c:;
  /* 1294330c mov ecx, dword ptr [0x1296ca88] */
  ECX = (r32((uint32_t)(0x1296ca88)));
  /* 12943312 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943315 mov dword ptr [0x1296ca88], ecx */
  w32((uint32_t)(0x1296ca88), (ECX));
  /* 1294331b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294331f jne 0x12943377 */
  if (!C.zf) goto L_12943377;
  /* 12943321 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943324 mov eax, dword ptr [0x1296e4d0] */
  EAX = (r32((uint32_t)(0x1296e4d0)));
  /* 12943329 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294332c mov dword ptr [0x1296e4d0], eax */
  w32((uint32_t)(0x1296e4d0), (EAX));
  /* 12943331 mov ecx, dword ptr [0x1296e4d0] */
  ECX = (r32((uint32_t)(0x1296e4d0)));
  /* 12943337 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294333a mov dword ptr [0x1296e4d0], ecx */
  w32((uint32_t)(0x1296e4d0), (ECX));
  /* 12943340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943343 mov eax, dword ptr [0x1296e4d8] */
  EAX = (r32((uint32_t)(0x1296e4d8)));
  /* 12943348 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294334b mov dword ptr [0x1296e4d8], eax */
  w32((uint32_t)(0x1296e4d8), (EAX));
  /* 12943350 mov ecx, dword ptr [0x1296e4d8] */
  ECX = (r32((uint32_t)(0x1296e4d8)));
  /* 12943356 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943359 mov dword ptr [0x1296e4d8], ecx */
  w32((uint32_t)(0x1296e4d8), (ECX));
  /* 1294335f mov edx, dword ptr [0x1296e4d8] */
  EDX = (r32((uint32_t)(0x1296e4d8)));
  /* 12943365 cmp edx, dword ptr [0x1296e4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294336b jbe 0x12943377 */
  if ((C.cf||C.zf)) goto L_12943377;
  /* 1294336d mov eax, dword ptr [0x1296e4d8] */
  EAX = (r32((uint32_t)(0x1296e4d8)));
  /* 12943372 mov dword ptr [0x1296e4dc], eax */
  w32((uint32_t)(0x1296e4dc), (EAX));
L_12943377:;
  /* 12943377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294337a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294337d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12943380 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943383 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943386 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943389 jbe 0x129433af */
  if ((C.cf||C.zf)) goto L_129433af;
  /* 1294338b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294338e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943391 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943394 push edx */
  push32((uint32_t)(EDX));
  /* 12943395 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943397 mov al, byte ptr [0x1296ca92] */
  AL = (r8((uint32_t)(0x1296ca92)));
  /* 1294339c push eax */
  push32((uint32_t)(EAX));
  /* 1294339d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129433a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129433a3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129433a6 push edx */
  push32((uint32_t)(EDX));
  /* 129433a7 call 0x129468c0 */
  push32(0x129433acu); f_129468c0();
  /* 129433ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129433af:;
  /* 129433af push 4 */
  push32((uint32_t)(0x4u));
  /* 129433b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129433b3 mov al, byte ptr [0x1296ca90] */
  AL = (r8((uint32_t)(0x1296ca90)));
  /* 129433b8 push eax */
  push32((uint32_t)(EAX));
  /* 129433b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129433bc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129433bf push ecx */
  push32((uint32_t)(ECX));
  /* 129433c0 call 0x129468c0 */
  push32(0x129433c5u); f_129468c0();
  /* 129433c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129433c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129433cc jne 0x129433e9 */
  if (!C.zf) goto L_129433e9;
  /* 129433ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129433d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129433d4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129433d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129433da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129433dd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 129433e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129433e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129433e6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_129433e9:;
  /* 129433e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129433ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129433ef mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_129433f2:;
  /* 129433f2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129433f6 jne 0x12943427 */
  if (!C.zf) goto L_12943427;
  /* 129433f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129433fc jne 0x12943406 */
  if (!C.zf) goto L_12943406;
  /* 129433fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943401 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943404 je 0x12943427 */
  if (C.zf) goto L_12943427;
L_12943406:;
  /* 12943406 push 0x129694d4 */
  push32((uint32_t)(0x129694d4u));
  /* 1294340b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294340d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12943412 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943417 push 2 */
  push32((uint32_t)(0x2u));
  /* 12943419 call 0x12941c10 */
  push32(0x1294341eu); f_12941c10();
  /* 1294341e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943421 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943424 jne 0x12943427 */
  if (!C.zf) goto L_12943427;
  /* 12943426 int3  */
  x86_unimpl("int3 @ 0x12943426");
L_12943427:;
  /* 12943427 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943429 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294342b jne 0x129433f2 */
  if (!C.zf) goto L_129433f2;
  /* 1294342d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943430 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943433 je 0x1294343b */
  if (C.zf) goto L_1294343b;
  /* 12943435 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943439 je 0x12943443 */
  if (C.zf) goto L_12943443;
L_1294343b:;
  /* 1294343b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294343e jmp 0x1294352a */
  goto L_1294352a;
L_12943443:;
  /* 12943443 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943446 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943449 je 0x1294345b */
  if (C.zf) goto L_1294345b;
  /* 1294344b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294344e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12943450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943453 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12943456 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12943459 jmp 0x12943497 */
  goto L_12943497;
L_1294345b:;
  /* 1294345b mov eax, dword ptr [0x1296e4cc] */
  EAX = (r32((uint32_t)(0x1296e4cc)));
  /* 12943460 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943463 je 0x12943486 */
  if (C.zf) goto L_12943486;
  /* 12943465 push 0x129694b8 */
  push32((uint32_t)(0x129694b8u));
  /* 1294346a push 0 */
  push32((uint32_t)(0x0u));
  /* 1294346c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12943471 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943476 push 2 */
  push32((uint32_t)(0x2u));
  /* 12943478 call 0x12941c10 */
  push32(0x1294347du); f_12941c10();
  /* 1294347d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943480 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943483 jne 0x12943486 */
  if (!C.zf) goto L_12943486;
  /* 12943485 int3  */
  x86_unimpl("int3 @ 0x12943485");
L_12943486:;
  /* 12943486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943488 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294348a jne 0x1294345b */
  if (!C.zf) goto L_1294345b;
  /* 1294348c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294348f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12943492 mov dword ptr [0x1296e4cc], eax */
  w32((uint32_t)(0x1296e4cc), (EAX));
L_12943497:;
  /* 12943497 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294349a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294349e je 0x129434af */
  if (C.zf) goto L_129434af;
  /* 129434a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129434a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129434a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129434a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129434ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129434ad jmp 0x129434ea */
  goto L_129434ea;
L_129434af:;
  /* 129434af mov eax, dword ptr [0x1296e4d4] */
  EAX = (r32((uint32_t)(0x1296e4d4)));
  /* 129434b4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129434b7 je 0x129434da */
  if (C.zf) goto L_129434da;
  /* 129434b9 push 0x1296949c */
  push32((uint32_t)(0x1296949cu));
  /* 129434be push 0 */
  push32((uint32_t)(0x0u));
  /* 129434c0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 129434c5 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 129434ca push 2 */
  push32((uint32_t)(0x2u));
  /* 129434cc call 0x12941c10 */
  push32(0x129434d1u); f_12941c10();
  /* 129434d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129434d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129434d7 jne 0x129434da */
  if (!C.zf) goto L_129434da;
  /* 129434d9 int3  */
  x86_unimpl("int3 @ 0x129434d9");
L_129434da:;
  /* 129434da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129434dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129434de jne 0x129434af */
  if (!C.zf) goto L_129434af;
  /* 129434e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129434e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129434e5 mov dword ptr [0x1296e4d4], eax */
  w32((uint32_t)(0x1296e4d4), (EAX));
L_129434ea:;
  /* 129434ea cmp dword ptr [0x1296e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129434f1 je 0x12943501 */
  if (C.zf) goto L_12943501;
  /* 129434f3 mov ecx, dword ptr [0x1296e4d4] */
  ECX = (r32((uint32_t)(0x1296e4d4)));
  /* 129434f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129434fc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129434ff jmp 0x12943509 */
  goto L_12943509;
L_12943501:;
  /* 12943501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943504 mov dword ptr [0x1296e4cc], eax */
  w32((uint32_t)(0x1296e4cc), (EAX));
L_12943509:;
  /* 12943509 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294350c mov edx, dword ptr [0x1296e4d4] */
  EDX = (r32((uint32_t)(0x1296e4d4)));
  /* 12943512 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12943514 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943517 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1294351e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943521 mov dword ptr [0x1296e4d4], ecx */
  w32((uint32_t)(0x1296e4d4), (ECX));
  /* 12943527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1294352a:;
  /* 1294352a pop edi */
  EDI = (pop32());
  /* 1294352b pop esi */
  ESI = (pop32());
  /* 1294352c pop ebx */
  EBX = (pop32());
  /* 1294352d mov esp, ebp */
  ESP = (EBP);
  /* 1294352f pop ebp */
  EBP = (pop32());
  /* 12943530 ret  */
  ESPCHK(0x12943020u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x12943540 (27 bytes, 13 insns) */
void f_12943540(void) {
  FTRACE(0x12943540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943540 push ebp */
  push32((uint32_t)(EBP));
  /* 12943541 mov ebp, esp */
  EBP = (ESP);
  /* 12943543 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943547 push 1 */
  push32((uint32_t)(0x1u));
  /* 12943549 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294354c push eax */
  push32((uint32_t)(EAX));
  /* 1294354d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943550 push ecx */
  push32((uint32_t)(ECX));
  /* 12943551 call 0x12943560 */
  push32(0x12943556u); f_12943560();
  /* 12943556 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943559 pop ebp */
  EBP = (pop32());
  /* 1294355a ret  */
  ESPCHK(0x12943540u, _esp0);
  ESP += 4; return;
}

/* FUN_10003560 @ 0x12943560 (64 bytes, 27 insns) */
void f_12943560(void) {
  FTRACE(0x12943560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943560 push ebp */
  push32((uint32_t)(EBP));
  /* 12943561 mov ebp, esp */
  EBP = (ESP);
  /* 12943563 push ecx */
  push32((uint32_t)(ECX));
  /* 12943564 push 9 */
  push32((uint32_t)(0x9u));
  /* 12943566 call 0x12946550 */
  push32(0x1294356bu); f_12946550();
  /* 1294356b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294356e push 0 */
  push32((uint32_t)(0x0u));
  /* 12943570 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12943573 push eax */
  push32((uint32_t)(EAX));
  /* 12943574 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12943577 push ecx */
  push32((uint32_t)(ECX));
  /* 12943578 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294357b push edx */
  push32((uint32_t)(EDX));
  /* 1294357c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294357f push eax */
  push32((uint32_t)(EAX));
  /* 12943580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943583 push ecx */
  push32((uint32_t)(ECX));
  /* 12943584 call 0x12943020 */
  push32(0x12943589u); f_12943020();
  /* 12943589 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294358c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294358f push 9 */
  push32((uint32_t)(0x9u));
  /* 12943591 call 0x129465f0 */
  push32(0x12943596u); f_129465f0();
  /* 12943596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294359c mov esp, ebp */
  ESP = (EBP);
  /* 1294359e pop ebp */
  EBP = (pop32());
  /* 1294359f ret  */
  ESPCHK(0x12943560u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a0 @ 0x129435a0 (19 bytes, 9 insns) */
void f_129435a0(void) {
  FTRACE(0x129435a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129435a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129435a1 mov ebp, esp */
  EBP = (ESP);
  /* 129435a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129435a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129435a8 push eax */
  push32((uint32_t)(EAX));
  /* 129435a9 call 0x129435e0 */
  push32(0x129435aeu); f_129435e0();
  /* 129435ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129435b1 pop ebp */
  EBP = (pop32());
  /* 129435b2 ret  */
  ESPCHK(0x129435a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x129435c0 (19 bytes, 9 insns) */
void f_129435c0(void) {
  FTRACE(0x129435c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129435c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129435c1 mov ebp, esp */
  EBP = (ESP);
  /* 129435c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129435c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129435c8 push eax */
  push32((uint32_t)(EAX));
  /* 129435c9 call 0x12943610 */
  push32(0x129435ceu); f_12943610();
  /* 129435ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129435d1 pop ebp */
  EBP = (pop32());
  /* 129435d2 ret  */
  ESPCHK(0x129435c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x129435e0 (41 bytes, 16 insns) */
void f_129435e0(void) {
  FTRACE(0x129435e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129435e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129435e1 mov ebp, esp */
  EBP = (ESP);
  /* 129435e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 129435e5 call 0x12946550 */
  push32(0x129435eau); f_12946550();
  /* 129435ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129435ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129435f0 push eax */
  push32((uint32_t)(EAX));
  /* 129435f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129435f4 push ecx */
  push32((uint32_t)(ECX));
  /* 129435f5 call 0x12943610 */
  push32(0x129435fau); f_12943610();
  /* 129435fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129435fd push 9 */
  push32((uint32_t)(0x9u));
  /* 129435ff call 0x129465f0 */
  push32(0x12943604u); f_129465f0();
  /* 12943604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943607 pop ebp */
  EBP = (pop32());
  /* 12943608 ret  */
  ESPCHK(0x129435e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003610 @ 0x12943610 (1004 bytes, 342 insns) */
void f_12943610(void) {
  FTRACE(0x12943610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943610 push ebp */
  push32((uint32_t)(EBP));
  /* 12943611 mov ebp, esp */
  EBP = (ESP);
  /* 12943613 push ecx */
  push32((uint32_t)(ECX));
  /* 12943614 push ebx */
  push32((uint32_t)(EBX));
  /* 12943615 push esi */
  push32((uint32_t)(ESI));
  /* 12943616 push edi */
  push32((uint32_t)(EDI));
  /* 12943617 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 1294361c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1294361f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943621 je 0x12943653 */
  if (C.zf) goto L_12943653;
L_12943623:;
  /* 12943623 call 0x12943cf0 */
  push32(0x12943628u); f_12943cf0();
  /* 12943628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294362a jne 0x1294364d */
  if (!C.zf) goto L_1294364d;
  /* 1294362c push 0x12969488 */
  push32((uint32_t)(0x12969488u));
  /* 12943631 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943633 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12943638 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 1294363d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294363f call 0x12941c10 */
  push32(0x12943644u); f_12941c10();
  /* 12943644 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294364a jne 0x1294364d */
  if (!C.zf) goto L_1294364d;
  /* 1294364c int3  */
  x86_unimpl("int3 @ 0x1294364c");
L_1294364d:;
  /* 1294364d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294364f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943651 jne 0x12943623 */
  if (!C.zf) goto L_12943623;
L_12943653:;
  /* 12943653 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943657 jne 0x1294365e */
  if (!C.zf) goto L_1294365e;
  /* 12943659 jmp 0x129439f5 */
  goto L_129439f5;
L_1294365e:;
  /* 1294365e push 0 */
  push32((uint32_t)(0x0u));
  /* 12943660 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943662 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943664 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943667 push edx */
  push32((uint32_t)(EDX));
  /* 12943668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294366a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294366d push eax */
  push32((uint32_t)(EAX));
  /* 1294366e push 3 */
  push32((uint32_t)(0x3u));
  /* 12943670 call dword ptr [0x1296cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296cc90))), 0x12943676u);
  /* 12943676 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294367b jne 0x129436a8 */
  if (!C.zf) goto L_129436a8;
L_1294367d:;
  /* 1294367d push 0x1296974c */
  push32((uint32_t)(0x1296974cu));
  /* 12943682 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12943687 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294368b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294368d push 0 */
  push32((uint32_t)(0x0u));
  /* 1294368f call 0x12941c10 */
  push32(0x12943694u); f_12941c10();
  /* 12943694 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943697 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294369a jne 0x1294369d */
  if (!C.zf) goto L_1294369d;
  /* 1294369c int3  */
  x86_unimpl("int3 @ 0x1294369c");
L_1294369d:;
  /* 1294369d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294369f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129436a1 jne 0x1294367d */
  if (!C.zf) goto L_1294367d;
  /* 129436a3 jmp 0x129439f5 */
  goto L_129439f5;
L_129436a8:;
  /* 129436a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129436ab push edx */
  push32((uint32_t)(EDX));
  /* 129436ac call 0x12944150 */
  push32(0x129436b1u); f_12944150();
  /* 129436b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129436b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129436b6 jne 0x129436d9 */
  if (!C.zf) goto L_129436d9;
  /* 129436b8 push 0x1296958c */
  push32((uint32_t)(0x1296958cu));
  /* 129436bd push 0 */
  push32((uint32_t)(0x0u));
  /* 129436bf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 129436c4 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 129436c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 129436cb call 0x12941c10 */
  push32(0x129436d0u); f_12941c10();
  /* 129436d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129436d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129436d6 jne 0x129436d9 */
  if (!C.zf) goto L_129436d9;
  /* 129436d8 int3  */
  x86_unimpl("int3 @ 0x129436d8");
L_129436d9:;
  /* 129436d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129436db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129436dd jne 0x129436a8 */
  if (!C.zf) goto L_129436a8;
  /* 129436df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129436e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129436e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129436e8:;
  /* 129436e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129436eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129436ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129436f3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129436f6 je 0x1294373b */
  if (C.zf) goto L_1294373b;
  /* 129436f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129436fb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129436ff je 0x1294373b */
  if (C.zf) goto L_1294373b;
  /* 12943701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943704 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943707 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294370c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294370f je 0x1294373b */
  if (C.zf) goto L_1294373b;
  /* 12943711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943714 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943718 je 0x1294373b */
  if (C.zf) goto L_1294373b;
  /* 1294371a push 0x12969724 */
  push32((uint32_t)(0x12969724u));
  /* 1294371f push 0 */
  push32((uint32_t)(0x0u));
  /* 12943721 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12943726 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 1294372b push 2 */
  push32((uint32_t)(0x2u));
  /* 1294372d call 0x12941c10 */
  push32(0x12943732u); f_12941c10();
  /* 12943732 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943735 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943738 jne 0x1294373b */
  if (!C.zf) goto L_1294373b;
  /* 1294373a int3  */
  x86_unimpl("int3 @ 0x1294373a");
L_1294373b:;
  /* 1294373b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294373d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294373f jne 0x129436e8 */
  if (!C.zf) goto L_129436e8;
  /* 12943741 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 12943746 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12943749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294374b jne 0x12943816 */
  if (!C.zf) goto L_12943816;
  /* 12943751 push 4 */
  push32((uint32_t)(0x4u));
  /* 12943753 mov cl, byte ptr [0x1296ca90] */
  CL = (r8((uint32_t)(0x1296ca90)));
  /* 12943759 push ecx */
  push32((uint32_t)(ECX));
  /* 1294375a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294375d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943760 push edx */
  push32((uint32_t)(EDX));
  /* 12943761 call 0x12943c60 */
  push32(0x12943766u); f_12943c60();
  /* 12943766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294376b jne 0x129437b0 */
  if (!C.zf) goto L_129437b0;
L_1294376d:;
  /* 1294376d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943770 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943773 push eax */
  push32((uint32_t)(EAX));
  /* 12943774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943777 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1294377a push edx */
  push32((uint32_t)(EDX));
  /* 1294377b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294377e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12943781 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12943787 mov edx, dword ptr [ecx*4 + 0x1296ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca94)));
  /* 1294378e push edx */
  push32((uint32_t)(EDX));
  /* 1294378f push 0x129696f8 */
  push32((uint32_t)(0x129696f8u));
  /* 12943794 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943796 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294379a push 1 */
  push32((uint32_t)(0x1u));
  /* 1294379c call 0x12941c10 */
  push32(0x129437a1u); f_12941c10();
  /* 129437a1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129437a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129437a7 jne 0x129437aa */
  if (!C.zf) goto L_129437aa;
  /* 129437a9 int3  */
  x86_unimpl("int3 @ 0x129437a9");
L_129437aa:;
  /* 129437aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129437ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129437ae jne 0x1294376d */
  if (!C.zf) goto L_1294376d;
L_129437b0:;
  /* 129437b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 129437b2 mov cl, byte ptr [0x1296ca90] */
  CL = (r8((uint32_t)(0x1296ca90)));
  /* 129437b8 push ecx */
  push32((uint32_t)(ECX));
  /* 129437b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129437bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129437bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129437c2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 129437c6 push edx */
  push32((uint32_t)(EDX));
  /* 129437c7 call 0x12943c60 */
  push32(0x129437ccu); f_12943c60();
  /* 129437cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129437cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129437d1 jne 0x12943816 */
  if (!C.zf) goto L_12943816;
L_129437d3:;
  /* 129437d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129437d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129437d9 push eax */
  push32((uint32_t)(EAX));
  /* 129437da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129437dd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129437e0 push edx */
  push32((uint32_t)(EDX));
  /* 129437e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129437e4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129437e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129437ed mov edx, dword ptr [ecx*4 + 0x1296ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca94)));
  /* 129437f4 push edx */
  push32((uint32_t)(EDX));
  /* 129437f5 push 0x129696cc */
  push32((uint32_t)(0x129696ccu));
  /* 129437fa push 0 */
  push32((uint32_t)(0x0u));
  /* 129437fc push 0 */
  push32((uint32_t)(0x0u));
  /* 129437fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12943800 push 1 */
  push32((uint32_t)(0x1u));
  /* 12943802 call 0x12941c10 */
  push32(0x12943807u); f_12941c10();
  /* 12943807 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294380a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294380d jne 0x12943810 */
  if (!C.zf) goto L_12943810;
  /* 1294380f int3  */
  x86_unimpl("int3 @ 0x1294380f");
L_12943810:;
  /* 12943810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943814 jne 0x129437d3 */
  if (!C.zf) goto L_129437d3;
L_12943816:;
  /* 12943816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943819 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294381d jne 0x1294388b */
  if (!C.zf) goto L_1294388b;
L_1294381f:;
  /* 1294381f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943822 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943829 jne 0x12943834 */
  if (!C.zf) goto L_12943834;
  /* 1294382b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294382e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943832 je 0x12943855 */
  if (C.zf) goto L_12943855;
L_12943834:;
  /* 12943834 push 0x1296968c */
  push32((uint32_t)(0x1296968cu));
  /* 12943839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294383b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12943840 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943845 push 2 */
  push32((uint32_t)(0x2u));
  /* 12943847 call 0x12941c10 */
  push32(0x1294384cu); f_12941c10();
  /* 1294384c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294384f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943852 jne 0x12943855 */
  if (!C.zf) goto L_12943855;
  /* 12943854 int3  */
  x86_unimpl("int3 @ 0x12943854");
L_12943855:;
  /* 12943855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943857 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943859 jne 0x1294381f */
  if (!C.zf) goto L_1294381f;
  /* 1294385b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294385e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12943861 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943864 push eax */
  push32((uint32_t)(EAX));
  /* 12943865 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943867 mov cl, byte ptr [0x1296ca91] */
  CL = (r8((uint32_t)(0x1296ca91)));
  /* 1294386d push ecx */
  push32((uint32_t)(ECX));
  /* 1294386e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943871 push edx */
  push32((uint32_t)(EDX));
  /* 12943872 call 0x129468c0 */
  push32(0x12943877u); f_129468c0();
  /* 12943877 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294387a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294387d push eax */
  push32((uint32_t)(EAX));
  /* 1294387e call 0x12946cc0 */
  push32(0x12943883u); f_12946cc0();
  /* 12943883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943886 jmp 0x129439f5 */
  goto L_129439f5;
L_1294388b:;
  /* 1294388b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294388e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943892 jne 0x129438a1 */
  if (!C.zf) goto L_129438a1;
  /* 12943894 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943898 jne 0x129438a1 */
  if (!C.zf) goto L_129438a1;
  /* 1294389a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_129438a1:;
  /* 129438a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129438a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129438a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129438aa je 0x129438cd */
  if (C.zf) goto L_129438cd;
  /* 129438ac push 0x1296966c */
  push32((uint32_t)(0x1296966cu));
  /* 129438b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129438b3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 129438b8 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 129438bd push 2 */
  push32((uint32_t)(0x2u));
  /* 129438bf call 0x12941c10 */
  push32(0x129438c4u); f_12941c10();
  /* 129438c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129438c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129438ca jne 0x129438cd */
  if (!C.zf) goto L_129438cd;
  /* 129438cc int3  */
  x86_unimpl("int3 @ 0x129438cc");
L_129438cd:;
  /* 129438cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129438cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129438d1 jne 0x129438a1 */
  if (!C.zf) goto L_129438a1;
  /* 129438d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129438d6 mov eax, dword ptr [0x1296e4d8] */
  EAX = (r32((uint32_t)(0x1296e4d8)));
  /* 129438db sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129438de mov dword ptr [0x1296e4d8], eax */
  w32((uint32_t)(0x1296e4d8), (EAX));
  /* 129438e3 mov ecx, dword ptr [0x1296ca84] */
  ECX = (r32((uint32_t)(0x1296ca84)));
  /* 129438e9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129438ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129438ee jne 0x129439cc */
  if (!C.zf) goto L_129439cc;
  /* 129438f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129438f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129438fa je 0x1294390c */
  if (C.zf) goto L_1294390c;
  /* 129438fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129438ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12943901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943904 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12943907 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1294390a jmp 0x1294394a */
  goto L_1294394a;
L_1294390c:;
  /* 1294390c mov ecx, dword ptr [0x1296e4cc] */
  ECX = (r32((uint32_t)(0x1296e4cc)));
  /* 12943912 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943915 je 0x12943938 */
  if (C.zf) goto L_12943938;
  /* 12943917 push 0x12969654 */
  push32((uint32_t)(0x12969654u));
  /* 1294391c push 0 */
  push32((uint32_t)(0x0u));
  /* 1294391e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12943923 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943928 push 2 */
  push32((uint32_t)(0x2u));
  /* 1294392a call 0x12941c10 */
  push32(0x1294392fu); f_12941c10();
  /* 1294392f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943932 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943935 jne 0x12943938 */
  if (!C.zf) goto L_12943938;
  /* 12943937 int3  */
  x86_unimpl("int3 @ 0x12943937");
L_12943938:;
  /* 12943938 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294393a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294393c jne 0x1294390c */
  if (!C.zf) goto L_1294390c;
  /* 1294393e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943941 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12943944 mov dword ptr [0x1296e4cc], ecx */
  w32((uint32_t)(0x1296e4cc), (ECX));
L_1294394a:;
  /* 1294394a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294394d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943951 je 0x12943962 */
  if (C.zf) goto L_12943962;
  /* 12943953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943956 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12943959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294395c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1294395e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12943960 jmp 0x1294399f */
  goto L_1294399f;
L_12943962:;
  /* 12943962 mov ecx, dword ptr [0x1296e4d4] */
  ECX = (r32((uint32_t)(0x1296e4d4)));
  /* 12943968 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294396b je 0x1294398e */
  if (C.zf) goto L_1294398e;
  /* 1294396d push 0x1296963c */
  push32((uint32_t)(0x1296963cu));
  /* 12943972 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943974 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12943979 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 1294397e push 2 */
  push32((uint32_t)(0x2u));
  /* 12943980 call 0x12941c10 */
  push32(0x12943985u); f_12941c10();
  /* 12943985 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943988 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294398b jne 0x1294398e */
  if (!C.zf) goto L_1294398e;
  /* 1294398d int3  */
  x86_unimpl("int3 @ 0x1294398d");
L_1294398e:;
  /* 1294398e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943990 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12943992 jne 0x12943962 */
  if (!C.zf) goto L_12943962;
  /* 12943994 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943997 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12943999 mov dword ptr [0x1296e4d4], ecx */
  w32((uint32_t)(0x1296e4d4), (ECX));
L_1294399f:;
  /* 1294399f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129439a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129439a5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129439a8 push eax */
  push32((uint32_t)(EAX));
  /* 129439a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129439ab mov cl, byte ptr [0x1296ca91] */
  CL = (r8((uint32_t)(0x1296ca91)));
  /* 129439b1 push ecx */
  push32((uint32_t)(ECX));
  /* 129439b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129439b5 push edx */
  push32((uint32_t)(EDX));
  /* 129439b6 call 0x129468c0 */
  push32(0x129439bbu); f_129468c0();
  /* 129439bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129439be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129439c1 push eax */
  push32((uint32_t)(EAX));
  /* 129439c2 call 0x12946cc0 */
  push32(0x129439c7u); f_12946cc0();
  /* 129439c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129439ca jmp 0x129439f5 */
  goto L_129439f5;
L_129439cc:;
  /* 129439cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129439cf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 129439d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129439d9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129439dc push eax */
  push32((uint32_t)(EAX));
  /* 129439dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129439df mov cl, byte ptr [0x1296ca91] */
  CL = (r8((uint32_t)(0x1296ca91)));
  /* 129439e5 push ecx */
  push32((uint32_t)(ECX));
  /* 129439e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129439e9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129439ec push edx */
  push32((uint32_t)(EDX));
  /* 129439ed call 0x129468c0 */
  push32(0x129439f2u); f_129468c0();
  /* 129439f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129439f5:;
  /* 129439f5 pop edi */
  EDI = (pop32());
  /* 129439f6 pop esi */
  ESI = (pop32());
  /* 129439f7 pop ebx */
  EBX = (pop32());
  /* 129439f8 mov esp, ebp */
  ESP = (EBP);
  /* 129439fa pop ebp */
  EBP = (pop32());
  /* 129439fb ret  */
  ESPCHK(0x12943610u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a00 @ 0x12943a00 (19 bytes, 9 insns) */
void f_12943a00(void) {
  FTRACE(0x12943a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12943a01 mov ebp, esp */
  EBP = (ESP);
  /* 12943a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12943a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943a08 push eax */
  push32((uint32_t)(EAX));
  /* 12943a09 call 0x12943a20 */
  push32(0x12943a0eu); f_12943a20();
  /* 12943a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943a11 pop ebp */
  EBP = (pop32());
  /* 12943a12 ret  */
  ESPCHK(0x12943a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x12943a20 (342 bytes, 119 insns) */
void f_12943a20(void) {
  FTRACE(0x12943a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12943a21 mov ebp, esp */
  EBP = (ESP);
  /* 12943a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943a26 push ebx */
  push32((uint32_t)(EBX));
  /* 12943a27 push esi */
  push32((uint32_t)(ESI));
  /* 12943a28 push edi */
  push32((uint32_t)(EDI));
  /* 12943a29 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 12943a2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12943a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943a33 je 0x12943a65 */
  if (C.zf) goto L_12943a65;
L_12943a35:;
  /* 12943a35 call 0x12943cf0 */
  push32(0x12943a3au); f_12943cf0();
  /* 12943a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943a3c jne 0x12943a5f */
  if (!C.zf) goto L_12943a5f;
  /* 12943a3e push 0x12969488 */
  push32((uint32_t)(0x12969488u));
  /* 12943a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943a45 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12943a4a push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12943a51 call 0x12941c10 */
  push32(0x12943a56u); f_12941c10();
  /* 12943a56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943a59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943a5c jne 0x12943a5f */
  if (!C.zf) goto L_12943a5f;
  /* 12943a5e int3  */
  x86_unimpl("int3 @ 0x12943a5e");
L_12943a5f:;
  /* 12943a5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943a61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943a63 jne 0x12943a35 */
  if (!C.zf) goto L_12943a35;
L_12943a65:;
  /* 12943a65 push 9 */
  push32((uint32_t)(0x9u));
  /* 12943a67 call 0x12946550 */
  push32(0x12943a6cu); f_12946550();
  /* 12943a6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12943a6f:;
  /* 12943a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943a72 push edx */
  push32((uint32_t)(EDX));
  /* 12943a73 call 0x12944150 */
  push32(0x12943a78u); f_12944150();
  /* 12943a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943a7d jne 0x12943aa0 */
  if (!C.zf) goto L_12943aa0;
  /* 12943a7f push 0x1296958c */
  push32((uint32_t)(0x1296958cu));
  /* 12943a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943a86 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12943a8b push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943a90 push 2 */
  push32((uint32_t)(0x2u));
  /* 12943a92 call 0x12941c10 */
  push32(0x12943a97u); f_12941c10();
  /* 12943a97 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943a9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943a9d jne 0x12943aa0 */
  if (!C.zf) goto L_12943aa0;
  /* 12943a9f int3  */
  x86_unimpl("int3 @ 0x12943a9f");
L_12943aa0:;
  /* 12943aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943aa4 jne 0x12943a6f */
  if (!C.zf) goto L_12943a6f;
  /* 12943aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943aa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943aac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12943aaf:;
  /* 12943aaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943ab2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943ab5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12943aba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943abd je 0x12943b02 */
  if (C.zf) goto L_12943b02;
  /* 12943abf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943ac2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943ac6 je 0x12943b02 */
  if (C.zf) goto L_12943b02;
  /* 12943ac8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943acb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943ace and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12943ad3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943ad6 je 0x12943b02 */
  if (C.zf) goto L_12943b02;
  /* 12943ad8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943adb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943adf je 0x12943b02 */
  if (C.zf) goto L_12943b02;
  /* 12943ae1 push 0x12969724 */
  push32((uint32_t)(0x12969724u));
  /* 12943ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943ae8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12943aed push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943af2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12943af4 call 0x12941c10 */
  push32(0x12943af9u); f_12941c10();
  /* 12943af9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943afc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943aff jne 0x12943b02 */
  if (!C.zf) goto L_12943b02;
  /* 12943b01 int3  */
  x86_unimpl("int3 @ 0x12943b01");
L_12943b02:;
  /* 12943b02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943b04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12943b06 jne 0x12943aaf */
  if (!C.zf) goto L_12943aaf;
  /* 12943b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943b0b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943b0f jne 0x12943b1e */
  if (!C.zf) goto L_12943b1e;
  /* 12943b11 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943b15 jne 0x12943b1e */
  if (!C.zf) goto L_12943b1e;
  /* 12943b17 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12943b1e:;
  /* 12943b1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943b21 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943b25 je 0x12943b59 */
  if (C.zf) goto L_12943b59;
L_12943b27:;
  /* 12943b27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943b2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943b2d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943b30 je 0x12943b53 */
  if (C.zf) goto L_12943b53;
  /* 12943b32 push 0x1296966c */
  push32((uint32_t)(0x1296966cu));
  /* 12943b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943b39 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12943b3e push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943b43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12943b45 call 0x12941c10 */
  push32(0x12943b4au); f_12941c10();
  /* 12943b4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943b4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943b50 jne 0x12943b53 */
  if (!C.zf) goto L_12943b53;
  /* 12943b52 int3  */
  x86_unimpl("int3 @ 0x12943b52");
L_12943b53:;
  /* 12943b53 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943b55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943b57 jne 0x12943b27 */
  if (!C.zf) goto L_12943b27;
L_12943b59:;
  /* 12943b59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943b5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12943b5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12943b62 push 9 */
  push32((uint32_t)(0x9u));
  /* 12943b64 call 0x129465f0 */
  push32(0x12943b69u); f_129465f0();
  /* 12943b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943b6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943b6f pop edi */
  EDI = (pop32());
  /* 12943b70 pop esi */
  ESI = (pop32());
  /* 12943b71 pop ebx */
  EBX = (pop32());
  /* 12943b72 mov esp, ebp */
  ESP = (EBP);
  /* 12943b74 pop ebp */
  EBP = (pop32());
  /* 12943b75 ret  */
  ESPCHK(0x12943a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b80 @ 0x12943b80 (28 bytes, 11 insns) */
void f_12943b80(void) {
  FTRACE(0x12943b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12943b81 mov ebp, esp */
  EBP = (ESP);
  /* 12943b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12943b84 mov eax, dword ptr [0x1296ca8c] */
  EAX = (r32((uint32_t)(0x1296ca8c)));
  /* 12943b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12943b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943b8f mov dword ptr [0x1296ca8c], ecx */
  w32((uint32_t)(0x1296ca8c), (ECX));
  /* 12943b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943b98 mov esp, ebp */
  ESP = (EBP);
  /* 12943b9a pop ebp */
  EBP = (pop32());
  /* 12943b9b ret  */
  ESPCHK(0x12943b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x12943ba0 (157 bytes, 59 insns) */
void f_12943ba0(void) {
  FTRACE(0x12943ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12943ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12943ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12943ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 12943ba5 push esi */
  push32((uint32_t)(ESI));
  /* 12943ba6 push edi */
  push32((uint32_t)(EDI));
  /* 12943ba7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12943ba9 call 0x12946550 */
  push32(0x12943baeu); f_12946550();
  /* 12943bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943bb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943bb4 push eax */
  push32((uint32_t)(EAX));
  /* 12943bb5 call 0x12944150 */
  push32(0x12943bbau); f_12944150();
  /* 12943bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943bbf je 0x12943c2c */
  if (C.zf) goto L_12943c2c;
  /* 12943bc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943bc4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943bc7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12943bca:;
  /* 12943bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943bcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943bd0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12943bd5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943bd8 je 0x12943c1d */
  if (C.zf) goto L_12943c1d;
  /* 12943bda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943bdd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943be1 je 0x12943c1d */
  if (C.zf) goto L_12943c1d;
  /* 12943be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943be6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12943be9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12943bee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943bf1 je 0x12943c1d */
  if (C.zf) goto L_12943c1d;
  /* 12943bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943bf6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943bfa je 0x12943c1d */
  if (C.zf) goto L_12943c1d;
  /* 12943bfc push 0x12969724 */
  push32((uint32_t)(0x12969724u));
  /* 12943c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943c03 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12943c08 push 0x1296947c */
  push32((uint32_t)(0x1296947cu));
  /* 12943c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12943c0f call 0x12941c10 */
  push32(0x12943c14u); f_12941c10();
  /* 12943c14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943c17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943c1a jne 0x12943c1d */
  if (!C.zf) goto L_12943c1d;
  /* 12943c1c int3  */
  x86_unimpl("int3 @ 0x12943c1c");
L_12943c1d:;
  /* 12943c1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943c1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12943c21 jne 0x12943bca */
  if (!C.zf) goto L_12943bca;
  /* 12943c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943c26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943c29 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12943c2c:;
  /* 12943c2c push 9 */
  push32((uint32_t)(0x9u));
  /* 12943c2e call 0x129465f0 */
  push32(0x12943c33u); f_129465f0();
  /* 12943c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943c36 pop edi */
  EDI = (pop32());
  /* 12943c37 pop esi */
  ESI = (pop32());
  /* 12943c38 pop ebx */
  EBX = (pop32());
  /* 12943c39 mov esp, ebp */
  ESP = (EBP);
  /* 12943c3b pop ebp */
  EBP = (pop32());
  /* 12943c3c ret  */
  ESPCHK(0x12943ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c40 @ 0x12943c40 (28 bytes, 11 insns) */
void f_12943c40(void) {
  FTRACE(0x12943c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12943c41 mov ebp, esp */
  EBP = (ESP);
  /* 12943c43 push ecx */
  push32((uint32_t)(ECX));
  /* 12943c44 mov eax, dword ptr [0x1296cc90] */
  EAX = (r32((uint32_t)(0x1296cc90)));
  /* 12943c49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12943c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943c4f mov dword ptr [0x1296cc90], ecx */
  w32((uint32_t)(0x1296cc90), (ECX));
  /* 12943c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943c58 mov esp, ebp */
  ESP = (EBP);
  /* 12943c5a pop ebp */
  EBP = (pop32());
  /* 12943c5b ret  */
  ESPCHK(0x12943c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c60 @ 0x12943c60 (136 bytes, 55 insns) */
void f_12943c60(void) {
  FTRACE(0x12943c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12943c61 mov ebp, esp */
  EBP = (ESP);
  /* 12943c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12943c64 push ebx */
  push32((uint32_t)(EBX));
  /* 12943c65 push esi */
  push32((uint32_t)(ESI));
  /* 12943c66 push edi */
  push32((uint32_t)(EDI));
  /* 12943c67 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12943c6e:;
  /* 12943c6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12943c71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12943c74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943c77 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12943c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943c7c je 0x12943cde */
  if (C.zf) goto L_12943cde;
  /* 12943c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943c81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943c83 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12943c85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943c88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12943c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943c91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943c94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12943c97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943c99 je 0x12943cdc */
  if (C.zf) goto L_12943cdc;
L_12943c9b:;
  /* 12943c9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12943c9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12943ca3 push eax */
  push32((uint32_t)(EAX));
  /* 12943ca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943ca7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943ca9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12943cac push edx */
  push32((uint32_t)(EDX));
  /* 12943cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12943cb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943cb3 push eax */
  push32((uint32_t)(EAX));
  /* 12943cb4 push 0x12969768 */
  push32((uint32_t)(0x12969768u));
  /* 12943cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12943cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12943cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12943cc1 call 0x12941c10 */
  push32(0x12943cc6u); f_12941c10();
  /* 12943cc6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943ccc jne 0x12943ccf */
  if (!C.zf) goto L_12943ccf;
  /* 12943cce int3  */
  x86_unimpl("int3 @ 0x12943cce");
L_12943ccf:;
  /* 12943ccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943cd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943cd3 jne 0x12943c9b */
  if (!C.zf) goto L_12943c9b;
  /* 12943cd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12943cdc:;
  /* 12943cdc jmp 0x12943c6e */
  goto L_12943c6e;
L_12943cde:;
  /* 12943cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12943ce1 pop edi */
  EDI = (pop32());
  /* 12943ce2 pop esi */
  ESI = (pop32());
  /* 12943ce3 pop ebx */
  EBX = (pop32());
  /* 12943ce4 mov esp, ebp */
  ESP = (EBP);
  /* 12943ce6 pop ebp */
  EBP = (pop32());
  /* 12943ce7 ret  */
  ESPCHK(0x12943c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x12943cf0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12943cf0(void) {
  FTRACE(0x12943cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12943cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12943cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12943cf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12943cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12943cf7 push esi */
  push32((uint32_t)(ESI));
  /* 12943cf8 push edi */
  push32((uint32_t)(EDI));
  /* 12943cf9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12943d00 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 12943d05 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12943d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943d0a jne 0x12943d16 */
  if (!C.zf) goto L_12943d16;
  /* 12943d0c mov eax, 1 */
  EAX = (0x1u);
  /* 12943d11 jmp 0x12944048 */
  goto L_12944048;
L_12943d16:;
  /* 12943d16 push 9 */
  push32((uint32_t)(0x9u));
  /* 12943d18 call 0x12946550 */
  push32(0x12943d1du); f_12946550();
  /* 12943d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943d20 call 0x12946d30 */
  push32(0x12943d25u); f_12946d30();
  /* 12943d25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12943d28 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943d2c je 0x12943e39 */
  if (C.zf) goto L_12943e39;
  /* 12943d32 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943d36 je 0x12943e39 */
  if (C.zf) goto L_12943e39;
  /* 12943d3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12943d3f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12943d42 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12943d45 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943d48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12943d4b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943d4f ja 0x12943e02 */
  if ((!C.cf&&!C.zf)) goto L_12943e02;
  /* 12943d55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12943d58 jmp dword ptr [eax*4 + 0x1294404f] */
  switch (EAX) {
    case 0: goto L_12943dda;
    case 1: goto L_12943db2;
    case 2: goto L_12943d8a;
    case 3: goto L_12943d5f;
    default: x86_unimpl("switch@0x12943d58 out of table"); return;
  }
L_12943d5f:;
  /* 12943d5f push 0x129698bc */
  push32((uint32_t)(0x129698bcu));
  /* 12943d64 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12943d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d71 call 0x12941c10 */
  push32(0x12943d76u); f_12941c10();
  /* 12943d76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943d79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943d7c jne 0x12943d7f */
  if (!C.zf) goto L_12943d7f;
  /* 12943d7e int3  */
  x86_unimpl("int3 @ 0x12943d7e");
L_12943d7f:;
  /* 12943d7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943d81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943d83 jne 0x12943d5f */
  if (!C.zf) goto L_12943d5f;
  /* 12943d85 jmp 0x12943e28 */
  goto L_12943e28;
L_12943d8a:;
  /* 12943d8a push 0x12969898 */
  push32((uint32_t)(0x12969898u));
  /* 12943d8f push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12943d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12943d9c call 0x12941c10 */
  push32(0x12943da1u); f_12941c10();
  /* 12943da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943da7 jne 0x12943daa */
  if (!C.zf) goto L_12943daa;
  /* 12943da9 int3  */
  x86_unimpl("int3 @ 0x12943da9");
L_12943daa:;
  /* 12943daa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12943dae jne 0x12943d8a */
  if (!C.zf) goto L_12943d8a;
  /* 12943db0 jmp 0x12943e28 */
  goto L_12943e28;
L_12943db2:;
  /* 12943db2 push 0x12969874 */
  push32((uint32_t)(0x12969874u));
  /* 12943db7 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12943dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12943dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12943dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943dc4 call 0x12941c10 */
  push32(0x12943dc9u); f_12941c10();
  /* 12943dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943dcf jne 0x12943dd2 */
  if (!C.zf) goto L_12943dd2;
  /* 12943dd1 int3  */
  x86_unimpl("int3 @ 0x12943dd1");
L_12943dd2:;
  /* 12943dd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943dd6 jne 0x12943db2 */
  if (!C.zf) goto L_12943db2;
  /* 12943dd8 jmp 0x12943e28 */
  goto L_12943e28;
L_12943dda:;
  /* 12943dda push 0x12969850 */
  push32((uint32_t)(0x12969850u));
  /* 12943ddf push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12943de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943dea push 0 */
  push32((uint32_t)(0x0u));
  /* 12943dec call 0x12941c10 */
  push32(0x12943df1u); f_12941c10();
  /* 12943df1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943df4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943df7 jne 0x12943dfa */
  if (!C.zf) goto L_12943dfa;
  /* 12943df9 int3  */
  x86_unimpl("int3 @ 0x12943df9");
L_12943dfa:;
  /* 12943dfa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943dfe jne 0x12943dda */
  if (!C.zf) goto L_12943dda;
  /* 12943e00 jmp 0x12943e28 */
  goto L_12943e28;
L_12943e02:;
  /* 12943e02 push 0x12969824 */
  push32((uint32_t)(0x12969824u));
  /* 12943e07 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12943e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12943e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12943e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943e14 call 0x12941c10 */
  push32(0x12943e19u); f_12941c10();
  /* 12943e19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943e1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943e1f jne 0x12943e22 */
  if (!C.zf) goto L_12943e22;
  /* 12943e21 int3  */
  x86_unimpl("int3 @ 0x12943e21");
L_12943e22:;
  /* 12943e22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943e24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12943e26 jne 0x12943e02 */
  if (!C.zf) goto L_12943e02;
L_12943e28:;
  /* 12943e28 push 9 */
  push32((uint32_t)(0x9u));
  /* 12943e2a call 0x129465f0 */
  push32(0x12943e2fu); f_129465f0();
  /* 12943e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943e34 jmp 0x12944048 */
  goto L_12944048;
L_12943e39:;
  /* 12943e39 mov eax, dword ptr [0x1296e4d4] */
  EAX = (r32((uint32_t)(0x1296e4d4)));
  /* 12943e3e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12943e41 jmp 0x12943e4b */
  goto L_12943e4b;
L_12943e43:;
  /* 12943e43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943e46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12943e48 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12943e4b:;
  /* 12943e4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943e4f je 0x1294403b */
  if (C.zf) goto L_1294403b;
  /* 12943e55 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12943e5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943e5f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12943e62 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12943e68 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943e6b je 0x12943e90 */
  if (C.zf) goto L_12943e90;
  /* 12943e6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943e70 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943e74 je 0x12943e90 */
  if (C.zf) goto L_12943e90;
  /* 12943e76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943e79 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12943e7c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12943e82 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943e85 je 0x12943e90 */
  if (C.zf) goto L_12943e90;
  /* 12943e87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943e8a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943e8e jne 0x12943ea8 */
  if (!C.zf) goto L_12943ea8;
L_12943e90:;
  /* 12943e90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943e93 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12943e96 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12943e9c mov edx, dword ptr [ecx*4 + 0x1296ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca94)));
  /* 12943ea3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12943ea6 jmp 0x12943eaf */
  goto L_12943eaf;
L_12943ea8:;
  /* 12943ea8 mov dword ptr [ebp - 0x14], 0x1296981c */
  w32((uint32_t)(EBP + -0x14), (0x1296981cu));
L_12943eaf:;
  /* 12943eaf push 4 */
  push32((uint32_t)(0x4u));
  /* 12943eb1 mov al, byte ptr [0x1296ca90] */
  AL = (r8((uint32_t)(0x1296ca90)));
  /* 12943eb6 push eax */
  push32((uint32_t)(EAX));
  /* 12943eb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943eba add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943ebd push ecx */
  push32((uint32_t)(ECX));
  /* 12943ebe call 0x12943c60 */
  push32(0x12943ec3u); f_12943c60();
  /* 12943ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943ec8 jne 0x12943f04 */
  if (!C.zf) goto L_12943f04;
L_12943eca:;
  /* 12943eca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943ecd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943ed0 push edx */
  push32((uint32_t)(EDX));
  /* 12943ed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943ed4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12943ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 12943ed8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12943edb push edx */
  push32((uint32_t)(EDX));
  /* 12943edc push 0x129696f8 */
  push32((uint32_t)(0x129696f8u));
  /* 12943ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943ee9 call 0x12941c10 */
  push32(0x12943eeeu); f_12941c10();
  /* 12943eee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943ef4 jne 0x12943ef7 */
  if (!C.zf) goto L_12943ef7;
  /* 12943ef6 int3  */
  x86_unimpl("int3 @ 0x12943ef6");
L_12943ef7:;
  /* 12943ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943efb jne 0x12943eca */
  if (!C.zf) goto L_12943eca;
  /* 12943efd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12943f04:;
  /* 12943f04 push 4 */
  push32((uint32_t)(0x4u));
  /* 12943f06 mov cl, byte ptr [0x1296ca90] */
  CL = (r8((uint32_t)(0x1296ca90)));
  /* 12943f0c push ecx */
  push32((uint32_t)(ECX));
  /* 12943f0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f10 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12943f13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f16 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12943f1a push edx */
  push32((uint32_t)(EDX));
  /* 12943f1b call 0x12943c60 */
  push32(0x12943f20u); f_12943c60();
  /* 12943f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943f23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943f25 jne 0x12943f61 */
  if (!C.zf) goto L_12943f61;
L_12943f27:;
  /* 12943f27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f2a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943f2d push eax */
  push32((uint32_t)(EAX));
  /* 12943f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f31 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12943f34 push edx */
  push32((uint32_t)(EDX));
  /* 12943f35 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12943f38 push eax */
  push32((uint32_t)(EAX));
  /* 12943f39 push 0x129696cc */
  push32((uint32_t)(0x129696ccu));
  /* 12943f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f46 call 0x12941c10 */
  push32(0x12943f4bu); f_12941c10();
  /* 12943f4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943f4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943f51 jne 0x12943f54 */
  if (!C.zf) goto L_12943f54;
  /* 12943f53 int3  */
  x86_unimpl("int3 @ 0x12943f53");
L_12943f54:;
  /* 12943f54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12943f56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12943f58 jne 0x12943f27 */
  if (!C.zf) goto L_12943f27;
  /* 12943f5a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12943f61:;
  /* 12943f61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f64 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943f68 jne 0x12943fba */
  if (!C.zf) goto L_12943fba;
  /* 12943f6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f6d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12943f70 push ecx */
  push32((uint32_t)(ECX));
  /* 12943f71 mov dl, byte ptr [0x1296ca91] */
  DL = (r8((uint32_t)(0x1296ca91)));
  /* 12943f77 push edx */
  push32((uint32_t)(EDX));
  /* 12943f78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f7b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943f7e push eax */
  push32((uint32_t)(EAX));
  /* 12943f7f call 0x12943c60 */
  push32(0x12943f84u); f_12943c60();
  /* 12943f84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943f89 jne 0x12943fba */
  if (!C.zf) goto L_12943fba;
L_12943f8b:;
  /* 12943f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943f8e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12943f91 push ecx */
  push32((uint32_t)(ECX));
  /* 12943f92 push 0x129697f0 */
  push32((uint32_t)(0x129697f0u));
  /* 12943f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12943f9f call 0x12941c10 */
  push32(0x12943fa4u); f_12941c10();
  /* 12943fa4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943fa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943faa jne 0x12943fad */
  if (!C.zf) goto L_12943fad;
  /* 12943fac int3  */
  x86_unimpl("int3 @ 0x12943fac");
L_12943fad:;
  /* 12943fad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12943faf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12943fb1 jne 0x12943f8b */
  if (!C.zf) goto L_12943f8b;
  /* 12943fb3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12943fba:;
  /* 12943fba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943fbe jne 0x12944036 */
  if (!C.zf) goto L_12944036;
  /* 12943fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943fc3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943fc7 je 0x12943ffc */
  if (C.zf) goto L_12943ffc;
L_12943fc9:;
  /* 12943fc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943fcc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12943fcf push edx */
  push32((uint32_t)(EDX));
  /* 12943fd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943fd3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12943fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12943fd7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12943fda push edx */
  push32((uint32_t)(EDX));
  /* 12943fdb push 0x129697d0 */
  push32((uint32_t)(0x129697d0u));
  /* 12943fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12943fe8 call 0x12941c10 */
  push32(0x12943fedu); f_12941c10();
  /* 12943fed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12943ff0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12943ff3 jne 0x12943ff6 */
  if (!C.zf) goto L_12943ff6;
  /* 12943ff5 int3  */
  x86_unimpl("int3 @ 0x12943ff5");
L_12943ff6:;
  /* 12943ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12943ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12943ffa jne 0x12943fc9 */
  if (!C.zf) goto L_12943fc9;
L_12943ffc:;
  /* 12943ffc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12943fff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12944002 push edx */
  push32((uint32_t)(EDX));
  /* 12944003 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944006 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944009 push eax */
  push32((uint32_t)(EAX));
  /* 1294400a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294400d push ecx */
  push32((uint32_t)(ECX));
  /* 1294400e push 0x129697a4 */
  push32((uint32_t)(0x129697a4u));
  /* 12944013 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944015 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944017 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294401b call 0x12941c10 */
  push32(0x12944020u); f_12941c10();
  /* 12944020 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944023 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944026 jne 0x12944029 */
  if (!C.zf) goto L_12944029;
  /* 12944028 int3  */
  x86_unimpl("int3 @ 0x12944028");
L_12944029:;
  /* 12944029 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294402b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294402d jne 0x12943ffc */
  if (!C.zf) goto L_12943ffc;
  /* 1294402f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12944036:;
  /* 12944036 jmp 0x12943e43 */
  goto L_12943e43;
L_1294403b:;
  /* 1294403b push 9 */
  push32((uint32_t)(0x9u));
  /* 1294403d call 0x129465f0 */
  push32(0x12944042u); f_129465f0();
  /* 12944042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12944048:;
  /* 12944048 pop edi */
  EDI = (pop32());
  /* 12944049 pop esi */
  ESI = (pop32());
  /* 1294404a pop ebx */
  EBX = (pop32());
  /* 1294404b mov esp, ebp */
  ESP = (EBP);
  /* 1294404d pop ebp */
  EBP = (pop32());
  /* 1294404e ret  */
  ESPCHK(0x12943cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x12944060 (34 bytes, 13 insns) */
void f_12944060(void) {
  FTRACE(0x12944060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944060 push ebp */
  push32((uint32_t)(EBP));
  /* 12944061 mov ebp, esp */
  EBP = (ESP);
  /* 12944063 push ecx */
  push32((uint32_t)(ECX));
  /* 12944064 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 12944069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294406c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944070 je 0x1294407b */
  if (C.zf) goto L_1294407b;
  /* 12944072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944075 mov dword ptr [0x1296ca84], ecx */
  w32((uint32_t)(0x1296ca84), (ECX));
L_1294407b:;
  /* 1294407b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294407e mov esp, ebp */
  ESP = (EBP);
  /* 12944080 pop ebp */
  EBP = (pop32());
  /* 12944081 ret  */
  ESPCHK(0x12944060u, _esp0);
  ESP += 4; return;
}

/* FUN_10004090 @ 0x12944090 (103 bytes, 38 insns) */
void f_12944090(void) {
  FTRACE(0x12944090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944090 push ebp */
  push32((uint32_t)(EBP));
  /* 12944091 mov ebp, esp */
  EBP = (ESP);
  /* 12944093 push ecx */
  push32((uint32_t)(ECX));
  /* 12944094 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 12944099 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1294409c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294409e jne 0x129440a2 */
  if (!C.zf) goto L_129440a2;
  /* 129440a0 jmp 0x129440f3 */
  goto L_129440f3;
L_129440a2:;
  /* 129440a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 129440a4 call 0x12946550 */
  push32(0x129440a9u); f_12946550();
  /* 129440a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129440ac mov ecx, dword ptr [0x1296e4d4] */
  ECX = (r32((uint32_t)(0x1296e4d4)));
  /* 129440b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129440b5 jmp 0x129440bf */
  goto L_129440bf;
L_129440b7:;
  /* 129440b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129440ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129440bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129440bf:;
  /* 129440bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129440c3 je 0x129440e9 */
  if (C.zf) goto L_129440e9;
  /* 129440c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129440c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129440cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129440d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129440d4 jne 0x129440e7 */
  if (!C.zf) goto L_129440e7;
  /* 129440d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129440d9 push eax */
  push32((uint32_t)(EAX));
  /* 129440da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129440dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129440e0 push ecx */
  push32((uint32_t)(ECX));
  /* 129440e1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x129440e4u);
  /* 129440e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129440e7:;
  /* 129440e7 jmp 0x129440b7 */
  goto L_129440b7;
L_129440e9:;
  /* 129440e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 129440eb call 0x129465f0 */
  push32(0x129440f0u); f_129465f0();
  /* 129440f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129440f3:;
  /* 129440f3 mov esp, ebp */
  ESP = (EBP);
  /* 129440f5 pop ebp */
  EBP = (pop32());
  /* 129440f6 ret  */
  ESPCHK(0x12944090u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12944100 (75 bytes, 28 insns) */
void f_12944100(void) {
  FTRACE(0x12944100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944100 push ebp */
  push32((uint32_t)(EBP));
  /* 12944101 mov ebp, esp */
  EBP = (ESP);
  /* 12944103 push ecx */
  push32((uint32_t)(ECX));
  /* 12944104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944108 je 0x1294413d */
  if (C.zf) goto L_1294413d;
  /* 1294410a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294410d push eax */
  push32((uint32_t)(EAX));
  /* 1294410e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944111 push ecx */
  push32((uint32_t)(ECX));
  /* 12944112 call dword ptr [0x129702c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702c0))), 0x12944118u);
  /* 12944118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294411a jne 0x1294413d */
  if (!C.zf) goto L_1294413d;
  /* 1294411c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944120 je 0x12944134 */
  if (C.zf) goto L_12944134;
  /* 12944122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944125 push edx */
  push32((uint32_t)(EDX));
  /* 12944126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944129 push eax */
  push32((uint32_t)(EAX));
  /* 1294412a call dword ptr [0x129702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702bc))), 0x12944130u);
  /* 12944130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944132 jne 0x1294413d */
  if (!C.zf) goto L_1294413d;
L_12944134:;
  /* 12944134 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1294413b jmp 0x12944144 */
  goto L_12944144;
L_1294413d:;
  /* 1294413d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12944144:;
  /* 12944144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944147 mov esp, ebp */
  ESP = (EBP);
  /* 12944149 pop ebp */
  EBP = (pop32());
  /* 1294414a ret  */
  ESPCHK(0x12944100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004150 @ 0x12944150 (134 bytes, 50 insns) */
void f_12944150(void) {
  FTRACE(0x12944150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944150 push ebp */
  push32((uint32_t)(EBP));
  /* 12944151 mov ebp, esp */
  EBP = (ESP);
  /* 12944153 push ecx */
  push32((uint32_t)(ECX));
  /* 12944154 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944158 jne 0x1294415e */
  if (!C.zf) goto L_1294415e;
  /* 1294415a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294415c jmp 0x129441d2 */
  goto L_129441d2;
L_1294415e:;
  /* 1294415e push 1 */
  push32((uint32_t)(0x1u));
  /* 12944160 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12944162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944165 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944168 push eax */
  push32((uint32_t)(EAX));
  /* 12944169 call 0x12944100 */
  push32(0x1294416eu); f_12944100();
  /* 1294416e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944173 jne 0x12944179 */
  if (!C.zf) goto L_12944179;
  /* 12944175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12944177 jmp 0x129441d2 */
  goto L_129441d2;
L_12944179:;
  /* 12944179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294417c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294417f push ecx */
  push32((uint32_t)(ECX));
  /* 12944180 call 0x12946e50 */
  push32(0x12944185u); f_12946e50();
  /* 12944185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944188 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294418b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294418f je 0x129441a6 */
  if (C.zf) goto L_129441a6;
  /* 12944191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944194 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944197 push edx */
  push32((uint32_t)(EDX));
  /* 12944198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294419b push eax */
  push32((uint32_t)(EAX));
  /* 1294419c call 0x12946eb0 */
  push32(0x129441a1u); f_12946eb0();
  /* 129441a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129441a4 jmp 0x129441d2 */
  goto L_129441d2;
L_129441a6:;
  /* 129441a6 mov ecx, dword ptr [0x1296e488] */
  ECX = (r32((uint32_t)(0x1296e488)));
  /* 129441ac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 129441b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129441b4 je 0x129441bd */
  if (C.zf) goto L_129441bd;
  /* 129441b6 mov eax, 1 */
  EAX = (0x1u);
  /* 129441bb jmp 0x129441d2 */
  goto L_129441d2;
L_129441bd:;
  /* 129441bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129441c0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129441c3 push edx */
  push32((uint32_t)(EDX));
  /* 129441c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129441c6 mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 129441cb push eax */
  push32((uint32_t)(EAX));
  /* 129441cc call dword ptr [0x129702c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702c4))), 0x129441d2u);
L_129441d2:;
  /* 129441d2 mov esp, ebp */
  ESP = (EBP);
  /* 129441d4 pop ebp */
  EBP = (pop32());
  /* 129441d5 ret  */
  ESPCHK(0x12944150u, _esp0);
  ESP += 4; return;
}

/* FUN_100041e0 @ 0x129441e0 (227 bytes, 80 insns) */
void f_129441e0(void) {
  FTRACE(0x129441e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129441e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129441e1 mov ebp, esp */
  EBP = (ESP);
  /* 129441e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129441e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129441e7 push eax */
  push32((uint32_t)(EAX));
  /* 129441e8 call 0x12944150 */
  push32(0x129441edu); f_12944150();
  /* 129441ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129441f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129441f2 jne 0x129441fb */
  if (!C.zf) goto L_129441fb;
  /* 129441f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129441f6 jmp 0x129442bf */
  goto L_129442bf;
L_129441fb:;
  /* 129441fb push 9 */
  push32((uint32_t)(0x9u));
  /* 129441fd call 0x12946550 */
  push32(0x12944202u); f_12946550();
  /* 12944202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944208 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294420b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294420e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944211 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12944214 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12944219 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294421c je 0x12944240 */
  if (C.zf) goto L_12944240;
  /* 1294421e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944221 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944225 je 0x12944240 */
  if (C.zf) goto L_12944240;
  /* 12944227 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294422a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1294422d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12944232 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944235 je 0x12944240 */
  if (C.zf) goto L_12944240;
  /* 12944237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294423a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294423e jne 0x129442b3 */
  if (!C.zf) goto L_129442b3;
L_12944240:;
  /* 12944240 push 1 */
  push32((uint32_t)(0x1u));
  /* 12944242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944245 push edx */
  push32((uint32_t)(EDX));
  /* 12944246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944249 push eax */
  push32((uint32_t)(EAX));
  /* 1294424a call 0x12944100 */
  push32(0x1294424fu); f_12944100();
  /* 1294424f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944254 je 0x129442b3 */
  if (C.zf) goto L_129442b3;
  /* 12944256 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944259 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1294425c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294425f jne 0x129442b3 */
  if (!C.zf) goto L_129442b3;
  /* 12944261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944264 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12944267 cmp ecx, dword ptr [0x1296ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1296ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294426d jg 0x129442b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_129442b3;
  /* 1294426f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944273 je 0x12944280 */
  if (C.zf) goto L_12944280;
  /* 12944275 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294427b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1294427e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12944280:;
  /* 12944280 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944284 je 0x12944291 */
  if (C.zf) goto L_12944291;
  /* 12944286 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12944289 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294428c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294428f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12944291:;
  /* 12944291 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944295 je 0x129442a2 */
  if (C.zf) goto L_129442a2;
  /* 12944297 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294429a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294429d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129442a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129442a2:;
  /* 129442a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 129442a4 call 0x129465f0 */
  push32(0x129442a9u); f_129465f0();
  /* 129442a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129442ac mov eax, 1 */
  EAX = (0x1u);
  /* 129442b1 jmp 0x129442bf */
  goto L_129442bf;
L_129442b3:;
  /* 129442b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 129442b5 call 0x129465f0 */
  push32(0x129442bau); f_129465f0();
  /* 129442ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129442bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129442bf:;
  /* 129442bf mov esp, ebp */
  ESP = (EBP);
  /* 129442c1 pop ebp */
  EBP = (pop32());
  /* 129442c2 ret  */
  ESPCHK(0x129441e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d0 @ 0x129442d0 (28 bytes, 11 insns) */
void f_129442d0(void) {
  FTRACE(0x129442d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129442d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129442d1 mov ebp, esp */
  EBP = (ESP);
  /* 129442d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129442d4 mov eax, dword ptr [0x1296fe38] */
  EAX = (r32((uint32_t)(0x1296fe38)));
  /* 129442d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129442dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129442df mov dword ptr [0x1296fe38], ecx */
  w32((uint32_t)(0x1296fe38), (ECX));
  /* 129442e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129442e8 mov esp, ebp */
  ESP = (EBP);
  /* 129442ea pop ebp */
  EBP = (pop32());
  /* 129442eb ret  */
  ESPCHK(0x129442d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x129442f0 (362 bytes, 116 insns) */
void f_129442f0(void) {
  FTRACE(0x129442f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129442f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129442f1 mov ebp, esp */
  EBP = (ESP);
  /* 129442f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129442f6 push ebx */
  push32((uint32_t)(EBX));
  /* 129442f7 push esi */
  push32((uint32_t)(ESI));
  /* 129442f8 push edi */
  push32((uint32_t)(EDI));
  /* 129442f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129442fd jne 0x1294432a */
  if (!C.zf) goto L_1294432a;
L_129442ff:;
  /* 129442ff push 0x12969904 */
  push32((uint32_t)(0x12969904u));
  /* 12944304 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12944309 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294430b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294430d push 0 */
  push32((uint32_t)(0x0u));
  /* 1294430f push 0 */
  push32((uint32_t)(0x0u));
  /* 12944311 call 0x12941c10 */
  push32(0x12944316u); f_12941c10();
  /* 12944316 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944319 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294431c jne 0x1294431f */
  if (!C.zf) goto L_1294431f;
  /* 1294431e int3  */
  x86_unimpl("int3 @ 0x1294431e");
L_1294431f:;
  /* 1294431f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12944321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944323 jne 0x129442ff */
  if (!C.zf) goto L_129442ff;
  /* 12944325 jmp 0x12944453 */
  goto L_12944453;
L_1294432a:;
  /* 1294432a push 9 */
  push32((uint32_t)(0x9u));
  /* 1294432c call 0x12946550 */
  push32(0x12944331u); f_12946550();
  /* 12944331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944337 mov edx, dword ptr [0x1296e4d4] */
  EDX = (r32((uint32_t)(0x1296e4d4)));
  /* 1294433d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1294433f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12944346 jmp 0x12944351 */
  goto L_12944351;
L_12944348:;
  /* 12944348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294434b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294434e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12944351:;
  /* 12944351 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944355 jge 0x12944375 */
  if ((C.sf==C.of)) goto L_12944375;
  /* 12944357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294435a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294435d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12944365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294436b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12944373 jmp 0x12944348 */
  goto L_12944348;
L_12944375:;
  /* 12944375 mov edx, dword ptr [0x1296e4d4] */
  EDX = (r32((uint32_t)(0x1296e4d4)));
  /* 1294437b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1294437e jmp 0x12944388 */
  goto L_12944388;
L_12944380:;
  /* 12944380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944383 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12944385 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12944388:;
  /* 12944388 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294438c je 0x12944431 */
  if (C.zf) goto L_12944431;
  /* 12944392 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944395 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12944398 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294439d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294439f jl 0x12944407 */
  if ((C.sf!=C.of)) goto L_12944407;
  /* 129443a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129443a4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129443a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129443ad cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129443b0 jge 0x12944407 */
  if ((C.sf==C.of)) goto L_12944407;
  /* 129443b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129443b5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129443b8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129443be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129443c1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 129443c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129443c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129443cb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129443ce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129443d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129443d7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 129443db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129443de mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129443e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129443e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129443e9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 129443ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129443f0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129443f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129443f6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 129443f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129443fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944401 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12944405 jmp 0x1294442c */
  goto L_1294442c;
L_12944407:;
  /* 12944407 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294440a push edx */
  push32((uint32_t)(EDX));
  /* 1294440b push 0x129698e0 */
  push32((uint32_t)(0x129698e0u));
  /* 12944410 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944412 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944414 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944416 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944418 call 0x12941c10 */
  push32(0x1294441du); f_12941c10();
  /* 1294441d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944420 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944423 jne 0x12944426 */
  if (!C.zf) goto L_12944426;
  /* 12944425 int3  */
  x86_unimpl("int3 @ 0x12944425");
L_12944426:;
  /* 12944426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12944428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294442a jne 0x12944407 */
  if (!C.zf) goto L_12944407;
L_1294442c:;
  /* 1294442c jmp 0x12944380 */
  goto L_12944380;
L_12944431:;
  /* 12944431 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944434 mov edx, dword ptr [0x1296e4dc] */
  EDX = (r32((uint32_t)(0x1296e4dc)));
  /* 1294443a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1294443d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944440 mov ecx, dword ptr [0x1296e4d0] */
  ECX = (r32((uint32_t)(0x1296e4d0)));
  /* 12944446 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12944449 push 9 */
  push32((uint32_t)(0x9u));
  /* 1294444b call 0x129465f0 */
  push32(0x12944450u); f_129465f0();
  /* 12944450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12944453:;
  /* 12944453 pop edi */
  EDI = (pop32());
  /* 12944454 pop esi */
  ESI = (pop32());
  /* 12944455 pop ebx */
  EBX = (pop32());
  /* 12944456 mov esp, ebp */
  ESP = (EBP);
  /* 12944458 pop ebp */
  EBP = (pop32());
  /* 12944459 ret  */
  ESPCHK(0x129442f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x12944460 (291 bytes, 95 insns) */
void f_12944460(void) {
  FTRACE(0x12944460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944460 push ebp */
  push32((uint32_t)(EBP));
  /* 12944461 mov ebp, esp */
  EBP = (ESP);
  /* 12944463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944466 push ebx */
  push32((uint32_t)(EBX));
  /* 12944467 push esi */
  push32((uint32_t)(ESI));
  /* 12944468 push edi */
  push32((uint32_t)(EDI));
  /* 12944469 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12944470 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944474 je 0x12944482 */
  if (C.zf) goto L_12944482;
  /* 12944476 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294447a je 0x12944482 */
  if (C.zf) goto L_12944482;
  /* 1294447c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944480 jne 0x129444b0 */
  if (!C.zf) goto L_129444b0;
L_12944482:;
  /* 12944482 push 0x1296992c */
  push32((uint32_t)(0x1296992cu));
  /* 12944487 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 1294448c push 0 */
  push32((uint32_t)(0x0u));
  /* 1294448e push 0 */
  push32((uint32_t)(0x0u));
  /* 12944490 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944492 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944494 call 0x12941c10 */
  push32(0x12944499u); f_12941c10();
  /* 12944499 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294449c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294449f jne 0x129444a2 */
  if (!C.zf) goto L_129444a2;
  /* 129444a1 int3  */
  x86_unimpl("int3 @ 0x129444a1");
L_129444a2:;
  /* 129444a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129444a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129444a6 jne 0x12944482 */
  if (!C.zf) goto L_12944482;
  /* 129444a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129444ab jmp 0x1294457c */
  goto L_1294457c;
L_129444b0:;
  /* 129444b0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129444b7 jmp 0x129444c2 */
  goto L_129444c2;
L_129444b9:;
  /* 129444b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129444bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129444bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129444c2:;
  /* 129444c2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129444c6 jge 0x1294454c */
  if ((C.sf==C.of)) goto L_1294454c;
  /* 129444cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129444cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129444d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129444d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129444d8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 129444dc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129444e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129444e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129444e6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 129444ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129444ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129444f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129444f3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129444f6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 129444fa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129444fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944504 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12944508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294450b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294450e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944513 jne 0x12944522 */
  if (!C.zf) goto L_12944522;
  /* 12944515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944518 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294451b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944520 je 0x12944547 */
  if (C.zf) goto L_12944547;
L_12944522:;
  /* 12944522 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944526 je 0x12944547 */
  if (C.zf) goto L_12944547;
  /* 12944528 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294452c jne 0x12944540 */
  if (!C.zf) goto L_12944540;
  /* 1294452e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944532 jne 0x12944547 */
  if (!C.zf) goto L_12944547;
  /* 12944534 mov eax, dword ptr [0x1296ca84] */
  EAX = (r32((uint32_t)(0x1296ca84)));
  /* 12944539 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1294453c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294453e je 0x12944547 */
  if (C.zf) goto L_12944547;
L_12944540:;
  /* 12944540 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12944547:;
  /* 12944547 jmp 0x129444b9 */
  goto L_129444b9;
L_1294454c:;
  /* 1294454c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294454f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944552 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12944555 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294455b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1294455e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944561 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944564 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12944567 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294456a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294456d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12944570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944573 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12944579 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1294457c:;
  /* 1294457c pop edi */
  EDI = (pop32());
  /* 1294457d pop esi */
  ESI = (pop32());
  /* 1294457e pop ebx */
  EBX = (pop32());
  /* 1294457f mov esp, ebp */
  ESP = (EBP);
  /* 12944581 pop ebp */
  EBP = (pop32());
  /* 12944582 ret  */
  ESPCHK(0x12944460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x12944590 (697 bytes, 253 insns) */
void f_12944590(void) {
  FTRACE(0x12944590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944590 push ebp */
  push32((uint32_t)(EBP));
  /* 12944591 mov ebp, esp */
  EBP = (ESP);
  /* 12944593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944596 push ebx */
  push32((uint32_t)(EBX));
  /* 12944597 push esi */
  push32((uint32_t)(ESI));
  /* 12944598 push edi */
  push32((uint32_t)(EDI));
  /* 12944599 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129445a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 129445a2 call 0x12946550 */
  push32(0x129445a7u); f_12946550();
  /* 129445a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129445aa:;
  /* 129445aa push 0x12969a24 */
  push32((uint32_t)(0x12969a24u));
  /* 129445af push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 129445b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129445b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129445b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129445ba push 0 */
  push32((uint32_t)(0x0u));
  /* 129445bc call 0x12941c10 */
  push32(0x129445c1u); f_12941c10();
  /* 129445c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129445c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129445c7 jne 0x129445ca */
  if (!C.zf) goto L_129445ca;
  /* 129445c9 int3  */
  x86_unimpl("int3 @ 0x129445c9");
L_129445ca:;
  /* 129445ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129445cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129445ce jne 0x129445aa */
  if (!C.zf) goto L_129445aa;
  /* 129445d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129445d4 je 0x129445de */
  if (C.zf) goto L_129445de;
  /* 129445d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129445d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129445db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129445de:;
  /* 129445de mov eax, dword ptr [0x1296e4d4] */
  EAX = (r32((uint32_t)(0x1296e4d4)));
  /* 129445e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129445e6 jmp 0x129445f0 */
  goto L_129445f0;
L_129445e8:;
  /* 129445e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129445eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129445ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129445f0:;
  /* 129445f0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129445f4 je 0x12944812 */
  if (C.zf) goto L_12944812;
  /* 129445fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129445fd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944600 je 0x12944812 */
  if (C.zf) goto L_12944812;
  /* 12944606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944609 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1294460c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12944612 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944615 je 0x12944644 */
  if (C.zf) goto L_12944644;
  /* 12944617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294461a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1294461d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12944623 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12944625 je 0x12944644 */
  if (C.zf) goto L_12944644;
  /* 12944627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294462a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1294462d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12944632 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944635 jne 0x12944649 */
  if (!C.zf) goto L_12944649;
  /* 12944637 mov ecx, dword ptr [0x1296ca84] */
  ECX = (r32((uint32_t)(0x1296ca84)));
  /* 1294463d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12944640 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12944642 jne 0x12944649 */
  if (!C.zf) goto L_12944649;
L_12944644:;
  /* 12944644 jmp 0x1294480d */
  goto L_1294480d;
L_12944649:;
  /* 12944649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294464c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944650 je 0x129446c2 */
  if (C.zf) goto L_129446c2;
  /* 12944652 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944654 push 1 */
  push32((uint32_t)(0x1u));
  /* 12944656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944659 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1294465c push ecx */
  push32((uint32_t)(ECX));
  /* 1294465d call 0x12944100 */
  push32(0x12944662u); f_12944100();
  /* 12944662 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944667 jne 0x12944693 */
  if (!C.zf) goto L_12944693;
L_12944669:;
  /* 12944669 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294466c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1294466f push eax */
  push32((uint32_t)(EAX));
  /* 12944670 push 0x12969a10 */
  push32((uint32_t)(0x12969a10u));
  /* 12944675 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944677 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294467b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294467d call 0x12941c10 */
  push32(0x12944682u); f_12941c10();
  /* 12944682 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944685 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944688 jne 0x1294468b */
  if (!C.zf) goto L_1294468b;
  /* 1294468a int3  */
  x86_unimpl("int3 @ 0x1294468a");
L_1294468b:;
  /* 1294468b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294468d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294468f jne 0x12944669 */
  if (!C.zf) goto L_12944669;
  /* 12944691 jmp 0x129446c2 */
  goto L_129446c2;
L_12944693:;
  /* 12944693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944696 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12944699 push eax */
  push32((uint32_t)(EAX));
  /* 1294469a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294469d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129446a0 push edx */
  push32((uint32_t)(EDX));
  /* 129446a1 push 0x12969a04 */
  push32((uint32_t)(0x12969a04u));
  /* 129446a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129446a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129446aa push 0 */
  push32((uint32_t)(0x0u));
  /* 129446ac push 0 */
  push32((uint32_t)(0x0u));
  /* 129446ae call 0x12941c10 */
  push32(0x129446b3u); f_12941c10();
  /* 129446b3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129446b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129446b9 jne 0x129446bc */
  if (!C.zf) goto L_129446bc;
  /* 129446bb int3  */
  x86_unimpl("int3 @ 0x129446bb");
L_129446bc:;
  /* 129446bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129446be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129446c0 jne 0x12944693 */
  if (!C.zf) goto L_12944693;
L_129446c2:;
  /* 129446c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129446c5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129446c8 push edx */
  push32((uint32_t)(EDX));
  /* 129446c9 push 0x129699fc */
  push32((uint32_t)(0x129699fcu));
  /* 129446ce push 0 */
  push32((uint32_t)(0x0u));
  /* 129446d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129446d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129446d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129446d6 call 0x12941c10 */
  push32(0x129446dbu); f_12941c10();
  /* 129446db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129446de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129446e1 jne 0x129446e4 */
  if (!C.zf) goto L_129446e4;
  /* 129446e3 int3  */
  x86_unimpl("int3 @ 0x129446e3");
L_129446e4:;
  /* 129446e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129446e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129446e8 jne 0x129446c2 */
  if (!C.zf) goto L_129446c2;
  /* 129446ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129446ed mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129446f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129446f6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129446f9 jne 0x1294476c */
  if (!C.zf) goto L_1294476c;
L_129446fb:;
  /* 129446fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129446fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12944701 push ecx */
  push32((uint32_t)(ECX));
  /* 12944702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944705 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12944708 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1294470b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12944710 push eax */
  push32((uint32_t)(EAX));
  /* 12944711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944714 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944717 push ecx */
  push32((uint32_t)(ECX));
  /* 12944718 push 0x129699c8 */
  push32((uint32_t)(0x129699c8u));
  /* 1294471d push 0 */
  push32((uint32_t)(0x0u));
  /* 1294471f push 0 */
  push32((uint32_t)(0x0u));
  /* 12944721 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944723 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944725 call 0x12941c10 */
  push32(0x1294472au); f_12941c10();
  /* 1294472a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294472d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944730 jne 0x12944733 */
  if (!C.zf) goto L_12944733;
  /* 12944732 int3  */
  x86_unimpl("int3 @ 0x12944732");
L_12944733:;
  /* 12944733 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12944735 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12944737 jne 0x129446fb */
  if (!C.zf) goto L_129446fb;
  /* 12944739 cmp dword ptr [0x1296fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944740 je 0x1294475b */
  if (C.zf) goto L_1294475b;
  /* 12944742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944745 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12944748 push ecx */
  push32((uint32_t)(ECX));
  /* 12944749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294474c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294474f push edx */
  push32((uint32_t)(EDX));
  /* 12944750 call dword ptr [0x1296fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296fe38))), 0x12944756u);
  /* 12944756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944759 jmp 0x12944767 */
  goto L_12944767;
L_1294475b:;
  /* 1294475b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294475e push eax */
  push32((uint32_t)(EAX));
  /* 1294475f call 0x12944850 */
  push32(0x12944764u); f_12944850();
  /* 12944764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12944767:;
  /* 12944767 jmp 0x1294480d */
  goto L_1294480d;
L_1294476c:;
  /* 1294476c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294476f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944773 jne 0x129447b2 */
  if (!C.zf) goto L_129447b2;
L_12944775:;
  /* 12944775 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944778 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1294477b push eax */
  push32((uint32_t)(EAX));
  /* 1294477c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294477f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944782 push ecx */
  push32((uint32_t)(ECX));
  /* 12944783 push 0x129699a0 */
  push32((uint32_t)(0x129699a0u));
  /* 12944788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294478a push 0 */
  push32((uint32_t)(0x0u));
  /* 1294478c push 0 */
  push32((uint32_t)(0x0u));
  /* 1294478e push 0 */
  push32((uint32_t)(0x0u));
  /* 12944790 call 0x12941c10 */
  push32(0x12944795u); f_12941c10();
  /* 12944795 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944798 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294479b jne 0x1294479e */
  if (!C.zf) goto L_1294479e;
  /* 1294479d int3  */
  x86_unimpl("int3 @ 0x1294479d");
L_1294479e:;
  /* 1294479e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129447a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129447a2 jne 0x12944775 */
  if (!C.zf) goto L_12944775;
  /* 129447a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129447a7 push eax */
  push32((uint32_t)(EAX));
  /* 129447a8 call 0x12944850 */
  push32(0x129447adu); f_12944850();
  /* 129447ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129447b0 jmp 0x1294480d */
  goto L_1294480d;
L_129447b2:;
  /* 129447b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129447b5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129447b8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129447be cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129447c1 jne 0x1294480d */
  if (!C.zf) goto L_1294480d;
L_129447c3:;
  /* 129447c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129447c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129447c9 push ecx */
  push32((uint32_t)(ECX));
  /* 129447ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129447cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129447d0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129447d3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129447d8 push eax */
  push32((uint32_t)(EAX));
  /* 129447d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129447dc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129447df push ecx */
  push32((uint32_t)(ECX));
  /* 129447e0 push 0x1296996c */
  push32((uint32_t)(0x1296996cu));
  /* 129447e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129447e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129447e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129447eb push 0 */
  push32((uint32_t)(0x0u));
  /* 129447ed call 0x12941c10 */
  push32(0x129447f2u); f_12941c10();
  /* 129447f2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129447f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129447f8 jne 0x129447fb */
  if (!C.zf) goto L_129447fb;
  /* 129447fa int3  */
  x86_unimpl("int3 @ 0x129447fa");
L_129447fb:;
  /* 129447fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129447fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129447ff jne 0x129447c3 */
  if (!C.zf) goto L_129447c3;
  /* 12944801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944804 push eax */
  push32((uint32_t)(EAX));
  /* 12944805 call 0x12944850 */
  push32(0x1294480au); f_12944850();
  /* 1294480a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294480d:;
  /* 1294480d jmp 0x129445e8 */
  goto L_129445e8;
L_12944812:;
  /* 12944812 push 9 */
  push32((uint32_t)(0x9u));
  /* 12944814 call 0x129465f0 */
  push32(0x12944819u); f_129465f0();
  /* 12944819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294481c:;
  /* 1294481c push 0x12969954 */
  push32((uint32_t)(0x12969954u));
  /* 12944821 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 12944826 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294482a push 0 */
  push32((uint32_t)(0x0u));
  /* 1294482c push 0 */
  push32((uint32_t)(0x0u));
  /* 1294482e call 0x12941c10 */
  push32(0x12944833u); f_12941c10();
  /* 12944833 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944836 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944839 jne 0x1294483c */
  if (!C.zf) goto L_1294483c;
  /* 1294483b int3  */
  x86_unimpl("int3 @ 0x1294483b");
L_1294483c:;
  /* 1294483c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294483e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12944840 jne 0x1294481c */
  if (!C.zf) goto L_1294481c;
  /* 12944842 pop edi */
  EDI = (pop32());
  /* 12944843 pop esi */
  ESI = (pop32());
  /* 12944844 pop ebx */
  EBX = (pop32());
  /* 12944845 mov esp, ebp */
  ESP = (EBP);
  /* 12944847 pop ebp */
  EBP = (pop32());
  /* 12944848 ret  */
  ESPCHK(0x12944590u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x12944850 (276 bytes, 89 insns) */
void f_12944850(void) {
  FTRACE(0x12944850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944850 push ebp */
  push32((uint32_t)(EBP));
  /* 12944851 mov ebp, esp */
  EBP = (ESP);
  /* 12944853 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944856 push ebx */
  push32((uint32_t)(EBX));
  /* 12944857 push esi */
  push32((uint32_t)(ESI));
  /* 12944858 push edi */
  push32((uint32_t)(EDI));
  /* 12944859 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12944860 jmp 0x1294486b */
  goto L_1294486b;
L_12944862:;
  /* 12944862 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12944865 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944868 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1294486b:;
  /* 1294486b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294486e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944872 jge 0x1294487f */
  if ((C.sf==C.of)) goto L_1294487f;
  /* 12944874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944877 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1294487a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1294487d jmp 0x12944886 */
  goto L_12944886;
L_1294487f:;
  /* 1294487f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12944886:;
  /* 12944886 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12944889 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294488c jge 0x1294492c */
  if ((C.sf==C.of)) goto L_1294492c;
  /* 12944892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944895 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944898 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1294489b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1294489e cmp dword ptr [0x1296cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129448a5 jle 0x129448c3 */
  if ((C.zf||C.sf!=C.of)) goto L_129448c3;
  /* 129448a7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 129448ac mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129448af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129448b5 push ecx */
  push32((uint32_t)(ECX));
  /* 129448b6 call 0x12948b60 */
  push32(0x129448bbu); f_12948b60();
  /* 129448bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129448be mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 129448c1 jmp 0x129448e0 */
  goto L_129448e0;
L_129448c3:;
  /* 129448c3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129448c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129448cc mov eax, dword ptr [0x1296cc98] */
  EAX = (r32((uint32_t)(0x1296cc98)));
  /* 129448d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129448d3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129448d7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 129448dd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_129448e0:;
  /* 129448e0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129448e4 je 0x129448f4 */
  if (C.zf) goto L_129448f4;
  /* 129448e6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129448e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129448ef mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 129448f2 jmp 0x129448fb */
  goto L_129448fb;
L_129448f4:;
  /* 129448f4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_129448fb:;
  /* 129448fb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129448fe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12944901 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12944905 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12944908 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1294490e push edx */
  push32((uint32_t)(EDX));
  /* 1294490f push 0x12969a48 */
  push32((uint32_t)(0x12969a48u));
  /* 12944914 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12944917 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294491a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1294491e push ecx */
  push32((uint32_t)(ECX));
  /* 1294491f call 0x12948a60 */
  push32(0x12944924u); f_12948a60();
  /* 12944924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944927 jmp 0x12944862 */
  goto L_12944862;
L_1294492c:;
  /* 1294492c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1294492f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12944934:;
  /* 12944934 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12944937 push eax */
  push32((uint32_t)(EAX));
  /* 12944938 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1294493b push ecx */
  push32((uint32_t)(ECX));
  /* 1294493c push 0x12969a38 */
  push32((uint32_t)(0x12969a38u));
  /* 12944941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944943 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944945 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944947 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944949 call 0x12941c10 */
  push32(0x1294494eu); f_12941c10();
  /* 1294494e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944951 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944954 jne 0x12944957 */
  if (!C.zf) goto L_12944957;
  /* 12944956 int3  */
  x86_unimpl("int3 @ 0x12944956");
L_12944957:;
  /* 12944957 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12944959 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1294495b jne 0x12944934 */
  if (!C.zf) goto L_12944934;
  /* 1294495d pop edi */
  EDI = (pop32());
  /* 1294495e pop esi */
  ESI = (pop32());
  /* 1294495f pop ebx */
  EBX = (pop32());
  /* 12944960 mov esp, ebp */
  ESP = (EBP);
  /* 12944962 pop ebp */
  EBP = (pop32());
  /* 12944963 ret  */
  ESPCHK(0x12944850u, _esp0);
  ESP += 4; return;
}

/* FUN_10004970 @ 0x12944970 (116 bytes, 46 insns) */
void f_12944970(void) {
  FTRACE(0x12944970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944970 push ebp */
  push32((uint32_t)(EBP));
  /* 12944971 mov ebp, esp */
  EBP = (ESP);
  /* 12944973 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944976 push ebx */
  push32((uint32_t)(EBX));
  /* 12944977 push esi */
  push32((uint32_t)(ESI));
  /* 12944978 push edi */
  push32((uint32_t)(EDI));
  /* 12944979 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1294497c push eax */
  push32((uint32_t)(EAX));
  /* 1294497d call 0x129442f0 */
  push32(0x12944982u); f_129442f0();
  /* 12944982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944985 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944989 jne 0x129449a4 */
  if (!C.zf) goto L_129449a4;
  /* 1294498b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294498f jne 0x129449a4 */
  if (!C.zf) goto L_129449a4;
  /* 12944991 mov ecx, dword ptr [0x1296ca84] */
  ECX = (r32((uint32_t)(0x1296ca84)));
  /* 12944997 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1294499a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294499c je 0x129449db */
  if (C.zf) goto L_129449db;
  /* 1294499e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129449a2 je 0x129449db */
  if (C.zf) goto L_129449db;
L_129449a4:;
  /* 129449a4 push 0x12969a50 */
  push32((uint32_t)(0x12969a50u));
  /* 129449a9 push 0x1296941c */
  push32((uint32_t)(0x1296941cu));
  /* 129449ae push 0 */
  push32((uint32_t)(0x0u));
  /* 129449b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129449b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129449b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129449b6 call 0x12941c10 */
  push32(0x129449bbu); f_12941c10();
  /* 129449bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129449be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129449c1 jne 0x129449c4 */
  if (!C.zf) goto L_129449c4;
  /* 129449c3 int3  */
  x86_unimpl("int3 @ 0x129449c3");
L_129449c4:;
  /* 129449c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129449c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129449c8 jne 0x129449a4 */
  if (!C.zf) goto L_129449a4;
  /* 129449ca push 0 */
  push32((uint32_t)(0x0u));
  /* 129449cc call 0x12944590 */
  push32(0x129449d1u); f_12944590();
  /* 129449d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129449d4 mov eax, 1 */
  EAX = (0x1u);
  /* 129449d9 jmp 0x129449dd */
  goto L_129449dd;
L_129449db:;
  /* 129449db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129449dd:;
  /* 129449dd pop edi */
  EDI = (pop32());
  /* 129449de pop esi */
  ESI = (pop32());
  /* 129449df pop ebx */
  EBX = (pop32());
  /* 129449e0 mov esp, ebp */
  ESP = (EBP);
  /* 129449e2 pop ebp */
  EBP = (pop32());
  /* 129449e3 ret  */
  ESPCHK(0x12944970u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f0 @ 0x129449f0 (197 bytes, 79 insns) */
void f_129449f0(void) {
  FTRACE(0x129449f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129449f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129449f1 mov ebp, esp */
  EBP = (ESP);
  /* 129449f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129449f4 push ebx */
  push32((uint32_t)(EBX));
  /* 129449f5 push esi */
  push32((uint32_t)(ESI));
  /* 129449f6 push edi */
  push32((uint32_t)(EDI));
  /* 129449f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129449fb jne 0x12944a02 */
  if (!C.zf) goto L_12944a02;
  /* 129449fd jmp 0x12944aae */
  goto L_12944aae;
L_12944a02:;
  /* 12944a02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12944a09 jmp 0x12944a14 */
  goto L_12944a14;
L_12944a0b:;
  /* 12944a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944a0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944a11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12944a14:;
  /* 12944a14 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944a18 jge 0x12944a5e */
  if ((C.sf==C.of)) goto L_12944a5e;
L_12944a1a:;
  /* 12944a1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944a1d mov edx, dword ptr [ecx*4 + 0x1296ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296ca94)));
  /* 12944a24 push edx */
  push32((uint32_t)(EDX));
  /* 12944a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944a2b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12944a2f push edx */
  push32((uint32_t)(EDX));
  /* 12944a30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944a36 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12944a3a push edx */
  push32((uint32_t)(EDX));
  /* 12944a3b push 0x12969aac */
  push32((uint32_t)(0x12969aacu));
  /* 12944a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a48 call 0x12941c10 */
  push32(0x12944a4du); f_12941c10();
  /* 12944a4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944a50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944a53 jne 0x12944a56 */
  if (!C.zf) goto L_12944a56;
  /* 12944a55 int3  */
  x86_unimpl("int3 @ 0x12944a55");
L_12944a56:;
  /* 12944a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12944a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944a5a jne 0x12944a1a */
  if (!C.zf) goto L_12944a1a;
  /* 12944a5c jmp 0x12944a0b */
  goto L_12944a0b;
L_12944a5e:;
  /* 12944a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944a61 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12944a64 push edx */
  push32((uint32_t)(EDX));
  /* 12944a65 push 0x12969a88 */
  push32((uint32_t)(0x12969a88u));
  /* 12944a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a72 call 0x12941c10 */
  push32(0x12944a77u); f_12941c10();
  /* 12944a77 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944a7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944a7d jne 0x12944a80 */
  if (!C.zf) goto L_12944a80;
  /* 12944a7f int3  */
  x86_unimpl("int3 @ 0x12944a7f");
L_12944a80:;
  /* 12944a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12944a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944a84 jne 0x12944a5e */
  if (!C.zf) goto L_12944a5e;
L_12944a86:;
  /* 12944a86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944a89 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12944a8c push edx */
  push32((uint32_t)(EDX));
  /* 12944a8d push 0x12969a68 */
  push32((uint32_t)(0x12969a68u));
  /* 12944a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12944a9a call 0x12941c10 */
  push32(0x12944a9fu); f_12941c10();
  /* 12944a9f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944aa2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944aa5 jne 0x12944aa8 */
  if (!C.zf) goto L_12944aa8;
  /* 12944aa7 int3  */
  x86_unimpl("int3 @ 0x12944aa7");
L_12944aa8:;
  /* 12944aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12944aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944aac jne 0x12944a86 */
  if (!C.zf) goto L_12944a86;
L_12944aae:;
  /* 12944aae pop edi */
  EDI = (pop32());
  /* 12944aaf pop esi */
  ESI = (pop32());
  /* 12944ab0 pop ebx */
  EBX = (pop32());
  /* 12944ab1 mov esp, ebp */
  ESP = (EBP);
  /* 12944ab3 pop ebp */
  EBP = (pop32());
  /* 12944ab4 ret  */
  ESPCHK(0x129449f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x12944ac0 (329 bytes, 102 insns) */
void f_12944ac0(void) {
  FTRACE(0x12944ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12944ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12944ac3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944ac6 cmp dword ptr [0x1296ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944acd jne 0x12944ad4 */
  if (!C.zf) goto L_12944ad4;
  /* 12944acf call 0x12949400 */
  push32(0x12944ad4u); f_12949400();
L_12944ad4:;
  /* 12944ad4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12944adb mov eax, dword ptr [0x1296e470] */
  EAX = (r32((uint32_t)(0x1296e470)));
  /* 12944ae0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12944ae3:;
  /* 12944ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944ae6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12944ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12944aeb je 0x12944b19 */
  if (C.zf) goto L_12944b19;
  /* 12944aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944af0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944af3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944af6 je 0x12944b01 */
  if (C.zf) goto L_12944b01;
  /* 12944af8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944afb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944afe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12944b01:;
  /* 12944b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944b04 push eax */
  push32((uint32_t)(EAX));
  /* 12944b05 call 0x12945980 */
  push32(0x12944b0au); f_12945980();
  /* 12944b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944b10 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12944b14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12944b17 jmp 0x12944ae3 */
  goto L_12944ae3;
L_12944b19:;
  /* 12944b19 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12944b1b push 0x12969acc */
  push32((uint32_t)(0x12969accu));
  /* 12944b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 12944b22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944b25 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12944b2c push ecx */
  push32((uint32_t)(ECX));
  /* 12944b2d call 0x12942b50 */
  push32(0x12944b32u); f_12942b50();
  /* 12944b32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944b35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12944b38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944b3b mov dword ptr [0x1296e4a4], edx */
  w32((uint32_t)(0x1296e4a4), (EDX));
  /* 12944b41 cmp dword ptr [0x1296e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944b48 jne 0x12944b54 */
  if (!C.zf) goto L_12944b54;
  /* 12944b4a push 9 */
  push32((uint32_t)(0x9u));
  /* 12944b4c call 0x12941ac0 */
  push32(0x12944b51u); f_12941ac0();
  /* 12944b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12944b54:;
  /* 12944b54 mov eax, dword ptr [0x1296e470] */
  EAX = (r32((uint32_t)(0x1296e470)));
  /* 12944b59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12944b5c jmp 0x12944b67 */
  goto L_12944b67;
L_12944b5e:;
  /* 12944b5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944b61 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944b64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12944b67:;
  /* 12944b67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944b6a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12944b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944b6f je 0x12944bd7 */
  if (C.zf) goto L_12944bd7;
  /* 12944b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944b74 push ecx */
  push32((uint32_t)(ECX));
  /* 12944b75 call 0x12945980 */
  push32(0x12944b7au); f_12945980();
  /* 12944b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944b7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944b80 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12944b83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944b86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12944b89 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944b8c je 0x12944bd5 */
  if (C.zf) goto L_12944bd5;
  /* 12944b8e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12944b90 push 0x12969acc */
  push32((uint32_t)(0x12969accu));
  /* 12944b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 12944b97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944b9a push ecx */
  push32((uint32_t)(ECX));
  /* 12944b9b call 0x12942b50 */
  push32(0x12944ba0u); f_12942b50();
  /* 12944ba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944ba3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944ba6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12944ba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944bab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944bae jne 0x12944bba */
  if (!C.zf) goto L_12944bba;
  /* 12944bb0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12944bb2 call 0x12941ac0 */
  push32(0x12944bb7u); f_12941ac0();
  /* 12944bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12944bba:;
  /* 12944bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944bbd push ecx */
  push32((uint32_t)(ECX));
  /* 12944bbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944bc1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12944bc3 push eax */
  push32((uint32_t)(EAX));
  /* 12944bc4 call 0x12945b00 */
  push32(0x12944bc9u); f_12945b00();
  /* 12944bc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944bcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944bcf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944bd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12944bd5:;
  /* 12944bd5 jmp 0x12944b5e */
  goto L_12944b5e;
L_12944bd7:;
  /* 12944bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12944bd9 mov edx, dword ptr [0x1296e470] */
  EDX = (r32((uint32_t)(0x1296e470)));
  /* 12944bdf push edx */
  push32((uint32_t)(EDX));
  /* 12944be0 call 0x129435e0 */
  push32(0x12944be5u); f_129435e0();
  /* 12944be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944be8 mov dword ptr [0x1296e470], 0 */
  w32((uint32_t)(0x1296e470), (0x0u));
  /* 12944bf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944bf5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12944bfb mov dword ptr [0x1296ffa0], 1 */
  w32((uint32_t)(0x1296ffa0), (0x1u));
  /* 12944c05 mov esp, ebp */
  ESP = (EBP);
  /* 12944c07 pop ebp */
  EBP = (pop32());
  /* 12944c08 ret  */
  ESPCHK(0x12944ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x12944c10 (216 bytes, 69 insns) */
void f_12944c10(void) {
  FTRACE(0x12944c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12944c11 mov ebp, esp */
  EBP = (ESP);
  /* 12944c13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944c16 cmp dword ptr [0x1296ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944c1d jne 0x12944c24 */
  if (!C.zf) goto L_12944c24;
  /* 12944c1f call 0x12949400 */
  push32(0x12944c24u); f_12949400();
L_12944c24:;
  /* 12944c24 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12944c29 push 0x1296e4e0 */
  push32((uint32_t)(0x1296e4e0u));
  /* 12944c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12944c30 call dword ptr [0x1297027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297027c))), 0x12944c36u);
  /* 12944c36 mov dword ptr [0x1296e4b4], 0x1296e4e0 */
  w32((uint32_t)(0x1296e4b4), (0x1296e4e0u));
  /* 12944c40 mov eax, dword ptr [0x1296ffcc] */
  EAX = (r32((uint32_t)(0x1296ffcc)));
  /* 12944c45 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944c48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12944c4a jne 0x12944c57 */
  if (!C.zf) goto L_12944c57;
  /* 12944c4c mov edx, dword ptr [0x1296e4b4] */
  EDX = (r32((uint32_t)(0x1296e4b4)));
  /* 12944c52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12944c55 jmp 0x12944c5f */
  goto L_12944c5f;
L_12944c57:;
  /* 12944c57 mov eax, dword ptr [0x1296ffcc] */
  EAX = (r32((uint32_t)(0x1296ffcc)));
  /* 12944c5c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12944c5f:;
  /* 12944c5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12944c62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12944c65 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12944c68 push edx */
  push32((uint32_t)(EDX));
  /* 12944c69 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12944c6c push eax */
  push32((uint32_t)(EAX));
  /* 12944c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12944c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12944c71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944c74 push ecx */
  push32((uint32_t)(ECX));
  /* 12944c75 call 0x12944cf0 */
  push32(0x12944c7au); f_12944cf0();
  /* 12944c7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944c7d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12944c82 push 0x12969ad8 */
  push32((uint32_t)(0x12969ad8u));
  /* 12944c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12944c89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944c8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944c8f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12944c92 push ecx */
  push32((uint32_t)(ECX));
  /* 12944c93 call 0x12942b50 */
  push32(0x12944c98u); f_12942b50();
  /* 12944c98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944c9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12944c9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944ca2 jne 0x12944cae */
  if (!C.zf) goto L_12944cae;
  /* 12944ca4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12944ca6 call 0x12941ac0 */
  push32(0x12944cabu); f_12941ac0();
  /* 12944cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12944cae:;
  /* 12944cae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12944cb1 push edx */
  push32((uint32_t)(EDX));
  /* 12944cb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12944cb5 push eax */
  push32((uint32_t)(EAX));
  /* 12944cb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944cb9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944cbc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12944cbf push eax */
  push32((uint32_t)(EAX));
  /* 12944cc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12944cc4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944cc7 push edx */
  push32((uint32_t)(EDX));
  /* 12944cc8 call 0x12944cf0 */
  push32(0x12944ccdu); f_12944cf0();
  /* 12944ccd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12944cd0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944cd3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944cd6 mov dword ptr [0x1296e498], eax */
  w32((uint32_t)(0x1296e498), (EAX));
  /* 12944cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12944cde mov dword ptr [0x1296e49c], ecx */
  w32((uint32_t)(0x1296e49c), (ECX));
  /* 12944ce4 mov esp, ebp */
  ESP = (EBP);
  /* 12944ce6 pop ebp */
  EBP = (pop32());
  /* 12944ce7 ret  */
  ESPCHK(0x12944c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf0 @ 0x12944cf0 (1060 bytes, 360 insns) */
void f_12944cf0(void) {
  FTRACE(0x12944cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12944cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12944cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12944cf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944cf6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944cf9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12944cff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12944d02 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12944d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12944d0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12944d0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944d12 je 0x12944d25 */
  if (C.zf) goto L_12944d25;
  /* 12944d14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944d17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944d1a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12944d1c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944d1f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944d22 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12944d25:;
  /* 12944d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944d28 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944d2b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944d2e jne 0x12944dfd */
  if (!C.zf) goto L_12944dfd;
L_12944d34:;
  /* 12944d34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944d37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944d3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12944d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944d40 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944d43 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944d46 je 0x12944dc2 */
  if (C.zf) goto L_12944dc2;
  /* 12944d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944d4b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12944d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944d50 je 0x12944dc2 */
  if (C.zf) goto L_12944dc2;
  /* 12944d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944d55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12944d57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12944d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12944d5b mov al, byte ptr [edx + 0x1296fd01] */
  AL = (r8((uint32_t)(EDX + 0x1296fd01)));
  /* 12944d61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12944d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944d66 je 0x12944d97 */
  if (C.zf) goto L_12944d97;
  /* 12944d68 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944d6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12944d6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944d70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944d73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12944d75 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944d79 je 0x12944d97 */
  if (C.zf) goto L_12944d97;
  /* 12944d7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944d81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12944d83 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12944d85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944d88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944d8b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12944d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944d91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944d94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12944d97:;
  /* 12944d97 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944d9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12944d9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944d9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944da2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12944da4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944da8 je 0x12944dbd */
  if (C.zf) goto L_12944dbd;
  /* 12944daa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944dad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944db0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12944db2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12944db4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944db7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944dba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12944dbd:;
  /* 12944dbd jmp 0x12944d34 */
  goto L_12944d34;
L_12944dc2:;
  /* 12944dc2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944dc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12944dc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944dca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944dcd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12944dcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944dd3 je 0x12944de4 */
  if (C.zf) goto L_12944de4;
  /* 12944dd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944dd8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12944ddb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944dde add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944de1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12944de4:;
  /* 12944de4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944dea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944ded jne 0x12944df8 */
  if (!C.zf) goto L_12944df8;
  /* 12944def mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944df2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944df5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12944df8:;
  /* 12944df8 jmp 0x12944ecc */
  goto L_12944ecc;
L_12944dfd:;
  /* 12944dfd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944e00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12944e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944e05 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944e08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12944e0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944e0e je 0x12944e23 */
  if (C.zf) goto L_12944e23;
  /* 12944e10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12944e18 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12944e1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944e1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944e20 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12944e23:;
  /* 12944e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944e26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12944e28 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12944e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944e2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944e31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12944e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944e37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12944e3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12944e3f mov dl, byte ptr [ecx + 0x1296fd01] */
  DL = (r8((uint32_t)(ECX + 0x1296fd01)));
  /* 12944e45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12944e48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12944e4a je 0x12944e7b */
  if (C.zf) goto L_12944e7b;
  /* 12944e4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944e4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12944e51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944e54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944e57 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12944e59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944e5d je 0x12944e72 */
  if (C.zf) goto L_12944e72;
  /* 12944e5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944e65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12944e67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12944e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944e6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944e6f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12944e72:;
  /* 12944e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944e75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944e78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12944e7b:;
  /* 12944e7b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944e7e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12944e84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944e87 je 0x12944ea7 */
  if (C.zf) goto L_12944ea7;
  /* 12944e89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944e8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12944e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944e93 je 0x12944ea7 */
  if (C.zf) goto L_12944ea7;
  /* 12944e95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944e98 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12944e9e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944ea1 jne 0x12944dfd */
  if (!C.zf) goto L_12944dfd;
L_12944ea7:;
  /* 12944ea7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12944eaa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12944eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12944eb2 jne 0x12944ebf */
  if (!C.zf) goto L_12944ebf;
  /* 12944eb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944eb7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944eba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12944ebd jmp 0x12944ecc */
  goto L_12944ecc;
L_12944ebf:;
  /* 12944ebf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944ec3 je 0x12944ecc */
  if (C.zf) goto L_12944ecc;
  /* 12944ec5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944ec8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12944ecc:;
  /* 12944ecc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12944ed3:;
  /* 12944ed3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944ed6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12944ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944edb je 0x12944efe */
  if (C.zf) goto L_12944efe;
L_12944edd:;
  /* 12944edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944ee0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12944ee3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944ee6 je 0x12944ef3 */
  if (C.zf) goto L_12944ef3;
  /* 12944ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944eeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944eee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944ef1 jne 0x12944efe */
  if (!C.zf) goto L_12944efe;
L_12944ef3:;
  /* 12944ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944ef6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944ef9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12944efc jmp 0x12944edd */
  goto L_12944edd;
L_12944efe:;
  /* 12944efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944f01 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944f04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12944f06 jne 0x12944f0d */
  if (!C.zf) goto L_12944f0d;
  /* 12944f08 jmp 0x129450eb */
  goto L_129450eb;
L_12944f0d:;
  /* 12944f0d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944f11 je 0x12944f24 */
  if (C.zf) goto L_12944f24;
  /* 12944f13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944f16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944f19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12944f1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12944f1e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944f21 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12944f24:;
  /* 12944f24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12944f27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12944f29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944f2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12944f2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12944f31:;
  /* 12944f31 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12944f38 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12944f3f:;
  /* 12944f3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944f42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12944f45 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944f48 jne 0x12944f5e */
  if (!C.zf) goto L_12944f5e;
  /* 12944f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944f4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12944f53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944f56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944f59 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12944f5c jmp 0x12944f3f */
  goto L_12944f3f;
L_12944f5e:;
  /* 12944f5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944f61 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12944f64 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944f67 jne 0x12944fba */
  if (!C.zf) goto L_12944fba;
  /* 12944f69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944f6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12944f6e mov ecx, 2 */
  ECX = (0x2u);
  /* 12944f73 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12944f75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12944f77 jne 0x12944fb2 */
  if (!C.zf) goto L_12944fb2;
  /* 12944f79 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944f7d je 0x12944f9f */
  if (C.zf) goto L_12944f9f;
  /* 12944f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944f82 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12944f86 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944f89 jne 0x12944f96 */
  if (!C.zf) goto L_12944f96;
  /* 12944f8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944f8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944f91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12944f94 jmp 0x12944f9d */
  goto L_12944f9d;
L_12944f96:;
  /* 12944f96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12944f9d:;
  /* 12944f9d jmp 0x12944fa6 */
  goto L_12944fa6;
L_12944f9f:;
  /* 12944f9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12944fa6:;
  /* 12944fa6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12944fa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944fac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12944faf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12944fb2:;
  /* 12944fb2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944fb5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12944fb7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12944fba:;
  /* 12944fba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944fbd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12944fc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12944fc3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12944fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12944fc8 je 0x12944fee */
  if (C.zf) goto L_12944fee;
  /* 12944fca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944fce je 0x12944fdf */
  if (C.zf) goto L_12944fdf;
  /* 12944fd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944fd3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12944fd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12944fd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944fdc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12944fdf:;
  /* 12944fdf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944fe2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12944fe4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12944fe7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12944fea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12944fec jmp 0x12944fba */
  goto L_12944fba;
L_12944fee:;
  /* 12944fee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12944ff1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12944ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12944ff6 je 0x12945014 */
  if (C.zf) goto L_12945014;
  /* 12944ff8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12944ffc jne 0x12945019 */
  if (!C.zf) goto L_12945019;
  /* 12944ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945001 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12945004 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945007 je 0x12945014 */
  if (C.zf) goto L_12945014;
  /* 12945009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294500c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1294500f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945012 jne 0x12945019 */
  if (!C.zf) goto L_12945019;
L_12945014:;
  /* 12945014 jmp 0x129450c4 */
  goto L_129450c4;
L_12945019:;
  /* 12945019 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294501d je 0x129450b6 */
  if (C.zf) goto L_129450b6;
  /* 12945023 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945027 je 0x1294507d */
  if (C.zf) goto L_1294507d;
  /* 12945029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294502c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294502e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12945030 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12945032 mov cl, byte ptr [eax + 0x1296fd01] */
  CL = (r8((uint32_t)(EAX + 0x1296fd01)));
  /* 12945038 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1294503b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1294503d je 0x12945068 */
  if (C.zf) goto L_12945068;
  /* 1294503f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12945042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945045 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12945047 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12945049 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294504c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294504f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12945052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945055 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294505b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294505e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12945060 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945063 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12945066 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12945068:;
  /* 12945068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294506b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294506e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12945070 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12945072 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12945075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945078 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1294507b jmp 0x129450a9 */
  goto L_129450a9;
L_1294507d:;
  /* 1294507d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12945082 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12945084 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12945086 mov cl, byte ptr [eax + 0x1296fd01] */
  CL = (r8((uint32_t)(EAX + 0x1296fd01)));
  /* 1294508c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1294508f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12945091 je 0x129450a9 */
  if (C.zf) goto L_129450a9;
  /* 12945093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945096 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945099 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294509c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1294509f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129450a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129450a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129450a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129450a9:;
  /* 129450a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129450ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129450ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129450b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129450b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129450b6:;
  /* 129450b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129450b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129450bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129450bf jmp 0x12944f31 */
  goto L_12944f31;
L_129450c4:;
  /* 129450c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129450c8 je 0x129450d9 */
  if (C.zf) goto L_129450d9;
  /* 129450ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129450cd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 129450d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129450d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129450d6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_129450d9:;
  /* 129450d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129450dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129450de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129450e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129450e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129450e6 jmp 0x12944ed3 */
  goto L_12944ed3;
L_129450eb:;
  /* 129450eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129450ef je 0x12945103 */
  if (C.zf) goto L_12945103;
  /* 129450f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129450f4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129450fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129450fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945100 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12945103:;
  /* 12945103 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12945106 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12945108 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294510b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294510e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12945110 mov esp, ebp */
  ESP = (EBP);
  /* 12945112 pop ebp */
  EBP = (pop32());
  /* 12945113 ret  */
  ESPCHK(0x12944cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x12945120 (537 bytes, 173 insns) */
void f_12945120(void) {
  FTRACE(0x12945120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945120 push ebp */
  push32((uint32_t)(EBP));
  /* 12945121 mov ebp, esp */
  EBP = (ESP);
  /* 12945123 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945126 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1294512d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12945134 cmp dword ptr [0x1296e5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294513b jne 0x1294517a */
  if (!C.zf) goto L_1294517a;
  /* 1294513d call dword ptr [0x129702d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d8))), 0x12945143u);
  /* 12945143 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12945146 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294514a je 0x12945158 */
  if (C.zf) goto L_12945158;
  /* 1294514c mov dword ptr [0x1296e5e4], 1 */
  w32((uint32_t)(0x1296e5e4), (0x1u));
  /* 12945156 jmp 0x1294517a */
  goto L_1294517a;
L_12945158:;
  /* 12945158 call dword ptr [0x129702d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d4))), 0x1294515eu);
  /* 1294515e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12945161 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945165 je 0x12945173 */
  if (C.zf) goto L_12945173;
  /* 12945167 mov dword ptr [0x1296e5e4], 2 */
  w32((uint32_t)(0x1296e5e4), (0x2u));
  /* 12945171 jmp 0x1294517a */
  goto L_1294517a;
L_12945173:;
  /* 12945173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12945175 jmp 0x12945335 */
  goto L_12945335;
L_1294517a:;
  /* 1294517a cmp dword ptr [0x1296e5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945181 jne 0x1294527e */
  if (!C.zf) goto L_1294527e;
  /* 12945187 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294518b jne 0x129451a3 */
  if (!C.zf) goto L_129451a3;
  /* 1294518d call dword ptr [0x129702d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d8))), 0x12945193u);
  /* 12945193 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12945196 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294519a jne 0x129451a3 */
  if (!C.zf) goto L_129451a3;
  /* 1294519c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294519e jmp 0x12945335 */
  goto L_12945335;
L_129451a3:;
  /* 129451a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129451a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129451a9:;
  /* 129451a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129451ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129451ae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 129451b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129451b3 je 0x129451d5 */
  if (C.zf) goto L_129451d5;
  /* 129451b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129451b8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129451bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129451be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129451c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129451c3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 129451c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129451c8 jne 0x129451d3 */
  if (!C.zf) goto L_129451d3;
  /* 129451ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129451cd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129451d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129451d3:;
  /* 129451d3 jmp 0x129451a9 */
  goto L_129451a9;
L_129451d5:;
  /* 129451d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129451d8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129451db sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129451dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129451e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129451e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129451e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129451e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129451e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129451eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129451ee push edx */
  push32((uint32_t)(EDX));
  /* 129451ef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129451f2 push eax */
  push32((uint32_t)(EAX));
  /* 129451f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129451f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129451f7 call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x129451fdu);
  /* 129451fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12945200 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945204 je 0x12945224 */
  if (C.zf) goto L_12945224;
  /* 12945206 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12945208 push 0x12969ae4 */
  push32((uint32_t)(0x12969ae4u));
  /* 1294520d push 2 */
  push32((uint32_t)(0x2u));
  /* 1294520f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12945212 push ecx */
  push32((uint32_t)(ECX));
  /* 12945213 call 0x12942b50 */
  push32(0x12945218u); f_12942b50();
  /* 12945218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294521b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1294521e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945222 jne 0x12945235 */
  if (!C.zf) goto L_12945235;
L_12945224:;
  /* 12945224 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12945227 push edx */
  push32((uint32_t)(EDX));
  /* 12945228 call dword ptr [0x12970224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970224))), 0x1294522eu);
  /* 1294522e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12945230 jmp 0x12945335 */
  goto L_12945335;
L_12945235:;
  /* 12945235 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945237 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294523c push eax */
  push32((uint32_t)(EAX));
  /* 1294523d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12945240 push ecx */
  push32((uint32_t)(ECX));
  /* 12945241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945244 push edx */
  push32((uint32_t)(EDX));
  /* 12945245 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12945248 push eax */
  push32((uint32_t)(EAX));
  /* 12945249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1294524b push 0 */
  push32((uint32_t)(0x0u));
  /* 1294524d call dword ptr [0x129702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d0))), 0x12945253u);
  /* 12945253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12945255 jne 0x1294526c */
  if (!C.zf) goto L_1294526c;
  /* 12945257 push 2 */
  push32((uint32_t)(0x2u));
  /* 12945259 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294525c push ecx */
  push32((uint32_t)(ECX));
  /* 1294525d call 0x129435e0 */
  push32(0x12945262u); f_129435e0();
  /* 12945262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945265 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1294526c:;
  /* 1294526c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1294526f push edx */
  push32((uint32_t)(EDX));
  /* 12945270 call dword ptr [0x12970224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970224))), 0x12945276u);
  /* 12945276 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12945279 jmp 0x12945335 */
  goto L_12945335;
L_1294527e:;
  /* 1294527e cmp dword ptr [0x1296e5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1296e5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945285 jne 0x12945333 */
  if (!C.zf) goto L_12945333;
  /* 1294528b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294528f jne 0x129452a7 */
  if (!C.zf) goto L_129452a7;
  /* 12945291 call dword ptr [0x129702d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702d4))), 0x12945297u);
  /* 12945297 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1294529a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294529e jne 0x129452a7 */
  if (!C.zf) goto L_129452a7;
  /* 129452a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129452a2 jmp 0x12945335 */
  goto L_12945335;
L_129452a7:;
  /* 129452a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129452aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129452ad:;
  /* 129452ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129452b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129452b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129452b5 je 0x129452d5 */
  if (C.zf) goto L_129452d5;
  /* 129452b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129452ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129452bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129452c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129452c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129452c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129452c8 jne 0x129452d3 */
  if (!C.zf) goto L_129452d3;
  /* 129452ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129452cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129452d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129452d3:;
  /* 129452d3 jmp 0x129452ad */
  goto L_129452ad;
L_129452d5:;
  /* 129452d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129452d8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129452db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129452de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129452e1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 129452e6 push 0x12969ae4 */
  push32((uint32_t)(0x12969ae4u));
  /* 129452eb push 2 */
  push32((uint32_t)(0x2u));
  /* 129452ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129452f0 push edx */
  push32((uint32_t)(EDX));
  /* 129452f1 call 0x12942b50 */
  push32(0x129452f6u); f_12942b50();
  /* 129452f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129452f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129452fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945300 jne 0x12945310 */
  if (!C.zf) goto L_12945310;
  /* 12945302 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12945305 push eax */
  push32((uint32_t)(EAX));
  /* 12945306 call dword ptr [0x12970228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970228))), 0x1294530cu);
  /* 1294530c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294530e jmp 0x12945335 */
  goto L_12945335;
L_12945310:;
  /* 12945310 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12945313 push ecx */
  push32((uint32_t)(ECX));
  /* 12945314 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12945317 push edx */
  push32((uint32_t)(EDX));
  /* 12945318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294531b push eax */
  push32((uint32_t)(EAX));
  /* 1294531c call 0x12949430 */
  push32(0x12945321u); f_12949430();
  /* 12945321 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945324 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12945327 push ecx */
  push32((uint32_t)(ECX));
  /* 12945328 call dword ptr [0x12970228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970228))), 0x1294532eu);
  /* 1294532e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12945331 jmp 0x12945335 */
  goto L_12945335;
L_12945333:;
  /* 12945333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12945335:;
  /* 12945335 mov esp, ebp */
  ESP = (EBP);
  /* 12945337 pop ebp */
  EBP = (pop32());
  /* 12945338 ret  */
  ESPCHK(0x12945120u, _esp0);
  ESP += 4; return;
}

/* FUN_10005340 @ 0x12945340 (77 bytes, 25 insns) */
void f_12945340(void) {
  FTRACE(0x12945340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945340 push ebp */
  push32((uint32_t)(EBP));
  /* 12945341 mov ebp, esp */
  EBP = (ESP);
  /* 12945343 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945345 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1294534a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294534c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945350 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12945353 push eax */
  push32((uint32_t)(EAX));
  /* 12945354 call dword ptr [0x129702e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e0))), 0x1294535au);
  /* 1294535a mov dword ptr [0x1296fe2c], eax */
  w32((uint32_t)(0x1296fe2c), (EAX));
  /* 1294535f cmp dword ptr [0x1296fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945366 jne 0x1294536c */
  if (!C.zf) goto L_1294536c;
  /* 12945368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294536a jmp 0x1294538b */
  goto L_1294538b;
L_1294536c:;
  /* 1294536c call 0x12946df0 */
  push32(0x12945371u); f_12946df0();
  /* 12945371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12945373 jne 0x12945386 */
  if (!C.zf) goto L_12945386;
  /* 12945375 mov ecx, dword ptr [0x1296fe2c] */
  ECX = (r32((uint32_t)(0x1296fe2c)));
  /* 1294537b push ecx */
  push32((uint32_t)(ECX));
  /* 1294537c call dword ptr [0x129702dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702dc))), 0x12945382u);
  /* 12945382 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12945384 jmp 0x1294538b */
  goto L_1294538b;
L_12945386:;
  /* 12945386 mov eax, 1 */
  EAX = (0x1u);
L_1294538b:;
  /* 1294538b pop ebp */
  EBP = (pop32());
  /* 1294538c ret  */
  ESPCHK(0x12945340u, _esp0);
  ESP += 4; return;
}

/* FUN_10005390 @ 0x12945390 (156 bytes, 48 insns) */
void f_12945390(void) {
  FTRACE(0x12945390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945390 push ebp */
  push32((uint32_t)(EBP));
  /* 12945391 mov ebp, esp */
  EBP = (ESP);
  /* 12945393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945396 mov eax, dword ptr [0x1296fe28] */
  EAX = (r32((uint32_t)(0x1296fe28)));
  /* 1294539b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294539e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129453a5 jmp 0x129453b0 */
  goto L_129453b0;
L_129453a7:;
  /* 129453a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129453aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129453ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129453b0:;
  /* 129453b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129453b3 cmp edx, dword ptr [0x1296fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129453b9 jge 0x12945406 */
  if ((C.sf==C.of)) goto L_12945406;
  /* 129453bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 129453c0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 129453c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129453c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129453cb push ecx */
  push32((uint32_t)(ECX));
  /* 129453cc call dword ptr [0x129702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e8))), 0x129453d2u);
  /* 129453d2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129453d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129453d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129453dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129453df push eax */
  push32((uint32_t)(EAX));
  /* 129453e0 call dword ptr [0x129702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e8))), 0x129453e6u);
  /* 129453e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129453e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129453ec push edx */
  push32((uint32_t)(EDX));
  /* 129453ed push 0 */
  push32((uint32_t)(0x0u));
  /* 129453ef mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 129453f4 push eax */
  push32((uint32_t)(EAX));
  /* 129453f5 call dword ptr [0x129702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e4))), 0x129453fbu);
  /* 129453fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129453fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945401 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12945404 jmp 0x129453a7 */
  goto L_129453a7;
L_12945406:;
  /* 12945406 mov edx, dword ptr [0x1296fe28] */
  EDX = (r32((uint32_t)(0x1296fe28)));
  /* 1294540c push edx */
  push32((uint32_t)(EDX));
  /* 1294540d push 0 */
  push32((uint32_t)(0x0u));
  /* 1294540f mov eax, dword ptr [0x1296fe2c] */
  EAX = (r32((uint32_t)(0x1296fe2c)));
  /* 12945414 push eax */
  push32((uint32_t)(EAX));
  /* 12945415 call dword ptr [0x129702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702e4))), 0x1294541bu);
  /* 1294541b mov ecx, dword ptr [0x1296fe2c] */
  ECX = (r32((uint32_t)(0x1296fe2c)));
  /* 12945421 push ecx */
  push32((uint32_t)(ECX));
  /* 12945422 call dword ptr [0x129702dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702dc))), 0x12945428u);
  /* 12945428 mov esp, ebp */
  ESP = (EBP);
  /* 1294542a pop ebp */
  EBP = (pop32());
  /* 1294542b ret  */
  ESPCHK(0x12945390u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12945430 (73 bytes, 19 insns) */
void f_12945430(void) {
  FTRACE(0x12945430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945430 push ebp */
  push32((uint32_t)(EBP));
  /* 12945431 mov ebp, esp */
  EBP = (ESP);
  /* 12945433 cmp dword ptr [0x1296e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294543a je 0x1294544e */
  if (C.zf) goto L_1294544e;
  /* 1294543c cmp dword ptr [0x1296e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945443 jne 0x12945477 */
  if (!C.zf) goto L_12945477;
  /* 12945445 cmp dword ptr [0x1296e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294544c jne 0x12945477 */
  if (!C.zf) goto L_12945477;
L_1294544e:;
  /* 1294544e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12945453 call 0x12945480 */
  push32(0x12945458u); f_12945480();
  /* 12945458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294545b cmp dword ptr [0x1296e5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945462 je 0x1294546a */
  if (C.zf) goto L_1294546a;
  /* 12945464 call dword ptr [0x1296e5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e5e8))), 0x1294546au);
L_1294546a:;
  /* 1294546a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1294546f call 0x12945480 */
  push32(0x12945474u); f_12945480();
  /* 12945474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12945477:;
  /* 12945477 pop ebp */
  EBP = (pop32());
  /* 12945478 ret  */
  ESPCHK(0x12945430u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x12945480 (447 bytes, 131 insns) */
void f_12945480(void) {
  FTRACE(0x12945480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945480 push ebp */
  push32((uint32_t)(EBP));
  /* 12945481 mov ebp, esp */
  EBP = (ESP);
  /* 12945483 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945489 push ebx */
  push32((uint32_t)(EBX));
  /* 1294548a push esi */
  push32((uint32_t)(ESI));
  /* 1294548b push edi */
  push32((uint32_t)(EDI));
  /* 1294548c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12945493 jmp 0x1294549e */
  goto L_1294549e;
L_12945495:;
  /* 12945495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945498 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294549b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1294549e:;
  /* 1294549e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129454a2 jae 0x129454b7 */
  if (!C.cf) goto L_129454b7;
  /* 129454a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129454a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129454aa cmp edx, dword ptr [ecx*8 + 0x1296cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1296cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129454b1 jne 0x129454b5 */
  if (!C.zf) goto L_129454b5;
  /* 129454b3 jmp 0x129454b7 */
  goto L_129454b7;
L_129454b5:;
  /* 129454b5 jmp 0x12945495 */
  goto L_12945495;
L_129454b7:;
  /* 129454b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129454ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129454bd cmp ecx, dword ptr [eax*8 + 0x1296cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1296cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129454c4 jne 0x12945638 */
  if (!C.zf) goto L_12945638;
  /* 129454ca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129454d1 je 0x129454f4 */
  if (C.zf) goto L_129454f4;
  /* 129454d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129454d6 mov eax, dword ptr [edx*8 + 0x1296cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1296cab4)));
  /* 129454dd push eax */
  push32((uint32_t)(EAX));
  /* 129454de push 0 */
  push32((uint32_t)(0x0u));
  /* 129454e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129454e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129454e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129454e6 call 0x12941c10 */
  push32(0x129454ebu); f_12941c10();
  /* 129454eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129454ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129454f1 jne 0x129454f4 */
  if (!C.zf) goto L_129454f4;
  /* 129454f3 int3  */
  x86_unimpl("int3 @ 0x129454f3");
L_129454f4:;
  /* 129454f4 cmp dword ptr [0x1296e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129454fb je 0x1294550f */
  if (C.zf) goto L_1294550f;
  /* 129454fd cmp dword ptr [0x1296e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945504 jne 0x12945548 */
  if (!C.zf) goto L_12945548;
  /* 12945506 cmp dword ptr [0x1296e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1296e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294550d jne 0x12945548 */
  if (!C.zf) goto L_12945548;
L_1294550f:;
  /* 1294550f push 0 */
  push32((uint32_t)(0x0u));
  /* 12945511 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12945514 push ecx */
  push32((uint32_t)(ECX));
  /* 12945515 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945518 mov eax, dword ptr [edx*8 + 0x1296cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1296cab4)));
  /* 1294551f push eax */
  push32((uint32_t)(EAX));
  /* 12945520 call 0x12945980 */
  push32(0x12945525u); f_12945980();
  /* 12945525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945528 push eax */
  push32((uint32_t)(EAX));
  /* 12945529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294552c mov edx, dword ptr [ecx*8 + 0x1296cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1296cab4)));
  /* 12945533 push edx */
  push32((uint32_t)(EDX));
  /* 12945534 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12945536 call dword ptr [0x12970260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970260))), 0x1294553cu);
  /* 1294553c push eax */
  push32((uint32_t)(EAX));
  /* 1294553d call dword ptr [0x12970264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970264))), 0x12945543u);
  /* 12945543 jmp 0x12945638 */
  goto L_12945638;
L_12945548:;
  /* 12945548 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294554f je 0x12945638 */
  if (C.zf) goto L_12945638;
  /* 12945555 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1294555a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12945560 push eax */
  push32((uint32_t)(EAX));
  /* 12945561 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945563 call dword ptr [0x1297027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1297027c))), 0x12945569u);
  /* 12945569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294556b jne 0x12945581 */
  if (!C.zf) goto L_12945581;
  /* 1294556d push 0x1296934c */
  push32((uint32_t)(0x1296934cu));
  /* 12945572 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12945578 push ecx */
  push32((uint32_t)(ECX));
  /* 12945579 call 0x12945b00 */
  push32(0x1294557eu); f_12945b00();
  /* 1294557e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12945581:;
  /* 12945581 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12945587 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1294558a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294558d push eax */
  push32((uint32_t)(EAX));
  /* 1294558e call 0x12945980 */
  push32(0x12945593u); f_12945980();
  /* 12945593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945596 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945599 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294559c jbe 0x129455ca */
  if ((C.cf||C.zf)) goto L_129455ca;
  /* 1294559e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 129455a4 push ecx */
  push32((uint32_t)(ECX));
  /* 129455a5 call 0x12945980 */
  push32(0x129455aau); f_12945980();
  /* 129455aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129455ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129455b0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 129455b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129455b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 129455b9 push 0x12969348 */
  push32((uint32_t)(0x12969348u));
  /* 129455be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129455c1 push ecx */
  push32((uint32_t)(ECX));
  /* 129455c2 call 0x12946370 */
  push32(0x129455c7u); f_12946370();
  /* 129455c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129455ca:;
  /* 129455ca push 0x12969da0 */
  push32((uint32_t)(0x12969da0u));
  /* 129455cf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 129455d5 push edx */
  push32((uint32_t)(EDX));
  /* 129455d6 call 0x12945b00 */
  push32(0x129455dbu); f_12945b00();
  /* 129455db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129455de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129455e1 push eax */
  push32((uint32_t)(EAX));
  /* 129455e2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 129455e8 push ecx */
  push32((uint32_t)(ECX));
  /* 129455e9 call 0x12945b10 */
  push32(0x129455eeu); f_12945b10();
  /* 129455ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129455f1 push 0x129692c0 */
  push32((uint32_t)(0x129692c0u));
  /* 129455f6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 129455fc push edx */
  push32((uint32_t)(EDX));
  /* 129455fd call 0x12945b10 */
  push32(0x12945602u); f_12945b10();
  /* 12945602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945605 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945608 mov ecx, dword ptr [eax*8 + 0x1296cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1296cab4)));
  /* 1294560f push ecx */
  push32((uint32_t)(ECX));
  /* 12945610 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12945616 push edx */
  push32((uint32_t)(EDX));
  /* 12945617 call 0x12945b10 */
  push32(0x1294561cu); f_12945b10();
  /* 1294561c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294561f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12945624 push 0x12969d78 */
  push32((uint32_t)(0x12969d78u));
  /* 12945629 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1294562f push eax */
  push32((uint32_t)(EAX));
  /* 12945630 call 0x129462b0 */
  push32(0x12945635u); f_129462b0();
  /* 12945635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12945638:;
  /* 12945638 pop edi */
  EDI = (pop32());
  /* 12945639 pop esi */
  ESI = (pop32());
  /* 1294563a pop ebx */
  EBX = (pop32());
  /* 1294563b mov esp, ebp */
  ESP = (EBP);
  /* 1294563d pop ebp */
  EBP = (pop32());
  /* 1294563e ret  */
  ESPCHK(0x12945480u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12945640 (80 bytes, 27 insns) */
void f_12945640(void) {
  FTRACE(0x12945640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945640 push ebp */
  push32((uint32_t)(EBP));
  /* 12945641 mov ebp, esp */
  EBP = (ESP);
  /* 12945643 push ecx */
  push32((uint32_t)(ECX));
  /* 12945644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1294564b jmp 0x12945656 */
  goto L_12945656;
L_1294564d:;
  /* 1294564d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945650 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945653 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12945656:;
  /* 12945656 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294565a jae 0x1294566f */
  if (!C.cf) goto L_1294566f;
  /* 1294565c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294565f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945662 cmp edx, dword ptr [ecx*8 + 0x1296cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1296cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945669 jne 0x1294566d */
  if (!C.zf) goto L_1294566d;
  /* 1294566b jmp 0x1294566f */
  goto L_1294566f;
L_1294566d:;
  /* 1294566d jmp 0x1294564d */
  goto L_1294564d;
L_1294566f:;
  /* 1294566f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945675 cmp ecx, dword ptr [eax*8 + 0x1296cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1296cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294567c jne 0x1294568a */
  if (!C.zf) goto L_1294568a;
  /* 1294567e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945681 mov eax, dword ptr [edx*8 + 0x1296cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1296cab4)));
  /* 12945688 jmp 0x1294568c */
  goto L_1294568c;
L_1294568a:;
  /* 1294568a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1294568c:;
  /* 1294568c mov esp, ebp */
  ESP = (EBP);
  /* 1294568e pop ebp */
  EBP = (pop32());
  /* 1294568f ret  */
  ESPCHK(0x12945640u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12945690 (66 bytes, 28 insns) */
void f_12945690(void) {
  FTRACE(0x12945690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945690 push ebp */
  push32((uint32_t)(EBP));
  /* 12945691 mov ebp, esp */
  EBP = (ESP);
  /* 12945693 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945697 jne 0x129456b7 */
  if (!C.zf) goto L_129456b7;
  /* 12945699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294569d jge 0x129456b7 */
  if ((C.sf==C.of)) goto L_129456b7;
  /* 1294569f push 1 */
  push32((uint32_t)(0x1u));
  /* 129456a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129456a4 push eax */
  push32((uint32_t)(EAX));
  /* 129456a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129456a8 push ecx */
  push32((uint32_t)(ECX));
  /* 129456a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129456ac push edx */
  push32((uint32_t)(EDX));
  /* 129456ad call 0x129456e0 */
  push32(0x129456b2u); f_129456e0();
  /* 129456b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129456b5 jmp 0x129456cd */
  goto L_129456cd;
L_129456b7:;
  /* 129456b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129456b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129456bc push eax */
  push32((uint32_t)(EAX));
  /* 129456bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129456c0 push ecx */
  push32((uint32_t)(ECX));
  /* 129456c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129456c4 push edx */
  push32((uint32_t)(EDX));
  /* 129456c5 call 0x129456e0 */
  push32(0x129456cau); f_129456e0();
  /* 129456ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129456cd:;
  /* 129456cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129456d0 pop ebp */
  EBP = (pop32());
  /* 129456d1 ret  */
  ESPCHK(0x12945690u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x129456e0 (194 bytes, 71 insns) */
void f_129456e0(void) {
  FTRACE(0x129456e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129456e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129456e1 mov ebp, esp */
  EBP = (ESP);
  /* 129456e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129456e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129456e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129456ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129456f0 je 0x12945709 */
  if (C.zf) goto L_12945709;
  /* 129456f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129456f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 129456f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129456fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129456fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12945701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945704 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12945706 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12945709:;
  /* 12945709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294570c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1294570f:;
  /* 1294570f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945712 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12945714 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12945717 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1294571a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294571d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294571f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12945722 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12945725 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945729 jbe 0x12945741 */
  if ((C.cf||C.zf)) goto L_12945741;
  /* 1294572b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294572e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945734 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12945736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945739 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294573c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1294573f jmp 0x12945755 */
  goto L_12945755;
L_12945741:;
  /* 12945741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12945744 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294574a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1294574c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294574f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945752 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12945755:;
  /* 12945755 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945759 ja 0x1294570f */
  if ((!C.cf&&!C.zf)) goto L_1294570f;
  /* 1294575b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294575e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12945761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945764 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945767 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294576a:;
  /* 1294576a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294576d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294576f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12945772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945775 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945778 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294577a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1294577c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294577f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12945782 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12945784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945787 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1294578a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294578d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945793 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12945796 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945799 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294579c jb 0x1294576a */
  if (C.cf) goto L_1294576a;
  /* 1294579e mov esp, ebp */
  ESP = (EBP);
  /* 129457a0 pop ebp */
  EBP = (pop32());
  /* 129457a1 ret  */
  ESPCHK(0x129456e0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x129457b0 (63 bytes, 24 insns) */
void f_129457b0(void) {
  FTRACE(0x129457b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129457b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129457b1 mov ebp, esp */
  EBP = (ESP);
  /* 129457b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129457b4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129457b8 jne 0x129457c9 */
  if (!C.zf) goto L_129457c9;
  /* 129457ba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129457be jge 0x129457c9 */
  if ((C.sf==C.of)) goto L_129457c9;
  /* 129457c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129457c7 jmp 0x129457d0 */
  goto L_129457d0;
L_129457c9:;
  /* 129457c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129457d0:;
  /* 129457d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129457d3 push eax */
  push32((uint32_t)(EAX));
  /* 129457d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129457d7 push ecx */
  push32((uint32_t)(ECX));
  /* 129457d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129457db push edx */
  push32((uint32_t)(EDX));
  /* 129457dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129457df push eax */
  push32((uint32_t)(EAX));
  /* 129457e0 call 0x129456e0 */
  push32(0x129457e5u); f_129456e0();
  /* 129457e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129457e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129457eb mov esp, ebp */
  ESP = (EBP);
  /* 129457ed pop ebp */
  EBP = (pop32());
  /* 129457ee ret  */
  ESPCHK(0x129457b0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x129457f0 (30 bytes, 14 insns) */
void f_129457f0(void) {
  FTRACE(0x129457f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129457f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129457f1 mov ebp, esp */
  EBP = (ESP);
  /* 129457f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129457f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129457f8 push eax */
  push32((uint32_t)(EAX));
  /* 129457f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129457fc push ecx */
  push32((uint32_t)(ECX));
  /* 129457fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945800 push edx */
  push32((uint32_t)(EDX));
  /* 12945801 call 0x129456e0 */
  push32(0x12945806u); f_129456e0();
  /* 12945806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294580c pop ebp */
  EBP = (pop32());
  /* 1294580d ret  */
  ESPCHK(0x129457f0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12945810 (72 bytes, 28 insns) */
void f_12945810(void) {
  FTRACE(0x12945810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945810 push ebp */
  push32((uint32_t)(EBP));
  /* 12945811 mov ebp, esp */
  EBP = (ESP);
  /* 12945813 push ecx */
  push32((uint32_t)(ECX));
  /* 12945814 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945818 jne 0x12945831 */
  if (!C.zf) goto L_12945831;
  /* 1294581a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294581e jg 0x12945831 */
  if ((!C.zf&&C.sf==C.of)) goto L_12945831;
  /* 12945820 jl 0x12945828 */
  if ((C.sf!=C.of)) goto L_12945828;
  /* 12945822 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945826 jae 0x12945831 */
  if (!C.cf) goto L_12945831;
L_12945828:;
  /* 12945828 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1294582f jmp 0x12945838 */
  goto L_12945838;
L_12945831:;
  /* 12945831 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12945838:;
  /* 12945838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294583b push eax */
  push32((uint32_t)(EAX));
  /* 1294583c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294583f push ecx */
  push32((uint32_t)(ECX));
  /* 12945840 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12945843 push edx */
  push32((uint32_t)(EDX));
  /* 12945844 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945847 push eax */
  push32((uint32_t)(EAX));
  /* 12945848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294584b push ecx */
  push32((uint32_t)(ECX));
  /* 1294584c call 0x12945860 */
  push32(0x12945851u); f_12945860();
  /* 12945851 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12945854 mov esp, ebp */
  ESP = (EBP);
  /* 12945856 pop ebp */
  EBP = (pop32());
  /* 12945857 ret  */
  ESPCHK(0x12945810u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12945860 (242 bytes, 91 insns) */
void f_12945860(void) {
  FTRACE(0x12945860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945860 push ebp */
  push32((uint32_t)(EBP));
  /* 12945861 mov ebp, esp */
  EBP = (ESP);
  /* 12945863 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945866 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12945869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294586c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945870 je 0x12945894 */
  if (C.zf) goto L_12945894;
  /* 12945872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945875 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12945878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294587b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294587e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12945881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945884 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12945886 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945889 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294588c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1294588e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12945891 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12945894:;
  /* 12945894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945897 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1294589a:;
  /* 1294589a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1294589d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1294589f push ecx */
  push32((uint32_t)(ECX));
  /* 129458a0 push eax */
  push32((uint32_t)(EAX));
  /* 129458a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129458a4 push edx */
  push32((uint32_t)(EDX));
  /* 129458a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129458a8 push eax */
  push32((uint32_t)(EAX));
  /* 129458a9 call 0x129497e0 */
  push32(0x129458aeu); f_129497e0();
  /* 129458ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129458b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129458b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129458b6 push edx */
  push32((uint32_t)(EDX));
  /* 129458b7 push ecx */
  push32((uint32_t)(ECX));
  /* 129458b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129458bb push eax */
  push32((uint32_t)(EAX));
  /* 129458bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129458bf push ecx */
  push32((uint32_t)(ECX));
  /* 129458c0 call 0x12949770 */
  push32(0x129458c5u); f_12949770();
  /* 129458c5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129458c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129458cb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129458cf jbe 0x129458e7 */
  if ((C.cf||C.zf)) goto L_129458e7;
  /* 129458d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129458d4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129458d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129458da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129458dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129458df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129458e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129458e5 jmp 0x129458fb */
  goto L_129458fb;
L_129458e7:;
  /* 129458e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129458ea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129458ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129458f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129458f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129458f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129458f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129458fb:;
  /* 129458fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129458ff ja 0x1294589a */
  if ((!C.cf&&!C.zf)) goto L_1294589a;
  /* 12945901 jb 0x12945909 */
  if (C.cf) goto L_12945909;
  /* 12945903 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945907 ja 0x1294589a */
  if ((!C.cf&&!C.zf)) goto L_1294589a;
L_12945909:;
  /* 12945909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294590c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1294590f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945912 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945915 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12945918:;
  /* 12945918 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294591b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1294591d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12945920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945923 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945926 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12945928 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1294592a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294592d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12945930 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12945932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945935 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945938 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1294593b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294593e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945941 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12945944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945947 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294594a jb 0x12945918 */
  if (C.cf) goto L_12945918;
  /* 1294594c mov esp, ebp */
  ESP = (EBP);
  /* 1294594e pop ebp */
  EBP = (pop32());
  /* 1294594f ret 0x14 */
  ESPCHK(0x12945860u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12945960 (31 bytes, 15 insns) */
void f_12945960(void) {
  FTRACE(0x12945960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945960 push ebp */
  push32((uint32_t)(EBP));
  /* 12945961 mov ebp, esp */
  EBP = (ESP);
  /* 12945963 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945965 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12945968 push eax */
  push32((uint32_t)(EAX));
  /* 12945969 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294596c push ecx */
  push32((uint32_t)(ECX));
  /* 1294596d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945970 push edx */
  push32((uint32_t)(EDX));
  /* 12945971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945974 push eax */
  push32((uint32_t)(EAX));
  /* 12945975 call 0x12945860 */
  push32(0x1294597au); f_12945860();
  /* 1294597a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1294597d pop ebp */
  EBP = (pop32());
  /* 1294597e ret  */
  ESPCHK(0x12945960u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12945980 (123 bytes, 44 insns) */
void f_12945980(void) {
  FTRACE(0x12945980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945980 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12945984 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1294598a je 0x129459a0 */
  if (C.zf) goto L_129459a0;
L_1294598c:;
  /* 1294598c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1294598e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1294598f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12945991 je 0x129459d3 */
  if (C.zf) goto L_129459d3;
  /* 12945993 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12945999 jne 0x1294598c */
  if (!C.zf) goto L_1294598c;
  /* 1294599b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_129459a0:;
  /* 129459a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129459a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 129459a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129459a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129459ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129459ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129459b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 129459b6 je 0x129459a0 */
  if (C.zf) goto L_129459a0;
  /* 129459b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 129459bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129459bd je 0x129459f1 */
  if (C.zf) goto L_129459f1;
  /* 129459bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 129459c1 je 0x129459e7 */
  if (C.zf) goto L_129459e7;
  /* 129459c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 129459c8 je 0x129459dd */
  if (C.zf) goto L_129459dd;
  /* 129459ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 129459cf je 0x129459d3 */
  if (C.zf) goto L_129459d3;
  /* 129459d1 jmp 0x129459a0 */
  goto L_129459a0;
L_129459d3:;
  /* 129459d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 129459d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129459da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129459dc ret  */
  ESPCHK(0x12945980u, _esp0);
  ESP += 4; return;
L_129459dd:;
  /* 129459dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 129459e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129459e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129459e6 ret  */
  ESPCHK(0x12945980u, _esp0);
  ESP += 4; return;
L_129459e7:;
  /* 129459e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 129459ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129459ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129459f0 ret  */
  ESPCHK(0x12945980u, _esp0);
  ESP += 4; return;
L_129459f1:;
  /* 129459f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 129459f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129459f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129459fa ret  */
  ESPCHK(0x12945980u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x12945a00 (249 bytes, 93 insns) */
void f_12945a00(void) {
  FTRACE(0x12945a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12945a01 mov ebp, esp */
  EBP = (ESP);
  /* 12945a03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945a06 push ebx */
  push32((uint32_t)(EBX));
  /* 12945a07 push esi */
  push32((uint32_t)(ESI));
  /* 12945a08 push edi */
  push32((uint32_t)(EDI));
  /* 12945a09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12945a0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12945a0f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12945a12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12945a15:;
  /* 12945a15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945a19 jne 0x12945a39 */
  if (!C.zf) goto L_12945a39;
  /* 12945a1b push 0x12969dd8 */
  push32((uint32_t)(0x12969dd8u));
  /* 12945a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945a22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12945a24 push 0x12969dcc */
  push32((uint32_t)(0x12969dccu));
  /* 12945a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12945a2b call 0x12941c10 */
  push32(0x12945a30u); f_12941c10();
  /* 12945a30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945a33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945a36 jne 0x12945a39 */
  if (!C.zf) goto L_12945a39;
  /* 12945a38 int3  */
  x86_unimpl("int3 @ 0x12945a38");
L_12945a39:;
  /* 12945a39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12945a3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12945a3d jne 0x12945a15 */
  if (!C.zf) goto L_12945a15;
L_12945a3f:;
  /* 12945a3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945a43 jne 0x12945a63 */
  if (!C.zf) goto L_12945a63;
  /* 12945a45 push 0x12969dbc */
  push32((uint32_t)(0x12969dbcu));
  /* 12945a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12945a4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12945a4e push 0x12969dcc */
  push32((uint32_t)(0x12969dccu));
  /* 12945a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12945a55 call 0x12941c10 */
  push32(0x12945a5au); f_12941c10();
  /* 12945a5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945a5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945a60 jne 0x12945a63 */
  if (!C.zf) goto L_12945a63;
  /* 12945a62 int3  */
  x86_unimpl("int3 @ 0x12945a62");
L_12945a63:;
  /* 12945a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12945a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12945a67 jne 0x12945a3f */
  if (!C.zf) goto L_12945a3f;
  /* 12945a69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945a6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12945a73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945a79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12945a7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945a82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12945a84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945a87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945a8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12945a8d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12945a90 push edx */
  push32((uint32_t)(EDX));
  /* 12945a91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12945a94 push eax */
  push32((uint32_t)(EAX));
  /* 12945a95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945a98 push ecx */
  push32((uint32_t)(ECX));
  /* 12945a99 call 0x12949ae0 */
  push32(0x12945a9eu); f_12949ae0();
  /* 12945a9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945aa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12945aa4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945aa7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12945aaa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945aad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ab0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12945ab3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ab6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945aba jl 0x12945ade */
  if ((C.sf!=C.of)) goto L_12945ade;
  /* 12945abc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945abf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12945ac1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12945ac4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12945ac6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12945acc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12945acf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ad2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12945ad4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945ad7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ada mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12945adc jmp 0x12945aef */
  goto L_12945aef;
L_12945ade:;
  /* 12945ade mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ae1 push eax */
  push32((uint32_t)(EAX));
  /* 12945ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945ae4 call 0x12949860 */
  push32(0x12945ae9u); f_12949860();
  /* 12945ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945aec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12945aef:;
  /* 12945aef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12945af2 pop edi */
  EDI = (pop32());
  /* 12945af3 pop esi */
  ESI = (pop32());
  /* 12945af4 pop ebx */
  EBX = (pop32());
  /* 12945af5 mov esp, ebp */
  ESP = (EBP);
  /* 12945af7 pop ebp */
  EBP = (pop32());
  /* 12945af8 ret  */
  ESPCHK(0x12945a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b00 @ 0x12945b00 (7 bytes, 3 insns) */
void f_12945b00(void) {
  FTRACE(0x12945b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945b00 push edi */
  push32((uint32_t)(EDI));
  /* 12945b01 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12945b05 jmp 0x12945b71 */
  jmp_ind(0x12945b71u); return;
}

/* FUN_10005b10 @ 0x12945b10 (224 bytes, 84 insns) */
void f_12945b10(void) {
  FTRACE(0x12945b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945b10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12945b14 push edi */
  push32((uint32_t)(EDI));
  /* 12945b15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12945b1b je 0x12945b2c */
  if (C.zf) goto L_12945b2c;
L_12945b1d:;
  /* 12945b1d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12945b1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12945b20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12945b22 je 0x12945b5f */
  if (C.zf) goto L_12945b5f;
  /* 12945b24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12945b2a jne 0x12945b1d */
  if (!C.zf) goto L_12945b1d;
L_12945b2c:;
  /* 12945b2c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12945b2e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12945b33 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945b35 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12945b38 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12945b3a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945b3d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12945b42 je 0x12945b2c */
  if (C.zf) goto L_12945b2c;
  /* 12945b44 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12945b47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12945b49 je 0x12945b6e */
  if (C.zf) goto L_12945b6e;
  /* 12945b4b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12945b4d je 0x12945b69 */
  if (C.zf) goto L_12945b69;
  /* 12945b4f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12945b54 je 0x12945b64 */
  if (C.zf) goto L_12945b64;
  /* 12945b56 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12945b5b je 0x12945b5f */
  if (C.zf) goto L_12945b5f;
  /* 12945b5d jmp 0x12945b2c */
  goto L_12945b2c;
L_12945b5f:;
  /* 12945b5f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12945b62 jmp 0x12945b71 */
  goto L_12945b71;
L_12945b64:;
  /* 12945b64 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12945b67 jmp 0x12945b71 */
  goto L_12945b71;
L_12945b69:;
  /* 12945b69 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12945b6c jmp 0x12945b71 */
  goto L_12945b71;
L_12945b6e:;
  /* 12945b6e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12945b71:;
  /* 12945b71 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12945b75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12945b7b je 0x12945b96 */
  if (C.zf) goto L_12945b96;
L_12945b7d:;
  /* 12945b7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12945b7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12945b80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12945b82 je 0x12945be8 */
  if (C.zf) goto L_12945be8;
  /* 12945b84 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12945b86 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12945b87 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12945b8d jne 0x12945b7d */
  if (!C.zf) goto L_12945b7d;
  /* 12945b8f jmp 0x12945b96 */
  goto L_12945b96;
L_12945b91:;
  /* 12945b91 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12945b93 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12945b96:;
  /* 12945b96 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12945b9b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12945b9d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945b9f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12945ba2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12945ba4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12945ba6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945ba9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12945bae je 0x12945b91 */
  if (C.zf) goto L_12945b91;
  /* 12945bb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12945bb2 je 0x12945be8 */
  if (C.zf) goto L_12945be8;
  /* 12945bb4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12945bb6 je 0x12945bdf */
  if (C.zf) goto L_12945bdf;
  /* 12945bb8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12945bbe je 0x12945bd2 */
  if (C.zf) goto L_12945bd2;
  /* 12945bc0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12945bc6 je 0x12945bca */
  if (C.zf) goto L_12945bca;
  /* 12945bc8 jmp 0x12945b91 */
  goto L_12945b91;
L_12945bca:;
  /* 12945bca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12945bcc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12945bd0 pop edi */
  EDI = (pop32());
  /* 12945bd1 ret  */
  ESPCHK(0x12945b10u, _esp0);
  ESP += 4; return;
L_12945bd2:;
  /* 12945bd2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12945bd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12945bd9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12945bdd pop edi */
  EDI = (pop32());
  /* 12945bde ret  */
  ESPCHK(0x12945b10u, _esp0);
  ESP += 4; return;
L_12945bdf:;
  /* 12945bdf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12945be2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12945be6 pop edi */
  EDI = (pop32());
  /* 12945be7 ret  */
  ESPCHK(0x12945b10u, _esp0);
  ESP += 4; return;
L_12945be8:;
  /* 12945be8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12945bea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12945bee pop edi */
  EDI = (pop32());
  /* 12945bef ret  */
  ESPCHK(0x12945b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x12945bf0 (243 bytes, 91 insns) */
void f_12945bf0(void) {
  FTRACE(0x12945bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12945bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12945bf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12945bf7 push esi */
  push32((uint32_t)(ESI));
  /* 12945bf8 push edi */
  push32((uint32_t)(EDI));
  /* 12945bf9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12945bfc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12945bff:;
  /* 12945bff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945c03 jne 0x12945c23 */
  if (!C.zf) goto L_12945c23;
  /* 12945c05 push 0x12969dd8 */
  push32((uint32_t)(0x12969dd8u));
  /* 12945c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12945c0c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12945c0e push 0x12969de8 */
  push32((uint32_t)(0x12969de8u));
  /* 12945c13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12945c15 call 0x12941c10 */
  push32(0x12945c1au); f_12941c10();
  /* 12945c1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945c1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945c20 jne 0x12945c23 */
  if (!C.zf) goto L_12945c23;
  /* 12945c22 int3  */
  x86_unimpl("int3 @ 0x12945c22");
L_12945c23:;
  /* 12945c23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12945c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12945c27 jne 0x12945bff */
  if (!C.zf) goto L_12945bff;
L_12945c29:;
  /* 12945c29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945c2d jne 0x12945c4d */
  if (!C.zf) goto L_12945c4d;
  /* 12945c2f push 0x12969dbc */
  push32((uint32_t)(0x12969dbcu));
  /* 12945c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12945c36 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12945c38 push 0x12969de8 */
  push32((uint32_t)(0x12969de8u));
  /* 12945c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12945c3f call 0x12941c10 */
  push32(0x12945c44u); f_12941c10();
  /* 12945c44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945c47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945c4a jne 0x12945c4d */
  if (!C.zf) goto L_12945c4d;
  /* 12945c4c int3  */
  x86_unimpl("int3 @ 0x12945c4c");
L_12945c4d:;
  /* 12945c4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12945c4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12945c51 jne 0x12945c29 */
  if (!C.zf) goto L_12945c29;
  /* 12945c53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945c56 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12945c5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945c60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945c63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12945c66 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945c69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12945c6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945c71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945c74 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12945c77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12945c7a push ecx */
  push32((uint32_t)(ECX));
  /* 12945c7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12945c7e push edx */
  push32((uint32_t)(EDX));
  /* 12945c7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945c82 push eax */
  push32((uint32_t)(EAX));
  /* 12945c83 call 0x12949ae0 */
  push32(0x12945c88u); f_12949ae0();
  /* 12945c88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945c8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12945c8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945c91 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12945c94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945c97 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945c9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12945c9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ca0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945ca4 jl 0x12945cc8 */
  if ((C.sf!=C.of)) goto L_12945cc8;
  /* 12945ca6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ca9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12945cab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12945cae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12945cb0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12945cb6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12945cb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945cbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12945cbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945cc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945cc4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12945cc6 jmp 0x12945cd9 */
  goto L_12945cd9;
L_12945cc8:;
  /* 12945cc8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12945ccb push edx */
  push32((uint32_t)(EDX));
  /* 12945ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 12945cce call 0x12949860 */
  push32(0x12945cd3u); f_12949860();
  /* 12945cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945cd6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12945cd9:;
  /* 12945cd9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12945cdc pop edi */
  EDI = (pop32());
  /* 12945cdd pop esi */
  ESI = (pop32());
  /* 12945cde pop ebx */
  EBX = (pop32());
  /* 12945cdf mov esp, ebp */
  ESP = (EBP);
  /* 12945ce1 pop ebp */
  EBP = (pop32());
  /* 12945ce2 ret  */
  ESPCHK(0x12945bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cf0 @ 0x12945cf0 (47 bytes, 17 insns) */
void f_12945cf0(void) {
  FTRACE(0x12945cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12945cf1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945cf6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12945cfa jb 0x12945d10 */
  if (C.cf) goto L_12945d10;
L_12945cfc:;
  /* 12945cfc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945d02 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945d07 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12945d09 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d0e jae 0x12945cfc */
  if (!C.cf) goto L_12945cfc;
L_12945d10:;
  /* 12945d10 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945d12 mov eax, esp */
  EAX = (ESP);
  /* 12945d14 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12945d16 mov esp, ecx */
  ESP = (ECX);
  /* 12945d18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12945d1a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12945d1d push eax */
  push32((uint32_t)(EAX));
  /* 12945d1e ret  */
  ESPCHK(0x12945cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d20 @ 0x12945d20 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12945d20(void) {
  FTRACE(0x12945d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12945d21 mov ebp, esp */
  EBP = (ESP);
  /* 12945d23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945d26 push esi */
  push32((uint32_t)(ESI));
  /* 12945d27 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d2b je 0x12945d33 */
  if (C.zf) goto L_12945d33;
  /* 12945d2d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d31 jne 0x12945d38 */
  if (!C.zf) goto L_12945d38;
L_12945d33:;
  /* 12945d33 jmp 0x12945f08 */
  goto L_12945f08;
L_12945d38:;
  /* 12945d38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d3c je 0x12945d54 */
  if (C.zf) goto L_12945d54;
  /* 12945d3e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d42 je 0x12945d54 */
  if (C.zf) goto L_12945d54;
  /* 12945d44 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d48 je 0x12945d54 */
  if (C.zf) goto L_12945d54;
  /* 12945d4a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d4e jne 0x12945e31 */
  if (!C.zf) goto L_12945e31;
L_12945d54:;
  /* 12945d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12945d56 call 0x12946550 */
  push32(0x12945d5bu); f_12946550();
  /* 12945d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945d5e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d62 je 0x12945d6a */
  if (C.zf) goto L_12945d6a;
  /* 12945d64 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d68 jne 0x12945daf */
  if (!C.zf) goto L_12945daf;
L_12945d6a:;
  /* 12945d6a cmp dword ptr [0x1296e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d71 jne 0x12945daf */
  if (!C.zf) goto L_12945daf;
  /* 12945d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12945d75 push 0x12945f50 */
  push32((uint32_t)(0x12945f50u));
  /* 12945d7a call dword ptr [0x129702ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702ec))), 0x12945d80u);
  /* 12945d80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945d83 jne 0x12945d91 */
  if (!C.zf) goto L_12945d91;
  /* 12945d85 mov dword ptr [0x1296e5fc], 1 */
  w32((uint32_t)(0x1296e5fc), (0x1u));
  /* 12945d8f jmp 0x12945daf */
  goto L_12945daf;
L_12945d91:;
  /* 12945d91 call dword ptr [0x129702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702a4))), 0x12945d97u);
  /* 12945d97 mov esi, eax */
  ESI = (EAX);
  /* 12945d99 call 0x1294aa30 */
  push32(0x12945d9eu); f_1294aa30();
  /* 12945d9e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12945da0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12945da2 call 0x129465f0 */
  push32(0x12945da7u); f_129465f0();
  /* 12945da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945daa jmp 0x12945f08 */
  goto L_12945f08;
L_12945daf:;
  /* 12945daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945db2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12945db5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12945db8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945dbb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12945dbe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945dc2 ja 0x12945e22 */
  if ((!C.cf&&!C.zf)) goto L_12945e22;
  /* 12945dc4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12945dc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12945dc9 mov dl, byte ptr [eax + 0x12945f2f] */
  DL = (r8((uint32_t)(EAX + 0x12945f2f)));
  /* 12945dcf jmp dword ptr [edx*4 + 0x12945f1b] */
  switch (EDX) {
    case 0: goto L_12945dd6;
    case 1: goto L_12945e10;
    case 2: goto L_12945dea;
    case 3: goto L_12945dfd;
    case 4: goto L_12945e22;
    default: x86_unimpl("switch@0x12945dcf out of table"); return;
  }
L_12945dd6:;
  /* 12945dd6 mov ecx, dword ptr [0x1296e5ec] */
  ECX = (r32((uint32_t)(0x1296e5ec)));
  /* 12945ddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12945ddf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945de2 mov dword ptr [0x1296e5ec], edx */
  w32((uint32_t)(0x1296e5ec), (EDX));
  /* 12945de8 jmp 0x12945e22 */
  goto L_12945e22;
L_12945dea:;
  /* 12945dea mov eax, dword ptr [0x1296e5f0] */
  EAX = (r32((uint32_t)(0x1296e5f0)));
  /* 12945def mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12945df2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945df5 mov dword ptr [0x1296e5f0], ecx */
  w32((uint32_t)(0x1296e5f0), (ECX));
  /* 12945dfb jmp 0x12945e22 */
  goto L_12945e22;
L_12945dfd:;
  /* 12945dfd mov edx, dword ptr [0x1296e5f4] */
  EDX = (r32((uint32_t)(0x1296e5f4)));
  /* 12945e03 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12945e06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945e09 mov dword ptr [0x1296e5f4], eax */
  w32((uint32_t)(0x1296e5f4), (EAX));
  /* 12945e0e jmp 0x12945e22 */
  goto L_12945e22;
L_12945e10:;
  /* 12945e10 mov ecx, dword ptr [0x1296e5f8] */
  ECX = (r32((uint32_t)(0x1296e5f8)));
  /* 12945e16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12945e19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945e1c mov dword ptr [0x1296e5f8], edx */
  w32((uint32_t)(0x1296e5f8), (EDX));
L_12945e22:;
  /* 12945e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12945e24 call 0x129465f0 */
  push32(0x12945e29u); f_129465f0();
  /* 12945e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945e2c jmp 0x12945f03 */
  goto L_12945f03;
L_12945e31:;
  /* 12945e31 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945e35 je 0x12945e48 */
  if (C.zf) goto L_12945e48;
  /* 12945e37 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945e3b je 0x12945e48 */
  if (C.zf) goto L_12945e48;
  /* 12945e3d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945e41 je 0x12945e48 */
  if (C.zf) goto L_12945e48;
  /* 12945e43 jmp 0x12945f08 */
  goto L_12945f08;
L_12945e48:;
  /* 12945e48 call 0x12942590 */
  push32(0x12945e4du); f_12942590();
  /* 12945e4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12945e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945e53 cmp dword ptr [eax + 0x50], 0x1296cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1296cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945e5a jne 0x12945ea5 */
  if (!C.zf) goto L_12945ea5;
  /* 12945e5c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12945e61 push 0x12969df4 */
  push32((uint32_t)(0x12969df4u));
  /* 12945e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12945e68 mov ecx, dword ptr [0x1296cc80] */
  ECX = (r32((uint32_t)(0x1296cc80)));
  /* 12945e6e push ecx */
  push32((uint32_t)(ECX));
  /* 12945e6f call 0x12942b50 */
  push32(0x12945e74u); f_12942b50();
  /* 12945e74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945e77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945e7a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12945e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945e80 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945e84 je 0x12945ea3 */
  if (C.zf) goto L_12945ea3;
  /* 12945e86 mov ecx, dword ptr [0x1296cc80] */
  ECX = (r32((uint32_t)(0x1296cc80)));
  /* 12945e8c push ecx */
  push32((uint32_t)(ECX));
  /* 12945e8d push 0x1296cc00 */
  push32((uint32_t)(0x1296cc00u));
  /* 12945e92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945e95 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12945e98 push eax */
  push32((uint32_t)(EAX));
  /* 12945e99 call 0x12949430 */
  push32(0x12945e9eu); f_12949430();
  /* 12945e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945ea1 jmp 0x12945ea5 */
  goto L_12945ea5;
L_12945ea3:;
  /* 12945ea3 jmp 0x12945f08 */
  goto L_12945f08;
L_12945ea5:;
  /* 12945ea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945ea8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12945eab push edx */
  push32((uint32_t)(EDX));
  /* 12945eac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12945eaf push eax */
  push32((uint32_t)(EAX));
  /* 12945eb0 call 0x12946230 */
  push32(0x12945eb5u); f_12946230();
  /* 12945eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945eb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12945ebb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945ebf jne 0x12945ec3 */
  if (!C.zf) goto L_12945ec3;
  /* 12945ec1 jmp 0x12945f08 */
  goto L_12945f08;
L_12945ec3:;
  /* 12945ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945ec6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12945ec9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12945ecc:;
  /* 12945ecc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945ecf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12945ed2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945ed5 jne 0x12945f03 */
  if (!C.zf) goto L_12945f03;
  /* 12945ed7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945eda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12945edd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12945ee0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945ee3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945ee6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12945ee9 mov edx, dword ptr [0x1296cc84] */
  EDX = (r32((uint32_t)(0x1296cc84)));
  /* 12945eef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12945ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945ef5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12945ef8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12945efa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945efd jb 0x12945f01 */
  if (C.cf) goto L_12945f01;
  /* 12945eff jmp 0x12945f03 */
  goto L_12945f03;
L_12945f01:;
  /* 12945f01 jmp 0x12945ecc */
  goto L_12945ecc;
L_12945f03:;
  /* 12945f03 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12945f06 jmp 0x12945f16 */
  goto L_12945f16;
L_12945f08:;
  /* 12945f08 call 0x1294aa20 */
  push32(0x12945f0du); f_1294aa20();
  /* 12945f0d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12945f13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12945f16:;
  /* 12945f16 pop esi */
  ESI = (pop32());
  /* 12945f17 mov esp, ebp */
  ESP = (EBP);
  /* 12945f19 pop ebp */
  EBP = (pop32());
  /* 12945f1a ret  */
  ESPCHK(0x12945d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x12945f50 (146 bytes, 45 insns) */
void f_12945f50(void) {
  FTRACE(0x12945f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12945f51 mov ebp, esp */
  EBP = (ESP);
  /* 12945f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12945f58 call 0x12946550 */
  push32(0x12945f5du); f_12946550();
  /* 12945f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945f60 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945f64 jne 0x12945f7e */
  if (!C.zf) goto L_12945f7e;
  /* 12945f66 mov dword ptr [ebp - 8], 0x1296e5ec */
  w32((uint32_t)(EBP + -0x8), (0x1296e5ecu));
  /* 12945f6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945f70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12945f72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12945f75 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12945f7c jmp 0x12945f94 */
  goto L_12945f94;
L_12945f7e:;
  /* 12945f7e mov dword ptr [ebp - 8], 0x1296e5f0 */
  w32((uint32_t)(EBP + -0x8), (0x1296e5f0u));
  /* 12945f85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945f88 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12945f8a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12945f8d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12945f94:;
  /* 12945f94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945f98 jne 0x12945fa8 */
  if (!C.zf) goto L_12945fa8;
  /* 12945f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12945f9c call 0x129465f0 */
  push32(0x12945fa1u); f_129465f0();
  /* 12945fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945fa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12945fa6 jmp 0x12945fdc */
  goto L_12945fdc;
L_12945fa8:;
  /* 12945fa8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12945fac je 0x12945fcd */
  if (C.zf) goto L_12945fcd;
  /* 12945fae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12945fb1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12945fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12945fb9 call 0x129465f0 */
  push32(0x12945fbeu); f_129465f0();
  /* 12945fbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945fc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12945fc4 push edx */
  push32((uint32_t)(EDX));
  /* 12945fc5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12945fc8u);
  /* 12945fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12945fcb jmp 0x12945fd7 */
  goto L_12945fd7;
L_12945fcd:;
  /* 12945fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 12945fcf call 0x129465f0 */
  push32(0x12945fd4u); f_129465f0();
  /* 12945fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12945fd7:;
  /* 12945fd7 mov eax, 1 */
  EAX = (0x1u);
L_12945fdc:;
  /* 12945fdc mov esp, ebp */
  ESP = (EBP);
  /* 12945fde pop ebp */
  EBP = (pop32());
  /* 12945fdf ret 4 */
  ESPCHK(0x12945f50u, _esp0);
  ESP += 8; return;
}

/* FUN_10005ff0 @ 0x12945ff0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12945ff0(void) {
  FTRACE(0x12945ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12945ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12945ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12945ff3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12945ff6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12945ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946000 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12946003 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12946006 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946009 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1294600c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946010 ja 0x129460be */
  if ((!C.cf&&!C.zf)) goto L_129460be;
  /* 12946016 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12946019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294601b mov dl, byte ptr [eax + 0x12946212] */
  DL = (r8((uint32_t)(EAX + 0x12946212)));
  /* 12946021 jmp dword ptr [edx*4 + 0x129461fa] */
  switch (EDX) {
    case 0: goto L_12946028;
    case 1: goto L_12946093;
    case 2: goto L_12946079;
    case 3: goto L_12946045;
    case 4: goto L_1294605f;
    case 5: goto L_129460be;
    default: x86_unimpl("switch@0x12946021 out of table"); return;
  }
L_12946028:;
  /* 12946028 mov dword ptr [ebp - 0x18], 0x1296e5ec */
  w32((uint32_t)(EBP + -0x18), (0x1296e5ecu));
  /* 1294602f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12946032 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12946034 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12946037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294603a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294603d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12946040 jmp 0x129460c6 */
  goto L_129460c6;
L_12946045:;
  /* 12946045 mov dword ptr [ebp - 0x18], 0x1296e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x1296e5f0u));
  /* 1294604c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1294604f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12946051 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12946054 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12946057 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294605a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1294605d jmp 0x129460c6 */
  goto L_129460c6;
L_1294605f:;
  /* 1294605f mov dword ptr [ebp - 0x18], 0x1296e5f4 */
  w32((uint32_t)(EBP + -0x18), (0x1296e5f4u));
  /* 12946066 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12946069 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1294606b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1294606e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12946071 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946074 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12946077 jmp 0x129460c6 */
  goto L_129460c6;
L_12946079:;
  /* 12946079 mov dword ptr [ebp - 0x18], 0x1296e5f8 */
  w32((uint32_t)(EBP + -0x18), (0x1296e5f8u));
  /* 12946080 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12946083 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12946085 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12946088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1294608b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294608e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12946091 jmp 0x129460c6 */
  goto L_129460c6;
L_12946093:;
  /* 12946093 call 0x12942590 */
  push32(0x12946098u); f_12942590();
  /* 12946098 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294609b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294609e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129460a1 push edx */
  push32((uint32_t)(EDX));
  /* 129460a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129460a5 push eax */
  push32((uint32_t)(EAX));
  /* 129460a6 call 0x12946230 */
  push32(0x129460abu); f_12946230();
  /* 129460ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129460ae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129460b1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129460b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129460b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129460b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129460bc jmp 0x129460c6 */
  goto L_129460c6;
L_129460be:;
  /* 129460be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129460c1 jmp 0x129461f6 */
  goto L_129461f6;
L_129460c6:;
  /* 129460c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129460ca je 0x129460d6 */
  if (C.zf) goto L_129460d6;
  /* 129460cc push 1 */
  push32((uint32_t)(0x1u));
  /* 129460ce call 0x12946550 */
  push32(0x129460d3u); f_12946550();
  /* 129460d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129460d6:;
  /* 129460d6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129460da jne 0x129460f3 */
  if (!C.zf) goto L_129460f3;
  /* 129460dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129460e0 je 0x129460ec */
  if (C.zf) goto L_129460ec;
  /* 129460e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129460e4 call 0x129465f0 */
  push32(0x129460e9u); f_129465f0();
  /* 129460e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129460ec:;
  /* 129460ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129460ee jmp 0x129461f6 */
  goto L_129461f6;
L_129460f3:;
  /* 129460f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129460f7 jne 0x12946110 */
  if (!C.zf) goto L_12946110;
  /* 129460f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129460fd je 0x12946109 */
  if (C.zf) goto L_12946109;
  /* 129460ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12946101 call 0x129465f0 */
  push32(0x12946106u); f_129465f0();
  /* 12946106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12946109:;
  /* 12946109 push 3 */
  push32((uint32_t)(0x3u));
  /* 1294610b call 0x12942310 */
  push32(0x12946110u); f_12942310();
L_12946110:;
  /* 12946110 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946114 je 0x12946122 */
  if (C.zf) goto L_12946122;
  /* 12946116 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294611a je 0x12946122 */
  if (C.zf) goto L_12946122;
  /* 1294611c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946120 jne 0x1294614e */
  if (!C.zf) goto L_1294614e;
L_12946122:;
  /* 12946122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946125 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12946128 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1294612b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294612e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12946135 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946139 jne 0x1294614e */
  if (!C.zf) goto L_1294614e;
  /* 1294613b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294613e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12946141 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12946144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946147 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1294614e:;
  /* 1294614e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946152 jne 0x12946190 */
  if (!C.zf) goto L_12946190;
  /* 12946154 mov eax, dword ptr [0x1296cc78] */
  EAX = (r32((uint32_t)(0x1296cc78)));
  /* 12946159 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1294615c jmp 0x12946167 */
  goto L_12946167;
L_1294615e:;
  /* 1294615e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946164 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12946167:;
  /* 12946167 mov edx, dword ptr [0x1296cc78] */
  EDX = (r32((uint32_t)(0x1296cc78)));
  /* 1294616d add edx, dword ptr [0x1296cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946173 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946176 jge 0x1294618e */
  if ((C.sf==C.of)) goto L_1294618e;
  /* 12946178 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294617b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294617e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946181 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12946184 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1294618c jmp 0x1294615e */
  goto L_1294615e;
L_1294618e:;
  /* 1294618e jmp 0x12946199 */
  goto L_12946199;
L_12946190:;
  /* 12946190 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12946193 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12946199:;
  /* 12946199 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294619d je 0x129461a9 */
  if (C.zf) goto L_129461a9;
  /* 1294619f push 1 */
  push32((uint32_t)(0x1u));
  /* 129461a1 call 0x129465f0 */
  push32(0x129461a6u); f_129465f0();
  /* 129461a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129461a9:;
  /* 129461a9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129461ad jne 0x129461c0 */
  if (!C.zf) goto L_129461c0;
  /* 129461af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129461b2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 129461b5 push edx */
  push32((uint32_t)(EDX));
  /* 129461b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 129461b8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x129461bbu);
  /* 129461bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129461be jmp 0x129461ca */
  goto L_129461ca;
L_129461c0:;
  /* 129461c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129461c3 push eax */
  push32((uint32_t)(EAX));
  /* 129461c4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x129461c7u);
  /* 129461c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129461ca:;
  /* 129461ca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129461ce je 0x129461dc */
  if (C.zf) goto L_129461dc;
  /* 129461d0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129461d4 je 0x129461dc */
  if (C.zf) goto L_129461dc;
  /* 129461d6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129461da jne 0x129461f4 */
  if (!C.zf) goto L_129461f4;
L_129461dc:;
  /* 129461dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129461df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129461e2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 129461e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129461e9 jne 0x129461f4 */
  if (!C.zf) goto L_129461f4;
  /* 129461eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129461ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129461f1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_129461f4:;
  /* 129461f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129461f6:;
  /* 129461f6 mov esp, ebp */
  ESP = (EBP);
  /* 129461f8 pop ebp */
  EBP = (pop32());
  /* 129461f9 ret  */
  ESPCHK(0x12945ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006230 @ 0x12946230 (91 bytes, 35 insns) */
void f_12946230(void) {
  FTRACE(0x12946230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946230 push ebp */
  push32((uint32_t)(EBP));
  /* 12946231 mov ebp, esp */
  EBP = (ESP);
  /* 12946233 push ecx */
  push32((uint32_t)(ECX));
  /* 12946234 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946237 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1294623a:;
  /* 1294623a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294623d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12946240 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946243 je 0x12946263 */
  if (C.zf) goto L_12946263;
  /* 12946245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946248 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294624b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294624e mov ecx, dword ptr [0x1296cc84] */
  ECX = (r32((uint32_t)(0x1296cc84)));
  /* 12946254 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12946257 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294625a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294625c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294625f jae 0x12946263 */
  if (!C.cf) goto L_12946263;
  /* 12946261 jmp 0x1294623a */
  goto L_1294623a;
L_12946263:;
  /* 12946263 mov eax, dword ptr [0x1296cc84] */
  EAX = (r32((uint32_t)(0x1296cc84)));
  /* 12946268 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294626b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294626e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12946270 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946273 jae 0x12946285 */
  if (!C.cf) goto L_12946285;
  /* 12946275 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946278 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1294627b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294627e jne 0x12946285 */
  if (!C.zf) goto L_12946285;
  /* 12946280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946283 jmp 0x12946287 */
  goto L_12946287;
L_12946285:;
  /* 12946285 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12946287:;
  /* 12946287 mov esp, ebp */
  ESP = (EBP);
  /* 12946289 pop ebp */
  EBP = (pop32());
  /* 1294628a ret  */
  ESPCHK(0x12946230u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x12946290 (13 bytes, 6 insns) */
void f_12946290(void) {
  FTRACE(0x12946290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946290 push ebp */
  push32((uint32_t)(EBP));
  /* 12946291 mov ebp, esp */
  EBP = (ESP);
  /* 12946293 call 0x12942590 */
  push32(0x12946298u); f_12942590();
  /* 12946298 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294629b pop ebp */
  EBP = (pop32());
  /* 1294629c ret  */
  ESPCHK(0x12946290u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x129462a0 (13 bytes, 6 insns) */
void f_129462a0(void) {
  FTRACE(0x129462a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129462a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129462a1 mov ebp, esp */
  EBP = (ESP);
  /* 129462a3 call 0x12942590 */
  push32(0x129462a8u); f_12942590();
  /* 129462a8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129462ab pop ebp */
  EBP = (pop32());
  /* 129462ac ret  */
  ESPCHK(0x129462a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b0 @ 0x129462b0 (187 bytes, 54 insns) */
void f_129462b0(void) {
  FTRACE(0x129462b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129462b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129462b1 mov ebp, esp */
  EBP = (ESP);
  /* 129462b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129462b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129462bd cmp dword ptr [0x1296e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129462c4 jne 0x12946323 */
  if (!C.zf) goto L_12946323;
  /* 129462c6 push 0x12969220 */
  push32((uint32_t)(0x12969220u));
  /* 129462cb call dword ptr [0x12970274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970274))), 0x129462d1u);
  /* 129462d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129462d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129462d8 je 0x129462f7 */
  if (C.zf) goto L_129462f7;
  /* 129462da push 0x12969e24 */
  push32((uint32_t)(0x12969e24u));
  /* 129462df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129462e2 push eax */
  push32((uint32_t)(EAX));
  /* 129462e3 call dword ptr [0x12970270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970270))), 0x129462e9u);
  /* 129462e9 mov dword ptr [0x1296e600], eax */
  w32((uint32_t)(0x1296e600), (EAX));
  /* 129462ee cmp dword ptr [0x1296e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129462f5 jne 0x129462fb */
  if (!C.zf) goto L_129462fb;
L_129462f7:;
  /* 129462f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129462f9 jmp 0x12946367 */
  goto L_12946367;
L_129462fb:;
  /* 129462fb push 0x12969e14 */
  push32((uint32_t)(0x12969e14u));
  /* 12946300 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946303 push ecx */
  push32((uint32_t)(ECX));
  /* 12946304 call dword ptr [0x12970270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970270))), 0x1294630au);
  /* 1294630a mov dword ptr [0x1296e604], eax */
  w32((uint32_t)(0x1296e604), (EAX));
  /* 1294630f push 0x12969e00 */
  push32((uint32_t)(0x12969e00u));
  /* 12946314 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946317 push edx */
  push32((uint32_t)(EDX));
  /* 12946318 call dword ptr [0x12970270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970270))), 0x1294631eu);
  /* 1294631e mov dword ptr [0x1296e608], eax */
  w32((uint32_t)(0x1296e608), (EAX));
L_12946323:;
  /* 12946323 cmp dword ptr [0x1296e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294632a je 0x12946335 */
  if (C.zf) goto L_12946335;
  /* 1294632c call dword ptr [0x1296e604] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e604))), 0x12946332u);
  /* 12946332 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12946335:;
  /* 12946335 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946339 je 0x12946351 */
  if (C.zf) goto L_12946351;
  /* 1294633b cmp dword ptr [0x1296e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1296e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946342 je 0x12946351 */
  if (C.zf) goto L_12946351;
  /* 12946344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946347 push eax */
  push32((uint32_t)(EAX));
  /* 12946348 call dword ptr [0x1296e608] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e608))), 0x1294634eu);
  /* 1294634e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12946351:;
  /* 12946351 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12946354 push ecx */
  push32((uint32_t)(ECX));
  /* 12946355 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946358 push edx */
  push32((uint32_t)(EDX));
  /* 12946359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294635c push eax */
  push32((uint32_t)(EAX));
  /* 1294635d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946360 push ecx */
  push32((uint32_t)(ECX));
  /* 12946361 call dword ptr [0x1296e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x1296e600))), 0x12946367u);
L_12946367:;
  /* 12946367 mov esp, ebp */
  ESP = (EBP);
  /* 12946369 pop ebp */
  EBP = (pop32());
  /* 1294636a ret  */
  ESPCHK(0x129462b0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12946370 (254 bytes, 109 insns) */
void f_12946370(void) {
  FTRACE(0x12946370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946370 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12946374 push edi */
  push32((uint32_t)(EDI));
  /* 12946375 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12946377 je 0x129463f3 */
  if (C.zf) goto L_129463f3;
  /* 12946379 push esi */
  push32((uint32_t)(ESI));
  /* 1294637a push ebx */
  push32((uint32_t)(EBX));
  /* 1294637b mov ebx, ecx */
  EBX = (ECX);
  /* 1294637d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12946381 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12946387 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1294638b jne 0x12946394 */
  if (!C.zf) goto L_12946394;
  /* 1294638d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12946390 jne 0x12946401 */
  if (!C.zf) goto L_12946401;
  /* 12946392 jmp 0x129463b5 */
  goto L_129463b5;
L_12946394:;
  /* 12946394 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12946396 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12946397 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12946399 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1294639a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1294639b je 0x129463c2 */
  if (C.zf) goto L_129463c2;
  /* 1294639d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1294639f je 0x129463ca */
  if (C.zf) goto L_129463ca;
  /* 129463a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 129463a7 jne 0x12946394 */
  if (!C.zf) goto L_12946394;
  /* 129463a9 mov ebx, ecx */
  EBX = (ECX);
  /* 129463ab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129463ae jne 0x12946401 */
  if (!C.zf) goto L_12946401;
L_129463b0:;
  /* 129463b0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 129463b3 je 0x129463c2 */
  if (C.zf) goto L_129463c2;
L_129463b5:;
  /* 129463b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129463b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129463b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129463ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129463bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129463bd je 0x129463ee */
  if (C.zf) goto L_129463ee;
  /* 129463bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 129463c0 jne 0x129463b5 */
  if (!C.zf) goto L_129463b5;
L_129463c2:;
  /* 129463c2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129463c6 pop ebx */
  EBX = (pop32());
  /* 129463c7 pop esi */
  ESI = (pop32());
  /* 129463c8 pop edi */
  EDI = (pop32());
  /* 129463c9 ret  */
  ESPCHK(0x12946370u, _esp0);
  ESP += 4; return;
L_129463ca:;
  /* 129463ca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129463d0 je 0x129463e4 */
  if (C.zf) goto L_129463e4;
L_129463d2:;
  /* 129463d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129463d4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129463d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129463d6 je 0x12946466 */
  if (C.zf) goto L_12946466;
  /* 129463dc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129463e2 jne 0x129463d2 */
  if (!C.zf) goto L_129463d2;
L_129463e4:;
  /* 129463e4 mov ebx, ecx */
  EBX = (ECX);
  /* 129463e6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129463e9 jne 0x12946457 */
  if (!C.zf) goto L_12946457;
L_129463eb:;
  /* 129463eb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129463ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_129463ee:;
  /* 129463ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 129463ef jne 0x129463eb */
  if (!C.zf) goto L_129463eb;
  /* 129463f1 pop ebx */
  EBX = (pop32());
  /* 129463f2 pop esi */
  ESI = (pop32());
L_129463f3:;
  /* 129463f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129463f7 pop edi */
  EDI = (pop32());
  /* 129463f8 ret  */
  ESPCHK(0x12946370u, _esp0);
  ESP += 4; return;
L_129463f9:;
  /* 129463f9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129463fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129463fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129463ff je 0x129463b0 */
  if (C.zf) goto L_129463b0;
L_12946401:;
  /* 12946401 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12946406 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12946408 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294640a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294640d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1294640f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12946411 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12946414 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12946419 je 0x129463f9 */
  if (C.zf) goto L_129463f9;
  /* 1294641b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1294641d je 0x1294644b */
  if (C.zf) goto L_1294644b;
  /* 1294641f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12946421 je 0x12946441 */
  if (C.zf) goto L_12946441;
  /* 12946423 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12946429 je 0x12946437 */
  if (C.zf) goto L_12946437;
  /* 1294642b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12946431 jne 0x129463f9 */
  if (!C.zf) goto L_129463f9;
  /* 12946433 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12946435 jmp 0x1294644f */
  goto L_1294644f;
L_12946437:;
  /* 12946437 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1294643d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1294643f jmp 0x1294644f */
  goto L_1294644f;
L_12946441:;
  /* 12946441 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12946447 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12946449 jmp 0x1294644f */
  goto L_1294644f;
L_1294644b:;
  /* 1294644b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1294644d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1294644f:;
  /* 1294644f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12946452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12946454 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12946455 je 0x12946461 */
  if (C.zf) goto L_12946461;
L_12946457:;
  /* 12946457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12946459:;
  /* 12946459 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1294645b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1294645e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1294645f jne 0x12946459 */
  if (!C.zf) goto L_12946459;
L_12946461:;
  /* 12946461 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12946464 jne 0x129463eb */
  if (!C.zf) goto L_129463eb;
L_12946466:;
  /* 12946466 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1294646a pop ebx */
  EBX = (pop32());
  /* 1294646b pop esi */
  ESI = (pop32());
  /* 1294646c pop edi */
  EDI = (pop32());
  /* 1294646d ret  */
  ESPCHK(0x12946370u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x12946470 (55 bytes, 16 insns) */
void f_12946470(void) {
  FTRACE(0x12946470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946470 push ebp */
  push32((uint32_t)(EBP));
  /* 12946471 mov ebp, esp */
  EBP = (ESP);
  /* 12946473 mov eax, dword ptr [0x1296cb84] */
  EAX = (r32((uint32_t)(0x1296cb84)));
  /* 12946478 push eax */
  push32((uint32_t)(EAX));
  /* 12946479 call dword ptr [0x129702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f0))), 0x1294647fu);
  /* 1294647f mov ecx, dword ptr [0x1296cb74] */
  ECX = (r32((uint32_t)(0x1296cb74)));
  /* 12946485 push ecx */
  push32((uint32_t)(ECX));
  /* 12946486 call dword ptr [0x129702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f0))), 0x1294648cu);
  /* 1294648c mov edx, dword ptr [0x1296cb64] */
  EDX = (r32((uint32_t)(0x1296cb64)));
  /* 12946492 push edx */
  push32((uint32_t)(EDX));
  /* 12946493 call dword ptr [0x129702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f0))), 0x12946499u);
  /* 12946499 mov eax, dword ptr [0x1296cb44] */
  EAX = (r32((uint32_t)(0x1296cb44)));
  /* 1294649e push eax */
  push32((uint32_t)(EAX));
  /* 1294649f call dword ptr [0x129702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f0))), 0x129464a5u);
  /* 129464a5 pop ebp */
  EBP = (pop32());
  /* 129464a6 ret  */
  ESPCHK(0x12946470u, _esp0);
  ESP += 4; return;
}

/* FUN_100064b0 @ 0x129464b0 (159 bytes, 47 insns) */
void f_129464b0(void) {
  FTRACE(0x129464b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129464b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129464b1 mov ebp, esp */
  EBP = (ESP);
  /* 129464b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129464b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129464bb jmp 0x129464c6 */
  goto L_129464c6;
L_129464bd:;
  /* 129464bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129464c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129464c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129464c6:;
  /* 129464c6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129464ca jge 0x12946519 */
  if ((C.sf==C.of)) goto L_12946519;
  /* 129464cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129464cf cmp dword ptr [ecx*4 + 0x1296cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1296cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129464d7 je 0x12946517 */
  if (C.zf) goto L_12946517;
  /* 129464d9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129464dd je 0x12946517 */
  if (C.zf) goto L_12946517;
  /* 129464df cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129464e3 je 0x12946517 */
  if (C.zf) goto L_12946517;
  /* 129464e5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129464e9 je 0x12946517 */
  if (C.zf) goto L_12946517;
  /* 129464eb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129464ef je 0x12946517 */
  if (C.zf) goto L_12946517;
  /* 129464f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129464f4 mov eax, dword ptr [edx*4 + 0x1296cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1296cb40)));
  /* 129464fb push eax */
  push32((uint32_t)(EAX));
  /* 129464fc call dword ptr [0x129702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b8))), 0x12946502u);
  /* 12946502 push 2 */
  push32((uint32_t)(0x2u));
  /* 12946504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946507 mov edx, dword ptr [ecx*4 + 0x1296cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1296cb40)));
  /* 1294650e push edx */
  push32((uint32_t)(EDX));
  /* 1294650f call 0x129435e0 */
  push32(0x12946514u); f_129435e0();
  /* 12946514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12946517:;
  /* 12946517 jmp 0x129464bd */
  goto L_129464bd;
L_12946519:;
  /* 12946519 mov eax, dword ptr [0x1296cb64] */
  EAX = (r32((uint32_t)(0x1296cb64)));
  /* 1294651e push eax */
  push32((uint32_t)(EAX));
  /* 1294651f call dword ptr [0x129702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b8))), 0x12946525u);
  /* 12946525 mov ecx, dword ptr [0x1296cb74] */
  ECX = (r32((uint32_t)(0x1296cb74)));
  /* 1294652b push ecx */
  push32((uint32_t)(ECX));
  /* 1294652c call dword ptr [0x129702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b8))), 0x12946532u);
  /* 12946532 mov edx, dword ptr [0x1296cb84] */
  EDX = (r32((uint32_t)(0x1296cb84)));
  /* 12946538 push edx */
  push32((uint32_t)(EDX));
  /* 12946539 call dword ptr [0x129702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b8))), 0x1294653fu);
  /* 1294653f mov eax, dword ptr [0x1296cb44] */
  EAX = (r32((uint32_t)(0x1296cb44)));
  /* 12946544 push eax */
  push32((uint32_t)(EAX));
  /* 12946545 call dword ptr [0x129702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702b8))), 0x1294654bu);
  /* 1294654b mov esp, ebp */
  ESP = (EBP);
  /* 1294654d pop ebp */
  EBP = (pop32());
  /* 1294654e ret  */
  ESPCHK(0x129464b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x12946550 (151 bytes, 46 insns) */
void f_12946550(void) {
  FTRACE(0x12946550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946550 push ebp */
  push32((uint32_t)(EBP));
  /* 12946551 mov ebp, esp */
  EBP = (ESP);
  /* 12946553 push ecx */
  push32((uint32_t)(ECX));
  /* 12946554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946557 cmp dword ptr [eax*4 + 0x1296cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1296cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294655f jne 0x129465d2 */
  if (!C.zf) goto L_129465d2;
  /* 12946561 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12946566 push 0x12969e30 */
  push32((uint32_t)(0x12969e30u));
  /* 1294656b push 2 */
  push32((uint32_t)(0x2u));
  /* 1294656d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1294656f call 0x12942b50 */
  push32(0x12946574u); f_12942b50();
  /* 12946574 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946577 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294657a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294657e jne 0x1294658a */
  if (!C.zf) goto L_1294658a;
  /* 12946580 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12946582 call 0x12941ac0 */
  push32(0x12946587u); f_12941ac0();
  /* 12946587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1294658a:;
  /* 1294658a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1294658c call 0x12946550 */
  push32(0x12946591u); f_12946550();
  /* 12946591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946594 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946597 cmp dword ptr [ecx*4 + 0x1296cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1296cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294659f jne 0x129465ba */
  if (!C.zf) goto L_129465ba;
  /* 129465a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129465a4 push edx */
  push32((uint32_t)(EDX));
  /* 129465a5 call dword ptr [0x129702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f0))), 0x129465abu);
  /* 129465ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129465ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129465b1 mov dword ptr [eax*4 + 0x1296cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1296cb40), (ECX));
  /* 129465b8 jmp 0x129465c8 */
  goto L_129465c8;
L_129465ba:;
  /* 129465ba push 2 */
  push32((uint32_t)(0x2u));
  /* 129465bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129465bf push edx */
  push32((uint32_t)(EDX));
  /* 129465c0 call 0x129435e0 */
  push32(0x129465c5u); f_129435e0();
  /* 129465c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129465c8:;
  /* 129465c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129465ca call 0x129465f0 */
  push32(0x129465cfu); f_129465f0();
  /* 129465cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129465d2:;
  /* 129465d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129465d5 mov ecx, dword ptr [eax*4 + 0x1296cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296cb40)));
  /* 129465dc push ecx */
  push32((uint32_t)(ECX));
  /* 129465dd call dword ptr [0x129702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f4))), 0x129465e3u);
  /* 129465e3 mov esp, ebp */
  ESP = (EBP);
  /* 129465e5 pop ebp */
  EBP = (pop32());
  /* 129465e6 ret  */
  ESPCHK(0x12946550u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f0 @ 0x129465f0 (22 bytes, 8 insns) */
void f_129465f0(void) {
  FTRACE(0x129465f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129465f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129465f1 mov ebp, esp */
  EBP = (ESP);
  /* 129465f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129465f6 mov ecx, dword ptr [eax*4 + 0x1296cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1296cb40)));
  /* 129465fd push ecx */
  push32((uint32_t)(ECX));
  /* 129465fe call dword ptr [0x129702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702f8))), 0x12946604u);
  /* 12946604 pop ebp */
  EBP = (pop32());
  /* 12946605 ret  */
  ESPCHK(0x129465f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x12946610 (26 bytes, 10 insns) */
void f_12946610(void) {
  FTRACE(0x12946610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946610 push ebp */
  push32((uint32_t)(EBP));
  /* 12946611 mov ebp, esp */
  EBP = (ESP);
  /* 12946613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946616 push eax */
  push32((uint32_t)(EAX));
  /* 12946617 push 0 */
  push32((uint32_t)(0x0u));
  /* 12946619 call dword ptr [0x129702fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129702fc))), 0x1294661fu);
  /* 1294661f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12946624 call dword ptr [0x12970280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970280))), 0x1294662au);
  /* 1294662a pop ebp */
  EBP = (pop32());
  /* 1294662b ret  */
  ESPCHK(0x12946610u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12946630 (446 bytes, 130 insns) */
void f_12946630(void) {
  FTRACE(0x12946630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946630 push ebp */
  push32((uint32_t)(EBP));
  /* 12946631 mov ebp, esp */
  EBP = (ESP);
  /* 12946633 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12946636 call 0x12942590 */
  push32(0x1294663bu); f_12942590();
  /* 1294663b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1294663e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946641 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12946644 push ecx */
  push32((uint32_t)(ECX));
  /* 12946645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946648 push edx */
  push32((uint32_t)(EDX));
  /* 12946649 call 0x129467f0 */
  push32(0x1294664eu); f_129467f0();
  /* 1294664e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946651 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12946654 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946658 je 0x12946663 */
  if (C.zf) goto L_12946663;
  /* 1294665a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294665d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946661 jne 0x12946672 */
  if (!C.zf) goto L_12946672;
L_12946663:;
  /* 12946663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946666 push ecx */
  push32((uint32_t)(ECX));
  /* 12946667 call dword ptr [0x12970300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970300))), 0x1294666du);
  /* 1294666d jmp 0x129467ea */
  goto L_129467ea;
L_12946672:;
  /* 12946672 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946675 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946679 jne 0x1294668f */
  if (!C.zf) goto L_1294668f;
  /* 1294667b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294667e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12946685 mov eax, 1 */
  EAX = (0x1u);
  /* 1294668a jmp 0x129467ea */
  goto L_129467ea;
L_1294668f:;
  /* 1294668f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946692 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946696 jne 0x129466a0 */
  if (!C.zf) goto L_129466a0;
  /* 12946698 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1294669b jmp 0x129467ea */
  goto L_129467ea;
L_129466a0:;
  /* 129466a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129466a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129466a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129466a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129466ac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 129466af mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129466b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129466b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129466b8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 129466bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129466be cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129466c2 jne 0x129467c7 */
  if (!C.zf) goto L_129467c7;
  /* 129466c8 mov eax, dword ptr [0x1296cc78] */
  EAX = (r32((uint32_t)(0x1296cc78)));
  /* 129466cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129466d0 jmp 0x129466db */
  goto L_129466db;
L_129466d2:;
  /* 129466d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129466d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129466d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_129466db:;
  /* 129466db mov edx, dword ptr [0x1296cc78] */
  EDX = (r32((uint32_t)(0x1296cc78)));
  /* 129466e1 add edx, dword ptr [0x1296cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1296cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129466e7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129466ea jge 0x12946702 */
  if ((C.sf==C.of)) goto L_12946702;
  /* 129466ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129466ef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129466f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129466f5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129466f8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12946700 jmp 0x129466d2 */
  goto L_129466d2;
L_12946702:;
  /* 12946702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946705 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12946708 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1294670b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294670e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946714 jne 0x12946725 */
  if (!C.zf) goto L_12946725;
  /* 12946716 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946719 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12946720 jmp 0x129467ad */
  goto L_129467ad;
L_12946725:;
  /* 12946725 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946728 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294672e jne 0x1294673c */
  if (!C.zf) goto L_1294673c;
  /* 12946730 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946733 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1294673a jmp 0x129467ad */
  goto L_129467ad;
L_1294673c:;
  /* 1294673c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294673f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946745 jne 0x12946753 */
  if (!C.zf) goto L_12946753;
  /* 12946747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294674a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12946751 jmp 0x129467ad */
  goto L_129467ad;
L_12946753:;
  /* 12946753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946756 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294675c jne 0x1294676a */
  if (!C.zf) goto L_1294676a;
  /* 1294675e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946761 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12946768 jmp 0x129467ad */
  goto L_129467ad;
L_1294676a:;
  /* 1294676a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294676d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946773 jne 0x12946781 */
  if (!C.zf) goto L_12946781;
  /* 12946775 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12946778 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1294677f jmp 0x129467ad */
  goto L_129467ad;
L_12946781:;
  /* 12946781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12946784 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294678a jne 0x12946798 */
  if (!C.zf) goto L_12946798;
  /* 1294678c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1294678f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12946796 jmp 0x129467ad */
  goto L_129467ad;
L_12946798:;
  /* 12946798 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1294679b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129467a1 jne 0x129467ad */
  if (!C.zf) goto L_129467ad;
  /* 129467a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129467a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_129467ad:;
  /* 129467ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129467b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 129467b3 push edx */
  push32((uint32_t)(EDX));
  /* 129467b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 129467b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129467b9u);
  /* 129467b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129467bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129467bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129467c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 129467c5 jmp 0x129467de */
  goto L_129467de;
L_129467c7:;
  /* 129467c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129467ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 129467d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129467d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129467d7 push ecx */
  push32((uint32_t)(ECX));
  /* 129467d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129467dbu);
  /* 129467db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129467de:;
  /* 129467de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129467e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129467e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 129467e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129467ea:;
  /* 129467ea mov esp, ebp */
  ESP = (EBP);
  /* 129467ec pop ebp */
  EBP = (pop32());
  /* 129467ed ret  */
  ESPCHK(0x12946630u, _esp0);
  ESP += 4; return;
}

/* FUN_100067f0 @ 0x129467f0 (89 bytes, 35 insns) */
void f_129467f0(void) {
  FTRACE(0x129467f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129467f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129467f1 mov ebp, esp */
  EBP = (ESP);
  /* 129467f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129467f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129467f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129467fa:;
  /* 129467fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129467fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129467ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946802 je 0x12946822 */
  if (C.zf) goto L_12946822;
  /* 12946804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946807 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294680a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294680d mov ecx, dword ptr [0x1296cc84] */
  ECX = (r32((uint32_t)(0x1296cc84)));
  /* 12946813 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12946816 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12946819 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294681b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294681e jae 0x12946822 */
  if (!C.cf) goto L_12946822;
  /* 12946820 jmp 0x129467fa */
  goto L_129467fa;
L_12946822:;
  /* 12946822 mov eax, dword ptr [0x1296cc84] */
  EAX = (r32((uint32_t)(0x1296cc84)));
  /* 12946827 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1294682a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1294682d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1294682f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946832 jae 0x1294683e */
  if (!C.cf) goto L_1294683e;
  /* 12946834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12946837 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12946839 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1294683c je 0x12946842 */
  if (C.zf) goto L_12946842;
L_1294683e:;
  /* 1294683e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12946840 jmp 0x12946845 */
  goto L_12946845;
L_12946842:;
  /* 12946842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12946845:;
  /* 12946845 mov esp, ebp */
  ESP = (EBP);
  /* 12946847 pop ebp */
  EBP = (pop32());
  /* 12946848 ret  */
  ESPCHK(0x129467f0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12946850 (48 bytes, 17 insns) */
void f_12946850(void) {
  FTRACE(0x12946850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946850 push ebp */
  push32((uint32_t)(EBP));
  /* 12946851 mov ebp, esp */
  EBP = (ESP);
  /* 12946853 push ecx */
  push32((uint32_t)(ECX));
  /* 12946854 push 9 */
  push32((uint32_t)(0x9u));
  /* 12946856 call 0x12946550 */
  push32(0x1294685bu); f_12946550();
  /* 1294685b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1294685e mov eax, dword ptr [0x1296e674] */
  EAX = (r32((uint32_t)(0x1296e674)));
  /* 12946863 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12946866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946869 mov dword ptr [0x1296e674], ecx */
  w32((uint32_t)(0x1296e674), (ECX));
  /* 1294686f push 9 */
  push32((uint32_t)(0x9u));
  /* 12946871 call 0x129465f0 */
  push32(0x12946876u); f_129465f0();
  /* 12946876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294687c mov esp, ebp */
  ESP = (EBP);
  /* 1294687e pop ebp */
  EBP = (pop32());
  /* 1294687f ret  */
  ESPCHK(0x12946850u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x12946880 (10 bytes, 5 insns) */
void f_12946880(void) {
  FTRACE(0x12946880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946880 push ebp */
  push32((uint32_t)(EBP));
  /* 12946881 mov ebp, esp */
  EBP = (ESP);
  /* 12946883 mov eax, dword ptr [0x1296e674] */
  EAX = (r32((uint32_t)(0x1296e674)));
  /* 12946888 pop ebp */
  EBP = (pop32());
  /* 12946889 ret  */
  ESPCHK(0x12946880u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12946890 (45 bytes, 19 insns) */
void f_12946890(void) {
  FTRACE(0x12946890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946890 push ebp */
  push32((uint32_t)(EBP));
  /* 12946891 mov ebp, esp */
  EBP = (ESP);
  /* 12946893 push ecx */
  push32((uint32_t)(ECX));
  /* 12946894 mov eax, dword ptr [0x1296e674] */
  EAX = (r32((uint32_t)(0x1296e674)));
  /* 12946899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1294689c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129468a0 je 0x129468b0 */
  if (C.zf) goto L_129468b0;
  /* 129468a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129468a5 push ecx */
  push32((uint32_t)(ECX));
  /* 129468a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129468a9u);
  /* 129468a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129468ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129468ae jne 0x129468b4 */
  if (!C.zf) goto L_129468b4;
L_129468b0:;
  /* 129468b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129468b2 jmp 0x129468b9 */
  goto L_129468b9;
L_129468b4:;
  /* 129468b4 mov eax, 1 */
  EAX = (0x1u);
L_129468b9:;
  /* 129468b9 mov esp, ebp */
  ESP = (EBP);
  /* 129468bb pop ebp */
  EBP = (pop32());
  /* 129468bc ret  */
  ESPCHK(0x12946890u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x129468c0 (88 bytes, 40 insns) */
void f_129468c0(void) {
  FTRACE(0x129468c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129468c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 129468c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129468c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129468ca je 0x12946913 */
  if (C.zf) goto L_12946913;
  /* 129468cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129468ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 129468d2 push edi */
  push32((uint32_t)(EDI));
  /* 129468d3 mov edi, ecx */
  EDI = (ECX);
  /* 129468d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129468d8 jb 0x12946907 */
  if (C.cf) goto L_12946907;
  /* 129468da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129468dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 129468df je 0x129468e9 */
  if (C.zf) goto L_129468e9;
  /* 129468e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_129468e3:;
  /* 129468e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129468e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129468e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129468e7 jne 0x129468e3 */
  if (!C.zf) goto L_129468e3;
L_129468e9:;
  /* 129468e9 mov ecx, eax */
  ECX = (EAX);
  /* 129468eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129468ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129468f0 mov ecx, eax */
  ECX = (EAX);
  /* 129468f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129468f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129468f7 mov ecx, edx */
  ECX = (EDX);
  /* 129468f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129468fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129468ff je 0x12946907 */
  if (C.zf) goto L_12946907;
  /* 12946901 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12946903 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12946905 je 0x1294690d */
  if (C.zf) goto L_1294690d;
L_12946907:;
  /* 12946907 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12946909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1294690a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1294690b jne 0x12946907 */
  if (!C.zf) goto L_12946907;
L_1294690d:;
  /* 1294690d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12946911 pop edi */
  EDI = (pop32());
  /* 12946912 ret  */
  ESPCHK(0x129468c0u, _esp0);
  ESP += 4; return;
L_12946913:;
  /* 12946913 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12946917 ret  */
  ESPCHK(0x129468c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006920 @ 0x12946920 (23 bytes, 10 insns) */
void f_12946920(void) {
  FTRACE(0x12946920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946920 push ebp */
  push32((uint32_t)(EBP));
  /* 12946921 mov ebp, esp */
  EBP = (ESP);
  /* 12946923 mov eax, dword ptr [0x1296e670] */
  EAX = (r32((uint32_t)(0x1296e670)));
  /* 12946928 push eax */
  push32((uint32_t)(EAX));
  /* 12946929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1294692c push ecx */
  push32((uint32_t)(ECX));
  /* 1294692d call 0x12946940 */
  push32(0x12946932u); f_12946940();
  /* 12946932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946935 pop ebp */
  EBP = (pop32());
  /* 12946936 ret  */
  ESPCHK(0x12946920u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12946940 (87 bytes, 34 insns) */
void f_12946940(void) {
  FTRACE(0x12946940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12946940 push ebp */
  push32((uint32_t)(EBP));
  /* 12946941 mov ebp, esp */
  EBP = (ESP);
  /* 12946943 push ecx */
  push32((uint32_t)(ECX));
  /* 12946944 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946948 jbe 0x1294694e */
  if ((C.cf||C.zf)) goto L_1294694e;
  /* 1294694a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294694c jmp 0x12946993 */
  goto L_12946993;
L_1294694e:;
  /* 1294694e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946952 ja 0x12946965 */
  if ((!C.cf&&!C.zf)) goto L_12946965;
  /* 12946954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946957 push eax */
  push32((uint32_t)(EAX));
  /* 12946958 call 0x129469a0 */
  push32(0x1294695du); f_129469a0();
  /* 1294695d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946960 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12946963 jmp 0x1294696c */
  goto L_1294696c;
L_12946965:;
  /* 12946965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1294696c:;
  /* 1294696c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946970 jne 0x12946978 */
  if (!C.zf) goto L_12946978;
  /* 12946972 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12946976 jne 0x1294697d */
  if (!C.zf) goto L_1294697d;
L_12946978:;
  /* 12946978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1294697b jmp 0x12946993 */
  goto L_12946993;
L_1294697d:;
  /* 1294697d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12946980 push ecx */
  push32((uint32_t)(ECX));
  /* 12946981 call 0x12946890 */
  push32(0x12946986u); f_12946890();
  /* 12946986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12946989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1294698b jne 0x12946991 */
  if (!C.zf) goto L_12946991;
  /* 1294698d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1294698f jmp 0x12946993 */
  goto L_12946993;
L_12946991:;
  /* 12946991 jmp 0x1294694e */
  goto L_1294694e;
L_12946993:;
  /* 12946993 mov esp, ebp */
  ESP = (EBP);
  /* 12946995 pop ebp */
  EBP = (pop32());
  /* 12946996 ret  */
  ESPCHK(0x12946940u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x129469a0 (109 bytes, 37 insns) */
void f_129469a0(void) {
  FTRACE(0x129469a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129469a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129469a1 mov ebp, esp */
  EBP = (ESP);
  /* 129469a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129469a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129469a7 cmp eax, dword ptr [0x1296cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1296cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129469ad ja 0x129469dd */
  if ((!C.cf&&!C.zf)) goto L_129469dd;
  /* 129469af push 9 */
  push32((uint32_t)(0x9u));
  /* 129469b1 call 0x12946550 */
  push32(0x129469b6u); f_12946550();
  /* 129469b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129469b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129469bc push ecx */
  push32((uint32_t)(ECX));
  /* 129469bd call 0x129474e0 */
  push32(0x129469c2u); f_129474e0();
  /* 129469c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129469c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129469c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 129469ca call 0x129465f0 */
  push32(0x129469cfu); f_129465f0();
  /* 129469cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129469d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129469d6 je 0x129469dd */
  if (C.zf) goto L_129469dd;
  /* 129469d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129469db jmp 0x12946a09 */
  goto L_12946a09;
L_129469dd:;
  /* 129469dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129469e1 jne 0x129469ea */
  if (!C.zf) goto L_129469ea;
  /* 129469e3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_129469ea:;
  /* 129469ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129469ed add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129469f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 129469f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129469f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129469f9 push eax */
  push32((uint32_t)(EAX));
  /* 129469fa push 0 */
  push32((uint32_t)(0x0u));
  /* 129469fc mov ecx, dword ptr [0x1296fe2c] */
  ECX = (r32((uint32_t)(0x1296fe2c)));
  /* 12946a02 push ecx */
  push32((uint32_t)(ECX));
  /* 12946a03 call dword ptr [0x12970304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12970304))), 0x12946a09u);
L_12946a09:;
  /* 12946a09 mov esp, ebp */
  ESP = (EBP);
  /* 12946a0b pop ebp */
  EBP = (pop32());
  /* 12946a0c ret  */
  ESPCHK(0x129469a0u, _esp0);
  ESP += 4; return;
}

