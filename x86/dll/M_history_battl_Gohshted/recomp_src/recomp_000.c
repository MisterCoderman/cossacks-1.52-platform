#include "recomp.h"

/* thunk_FUN_10001790 @ 0x12901005 (5 bytes, 1 insns) */
void f_12901005(void) {
  FTRACE(0x12901005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901005 jmp 0x12901790 */
  f_12901790(); return;
}

/* OnInit @ 0x1290100a (5 bytes, 1 insns) */
void f_1290100a(void) {
  FTRACE(0x1290100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290100a jmp 0x129011b0 */
  f_129011b0(); return;
}

/* thunk_FUN_10001130 @ 0x1290100f (5 bytes, 1 insns) */
void f_1290100f(void) {
  FTRACE(0x1290100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290100f jmp 0x12901130 */
  f_12901130(); return;
}

/* thunk_FUN_10001050 @ 0x12901014 (5 bytes, 1 insns) */
void f_12901014(void) {
  FTRACE(0x12901014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901014 jmp 0x12901050 */
  f_12901050(); return;
}

/* thunk_FUN_100010b0 @ 0x12901019 (5 bytes, 1 insns) */
void f_12901019(void) {
  FTRACE(0x12901019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901019 jmp 0x129010b0 */
  f_129010b0(); return;
}

/* ProcessScenary @ 0x1290101e (5 bytes, 1 insns) */
void f_1290101e(void) {
  FTRACE(0x1290101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290101e jmp 0x12901390 */
  f_12901390(); return;
}

/* FUN_10001050 @ 0x12901050 (67 bytes, 26 insns) */
void f_12901050(void) {
  FTRACE(0x12901050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901050 push ebp */
  push32((uint32_t)(EBP));
  /* 12901051 mov ebp, esp */
  EBP = (ESP);
  /* 12901053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12901056 push ebx */
  push32((uint32_t)(EBX));
  /* 12901057 push esi */
  push32((uint32_t)(ESI));
  /* 12901058 push edi */
  push32((uint32_t)(EDI));
  /* 12901059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1290105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12901061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12901066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12901068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901072 je 0x12901076 */
  if (C.zf) goto L_12901076;
  /* 12901074 jmp 0x1290107b */
  goto L_1290107b;
L_12901076:;
  /* 12901076 call 0x1290100a */
  push32(0x1290107bu); f_1290100a();
L_1290107b:;
  /* 1290107b mov eax, 1 */
  EAX = (0x1u);
  /* 12901080 pop edi */
  EDI = (pop32());
  /* 12901081 pop esi */
  ESI = (pop32());
  /* 12901082 pop ebx */
  EBX = (pop32());
  /* 12901083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901088 call 0x12901830 */
  push32(0x1290108du); f_12901830();
  /* 1290108d mov esp, ebp */
  ESP = (EBP);
  /* 1290108f pop ebp */
  EBP = (pop32());
  /* 12901090 ret 0xc */
  ESPCHK(0x12901050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x129010b0 (92 bytes, 34 insns) */
void f_129010b0(void) {
  FTRACE(0x129010b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129010b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129010b1 mov ebp, esp */
  EBP = (ESP);
  /* 129010b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129010b6 push ebx */
  push32((uint32_t)(EBX));
  /* 129010b7 push esi */
  push32((uint32_t)(ESI));
  /* 129010b8 push edi */
  push32((uint32_t)(EDI));
  /* 129010b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129010bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129010c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129010c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129010c8 mov esi, esp */
  ESI = (ESP);
  /* 129010ca call dword ptr [0x129303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303cc))), 0x129010d0u);
  /* 129010d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129010d2 call 0x12901830 */
  push32(0x129010d7u); f_12901830();
  /* 129010d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129010d9 jne 0x129010ec */
  if (!C.zf) goto L_129010ec;
  /* 129010db mov esi, esp */
  ESI = (ESP);
  /* 129010dd call dword ptr [0x129303d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303d0))), 0x129010e3u);
  /* 129010e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129010e5 call 0x12901830 */
  push32(0x129010eau); f_12901830();
  /* 129010ea jmp 0x129010fb */
  goto L_129010fb;
L_129010ec:;
  /* 129010ec mov esi, esp */
  ESI = (ESP);
  /* 129010ee call dword ptr [0x129303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303d4))), 0x129010f4u);
  /* 129010f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129010f6 call 0x12901830 */
  push32(0x129010fbu); f_12901830();
L_129010fb:;
  /* 129010fb pop edi */
  EDI = (pop32());
  /* 129010fc pop esi */
  ESI = (pop32());
  /* 129010fd pop ebx */
  EBX = (pop32());
  /* 129010fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901103 call 0x12901830 */
  push32(0x12901108u); f_12901830();
  /* 12901108 mov esp, ebp */
  ESP = (EBP);
  /* 1290110a pop ebp */
  EBP = (pop32());
  /* 1290110b ret  */
  ESPCHK(0x129010b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12901130 (93 bytes, 34 insns) */
void f_12901130(void) {
  FTRACE(0x12901130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901130 push ebp */
  push32((uint32_t)(EBP));
  /* 12901131 mov ebp, esp */
  EBP = (ESP);
  /* 12901133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12901136 push ebx */
  push32((uint32_t)(EBX));
  /* 12901137 push esi */
  push32((uint32_t)(ESI));
  /* 12901138 push edi */
  push32((uint32_t)(EDI));
  /* 12901139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1290113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12901141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12901146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12901148 mov esi, esp */
  ESI = (ESP);
  /* 1290114a call dword ptr [0x129303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303cc))), 0x12901150u);
  /* 12901150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901152 call 0x12901830 */
  push32(0x12901157u); f_12901830();
  /* 12901157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290115a jne 0x1290116d */
  if (!C.zf) goto L_1290116d;
  /* 1290115c mov esi, esp */
  ESI = (ESP);
  /* 1290115e call dword ptr [0x129303d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303d0))), 0x12901164u);
  /* 12901164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901166 call 0x12901830 */
  push32(0x1290116bu); f_12901830();
  /* 1290116b jmp 0x1290117c */
  goto L_1290117c;
L_1290116d:;
  /* 1290116d mov esi, esp */
  ESI = (ESP);
  /* 1290116f call dword ptr [0x129303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303d4))), 0x12901175u);
  /* 12901175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901177 call 0x12901830 */
  push32(0x1290117cu); f_12901830();
L_1290117c:;
  /* 1290117c pop edi */
  EDI = (pop32());
  /* 1290117d pop esi */
  ESI = (pop32());
  /* 1290117e pop ebx */
  EBX = (pop32());
  /* 1290117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901184 call 0x12901830 */
  push32(0x12901189u); f_12901830();
  /* 12901189 mov esp, ebp */
  ESP = (EBP);
  /* 1290118b pop ebp */
  EBP = (pop32());
  /* 1290118c ret  */
  ESPCHK(0x12901130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x129011b0 (373 bytes, 101 insns) */
void f_129011b0(void) {
  FTRACE(0x129011b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129011b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129011b1 mov ebp, esp */
  EBP = (ESP);
  /* 129011b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129011b6 push ebx */
  push32((uint32_t)(EBX));
  /* 129011b7 push esi */
  push32((uint32_t)(ESI));
  /* 129011b8 push edi */
  push32((uint32_t)(EDI));
  /* 129011b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129011bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129011c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129011c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129011c8 mov esi, esp */
  ESI = (ESP);
  /* 129011ca push 0x1292904c */
  push32((uint32_t)(0x1292904cu));
  /* 129011cf push 0x1292e420 */
  push32((uint32_t)(0x1292e420u));
  /* 129011d4 call dword ptr [0x129303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c0))), 0x129011dau);
  /* 129011da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129011dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129011df call 0x12901830 */
  push32(0x129011e4u); f_12901830();
  /* 129011e4 mov esi, esp */
  ESI = (ESP);
  /* 129011e6 push 0x12929044 */
  push32((uint32_t)(0x12929044u));
  /* 129011eb push 0x1292e428 */
  push32((uint32_t)(0x1292e428u));
  /* 129011f0 call dword ptr [0x129303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c0))), 0x129011f6u);
  /* 129011f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129011f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129011fb call 0x12901830 */
  push32(0x12901200u); f_12901830();
  /* 12901200 mov esi, esp */
  ESI = (ESP);
  /* 12901202 push 0x1292903c */
  push32((uint32_t)(0x1292903cu));
  /* 12901207 push 0x1292e430 */
  push32((uint32_t)(0x1292e430u));
  /* 1290120c call dword ptr [0x129303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c0))), 0x12901212u);
  /* 12901212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901217 call 0x12901830 */
  push32(0x1290121cu); f_12901830();
  /* 1290121c mov esi, esp */
  ESI = (ESP);
  /* 1290121e push 0x12929034 */
  push32((uint32_t)(0x12929034u));
  /* 12901223 push 0x1292e438 */
  push32((uint32_t)(0x1292e438u));
  /* 12901228 call dword ptr [0x129303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c0))), 0x1290122eu);
  /* 1290122e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901233 call 0x12901830 */
  push32(0x12901238u); f_12901830();
  /* 12901238 mov esi, esp */
  ESI = (ESP);
  /* 1290123a push 0x1292902c */
  push32((uint32_t)(0x1292902cu));
  /* 1290123f push 0x1292e440 */
  push32((uint32_t)(0x1292e440u));
  /* 12901244 call dword ptr [0x129303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c0))), 0x1290124au);
  /* 1290124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290124d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290124f call 0x12901830 */
  push32(0x12901254u); f_12901830();
  /* 12901254 mov esi, esp */
  ESI = (ESP);
  /* 12901256 push 0x12929024 */
  push32((uint32_t)(0x12929024u));
  /* 1290125b push 0x1292e410 */
  push32((uint32_t)(0x1292e410u));
  /* 12901260 call dword ptr [0x129303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c4))), 0x12901266u);
  /* 12901266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290126b call 0x12901830 */
  push32(0x12901270u); f_12901830();
  /* 12901270 mov esi, esp */
  ESI = (ESP);
  /* 12901272 push 0x1292901c */
  push32((uint32_t)(0x1292901cu));
  /* 12901277 push 0x1292e418 */
  push32((uint32_t)(0x1292e418u));
  /* 1290127c call dword ptr [0x129303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c4))), 0x12901282u);
  /* 12901282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901287 call 0x12901830 */
  push32(0x1290128cu); f_12901830();
  /* 1290128c mov esi, esp */
  ESI = (ESP);
  /* 1290128e push 1 */
  push32((uint32_t)(0x1u));
  /* 12901290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12901292 call dword ptr [0x129303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c8))), 0x12901298u);
  /* 12901298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290129b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290129d call 0x12901830 */
  push32(0x129012a2u); f_12901830();
  /* 129012a2 mov esi, esp */
  ESI = (ESP);
  /* 129012a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 129012a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129012a8 call dword ptr [0x129303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c8))), 0x129012aeu);
  /* 129012ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129012b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129012b3 call 0x12901830 */
  push32(0x129012b8u); f_12901830();
  /* 129012b8 mov esi, esp */
  ESI = (ESP);
  /* 129012ba push 7 */
  push32((uint32_t)(0x7u));
  /* 129012bc push 3 */
  push32((uint32_t)(0x3u));
  /* 129012be call dword ptr [0x129303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303c8))), 0x129012c4u);
  /* 129012c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129012c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129012c9 call 0x12901830 */
  push32(0x129012ceu); f_12901830();
  /* 129012ce mov dword ptr [0x1292e3e0], 0 */
  w32((uint32_t)(0x1292e3e0), (0x0u));
  /* 129012d8 jmp 0x129012e7 */
  goto L_129012e7;
L_129012da:;
  /* 129012da mov eax, dword ptr [0x1292e3e0] */
  EAX = (r32((uint32_t)(0x1292e3e0)));
  /* 129012df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129012e2 mov dword ptr [0x1292e3e0], eax */
  w32((uint32_t)(0x1292e3e0), (EAX));
L_129012e7:;
  /* 129012e7 cmp dword ptr [0x1292e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1292e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129012ee jge 0x12901314 */
  if ((C.sf==C.of)) goto L_12901314;
  /* 129012f0 mov ecx, dword ptr [0x1292e3e0] */
  ECX = (r32((uint32_t)(0x1292e3e0)));
  /* 129012f6 mov dword ptr [ecx*4 + 0x1292e3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x1292e3e4), (0x0u));
  /* 12901301 mov edx, dword ptr [0x1292e3e0] */
  EDX = (r32((uint32_t)(0x1292e3e0)));
  /* 12901307 mov dword ptr [edx*4 + 0x1292e3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x1292e3f8), (0x0u));
  /* 12901312 jmp 0x129012da */
  goto L_129012da;
L_12901314:;
  /* 12901314 pop edi */
  EDI = (pop32());
  /* 12901315 pop esi */
  ESI = (pop32());
  /* 12901316 pop ebx */
  EBX = (pop32());
  /* 12901317 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290131a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290131c call 0x12901830 */
  push32(0x12901321u); f_12901830();
  /* 12901321 mov esp, ebp */
  ESP = (EBP);
  /* 12901323 pop ebp */
  EBP = (pop32());
  /* 12901324 ret  */
  ESPCHK(0x129011b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001390 @ 0x12901390 (816 bytes, 216 insns) */
void f_12901390(void) {
  FTRACE(0x12901390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901390 push ebp */
  push32((uint32_t)(EBP));
  /* 12901391 mov ebp, esp */
  EBP = (ESP);
  /* 12901393 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12901396 push ebx */
  push32((uint32_t)(EBX));
  /* 12901397 push esi */
  push32((uint32_t)(ESI));
  /* 12901398 push edi */
  push32((uint32_t)(EDI));
  /* 12901399 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1290139c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129013a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129013a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129013a8 mov dword ptr [0x1292e3e0], 0 */
  w32((uint32_t)(0x1292e3e0), (0x0u));
  /* 129013b2 jmp 0x129013c1 */
  goto L_129013c1;
L_129013b4:;
  /* 129013b4 mov eax, dword ptr [0x1292e3e0] */
  EAX = (r32((uint32_t)(0x1292e3e0)));
  /* 129013b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129013bc mov dword ptr [0x1292e3e0], eax */
  w32((uint32_t)(0x1292e3e0), (EAX));
L_129013c1:;
  /* 129013c1 cmp dword ptr [0x1292e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1292e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129013c8 jge 0x129014ab */
  if ((C.sf==C.of)) goto L_129014ab;
  /* 129013ce mov esi, esp */
  ESI = (ESP);
  /* 129013d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129013d2 mov ecx, dword ptr [0x1292e3e0] */
  ECX = (r32((uint32_t)(0x1292e3e0)));
  /* 129013d8 lea edx, [ecx*8 + 0x1292e420] */
  EDX = ((uint32_t)(ECX*8 + 0x1292e420));
  /* 129013df push edx */
  push32((uint32_t)(EDX));
  /* 129013e0 call dword ptr [0x129303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303ac))), 0x129013e6u);
  /* 129013e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129013e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129013eb call 0x12901830 */
  push32(0x129013f0u); f_12901830();
  /* 129013f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129013f2 jle 0x1290143a */
  if ((C.zf||C.sf!=C.of)) goto L_1290143a;
  /* 129013f4 mov esi, esp */
  ESI = (ESP);
  /* 129013f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 129013f8 mov eax, dword ptr [0x1292e3e0] */
  EAX = (r32((uint32_t)(0x1292e3e0)));
  /* 129013fd lea ecx, [eax*8 + 0x1292e420] */
  ECX = ((uint32_t)(EAX*8 + 0x1292e420));
  /* 12901404 push ecx */
  push32((uint32_t)(ECX));
  /* 12901405 call dword ptr [0x129303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303ac))), 0x1290140bu);
  /* 1290140b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290140e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901410 call 0x12901830 */
  push32(0x12901415u); f_12901830();
  /* 12901415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901417 jne 0x1290143a */
  if (!C.zf) goto L_1290143a;
  /* 12901419 mov edx, dword ptr [0x1292e3e0] */
  EDX = (r32((uint32_t)(0x1292e3e0)));
  /* 1290141f mov dword ptr [edx*4 + 0x1292e3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x1292e3e4), (0x1u));
  /* 1290142a mov eax, dword ptr [0x1292e3e0] */
  EAX = (r32((uint32_t)(0x1292e3e0)));
  /* 1290142f mov dword ptr [eax*4 + 0x1292e3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x1292e3f8), (0x0u));
L_1290143a:;
  /* 1290143a mov esi, esp */
  ESI = (ESP);
  /* 1290143c push 1 */
  push32((uint32_t)(0x1u));
  /* 1290143e mov ecx, dword ptr [0x1292e3e0] */
  ECX = (r32((uint32_t)(0x1292e3e0)));
  /* 12901444 lea edx, [ecx*8 + 0x1292e420] */
  EDX = ((uint32_t)(ECX*8 + 0x1292e420));
  /* 1290144b push edx */
  push32((uint32_t)(EDX));
  /* 1290144c call dword ptr [0x129303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303ac))), 0x12901452u);
  /* 12901452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901457 call 0x12901830 */
  push32(0x1290145cu); f_12901830();
  /* 1290145c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290145e jle 0x129014a6 */
  if ((C.zf||C.sf!=C.of)) goto L_129014a6;
  /* 12901460 mov esi, esp */
  ESI = (ESP);
  /* 12901462 push 0 */
  push32((uint32_t)(0x0u));
  /* 12901464 mov eax, dword ptr [0x1292e3e0] */
  EAX = (r32((uint32_t)(0x1292e3e0)));
  /* 12901469 lea ecx, [eax*8 + 0x1292e420] */
  ECX = ((uint32_t)(EAX*8 + 0x1292e420));
  /* 12901470 push ecx */
  push32((uint32_t)(ECX));
  /* 12901471 call dword ptr [0x129303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303ac))), 0x12901477u);
  /* 12901477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290147a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290147c call 0x12901830 */
  push32(0x12901481u); f_12901830();
  /* 12901481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901483 jne 0x129014a6 */
  if (!C.zf) goto L_129014a6;
  /* 12901485 mov edx, dword ptr [0x1292e3e0] */
  EDX = (r32((uint32_t)(0x1292e3e0)));
  /* 1290148b mov dword ptr [edx*4 + 0x1292e3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x1292e3e4), (0x0u));
  /* 12901496 mov eax, dword ptr [0x1292e3e0] */
  EAX = (r32((uint32_t)(0x1292e3e0)));
  /* 1290149b mov dword ptr [eax*4 + 0x1292e3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x1292e3f8), (0x1u));
L_129014a6:;
  /* 129014a6 jmp 0x129013b4 */
  goto L_129013b4;
L_129014ab:;
  /* 129014ab mov dword ptr [0x1292e448], 0 */
  w32((uint32_t)(0x1292e448), (0x0u));
  /* 129014b5 mov dword ptr [0x1292e44c], 0 */
  w32((uint32_t)(0x1292e44c), (0x0u));
  /* 129014bf mov dword ptr [0x1292e3e0], 0 */
  w32((uint32_t)(0x1292e3e0), (0x0u));
  /* 129014c9 jmp 0x129014da */
  goto L_129014da;
L_129014cb:;
  /* 129014cb mov ecx, dword ptr [0x1292e3e0] */
  ECX = (r32((uint32_t)(0x1292e3e0)));
  /* 129014d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129014d4 mov dword ptr [0x1292e3e0], ecx */
  w32((uint32_t)(0x1292e3e0), (ECX));
L_129014da:;
  /* 129014da cmp dword ptr [0x1292e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1292e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129014e1 jge 0x12901515 */
  if ((C.sf==C.of)) goto L_12901515;
  /* 129014e3 mov edx, dword ptr [0x1292e3e0] */
  EDX = (r32((uint32_t)(0x1292e3e0)));
  /* 129014e9 mov eax, dword ptr [0x1292e448] */
  EAX = (r32((uint32_t)(0x1292e448)));
  /* 129014ee add eax, dword ptr [edx*4 + 0x1292e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1292e3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129014f5 mov dword ptr [0x1292e448], eax */
  w32((uint32_t)(0x1292e448), (EAX));
  /* 129014fa mov ecx, dword ptr [0x1292e3e0] */
  ECX = (r32((uint32_t)(0x1292e3e0)));
  /* 12901500 mov edx, dword ptr [0x1292e44c] */
  EDX = (r32((uint32_t)(0x1292e44c)));
  /* 12901506 add edx, dword ptr [ecx*4 + 0x1292e3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x1292e3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290150d mov dword ptr [0x1292e44c], edx */
  w32((uint32_t)(0x1292e44c), (EDX));
  /* 12901513 jmp 0x129014cb */
  goto L_129014cb;
L_12901515:;
  /* 12901515 cmp dword ptr [0x1292e448], 3 */
  { uint32_t _a=(r32((uint32_t)(0x1292e448))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290151c jl 0x12901523 */
  if ((C.sf!=C.of)) goto L_12901523;
  /* 1290151e call 0x12901019 */
  push32(0x12901523u); f_12901019();
L_12901523:;
  /* 12901523 mov esi, esp */
  ESI = (ESP);
  /* 12901525 push 0xa */
  push32((uint32_t)(0xau));
  /* 12901527 call dword ptr [0x129303b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b0))), 0x1290152du);
  /* 1290152d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901532 call 0x12901830 */
  push32(0x12901537u); f_12901830();
  /* 12901537 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290153c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290153e je 0x12901585 */
  if (C.zf) goto L_12901585;
  /* 12901540 mov esi, esp */
  ESI = (ESP);
  /* 12901542 call dword ptr [0x129303b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b4))), 0x12901548u);
  /* 12901548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290154a call 0x12901830 */
  push32(0x1290154fu); f_12901830();
  /* 1290154f cmp eax, 0x9470 */
  { uint32_t _a=(EAX),_b=(0x9470u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901554 jle 0x12901585 */
  if ((C.zf||C.sf!=C.of)) goto L_12901585;
  /* 12901556 mov esi, esp */
  ESI = (ESP);
  /* 12901558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290155a push 0xa */
  push32((uint32_t)(0xau));
  /* 1290155c call dword ptr [0x129303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b8))), 0x12901562u);
  /* 12901562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901567 call 0x12901830 */
  push32(0x1290156cu); f_12901830();
  /* 1290156c mov esi, esp */
  ESI = (ESP);
  /* 1290156e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12901570 push 0x1292905c */
  push32((uint32_t)(0x1292905cu));
  /* 12901575 call dword ptr [0x129303bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303bc))), 0x1290157bu);
  /* 1290157b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290157e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901580 call 0x12901830 */
  push32(0x12901585u); f_12901830();
L_12901585:;
  /* 12901585 mov esi, esp */
  ESI = (ESP);
  /* 12901587 call dword ptr [0x129303b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b4))), 0x1290158du);
  /* 1290158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290158f call 0x12901830 */
  push32(0x12901594u); f_12901830();
  /* 12901594 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901599 jle 0x129015a0 */
  if ((C.zf||C.sf!=C.of)) goto L_129015a0;
  /* 1290159b call 0x1290100f */
  push32(0x129015a0u); f_1290100f();
L_129015a0:;
  /* 129015a0 mov esi, esp */
  ESI = (ESP);
  /* 129015a2 push 0xf */
  push32((uint32_t)(0xfu));
  /* 129015a4 call dword ptr [0x129303b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b0))), 0x129015aau);
  /* 129015aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129015ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129015af call 0x12901830 */
  push32(0x129015b4u); f_12901830();
  /* 129015b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129015b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129015bb je 0x12901612 */
  if (C.zf) goto L_12901612;
  /* 129015bd push 0x1292e410 */
  push32((uint32_t)(0x1292e410u));
  /* 129015c2 call 0x12901005 */
  push32(0x129015c7u); f_12901005();
  /* 129015c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129015ca cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129015cd jge 0x12901612 */
  if ((C.sf==C.of)) goto L_12901612;
  /* 129015cf mov esi, esp */
  ESI = (ESP);
  /* 129015d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129015d3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 129015d5 call dword ptr [0x129303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b8))), 0x129015dbu);
  /* 129015db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129015de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129015e0 call 0x12901830 */
  push32(0x129015e5u); f_12901830();
  /* 129015e5 mov esi, esp */
  ESI = (ESP);
  /* 129015e7 call dword ptr [0x129303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303cc))), 0x129015edu);
  /* 129015ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129015ef call 0x12901830 */
  push32(0x129015f4u); f_12901830();
  /* 129015f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129015f7 jne 0x12901612 */
  if (!C.zf) goto L_12901612;
  /* 129015f9 mov esi, esp */
  ESI = (ESP);
  /* 129015fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129015fd push 0x12929054 */
  push32((uint32_t)(0x12929054u));
  /* 12901602 call dword ptr [0x129303bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303bc))), 0x12901608u);
  /* 12901608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290160b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290160d call 0x12901830 */
  push32(0x12901612u); f_12901830();
L_12901612:;
  /* 12901612 mov esi, esp */
  ESI = (ESP);
  /* 12901614 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12901616 call dword ptr [0x129303b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b0))), 0x1290161cu);
  /* 1290161c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290161f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901621 call 0x12901830 */
  push32(0x12901626u); f_12901830();
  /* 12901626 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290162d je 0x12901683 */
  if (C.zf) goto L_12901683;
  /* 1290162f push 0x1292e418 */
  push32((uint32_t)(0x1292e418u));
  /* 12901634 call 0x12901005 */
  push32(0x12901639u); f_12901005();
  /* 12901639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290163c cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290163f jge 0x12901683 */
  if ((C.sf==C.of)) goto L_12901683;
  /* 12901641 mov esi, esp */
  ESI = (ESP);
  /* 12901643 push 0 */
  push32((uint32_t)(0x0u));
  /* 12901645 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12901647 call dword ptr [0x129303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303b8))), 0x1290164du);
  /* 1290164d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901650 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901652 call 0x12901830 */
  push32(0x12901657u); f_12901830();
  /* 12901657 mov esi, esp */
  ESI = (ESP);
  /* 12901659 call dword ptr [0x129303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303cc))), 0x1290165fu);
  /* 1290165f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901661 call 0x12901830 */
  push32(0x12901666u); f_12901830();
  /* 12901666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901668 jne 0x12901683 */
  if (!C.zf) goto L_12901683;
  /* 1290166a mov esi, esp */
  ESI = (ESP);
  /* 1290166c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1290166e push 0x12929054 */
  push32((uint32_t)(0x12929054u));
  /* 12901673 call dword ptr [0x129303bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303bc))), 0x12901679u);
  /* 12901679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290167c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290167e call 0x12901830 */
  push32(0x12901683u); f_12901830();
L_12901683:;
  /* 12901683 push 0x1292e410 */
  push32((uint32_t)(0x1292e410u));
  /* 12901688 call 0x12901005 */
  push32(0x1290168du); f_12901005();
  /* 1290168d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901692 jne 0x12901699 */
  if (!C.zf) goto L_12901699;
  /* 12901694 call 0x1290100f */
  push32(0x12901699u); f_1290100f();
L_12901699:;
  /* 12901699 push 0x1292e418 */
  push32((uint32_t)(0x1292e418u));
  /* 1290169e call 0x12901005 */
  push32(0x129016a3u); f_12901005();
  /* 129016a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129016a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129016a8 jne 0x129016af */
  if (!C.zf) goto L_129016af;
  /* 129016aa call 0x12901019 */
  push32(0x129016afu); f_12901019();
L_129016af:;
  /* 129016af pop edi */
  EDI = (pop32());
  /* 129016b0 pop esi */
  ESI = (pop32());
  /* 129016b1 pop ebx */
  EBX = (pop32());
  /* 129016b2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129016b5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129016b7 call 0x12901830 */
  push32(0x129016bcu); f_12901830();
  /* 129016bc mov esp, ebp */
  ESP = (EBP);
  /* 129016be pop ebp */
  EBP = (pop32());
  /* 129016bf ret  */
  ESPCHK(0x12901390u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x12901790 (63 bytes, 26 insns) */
void f_12901790(void) {
  FTRACE(0x12901790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901790 push ebp */
  push32((uint32_t)(EBP));
  /* 12901791 mov ebp, esp */
  EBP = (ESP);
  /* 12901793 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12901796 push ebx */
  push32((uint32_t)(EBX));
  /* 12901797 push esi */
  push32((uint32_t)(ESI));
  /* 12901798 push edi */
  push32((uint32_t)(EDI));
  /* 12901799 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1290179c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129017a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129017a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129017a8 mov esi, esp */
  ESI = (ESP);
  /* 129017aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129017ad push eax */
  push32((uint32_t)(EAX));
  /* 129017ae call dword ptr [0x129303a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129303a8))), 0x129017b4u);
  /* 129017b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129017b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129017b9 call 0x12901830 */
  push32(0x129017beu); f_12901830();
  /* 129017be pop edi */
  EDI = (pop32());
  /* 129017bf pop esi */
  ESI = (pop32());
  /* 129017c0 pop ebx */
  EBX = (pop32());
  /* 129017c1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129017c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129017c6 call 0x12901830 */
  push32(0x129017cbu); f_12901830();
  /* 129017cb mov esp, ebp */
  ESP = (EBP);
  /* 129017cd pop ebp */
  EBP = (pop32());
  /* 129017ce ret  */
  ESPCHK(0x12901790u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12901830 (56 bytes, 28 insns) */
void f_12901830(void) {
  FTRACE(0x12901830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901830 jne 0x12901833 */
  if (!C.zf) goto L_12901833;
  /* 12901832 ret  */
  ESPCHK(0x12901830u, _esp0);
  ESP += 4; return;
L_12901833:;
  /* 12901833 push ebp */
  push32((uint32_t)(EBP));
  /* 12901834 mov ebp, esp */
  EBP = (ESP);
  /* 12901836 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12901839 push eax */
  push32((uint32_t)(EAX));
  /* 1290183a push edx */
  push32((uint32_t)(EDX));
  /* 1290183b push ebx */
  push32((uint32_t)(EBX));
  /* 1290183c push esi */
  push32((uint32_t)(ESI));
  /* 1290183d push edi */
  push32((uint32_t)(EDI));
  /* 1290183e push 0x12929078 */
  push32((uint32_t)(0x12929078u));
  /* 12901843 push 0x12929074 */
  push32((uint32_t)(0x12929074u));
  /* 12901848 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1290184a push 0x12929064 */
  push32((uint32_t)(0x12929064u));
  /* 1290184f push 1 */
  push32((uint32_t)(0x1u));
  /* 12901851 call 0x12901c00 */
  push32(0x12901856u); f_12901c00();
  /* 12901856 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901859 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290185c jne 0x1290185f */
  if (!C.zf) goto L_1290185f;
  /* 1290185e int3  */
  x86_unimpl("int3 @ 0x1290185e");
L_1290185f:;
  /* 1290185f pop edi */
  EDI = (pop32());
  /* 12901860 pop esi */
  ESI = (pop32());
  /* 12901861 pop ebx */
  EBX = (pop32());
  /* 12901862 pop edx */
  EDX = (pop32());
  /* 12901863 pop eax */
  EAX = (pop32());
  /* 12901864 mov esp, ebp */
  ESP = (EBP);
  /* 12901866 pop ebp */
  EBP = (pop32());
  /* 12901867 ret  */
  ESPCHK(0x12901830u, _esp0);
  ESP += 4; return;
}

/* FUN_10001870 @ 0x12901870 (313 bytes, 78 insns) */
void f_12901870(void) {
  FTRACE(0x12901870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901870 push ebp */
  push32((uint32_t)(EBP));
  /* 12901871 mov ebp, esp */
  EBP = (ESP);
  /* 12901873 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901877 jne 0x12901937 */
  if (!C.zf) goto L_12901937;
  /* 1290187d call dword ptr [0x12930258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930258))), 0x12901883u);
  /* 12901883 mov dword ptr [0x1292e488], eax */
  w32((uint32_t)(0x1292e488), (EAX));
  /* 12901888 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290188a call 0x12905330 */
  push32(0x1290188fu); f_12905330();
  /* 1290188f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901894 jne 0x1290189d */
  if (!C.zf) goto L_1290189d;
  /* 12901896 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12901898 jmp 0x129019a5 */
  goto L_129019a5;
L_1290189d:;
  /* 1290189d mov eax, dword ptr [0x1292e488] */
  EAX = (r32((uint32_t)(0x1292e488)));
  /* 129018a2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129018a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 129018aa mov dword ptr [0x1292e494], eax */
  w32((uint32_t)(0x1292e494), (EAX));
  /* 129018af mov ecx, dword ptr [0x1292e488] */
  ECX = (r32((uint32_t)(0x1292e488)));
  /* 129018b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129018bb mov dword ptr [0x1292e490], ecx */
  w32((uint32_t)(0x1292e490), (ECX));
  /* 129018c1 mov edx, dword ptr [0x1292e490] */
  EDX = (r32((uint32_t)(0x1292e490)));
  /* 129018c7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 129018ca add edx, dword ptr [0x1292e494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292e494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129018d0 mov dword ptr [0x1292e48c], edx */
  w32((uint32_t)(0x1292e48c), (EDX));
  /* 129018d6 mov eax, dword ptr [0x1292e488] */
  EAX = (r32((uint32_t)(0x1292e488)));
  /* 129018db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129018de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129018e3 mov dword ptr [0x1292e488], eax */
  w32((uint32_t)(0x1292e488), (EAX));
  /* 129018e8 call 0x129024a0 */
  push32(0x129018edu); f_129024a0();
  /* 129018ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129018ef jne 0x129018fd */
  if (!C.zf) goto L_129018fd;
  /* 129018f1 call 0x12905380 */
  push32(0x129018f6u); f_12905380();
  /* 129018f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129018f8 jmp 0x129019a5 */
  goto L_129019a5;
L_129018fd:;
  /* 129018fd call dword ptr [0x12930254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930254))), 0x12901903u);
  /* 12901903 mov dword ptr [0x1292ffcc], eax */
  w32((uint32_t)(0x1292ffcc), (EAX));
  /* 12901908 call 0x12905110 */
  push32(0x1290190du); f_12905110();
  /* 1290190d mov dword ptr [0x1292e470], eax */
  w32((uint32_t)(0x1292e470), (EAX));
  /* 12901912 call 0x12902750 */
  push32(0x12901917u); f_12902750();
  /* 12901917 call 0x12904c00 */
  push32(0x1290191cu); f_12904c00();
  /* 1290191c call 0x12904ab0 */
  push32(0x12901921u); f_12904ab0();
  /* 12901921 call 0x129022a0 */
  push32(0x12901926u); f_129022a0();
  /* 12901926 mov ecx, dword ptr [0x1292e46c] */
  ECX = (r32((uint32_t)(0x1292e46c)));
  /* 1290192c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290192f mov dword ptr [0x1292e46c], ecx */
  w32((uint32_t)(0x1292e46c), (ECX));
  /* 12901935 jmp 0x129019a0 */
  goto L_129019a0;
L_12901937:;
  /* 12901937 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290193b jne 0x12901990 */
  if (!C.zf) goto L_12901990;
  /* 1290193d cmp dword ptr [0x1292e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901944 jle 0x1290198a */
  if ((C.zf||C.sf!=C.of)) goto L_1290198a;
  /* 12901946 mov edx, dword ptr [0x1292e46c] */
  EDX = (r32((uint32_t)(0x1292e46c)));
  /* 1290194c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290194f mov dword ptr [0x1292e46c], edx */
  w32((uint32_t)(0x1292e46c), (EDX));
  /* 12901955 cmp dword ptr [0x1292e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290195c jne 0x12901963 */
  if (!C.zf) goto L_12901963;
  /* 1290195e call 0x12902320 */
  push32(0x12901963u); f_12902320();
L_12901963:;
  /* 12901963 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12901965 call 0x12904050 */
  push32(0x1290196au); f_12904050();
  /* 1290196a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290196d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12901970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901972 je 0x12901979 */
  if (C.zf) goto L_12901979;
  /* 12901974 call 0x12904960 */
  push32(0x12901979u); f_12904960();
L_12901979:;
  /* 12901979 call 0x12902a80 */
  push32(0x1290197eu); f_12902a80();
  /* 1290197e call 0x12902530 */
  push32(0x12901983u); f_12902530();
  /* 12901983 call 0x12905380 */
  push32(0x12901988u); f_12905380();
  /* 12901988 jmp 0x1290198e */
  goto L_1290198e;
L_1290198a:;
  /* 1290198a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290198c jmp 0x129019a5 */
  goto L_129019a5;
L_1290198e:;
  /* 1290198e jmp 0x129019a0 */
  goto L_129019a0;
L_12901990:;
  /* 12901990 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901994 jne 0x129019a0 */
  if (!C.zf) goto L_129019a0;
  /* 12901996 push 0 */
  push32((uint32_t)(0x0u));
  /* 12901998 call 0x12902620 */
  push32(0x1290199du); f_12902620();
  /* 1290199d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129019a0:;
  /* 129019a0 mov eax, 1 */
  EAX = (0x1u);
L_129019a5:;
  /* 129019a5 pop ebp */
  EBP = (pop32());
  /* 129019a6 ret 0xc */
  ESPCHK(0x12901870u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x129019b0 (243 bytes, 86 insns) */
void f_129019b0(void) {
  FTRACE(0x129019b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129019b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129019b1 mov ebp, esp */
  EBP = (ESP);
  /* 129019b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129019b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129019bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129019bf jne 0x129019d1 */
  if (!C.zf) goto L_129019d1;
  /* 129019c1 cmp dword ptr [0x1292e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129019c8 jne 0x129019d1 */
  if (!C.zf) goto L_129019d1;
  /* 129019ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129019cc jmp 0x12901a9d */
  goto L_12901a9d;
L_129019d1:;
  /* 129019d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129019d5 je 0x129019dd */
  if (C.zf) goto L_129019dd;
  /* 129019d7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129019db jne 0x12901a1f */
  if (!C.zf) goto L_12901a1f;
L_129019dd:;
  /* 129019dd cmp dword ptr [0x1292ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129019e4 je 0x129019fb */
  if (C.zf) goto L_129019fb;
  /* 129019e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129019e9 push eax */
  push32((uint32_t)(EAX));
  /* 129019ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129019ed push ecx */
  push32((uint32_t)(ECX));
  /* 129019ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129019f1 push edx */
  push32((uint32_t)(EDX));
  /* 129019f2 call dword ptr [0x1292ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292ffdc))), 0x129019f8u);
  /* 129019f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129019fb:;
  /* 129019fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129019ff je 0x12901a15 */
  if (C.zf) goto L_12901a15;
  /* 12901a01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901a04 push eax */
  push32((uint32_t)(EAX));
  /* 12901a05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901a08 push ecx */
  push32((uint32_t)(ECX));
  /* 12901a09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901a0c push edx */
  push32((uint32_t)(EDX));
  /* 12901a0d call 0x12901870 */
  push32(0x12901a12u); f_12901870();
  /* 12901a12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12901a15:;
  /* 12901a15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901a19 jne 0x12901a1f */
  if (!C.zf) goto L_12901a1f;
  /* 12901a1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12901a1d jmp 0x12901a9d */
  goto L_12901a9d;
L_12901a1f:;
  /* 12901a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901a22 push eax */
  push32((uint32_t)(EAX));
  /* 12901a23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901a26 push ecx */
  push32((uint32_t)(ECX));
  /* 12901a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901a2a push edx */
  push32((uint32_t)(EDX));
  /* 12901a2b call 0x12901014 */
  push32(0x12901a30u); f_12901014();
  /* 12901a30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12901a33 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901a37 jne 0x12901a4e */
  if (!C.zf) goto L_12901a4e;
  /* 12901a39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901a3d jne 0x12901a4e */
  if (!C.zf) goto L_12901a4e;
  /* 12901a3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901a42 push eax */
  push32((uint32_t)(EAX));
  /* 12901a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12901a45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901a48 push ecx */
  push32((uint32_t)(ECX));
  /* 12901a49 call 0x12901870 */
  push32(0x12901a4eu); f_12901870();
L_12901a4e:;
  /* 12901a4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901a52 je 0x12901a5a */
  if (C.zf) goto L_12901a5a;
  /* 12901a54 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901a58 jne 0x12901a9a */
  if (!C.zf) goto L_12901a9a;
L_12901a5a:;
  /* 12901a5a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901a5d push edx */
  push32((uint32_t)(EDX));
  /* 12901a5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901a61 push eax */
  push32((uint32_t)(EAX));
  /* 12901a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12901a66 call 0x12901870 */
  push32(0x12901a6bu); f_12901870();
  /* 12901a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901a6d jne 0x12901a76 */
  if (!C.zf) goto L_12901a76;
  /* 12901a6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12901a76:;
  /* 12901a76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901a7a je 0x12901a9a */
  if (C.zf) goto L_12901a9a;
  /* 12901a7c cmp dword ptr [0x1292ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901a83 je 0x12901a9a */
  if (C.zf) goto L_12901a9a;
  /* 12901a85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901a88 push edx */
  push32((uint32_t)(EDX));
  /* 12901a89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901a8c push eax */
  push32((uint32_t)(EAX));
  /* 12901a8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901a90 push ecx */
  push32((uint32_t)(ECX));
  /* 12901a91 call dword ptr [0x1292ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292ffdc))), 0x12901a97u);
  /* 12901a97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12901a9a:;
  /* 12901a9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12901a9d:;
  /* 12901a9d mov esp, ebp */
  ESP = (EBP);
  /* 12901a9f pop ebp */
  EBP = (pop32());
  /* 12901aa0 ret 0xc */
  ESPCHK(0x129019b0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12901ab0 (58 bytes, 18 insns) */
void f_12901ab0(void) {
  FTRACE(0x12901ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12901ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12901ab3 cmp dword ptr [0x1292e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901aba je 0x12901ace */
  if (C.zf) goto L_12901ace;
  /* 12901abc cmp dword ptr [0x1292e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901ac3 jne 0x12901ad3 */
  if (!C.zf) goto L_12901ad3;
  /* 12901ac5 cmp dword ptr [0x1292e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901acc jne 0x12901ad3 */
  if (!C.zf) goto L_12901ad3;
L_12901ace:;
  /* 12901ace call 0x12905420 */
  push32(0x12901ad3u); f_12905420();
L_12901ad3:;
  /* 12901ad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901ad6 push eax */
  push32((uint32_t)(EAX));
  /* 12901ad7 call 0x12905470 */
  push32(0x12901adcu); f_12905470();
  /* 12901adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901adf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12901ae4 call dword ptr [0x1292ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292ca30))), 0x12901aeau);
  /* 12901aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901aed pop ebp */
  EBP = (pop32());
  /* 12901aee ret  */
  ESPCHK(0x12901ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001af0 @ 0x12901af0 (11 bytes, 5 insns) */
void f_12901af0(void) {
  FTRACE(0x12901af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12901af1 mov ebp, esp */
  EBP = (ESP);
  /* 12901af3 call dword ptr [0x1293025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293025c))), 0x12901af9u);
  /* 12901af9 pop ebp */
  EBP = (pop32());
  /* 12901afa ret  */
  ESPCHK(0x12901af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b00 @ 0x12901b00 (87 bytes, 30 insns) */
void f_12901b00(void) {
  FTRACE(0x12901b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12901b01 mov ebp, esp */
  EBP = (ESP);
  /* 12901b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12901b04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901b08 jl 0x12901b10 */
  if ((C.sf!=C.of)) goto L_12901b10;
  /* 12901b0a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901b0e jl 0x12901b15 */
  if ((C.sf!=C.of)) goto L_12901b15;
L_12901b10:;
  /* 12901b10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12901b13 jmp 0x12901b53 */
  goto L_12901b53;
L_12901b15:;
  /* 12901b15 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901b19 jne 0x12901b27 */
  if (!C.zf) goto L_12901b27;
  /* 12901b1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901b1e mov eax, dword ptr [eax*4 + 0x1292ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1292ca38)));
  /* 12901b25 jmp 0x12901b53 */
  goto L_12901b53;
L_12901b27:;
  /* 12901b27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901b2a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12901b2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12901b2f je 0x12901b36 */
  if (C.zf) goto L_12901b36;
  /* 12901b31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12901b34 jmp 0x12901b53 */
  goto L_12901b53;
L_12901b36:;
  /* 12901b36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901b39 mov eax, dword ptr [edx*4 + 0x1292ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292ca38)));
  /* 12901b40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12901b43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901b46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901b49 mov dword ptr [ecx*4 + 0x1292ca38], edx */
  w32((uint32_t)(ECX*4 + 0x1292ca38), (EDX));
  /* 12901b50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12901b53:;
  /* 12901b53 mov esp, ebp */
  ESP = (EBP);
  /* 12901b55 pop ebp */
  EBP = (pop32());
  /* 12901b56 ret  */
  ESPCHK(0x12901b00u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12901b60 (126 bytes, 38 insns) */
void f_12901b60(void) {
  FTRACE(0x12901b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12901b61 mov ebp, esp */
  EBP = (ESP);
  /* 12901b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12901b64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901b68 jl 0x12901b70 */
  if ((C.sf!=C.of)) goto L_12901b70;
  /* 12901b6a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901b6e jl 0x12901b77 */
  if ((C.sf!=C.of)) goto L_12901b77;
L_12901b70:;
  /* 12901b70 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12901b75 jmp 0x12901bda */
  goto L_12901bda;
L_12901b77:;
  /* 12901b77 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901b7b jne 0x12901b89 */
  if (!C.zf) goto L_12901b89;
  /* 12901b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901b80 mov eax, dword ptr [eax*4 + 0x1292ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1292ca44)));
  /* 12901b87 jmp 0x12901bda */
  goto L_12901bda;
L_12901b89:;
  /* 12901b89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901b8c mov edx, dword ptr [ecx*4 + 0x1292ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca44)));
  /* 12901b93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12901b96 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901b9a jne 0x12901bb0 */
  if (!C.zf) goto L_12901bb0;
  /* 12901b9c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12901b9e call dword ptr [0x12930260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930260))), 0x12901ba4u);
  /* 12901ba4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901ba7 mov dword ptr [ecx*4 + 0x1292ca44], eax */
  w32((uint32_t)(ECX*4 + 0x1292ca44), (EAX));
  /* 12901bae jmp 0x12901bd7 */
  goto L_12901bd7;
L_12901bb0:;
  /* 12901bb0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901bb4 jne 0x12901bca */
  if (!C.zf) goto L_12901bca;
  /* 12901bb6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12901bb8 call dword ptr [0x12930260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930260))), 0x12901bbeu);
  /* 12901bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901bc1 mov dword ptr [edx*4 + 0x1292ca44], eax */
  w32((uint32_t)(EDX*4 + 0x1292ca44), (EAX));
  /* 12901bc8 jmp 0x12901bd7 */
  goto L_12901bd7;
L_12901bca:;
  /* 12901bca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901bcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901bd0 mov dword ptr [eax*4 + 0x1292ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x1292ca44), (ECX));
L_12901bd7:;
  /* 12901bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12901bda:;
  /* 12901bda mov esp, ebp */
  ESP = (EBP);
  /* 12901bdc pop ebp */
  EBP = (pop32());
  /* 12901bdd ret  */
  ESPCHK(0x12901b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10001be0 @ 0x12901be0 (28 bytes, 11 insns) */
void f_12901be0(void) {
  FTRACE(0x12901be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12901be1 mov ebp, esp */
  EBP = (ESP);
  /* 12901be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12901be4 mov eax, dword ptr [0x1292ffc0] */
  EAX = (r32((uint32_t)(0x1292ffc0)));
  /* 12901be9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12901bec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901bef mov dword ptr [0x1292ffc0], ecx */
  w32((uint32_t)(0x1292ffc0), (ECX));
  /* 12901bf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12901bf8 mov esp, ebp */
  ESP = (EBP);
  /* 12901bfa pop ebp */
  EBP = (pop32());
  /* 12901bfb ret  */
  ESPCHK(0x12901be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c00 @ 0x12901c00 (912 bytes, 248 insns) */
void f_12901c00(void) {
  FTRACE(0x12901c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12901c01 mov ebp, esp */
  EBP = (ESP);
  /* 12901c03 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12901c08 call 0x12905ce0 */
  push32(0x12901c0du); f_12905ce0();
  /* 12901c0d push edi */
  push32((uint32_t)(EDI));
  /* 12901c0e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12901c15 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12901c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12901c1c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12901c22 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12901c24 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12901c26 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12901c27 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12901c2e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12901c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12901c35 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12901c3b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12901c3d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12901c3f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12901c40 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12901c47 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12901c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12901c4e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12901c54 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12901c56 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12901c58 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12901c59 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12901c5c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12901c62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901c66 jl 0x12901c6e */
  if ((C.sf!=C.of)) goto L_12901c6e;
  /* 12901c68 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901c6c jl 0x12901c76 */
  if ((C.sf!=C.of)) goto L_12901c76;
L_12901c6e:;
  /* 12901c6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12901c71 jmp 0x12901f8b */
  goto L_12901f8b;
L_12901c76:;
  /* 12901c76 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901c7a jne 0x12901d20 */
  if (!C.zf) goto L_12901d20;
  /* 12901c80 push 0x1292ca34 */
  push32((uint32_t)(0x1292ca34u));
  /* 12901c85 call dword ptr [0x12930278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930278))), 0x12901c8bu);
  /* 12901c8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901c8d jle 0x12901d20 */
  if ((C.zf||C.sf!=C.of)) goto L_12901d20;
  /* 12901c93 cmp dword ptr [0x1292e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901c9a jne 0x12901cde */
  if (!C.zf) goto L_12901cde;
  /* 12901c9c push 0x12929220 */
  push32((uint32_t)(0x12929220u));
  /* 12901ca1 call dword ptr [0x12930274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930274))), 0x12901ca7u);
  /* 12901ca7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12901cad cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901cb4 je 0x12901cd6 */
  if (C.zf) goto L_12901cd6;
  /* 12901cb6 push 0x12929214 */
  push32((uint32_t)(0x12929214u));
  /* 12901cbb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12901cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12901cc2 call dword ptr [0x12930270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930270))), 0x12901cc8u);
  /* 12901cc8 mov dword ptr [0x1292e480], eax */
  w32((uint32_t)(0x1292e480), (EAX));
  /* 12901ccd cmp dword ptr [0x1292e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901cd4 jne 0x12901cde */
  if (!C.zf) goto L_12901cde;
L_12901cd6:;
  /* 12901cd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12901cd9 jmp 0x12901f8b */
  goto L_12901f8b;
L_12901cde:;
  /* 12901cde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901ce1 push edx */
  push32((uint32_t)(EDX));
  /* 12901ce2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901ce5 push eax */
  push32((uint32_t)(EAX));
  /* 12901ce6 push 0x129291e0 */
  push32((uint32_t)(0x129291e0u));
  /* 12901ceb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12901cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 12901cf2 call dword ptr [0x1292e480] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e480))), 0x12901cf8u);
  /* 12901cf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901cfb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12901d01 push edx */
  push32((uint32_t)(EDX));
  /* 12901d02 call dword ptr [0x1293026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293026c))), 0x12901d08u);
  /* 12901d08 push 0x1292ca34 */
  push32((uint32_t)(0x1292ca34u));
  /* 12901d0d call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x12901d13u);
  /* 12901d13 call 0x12901af0 */
  push32(0x12901d18u); f_12901af0();
  /* 12901d18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12901d1b jmp 0x12901f8b */
  goto L_12901f8b;
L_12901d20:;
  /* 12901d20 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901d24 je 0x12901d5d */
  if (C.zf) goto L_12901d5d;
  /* 12901d26 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12901d2c push eax */
  push32((uint32_t)(EAX));
  /* 12901d2d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12901d30 push ecx */
  push32((uint32_t)(ECX));
  /* 12901d31 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12901d36 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12901d3c push edx */
  push32((uint32_t)(EDX));
  /* 12901d3d call 0x12905be0 */
  push32(0x12901d42u); f_12905be0();
  /* 12901d42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901d47 jge 0x12901d5d */
  if ((C.sf==C.of)) goto L_12901d5d;
  /* 12901d49 push 0x129291b4 */
  push32((uint32_t)(0x129291b4u));
  /* 12901d4e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12901d54 push eax */
  push32((uint32_t)(EAX));
  /* 12901d55 call 0x12905af0 */
  push32(0x12901d5au); f_12905af0();
  /* 12901d5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12901d5d:;
  /* 12901d5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901d61 jne 0x12901d95 */
  if (!C.zf) goto L_12901d95;
  /* 12901d63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901d67 je 0x12901d75 */
  if (C.zf) goto L_12901d75;
  /* 12901d69 mov dword ptr [ebp - 0x3028], 0x129291a0 */
  w32((uint32_t)(EBP + -0x3028), (0x129291a0u));
  /* 12901d73 jmp 0x12901d7f */
  goto L_12901d7f;
L_12901d75:;
  /* 12901d75 mov dword ptr [ebp - 0x3028], 0x1292918c */
  w32((uint32_t)(EBP + -0x3028), (0x1292918cu));
L_12901d7f:;
  /* 12901d7f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12901d85 push ecx */
  push32((uint32_t)(ECX));
  /* 12901d86 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12901d8c push edx */
  push32((uint32_t)(EDX));
  /* 12901d8d call 0x12905af0 */
  push32(0x12901d92u); f_12905af0();
  /* 12901d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12901d95:;
  /* 12901d95 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12901d9b push eax */
  push32((uint32_t)(EAX));
  /* 12901d9c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12901da2 push ecx */
  push32((uint32_t)(ECX));
  /* 12901da3 call 0x12905b00 */
  push32(0x12901da8u); f_12905b00();
  /* 12901da8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901dab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901daf jne 0x12901dea */
  if (!C.zf) goto L_12901dea;
  /* 12901db1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901db4 mov eax, dword ptr [edx*4 + 0x1292ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292ca38)));
  /* 12901dbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12901dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901dc0 je 0x12901dd6 */
  if (C.zf) goto L_12901dd6;
  /* 12901dc2 push 0x12929188 */
  push32((uint32_t)(0x12929188u));
  /* 12901dc7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12901dcd push ecx */
  push32((uint32_t)(ECX));
  /* 12901dce call 0x12905b00 */
  push32(0x12901dd3u); f_12905b00();
  /* 12901dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12901dd6:;
  /* 12901dd6 push 0x12929184 */
  push32((uint32_t)(0x12929184u));
  /* 12901ddb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12901de1 push edx */
  push32((uint32_t)(EDX));
  /* 12901de2 call 0x12905b00 */
  push32(0x12901de7u); f_12905b00();
  /* 12901de7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12901dea:;
  /* 12901dea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901dee je 0x12901e32 */
  if (C.zf) goto L_12901e32;
  /* 12901df0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12901df6 push eax */
  push32((uint32_t)(EAX));
  /* 12901df7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901dfa push ecx */
  push32((uint32_t)(ECX));
  /* 12901dfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901dfe push edx */
  push32((uint32_t)(EDX));
  /* 12901dff push 0x12929178 */
  push32((uint32_t)(0x12929178u));
  /* 12901e04 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12901e09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12901e0f push eax */
  push32((uint32_t)(EAX));
  /* 12901e10 call 0x129059f0 */
  push32(0x12901e15u); f_129059f0();
  /* 12901e15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901e1a jge 0x12901e30 */
  if ((C.sf==C.of)) goto L_12901e30;
  /* 12901e1c push 0x129291b4 */
  push32((uint32_t)(0x129291b4u));
  /* 12901e21 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12901e27 push ecx */
  push32((uint32_t)(ECX));
  /* 12901e28 call 0x12905af0 */
  push32(0x12901e2du); f_12905af0();
  /* 12901e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12901e30:;
  /* 12901e30 jmp 0x12901e48 */
  goto L_12901e48;
L_12901e32:;
  /* 12901e32 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12901e38 push edx */
  push32((uint32_t)(EDX));
  /* 12901e39 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12901e3f push eax */
  push32((uint32_t)(EAX));
  /* 12901e40 call 0x12905af0 */
  push32(0x12901e45u); f_12905af0();
  /* 12901e45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12901e48:;
  /* 12901e48 cmp dword ptr [0x1292ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901e4f je 0x12901e8c */
  if (C.zf) goto L_12901e8c;
  /* 12901e51 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12901e57 push ecx */
  push32((uint32_t)(ECX));
  /* 12901e58 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12901e5e push edx */
  push32((uint32_t)(EDX));
  /* 12901e5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901e62 push eax */
  push32((uint32_t)(EAX));
  /* 12901e63 call dword ptr [0x1292ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292ffc0))), 0x12901e69u);
  /* 12901e69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901e6e je 0x12901e8c */
  if (C.zf) goto L_12901e8c;
  /* 12901e70 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901e74 jne 0x12901e81 */
  if (!C.zf) goto L_12901e81;
  /* 12901e76 push 0x1292ca34 */
  push32((uint32_t)(0x1292ca34u));
  /* 12901e7b call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x12901e81u);
L_12901e81:;
  /* 12901e81 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12901e87 jmp 0x12901f8b */
  goto L_12901f8b;
L_12901e8c:;
  /* 12901e8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901e8f mov edx, dword ptr [ecx*4 + 0x1292ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca38)));
  /* 12901e96 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12901e99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12901e9b je 0x12901edb */
  if (C.zf) goto L_12901edb;
  /* 12901e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901ea0 cmp dword ptr [eax*4 + 0x1292ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1292ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901ea8 je 0x12901edb */
  if (C.zf) goto L_12901edb;
  /* 12901eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12901eac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12901eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12901eb3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12901eb9 push edx */
  push32((uint32_t)(EDX));
  /* 12901eba call 0x12905970 */
  push32(0x12901ebfu); f_12905970();
  /* 12901ebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901ec2 push eax */
  push32((uint32_t)(EAX));
  /* 12901ec3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12901ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12901eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901ecd mov edx, dword ptr [ecx*4 + 0x1292ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca44)));
  /* 12901ed4 push edx */
  push32((uint32_t)(EDX));
  /* 12901ed5 call dword ptr [0x12930264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930264))), 0x12901edbu);
L_12901edb:;
  /* 12901edb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901ede mov ecx, dword ptr [eax*4 + 0x1292ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292ca38)));
  /* 12901ee5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12901ee8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12901eea je 0x12901ef9 */
  if (C.zf) goto L_12901ef9;
  /* 12901eec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12901ef2 push edx */
  push32((uint32_t)(EDX));
  /* 12901ef3 call dword ptr [0x1293026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293026c))), 0x12901ef9u);
L_12901ef9:;
  /* 12901ef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901efc mov ecx, dword ptr [eax*4 + 0x1292ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292ca38)));
  /* 12901f03 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12901f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12901f08 je 0x12901f78 */
  if (C.zf) goto L_12901f78;
  /* 12901f0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901f0e je 0x12901f2d */
  if (C.zf) goto L_12901f2d;
  /* 12901f10 push 0xa */
  push32((uint32_t)(0xau));
  /* 12901f12 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12901f18 push edx */
  push32((uint32_t)(EDX));
  /* 12901f19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12901f1c push eax */
  push32((uint32_t)(EAX));
  /* 12901f1d call 0x12905680 */
  push32(0x12901f22u); f_12905680();
  /* 12901f22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901f25 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12901f2b jmp 0x12901f37 */
  goto L_12901f37;
L_12901f2d:;
  /* 12901f2d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12901f37:;
  /* 12901f37 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12901f3d push ecx */
  push32((uint32_t)(ECX));
  /* 12901f3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12901f41 push edx */
  push32((uint32_t)(EDX));
  /* 12901f42 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12901f48 push eax */
  push32((uint32_t)(EAX));
  /* 12901f49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12901f4c push ecx */
  push32((uint32_t)(ECX));
  /* 12901f4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12901f50 push edx */
  push32((uint32_t)(EDX));
  /* 12901f51 call 0x12901f90 */
  push32(0x12901f56u); f_12901f90();
  /* 12901f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901f59 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12901f5f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901f63 jne 0x12901f70 */
  if (!C.zf) goto L_12901f70;
  /* 12901f65 push 0x1292ca34 */
  push32((uint32_t)(0x1292ca34u));
  /* 12901f6a call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x12901f70u);
L_12901f70:;
  /* 12901f70 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12901f76 jmp 0x12901f8b */
  goto L_12901f8b;
L_12901f78:;
  /* 12901f78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901f7c jne 0x12901f89 */
  if (!C.zf) goto L_12901f89;
  /* 12901f7e push 0x1292ca34 */
  push32((uint32_t)(0x1292ca34u));
  /* 12901f83 call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x12901f89u);
L_12901f89:;
  /* 12901f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12901f8b:;
  /* 12901f8b pop edi */
  EDI = (pop32());
  /* 12901f8c mov esp, ebp */
  ESP = (EBP);
  /* 12901f8e pop ebp */
  EBP = (pop32());
  /* 12901f8f ret  */
  ESPCHK(0x12901c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f90 @ 0x12901f90 (780 bytes, 197 insns) */
void f_12901f90(void) {
  FTRACE(0x12901f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12901f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12901f91 mov ebp, esp */
  EBP = (ESP);
  /* 12901f93 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12901f98 call 0x12905ce0 */
  push32(0x12901f9du); f_12905ce0();
L_12901f9d:;
  /* 12901f9d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901fa1 jne 0x12901fc8 */
  if (!C.zf) goto L_12901fc8;
  /* 12901fa3 push 0x12929370 */
  push32((uint32_t)(0x12929370u));
  /* 12901fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12901faa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12901faf push 0x12929364 */
  push32((uint32_t)(0x12929364u));
  /* 12901fb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12901fb6 call 0x12901c00 */
  push32(0x12901fbbu); f_12901c00();
  /* 12901fbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12901fbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12901fc1 jne 0x12901fc8 */
  if (!C.zf) goto L_12901fc8;
  /* 12901fc3 call 0x12901af0 */
  push32(0x12901fc8u); f_12901af0();
L_12901fc8:;
  /* 12901fc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12901fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901fcc jne 0x12901f9d */
  if (!C.zf) goto L_12901f9d;
  /* 12901fce push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12901fd3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12901fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12901fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12901fdc call dword ptr [0x1293027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293027c))), 0x12901fe2u);
  /* 12901fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12901fe4 jne 0x12901ffa */
  if (!C.zf) goto L_12901ffa;
  /* 12901fe6 push 0x1292934c */
  push32((uint32_t)(0x1292934cu));
  /* 12901feb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12901ff1 push edx */
  push32((uint32_t)(EDX));
  /* 12901ff2 call 0x12905af0 */
  push32(0x12901ff7u); f_12905af0();
  /* 12901ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12901ffa:;
  /* 12901ffa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12902000 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12902003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902006 push ecx */
  push32((uint32_t)(ECX));
  /* 12902007 call 0x12905970 */
  push32(0x1290200cu); f_12905970();
  /* 1290200c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290200f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902012 jbe 0x1290203d */
  if ((C.cf||C.zf)) goto L_1290203d;
  /* 12902014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902017 push edx */
  push32((uint32_t)(EDX));
  /* 12902018 call 0x12905970 */
  push32(0x1290201du); f_12905970();
  /* 1290201d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902020 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902023 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12902027 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290202a push 3 */
  push32((uint32_t)(0x3u));
  /* 1290202c push 0x12929348 */
  push32((uint32_t)(0x12929348u));
  /* 12902031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902034 push eax */
  push32((uint32_t)(EAX));
  /* 12902035 call 0x12906360 */
  push32(0x1290203au); f_12906360();
  /* 1290203a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290203d:;
  /* 1290203d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902040 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12902046 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290204d je 0x12902098 */
  if (C.zf) goto L_12902098;
  /* 1290204f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12902055 push edx */
  push32((uint32_t)(EDX));
  /* 12902056 call 0x12905970 */
  push32(0x1290205bu); f_12905970();
  /* 1290205b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290205e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902061 jbe 0x12902098 */
  if ((C.cf||C.zf)) goto L_12902098;
  /* 12902063 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12902069 push eax */
  push32((uint32_t)(EAX));
  /* 1290206a call 0x12905970 */
  push32(0x1290206fu); f_12905970();
  /* 1290206f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902072 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12902078 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1290207c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12902082 push 3 */
  push32((uint32_t)(0x3u));
  /* 12902084 push 0x12929348 */
  push32((uint32_t)(0x12929348u));
  /* 12902089 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1290208f push eax */
  push32((uint32_t)(EAX));
  /* 12902090 call 0x12906360 */
  push32(0x12902095u); f_12906360();
  /* 12902095 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12902098:;
  /* 12902098 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290209c jne 0x129020aa */
  if (!C.zf) goto L_129020aa;
  /* 1290209e mov dword ptr [ebp - 0x1114], 0x129292d4 */
  w32((uint32_t)(EBP + -0x1114), (0x129292d4u));
  /* 129020a8 jmp 0x129020b4 */
  goto L_129020b4;
L_129020aa:;
  /* 129020aa mov dword ptr [ebp - 0x1114], 0x12929074 */
  w32((uint32_t)(EBP + -0x1114), (0x12929074u));
L_129020b4:;
  /* 129020b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129020b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129020ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129020bc je 0x129020c9 */
  if (C.zf) goto L_129020c9;
  /* 129020be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129020c1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 129020c7 jmp 0x129020d3 */
  goto L_129020d3;
L_129020c9:;
  /* 129020c9 mov dword ptr [ebp - 0x1118], 0x12929074 */
  w32((uint32_t)(EBP + -0x1118), (0x12929074u));
L_129020d3:;
  /* 129020d3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129020d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129020d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129020db je 0x129020ef */
  if (C.zf) goto L_129020ef;
  /* 129020dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129020e1 jne 0x129020ef */
  if (!C.zf) goto L_129020ef;
  /* 129020e3 mov dword ptr [ebp - 0x111c], 0x129292c4 */
  w32((uint32_t)(EBP + -0x111c), (0x129292c4u));
  /* 129020ed jmp 0x129020f9 */
  goto L_129020f9;
L_129020ef:;
  /* 129020ef mov dword ptr [ebp - 0x111c], 0x12929074 */
  w32((uint32_t)(EBP + -0x111c), (0x12929074u));
L_129020f9:;
  /* 129020f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129020fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129020ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12902101 je 0x1290210f */
  if (C.zf) goto L_1290210f;
  /* 12902103 mov dword ptr [ebp - 0x1120], 0x129292c0 */
  w32((uint32_t)(EBP + -0x1120), (0x129292c0u));
  /* 1290210d jmp 0x12902119 */
  goto L_12902119;
L_1290210f:;
  /* 1290210f mov dword ptr [ebp - 0x1120], 0x12929074 */
  w32((uint32_t)(EBP + -0x1120), (0x12929074u));
L_12902119:;
  /* 12902119 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290211d je 0x1290212a */
  if (C.zf) goto L_1290212a;
  /* 1290211f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902122 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12902128 jmp 0x12902134 */
  goto L_12902134;
L_1290212a:;
  /* 1290212a mov dword ptr [ebp - 0x1124], 0x12929074 */
  w32((uint32_t)(EBP + -0x1124), (0x12929074u));
L_12902134:;
  /* 12902134 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902138 je 0x12902146 */
  if (C.zf) goto L_12902146;
  /* 1290213a mov dword ptr [ebp - 0x1128], 0x129292b8 */
  w32((uint32_t)(EBP + -0x1128), (0x129292b8u));
  /* 12902144 jmp 0x12902150 */
  goto L_12902150;
L_12902146:;
  /* 12902146 mov dword ptr [ebp - 0x1128], 0x12929074 */
  w32((uint32_t)(EBP + -0x1128), (0x12929074u));
L_12902150:;
  /* 12902150 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902154 je 0x12902161 */
  if (C.zf) goto L_12902161;
  /* 12902156 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902159 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1290215f jmp 0x1290216b */
  goto L_1290216b;
L_12902161:;
  /* 12902161 mov dword ptr [ebp - 0x112c], 0x12929074 */
  w32((uint32_t)(EBP + -0x112c), (0x12929074u));
L_1290216b:;
  /* 1290216b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290216f je 0x1290217d */
  if (C.zf) goto L_1290217d;
  /* 12902171 mov dword ptr [ebp - 0x1130], 0x129292b0 */
  w32((uint32_t)(EBP + -0x1130), (0x129292b0u));
  /* 1290217b jmp 0x12902187 */
  goto L_12902187;
L_1290217d:;
  /* 1290217d mov dword ptr [ebp - 0x1130], 0x12929074 */
  w32((uint32_t)(EBP + -0x1130), (0x12929074u));
L_12902187:;
  /* 12902187 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290218e je 0x1290219e */
  if (C.zf) goto L_1290219e;
  /* 12902190 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12902196 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1290219c jmp 0x129021a8 */
  goto L_129021a8;
L_1290219e:;
  /* 1290219e mov dword ptr [ebp - 0x1134], 0x12929074 */
  w32((uint32_t)(EBP + -0x1134), (0x12929074u));
L_129021a8:;
  /* 129021a8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129021af je 0x129021bd */
  if (C.zf) goto L_129021bd;
  /* 129021b1 mov dword ptr [ebp - 0x1138], 0x129292a4 */
  w32((uint32_t)(EBP + -0x1138), (0x129292a4u));
  /* 129021bb jmp 0x129021c7 */
  goto L_129021c7;
L_129021bd:;
  /* 129021bd mov dword ptr [ebp - 0x1138], 0x12929074 */
  w32((uint32_t)(EBP + -0x1138), (0x12929074u));
L_129021c7:;
  /* 129021c7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 129021cd push edx */
  push32((uint32_t)(EDX));
  /* 129021ce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 129021d4 push eax */
  push32((uint32_t)(EAX));
  /* 129021d5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 129021db push ecx */
  push32((uint32_t)(ECX));
  /* 129021dc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 129021e2 push edx */
  push32((uint32_t)(EDX));
  /* 129021e3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 129021e9 push eax */
  push32((uint32_t)(EAX));
  /* 129021ea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 129021f0 push ecx */
  push32((uint32_t)(ECX));
  /* 129021f1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 129021f7 push edx */
  push32((uint32_t)(EDX));
  /* 129021f8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 129021fe push eax */
  push32((uint32_t)(EAX));
  /* 129021ff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12902205 push ecx */
  push32((uint32_t)(ECX));
  /* 12902206 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1290220c push edx */
  push32((uint32_t)(EDX));
  /* 1290220d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902210 push eax */
  push32((uint32_t)(EAX));
  /* 12902211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902214 mov edx, dword ptr [ecx*4 + 0x1292ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca50)));
  /* 1290221b push edx */
  push32((uint32_t)(EDX));
  /* 1290221c push 0x12929250 */
  push32((uint32_t)(0x12929250u));
  /* 12902221 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12902226 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1290222c push eax */
  push32((uint32_t)(EAX));
  /* 1290222d call 0x129059f0 */
  push32(0x12902232u); f_129059f0();
  /* 12902232 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12902237 jge 0x1290224d */
  if ((C.sf==C.of)) goto L_1290224d;
  /* 12902239 push 0x129291b4 */
  push32((uint32_t)(0x129291b4u));
  /* 1290223e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12902244 push ecx */
  push32((uint32_t)(ECX));
  /* 12902245 call 0x12905af0 */
  push32(0x1290224au); f_12905af0();
  /* 1290224a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290224d:;
  /* 1290224d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12902252 push 0x1292922c */
  push32((uint32_t)(0x1292922cu));
  /* 12902257 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1290225d push edx */
  push32((uint32_t)(EDX));
  /* 1290225e call 0x129062a0 */
  push32(0x12902263u); f_129062a0();
  /* 12902263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902266 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1290226c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902273 jne 0x12902286 */
  if (!C.zf) goto L_12902286;
  /* 12902275 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12902277 call 0x12905fe0 */
  push32(0x1290227cu); f_12905fe0();
  /* 1290227c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290227f push 3 */
  push32((uint32_t)(0x3u));
  /* 12902281 call 0x12902300 */
  push32(0x12902286u); f_12902300();
L_12902286:;
  /* 12902286 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290228d jne 0x12902296 */
  if (!C.zf) goto L_12902296;
  /* 1290228f mov eax, 1 */
  EAX = (0x1u);
  /* 12902294 jmp 0x12902298 */
  goto L_12902298;
L_12902296:;
  /* 12902296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12902298:;
  /* 12902298 mov esp, ebp */
  ESP = (EBP);
  /* 1290229a pop ebp */
  EBP = (pop32());
  /* 1290229b ret  */
  ESPCHK(0x12901f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100022a0 @ 0x129022a0 (56 bytes, 15 insns) */
void f_129022a0(void) {
  FTRACE(0x129022a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129022a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129022a1 mov ebp, esp */
  EBP = (ESP);
  /* 129022a3 cmp dword ptr [0x1292ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129022aa je 0x129022b2 */
  if (C.zf) goto L_129022b2;
  /* 129022ac call dword ptr [0x1292ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292ffbc))), 0x129022b2u);
L_129022b2:;
  /* 129022b2 push 0x1292c418 */
  push32((uint32_t)(0x1292c418u));
  /* 129022b7 push 0x1292c208 */
  push32((uint32_t)(0x1292c208u));
  /* 129022bc call 0x12902470 */
  push32(0x129022c1u); f_12902470();
  /* 129022c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129022c4 push 0x1292c104 */
  push32((uint32_t)(0x1292c104u));
  /* 129022c9 push 0x1292c000 */
  push32((uint32_t)(0x1292c000u));
  /* 129022ce call 0x12902470 */
  push32(0x129022d3u); f_12902470();
  /* 129022d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129022d6 pop ebp */
  EBP = (pop32());
  /* 129022d7 ret  */
  ESPCHK(0x129022a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x129022e0 (21 bytes, 10 insns) */
void f_129022e0(void) {
  FTRACE(0x129022e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129022e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129022e1 mov ebp, esp */
  EBP = (ESP);
  /* 129022e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129022e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129022e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129022ea push eax */
  push32((uint32_t)(EAX));
  /* 129022eb call 0x12902360 */
  push32(0x129022f0u); f_12902360();
  /* 129022f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129022f3 pop ebp */
  EBP = (pop32());
  /* 129022f4 ret  */
  ESPCHK(0x129022e0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12902300 (21 bytes, 10 insns) */
void f_12902300(void) {
  FTRACE(0x12902300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902300 push ebp */
  push32((uint32_t)(EBP));
  /* 12902301 mov ebp, esp */
  EBP = (ESP);
  /* 12902303 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902305 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290230a push eax */
  push32((uint32_t)(EAX));
  /* 1290230b call 0x12902360 */
  push32(0x12902310u); f_12902360();
  /* 12902310 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902313 pop ebp */
  EBP = (pop32());
  /* 12902314 ret  */
  ESPCHK(0x12902300u, _esp0);
  ESP += 4; return;
}

/* FUN_10002320 @ 0x12902320 (19 bytes, 9 insns) */
void f_12902320(void) {
  FTRACE(0x12902320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902320 push ebp */
  push32((uint32_t)(EBP));
  /* 12902321 mov ebp, esp */
  EBP = (ESP);
  /* 12902323 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902325 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902327 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902329 call 0x12902360 */
  push32(0x1290232eu); f_12902360();
  /* 1290232e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902331 pop ebp */
  EBP = (pop32());
  /* 12902332 ret  */
  ESPCHK(0x12902320u, _esp0);
  ESP += 4; return;
}

/* FUN_10002340 @ 0x12902340 (19 bytes, 9 insns) */
void f_12902340(void) {
  FTRACE(0x12902340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902340 push ebp */
  push32((uint32_t)(EBP));
  /* 12902341 mov ebp, esp */
  EBP = (ESP);
  /* 12902343 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902345 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902347 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902349 call 0x12902360 */
  push32(0x1290234eu); f_12902360();
  /* 1290234e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902351 pop ebp */
  EBP = (pop32());
  /* 12902352 ret  */
  ESPCHK(0x12902340u, _esp0);
  ESP += 4; return;
}

/* FUN_10002360 @ 0x12902360 (227 bytes, 61 insns) */
void f_12902360(void) {
  FTRACE(0x12902360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902360 push ebp */
  push32((uint32_t)(EBP));
  /* 12902361 mov ebp, esp */
  EBP = (ESP);
  /* 12902363 push ecx */
  push32((uint32_t)(ECX));
  /* 12902364 call 0x12902450 */
  push32(0x12902369u); f_12902450();
  /* 12902369 cmp dword ptr [0x1292e4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902370 jne 0x12902383 */
  if (!C.zf) goto L_12902383;
  /* 12902372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902375 push eax */
  push32((uint32_t)(EAX));
  /* 12902376 call dword ptr [0x12930288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930288))), 0x1290237cu);
  /* 1290237c push eax */
  push32((uint32_t)(EAX));
  /* 1290237d call dword ptr [0x12930284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930284))), 0x12902383u);
L_12902383:;
  /* 12902383 mov dword ptr [0x1292e4c0], 1 */
  w32((uint32_t)(0x1292e4c0), (0x1u));
  /* 1290238d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12902390 mov byte ptr [0x1292e4bc], cl */
  w8((uint32_t)(0x1292e4bc), (CL));
  /* 12902396 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290239a jne 0x129023e3 */
  if (!C.zf) goto L_129023e3;
  /* 1290239c cmp dword ptr [0x1292ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129023a3 je 0x129023d1 */
  if (C.zf) goto L_129023d1;
  /* 129023a5 mov edx, dword ptr [0x1292ffb4] */
  EDX = (r32((uint32_t)(0x1292ffb4)));
  /* 129023ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129023ae:;
  /* 129023ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129023b1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129023b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129023b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129023ba cmp ecx, dword ptr [0x1292ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129023c0 jb 0x129023d1 */
  if (C.cf) goto L_129023d1;
  /* 129023c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129023c5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129023c8 je 0x129023cf */
  if (C.zf) goto L_129023cf;
  /* 129023ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129023cd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x129023cfu);
L_129023cf:;
  /* 129023cf jmp 0x129023ae */
  goto L_129023ae;
L_129023d1:;
  /* 129023d1 push 0x1292c724 */
  push32((uint32_t)(0x1292c724u));
  /* 129023d6 push 0x1292c51c */
  push32((uint32_t)(0x1292c51cu));
  /* 129023db call 0x12902470 */
  push32(0x129023e0u); f_12902470();
  /* 129023e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129023e3:;
  /* 129023e3 push 0x1292c92c */
  push32((uint32_t)(0x1292c92cu));
  /* 129023e8 push 0x1292c828 */
  push32((uint32_t)(0x1292c828u));
  /* 129023ed call 0x12902470 */
  push32(0x129023f2u); f_12902470();
  /* 129023f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129023f5 cmp dword ptr [0x1292e4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129023fc jne 0x1290241e */
  if (!C.zf) goto L_1290241e;
  /* 129023fe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12902400 call 0x12904050 */
  push32(0x12902405u); f_12904050();
  /* 12902405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902408 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1290240b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290240d je 0x1290241e */
  if (C.zf) goto L_1290241e;
  /* 1290240f mov dword ptr [0x1292e4c8], 1 */
  w32((uint32_t)(0x1292e4c8), (0x1u));
  /* 12902419 call 0x12904960 */
  push32(0x1290241eu); f_12904960();
L_1290241e:;
  /* 1290241e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902422 je 0x1290242b */
  if (C.zf) goto L_1290242b;
  /* 12902424 call 0x12902460 */
  push32(0x12902429u); f_12902460();
  /* 12902429 jmp 0x1290243f */
  goto L_1290243f;
L_1290242b:;
  /* 1290242b mov dword ptr [0x1292e4c4], 1 */
  w32((uint32_t)(0x1292e4c4), (0x1u));
  /* 12902435 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902438 push ecx */
  push32((uint32_t)(ECX));
  /* 12902439 call dword ptr [0x12930280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930280))), 0x1290243fu);
L_1290243f:;
  /* 1290243f mov esp, ebp */
  ESP = (EBP);
  /* 12902441 pop ebp */
  EBP = (pop32());
  /* 12902442 ret  */
  ESPCHK(0x12902360u, _esp0);
  ESP += 4; return;
}

/* FUN_10002450 @ 0x12902450 (15 bytes, 7 insns) */
void f_12902450(void) {
  FTRACE(0x12902450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902450 push ebp */
  push32((uint32_t)(EBP));
  /* 12902451 mov ebp, esp */
  EBP = (ESP);
  /* 12902453 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12902455 call 0x12906540 */
  push32(0x1290245au); f_12906540();
  /* 1290245a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290245d pop ebp */
  EBP = (pop32());
  /* 1290245e ret  */
  ESPCHK(0x12902450u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x12902460 (15 bytes, 7 insns) */
void f_12902460(void) {
  FTRACE(0x12902460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902460 push ebp */
  push32((uint32_t)(EBP));
  /* 12902461 mov ebp, esp */
  EBP = (ESP);
  /* 12902463 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12902465 call 0x129065e0 */
  push32(0x1290246au); f_129065e0();
  /* 1290246a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290246d pop ebp */
  EBP = (pop32());
  /* 1290246e ret  */
  ESPCHK(0x12902460u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12902470 (37 bytes, 16 insns) */
void f_12902470(void) {
  FTRACE(0x12902470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902470 push ebp */
  push32((uint32_t)(EBP));
  /* 12902471 mov ebp, esp */
  EBP = (ESP);
L_12902473:;
  /* 12902473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902476 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902479 jae 0x12902493 */
  if (!C.cf) goto L_12902493;
  /* 1290247b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290247e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902481 je 0x12902488 */
  if (C.zf) goto L_12902488;
  /* 12902483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902486 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12902488u);
L_12902488:;
  /* 12902488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290248b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290248e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12902491 jmp 0x12902473 */
  goto L_12902473;
L_12902493:;
  /* 12902493 pop ebp */
  EBP = (pop32());
  /* 12902494 ret  */
  ESPCHK(0x12902470u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a0 @ 0x129024a0 (130 bytes, 42 insns) */
void f_129024a0(void) {
  FTRACE(0x129024a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129024a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129024a1 mov ebp, esp */
  EBP = (ESP);
  /* 129024a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129024a4 call 0x12906460 */
  push32(0x129024a9u); f_12906460();
  /* 129024a9 call dword ptr [0x12930294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930294))), 0x129024afu);
  /* 129024af mov dword ptr [0x1292ca5c], eax */
  w32((uint32_t)(0x1292ca5c), (EAX));
  /* 129024b4 cmp dword ptr [0x1292ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1292ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129024bb jne 0x129024c1 */
  if (!C.zf) goto L_129024c1;
  /* 129024bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129024bf jmp 0x1290251e */
  goto L_1290251e;
L_129024c1:;
  /* 129024c1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 129024c3 push 0x12929388 */
  push32((uint32_t)(0x12929388u));
  /* 129024c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129024ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 129024cc push 1 */
  push32((uint32_t)(0x1u));
  /* 129024ce call 0x12902f50 */
  push32(0x129024d3u); f_12902f50();
  /* 129024d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129024d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129024d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129024dd je 0x129024f4 */
  if (C.zf) goto L_129024f4;
  /* 129024df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129024e2 push eax */
  push32((uint32_t)(EAX));
  /* 129024e3 mov ecx, dword ptr [0x1292ca5c] */
  ECX = (r32((uint32_t)(0x1292ca5c)));
  /* 129024e9 push ecx */
  push32((uint32_t)(ECX));
  /* 129024ea call dword ptr [0x12930290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930290))), 0x129024f0u);
  /* 129024f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129024f2 jne 0x129024f8 */
  if (!C.zf) goto L_129024f8;
L_129024f4:;
  /* 129024f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129024f6 jmp 0x1290251e */
  goto L_1290251e;
L_129024f8:;
  /* 129024f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129024fb push edx */
  push32((uint32_t)(EDX));
  /* 129024fc call 0x12902560 */
  push32(0x12902501u); f_12902560();
  /* 12902501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902504 call dword ptr [0x1293028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293028c))), 0x1290250au);
  /* 1290250a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290250d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1290250f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902512 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12902519 mov eax, 1 */
  EAX = (0x1u);
L_1290251e:;
  /* 1290251e mov esp, ebp */
  ESP = (EBP);
  /* 12902520 pop ebp */
  EBP = (pop32());
  /* 12902521 ret  */
  ESPCHK(0x129024a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002530 @ 0x12902530 (41 bytes, 11 insns) */
void f_12902530(void) {
  FTRACE(0x12902530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902530 push ebp */
  push32((uint32_t)(EBP));
  /* 12902531 mov ebp, esp */
  EBP = (ESP);
  /* 12902533 call 0x129064a0 */
  push32(0x12902538u); f_129064a0();
  /* 12902538 cmp dword ptr [0x1292ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1292ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290253f je 0x12902557 */
  if (C.zf) goto L_12902557;
  /* 12902541 mov eax, dword ptr [0x1292ca5c] */
  EAX = (r32((uint32_t)(0x1292ca5c)));
  /* 12902546 push eax */
  push32((uint32_t)(EAX));
  /* 12902547 call dword ptr [0x12930298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930298))), 0x1290254du);
  /* 1290254d mov dword ptr [0x1292ca5c], 0xffffffff */
  w32((uint32_t)(0x1292ca5c), (0xffffffffu));
L_12902557:;
  /* 12902557 pop ebp */
  EBP = (pop32());
  /* 12902558 ret  */
  ESPCHK(0x12902530u, _esp0);
  ESP += 4; return;
}

/* FUN_10002560 @ 0x12902560 (25 bytes, 8 insns) */
void f_12902560(void) {
  FTRACE(0x12902560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902560 push ebp */
  push32((uint32_t)(EBP));
  /* 12902561 mov ebp, esp */
  EBP = (ESP);
  /* 12902563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902566 mov dword ptr [eax + 0x50], 0x1292cc00 */
  w32((uint32_t)(EAX + 0x50), (0x1292cc00u));
  /* 1290256d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902570 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12902577 pop ebp */
  EBP = (pop32());
  /* 12902578 ret  */
  ESPCHK(0x12902560u, _esp0);
  ESP += 4; return;
}

/* FUN_10002580 @ 0x12902580 (152 bytes, 48 insns) */
void f_12902580(void) {
  FTRACE(0x12902580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902580 push ebp */
  push32((uint32_t)(EBP));
  /* 12902581 mov ebp, esp */
  EBP = (ESP);
  /* 12902583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12902586 call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x1290258cu);
  /* 1290258c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290258f mov eax, dword ptr [0x1292ca5c] */
  EAX = (r32((uint32_t)(0x1292ca5c)));
  /* 12902594 push eax */
  push32((uint32_t)(EAX));
  /* 12902595 call dword ptr [0x129302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a0))), 0x1290259bu);
  /* 1290259b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290259e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129025a2 jne 0x12902607 */
  if (!C.zf) goto L_12902607;
  /* 129025a4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 129025a9 push 0x12929388 */
  push32((uint32_t)(0x12929388u));
  /* 129025ae push 2 */
  push32((uint32_t)(0x2u));
  /* 129025b0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 129025b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129025b4 call 0x12902f50 */
  push32(0x129025b9u); f_12902f50();
  /* 129025b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129025bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129025bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129025c3 je 0x129025fd */
  if (C.zf) goto L_129025fd;
  /* 129025c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129025c8 push ecx */
  push32((uint32_t)(ECX));
  /* 129025c9 mov edx, dword ptr [0x1292ca5c] */
  EDX = (r32((uint32_t)(0x1292ca5c)));
  /* 129025cf push edx */
  push32((uint32_t)(EDX));
  /* 129025d0 call dword ptr [0x12930290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930290))), 0x129025d6u);
  /* 129025d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129025d8 je 0x129025fd */
  if (C.zf) goto L_129025fd;
  /* 129025da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129025dd push eax */
  push32((uint32_t)(EAX));
  /* 129025de call 0x12902560 */
  push32(0x129025e3u); f_12902560();
  /* 129025e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129025e6 call dword ptr [0x1293028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293028c))), 0x129025ecu);
  /* 129025ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129025ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129025f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129025f4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 129025fb jmp 0x12902607 */
  goto L_12902607;
L_129025fd:;
  /* 129025fd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 129025ff call 0x12901ab0 */
  push32(0x12902604u); f_12901ab0();
  /* 12902604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12902607:;
  /* 12902607 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290260a push eax */
  push32((uint32_t)(EAX));
  /* 1290260b call dword ptr [0x1293029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293029c))), 0x12902611u);
  /* 12902611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902614 mov esp, ebp */
  ESP = (EBP);
  /* 12902616 pop ebp */
  EBP = (pop32());
  /* 12902617 ret  */
  ESPCHK(0x12902580u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x12902620 (263 bytes, 86 insns) */
void f_12902620(void) {
  FTRACE(0x12902620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902620 push ebp */
  push32((uint32_t)(EBP));
  /* 12902621 mov ebp, esp */
  EBP = (ESP);
  /* 12902623 cmp dword ptr [0x1292ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1292ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290262a je 0x12902725 */
  if (C.zf) goto L_12902725;
  /* 12902630 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902634 jne 0x12902645 */
  if (!C.zf) goto L_12902645;
  /* 12902636 mov eax, dword ptr [0x1292ca5c] */
  EAX = (r32((uint32_t)(0x1292ca5c)));
  /* 1290263b push eax */
  push32((uint32_t)(EAX));
  /* 1290263c call dword ptr [0x129302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a0))), 0x12902642u);
  /* 12902642 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12902645:;
  /* 12902645 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902649 je 0x12902716 */
  if (C.zf) goto L_12902716;
  /* 1290264f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902652 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902656 je 0x12902669 */
  if (C.zf) goto L_12902669;
  /* 12902658 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290265a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290265d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12902660 push eax */
  push32((uint32_t)(EAX));
  /* 12902661 call 0x129035d0 */
  push32(0x12902666u); f_129035d0();
  /* 12902666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12902669:;
  /* 12902669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290266c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902670 je 0x12902683 */
  if (C.zf) goto L_12902683;
  /* 12902672 push 2 */
  push32((uint32_t)(0x2u));
  /* 12902674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902677 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1290267a push eax */
  push32((uint32_t)(EAX));
  /* 1290267b call 0x129035d0 */
  push32(0x12902680u); f_129035d0();
  /* 12902680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12902683:;
  /* 12902683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902686 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290268a je 0x1290269d */
  if (C.zf) goto L_1290269d;
  /* 1290268c push 2 */
  push32((uint32_t)(0x2u));
  /* 1290268e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902691 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12902694 push eax */
  push32((uint32_t)(EAX));
  /* 12902695 call 0x129035d0 */
  push32(0x1290269au); f_129035d0();
  /* 1290269a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290269d:;
  /* 1290269d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026a0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129026a4 je 0x129026b7 */
  if (C.zf) goto L_129026b7;
  /* 129026a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129026a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026ab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 129026ae push eax */
  push32((uint32_t)(EAX));
  /* 129026af call 0x129035d0 */
  push32(0x129026b4u); f_129035d0();
  /* 129026b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129026b7:;
  /* 129026b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026ba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129026be je 0x129026d1 */
  if (C.zf) goto L_129026d1;
  /* 129026c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129026c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026c5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 129026c8 push eax */
  push32((uint32_t)(EAX));
  /* 129026c9 call 0x129035d0 */
  push32(0x129026ceu); f_129035d0();
  /* 129026ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129026d1:;
  /* 129026d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026d4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129026d8 je 0x129026eb */
  if (C.zf) goto L_129026eb;
  /* 129026da push 2 */
  push32((uint32_t)(0x2u));
  /* 129026dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026df mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 129026e2 push eax */
  push32((uint32_t)(EAX));
  /* 129026e3 call 0x129035d0 */
  push32(0x129026e8u); f_129035d0();
  /* 129026e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129026eb:;
  /* 129026eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026ee cmp dword ptr [ecx + 0x50], 0x1292cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1292cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129026f5 je 0x12902708 */
  if (C.zf) goto L_12902708;
  /* 129026f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129026f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129026fc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 129026ff push eax */
  push32((uint32_t)(EAX));
  /* 12902700 call 0x129035d0 */
  push32(0x12902705u); f_129035d0();
  /* 12902705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12902708:;
  /* 12902708 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290270a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290270d push ecx */
  push32((uint32_t)(ECX));
  /* 1290270e call 0x129035d0 */
  push32(0x12902713u); f_129035d0();
  /* 12902713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12902716:;
  /* 12902716 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902718 mov edx, dword ptr [0x1292ca5c] */
  EDX = (r32((uint32_t)(0x1292ca5c)));
  /* 1290271e push edx */
  push32((uint32_t)(EDX));
  /* 1290271f call dword ptr [0x12930290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930290))), 0x12902725u);
L_12902725:;
  /* 12902725 pop ebp */
  EBP = (pop32());
  /* 12902726 ret  */
  ESPCHK(0x12902620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x12902730 (11 bytes, 5 insns) */
void f_12902730(void) {
  FTRACE(0x12902730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902730 push ebp */
  push32((uint32_t)(EBP));
  /* 12902731 mov ebp, esp */
  EBP = (ESP);
  /* 12902733 call dword ptr [0x1293028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293028c))), 0x12902739u);
  /* 12902739 pop ebp */
  EBP = (pop32());
  /* 1290273a ret  */
  ESPCHK(0x12902730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x12902740 (11 bytes, 5 insns) */
void f_12902740(void) {
  FTRACE(0x12902740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902740 push ebp */
  push32((uint32_t)(EBP));
  /* 12902741 mov ebp, esp */
  EBP = (ESP);
  /* 12902743 call dword ptr [0x129302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a8))), 0x12902749u);
  /* 12902749 pop ebp */
  EBP = (pop32());
  /* 1290274a ret  */
  ESPCHK(0x12902740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x12902750 (804 bytes, 236 insns) */
void f_12902750(void) {
  FTRACE(0x12902750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902750 push ebp */
  push32((uint32_t)(EBP));
  /* 12902751 mov ebp, esp */
  EBP = (ESP);
  /* 12902753 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12902756 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1290275b push 0x12929394 */
  push32((uint32_t)(0x12929394u));
  /* 12902760 push 2 */
  push32((uint32_t)(0x2u));
  /* 12902762 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12902767 call 0x12902b40 */
  push32(0x1290276cu); f_12902b40();
  /* 1290276c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290276f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12902772 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902776 jne 0x12902782 */
  if (!C.zf) goto L_12902782;
  /* 12902778 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1290277a call 0x12901ab0 */
  push32(0x1290277fu); f_12901ab0();
  /* 1290277f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12902782:;
  /* 12902782 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902785 mov dword ptr [0x1292fe60], eax */
  w32((uint32_t)(0x1292fe60), (EAX));
  /* 1290278a mov dword ptr [0x1292ff9c], 0x20 */
  w32((uint32_t)(0x1292ff9c), (0x20u));
  /* 12902794 jmp 0x1290279f */
  goto L_1290279f;
L_12902796:;
  /* 12902796 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902799 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290279c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1290279f:;
  /* 1290279f mov edx, dword ptr [0x1292fe60] */
  EDX = (r32((uint32_t)(0x1292fe60)));
  /* 129027a5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129027ab cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129027ae jae 0x129027d3 */
  if (!C.cf) goto L_129027d3;
  /* 129027b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129027b3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 129027b7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129027ba mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129027c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129027c3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 129027c7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129027ca mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129027d1 jmp 0x12902796 */
  goto L_12902796;
L_129027d3:;
  /* 129027d3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 129027d6 push ecx */
  push32((uint32_t)(ECX));
  /* 129027d7 call dword ptr [0x129302b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b4))), 0x129027ddu);
  /* 129027dd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 129027e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129027e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129027e8 je 0x12902975 */
  if (C.zf) goto L_12902975;
  /* 129027ee cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129027f2 je 0x12902975 */
  if (C.zf) goto L_12902975;
  /* 129027f8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129027fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129027fd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12902800 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12902803 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902806 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12902809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290280c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290280f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12902812 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902819 jge 0x12902823 */
  if ((C.sf==C.of)) goto L_12902823;
  /* 1290281b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1290281e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12902821 jmp 0x1290282a */
  goto L_1290282a;
L_12902823:;
  /* 12902823 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1290282a:;
  /* 1290282a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1290282d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12902830 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12902837 jmp 0x12902842 */
  goto L_12902842;
L_12902839:;
  /* 12902839 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1290283c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290283f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12902842:;
  /* 12902842 mov ecx, dword ptr [0x1292ff9c] */
  ECX = (r32((uint32_t)(0x1292ff9c)));
  /* 12902848 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290284b jge 0x129028e2 */
  if ((C.sf==C.of)) goto L_129028e2;
  /* 12902851 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12902856 push 0x12929394 */
  push32((uint32_t)(0x12929394u));
  /* 1290285b push 2 */
  push32((uint32_t)(0x2u));
  /* 1290285d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12902862 call 0x12902b40 */
  push32(0x12902867u); f_12902b40();
  /* 12902867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290286a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1290286d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902871 jne 0x1290287e */
  if (!C.zf) goto L_1290287e;
  /* 12902873 mov edx, dword ptr [0x1292ff9c] */
  EDX = (r32((uint32_t)(0x1292ff9c)));
  /* 12902879 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1290287c jmp 0x129028e2 */
  goto L_129028e2;
L_1290287e:;
  /* 1290287e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12902881 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902884 mov dword ptr [eax*4 + 0x1292fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1292fe60), (ECX));
  /* 1290288b mov edx, dword ptr [0x1292ff9c] */
  EDX = (r32((uint32_t)(0x1292ff9c)));
  /* 12902891 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902894 mov dword ptr [0x1292ff9c], edx */
  w32((uint32_t)(0x1292ff9c), (EDX));
  /* 1290289a jmp 0x129028a5 */
  goto L_129028a5;
L_1290289c:;
  /* 1290289c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1290289f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129028a2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_129028a5:;
  /* 129028a5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 129028a8 mov edx, dword ptr [ecx*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 129028af add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129028b5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129028b8 jae 0x129028dd */
  if (!C.cf) goto L_129028dd;
  /* 129028ba mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129028bd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 129028c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129028c4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 129028ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129028cd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 129028d1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129028d4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129028db jmp 0x1290289c */
  goto L_1290289c;
L_129028dd:;
  /* 129028dd jmp 0x12902839 */
  goto L_12902839;
L_129028e2:;
  /* 129028e2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 129028e9 jmp 0x12902906 */
  goto L_12902906;
L_129028eb:;
  /* 129028eb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129028ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129028f1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 129028f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129028f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129028fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129028fd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12902900 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902903 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12902906:;
  /* 12902906 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12902909 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290290c jge 0x12902975 */
  if ((C.sf==C.of)) goto L_12902975;
  /* 1290290e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12902911 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902914 je 0x12902970 */
  if (C.zf) goto L_12902970;
  /* 12902916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902919 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290291c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290291f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12902921 je 0x12902970 */
  if (C.zf) goto L_12902970;
  /* 12902923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902926 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12902929 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1290292c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290292e jne 0x12902940 */
  if (!C.zf) goto L_12902940;
  /* 12902930 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12902933 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12902935 push edx */
  push32((uint32_t)(EDX));
  /* 12902936 call dword ptr [0x129302b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b0))), 0x1290293cu);
  /* 1290293c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290293e je 0x12902970 */
  if (C.zf) goto L_12902970;
L_12902940:;
  /* 12902940 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12902943 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12902946 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12902949 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290294c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290294f mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 12902956 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902958 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1290295b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1290295e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12902961 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12902963 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12902965 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902968 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290296b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290296d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12902970:;
  /* 12902970 jmp 0x129028eb */
  goto L_129028eb;
L_12902975:;
  /* 12902975 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1290297c jmp 0x12902987 */
  goto L_12902987;
L_1290297e:;
  /* 1290297e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12902981 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902984 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12902987:;
  /* 12902987 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290298b jge 0x12902a64 */
  if ((C.sf==C.of)) goto L_12902a64;
  /* 12902991 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12902994 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12902997 mov edx, dword ptr [0x1292fe60] */
  EDX = (r32((uint32_t)(0x1292fe60)));
  /* 1290299d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290299f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 129029a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129029a5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129029a8 jne 0x12902a50 */
  if (!C.zf) goto L_12902a50;
  /* 129029ae mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129029b1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 129029b5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129029b9 jne 0x129029c4 */
  if (!C.zf) goto L_129029c4;
  /* 129029bb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 129029c2 jmp 0x129029d4 */
  goto L_129029d4;
L_129029c4:;
  /* 129029c4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 129029c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129029ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129029cc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129029ce add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129029d1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_129029d4:;
  /* 129029d4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 129029d7 push eax */
  push32((uint32_t)(EAX));
  /* 129029d8 call dword ptr [0x12930260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930260))), 0x129029deu);
  /* 129029de mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 129029e1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129029e5 je 0x12902a3f */
  if (C.zf) goto L_12902a3f;
  /* 129029e7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129029ea push ecx */
  push32((uint32_t)(ECX));
  /* 129029eb call dword ptr [0x129302b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b0))), 0x129029f1u);
  /* 129029f1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 129029f4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129029f8 je 0x12902a3f */
  if (C.zf) goto L_12902a3f;
  /* 129029fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129029fd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12902a00 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12902a02 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12902a05 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12902a0b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902a0e jne 0x12902a20 */
  if (!C.zf) goto L_12902a20;
  /* 12902a10 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a13 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12902a16 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12902a18 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a1b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12902a1e jmp 0x12902a3d */
  goto L_12902a3d;
L_12902a20:;
  /* 12902a20 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12902a23 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12902a29 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902a2c jne 0x12902a3d */
  if (!C.zf) goto L_12902a3d;
  /* 12902a2e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a31 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12902a34 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12902a37 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a3a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12902a3d:;
  /* 12902a3d jmp 0x12902a4e */
  goto L_12902a4e;
L_12902a3f:;
  /* 12902a3f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a42 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12902a45 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12902a48 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a4b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12902a4e:;
  /* 12902a4e jmp 0x12902a5f */
  goto L_12902a5f;
L_12902a50:;
  /* 12902a50 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a53 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12902a56 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12902a59 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12902a5c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12902a5f:;
  /* 12902a5f jmp 0x1290297e */
  goto L_1290297e;
L_12902a64:;
  /* 12902a64 mov eax, dword ptr [0x1292ff9c] */
  EAX = (r32((uint32_t)(0x1292ff9c)));
  /* 12902a69 push eax */
  push32((uint32_t)(EAX));
  /* 12902a6a call dword ptr [0x129302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302ac))), 0x12902a70u);
  /* 12902a70 mov esp, ebp */
  ESP = (EBP);
  /* 12902a72 pop ebp */
  EBP = (pop32());
  /* 12902a73 ret  */
  ESPCHK(0x12902750u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12902a80 (155 bytes, 45 insns) */
void f_12902a80(void) {
  FTRACE(0x12902a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12902a81 mov ebp, esp */
  EBP = (ESP);
  /* 12902a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12902a86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12902a8d jmp 0x12902a98 */
  goto L_12902a98;
L_12902a8f:;
  /* 12902a8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902a92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902a95 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12902a98:;
  /* 12902a98 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902a9c jge 0x12902b17 */
  if ((C.sf==C.of)) goto L_12902b17;
  /* 12902a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902aa1 cmp dword ptr [ecx*4 + 0x1292fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1292fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902aa9 je 0x12902b12 */
  if (C.zf) goto L_12902b12;
  /* 12902aab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902aae mov eax, dword ptr [edx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 12902ab5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12902ab8 jmp 0x12902ac3 */
  goto L_12902ac3;
L_12902aba:;
  /* 12902aba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902abd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902ac0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12902ac3:;
  /* 12902ac3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902ac6 mov eax, dword ptr [edx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 12902acd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902ad2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902ad5 jae 0x12902aef */
  if (!C.cf) goto L_12902aef;
  /* 12902ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902ada cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902ade je 0x12902aed */
  if (C.zf) goto L_12902aed;
  /* 12902ae0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902ae3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902ae6 push edx */
  push32((uint32_t)(EDX));
  /* 12902ae7 call dword ptr [0x129302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b8))), 0x12902aedu);
L_12902aed:;
  /* 12902aed jmp 0x12902aba */
  goto L_12902aba;
L_12902aef:;
  /* 12902aef push 2 */
  push32((uint32_t)(0x2u));
  /* 12902af1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902af4 mov ecx, dword ptr [eax*4 + 0x1292fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 12902afb push ecx */
  push32((uint32_t)(ECX));
  /* 12902afc call 0x129035d0 */
  push32(0x12902b01u); f_129035d0();
  /* 12902b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902b04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902b07 mov dword ptr [edx*4 + 0x1292fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x1292fe60), (0x0u));
L_12902b12:;
  /* 12902b12 jmp 0x12902a8f */
  goto L_12902a8f;
L_12902b17:;
  /* 12902b17 mov esp, ebp */
  ESP = (EBP);
  /* 12902b19 pop ebp */
  EBP = (pop32());
  /* 12902b1a ret  */
  ESPCHK(0x12902a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x12902b20 (29 bytes, 13 insns) */
void f_12902b20(void) {
  FTRACE(0x12902b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12902b21 mov ebp, esp */
  EBP = (ESP);
  /* 12902b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902b29 mov eax, dword ptr [0x1292e670] */
  EAX = (r32((uint32_t)(0x1292e670)));
  /* 12902b2e push eax */
  push32((uint32_t)(EAX));
  /* 12902b2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902b32 push ecx */
  push32((uint32_t)(ECX));
  /* 12902b33 call 0x12902b90 */
  push32(0x12902b38u); f_12902b90();
  /* 12902b38 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902b3b pop ebp */
  EBP = (pop32());
  /* 12902b3c ret  */
  ESPCHK(0x12902b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b40 @ 0x12902b40 (35 bytes, 16 insns) */
void f_12902b40(void) {
  FTRACE(0x12902b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12902b41 mov ebp, esp */
  EBP = (ESP);
  /* 12902b43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902b46 push eax */
  push32((uint32_t)(EAX));
  /* 12902b47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902b4a push ecx */
  push32((uint32_t)(ECX));
  /* 12902b4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902b4e push edx */
  push32((uint32_t)(EDX));
  /* 12902b4f mov eax, dword ptr [0x1292e670] */
  EAX = (r32((uint32_t)(0x1292e670)));
  /* 12902b54 push eax */
  push32((uint32_t)(EAX));
  /* 12902b55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902b58 push ecx */
  push32((uint32_t)(ECX));
  /* 12902b59 call 0x12902b90 */
  push32(0x12902b5eu); f_12902b90();
  /* 12902b5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902b61 pop ebp */
  EBP = (pop32());
  /* 12902b62 ret  */
  ESPCHK(0x12902b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b70 @ 0x12902b70 (27 bytes, 13 insns) */
void f_12902b70(void) {
  FTRACE(0x12902b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12902b71 mov ebp, esp */
  EBP = (ESP);
  /* 12902b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902b79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902b7c push eax */
  push32((uint32_t)(EAX));
  /* 12902b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902b80 push ecx */
  push32((uint32_t)(ECX));
  /* 12902b81 call 0x12902b90 */
  push32(0x12902b86u); f_12902b90();
  /* 12902b86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902b89 pop ebp */
  EBP = (pop32());
  /* 12902b8a ret  */
  ESPCHK(0x12902b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b90 @ 0x12902b90 (94 bytes, 38 insns) */
void f_12902b90(void) {
  FTRACE(0x12902b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12902b91 mov ebp, esp */
  EBP = (ESP);
  /* 12902b93 push ecx */
  push32((uint32_t)(ECX));
L_12902b94:;
  /* 12902b94 push 9 */
  push32((uint32_t)(0x9u));
  /* 12902b96 call 0x12906540 */
  push32(0x12902b9bu); f_12906540();
  /* 12902b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902b9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12902ba1 push eax */
  push32((uint32_t)(EAX));
  /* 12902ba2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 12902ba6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902ba9 push edx */
  push32((uint32_t)(EDX));
  /* 12902baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902bad push eax */
  push32((uint32_t)(EAX));
  /* 12902bae call 0x12902c10 */
  push32(0x12902bb3u); f_12902c10();
  /* 12902bb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902bb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12902bb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12902bbb call 0x129065e0 */
  push32(0x12902bc0u); f_129065e0();
  /* 12902bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902bc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902bc7 jne 0x12902bcf */
  if (!C.zf) goto L_12902bcf;
  /* 12902bc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902bcd jne 0x12902bd4 */
  if (!C.zf) goto L_12902bd4;
L_12902bcf:;
  /* 12902bcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902bd2 jmp 0x12902bea */
  goto L_12902bea;
L_12902bd4:;
  /* 12902bd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12902bd8 call 0x12906880 */
  push32(0x12902bddu); f_12906880();
  /* 12902bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12902be2 jne 0x12902be8 */
  if (!C.zf) goto L_12902be8;
  /* 12902be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12902be6 jmp 0x12902bea */
  goto L_12902bea;
L_12902be8:;
  /* 12902be8 jmp 0x12902b94 */
  goto L_12902b94;
L_12902bea:;
  /* 12902bea mov esp, ebp */
  ESP = (EBP);
  /* 12902bec pop ebp */
  EBP = (pop32());
  /* 12902bed ret  */
  ESPCHK(0x12902b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bf0 @ 0x12902bf0 (23 bytes, 11 insns) */
void f_12902bf0(void) {
  FTRACE(0x12902bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12902bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12902bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902bf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902bfc push eax */
  push32((uint32_t)(EAX));
  /* 12902bfd call 0x12902c10 */
  push32(0x12902c02u); f_12902c10();
  /* 12902c02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902c05 pop ebp */
  EBP = (pop32());
  /* 12902c06 ret  */
  ESPCHK(0x12902bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c10 @ 0x12902c10 (787 bytes, 254 insns) */
void f_12902c10(void) {
  FTRACE(0x12902c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12902c11 mov ebp, esp */
  EBP = (ESP);
  /* 12902c13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12902c16 push ebx */
  push32((uint32_t)(EBX));
  /* 12902c17 push esi */
  push32((uint32_t)(ESI));
  /* 12902c18 push edi */
  push32((uint32_t)(EDI));
  /* 12902c19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12902c20 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 12902c25 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12902c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12902c2a je 0x12902c5c */
  if (C.zf) goto L_12902c5c;
L_12902c2c:;
  /* 12902c2c call 0x12903ce0 */
  push32(0x12902c31u); f_12903ce0();
  /* 12902c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12902c33 jne 0x12902c56 */
  if (!C.zf) goto L_12902c56;
  /* 12902c35 push 0x12929488 */
  push32((uint32_t)(0x12929488u));
  /* 12902c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12902c3c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12902c41 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12902c46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12902c48 call 0x12901c00 */
  push32(0x12902c4du); f_12901c00();
  /* 12902c4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902c50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902c53 jne 0x12902c56 */
  if (!C.zf) goto L_12902c56;
  /* 12902c55 int3  */
  x86_unimpl("int3 @ 0x12902c55");
L_12902c56:;
  /* 12902c56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12902c58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12902c5a jne 0x12902c2c */
  if (!C.zf) goto L_12902c2c;
L_12902c5c:;
  /* 12902c5c mov edx, dword ptr [0x1292ca88] */
  EDX = (r32((uint32_t)(0x1292ca88)));
  /* 12902c62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12902c65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902c68 cmp eax, dword ptr [0x1292ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902c6e jne 0x12902c71 */
  if (!C.zf) goto L_12902c71;
  /* 12902c70 int3  */
  x86_unimpl("int3 @ 0x12902c70");
L_12902c71:;
  /* 12902c71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902c74 push ecx */
  push32((uint32_t)(ECX));
  /* 12902c75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902c78 push edx */
  push32((uint32_t)(EDX));
  /* 12902c79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902c7c push eax */
  push32((uint32_t)(EAX));
  /* 12902c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902c80 push ecx */
  push32((uint32_t)(ECX));
  /* 12902c81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902c84 push edx */
  push32((uint32_t)(EDX));
  /* 12902c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902c89 call dword ptr [0x1292cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292cc90))), 0x12902c8fu);
  /* 12902c8f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12902c94 jne 0x12902cf4 */
  if (!C.zf) goto L_12902cf4;
  /* 12902c96 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902c9a je 0x12902cc7 */
  if (C.zf) goto L_12902cc7;
L_12902c9c:;
  /* 12902c9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902c9f push eax */
  push32((uint32_t)(EAX));
  /* 12902ca0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12902ca4 push 0x12929444 */
  push32((uint32_t)(0x12929444u));
  /* 12902ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12902cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12902caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12902cb1 call 0x12901c00 */
  push32(0x12902cb6u); f_12901c00();
  /* 12902cb6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902cb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902cbc jne 0x12902cbf */
  if (!C.zf) goto L_12902cbf;
  /* 12902cbe int3  */
  x86_unimpl("int3 @ 0x12902cbe");
L_12902cbf:;
  /* 12902cbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12902cc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12902cc3 jne 0x12902c9c */
  if (!C.zf) goto L_12902c9c;
  /* 12902cc5 jmp 0x12902ced */
  goto L_12902ced;
L_12902cc7:;
  /* 12902cc7 push 0x12929420 */
  push32((uint32_t)(0x12929420u));
  /* 12902ccc push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12902cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902cd9 call 0x12901c00 */
  push32(0x12902cdeu); f_12901c00();
  /* 12902cde add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902ce1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902ce4 jne 0x12902ce7 */
  if (!C.zf) goto L_12902ce7;
  /* 12902ce6 int3  */
  x86_unimpl("int3 @ 0x12902ce6");
L_12902ce7:;
  /* 12902ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12902ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12902ceb jne 0x12902cc7 */
  if (!C.zf) goto L_12902cc7;
L_12902ced:;
  /* 12902ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12902cef jmp 0x12902f1c */
  goto L_12902f1c;
L_12902cf4:;
  /* 12902cf4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902cf7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12902cfd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d00 je 0x12902d16 */
  if (C.zf) goto L_12902d16;
  /* 12902d02 mov edx, dword ptr [0x1292ca84] */
  EDX = (r32((uint32_t)(0x1292ca84)));
  /* 12902d08 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12902d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12902d0d jne 0x12902d16 */
  if (!C.zf) goto L_12902d16;
  /* 12902d0f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12902d16:;
  /* 12902d16 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d1a ja 0x12902d27 */
  if ((!C.cf&&!C.zf)) goto L_12902d27;
  /* 12902d1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902d1f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902d22 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d25 jbe 0x12902d53 */
  if ((C.cf||C.zf)) goto L_12902d53;
L_12902d27:;
  /* 12902d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902d2a push ecx */
  push32((uint32_t)(ECX));
  /* 12902d2b push 0x129293f8 */
  push32((uint32_t)(0x129293f8u));
  /* 12902d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902d36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902d38 call 0x12901c00 */
  push32(0x12902d3du); f_12901c00();
  /* 12902d3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902d40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d43 jne 0x12902d46 */
  if (!C.zf) goto L_12902d46;
  /* 12902d45 int3  */
  x86_unimpl("int3 @ 0x12902d45");
L_12902d46:;
  /* 12902d46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12902d48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12902d4a jne 0x12902d27 */
  if (!C.zf) goto L_12902d27;
  /* 12902d4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12902d4e jmp 0x12902f1c */
  goto L_12902f1c;
L_12902d53:;
  /* 12902d53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902d56 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12902d5b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d5e je 0x12902da0 */
  if (C.zf) goto L_12902da0;
  /* 12902d60 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d64 je 0x12902da0 */
  if (C.zf) goto L_12902da0;
  /* 12902d66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902d69 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12902d6f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d72 je 0x12902da0 */
  if (C.zf) goto L_12902da0;
  /* 12902d74 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d78 je 0x12902da0 */
  if (C.zf) goto L_12902da0;
L_12902d7a:;
  /* 12902d7a push 0x129293c4 */
  push32((uint32_t)(0x129293c4u));
  /* 12902d7f push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12902d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902d8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12902d8c call 0x12901c00 */
  push32(0x12902d91u); f_12901c00();
  /* 12902d91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902d94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902d97 jne 0x12902d9a */
  if (!C.zf) goto L_12902d9a;
  /* 12902d99 int3  */
  x86_unimpl("int3 @ 0x12902d99");
L_12902d9a:;
  /* 12902d9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12902d9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12902d9e jne 0x12902d7a */
  if (!C.zf) goto L_12902d7a;
L_12902da0:;
  /* 12902da0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902da3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902da6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12902da9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12902dac push ecx */
  push32((uint32_t)(ECX));
  /* 12902dad call 0x12906990 */
  push32(0x12902db2u); f_12906990();
  /* 12902db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902db5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12902db8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902dbc jne 0x12902dc5 */
  if (!C.zf) goto L_12902dc5;
  /* 12902dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12902dc0 jmp 0x12902f1c */
  goto L_12902f1c;
L_12902dc5:;
  /* 12902dc5 mov edx, dword ptr [0x1292ca88] */
  EDX = (r32((uint32_t)(0x1292ca88)));
  /* 12902dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902dce mov dword ptr [0x1292ca88], edx */
  w32((uint32_t)(0x1292ca88), (EDX));
  /* 12902dd4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902dd8 je 0x12902e23 */
  if (C.zf) goto L_12902e23;
  /* 12902dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902ddd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12902de3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902de6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12902ded mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902df0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12902df7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902dfa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12902e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902e07 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12902e0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e0d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12902e14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e17 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12902e1e jmp 0x12902ec3 */
  goto L_12902ec3;
L_12902e23:;
  /* 12902e23 mov edx, dword ptr [0x1292e4d0] */
  EDX = (r32((uint32_t)(0x1292e4d0)));
  /* 12902e29 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902e2c mov dword ptr [0x1292e4d0], edx */
  w32((uint32_t)(0x1292e4d0), (EDX));
  /* 12902e32 mov eax, dword ptr [0x1292e4d8] */
  EAX = (r32((uint32_t)(0x1292e4d8)));
  /* 12902e37 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902e3a mov dword ptr [0x1292e4d8], eax */
  w32((uint32_t)(0x1292e4d8), (EAX));
  /* 12902e3f mov ecx, dword ptr [0x1292e4d8] */
  ECX = (r32((uint32_t)(0x1292e4d8)));
  /* 12902e45 cmp ecx, dword ptr [0x1292e4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902e4b jbe 0x12902e59 */
  if ((C.cf||C.zf)) goto L_12902e59;
  /* 12902e4d mov edx, dword ptr [0x1292e4d8] */
  EDX = (r32((uint32_t)(0x1292e4d8)));
  /* 12902e53 mov dword ptr [0x1292e4dc], edx */
  w32((uint32_t)(0x1292e4dc), (EDX));
L_12902e59:;
  /* 12902e59 cmp dword ptr [0x1292e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902e60 je 0x12902e6f */
  if (C.zf) goto L_12902e6f;
  /* 12902e62 mov eax, dword ptr [0x1292e4d4] */
  EAX = (r32((uint32_t)(0x1292e4d4)));
  /* 12902e67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12902e6d jmp 0x12902e78 */
  goto L_12902e78;
L_12902e6f:;
  /* 12902e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e72 mov dword ptr [0x1292e4cc], edx */
  w32((uint32_t)(0x1292e4cc), (EDX));
L_12902e78:;
  /* 12902e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e7b mov ecx, dword ptr [0x1292e4d4] */
  ECX = (r32((uint32_t)(0x1292e4d4)));
  /* 12902e81 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12902e83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e86 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12902e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902e93 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12902e96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902e99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902e9c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12902e9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902ea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902ea5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12902ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902eab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902eae mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12902eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902eb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902eb7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12902eba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902ebd mov dword ptr [0x1292e4d4], ecx */
  w32((uint32_t)(0x1292e4d4), (ECX));
L_12902ec3:;
  /* 12902ec3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12902ec5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12902ec7 mov dl, byte ptr [0x1292ca90] */
  DL = (r8((uint32_t)(0x1292ca90)));
  /* 12902ecd push edx */
  push32((uint32_t)(EDX));
  /* 12902ece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902ed1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902ed4 push eax */
  push32((uint32_t)(EAX));
  /* 12902ed5 call 0x129068b0 */
  push32(0x12902edau); f_129068b0();
  /* 12902eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902edd push 4 */
  push32((uint32_t)(0x4u));
  /* 12902edf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12902ee1 mov cl, byte ptr [0x1292ca90] */
  CL = (r8((uint32_t)(0x1292ca90)));
  /* 12902ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 12902ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902eee lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12902ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 12902ef3 call 0x129068b0 */
  push32(0x12902ef8u); f_129068b0();
  /* 12902ef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902efb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902efe push edx */
  push32((uint32_t)(EDX));
  /* 12902eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12902f01 mov al, byte ptr [0x1292ca92] */
  AL = (r8((uint32_t)(0x1292ca92)));
  /* 12902f06 push eax */
  push32((uint32_t)(EAX));
  /* 12902f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902f0a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902f0d push ecx */
  push32((uint32_t)(ECX));
  /* 12902f0e call 0x129068b0 */
  push32(0x12902f13u); f_129068b0();
  /* 12902f13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902f16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12902f19 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12902f1c:;
  /* 12902f1c pop edi */
  EDI = (pop32());
  /* 12902f1d pop esi */
  ESI = (pop32());
  /* 12902f1e pop ebx */
  EBX = (pop32());
  /* 12902f1f mov esp, ebp */
  ESP = (EBP);
  /* 12902f21 pop ebp */
  EBP = (pop32());
  /* 12902f22 ret  */
  ESPCHK(0x12902c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f30 @ 0x12902f30 (27 bytes, 13 insns) */
void f_12902f30(void) {
  FTRACE(0x12902f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12902f31 mov ebp, esp */
  EBP = (ESP);
  /* 12902f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902f37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902f39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902f3c push eax */
  push32((uint32_t)(EAX));
  /* 12902f3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902f40 push ecx */
  push32((uint32_t)(ECX));
  /* 12902f41 call 0x12902f50 */
  push32(0x12902f46u); f_12902f50();
  /* 12902f46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902f49 pop ebp */
  EBP = (pop32());
  /* 12902f4a ret  */
  ESPCHK(0x12902f30u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12902f50 (96 bytes, 37 insns) */
void f_12902f50(void) {
  FTRACE(0x12902f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12902f51 mov ebp, esp */
  EBP = (ESP);
  /* 12902f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12902f56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902f59 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12902f5d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12902f60 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12902f63 push ecx */
  push32((uint32_t)(ECX));
  /* 12902f64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902f67 push edx */
  push32((uint32_t)(EDX));
  /* 12902f68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902f6b push eax */
  push32((uint32_t)(EAX));
  /* 12902f6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902f6f push ecx */
  push32((uint32_t)(ECX));
  /* 12902f70 call 0x12902b40 */
  push32(0x12902f75u); f_12902b40();
  /* 12902f75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902f78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12902f7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902f7f je 0x12902fa9 */
  if (C.zf) goto L_12902fa9;
  /* 12902f81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902f84 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12902f87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12902f8a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902f8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12902f90:;
  /* 12902f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12902f93 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12902f96 jae 0x12902fa9 */
  if (!C.cf) goto L_12902fa9;
  /* 12902f98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12902f9b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12902f9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12902fa1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12902fa4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12902fa7 jmp 0x12902f90 */
  goto L_12902f90;
L_12902fa9:;
  /* 12902fa9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12902fac mov esp, ebp */
  ESP = (EBP);
  /* 12902fae pop ebp */
  EBP = (pop32());
  /* 12902faf ret  */
  ESPCHK(0x12902f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fb0 @ 0x12902fb0 (27 bytes, 13 insns) */
void f_12902fb0(void) {
  FTRACE(0x12902fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12902fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12902fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12902fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12902fb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902fbc push eax */
  push32((uint32_t)(EAX));
  /* 12902fbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12902fc1 call 0x12902fd0 */
  push32(0x12902fc6u); f_12902fd0();
  /* 12902fc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902fc9 pop ebp */
  EBP = (pop32());
  /* 12902fca ret  */
  ESPCHK(0x12902fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x12902fd0 (64 bytes, 27 insns) */
void f_12902fd0(void) {
  FTRACE(0x12902fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12902fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12902fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12902fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12902fd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12902fd6 call 0x12906540 */
  push32(0x12902fdbu); f_12906540();
  /* 12902fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902fde push 1 */
  push32((uint32_t)(0x1u));
  /* 12902fe0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12902fe3 push eax */
  push32((uint32_t)(EAX));
  /* 12902fe4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12902fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 12902fe8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12902feb push edx */
  push32((uint32_t)(EDX));
  /* 12902fec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12902fef push eax */
  push32((uint32_t)(EAX));
  /* 12902ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12902ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12902ff4 call 0x12903010 */
  push32(0x12902ff9u); f_12903010();
  /* 12902ff9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12902ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12902fff push 9 */
  push32((uint32_t)(0x9u));
  /* 12903001 call 0x129065e0 */
  push32(0x12903006u); f_129065e0();
  /* 12903006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290300c mov esp, ebp */
  ESP = (EBP);
  /* 1290300e pop ebp */
  EBP = (pop32());
  /* 1290300f ret  */
  ESPCHK(0x12902fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003010 @ 0x12903010 (1297 bytes, 431 insns) */
void f_12903010(void) {
  FTRACE(0x12903010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903010 push ebp */
  push32((uint32_t)(EBP));
  /* 12903011 mov ebp, esp */
  EBP = (ESP);
  /* 12903013 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903016 push ebx */
  push32((uint32_t)(EBX));
  /* 12903017 push esi */
  push32((uint32_t)(ESI));
  /* 12903018 push edi */
  push32((uint32_t)(EDI));
  /* 12903019 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12903020 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903024 jne 0x12903043 */
  if (!C.zf) goto L_12903043;
  /* 12903026 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12903029 push eax */
  push32((uint32_t)(EAX));
  /* 1290302a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290302d push ecx */
  push32((uint32_t)(ECX));
  /* 1290302e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12903031 push edx */
  push32((uint32_t)(EDX));
  /* 12903032 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903035 push eax */
  push32((uint32_t)(EAX));
  /* 12903036 call 0x12902b40 */
  push32(0x1290303bu); f_12902b40();
  /* 1290303b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290303e jmp 0x1290351a */
  goto L_1290351a;
L_12903043:;
  /* 12903043 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903047 je 0x12903066 */
  if (C.zf) goto L_12903066;
  /* 12903049 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290304d jne 0x12903066 */
  if (!C.zf) goto L_12903066;
  /* 1290304f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12903052 push ecx */
  push32((uint32_t)(ECX));
  /* 12903053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903056 push edx */
  push32((uint32_t)(EDX));
  /* 12903057 call 0x129035d0 */
  push32(0x1290305cu); f_129035d0();
  /* 1290305c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290305f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903061 jmp 0x1290351a */
  goto L_1290351a;
L_12903066:;
  /* 12903066 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 1290306b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1290306e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903070 je 0x129030a2 */
  if (C.zf) goto L_129030a2;
L_12903072:;
  /* 12903072 call 0x12903ce0 */
  push32(0x12903077u); f_12903ce0();
  /* 12903077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903079 jne 0x1290309c */
  if (!C.zf) goto L_1290309c;
  /* 1290307b push 0x12929488 */
  push32((uint32_t)(0x12929488u));
  /* 12903080 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903082 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12903087 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 1290308c push 2 */
  push32((uint32_t)(0x2u));
  /* 1290308e call 0x12901c00 */
  push32(0x12903093u); f_12901c00();
  /* 12903093 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903096 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903099 jne 0x1290309c */
  if (!C.zf) goto L_1290309c;
  /* 1290309b int3  */
  x86_unimpl("int3 @ 0x1290309b");
L_1290309c:;
  /* 1290309c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290309e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129030a0 jne 0x12903072 */
  if (!C.zf) goto L_12903072;
L_129030a2:;
  /* 129030a2 mov edx, dword ptr [0x1292ca88] */
  EDX = (r32((uint32_t)(0x1292ca88)));
  /* 129030a8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129030ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129030ae cmp eax, dword ptr [0x1292ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129030b4 jne 0x129030b7 */
  if (!C.zf) goto L_129030b7;
  /* 129030b6 int3  */
  x86_unimpl("int3 @ 0x129030b6");
L_129030b7:;
  /* 129030b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129030ba push ecx */
  push32((uint32_t)(ECX));
  /* 129030bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129030be push edx */
  push32((uint32_t)(EDX));
  /* 129030bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129030c2 push eax */
  push32((uint32_t)(EAX));
  /* 129030c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129030c6 push ecx */
  push32((uint32_t)(ECX));
  /* 129030c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129030ca push edx */
  push32((uint32_t)(EDX));
  /* 129030cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129030ce push eax */
  push32((uint32_t)(EAX));
  /* 129030cf push 2 */
  push32((uint32_t)(0x2u));
  /* 129030d1 call dword ptr [0x1292cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292cc90))), 0x129030d7u);
  /* 129030d7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129030da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129030dc jne 0x1290313c */
  if (!C.zf) goto L_1290313c;
  /* 129030de cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129030e2 je 0x1290310f */
  if (C.zf) goto L_1290310f;
L_129030e4:;
  /* 129030e4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 129030e7 push ecx */
  push32((uint32_t)(ECX));
  /* 129030e8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129030eb push edx */
  push32((uint32_t)(EDX));
  /* 129030ec push 0x12929604 */
  push32((uint32_t)(0x12929604u));
  /* 129030f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129030f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129030f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129030f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129030f9 call 0x12901c00 */
  push32(0x129030feu); f_12901c00();
  /* 129030fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903101 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903104 jne 0x12903107 */
  if (!C.zf) goto L_12903107;
  /* 12903106 int3  */
  x86_unimpl("int3 @ 0x12903106");
L_12903107:;
  /* 12903107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290310b jne 0x129030e4 */
  if (!C.zf) goto L_129030e4;
  /* 1290310d jmp 0x12903135 */
  goto L_12903135;
L_1290310f:;
  /* 1290310f push 0x129295e0 */
  push32((uint32_t)(0x129295e0u));
  /* 12903114 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12903119 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290311b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290311d push 0 */
  push32((uint32_t)(0x0u));
  /* 1290311f push 0 */
  push32((uint32_t)(0x0u));
  /* 12903121 call 0x12901c00 */
  push32(0x12903126u); f_12901c00();
  /* 12903126 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903129 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290312c jne 0x1290312f */
  if (!C.zf) goto L_1290312f;
  /* 1290312e int3  */
  x86_unimpl("int3 @ 0x1290312e");
L_1290312f:;
  /* 1290312f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903131 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903133 jne 0x1290310f */
  if (!C.zf) goto L_1290310f;
L_12903135:;
  /* 12903135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903137 jmp 0x1290351a */
  goto L_1290351a;
L_1290313c:;
  /* 1290313c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903140 jbe 0x1290316e */
  if ((C.cf||C.zf)) goto L_1290316e;
L_12903142:;
  /* 12903142 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903145 push edx */
  push32((uint32_t)(EDX));
  /* 12903146 push 0x129295b0 */
  push32((uint32_t)(0x129295b0u));
  /* 1290314b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290314d push 0 */
  push32((uint32_t)(0x0u));
  /* 1290314f push 0 */
  push32((uint32_t)(0x0u));
  /* 12903151 push 1 */
  push32((uint32_t)(0x1u));
  /* 12903153 call 0x12901c00 */
  push32(0x12903158u); f_12901c00();
  /* 12903158 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290315b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290315e jne 0x12903161 */
  if (!C.zf) goto L_12903161;
  /* 12903160 int3  */
  x86_unimpl("int3 @ 0x12903160");
L_12903161:;
  /* 12903161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903165 jne 0x12903142 */
  if (!C.zf) goto L_12903142;
  /* 12903167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903169 jmp 0x1290351a */
  goto L_1290351a;
L_1290316e:;
  /* 1290316e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903172 je 0x129031b6 */
  if (C.zf) goto L_129031b6;
  /* 12903174 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12903177 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1290317d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903180 je 0x129031b6 */
  if (C.zf) goto L_129031b6;
  /* 12903182 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12903185 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1290318b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290318e je 0x129031b6 */
  if (C.zf) goto L_129031b6;
L_12903190:;
  /* 12903190 push 0x129293c4 */
  push32((uint32_t)(0x129293c4u));
  /* 12903195 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 1290319a push 0 */
  push32((uint32_t)(0x0u));
  /* 1290319c push 0 */
  push32((uint32_t)(0x0u));
  /* 1290319e push 0 */
  push32((uint32_t)(0x0u));
  /* 129031a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 129031a2 call 0x12901c00 */
  push32(0x129031a7u); f_12901c00();
  /* 129031a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129031aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129031ad jne 0x129031b0 */
  if (!C.zf) goto L_129031b0;
  /* 129031af int3  */
  x86_unimpl("int3 @ 0x129031af");
L_129031b0:;
  /* 129031b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129031b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129031b4 jne 0x12903190 */
  if (!C.zf) goto L_12903190;
L_129031b6:;
  /* 129031b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129031b9 push ecx */
  push32((uint32_t)(ECX));
  /* 129031ba call 0x12904140 */
  push32(0x129031bfu); f_12904140();
  /* 129031bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129031c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129031c4 jne 0x129031e7 */
  if (!C.zf) goto L_129031e7;
  /* 129031c6 push 0x1292958c */
  push32((uint32_t)(0x1292958cu));
  /* 129031cb push 0 */
  push32((uint32_t)(0x0u));
  /* 129031cd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 129031d2 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 129031d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129031d9 call 0x12901c00 */
  push32(0x129031deu); f_12901c00();
  /* 129031de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129031e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129031e4 jne 0x129031e7 */
  if (!C.zf) goto L_129031e7;
  /* 129031e6 int3  */
  x86_unimpl("int3 @ 0x129031e6");
L_129031e7:;
  /* 129031e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129031e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129031eb jne 0x129031b6 */
  if (!C.zf) goto L_129031b6;
  /* 129031ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129031f0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129031f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129031f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129031f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129031fd jne 0x12903206 */
  if (!C.zf) goto L_12903206;
  /* 129031ff mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12903206:;
  /* 12903206 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290320a je 0x1290324a */
  if (C.zf) goto L_1290324a;
L_1290320c:;
  /* 1290320c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290320f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903216 jne 0x12903221 */
  if (!C.zf) goto L_12903221;
  /* 12903218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290321b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290321f je 0x12903242 */
  if (C.zf) goto L_12903242;
L_12903221:;
  /* 12903221 push 0x12929544 */
  push32((uint32_t)(0x12929544u));
  /* 12903226 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903228 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1290322d push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903232 push 2 */
  push32((uint32_t)(0x2u));
  /* 12903234 call 0x12901c00 */
  push32(0x12903239u); f_12901c00();
  /* 12903239 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290323c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290323f jne 0x12903242 */
  if (!C.zf) goto L_12903242;
  /* 12903241 int3  */
  x86_unimpl("int3 @ 0x12903241");
L_12903242:;
  /* 12903242 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903244 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903246 jne 0x1290320c */
  if (!C.zf) goto L_1290320c;
  /* 12903248 jmp 0x129032ae */
  goto L_129032ae;
L_1290324a:;
  /* 1290324a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290324d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903250 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12903255 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903258 jne 0x1290326f */
  if (!C.zf) goto L_1290326f;
  /* 1290325a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290325d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12903263 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903266 jne 0x1290326f */
  if (!C.zf) goto L_1290326f;
  /* 12903268 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1290326f:;
  /* 1290326f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903272 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903275 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290327a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290327d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12903283 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903285 je 0x129032a8 */
  if (C.zf) goto L_129032a8;
  /* 12903287 push 0x12929508 */
  push32((uint32_t)(0x12929508u));
  /* 1290328c push 0 */
  push32((uint32_t)(0x0u));
  /* 1290328e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12903293 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903298 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290329a call 0x12901c00 */
  push32(0x1290329fu); f_12901c00();
  /* 1290329f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129032a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129032a5 jne 0x129032a8 */
  if (!C.zf) goto L_129032a8;
  /* 129032a7 int3  */
  x86_unimpl("int3 @ 0x129032a7");
L_129032a8:;
  /* 129032a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129032aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129032ac jne 0x1290326f */
  if (!C.zf) goto L_1290326f;
L_129032ae:;
  /* 129032ae cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129032b2 je 0x129032d9 */
  if (C.zf) goto L_129032d9;
  /* 129032b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129032b7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129032ba push eax */
  push32((uint32_t)(EAX));
  /* 129032bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129032be push ecx */
  push32((uint32_t)(ECX));
  /* 129032bf call 0x12906ac0 */
  push32(0x129032c4u); f_12906ac0();
  /* 129032c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129032c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129032ca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129032ce jne 0x129032d7 */
  if (!C.zf) goto L_129032d7;
  /* 129032d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129032d2 jmp 0x1290351a */
  goto L_1290351a;
L_129032d7:;
  /* 129032d7 jmp 0x129032fc */
  goto L_129032fc;
L_129032d9:;
  /* 129032d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129032dc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129032df push edx */
  push32((uint32_t)(EDX));
  /* 129032e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129032e3 push eax */
  push32((uint32_t)(EAX));
  /* 129032e4 call 0x12906a10 */
  push32(0x129032e9u); f_12906a10();
  /* 129032e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129032ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129032ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129032f3 jne 0x129032fc */
  if (!C.zf) goto L_129032fc;
  /* 129032f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129032f7 jmp 0x1290351a */
  goto L_1290351a;
L_129032fc:;
  /* 129032fc mov ecx, dword ptr [0x1292ca88] */
  ECX = (r32((uint32_t)(0x1292ca88)));
  /* 12903302 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903305 mov dword ptr [0x1292ca88], ecx */
  w32((uint32_t)(0x1292ca88), (ECX));
  /* 1290330b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290330f jne 0x12903367 */
  if (!C.zf) goto L_12903367;
  /* 12903311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903314 mov eax, dword ptr [0x1292e4d0] */
  EAX = (r32((uint32_t)(0x1292e4d0)));
  /* 12903319 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290331c mov dword ptr [0x1292e4d0], eax */
  w32((uint32_t)(0x1292e4d0), (EAX));
  /* 12903321 mov ecx, dword ptr [0x1292e4d0] */
  ECX = (r32((uint32_t)(0x1292e4d0)));
  /* 12903327 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290332a mov dword ptr [0x1292e4d0], ecx */
  w32((uint32_t)(0x1292e4d0), (ECX));
  /* 12903330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903333 mov eax, dword ptr [0x1292e4d8] */
  EAX = (r32((uint32_t)(0x1292e4d8)));
  /* 12903338 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290333b mov dword ptr [0x1292e4d8], eax */
  w32((uint32_t)(0x1292e4d8), (EAX));
  /* 12903340 mov ecx, dword ptr [0x1292e4d8] */
  ECX = (r32((uint32_t)(0x1292e4d8)));
  /* 12903346 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903349 mov dword ptr [0x1292e4d8], ecx */
  w32((uint32_t)(0x1292e4d8), (ECX));
  /* 1290334f mov edx, dword ptr [0x1292e4d8] */
  EDX = (r32((uint32_t)(0x1292e4d8)));
  /* 12903355 cmp edx, dword ptr [0x1292e4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290335b jbe 0x12903367 */
  if ((C.cf||C.zf)) goto L_12903367;
  /* 1290335d mov eax, dword ptr [0x1292e4d8] */
  EAX = (r32((uint32_t)(0x1292e4d8)));
  /* 12903362 mov dword ptr [0x1292e4dc], eax */
  w32((uint32_t)(0x1292e4dc), (EAX));
L_12903367:;
  /* 12903367 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290336a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290336d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12903370 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903373 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903376 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903379 jbe 0x1290339f */
  if ((C.cf||C.zf)) goto L_1290339f;
  /* 1290337b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290337e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903381 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903384 push edx */
  push32((uint32_t)(EDX));
  /* 12903385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903387 mov al, byte ptr [0x1292ca92] */
  AL = (r8((uint32_t)(0x1292ca92)));
  /* 1290338c push eax */
  push32((uint32_t)(EAX));
  /* 1290338d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903390 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903393 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903396 push edx */
  push32((uint32_t)(EDX));
  /* 12903397 call 0x129068b0 */
  push32(0x1290339cu); f_129068b0();
  /* 1290339c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290339f:;
  /* 1290339f push 4 */
  push32((uint32_t)(0x4u));
  /* 129033a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129033a3 mov al, byte ptr [0x1292ca90] */
  AL = (r8((uint32_t)(0x1292ca90)));
  /* 129033a8 push eax */
  push32((uint32_t)(EAX));
  /* 129033a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129033ac add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129033af push ecx */
  push32((uint32_t)(ECX));
  /* 129033b0 call 0x129068b0 */
  push32(0x129033b5u); f_129068b0();
  /* 129033b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129033b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129033bc jne 0x129033d9 */
  if (!C.zf) goto L_129033d9;
  /* 129033be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129033c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129033c4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129033c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129033ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129033cd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 129033d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129033d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129033d6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_129033d9:;
  /* 129033d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129033dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129033df mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_129033e2:;
  /* 129033e2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129033e6 jne 0x12903417 */
  if (!C.zf) goto L_12903417;
  /* 129033e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129033ec jne 0x129033f6 */
  if (!C.zf) goto L_129033f6;
  /* 129033ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129033f1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129033f4 je 0x12903417 */
  if (C.zf) goto L_12903417;
L_129033f6:;
  /* 129033f6 push 0x129294d4 */
  push32((uint32_t)(0x129294d4u));
  /* 129033fb push 0 */
  push32((uint32_t)(0x0u));
  /* 129033fd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12903402 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903407 push 2 */
  push32((uint32_t)(0x2u));
  /* 12903409 call 0x12901c00 */
  push32(0x1290340eu); f_12901c00();
  /* 1290340e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903411 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903414 jne 0x12903417 */
  if (!C.zf) goto L_12903417;
  /* 12903416 int3  */
  x86_unimpl("int3 @ 0x12903416");
L_12903417:;
  /* 12903417 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903419 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290341b jne 0x129033e2 */
  if (!C.zf) goto L_129033e2;
  /* 1290341d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903420 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903423 je 0x1290342b */
  if (C.zf) goto L_1290342b;
  /* 12903425 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903429 je 0x12903433 */
  if (C.zf) goto L_12903433;
L_1290342b:;
  /* 1290342b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290342e jmp 0x1290351a */
  goto L_1290351a;
L_12903433:;
  /* 12903433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903436 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903439 je 0x1290344b */
  if (C.zf) goto L_1290344b;
  /* 1290343b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290343e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12903440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903443 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12903446 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12903449 jmp 0x12903487 */
  goto L_12903487;
L_1290344b:;
  /* 1290344b mov eax, dword ptr [0x1292e4cc] */
  EAX = (r32((uint32_t)(0x1292e4cc)));
  /* 12903450 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903453 je 0x12903476 */
  if (C.zf) goto L_12903476;
  /* 12903455 push 0x129294b8 */
  push32((uint32_t)(0x129294b8u));
  /* 1290345a push 0 */
  push32((uint32_t)(0x0u));
  /* 1290345c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12903461 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903466 push 2 */
  push32((uint32_t)(0x2u));
  /* 12903468 call 0x12901c00 */
  push32(0x1290346du); f_12901c00();
  /* 1290346d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903470 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903473 jne 0x12903476 */
  if (!C.zf) goto L_12903476;
  /* 12903475 int3  */
  x86_unimpl("int3 @ 0x12903475");
L_12903476:;
  /* 12903476 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903478 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290347a jne 0x1290344b */
  if (!C.zf) goto L_1290344b;
  /* 1290347c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290347f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12903482 mov dword ptr [0x1292e4cc], eax */
  w32((uint32_t)(0x1292e4cc), (EAX));
L_12903487:;
  /* 12903487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290348a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290348e je 0x1290349f */
  if (C.zf) goto L_1290349f;
  /* 12903490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903493 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12903496 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903499 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290349b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1290349d jmp 0x129034da */
  goto L_129034da;
L_1290349f:;
  /* 1290349f mov eax, dword ptr [0x1292e4d4] */
  EAX = (r32((uint32_t)(0x1292e4d4)));
  /* 129034a4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129034a7 je 0x129034ca */
  if (C.zf) goto L_129034ca;
  /* 129034a9 push 0x1292949c */
  push32((uint32_t)(0x1292949cu));
  /* 129034ae push 0 */
  push32((uint32_t)(0x0u));
  /* 129034b0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 129034b5 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 129034ba push 2 */
  push32((uint32_t)(0x2u));
  /* 129034bc call 0x12901c00 */
  push32(0x129034c1u); f_12901c00();
  /* 129034c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129034c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129034c7 jne 0x129034ca */
  if (!C.zf) goto L_129034ca;
  /* 129034c9 int3  */
  x86_unimpl("int3 @ 0x129034c9");
L_129034ca:;
  /* 129034ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129034cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129034ce jne 0x1290349f */
  if (!C.zf) goto L_1290349f;
  /* 129034d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129034d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129034d5 mov dword ptr [0x1292e4d4], eax */
  w32((uint32_t)(0x1292e4d4), (EAX));
L_129034da:;
  /* 129034da cmp dword ptr [0x1292e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129034e1 je 0x129034f1 */
  if (C.zf) goto L_129034f1;
  /* 129034e3 mov ecx, dword ptr [0x1292e4d4] */
  ECX = (r32((uint32_t)(0x1292e4d4)));
  /* 129034e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129034ec mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129034ef jmp 0x129034f9 */
  goto L_129034f9;
L_129034f1:;
  /* 129034f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129034f4 mov dword ptr [0x1292e4cc], eax */
  w32((uint32_t)(0x1292e4cc), (EAX));
L_129034f9:;
  /* 129034f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129034fc mov edx, dword ptr [0x1292e4d4] */
  EDX = (r32((uint32_t)(0x1292e4d4)));
  /* 12903502 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12903504 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903507 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1290350e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903511 mov dword ptr [0x1292e4d4], ecx */
  w32((uint32_t)(0x1292e4d4), (ECX));
  /* 12903517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1290351a:;
  /* 1290351a pop edi */
  EDI = (pop32());
  /* 1290351b pop esi */
  ESI = (pop32());
  /* 1290351c pop ebx */
  EBX = (pop32());
  /* 1290351d mov esp, ebp */
  ESP = (EBP);
  /* 1290351f pop ebp */
  EBP = (pop32());
  /* 12903520 ret  */
  ESPCHK(0x12903010u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x12903530 (27 bytes, 13 insns) */
void f_12903530(void) {
  FTRACE(0x12903530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903530 push ebp */
  push32((uint32_t)(EBP));
  /* 12903531 mov ebp, esp */
  EBP = (ESP);
  /* 12903533 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903535 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903537 push 1 */
  push32((uint32_t)(0x1u));
  /* 12903539 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290353c push eax */
  push32((uint32_t)(EAX));
  /* 1290353d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903540 push ecx */
  push32((uint32_t)(ECX));
  /* 12903541 call 0x12903550 */
  push32(0x12903546u); f_12903550();
  /* 12903546 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903549 pop ebp */
  EBP = (pop32());
  /* 1290354a ret  */
  ESPCHK(0x12903530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x12903550 (64 bytes, 27 insns) */
void f_12903550(void) {
  FTRACE(0x12903550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903550 push ebp */
  push32((uint32_t)(EBP));
  /* 12903551 mov ebp, esp */
  EBP = (ESP);
  /* 12903553 push ecx */
  push32((uint32_t)(ECX));
  /* 12903554 push 9 */
  push32((uint32_t)(0x9u));
  /* 12903556 call 0x12906540 */
  push32(0x1290355bu); f_12906540();
  /* 1290355b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290355e push 0 */
  push32((uint32_t)(0x0u));
  /* 12903560 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12903563 push eax */
  push32((uint32_t)(EAX));
  /* 12903564 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12903567 push ecx */
  push32((uint32_t)(ECX));
  /* 12903568 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290356b push edx */
  push32((uint32_t)(EDX));
  /* 1290356c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290356f push eax */
  push32((uint32_t)(EAX));
  /* 12903570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903573 push ecx */
  push32((uint32_t)(ECX));
  /* 12903574 call 0x12903010 */
  push32(0x12903579u); f_12903010();
  /* 12903579 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290357c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290357f push 9 */
  push32((uint32_t)(0x9u));
  /* 12903581 call 0x129065e0 */
  push32(0x12903586u); f_129065e0();
  /* 12903586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290358c mov esp, ebp */
  ESP = (EBP);
  /* 1290358e pop ebp */
  EBP = (pop32());
  /* 1290358f ret  */
  ESPCHK(0x12903550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003590 @ 0x12903590 (19 bytes, 9 insns) */
void f_12903590(void) {
  FTRACE(0x12903590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903590 push ebp */
  push32((uint32_t)(EBP));
  /* 12903591 mov ebp, esp */
  EBP = (ESP);
  /* 12903593 push 1 */
  push32((uint32_t)(0x1u));
  /* 12903595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903598 push eax */
  push32((uint32_t)(EAX));
  /* 12903599 call 0x129035d0 */
  push32(0x1290359eu); f_129035d0();
  /* 1290359e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129035a1 pop ebp */
  EBP = (pop32());
  /* 129035a2 ret  */
  ESPCHK(0x12903590u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b0 @ 0x129035b0 (19 bytes, 9 insns) */
void f_129035b0(void) {
  FTRACE(0x129035b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129035b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129035b1 mov ebp, esp */
  EBP = (ESP);
  /* 129035b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129035b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129035b8 push eax */
  push32((uint32_t)(EAX));
  /* 129035b9 call 0x12903600 */
  push32(0x129035beu); f_12903600();
  /* 129035be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129035c1 pop ebp */
  EBP = (pop32());
  /* 129035c2 ret  */
  ESPCHK(0x129035b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035d0 @ 0x129035d0 (41 bytes, 16 insns) */
void f_129035d0(void) {
  FTRACE(0x129035d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129035d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129035d1 mov ebp, esp */
  EBP = (ESP);
  /* 129035d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 129035d5 call 0x12906540 */
  push32(0x129035dau); f_12906540();
  /* 129035da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129035dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129035e0 push eax */
  push32((uint32_t)(EAX));
  /* 129035e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129035e4 push ecx */
  push32((uint32_t)(ECX));
  /* 129035e5 call 0x12903600 */
  push32(0x129035eau); f_12903600();
  /* 129035ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129035ed push 9 */
  push32((uint32_t)(0x9u));
  /* 129035ef call 0x129065e0 */
  push32(0x129035f4u); f_129065e0();
  /* 129035f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129035f7 pop ebp */
  EBP = (pop32());
  /* 129035f8 ret  */
  ESPCHK(0x129035d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x12903600 (1004 bytes, 342 insns) */
void f_12903600(void) {
  FTRACE(0x12903600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903600 push ebp */
  push32((uint32_t)(EBP));
  /* 12903601 mov ebp, esp */
  EBP = (ESP);
  /* 12903603 push ecx */
  push32((uint32_t)(ECX));
  /* 12903604 push ebx */
  push32((uint32_t)(EBX));
  /* 12903605 push esi */
  push32((uint32_t)(ESI));
  /* 12903606 push edi */
  push32((uint32_t)(EDI));
  /* 12903607 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 1290360c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1290360f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903611 je 0x12903643 */
  if (C.zf) goto L_12903643;
L_12903613:;
  /* 12903613 call 0x12903ce0 */
  push32(0x12903618u); f_12903ce0();
  /* 12903618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290361a jne 0x1290363d */
  if (!C.zf) goto L_1290363d;
  /* 1290361c push 0x12929488 */
  push32((uint32_t)(0x12929488u));
  /* 12903621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903623 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12903628 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 1290362d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290362f call 0x12901c00 */
  push32(0x12903634u); f_12901c00();
  /* 12903634 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903637 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290363a jne 0x1290363d */
  if (!C.zf) goto L_1290363d;
  /* 1290363c int3  */
  x86_unimpl("int3 @ 0x1290363c");
L_1290363d:;
  /* 1290363d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290363f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903641 jne 0x12903613 */
  if (!C.zf) goto L_12903613;
L_12903643:;
  /* 12903643 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903647 jne 0x1290364e */
  if (!C.zf) goto L_1290364e;
  /* 12903649 jmp 0x129039e5 */
  goto L_129039e5;
L_1290364e:;
  /* 1290364e push 0 */
  push32((uint32_t)(0x0u));
  /* 12903650 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903652 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903654 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903657 push edx */
  push32((uint32_t)(EDX));
  /* 12903658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290365a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290365d push eax */
  push32((uint32_t)(EAX));
  /* 1290365e push 3 */
  push32((uint32_t)(0x3u));
  /* 12903660 call dword ptr [0x1292cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292cc90))), 0x12903666u);
  /* 12903666 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290366b jne 0x12903698 */
  if (!C.zf) goto L_12903698;
L_1290366d:;
  /* 1290366d push 0x1292974c */
  push32((uint32_t)(0x1292974cu));
  /* 12903672 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12903677 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290367b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290367d push 0 */
  push32((uint32_t)(0x0u));
  /* 1290367f call 0x12901c00 */
  push32(0x12903684u); f_12901c00();
  /* 12903684 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903687 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290368a jne 0x1290368d */
  if (!C.zf) goto L_1290368d;
  /* 1290368c int3  */
  x86_unimpl("int3 @ 0x1290368c");
L_1290368d:;
  /* 1290368d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290368f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903691 jne 0x1290366d */
  if (!C.zf) goto L_1290366d;
  /* 12903693 jmp 0x129039e5 */
  goto L_129039e5;
L_12903698:;
  /* 12903698 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290369b push edx */
  push32((uint32_t)(EDX));
  /* 1290369c call 0x12904140 */
  push32(0x129036a1u); f_12904140();
  /* 129036a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129036a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129036a6 jne 0x129036c9 */
  if (!C.zf) goto L_129036c9;
  /* 129036a8 push 0x1292958c */
  push32((uint32_t)(0x1292958cu));
  /* 129036ad push 0 */
  push32((uint32_t)(0x0u));
  /* 129036af push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 129036b4 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 129036b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 129036bb call 0x12901c00 */
  push32(0x129036c0u); f_12901c00();
  /* 129036c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129036c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129036c6 jne 0x129036c9 */
  if (!C.zf) goto L_129036c9;
  /* 129036c8 int3  */
  x86_unimpl("int3 @ 0x129036c8");
L_129036c9:;
  /* 129036c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129036cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129036cd jne 0x12903698 */
  if (!C.zf) goto L_12903698;
  /* 129036cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129036d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129036d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129036d8:;
  /* 129036d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129036db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129036de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129036e3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129036e6 je 0x1290372b */
  if (C.zf) goto L_1290372b;
  /* 129036e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129036eb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129036ef je 0x1290372b */
  if (C.zf) goto L_1290372b;
  /* 129036f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129036f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129036f7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129036fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129036ff je 0x1290372b */
  if (C.zf) goto L_1290372b;
  /* 12903701 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903704 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903708 je 0x1290372b */
  if (C.zf) goto L_1290372b;
  /* 1290370a push 0x12929724 */
  push32((uint32_t)(0x12929724u));
  /* 1290370f push 0 */
  push32((uint32_t)(0x0u));
  /* 12903711 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12903716 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 1290371b push 2 */
  push32((uint32_t)(0x2u));
  /* 1290371d call 0x12901c00 */
  push32(0x12903722u); f_12901c00();
  /* 12903722 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903725 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903728 jne 0x1290372b */
  if (!C.zf) goto L_1290372b;
  /* 1290372a int3  */
  x86_unimpl("int3 @ 0x1290372a");
L_1290372b:;
  /* 1290372b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290372d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290372f jne 0x129036d8 */
  if (!C.zf) goto L_129036d8;
  /* 12903731 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 12903736 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12903739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290373b jne 0x12903806 */
  if (!C.zf) goto L_12903806;
  /* 12903741 push 4 */
  push32((uint32_t)(0x4u));
  /* 12903743 mov cl, byte ptr [0x1292ca90] */
  CL = (r8((uint32_t)(0x1292ca90)));
  /* 12903749 push ecx */
  push32((uint32_t)(ECX));
  /* 1290374a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290374d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903750 push edx */
  push32((uint32_t)(EDX));
  /* 12903751 call 0x12903c50 */
  push32(0x12903756u); f_12903c50();
  /* 12903756 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290375b jne 0x129037a0 */
  if (!C.zf) goto L_129037a0;
L_1290375d:;
  /* 1290375d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903760 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903763 push eax */
  push32((uint32_t)(EAX));
  /* 12903764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903767 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1290376a push edx */
  push32((uint32_t)(EDX));
  /* 1290376b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290376e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12903771 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12903777 mov edx, dword ptr [ecx*4 + 0x1292ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca94)));
  /* 1290377e push edx */
  push32((uint32_t)(EDX));
  /* 1290377f push 0x129296f8 */
  push32((uint32_t)(0x129296f8u));
  /* 12903784 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903786 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290378a push 1 */
  push32((uint32_t)(0x1u));
  /* 1290378c call 0x12901c00 */
  push32(0x12903791u); f_12901c00();
  /* 12903791 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903794 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903797 jne 0x1290379a */
  if (!C.zf) goto L_1290379a;
  /* 12903799 int3  */
  x86_unimpl("int3 @ 0x12903799");
L_1290379a:;
  /* 1290379a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290379c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290379e jne 0x1290375d */
  if (!C.zf) goto L_1290375d;
L_129037a0:;
  /* 129037a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 129037a2 mov cl, byte ptr [0x1292ca90] */
  CL = (r8((uint32_t)(0x1292ca90)));
  /* 129037a8 push ecx */
  push32((uint32_t)(ECX));
  /* 129037a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129037ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129037af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129037b2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 129037b6 push edx */
  push32((uint32_t)(EDX));
  /* 129037b7 call 0x12903c50 */
  push32(0x129037bcu); f_12903c50();
  /* 129037bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129037bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129037c1 jne 0x12903806 */
  if (!C.zf) goto L_12903806;
L_129037c3:;
  /* 129037c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129037c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129037c9 push eax */
  push32((uint32_t)(EAX));
  /* 129037ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129037cd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129037d0 push edx */
  push32((uint32_t)(EDX));
  /* 129037d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129037d4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129037d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129037dd mov edx, dword ptr [ecx*4 + 0x1292ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca94)));
  /* 129037e4 push edx */
  push32((uint32_t)(EDX));
  /* 129037e5 push 0x129296cc */
  push32((uint32_t)(0x129296ccu));
  /* 129037ea push 0 */
  push32((uint32_t)(0x0u));
  /* 129037ec push 0 */
  push32((uint32_t)(0x0u));
  /* 129037ee push 0 */
  push32((uint32_t)(0x0u));
  /* 129037f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 129037f2 call 0x12901c00 */
  push32(0x129037f7u); f_12901c00();
  /* 129037f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129037fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129037fd jne 0x12903800 */
  if (!C.zf) goto L_12903800;
  /* 129037ff int3  */
  x86_unimpl("int3 @ 0x129037ff");
L_12903800:;
  /* 12903800 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903804 jne 0x129037c3 */
  if (!C.zf) goto L_129037c3;
L_12903806:;
  /* 12903806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903809 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290380d jne 0x1290387b */
  if (!C.zf) goto L_1290387b;
L_1290380f:;
  /* 1290380f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903812 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903819 jne 0x12903824 */
  if (!C.zf) goto L_12903824;
  /* 1290381b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290381e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903822 je 0x12903845 */
  if (C.zf) goto L_12903845;
L_12903824:;
  /* 12903824 push 0x1292968c */
  push32((uint32_t)(0x1292968cu));
  /* 12903829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290382b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12903830 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903835 push 2 */
  push32((uint32_t)(0x2u));
  /* 12903837 call 0x12901c00 */
  push32(0x1290383cu); f_12901c00();
  /* 1290383c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290383f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903842 jne 0x12903845 */
  if (!C.zf) goto L_12903845;
  /* 12903844 int3  */
  x86_unimpl("int3 @ 0x12903844");
L_12903845:;
  /* 12903845 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903847 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903849 jne 0x1290380f */
  if (!C.zf) goto L_1290380f;
  /* 1290384b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290384e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12903851 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903854 push eax */
  push32((uint32_t)(EAX));
  /* 12903855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903857 mov cl, byte ptr [0x1292ca91] */
  CL = (r8((uint32_t)(0x1292ca91)));
  /* 1290385d push ecx */
  push32((uint32_t)(ECX));
  /* 1290385e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903861 push edx */
  push32((uint32_t)(EDX));
  /* 12903862 call 0x129068b0 */
  push32(0x12903867u); f_129068b0();
  /* 12903867 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290386a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290386d push eax */
  push32((uint32_t)(EAX));
  /* 1290386e call 0x12906cb0 */
  push32(0x12903873u); f_12906cb0();
  /* 12903873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903876 jmp 0x129039e5 */
  goto L_129039e5;
L_1290387b:;
  /* 1290387b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290387e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903882 jne 0x12903891 */
  if (!C.zf) goto L_12903891;
  /* 12903884 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903888 jne 0x12903891 */
  if (!C.zf) goto L_12903891;
  /* 1290388a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12903891:;
  /* 12903891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903894 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903897 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290389a je 0x129038bd */
  if (C.zf) goto L_129038bd;
  /* 1290389c push 0x1292966c */
  push32((uint32_t)(0x1292966cu));
  /* 129038a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129038a3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 129038a8 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 129038ad push 2 */
  push32((uint32_t)(0x2u));
  /* 129038af call 0x12901c00 */
  push32(0x129038b4u); f_12901c00();
  /* 129038b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129038b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129038ba jne 0x129038bd */
  if (!C.zf) goto L_129038bd;
  /* 129038bc int3  */
  x86_unimpl("int3 @ 0x129038bc");
L_129038bd:;
  /* 129038bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129038bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129038c1 jne 0x12903891 */
  if (!C.zf) goto L_12903891;
  /* 129038c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129038c6 mov eax, dword ptr [0x1292e4d8] */
  EAX = (r32((uint32_t)(0x1292e4d8)));
  /* 129038cb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129038ce mov dword ptr [0x1292e4d8], eax */
  w32((uint32_t)(0x1292e4d8), (EAX));
  /* 129038d3 mov ecx, dword ptr [0x1292ca84] */
  ECX = (r32((uint32_t)(0x1292ca84)));
  /* 129038d9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129038dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129038de jne 0x129039bc */
  if (!C.zf) goto L_129039bc;
  /* 129038e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129038e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129038ea je 0x129038fc */
  if (C.zf) goto L_129038fc;
  /* 129038ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129038ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129038f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129038f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129038f7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129038fa jmp 0x1290393a */
  goto L_1290393a;
L_129038fc:;
  /* 129038fc mov ecx, dword ptr [0x1292e4cc] */
  ECX = (r32((uint32_t)(0x1292e4cc)));
  /* 12903902 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903905 je 0x12903928 */
  if (C.zf) goto L_12903928;
  /* 12903907 push 0x12929654 */
  push32((uint32_t)(0x12929654u));
  /* 1290390c push 0 */
  push32((uint32_t)(0x0u));
  /* 1290390e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12903913 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903918 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290391a call 0x12901c00 */
  push32(0x1290391fu); f_12901c00();
  /* 1290391f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903922 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903925 jne 0x12903928 */
  if (!C.zf) goto L_12903928;
  /* 12903927 int3  */
  x86_unimpl("int3 @ 0x12903927");
L_12903928:;
  /* 12903928 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290392a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290392c jne 0x129038fc */
  if (!C.zf) goto L_129038fc;
  /* 1290392e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903931 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12903934 mov dword ptr [0x1292e4cc], ecx */
  w32((uint32_t)(0x1292e4cc), (ECX));
L_1290393a:;
  /* 1290393a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290393d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903941 je 0x12903952 */
  if (C.zf) goto L_12903952;
  /* 12903943 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903946 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12903949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290394c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1290394e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12903950 jmp 0x1290398f */
  goto L_1290398f;
L_12903952:;
  /* 12903952 mov ecx, dword ptr [0x1292e4d4] */
  ECX = (r32((uint32_t)(0x1292e4d4)));
  /* 12903958 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290395b je 0x1290397e */
  if (C.zf) goto L_1290397e;
  /* 1290395d push 0x1292963c */
  push32((uint32_t)(0x1292963cu));
  /* 12903962 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903964 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12903969 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 1290396e push 2 */
  push32((uint32_t)(0x2u));
  /* 12903970 call 0x12901c00 */
  push32(0x12903975u); f_12901c00();
  /* 12903975 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903978 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290397b jne 0x1290397e */
  if (!C.zf) goto L_1290397e;
  /* 1290397d int3  */
  x86_unimpl("int3 @ 0x1290397d");
L_1290397e:;
  /* 1290397e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12903982 jne 0x12903952 */
  if (!C.zf) goto L_12903952;
  /* 12903984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903987 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12903989 mov dword ptr [0x1292e4d4], ecx */
  w32((uint32_t)(0x1292e4d4), (ECX));
L_1290398f:;
  /* 1290398f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903992 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12903995 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903998 push eax */
  push32((uint32_t)(EAX));
  /* 12903999 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290399b mov cl, byte ptr [0x1292ca91] */
  CL = (r8((uint32_t)(0x1292ca91)));
  /* 129039a1 push ecx */
  push32((uint32_t)(ECX));
  /* 129039a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129039a5 push edx */
  push32((uint32_t)(EDX));
  /* 129039a6 call 0x129068b0 */
  push32(0x129039abu); f_129068b0();
  /* 129039ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129039ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129039b1 push eax */
  push32((uint32_t)(EAX));
  /* 129039b2 call 0x12906cb0 */
  push32(0x129039b7u); f_12906cb0();
  /* 129039b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129039ba jmp 0x129039e5 */
  goto L_129039e5;
L_129039bc:;
  /* 129039bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129039bf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 129039c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129039c9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129039cc push eax */
  push32((uint32_t)(EAX));
  /* 129039cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129039cf mov cl, byte ptr [0x1292ca91] */
  CL = (r8((uint32_t)(0x1292ca91)));
  /* 129039d5 push ecx */
  push32((uint32_t)(ECX));
  /* 129039d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129039d9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129039dc push edx */
  push32((uint32_t)(EDX));
  /* 129039dd call 0x129068b0 */
  push32(0x129039e2u); f_129068b0();
  /* 129039e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129039e5:;
  /* 129039e5 pop edi */
  EDI = (pop32());
  /* 129039e6 pop esi */
  ESI = (pop32());
  /* 129039e7 pop ebx */
  EBX = (pop32());
  /* 129039e8 mov esp, ebp */
  ESP = (EBP);
  /* 129039ea pop ebp */
  EBP = (pop32());
  /* 129039eb ret  */
  ESPCHK(0x12903600u, _esp0);
  ESP += 4; return;
}

/* FUN_100039f0 @ 0x129039f0 (19 bytes, 9 insns) */
void f_129039f0(void) {
  FTRACE(0x129039f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129039f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129039f1 mov ebp, esp */
  EBP = (ESP);
  /* 129039f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129039f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129039f8 push eax */
  push32((uint32_t)(EAX));
  /* 129039f9 call 0x12903a10 */
  push32(0x129039feu); f_12903a10();
  /* 129039fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903a01 pop ebp */
  EBP = (pop32());
  /* 12903a02 ret  */
  ESPCHK(0x129039f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x12903a10 (342 bytes, 119 insns) */
void f_12903a10(void) {
  FTRACE(0x12903a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12903a11 mov ebp, esp */
  EBP = (ESP);
  /* 12903a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903a16 push ebx */
  push32((uint32_t)(EBX));
  /* 12903a17 push esi */
  push32((uint32_t)(ESI));
  /* 12903a18 push edi */
  push32((uint32_t)(EDI));
  /* 12903a19 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 12903a1e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12903a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903a23 je 0x12903a55 */
  if (C.zf) goto L_12903a55;
L_12903a25:;
  /* 12903a25 call 0x12903ce0 */
  push32(0x12903a2au); f_12903ce0();
  /* 12903a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903a2c jne 0x12903a4f */
  if (!C.zf) goto L_12903a4f;
  /* 12903a2e push 0x12929488 */
  push32((uint32_t)(0x12929488u));
  /* 12903a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903a35 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12903a3a push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12903a41 call 0x12901c00 */
  push32(0x12903a46u); f_12901c00();
  /* 12903a46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903a49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903a4c jne 0x12903a4f */
  if (!C.zf) goto L_12903a4f;
  /* 12903a4e int3  */
  x86_unimpl("int3 @ 0x12903a4e");
L_12903a4f:;
  /* 12903a4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903a51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903a53 jne 0x12903a25 */
  if (!C.zf) goto L_12903a25;
L_12903a55:;
  /* 12903a55 push 9 */
  push32((uint32_t)(0x9u));
  /* 12903a57 call 0x12906540 */
  push32(0x12903a5cu); f_12906540();
  /* 12903a5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12903a5f:;
  /* 12903a5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903a62 push edx */
  push32((uint32_t)(EDX));
  /* 12903a63 call 0x12904140 */
  push32(0x12903a68u); f_12904140();
  /* 12903a68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903a6d jne 0x12903a90 */
  if (!C.zf) goto L_12903a90;
  /* 12903a6f push 0x1292958c */
  push32((uint32_t)(0x1292958cu));
  /* 12903a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903a76 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12903a7b push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903a80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12903a82 call 0x12901c00 */
  push32(0x12903a87u); f_12901c00();
  /* 12903a87 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903a8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903a8d jne 0x12903a90 */
  if (!C.zf) goto L_12903a90;
  /* 12903a8f int3  */
  x86_unimpl("int3 @ 0x12903a8f");
L_12903a90:;
  /* 12903a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903a94 jne 0x12903a5f */
  if (!C.zf) goto L_12903a5f;
  /* 12903a96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903a99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903a9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12903a9f:;
  /* 12903a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903aa2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903aa5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12903aaa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903aad je 0x12903af2 */
  if (C.zf) goto L_12903af2;
  /* 12903aaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903ab2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903ab6 je 0x12903af2 */
  if (C.zf) goto L_12903af2;
  /* 12903ab8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903abb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903abe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12903ac3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903ac6 je 0x12903af2 */
  if (C.zf) goto L_12903af2;
  /* 12903ac8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903acb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903acf je 0x12903af2 */
  if (C.zf) goto L_12903af2;
  /* 12903ad1 push 0x12929724 */
  push32((uint32_t)(0x12929724u));
  /* 12903ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903ad8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12903add push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12903ae4 call 0x12901c00 */
  push32(0x12903ae9u); f_12901c00();
  /* 12903ae9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903aec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903aef jne 0x12903af2 */
  if (!C.zf) goto L_12903af2;
  /* 12903af1 int3  */
  x86_unimpl("int3 @ 0x12903af1");
L_12903af2:;
  /* 12903af2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903af4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12903af6 jne 0x12903a9f */
  if (!C.zf) goto L_12903a9f;
  /* 12903af8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903afb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903aff jne 0x12903b0e */
  if (!C.zf) goto L_12903b0e;
  /* 12903b01 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903b05 jne 0x12903b0e */
  if (!C.zf) goto L_12903b0e;
  /* 12903b07 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12903b0e:;
  /* 12903b0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903b11 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903b15 je 0x12903b49 */
  if (C.zf) goto L_12903b49;
L_12903b17:;
  /* 12903b17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903b1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903b1d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903b20 je 0x12903b43 */
  if (C.zf) goto L_12903b43;
  /* 12903b22 push 0x1292966c */
  push32((uint32_t)(0x1292966cu));
  /* 12903b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903b29 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12903b2e push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12903b35 call 0x12901c00 */
  push32(0x12903b3au); f_12901c00();
  /* 12903b3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903b3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903b40 jne 0x12903b43 */
  if (!C.zf) goto L_12903b43;
  /* 12903b42 int3  */
  x86_unimpl("int3 @ 0x12903b42");
L_12903b43:;
  /* 12903b43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903b45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903b47 jne 0x12903b17 */
  if (!C.zf) goto L_12903b17;
L_12903b49:;
  /* 12903b49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903b4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12903b4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12903b52 push 9 */
  push32((uint32_t)(0x9u));
  /* 12903b54 call 0x129065e0 */
  push32(0x12903b59u); f_129065e0();
  /* 12903b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903b5f pop edi */
  EDI = (pop32());
  /* 12903b60 pop esi */
  ESI = (pop32());
  /* 12903b61 pop ebx */
  EBX = (pop32());
  /* 12903b62 mov esp, ebp */
  ESP = (EBP);
  /* 12903b64 pop ebp */
  EBP = (pop32());
  /* 12903b65 ret  */
  ESPCHK(0x12903a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b70 @ 0x12903b70 (28 bytes, 11 insns) */
void f_12903b70(void) {
  FTRACE(0x12903b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12903b71 mov ebp, esp */
  EBP = (ESP);
  /* 12903b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12903b74 mov eax, dword ptr [0x1292ca8c] */
  EAX = (r32((uint32_t)(0x1292ca8c)));
  /* 12903b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12903b7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903b7f mov dword ptr [0x1292ca8c], ecx */
  w32((uint32_t)(0x1292ca8c), (ECX));
  /* 12903b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903b88 mov esp, ebp */
  ESP = (EBP);
  /* 12903b8a pop ebp */
  EBP = (pop32());
  /* 12903b8b ret  */
  ESPCHK(0x12903b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x12903b90 (157 bytes, 59 insns) */
void f_12903b90(void) {
  FTRACE(0x12903b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12903b91 mov ebp, esp */
  EBP = (ESP);
  /* 12903b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12903b94 push ebx */
  push32((uint32_t)(EBX));
  /* 12903b95 push esi */
  push32((uint32_t)(ESI));
  /* 12903b96 push edi */
  push32((uint32_t)(EDI));
  /* 12903b97 push 9 */
  push32((uint32_t)(0x9u));
  /* 12903b99 call 0x12906540 */
  push32(0x12903b9eu); f_12906540();
  /* 12903b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903ba1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12903ba5 call 0x12904140 */
  push32(0x12903baau); f_12904140();
  /* 12903baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903baf je 0x12903c1c */
  if (C.zf) goto L_12903c1c;
  /* 12903bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903bb4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903bb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12903bba:;
  /* 12903bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903bbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903bc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12903bc5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903bc8 je 0x12903c0d */
  if (C.zf) goto L_12903c0d;
  /* 12903bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903bcd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903bd1 je 0x12903c0d */
  if (C.zf) goto L_12903c0d;
  /* 12903bd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903bd6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12903bd9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12903bde cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903be1 je 0x12903c0d */
  if (C.zf) goto L_12903c0d;
  /* 12903be3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903be6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903bea je 0x12903c0d */
  if (C.zf) goto L_12903c0d;
  /* 12903bec push 0x12929724 */
  push32((uint32_t)(0x12929724u));
  /* 12903bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903bf3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12903bf8 push 0x1292947c */
  push32((uint32_t)(0x1292947cu));
  /* 12903bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 12903bff call 0x12901c00 */
  push32(0x12903c04u); f_12901c00();
  /* 12903c04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903c07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903c0a jne 0x12903c0d */
  if (!C.zf) goto L_12903c0d;
  /* 12903c0c int3  */
  x86_unimpl("int3 @ 0x12903c0c");
L_12903c0d:;
  /* 12903c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903c0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12903c11 jne 0x12903bba */
  if (!C.zf) goto L_12903bba;
  /* 12903c13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903c16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903c19 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12903c1c:;
  /* 12903c1c push 9 */
  push32((uint32_t)(0x9u));
  /* 12903c1e call 0x129065e0 */
  push32(0x12903c23u); f_129065e0();
  /* 12903c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903c26 pop edi */
  EDI = (pop32());
  /* 12903c27 pop esi */
  ESI = (pop32());
  /* 12903c28 pop ebx */
  EBX = (pop32());
  /* 12903c29 mov esp, ebp */
  ESP = (EBP);
  /* 12903c2b pop ebp */
  EBP = (pop32());
  /* 12903c2c ret  */
  ESPCHK(0x12903b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c30 @ 0x12903c30 (28 bytes, 11 insns) */
void f_12903c30(void) {
  FTRACE(0x12903c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12903c31 mov ebp, esp */
  EBP = (ESP);
  /* 12903c33 push ecx */
  push32((uint32_t)(ECX));
  /* 12903c34 mov eax, dword ptr [0x1292cc90] */
  EAX = (r32((uint32_t)(0x1292cc90)));
  /* 12903c39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12903c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903c3f mov dword ptr [0x1292cc90], ecx */
  w32((uint32_t)(0x1292cc90), (ECX));
  /* 12903c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903c48 mov esp, ebp */
  ESP = (EBP);
  /* 12903c4a pop ebp */
  EBP = (pop32());
  /* 12903c4b ret  */
  ESPCHK(0x12903c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c50 @ 0x12903c50 (136 bytes, 55 insns) */
void f_12903c50(void) {
  FTRACE(0x12903c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12903c51 mov ebp, esp */
  EBP = (ESP);
  /* 12903c53 push ecx */
  push32((uint32_t)(ECX));
  /* 12903c54 push ebx */
  push32((uint32_t)(EBX));
  /* 12903c55 push esi */
  push32((uint32_t)(ESI));
  /* 12903c56 push edi */
  push32((uint32_t)(EDI));
  /* 12903c57 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12903c5e:;
  /* 12903c5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12903c61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12903c64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903c67 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12903c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903c6c je 0x12903cce */
  if (C.zf) goto L_12903cce;
  /* 12903c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903c71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903c73 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12903c75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903c78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12903c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903c81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903c84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12903c87 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903c89 je 0x12903ccc */
  if (C.zf) goto L_12903ccc;
L_12903c8b:;
  /* 12903c8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12903c8e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12903c93 push eax */
  push32((uint32_t)(EAX));
  /* 12903c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903c97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903c99 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12903c9c push edx */
  push32((uint32_t)(EDX));
  /* 12903c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12903ca0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903ca3 push eax */
  push32((uint32_t)(EAX));
  /* 12903ca4 push 0x12929768 */
  push32((uint32_t)(0x12929768u));
  /* 12903ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12903cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12903caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12903cb1 call 0x12901c00 */
  push32(0x12903cb6u); f_12901c00();
  /* 12903cb6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903cb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903cbc jne 0x12903cbf */
  if (!C.zf) goto L_12903cbf;
  /* 12903cbe int3  */
  x86_unimpl("int3 @ 0x12903cbe");
L_12903cbf:;
  /* 12903cbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903cc3 jne 0x12903c8b */
  if (!C.zf) goto L_12903c8b;
  /* 12903cc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12903ccc:;
  /* 12903ccc jmp 0x12903c5e */
  goto L_12903c5e;
L_12903cce:;
  /* 12903cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12903cd1 pop edi */
  EDI = (pop32());
  /* 12903cd2 pop esi */
  ESI = (pop32());
  /* 12903cd3 pop ebx */
  EBX = (pop32());
  /* 12903cd4 mov esp, ebp */
  ESP = (EBP);
  /* 12903cd6 pop ebp */
  EBP = (pop32());
  /* 12903cd7 ret  */
  ESPCHK(0x12903c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x12903ce0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12903ce0(void) {
  FTRACE(0x12903ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12903ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12903ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12903ce3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12903ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 12903ce7 push esi */
  push32((uint32_t)(ESI));
  /* 12903ce8 push edi */
  push32((uint32_t)(EDI));
  /* 12903ce9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12903cf0 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 12903cf5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12903cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903cfa jne 0x12903d06 */
  if (!C.zf) goto L_12903d06;
  /* 12903cfc mov eax, 1 */
  EAX = (0x1u);
  /* 12903d01 jmp 0x12904038 */
  goto L_12904038;
L_12903d06:;
  /* 12903d06 push 9 */
  push32((uint32_t)(0x9u));
  /* 12903d08 call 0x12906540 */
  push32(0x12903d0du); f_12906540();
  /* 12903d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903d10 call 0x12906d20 */
  push32(0x12903d15u); f_12906d20();
  /* 12903d15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12903d18 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903d1c je 0x12903e29 */
  if (C.zf) goto L_12903e29;
  /* 12903d22 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903d26 je 0x12903e29 */
  if (C.zf) goto L_12903e29;
  /* 12903d2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12903d2f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12903d32 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12903d35 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903d38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12903d3b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903d3f ja 0x12903df2 */
  if ((!C.cf&&!C.zf)) goto L_12903df2;
  /* 12903d45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12903d48 jmp dword ptr [eax*4 + 0x1290403f] */
  switch (EAX) {
    case 0: goto L_12903dca;
    case 1: goto L_12903da2;
    case 2: goto L_12903d7a;
    case 3: goto L_12903d4f;
    default: x86_unimpl("switch@0x12903d48 out of table"); return;
  }
L_12903d4f:;
  /* 12903d4f push 0x129298bc */
  push32((uint32_t)(0x129298bcu));
  /* 12903d54 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12903d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d61 call 0x12901c00 */
  push32(0x12903d66u); f_12901c00();
  /* 12903d66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903d69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903d6c jne 0x12903d6f */
  if (!C.zf) goto L_12903d6f;
  /* 12903d6e int3  */
  x86_unimpl("int3 @ 0x12903d6e");
L_12903d6f:;
  /* 12903d6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903d71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903d73 jne 0x12903d4f */
  if (!C.zf) goto L_12903d4f;
  /* 12903d75 jmp 0x12903e18 */
  goto L_12903e18;
L_12903d7a:;
  /* 12903d7a push 0x12929898 */
  push32((uint32_t)(0x12929898u));
  /* 12903d7f push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12903d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12903d8c call 0x12901c00 */
  push32(0x12903d91u); f_12901c00();
  /* 12903d91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903d94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903d97 jne 0x12903d9a */
  if (!C.zf) goto L_12903d9a;
  /* 12903d99 int3  */
  x86_unimpl("int3 @ 0x12903d99");
L_12903d9a:;
  /* 12903d9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903d9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12903d9e jne 0x12903d7a */
  if (!C.zf) goto L_12903d7a;
  /* 12903da0 jmp 0x12903e18 */
  goto L_12903e18;
L_12903da2:;
  /* 12903da2 push 0x12929874 */
  push32((uint32_t)(0x12929874u));
  /* 12903da7 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12903dac push 0 */
  push32((uint32_t)(0x0u));
  /* 12903dae push 0 */
  push32((uint32_t)(0x0u));
  /* 12903db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903db4 call 0x12901c00 */
  push32(0x12903db9u); f_12901c00();
  /* 12903db9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903dbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903dbf jne 0x12903dc2 */
  if (!C.zf) goto L_12903dc2;
  /* 12903dc1 int3  */
  x86_unimpl("int3 @ 0x12903dc1");
L_12903dc2:;
  /* 12903dc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903dc6 jne 0x12903da2 */
  if (!C.zf) goto L_12903da2;
  /* 12903dc8 jmp 0x12903e18 */
  goto L_12903e18;
L_12903dca:;
  /* 12903dca push 0x12929850 */
  push32((uint32_t)(0x12929850u));
  /* 12903dcf push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12903dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903dda push 0 */
  push32((uint32_t)(0x0u));
  /* 12903ddc call 0x12901c00 */
  push32(0x12903de1u); f_12901c00();
  /* 12903de1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903de4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903de7 jne 0x12903dea */
  if (!C.zf) goto L_12903dea;
  /* 12903de9 int3  */
  x86_unimpl("int3 @ 0x12903de9");
L_12903dea:;
  /* 12903dea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903dec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903dee jne 0x12903dca */
  if (!C.zf) goto L_12903dca;
  /* 12903df0 jmp 0x12903e18 */
  goto L_12903e18;
L_12903df2:;
  /* 12903df2 push 0x12929824 */
  push32((uint32_t)(0x12929824u));
  /* 12903df7 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12903dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12903dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12903e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903e04 call 0x12901c00 */
  push32(0x12903e09u); f_12901c00();
  /* 12903e09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903e0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903e0f jne 0x12903e12 */
  if (!C.zf) goto L_12903e12;
  /* 12903e11 int3  */
  x86_unimpl("int3 @ 0x12903e11");
L_12903e12:;
  /* 12903e12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903e14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12903e16 jne 0x12903df2 */
  if (!C.zf) goto L_12903df2;
L_12903e18:;
  /* 12903e18 push 9 */
  push32((uint32_t)(0x9u));
  /* 12903e1a call 0x129065e0 */
  push32(0x12903e1fu); f_129065e0();
  /* 12903e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903e22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903e24 jmp 0x12904038 */
  goto L_12904038;
L_12903e29:;
  /* 12903e29 mov eax, dword ptr [0x1292e4d4] */
  EAX = (r32((uint32_t)(0x1292e4d4)));
  /* 12903e2e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12903e31 jmp 0x12903e3b */
  goto L_12903e3b;
L_12903e33:;
  /* 12903e33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903e36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12903e38 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12903e3b:;
  /* 12903e3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903e3f je 0x1290402b */
  if (C.zf) goto L_1290402b;
  /* 12903e45 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12903e4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903e4f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12903e52 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12903e58 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903e5b je 0x12903e80 */
  if (C.zf) goto L_12903e80;
  /* 12903e5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903e60 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903e64 je 0x12903e80 */
  if (C.zf) goto L_12903e80;
  /* 12903e66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903e69 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12903e6c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12903e72 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903e75 je 0x12903e80 */
  if (C.zf) goto L_12903e80;
  /* 12903e77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903e7a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903e7e jne 0x12903e98 */
  if (!C.zf) goto L_12903e98;
L_12903e80:;
  /* 12903e80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903e83 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12903e86 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12903e8c mov edx, dword ptr [ecx*4 + 0x1292ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca94)));
  /* 12903e93 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12903e96 jmp 0x12903e9f */
  goto L_12903e9f;
L_12903e98:;
  /* 12903e98 mov dword ptr [ebp - 0x14], 0x1292981c */
  w32((uint32_t)(EBP + -0x14), (0x1292981cu));
L_12903e9f:;
  /* 12903e9f push 4 */
  push32((uint32_t)(0x4u));
  /* 12903ea1 mov al, byte ptr [0x1292ca90] */
  AL = (r8((uint32_t)(0x1292ca90)));
  /* 12903ea6 push eax */
  push32((uint32_t)(EAX));
  /* 12903ea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903eaa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903ead push ecx */
  push32((uint32_t)(ECX));
  /* 12903eae call 0x12903c50 */
  push32(0x12903eb3u); f_12903c50();
  /* 12903eb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903eb8 jne 0x12903ef4 */
  if (!C.zf) goto L_12903ef4;
L_12903eba:;
  /* 12903eba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903ebd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903ec0 push edx */
  push32((uint32_t)(EDX));
  /* 12903ec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903ec4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12903ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 12903ec8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12903ecb push edx */
  push32((uint32_t)(EDX));
  /* 12903ecc push 0x129296f8 */
  push32((uint32_t)(0x129296f8u));
  /* 12903ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903ed9 call 0x12901c00 */
  push32(0x12903edeu); f_12901c00();
  /* 12903ede add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903ee4 jne 0x12903ee7 */
  if (!C.zf) goto L_12903ee7;
  /* 12903ee6 int3  */
  x86_unimpl("int3 @ 0x12903ee6");
L_12903ee7:;
  /* 12903ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903eeb jne 0x12903eba */
  if (!C.zf) goto L_12903eba;
  /* 12903eed mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12903ef4:;
  /* 12903ef4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12903ef6 mov cl, byte ptr [0x1292ca90] */
  CL = (r8((uint32_t)(0x1292ca90)));
  /* 12903efc push ecx */
  push32((uint32_t)(ECX));
  /* 12903efd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f00 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12903f03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f06 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12903f0a push edx */
  push32((uint32_t)(EDX));
  /* 12903f0b call 0x12903c50 */
  push32(0x12903f10u); f_12903c50();
  /* 12903f10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903f15 jne 0x12903f51 */
  if (!C.zf) goto L_12903f51;
L_12903f17:;
  /* 12903f17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f1a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903f1d push eax */
  push32((uint32_t)(EAX));
  /* 12903f1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f21 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12903f24 push edx */
  push32((uint32_t)(EDX));
  /* 12903f25 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12903f28 push eax */
  push32((uint32_t)(EAX));
  /* 12903f29 push 0x129296cc */
  push32((uint32_t)(0x129296ccu));
  /* 12903f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f36 call 0x12901c00 */
  push32(0x12903f3bu); f_12901c00();
  /* 12903f3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903f41 jne 0x12903f44 */
  if (!C.zf) goto L_12903f44;
  /* 12903f43 int3  */
  x86_unimpl("int3 @ 0x12903f43");
L_12903f44:;
  /* 12903f44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12903f46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12903f48 jne 0x12903f17 */
  if (!C.zf) goto L_12903f17;
  /* 12903f4a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12903f51:;
  /* 12903f51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f54 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903f58 jne 0x12903faa */
  if (!C.zf) goto L_12903faa;
  /* 12903f5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12903f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12903f61 mov dl, byte ptr [0x1292ca91] */
  DL = (r8((uint32_t)(0x1292ca91)));
  /* 12903f67 push edx */
  push32((uint32_t)(EDX));
  /* 12903f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f6b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903f6e push eax */
  push32((uint32_t)(EAX));
  /* 12903f6f call 0x12903c50 */
  push32(0x12903f74u); f_12903c50();
  /* 12903f74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903f79 jne 0x12903faa */
  if (!C.zf) goto L_12903faa;
L_12903f7b:;
  /* 12903f7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903f7e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903f81 push ecx */
  push32((uint32_t)(ECX));
  /* 12903f82 push 0x129297f0 */
  push32((uint32_t)(0x129297f0u));
  /* 12903f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12903f8f call 0x12901c00 */
  push32(0x12903f94u); f_12901c00();
  /* 12903f94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903f97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903f9a jne 0x12903f9d */
  if (!C.zf) goto L_12903f9d;
  /* 12903f9c int3  */
  x86_unimpl("int3 @ 0x12903f9c");
L_12903f9d:;
  /* 12903f9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12903f9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12903fa1 jne 0x12903f7b */
  if (!C.zf) goto L_12903f7b;
  /* 12903fa3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12903faa:;
  /* 12903faa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903fae jne 0x12904026 */
  if (!C.zf) goto L_12904026;
  /* 12903fb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903fb3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903fb7 je 0x12903fec */
  if (C.zf) goto L_12903fec;
L_12903fb9:;
  /* 12903fb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903fbc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12903fbf push edx */
  push32((uint32_t)(EDX));
  /* 12903fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903fc3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12903fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12903fc7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12903fca push edx */
  push32((uint32_t)(EDX));
  /* 12903fcb push 0x129297d0 */
  push32((uint32_t)(0x129297d0u));
  /* 12903fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12903fd8 call 0x12901c00 */
  push32(0x12903fddu); f_12901c00();
  /* 12903fdd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12903fe0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12903fe3 jne 0x12903fe6 */
  if (!C.zf) goto L_12903fe6;
  /* 12903fe5 int3  */
  x86_unimpl("int3 @ 0x12903fe5");
L_12903fe6:;
  /* 12903fe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12903fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12903fea jne 0x12903fb9 */
  if (!C.zf) goto L_12903fb9;
L_12903fec:;
  /* 12903fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903fef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12903ff2 push edx */
  push32((uint32_t)(EDX));
  /* 12903ff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12903ff6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12903ff9 push eax */
  push32((uint32_t)(EAX));
  /* 12903ffa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12903ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12903ffe push 0x129297a4 */
  push32((uint32_t)(0x129297a4u));
  /* 12904003 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904005 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904007 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904009 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290400b call 0x12901c00 */
  push32(0x12904010u); f_12901c00();
  /* 12904010 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904013 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904016 jne 0x12904019 */
  if (!C.zf) goto L_12904019;
  /* 12904018 int3  */
  x86_unimpl("int3 @ 0x12904018");
L_12904019:;
  /* 12904019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290401b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290401d jne 0x12903fec */
  if (!C.zf) goto L_12903fec;
  /* 1290401f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12904026:;
  /* 12904026 jmp 0x12903e33 */
  goto L_12903e33;
L_1290402b:;
  /* 1290402b push 9 */
  push32((uint32_t)(0x9u));
  /* 1290402d call 0x129065e0 */
  push32(0x12904032u); f_129065e0();
  /* 12904032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12904038:;
  /* 12904038 pop edi */
  EDI = (pop32());
  /* 12904039 pop esi */
  ESI = (pop32());
  /* 1290403a pop ebx */
  EBX = (pop32());
  /* 1290403b mov esp, ebp */
  ESP = (EBP);
  /* 1290403d pop ebp */
  EBP = (pop32());
  /* 1290403e ret  */
  ESPCHK(0x12903ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004050 @ 0x12904050 (34 bytes, 13 insns) */
void f_12904050(void) {
  FTRACE(0x12904050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904050 push ebp */
  push32((uint32_t)(EBP));
  /* 12904051 mov ebp, esp */
  EBP = (ESP);
  /* 12904053 push ecx */
  push32((uint32_t)(ECX));
  /* 12904054 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 12904059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290405c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904060 je 0x1290406b */
  if (C.zf) goto L_1290406b;
  /* 12904062 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904065 mov dword ptr [0x1292ca84], ecx */
  w32((uint32_t)(0x1292ca84), (ECX));
L_1290406b:;
  /* 1290406b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290406e mov esp, ebp */
  ESP = (EBP);
  /* 12904070 pop ebp */
  EBP = (pop32());
  /* 12904071 ret  */
  ESPCHK(0x12904050u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x12904080 (103 bytes, 38 insns) */
void f_12904080(void) {
  FTRACE(0x12904080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904080 push ebp */
  push32((uint32_t)(EBP));
  /* 12904081 mov ebp, esp */
  EBP = (ESP);
  /* 12904083 push ecx */
  push32((uint32_t)(ECX));
  /* 12904084 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 12904089 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1290408c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290408e jne 0x12904092 */
  if (!C.zf) goto L_12904092;
  /* 12904090 jmp 0x129040e3 */
  goto L_129040e3;
L_12904092:;
  /* 12904092 push 9 */
  push32((uint32_t)(0x9u));
  /* 12904094 call 0x12906540 */
  push32(0x12904099u); f_12906540();
  /* 12904099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290409c mov ecx, dword ptr [0x1292e4d4] */
  ECX = (r32((uint32_t)(0x1292e4d4)));
  /* 129040a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129040a5 jmp 0x129040af */
  goto L_129040af;
L_129040a7:;
  /* 129040a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129040aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129040ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129040af:;
  /* 129040af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129040b3 je 0x129040d9 */
  if (C.zf) goto L_129040d9;
  /* 129040b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129040b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129040bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129040c1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129040c4 jne 0x129040d7 */
  if (!C.zf) goto L_129040d7;
  /* 129040c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129040c9 push eax */
  push32((uint32_t)(EAX));
  /* 129040ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129040cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129040d0 push ecx */
  push32((uint32_t)(ECX));
  /* 129040d1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x129040d4u);
  /* 129040d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129040d7:;
  /* 129040d7 jmp 0x129040a7 */
  goto L_129040a7;
L_129040d9:;
  /* 129040d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 129040db call 0x129065e0 */
  push32(0x129040e0u); f_129065e0();
  /* 129040e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129040e3:;
  /* 129040e3 mov esp, ebp */
  ESP = (EBP);
  /* 129040e5 pop ebp */
  EBP = (pop32());
  /* 129040e6 ret  */
  ESPCHK(0x12904080u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x129040f0 (75 bytes, 28 insns) */
void f_129040f0(void) {
  FTRACE(0x129040f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129040f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129040f1 mov ebp, esp */
  EBP = (ESP);
  /* 129040f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129040f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129040f8 je 0x1290412d */
  if (C.zf) goto L_1290412d;
  /* 129040fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129040fd push eax */
  push32((uint32_t)(EAX));
  /* 129040fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904101 push ecx */
  push32((uint32_t)(ECX));
  /* 12904102 call dword ptr [0x129302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302c0))), 0x12904108u);
  /* 12904108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290410a jne 0x1290412d */
  if (!C.zf) goto L_1290412d;
  /* 1290410c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904110 je 0x12904124 */
  if (C.zf) goto L_12904124;
  /* 12904112 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904115 push edx */
  push32((uint32_t)(EDX));
  /* 12904116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904119 push eax */
  push32((uint32_t)(EAX));
  /* 1290411a call dword ptr [0x129302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302bc))), 0x12904120u);
  /* 12904120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904122 jne 0x1290412d */
  if (!C.zf) goto L_1290412d;
L_12904124:;
  /* 12904124 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1290412b jmp 0x12904134 */
  goto L_12904134;
L_1290412d:;
  /* 1290412d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12904134:;
  /* 12904134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904137 mov esp, ebp */
  ESP = (EBP);
  /* 12904139 pop ebp */
  EBP = (pop32());
  /* 1290413a ret  */
  ESPCHK(0x129040f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004140 @ 0x12904140 (134 bytes, 50 insns) */
void f_12904140(void) {
  FTRACE(0x12904140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904140 push ebp */
  push32((uint32_t)(EBP));
  /* 12904141 mov ebp, esp */
  EBP = (ESP);
  /* 12904143 push ecx */
  push32((uint32_t)(ECX));
  /* 12904144 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904148 jne 0x1290414e */
  if (!C.zf) goto L_1290414e;
  /* 1290414a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290414c jmp 0x129041c2 */
  goto L_129041c2;
L_1290414e:;
  /* 1290414e push 1 */
  push32((uint32_t)(0x1u));
  /* 12904150 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12904152 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904155 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904158 push eax */
  push32((uint32_t)(EAX));
  /* 12904159 call 0x129040f0 */
  push32(0x1290415eu); f_129040f0();
  /* 1290415e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904163 jne 0x12904169 */
  if (!C.zf) goto L_12904169;
  /* 12904165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904167 jmp 0x129041c2 */
  goto L_129041c2;
L_12904169:;
  /* 12904169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290416c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290416f push ecx */
  push32((uint32_t)(ECX));
  /* 12904170 call 0x12906e40 */
  push32(0x12904175u); f_12906e40();
  /* 12904175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904178 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290417b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290417f je 0x12904196 */
  if (C.zf) goto L_12904196;
  /* 12904181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904184 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904187 push edx */
  push32((uint32_t)(EDX));
  /* 12904188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290418b push eax */
  push32((uint32_t)(EAX));
  /* 1290418c call 0x12906ea0 */
  push32(0x12904191u); f_12906ea0();
  /* 12904191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904194 jmp 0x129041c2 */
  goto L_129041c2;
L_12904196:;
  /* 12904196 mov ecx, dword ptr [0x1292e488] */
  ECX = (r32((uint32_t)(0x1292e488)));
  /* 1290419c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 129041a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129041a4 je 0x129041ad */
  if (C.zf) goto L_129041ad;
  /* 129041a6 mov eax, 1 */
  EAX = (0x1u);
  /* 129041ab jmp 0x129041c2 */
  goto L_129041c2;
L_129041ad:;
  /* 129041ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129041b0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129041b3 push edx */
  push32((uint32_t)(EDX));
  /* 129041b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129041b6 mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 129041bb push eax */
  push32((uint32_t)(EAX));
  /* 129041bc call dword ptr [0x129302c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302c4))), 0x129041c2u);
L_129041c2:;
  /* 129041c2 mov esp, ebp */
  ESP = (EBP);
  /* 129041c4 pop ebp */
  EBP = (pop32());
  /* 129041c5 ret  */
  ESPCHK(0x12904140u, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x129041d0 (227 bytes, 80 insns) */
void f_129041d0(void) {
  FTRACE(0x129041d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129041d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129041d1 mov ebp, esp */
  EBP = (ESP);
  /* 129041d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129041d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129041d7 push eax */
  push32((uint32_t)(EAX));
  /* 129041d8 call 0x12904140 */
  push32(0x129041ddu); f_12904140();
  /* 129041dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129041e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129041e2 jne 0x129041eb */
  if (!C.zf) goto L_129041eb;
  /* 129041e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129041e6 jmp 0x129042af */
  goto L_129042af;
L_129041eb:;
  /* 129041eb push 9 */
  push32((uint32_t)(0x9u));
  /* 129041ed call 0x12906540 */
  push32(0x129041f2u); f_12906540();
  /* 129041f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129041f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129041f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129041fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129041fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904201 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12904204 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12904209 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290420c je 0x12904230 */
  if (C.zf) goto L_12904230;
  /* 1290420e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904211 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904215 je 0x12904230 */
  if (C.zf) goto L_12904230;
  /* 12904217 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290421a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1290421d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12904222 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904225 je 0x12904230 */
  if (C.zf) goto L_12904230;
  /* 12904227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290422a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290422e jne 0x129042a3 */
  if (!C.zf) goto L_129042a3;
L_12904230:;
  /* 12904230 push 1 */
  push32((uint32_t)(0x1u));
  /* 12904232 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904235 push edx */
  push32((uint32_t)(EDX));
  /* 12904236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904239 push eax */
  push32((uint32_t)(EAX));
  /* 1290423a call 0x129040f0 */
  push32(0x1290423fu); f_129040f0();
  /* 1290423f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904244 je 0x129042a3 */
  if (C.zf) goto L_129042a3;
  /* 12904246 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904249 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1290424c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290424f jne 0x129042a3 */
  if (!C.zf) goto L_129042a3;
  /* 12904251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904254 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12904257 cmp ecx, dword ptr [0x1292ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290425d jg 0x129042a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_129042a3;
  /* 1290425f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904263 je 0x12904270 */
  if (C.zf) goto L_12904270;
  /* 12904265 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290426b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1290426e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12904270:;
  /* 12904270 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904274 je 0x12904281 */
  if (C.zf) goto L_12904281;
  /* 12904276 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12904279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290427c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290427f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12904281:;
  /* 12904281 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904285 je 0x12904292 */
  if (C.zf) goto L_12904292;
  /* 12904287 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290428a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290428d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12904290 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12904292:;
  /* 12904292 push 9 */
  push32((uint32_t)(0x9u));
  /* 12904294 call 0x129065e0 */
  push32(0x12904299u); f_129065e0();
  /* 12904299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290429c mov eax, 1 */
  EAX = (0x1u);
  /* 129042a1 jmp 0x129042af */
  goto L_129042af;
L_129042a3:;
  /* 129042a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 129042a5 call 0x129065e0 */
  push32(0x129042aau); f_129065e0();
  /* 129042aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129042ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129042af:;
  /* 129042af mov esp, ebp */
  ESP = (EBP);
  /* 129042b1 pop ebp */
  EBP = (pop32());
  /* 129042b2 ret  */
  ESPCHK(0x129041d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042c0 @ 0x129042c0 (28 bytes, 11 insns) */
void f_129042c0(void) {
  FTRACE(0x129042c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129042c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129042c1 mov ebp, esp */
  EBP = (ESP);
  /* 129042c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129042c4 mov eax, dword ptr [0x1292fe38] */
  EAX = (r32((uint32_t)(0x1292fe38)));
  /* 129042c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129042cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129042cf mov dword ptr [0x1292fe38], ecx */
  w32((uint32_t)(0x1292fe38), (ECX));
  /* 129042d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129042d8 mov esp, ebp */
  ESP = (EBP);
  /* 129042da pop ebp */
  EBP = (pop32());
  /* 129042db ret  */
  ESPCHK(0x129042c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e0 @ 0x129042e0 (362 bytes, 116 insns) */
void f_129042e0(void) {
  FTRACE(0x129042e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129042e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129042e1 mov ebp, esp */
  EBP = (ESP);
  /* 129042e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129042e6 push ebx */
  push32((uint32_t)(EBX));
  /* 129042e7 push esi */
  push32((uint32_t)(ESI));
  /* 129042e8 push edi */
  push32((uint32_t)(EDI));
  /* 129042e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129042ed jne 0x1290431a */
  if (!C.zf) goto L_1290431a;
L_129042ef:;
  /* 129042ef push 0x12929904 */
  push32((uint32_t)(0x12929904u));
  /* 129042f4 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 129042f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129042fb push 0 */
  push32((uint32_t)(0x0u));
  /* 129042fd push 0 */
  push32((uint32_t)(0x0u));
  /* 129042ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12904301 call 0x12901c00 */
  push32(0x12904306u); f_12901c00();
  /* 12904306 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904309 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290430c jne 0x1290430f */
  if (!C.zf) goto L_1290430f;
  /* 1290430e int3  */
  x86_unimpl("int3 @ 0x1290430e");
L_1290430f:;
  /* 1290430f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904313 jne 0x129042ef */
  if (!C.zf) goto L_129042ef;
  /* 12904315 jmp 0x12904443 */
  goto L_12904443;
L_1290431a:;
  /* 1290431a push 9 */
  push32((uint32_t)(0x9u));
  /* 1290431c call 0x12906540 */
  push32(0x12904321u); f_12906540();
  /* 12904321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904327 mov edx, dword ptr [0x1292e4d4] */
  EDX = (r32((uint32_t)(0x1292e4d4)));
  /* 1290432d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1290432f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12904336 jmp 0x12904341 */
  goto L_12904341;
L_12904338:;
  /* 12904338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290433b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290433e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12904341:;
  /* 12904341 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904345 jge 0x12904365 */
  if ((C.sf==C.of)) goto L_12904365;
  /* 12904347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290434a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290434d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12904355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290435b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12904363 jmp 0x12904338 */
  goto L_12904338;
L_12904365:;
  /* 12904365 mov edx, dword ptr [0x1292e4d4] */
  EDX = (r32((uint32_t)(0x1292e4d4)));
  /* 1290436b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290436e jmp 0x12904378 */
  goto L_12904378;
L_12904370:;
  /* 12904370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904373 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12904375 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12904378:;
  /* 12904378 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290437c je 0x12904421 */
  if (C.zf) goto L_12904421;
  /* 12904382 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904385 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12904388 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290438d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290438f jl 0x129043f7 */
  if ((C.sf!=C.of)) goto L_129043f7;
  /* 12904391 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904394 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12904397 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1290439d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129043a0 jge 0x129043f7 */
  if ((C.sf==C.of)) goto L_129043f7;
  /* 129043a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129043a5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129043a8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129043ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129043b1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 129043b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129043b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129043bb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129043be and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129043c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129043c7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 129043cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129043ce mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129043d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129043d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129043d9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 129043dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129043e0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129043e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129043e6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 129043e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129043ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129043f1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 129043f5 jmp 0x1290441c */
  goto L_1290441c;
L_129043f7:;
  /* 129043f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129043fa push edx */
  push32((uint32_t)(EDX));
  /* 129043fb push 0x129298e0 */
  push32((uint32_t)(0x129298e0u));
  /* 12904400 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904404 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904406 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904408 call 0x12901c00 */
  push32(0x1290440du); f_12901c00();
  /* 1290440d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904410 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904413 jne 0x12904416 */
  if (!C.zf) goto L_12904416;
  /* 12904415 int3  */
  x86_unimpl("int3 @ 0x12904415");
L_12904416:;
  /* 12904416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290441a jne 0x129043f7 */
  if (!C.zf) goto L_129043f7;
L_1290441c:;
  /* 1290441c jmp 0x12904370 */
  goto L_12904370;
L_12904421:;
  /* 12904421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904424 mov edx, dword ptr [0x1292e4dc] */
  EDX = (r32((uint32_t)(0x1292e4dc)));
  /* 1290442a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1290442d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904430 mov ecx, dword ptr [0x1292e4d0] */
  ECX = (r32((uint32_t)(0x1292e4d0)));
  /* 12904436 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12904439 push 9 */
  push32((uint32_t)(0x9u));
  /* 1290443b call 0x129065e0 */
  push32(0x12904440u); f_129065e0();
  /* 12904440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12904443:;
  /* 12904443 pop edi */
  EDI = (pop32());
  /* 12904444 pop esi */
  ESI = (pop32());
  /* 12904445 pop ebx */
  EBX = (pop32());
  /* 12904446 mov esp, ebp */
  ESP = (EBP);
  /* 12904448 pop ebp */
  EBP = (pop32());
  /* 12904449 ret  */
  ESPCHK(0x129042e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004450 @ 0x12904450 (291 bytes, 95 insns) */
void f_12904450(void) {
  FTRACE(0x12904450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904450 push ebp */
  push32((uint32_t)(EBP));
  /* 12904451 mov ebp, esp */
  EBP = (ESP);
  /* 12904453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904456 push ebx */
  push32((uint32_t)(EBX));
  /* 12904457 push esi */
  push32((uint32_t)(ESI));
  /* 12904458 push edi */
  push32((uint32_t)(EDI));
  /* 12904459 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12904460 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904464 je 0x12904472 */
  if (C.zf) goto L_12904472;
  /* 12904466 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290446a je 0x12904472 */
  if (C.zf) goto L_12904472;
  /* 1290446c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904470 jne 0x129044a0 */
  if (!C.zf) goto L_129044a0;
L_12904472:;
  /* 12904472 push 0x1292992c */
  push32((uint32_t)(0x1292992cu));
  /* 12904477 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 1290447c push 0 */
  push32((uint32_t)(0x0u));
  /* 1290447e push 0 */
  push32((uint32_t)(0x0u));
  /* 12904480 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904482 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904484 call 0x12901c00 */
  push32(0x12904489u); f_12901c00();
  /* 12904489 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290448c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290448f jne 0x12904492 */
  if (!C.zf) goto L_12904492;
  /* 12904491 int3  */
  x86_unimpl("int3 @ 0x12904491");
L_12904492:;
  /* 12904492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904496 jne 0x12904472 */
  if (!C.zf) goto L_12904472;
  /* 12904498 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290449b jmp 0x1290456c */
  goto L_1290456c;
L_129044a0:;
  /* 129044a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129044a7 jmp 0x129044b2 */
  goto L_129044b2;
L_129044a9:;
  /* 129044a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129044af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129044b2:;
  /* 129044b2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129044b6 jge 0x1290453c */
  if ((C.sf==C.of)) goto L_1290453c;
  /* 129044bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129044c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129044c8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 129044cc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129044d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129044d6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 129044da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129044e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044e3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 129044e6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 129044ea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129044ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129044f4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 129044f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129044fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129044fe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904503 jne 0x12904512 */
  if (!C.zf) goto L_12904512;
  /* 12904505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290450b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904510 je 0x12904537 */
  if (C.zf) goto L_12904537;
L_12904512:;
  /* 12904512 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904516 je 0x12904537 */
  if (C.zf) goto L_12904537;
  /* 12904518 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290451c jne 0x12904530 */
  if (!C.zf) goto L_12904530;
  /* 1290451e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904522 jne 0x12904537 */
  if (!C.zf) goto L_12904537;
  /* 12904524 mov eax, dword ptr [0x1292ca84] */
  EAX = (r32((uint32_t)(0x1292ca84)));
  /* 12904529 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1290452c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290452e je 0x12904537 */
  if (C.zf) goto L_12904537;
L_12904530:;
  /* 12904530 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12904537:;
  /* 12904537 jmp 0x129044a9 */
  goto L_129044a9;
L_1290453c:;
  /* 1290453c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290453f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904542 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12904545 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290454b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1290454e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904551 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904554 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12904557 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290455a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290455d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12904560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904563 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12904569 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1290456c:;
  /* 1290456c pop edi */
  EDI = (pop32());
  /* 1290456d pop esi */
  ESI = (pop32());
  /* 1290456e pop ebx */
  EBX = (pop32());
  /* 1290456f mov esp, ebp */
  ESP = (EBP);
  /* 12904571 pop ebp */
  EBP = (pop32());
  /* 12904572 ret  */
  ESPCHK(0x12904450u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x12904580 (697 bytes, 253 insns) */
void f_12904580(void) {
  FTRACE(0x12904580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904580 push ebp */
  push32((uint32_t)(EBP));
  /* 12904581 mov ebp, esp */
  EBP = (ESP);
  /* 12904583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904586 push ebx */
  push32((uint32_t)(EBX));
  /* 12904587 push esi */
  push32((uint32_t)(ESI));
  /* 12904588 push edi */
  push32((uint32_t)(EDI));
  /* 12904589 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12904590 push 9 */
  push32((uint32_t)(0x9u));
  /* 12904592 call 0x12906540 */
  push32(0x12904597u); f_12906540();
  /* 12904597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290459a:;
  /* 1290459a push 0x12929a24 */
  push32((uint32_t)(0x12929a24u));
  /* 1290459f push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 129045a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129045a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129045a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129045aa push 0 */
  push32((uint32_t)(0x0u));
  /* 129045ac call 0x12901c00 */
  push32(0x129045b1u); f_12901c00();
  /* 129045b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129045b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129045b7 jne 0x129045ba */
  if (!C.zf) goto L_129045ba;
  /* 129045b9 int3  */
  x86_unimpl("int3 @ 0x129045b9");
L_129045ba:;
  /* 129045ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129045bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129045be jne 0x1290459a */
  if (!C.zf) goto L_1290459a;
  /* 129045c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129045c4 je 0x129045ce */
  if (C.zf) goto L_129045ce;
  /* 129045c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129045c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129045cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129045ce:;
  /* 129045ce mov eax, dword ptr [0x1292e4d4] */
  EAX = (r32((uint32_t)(0x1292e4d4)));
  /* 129045d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129045d6 jmp 0x129045e0 */
  goto L_129045e0;
L_129045d8:;
  /* 129045d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129045db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129045dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129045e0:;
  /* 129045e0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129045e4 je 0x12904802 */
  if (C.zf) goto L_12904802;
  /* 129045ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129045ed cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129045f0 je 0x12904802 */
  if (C.zf) goto L_12904802;
  /* 129045f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129045f9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129045fc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12904602 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904605 je 0x12904634 */
  if (C.zf) goto L_12904634;
  /* 12904607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290460a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1290460d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12904613 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12904615 je 0x12904634 */
  if (C.zf) goto L_12904634;
  /* 12904617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290461a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1290461d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12904622 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904625 jne 0x12904639 */
  if (!C.zf) goto L_12904639;
  /* 12904627 mov ecx, dword ptr [0x1292ca84] */
  ECX = (r32((uint32_t)(0x1292ca84)));
  /* 1290462d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12904630 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12904632 jne 0x12904639 */
  if (!C.zf) goto L_12904639;
L_12904634:;
  /* 12904634 jmp 0x129047fd */
  goto L_129047fd;
L_12904639:;
  /* 12904639 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290463c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904640 je 0x129046b2 */
  if (C.zf) goto L_129046b2;
  /* 12904642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904644 push 1 */
  push32((uint32_t)(0x1u));
  /* 12904646 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904649 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290464c push ecx */
  push32((uint32_t)(ECX));
  /* 1290464d call 0x129040f0 */
  push32(0x12904652u); f_129040f0();
  /* 12904652 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904657 jne 0x12904683 */
  if (!C.zf) goto L_12904683;
L_12904659:;
  /* 12904659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290465c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1290465f push eax */
  push32((uint32_t)(EAX));
  /* 12904660 push 0x12929a10 */
  push32((uint32_t)(0x12929a10u));
  /* 12904665 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904667 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290466b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290466d call 0x12901c00 */
  push32(0x12904672u); f_12901c00();
  /* 12904672 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904675 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904678 jne 0x1290467b */
  if (!C.zf) goto L_1290467b;
  /* 1290467a int3  */
  x86_unimpl("int3 @ 0x1290467a");
L_1290467b:;
  /* 1290467b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290467d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290467f jne 0x12904659 */
  if (!C.zf) goto L_12904659;
  /* 12904681 jmp 0x129046b2 */
  goto L_129046b2;
L_12904683:;
  /* 12904683 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904686 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12904689 push eax */
  push32((uint32_t)(EAX));
  /* 1290468a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290468d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12904690 push edx */
  push32((uint32_t)(EDX));
  /* 12904691 push 0x12929a04 */
  push32((uint32_t)(0x12929a04u));
  /* 12904696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904698 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290469a push 0 */
  push32((uint32_t)(0x0u));
  /* 1290469c push 0 */
  push32((uint32_t)(0x0u));
  /* 1290469e call 0x12901c00 */
  push32(0x129046a3u); f_12901c00();
  /* 129046a3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129046a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129046a9 jne 0x129046ac */
  if (!C.zf) goto L_129046ac;
  /* 129046ab int3  */
  x86_unimpl("int3 @ 0x129046ab");
L_129046ac:;
  /* 129046ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129046ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129046b0 jne 0x12904683 */
  if (!C.zf) goto L_12904683;
L_129046b2:;
  /* 129046b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129046b5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129046b8 push edx */
  push32((uint32_t)(EDX));
  /* 129046b9 push 0x129299fc */
  push32((uint32_t)(0x129299fcu));
  /* 129046be push 0 */
  push32((uint32_t)(0x0u));
  /* 129046c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129046c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129046c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129046c6 call 0x12901c00 */
  push32(0x129046cbu); f_12901c00();
  /* 129046cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129046ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129046d1 jne 0x129046d4 */
  if (!C.zf) goto L_129046d4;
  /* 129046d3 int3  */
  x86_unimpl("int3 @ 0x129046d3");
L_129046d4:;
  /* 129046d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129046d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129046d8 jne 0x129046b2 */
  if (!C.zf) goto L_129046b2;
  /* 129046da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129046dd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129046e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129046e6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129046e9 jne 0x1290475c */
  if (!C.zf) goto L_1290475c;
L_129046eb:;
  /* 129046eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129046ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129046f1 push ecx */
  push32((uint32_t)(ECX));
  /* 129046f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129046f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129046f8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129046fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12904700 push eax */
  push32((uint32_t)(EAX));
  /* 12904701 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904704 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904707 push ecx */
  push32((uint32_t)(ECX));
  /* 12904708 push 0x129299c8 */
  push32((uint32_t)(0x129299c8u));
  /* 1290470d push 0 */
  push32((uint32_t)(0x0u));
  /* 1290470f push 0 */
  push32((uint32_t)(0x0u));
  /* 12904711 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904713 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904715 call 0x12901c00 */
  push32(0x1290471au); f_12901c00();
  /* 1290471a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290471d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904720 jne 0x12904723 */
  if (!C.zf) goto L_12904723;
  /* 12904722 int3  */
  x86_unimpl("int3 @ 0x12904722");
L_12904723:;
  /* 12904723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12904725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12904727 jne 0x129046eb */
  if (!C.zf) goto L_129046eb;
  /* 12904729 cmp dword ptr [0x1292fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904730 je 0x1290474b */
  if (C.zf) goto L_1290474b;
  /* 12904732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904735 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12904738 push ecx */
  push32((uint32_t)(ECX));
  /* 12904739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290473c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290473f push edx */
  push32((uint32_t)(EDX));
  /* 12904740 call dword ptr [0x1292fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292fe38))), 0x12904746u);
  /* 12904746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904749 jmp 0x12904757 */
  goto L_12904757;
L_1290474b:;
  /* 1290474b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290474e push eax */
  push32((uint32_t)(EAX));
  /* 1290474f call 0x12904840 */
  push32(0x12904754u); f_12904840();
  /* 12904754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12904757:;
  /* 12904757 jmp 0x129047fd */
  goto L_129047fd;
L_1290475c:;
  /* 1290475c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290475f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904763 jne 0x129047a2 */
  if (!C.zf) goto L_129047a2;
L_12904765:;
  /* 12904765 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904768 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1290476b push eax */
  push32((uint32_t)(EAX));
  /* 1290476c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290476f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904772 push ecx */
  push32((uint32_t)(ECX));
  /* 12904773 push 0x129299a0 */
  push32((uint32_t)(0x129299a0u));
  /* 12904778 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290477a push 0 */
  push32((uint32_t)(0x0u));
  /* 1290477c push 0 */
  push32((uint32_t)(0x0u));
  /* 1290477e push 0 */
  push32((uint32_t)(0x0u));
  /* 12904780 call 0x12901c00 */
  push32(0x12904785u); f_12901c00();
  /* 12904785 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904788 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290478b jne 0x1290478e */
  if (!C.zf) goto L_1290478e;
  /* 1290478d int3  */
  x86_unimpl("int3 @ 0x1290478d");
L_1290478e:;
  /* 1290478e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12904790 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12904792 jne 0x12904765 */
  if (!C.zf) goto L_12904765;
  /* 12904794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904797 push eax */
  push32((uint32_t)(EAX));
  /* 12904798 call 0x12904840 */
  push32(0x1290479du); f_12904840();
  /* 1290479d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129047a0 jmp 0x129047fd */
  goto L_129047fd;
L_129047a2:;
  /* 129047a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129047a5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 129047a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 129047ae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129047b1 jne 0x129047fd */
  if (!C.zf) goto L_129047fd;
L_129047b3:;
  /* 129047b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129047b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129047b9 push ecx */
  push32((uint32_t)(ECX));
  /* 129047ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129047bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129047c0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129047c3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129047c8 push eax */
  push32((uint32_t)(EAX));
  /* 129047c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129047cc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129047cf push ecx */
  push32((uint32_t)(ECX));
  /* 129047d0 push 0x1292996c */
  push32((uint32_t)(0x1292996cu));
  /* 129047d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129047d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129047d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129047db push 0 */
  push32((uint32_t)(0x0u));
  /* 129047dd call 0x12901c00 */
  push32(0x129047e2u); f_12901c00();
  /* 129047e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129047e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129047e8 jne 0x129047eb */
  if (!C.zf) goto L_129047eb;
  /* 129047ea int3  */
  x86_unimpl("int3 @ 0x129047ea");
L_129047eb:;
  /* 129047eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129047ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129047ef jne 0x129047b3 */
  if (!C.zf) goto L_129047b3;
  /* 129047f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129047f4 push eax */
  push32((uint32_t)(EAX));
  /* 129047f5 call 0x12904840 */
  push32(0x129047fau); f_12904840();
  /* 129047fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129047fd:;
  /* 129047fd jmp 0x129045d8 */
  goto L_129045d8;
L_12904802:;
  /* 12904802 push 9 */
  push32((uint32_t)(0x9u));
  /* 12904804 call 0x129065e0 */
  push32(0x12904809u); f_129065e0();
  /* 12904809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290480c:;
  /* 1290480c push 0x12929954 */
  push32((uint32_t)(0x12929954u));
  /* 12904811 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 12904816 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290481a push 0 */
  push32((uint32_t)(0x0u));
  /* 1290481c push 0 */
  push32((uint32_t)(0x0u));
  /* 1290481e call 0x12901c00 */
  push32(0x12904823u); f_12901c00();
  /* 12904823 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904826 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904829 jne 0x1290482c */
  if (!C.zf) goto L_1290482c;
  /* 1290482b int3  */
  x86_unimpl("int3 @ 0x1290482b");
L_1290482c:;
  /* 1290482c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290482e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12904830 jne 0x1290480c */
  if (!C.zf) goto L_1290480c;
  /* 12904832 pop edi */
  EDI = (pop32());
  /* 12904833 pop esi */
  ESI = (pop32());
  /* 12904834 pop ebx */
  EBX = (pop32());
  /* 12904835 mov esp, ebp */
  ESP = (EBP);
  /* 12904837 pop ebp */
  EBP = (pop32());
  /* 12904838 ret  */
  ESPCHK(0x12904580u, _esp0);
  ESP += 4; return;
}

/* FUN_10004840 @ 0x12904840 (276 bytes, 89 insns) */
void f_12904840(void) {
  FTRACE(0x12904840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904840 push ebp */
  push32((uint32_t)(EBP));
  /* 12904841 mov ebp, esp */
  EBP = (ESP);
  /* 12904843 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904846 push ebx */
  push32((uint32_t)(EBX));
  /* 12904847 push esi */
  push32((uint32_t)(ESI));
  /* 12904848 push edi */
  push32((uint32_t)(EDI));
  /* 12904849 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12904850 jmp 0x1290485b */
  goto L_1290485b;
L_12904852:;
  /* 12904852 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12904855 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904858 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1290485b:;
  /* 1290485b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290485e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904862 jge 0x1290486f */
  if ((C.sf==C.of)) goto L_1290486f;
  /* 12904864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904867 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1290486a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1290486d jmp 0x12904876 */
  goto L_12904876;
L_1290486f:;
  /* 1290486f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12904876:;
  /* 12904876 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12904879 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290487c jge 0x1290491c */
  if ((C.sf==C.of)) goto L_1290491c;
  /* 12904882 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904885 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904888 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1290488b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1290488e cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904895 jle 0x129048b3 */
  if ((C.zf||C.sf!=C.of)) goto L_129048b3;
  /* 12904897 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1290489c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1290489f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129048a5 push ecx */
  push32((uint32_t)(ECX));
  /* 129048a6 call 0x12908b50 */
  push32(0x129048abu); f_12908b50();
  /* 129048ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129048ae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 129048b1 jmp 0x129048d0 */
  goto L_129048d0;
L_129048b3:;
  /* 129048b3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129048b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129048bc mov eax, dword ptr [0x1292cc98] */
  EAX = (r32((uint32_t)(0x1292cc98)));
  /* 129048c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129048c3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 129048c7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 129048cd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_129048d0:;
  /* 129048d0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129048d4 je 0x129048e4 */
  if (C.zf) goto L_129048e4;
  /* 129048d6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129048d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129048df mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 129048e2 jmp 0x129048eb */
  goto L_129048eb;
L_129048e4:;
  /* 129048e4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_129048eb:;
  /* 129048eb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129048ee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 129048f1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 129048f5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129048f8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129048fe push edx */
  push32((uint32_t)(EDX));
  /* 129048ff push 0x12929a48 */
  push32((uint32_t)(0x12929a48u));
  /* 12904904 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12904907 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290490a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1290490e push ecx */
  push32((uint32_t)(ECX));
  /* 1290490f call 0x12908a50 */
  push32(0x12904914u); f_12908a50();
  /* 12904914 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904917 jmp 0x12904852 */
  goto L_12904852;
L_1290491c:;
  /* 1290491c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1290491f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12904924:;
  /* 12904924 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12904927 push eax */
  push32((uint32_t)(EAX));
  /* 12904928 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1290492b push ecx */
  push32((uint32_t)(ECX));
  /* 1290492c push 0x12929a38 */
  push32((uint32_t)(0x12929a38u));
  /* 12904931 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904933 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904935 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904937 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904939 call 0x12901c00 */
  push32(0x1290493eu); f_12901c00();
  /* 1290493e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904941 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904944 jne 0x12904947 */
  if (!C.zf) goto L_12904947;
  /* 12904946 int3  */
  x86_unimpl("int3 @ 0x12904946");
L_12904947:;
  /* 12904947 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12904949 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290494b jne 0x12904924 */
  if (!C.zf) goto L_12904924;
  /* 1290494d pop edi */
  EDI = (pop32());
  /* 1290494e pop esi */
  ESI = (pop32());
  /* 1290494f pop ebx */
  EBX = (pop32());
  /* 12904950 mov esp, ebp */
  ESP = (EBP);
  /* 12904952 pop ebp */
  EBP = (pop32());
  /* 12904953 ret  */
  ESPCHK(0x12904840u, _esp0);
  ESP += 4; return;
}

/* FUN_10004960 @ 0x12904960 (116 bytes, 46 insns) */
void f_12904960(void) {
  FTRACE(0x12904960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904960 push ebp */
  push32((uint32_t)(EBP));
  /* 12904961 mov ebp, esp */
  EBP = (ESP);
  /* 12904963 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904966 push ebx */
  push32((uint32_t)(EBX));
  /* 12904967 push esi */
  push32((uint32_t)(ESI));
  /* 12904968 push edi */
  push32((uint32_t)(EDI));
  /* 12904969 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1290496c push eax */
  push32((uint32_t)(EAX));
  /* 1290496d call 0x129042e0 */
  push32(0x12904972u); f_129042e0();
  /* 12904972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904975 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904979 jne 0x12904994 */
  if (!C.zf) goto L_12904994;
  /* 1290497b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290497f jne 0x12904994 */
  if (!C.zf) goto L_12904994;
  /* 12904981 mov ecx, dword ptr [0x1292ca84] */
  ECX = (r32((uint32_t)(0x1292ca84)));
  /* 12904987 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1290498a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290498c je 0x129049cb */
  if (C.zf) goto L_129049cb;
  /* 1290498e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904992 je 0x129049cb */
  if (C.zf) goto L_129049cb;
L_12904994:;
  /* 12904994 push 0x12929a50 */
  push32((uint32_t)(0x12929a50u));
  /* 12904999 push 0x1292941c */
  push32((uint32_t)(0x1292941cu));
  /* 1290499e push 0 */
  push32((uint32_t)(0x0u));
  /* 129049a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129049a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129049a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129049a6 call 0x12901c00 */
  push32(0x129049abu); f_12901c00();
  /* 129049ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129049ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129049b1 jne 0x129049b4 */
  if (!C.zf) goto L_129049b4;
  /* 129049b3 int3  */
  x86_unimpl("int3 @ 0x129049b3");
L_129049b4:;
  /* 129049b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129049b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129049b8 jne 0x12904994 */
  if (!C.zf) goto L_12904994;
  /* 129049ba push 0 */
  push32((uint32_t)(0x0u));
  /* 129049bc call 0x12904580 */
  push32(0x129049c1u); f_12904580();
  /* 129049c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129049c4 mov eax, 1 */
  EAX = (0x1u);
  /* 129049c9 jmp 0x129049cd */
  goto L_129049cd;
L_129049cb:;
  /* 129049cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129049cd:;
  /* 129049cd pop edi */
  EDI = (pop32());
  /* 129049ce pop esi */
  ESI = (pop32());
  /* 129049cf pop ebx */
  EBX = (pop32());
  /* 129049d0 mov esp, ebp */
  ESP = (EBP);
  /* 129049d2 pop ebp */
  EBP = (pop32());
  /* 129049d3 ret  */
  ESPCHK(0x12904960u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x129049e0 (197 bytes, 79 insns) */
void f_129049e0(void) {
  FTRACE(0x129049e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129049e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129049e1 mov ebp, esp */
  EBP = (ESP);
  /* 129049e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129049e4 push ebx */
  push32((uint32_t)(EBX));
  /* 129049e5 push esi */
  push32((uint32_t)(ESI));
  /* 129049e6 push edi */
  push32((uint32_t)(EDI));
  /* 129049e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129049eb jne 0x129049f2 */
  if (!C.zf) goto L_129049f2;
  /* 129049ed jmp 0x12904a9e */
  goto L_12904a9e;
L_129049f2:;
  /* 129049f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129049f9 jmp 0x12904a04 */
  goto L_12904a04;
L_129049fb:;
  /* 129049fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129049fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904a01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12904a04:;
  /* 12904a04 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904a08 jge 0x12904a4e */
  if ((C.sf==C.of)) goto L_12904a4e;
L_12904a0a:;
  /* 12904a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904a0d mov edx, dword ptr [ecx*4 + 0x1292ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292ca94)));
  /* 12904a14 push edx */
  push32((uint32_t)(EDX));
  /* 12904a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904a18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904a1b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12904a1f push edx */
  push32((uint32_t)(EDX));
  /* 12904a20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904a23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904a26 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12904a2a push edx */
  push32((uint32_t)(EDX));
  /* 12904a2b push 0x12929aac */
  push32((uint32_t)(0x12929aacu));
  /* 12904a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a38 call 0x12901c00 */
  push32(0x12904a3du); f_12901c00();
  /* 12904a3d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904a40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904a43 jne 0x12904a46 */
  if (!C.zf) goto L_12904a46;
  /* 12904a45 int3  */
  x86_unimpl("int3 @ 0x12904a45");
L_12904a46:;
  /* 12904a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904a4a jne 0x12904a0a */
  if (!C.zf) goto L_12904a0a;
  /* 12904a4c jmp 0x129049fb */
  goto L_129049fb;
L_12904a4e:;
  /* 12904a4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904a51 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12904a54 push edx */
  push32((uint32_t)(EDX));
  /* 12904a55 push 0x12929a88 */
  push32((uint32_t)(0x12929a88u));
  /* 12904a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a62 call 0x12901c00 */
  push32(0x12904a67u); f_12901c00();
  /* 12904a67 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904a6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904a6d jne 0x12904a70 */
  if (!C.zf) goto L_12904a70;
  /* 12904a6f int3  */
  x86_unimpl("int3 @ 0x12904a6f");
L_12904a70:;
  /* 12904a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904a74 jne 0x12904a4e */
  if (!C.zf) goto L_12904a4e;
L_12904a76:;
  /* 12904a76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904a79 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12904a7c push edx */
  push32((uint32_t)(EDX));
  /* 12904a7d push 0x12929a68 */
  push32((uint32_t)(0x12929a68u));
  /* 12904a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12904a8a call 0x12901c00 */
  push32(0x12904a8fu); f_12901c00();
  /* 12904a8f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904a92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904a95 jne 0x12904a98 */
  if (!C.zf) goto L_12904a98;
  /* 12904a97 int3  */
  x86_unimpl("int3 @ 0x12904a97");
L_12904a98:;
  /* 12904a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904a9c jne 0x12904a76 */
  if (!C.zf) goto L_12904a76;
L_12904a9e:;
  /* 12904a9e pop edi */
  EDI = (pop32());
  /* 12904a9f pop esi */
  ESI = (pop32());
  /* 12904aa0 pop ebx */
  EBX = (pop32());
  /* 12904aa1 mov esp, ebp */
  ESP = (EBP);
  /* 12904aa3 pop ebp */
  EBP = (pop32());
  /* 12904aa4 ret  */
  ESPCHK(0x129049e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab0 @ 0x12904ab0 (329 bytes, 102 insns) */
void f_12904ab0(void) {
  FTRACE(0x12904ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12904ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12904ab3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904ab6 cmp dword ptr [0x1292ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904abd jne 0x12904ac4 */
  if (!C.zf) goto L_12904ac4;
  /* 12904abf call 0x129093f0 */
  push32(0x12904ac4u); f_129093f0();
L_12904ac4:;
  /* 12904ac4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12904acb mov eax, dword ptr [0x1292e470] */
  EAX = (r32((uint32_t)(0x1292e470)));
  /* 12904ad0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12904ad3:;
  /* 12904ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ad6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12904ad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12904adb je 0x12904b09 */
  if (C.zf) goto L_12904b09;
  /* 12904add mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ae0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904ae3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904ae6 je 0x12904af1 */
  if (C.zf) goto L_12904af1;
  /* 12904ae8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904aeb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904aee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12904af1:;
  /* 12904af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904af4 push eax */
  push32((uint32_t)(EAX));
  /* 12904af5 call 0x12905970 */
  push32(0x12904afau); f_12905970();
  /* 12904afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904afd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904b00 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12904b04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12904b07 jmp 0x12904ad3 */
  goto L_12904ad3;
L_12904b09:;
  /* 12904b09 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12904b0b push 0x12929acc */
  push32((uint32_t)(0x12929accu));
  /* 12904b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12904b12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904b15 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12904b1c push ecx */
  push32((uint32_t)(ECX));
  /* 12904b1d call 0x12902b40 */
  push32(0x12904b22u); f_12902b40();
  /* 12904b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904b25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12904b28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904b2b mov dword ptr [0x1292e4a4], edx */
  w32((uint32_t)(0x1292e4a4), (EDX));
  /* 12904b31 cmp dword ptr [0x1292e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904b38 jne 0x12904b44 */
  if (!C.zf) goto L_12904b44;
  /* 12904b3a push 9 */
  push32((uint32_t)(0x9u));
  /* 12904b3c call 0x12901ab0 */
  push32(0x12904b41u); f_12901ab0();
  /* 12904b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12904b44:;
  /* 12904b44 mov eax, dword ptr [0x1292e470] */
  EAX = (r32((uint32_t)(0x1292e470)));
  /* 12904b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12904b4c jmp 0x12904b57 */
  goto L_12904b57;
L_12904b4e:;
  /* 12904b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904b51 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904b54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12904b57:;
  /* 12904b57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904b5a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12904b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904b5f je 0x12904bc7 */
  if (C.zf) goto L_12904bc7;
  /* 12904b61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904b64 push ecx */
  push32((uint32_t)(ECX));
  /* 12904b65 call 0x12905970 */
  push32(0x12904b6au); f_12905970();
  /* 12904b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904b6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904b70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12904b73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904b76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12904b79 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904b7c je 0x12904bc5 */
  if (C.zf) goto L_12904bc5;
  /* 12904b7e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12904b80 push 0x12929acc */
  push32((uint32_t)(0x12929accu));
  /* 12904b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12904b87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904b8a push ecx */
  push32((uint32_t)(ECX));
  /* 12904b8b call 0x12902b40 */
  push32(0x12904b90u); f_12902b40();
  /* 12904b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904b93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904b96 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12904b98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904b9b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904b9e jne 0x12904baa */
  if (!C.zf) goto L_12904baa;
  /* 12904ba0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12904ba2 call 0x12901ab0 */
  push32(0x12904ba7u); f_12901ab0();
  /* 12904ba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12904baa:;
  /* 12904baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904bad push ecx */
  push32((uint32_t)(ECX));
  /* 12904bae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904bb1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12904bb3 push eax */
  push32((uint32_t)(EAX));
  /* 12904bb4 call 0x12905af0 */
  push32(0x12904bb9u); f_12905af0();
  /* 12904bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904bbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904bbf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904bc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12904bc5:;
  /* 12904bc5 jmp 0x12904b4e */
  goto L_12904b4e;
L_12904bc7:;
  /* 12904bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12904bc9 mov edx, dword ptr [0x1292e470] */
  EDX = (r32((uint32_t)(0x1292e470)));
  /* 12904bcf push edx */
  push32((uint32_t)(EDX));
  /* 12904bd0 call 0x129035d0 */
  push32(0x12904bd5u); f_129035d0();
  /* 12904bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904bd8 mov dword ptr [0x1292e470], 0 */
  w32((uint32_t)(0x1292e470), (0x0u));
  /* 12904be2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904be5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12904beb mov dword ptr [0x1292ffa0], 1 */
  w32((uint32_t)(0x1292ffa0), (0x1u));
  /* 12904bf5 mov esp, ebp */
  ESP = (EBP);
  /* 12904bf7 pop ebp */
  EBP = (pop32());
  /* 12904bf8 ret  */
  ESPCHK(0x12904ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x12904c00 (216 bytes, 69 insns) */
void f_12904c00(void) {
  FTRACE(0x12904c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12904c01 mov ebp, esp */
  EBP = (ESP);
  /* 12904c03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904c06 cmp dword ptr [0x1292ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904c0d jne 0x12904c14 */
  if (!C.zf) goto L_12904c14;
  /* 12904c0f call 0x129093f0 */
  push32(0x12904c14u); f_129093f0();
L_12904c14:;
  /* 12904c14 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12904c19 push 0x1292e4e0 */
  push32((uint32_t)(0x1292e4e0u));
  /* 12904c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12904c20 call dword ptr [0x1293027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293027c))), 0x12904c26u);
  /* 12904c26 mov dword ptr [0x1292e4b4], 0x1292e4e0 */
  w32((uint32_t)(0x1292e4b4), (0x1292e4e0u));
  /* 12904c30 mov eax, dword ptr [0x1292ffcc] */
  EAX = (r32((uint32_t)(0x1292ffcc)));
  /* 12904c35 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904c38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12904c3a jne 0x12904c47 */
  if (!C.zf) goto L_12904c47;
  /* 12904c3c mov edx, dword ptr [0x1292e4b4] */
  EDX = (r32((uint32_t)(0x1292e4b4)));
  /* 12904c42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12904c45 jmp 0x12904c4f */
  goto L_12904c4f;
L_12904c47:;
  /* 12904c47 mov eax, dword ptr [0x1292ffcc] */
  EAX = (r32((uint32_t)(0x1292ffcc)));
  /* 12904c4c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12904c4f:;
  /* 12904c4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12904c52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12904c55 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12904c58 push edx */
  push32((uint32_t)(EDX));
  /* 12904c59 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12904c5c push eax */
  push32((uint32_t)(EAX));
  /* 12904c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12904c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12904c61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904c64 push ecx */
  push32((uint32_t)(ECX));
  /* 12904c65 call 0x12904ce0 */
  push32(0x12904c6au); f_12904ce0();
  /* 12904c6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904c6d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12904c72 push 0x12929ad8 */
  push32((uint32_t)(0x12929ad8u));
  /* 12904c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12904c79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904c7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904c7f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12904c82 push ecx */
  push32((uint32_t)(ECX));
  /* 12904c83 call 0x12902b40 */
  push32(0x12904c88u); f_12902b40();
  /* 12904c88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904c8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12904c8e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904c92 jne 0x12904c9e */
  if (!C.zf) goto L_12904c9e;
  /* 12904c94 push 8 */
  push32((uint32_t)(0x8u));
  /* 12904c96 call 0x12901ab0 */
  push32(0x12904c9bu); f_12901ab0();
  /* 12904c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12904c9e:;
  /* 12904c9e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12904ca1 push edx */
  push32((uint32_t)(EDX));
  /* 12904ca2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12904ca5 push eax */
  push32((uint32_t)(EAX));
  /* 12904ca6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904ca9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904cac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12904caf push eax */
  push32((uint32_t)(EAX));
  /* 12904cb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12904cb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904cb7 push edx */
  push32((uint32_t)(EDX));
  /* 12904cb8 call 0x12904ce0 */
  push32(0x12904cbdu); f_12904ce0();
  /* 12904cbd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12904cc0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904cc3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904cc6 mov dword ptr [0x1292e498], eax */
  w32((uint32_t)(0x1292e498), (EAX));
  /* 12904ccb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12904cce mov dword ptr [0x1292e49c], ecx */
  w32((uint32_t)(0x1292e49c), (ECX));
  /* 12904cd4 mov esp, ebp */
  ESP = (EBP);
  /* 12904cd6 pop ebp */
  EBP = (pop32());
  /* 12904cd7 ret  */
  ESPCHK(0x12904c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce0 @ 0x12904ce0 (1060 bytes, 360 insns) */
void f_12904ce0(void) {
  FTRACE(0x12904ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12904ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12904ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12904ce3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904ce6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904ce9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12904cef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12904cf2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12904cf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12904cfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12904cfe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904d02 je 0x12904d15 */
  if (C.zf) goto L_12904d15;
  /* 12904d04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904d07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904d0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12904d0c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904d0f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904d12 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12904d15:;
  /* 12904d15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904d18 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904d1b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904d1e jne 0x12904ded */
  if (!C.zf) goto L_12904ded;
L_12904d24:;
  /* 12904d24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904d27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904d2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12904d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904d30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904d33 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904d36 je 0x12904db2 */
  if (C.zf) goto L_12904db2;
  /* 12904d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904d3b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12904d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904d40 je 0x12904db2 */
  if (C.zf) goto L_12904db2;
  /* 12904d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904d45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12904d47 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12904d49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12904d4b mov al, byte ptr [edx + 0x1292fd01] */
  AL = (r8((uint32_t)(EDX + 0x1292fd01)));
  /* 12904d51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12904d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904d56 je 0x12904d87 */
  if (C.zf) goto L_12904d87;
  /* 12904d58 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904d5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12904d5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904d60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904d63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12904d65 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904d69 je 0x12904d87 */
  if (C.zf) goto L_12904d87;
  /* 12904d6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904d6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904d71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12904d73 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12904d75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904d78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904d7b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12904d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904d81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904d84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12904d87:;
  /* 12904d87 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904d8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12904d8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904d8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904d92 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12904d94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904d98 je 0x12904dad */
  if (C.zf) goto L_12904dad;
  /* 12904d9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904d9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904da0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12904da2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12904da4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904da7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904daa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12904dad:;
  /* 12904dad jmp 0x12904d24 */
  goto L_12904d24;
L_12904db2:;
  /* 12904db2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904db5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12904db7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904dba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904dbd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12904dbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904dc3 je 0x12904dd4 */
  if (C.zf) goto L_12904dd4;
  /* 12904dc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904dc8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12904dcb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904dce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904dd1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12904dd4:;
  /* 12904dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904dd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904dda cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904ddd jne 0x12904de8 */
  if (!C.zf) goto L_12904de8;
  /* 12904ddf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904de2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904de5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12904de8:;
  /* 12904de8 jmp 0x12904ebc */
  goto L_12904ebc;
L_12904ded:;
  /* 12904ded mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904df0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12904df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904df5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904df8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12904dfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904dfe je 0x12904e13 */
  if (C.zf) goto L_12904e13;
  /* 12904e00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904e03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904e06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12904e08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12904e0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904e0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904e10 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12904e13:;
  /* 12904e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12904e18 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12904e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904e1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904e21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12904e24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904e27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12904e2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12904e2f mov dl, byte ptr [ecx + 0x1292fd01] */
  DL = (r8((uint32_t)(ECX + 0x1292fd01)));
  /* 12904e35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12904e38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12904e3a je 0x12904e6b */
  if (C.zf) goto L_12904e6b;
  /* 12904e3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904e3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12904e41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904e44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904e47 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12904e49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904e4d je 0x12904e62 */
  if (C.zf) goto L_12904e62;
  /* 12904e4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904e52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904e55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12904e57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12904e59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904e5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904e5f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12904e62:;
  /* 12904e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904e68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12904e6b:;
  /* 12904e6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904e6e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12904e74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904e77 je 0x12904e97 */
  if (C.zf) goto L_12904e97;
  /* 12904e79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904e7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12904e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904e83 je 0x12904e97 */
  if (C.zf) goto L_12904e97;
  /* 12904e85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904e88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12904e8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904e91 jne 0x12904ded */
  if (!C.zf) goto L_12904ded;
L_12904e97:;
  /* 12904e97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12904e9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12904ea0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12904ea2 jne 0x12904eaf */
  if (!C.zf) goto L_12904eaf;
  /* 12904ea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ea7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904eaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12904ead jmp 0x12904ebc */
  goto L_12904ebc;
L_12904eaf:;
  /* 12904eaf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904eb3 je 0x12904ebc */
  if (C.zf) goto L_12904ebc;
  /* 12904eb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904eb8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12904ebc:;
  /* 12904ebc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12904ec3:;
  /* 12904ec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ec6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12904ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904ecb je 0x12904eee */
  if (C.zf) goto L_12904eee;
L_12904ecd:;
  /* 12904ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ed0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12904ed3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904ed6 je 0x12904ee3 */
  if (C.zf) goto L_12904ee3;
  /* 12904ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904edb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904ede cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904ee1 jne 0x12904eee */
  if (!C.zf) goto L_12904eee;
L_12904ee3:;
  /* 12904ee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ee6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904ee9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12904eec jmp 0x12904ecd */
  goto L_12904ecd;
L_12904eee:;
  /* 12904eee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ef1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904ef4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12904ef6 jne 0x12904efd */
  if (!C.zf) goto L_12904efd;
  /* 12904ef8 jmp 0x129050db */
  goto L_129050db;
L_12904efd:;
  /* 12904efd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904f01 je 0x12904f14 */
  if (C.zf) goto L_12904f14;
  /* 12904f03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904f06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904f09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12904f0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12904f0e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904f11 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12904f14:;
  /* 12904f14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12904f17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12904f19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904f1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12904f1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12904f21:;
  /* 12904f21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12904f28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12904f2f:;
  /* 12904f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904f32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12904f35 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904f38 jne 0x12904f4e */
  if (!C.zf) goto L_12904f4e;
  /* 12904f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904f3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904f40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12904f43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904f46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904f49 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12904f4c jmp 0x12904f2f */
  goto L_12904f2f;
L_12904f4e:;
  /* 12904f4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904f51 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904f54 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904f57 jne 0x12904faa */
  if (!C.zf) goto L_12904faa;
  /* 12904f59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904f5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12904f5e mov ecx, 2 */
  ECX = (0x2u);
  /* 12904f63 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12904f65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12904f67 jne 0x12904fa2 */
  if (!C.zf) goto L_12904fa2;
  /* 12904f69 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904f6d je 0x12904f8f */
  if (C.zf) goto L_12904f8f;
  /* 12904f6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904f72 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12904f76 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904f79 jne 0x12904f86 */
  if (!C.zf) goto L_12904f86;
  /* 12904f7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904f7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904f81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12904f84 jmp 0x12904f8d */
  goto L_12904f8d;
L_12904f86:;
  /* 12904f86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12904f8d:;
  /* 12904f8d jmp 0x12904f96 */
  goto L_12904f96;
L_12904f8f:;
  /* 12904f8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12904f96:;
  /* 12904f96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12904f98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904f9c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12904f9f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12904fa2:;
  /* 12904fa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904fa5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12904fa7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12904faa:;
  /* 12904faa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904fad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12904fb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12904fb3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12904fb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12904fb8 je 0x12904fde */
  if (C.zf) goto L_12904fde;
  /* 12904fba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904fbe je 0x12904fcf */
  if (C.zf) goto L_12904fcf;
  /* 12904fc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904fc3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12904fc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12904fc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904fcc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12904fcf:;
  /* 12904fcf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904fd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12904fd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12904fd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12904fda mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12904fdc jmp 0x12904faa */
  goto L_12904faa;
L_12904fde:;
  /* 12904fde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904fe1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12904fe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12904fe6 je 0x12905004 */
  if (C.zf) goto L_12905004;
  /* 12904fe8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904fec jne 0x12905009 */
  if (!C.zf) goto L_12905009;
  /* 12904fee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ff1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12904ff4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12904ff7 je 0x12905004 */
  if (C.zf) goto L_12905004;
  /* 12904ff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12904ffc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12904fff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905002 jne 0x12905009 */
  if (!C.zf) goto L_12905009;
L_12905004:;
  /* 12905004 jmp 0x129050b4 */
  goto L_129050b4;
L_12905009:;
  /* 12905009 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290500d je 0x129050a6 */
  if (C.zf) goto L_129050a6;
  /* 12905013 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905017 je 0x1290506d */
  if (C.zf) goto L_1290506d;
  /* 12905019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290501c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290501e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12905020 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12905022 mov cl, byte ptr [eax + 0x1292fd01] */
  CL = (r8((uint32_t)(EAX + 0x1292fd01)));
  /* 12905028 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1290502b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290502d je 0x12905058 */
  if (C.zf) goto L_12905058;
  /* 1290502f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905035 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12905037 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12905039 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290503c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290503f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12905042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905045 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905048 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290504b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290504e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12905050 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905053 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12905056 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12905058:;
  /* 12905058 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290505b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290505e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12905060 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12905062 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905065 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905068 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1290506b jmp 0x12905099 */
  goto L_12905099;
L_1290506d:;
  /* 1290506d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12905072 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12905074 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12905076 mov cl, byte ptr [eax + 0x1292fd01] */
  CL = (r8((uint32_t)(EAX + 0x1292fd01)));
  /* 1290507c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1290507f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12905081 je 0x12905099 */
  if (C.zf) goto L_12905099;
  /* 12905083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905086 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905089 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290508c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290508f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12905091 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905094 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12905097 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12905099:;
  /* 12905099 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290509c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290509e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129050a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129050a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129050a6:;
  /* 129050a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129050a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129050ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129050af jmp 0x12904f21 */
  goto L_12904f21;
L_129050b4:;
  /* 129050b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129050b8 je 0x129050c9 */
  if (C.zf) goto L_129050c9;
  /* 129050ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129050bd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 129050c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129050c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129050c6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_129050c9:;
  /* 129050c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129050cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129050ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129050d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 129050d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 129050d6 jmp 0x12904ec3 */
  goto L_12904ec3;
L_129050db:;
  /* 129050db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129050df je 0x129050f3 */
  if (C.zf) goto L_129050f3;
  /* 129050e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129050e4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129050ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129050ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129050f0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_129050f3:;
  /* 129050f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 129050f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129050f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129050fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129050fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12905100 mov esp, ebp */
  ESP = (EBP);
  /* 12905102 pop ebp */
  EBP = (pop32());
  /* 12905103 ret  */
  ESPCHK(0x12904ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x12905110 (537 bytes, 173 insns) */
void f_12905110(void) {
  FTRACE(0x12905110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905110 push ebp */
  push32((uint32_t)(EBP));
  /* 12905111 mov ebp, esp */
  EBP = (ESP);
  /* 12905113 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905116 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1290511d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12905124 cmp dword ptr [0x1292e5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290512b jne 0x1290516a */
  if (!C.zf) goto L_1290516a;
  /* 1290512d call dword ptr [0x129302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d8))), 0x12905133u);
  /* 12905133 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12905136 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290513a je 0x12905148 */
  if (C.zf) goto L_12905148;
  /* 1290513c mov dword ptr [0x1292e5e4], 1 */
  w32((uint32_t)(0x1292e5e4), (0x1u));
  /* 12905146 jmp 0x1290516a */
  goto L_1290516a;
L_12905148:;
  /* 12905148 call dword ptr [0x129302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d4))), 0x1290514eu);
  /* 1290514e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12905151 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905155 je 0x12905163 */
  if (C.zf) goto L_12905163;
  /* 12905157 mov dword ptr [0x1292e5e4], 2 */
  w32((uint32_t)(0x1292e5e4), (0x2u));
  /* 12905161 jmp 0x1290516a */
  goto L_1290516a;
L_12905163:;
  /* 12905163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12905165 jmp 0x12905325 */
  goto L_12905325;
L_1290516a:;
  /* 1290516a cmp dword ptr [0x1292e5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905171 jne 0x1290526e */
  if (!C.zf) goto L_1290526e;
  /* 12905177 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290517b jne 0x12905193 */
  if (!C.zf) goto L_12905193;
  /* 1290517d call dword ptr [0x129302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d8))), 0x12905183u);
  /* 12905183 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12905186 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290518a jne 0x12905193 */
  if (!C.zf) goto L_12905193;
  /* 1290518c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290518e jmp 0x12905325 */
  goto L_12905325;
L_12905193:;
  /* 12905193 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12905196 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12905199:;
  /* 12905199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290519c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290519e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 129051a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129051a3 je 0x129051c5 */
  if (C.zf) goto L_129051c5;
  /* 129051a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129051a8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129051ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129051ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129051b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129051b3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 129051b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129051b8 jne 0x129051c3 */
  if (!C.zf) goto L_129051c3;
  /* 129051ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129051bd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129051c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129051c3:;
  /* 129051c3 jmp 0x12905199 */
  goto L_12905199;
L_129051c5:;
  /* 129051c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129051c8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129051cb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129051cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129051d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129051d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129051d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129051d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129051d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129051db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129051de push edx */
  push32((uint32_t)(EDX));
  /* 129051df mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129051e2 push eax */
  push32((uint32_t)(EAX));
  /* 129051e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129051e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129051e7 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x129051edu);
  /* 129051ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129051f0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129051f4 je 0x12905214 */
  if (C.zf) goto L_12905214;
  /* 129051f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129051f8 push 0x12929ae4 */
  push32((uint32_t)(0x12929ae4u));
  /* 129051fd push 2 */
  push32((uint32_t)(0x2u));
  /* 129051ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12905202 push ecx */
  push32((uint32_t)(ECX));
  /* 12905203 call 0x12902b40 */
  push32(0x12905208u); f_12902b40();
  /* 12905208 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290520b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1290520e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905212 jne 0x12905225 */
  if (!C.zf) goto L_12905225;
L_12905214:;
  /* 12905214 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12905217 push edx */
  push32((uint32_t)(EDX));
  /* 12905218 call dword ptr [0x12930224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930224))), 0x1290521eu);
  /* 1290521e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12905220 jmp 0x12905325 */
  goto L_12905325;
L_12905225:;
  /* 12905225 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905227 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905229 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290522c push eax */
  push32((uint32_t)(EAX));
  /* 1290522d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12905230 push ecx */
  push32((uint32_t)(ECX));
  /* 12905231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905234 push edx */
  push32((uint32_t)(EDX));
  /* 12905235 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12905238 push eax */
  push32((uint32_t)(EAX));
  /* 12905239 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290523b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290523d call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x12905243u);
  /* 12905243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12905245 jne 0x1290525c */
  if (!C.zf) goto L_1290525c;
  /* 12905247 push 2 */
  push32((uint32_t)(0x2u));
  /* 12905249 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290524c push ecx */
  push32((uint32_t)(ECX));
  /* 1290524d call 0x129035d0 */
  push32(0x12905252u); f_129035d0();
  /* 12905252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905255 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1290525c:;
  /* 1290525c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290525f push edx */
  push32((uint32_t)(EDX));
  /* 12905260 call dword ptr [0x12930224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930224))), 0x12905266u);
  /* 12905266 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12905269 jmp 0x12905325 */
  goto L_12905325;
L_1290526e:;
  /* 1290526e cmp dword ptr [0x1292e5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1292e5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905275 jne 0x12905323 */
  if (!C.zf) goto L_12905323;
  /* 1290527b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290527f jne 0x12905297 */
  if (!C.zf) goto L_12905297;
  /* 12905281 call dword ptr [0x129302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d4))), 0x12905287u);
  /* 12905287 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1290528a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290528e jne 0x12905297 */
  if (!C.zf) goto L_12905297;
  /* 12905290 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12905292 jmp 0x12905325 */
  goto L_12905325;
L_12905297:;
  /* 12905297 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290529a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1290529d:;
  /* 1290529d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129052a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129052a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129052a5 je 0x129052c5 */
  if (C.zf) goto L_129052c5;
  /* 129052a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129052aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129052ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129052b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129052b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 129052b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129052b8 jne 0x129052c3 */
  if (!C.zf) goto L_129052c3;
  /* 129052ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129052bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129052c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_129052c3:;
  /* 129052c3 jmp 0x1290529d */
  goto L_1290529d;
L_129052c5:;
  /* 129052c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129052c8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129052cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129052ce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129052d1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 129052d6 push 0x12929ae4 */
  push32((uint32_t)(0x12929ae4u));
  /* 129052db push 2 */
  push32((uint32_t)(0x2u));
  /* 129052dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129052e0 push edx */
  push32((uint32_t)(EDX));
  /* 129052e1 call 0x12902b40 */
  push32(0x129052e6u); f_12902b40();
  /* 129052e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129052e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129052ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129052f0 jne 0x12905300 */
  if (!C.zf) goto L_12905300;
  /* 129052f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129052f5 push eax */
  push32((uint32_t)(EAX));
  /* 129052f6 call dword ptr [0x12930228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930228))), 0x129052fcu);
  /* 129052fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129052fe jmp 0x12905325 */
  goto L_12905325;
L_12905300:;
  /* 12905300 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12905303 push ecx */
  push32((uint32_t)(ECX));
  /* 12905304 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12905307 push edx */
  push32((uint32_t)(EDX));
  /* 12905308 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290530b push eax */
  push32((uint32_t)(EAX));
  /* 1290530c call 0x12909420 */
  push32(0x12905311u); f_12909420();
  /* 12905311 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905314 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12905317 push ecx */
  push32((uint32_t)(ECX));
  /* 12905318 call dword ptr [0x12930228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930228))), 0x1290531eu);
  /* 1290531e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12905321 jmp 0x12905325 */
  goto L_12905325;
L_12905323:;
  /* 12905323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12905325:;
  /* 12905325 mov esp, ebp */
  ESP = (EBP);
  /* 12905327 pop ebp */
  EBP = (pop32());
  /* 12905328 ret  */
  ESPCHK(0x12905110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x12905330 (77 bytes, 25 insns) */
void f_12905330(void) {
  FTRACE(0x12905330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905330 push ebp */
  push32((uint32_t)(EBP));
  /* 12905331 mov ebp, esp */
  EBP = (ESP);
  /* 12905333 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905335 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1290533a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290533c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905340 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12905343 push eax */
  push32((uint32_t)(EAX));
  /* 12905344 call dword ptr [0x129302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e0))), 0x1290534au);
  /* 1290534a mov dword ptr [0x1292fe2c], eax */
  w32((uint32_t)(0x1292fe2c), (EAX));
  /* 1290534f cmp dword ptr [0x1292fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905356 jne 0x1290535c */
  if (!C.zf) goto L_1290535c;
  /* 12905358 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290535a jmp 0x1290537b */
  goto L_1290537b;
L_1290535c:;
  /* 1290535c call 0x12906de0 */
  push32(0x12905361u); f_12906de0();
  /* 12905361 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12905363 jne 0x12905376 */
  if (!C.zf) goto L_12905376;
  /* 12905365 mov ecx, dword ptr [0x1292fe2c] */
  ECX = (r32((uint32_t)(0x1292fe2c)));
  /* 1290536b push ecx */
  push32((uint32_t)(ECX));
  /* 1290536c call dword ptr [0x129302dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302dc))), 0x12905372u);
  /* 12905372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12905374 jmp 0x1290537b */
  goto L_1290537b;
L_12905376:;
  /* 12905376 mov eax, 1 */
  EAX = (0x1u);
L_1290537b:;
  /* 1290537b pop ebp */
  EBP = (pop32());
  /* 1290537c ret  */
  ESPCHK(0x12905330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005380 @ 0x12905380 (156 bytes, 48 insns) */
void f_12905380(void) {
  FTRACE(0x12905380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905380 push ebp */
  push32((uint32_t)(EBP));
  /* 12905381 mov ebp, esp */
  EBP = (ESP);
  /* 12905383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905386 mov eax, dword ptr [0x1292fe28] */
  EAX = (r32((uint32_t)(0x1292fe28)));
  /* 1290538b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290538e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12905395 jmp 0x129053a0 */
  goto L_129053a0;
L_12905397:;
  /* 12905397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290539a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290539d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129053a0:;
  /* 129053a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129053a3 cmp edx, dword ptr [0x1292fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129053a9 jge 0x129053f6 */
  if ((C.sf==C.of)) goto L_129053f6;
  /* 129053ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 129053b0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 129053b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129053b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129053bb push ecx */
  push32((uint32_t)(ECX));
  /* 129053bc call dword ptr [0x129302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e8))), 0x129053c2u);
  /* 129053c2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129053c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129053c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129053cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129053cf push eax */
  push32((uint32_t)(EAX));
  /* 129053d0 call dword ptr [0x129302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e8))), 0x129053d6u);
  /* 129053d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129053d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129053dc push edx */
  push32((uint32_t)(EDX));
  /* 129053dd push 0 */
  push32((uint32_t)(0x0u));
  /* 129053df mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 129053e4 push eax */
  push32((uint32_t)(EAX));
  /* 129053e5 call dword ptr [0x129302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e4))), 0x129053ebu);
  /* 129053eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129053ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129053f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129053f4 jmp 0x12905397 */
  goto L_12905397;
L_129053f6:;
  /* 129053f6 mov edx, dword ptr [0x1292fe28] */
  EDX = (r32((uint32_t)(0x1292fe28)));
  /* 129053fc push edx */
  push32((uint32_t)(EDX));
  /* 129053fd push 0 */
  push32((uint32_t)(0x0u));
  /* 129053ff mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 12905404 push eax */
  push32((uint32_t)(EAX));
  /* 12905405 call dword ptr [0x129302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e4))), 0x1290540bu);
  /* 1290540b mov ecx, dword ptr [0x1292fe2c] */
  ECX = (r32((uint32_t)(0x1292fe2c)));
  /* 12905411 push ecx */
  push32((uint32_t)(ECX));
  /* 12905412 call dword ptr [0x129302dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302dc))), 0x12905418u);
  /* 12905418 mov esp, ebp */
  ESP = (EBP);
  /* 1290541a pop ebp */
  EBP = (pop32());
  /* 1290541b ret  */
  ESPCHK(0x12905380u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12905420 (73 bytes, 19 insns) */
void f_12905420(void) {
  FTRACE(0x12905420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905420 push ebp */
  push32((uint32_t)(EBP));
  /* 12905421 mov ebp, esp */
  EBP = (ESP);
  /* 12905423 cmp dword ptr [0x1292e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290542a je 0x1290543e */
  if (C.zf) goto L_1290543e;
  /* 1290542c cmp dword ptr [0x1292e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905433 jne 0x12905467 */
  if (!C.zf) goto L_12905467;
  /* 12905435 cmp dword ptr [0x1292e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290543c jne 0x12905467 */
  if (!C.zf) goto L_12905467;
L_1290543e:;
  /* 1290543e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12905443 call 0x12905470 */
  push32(0x12905448u); f_12905470();
  /* 12905448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290544b cmp dword ptr [0x1292e5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905452 je 0x1290545a */
  if (C.zf) goto L_1290545a;
  /* 12905454 call dword ptr [0x1292e5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e5e8))), 0x1290545au);
L_1290545a:;
  /* 1290545a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1290545f call 0x12905470 */
  push32(0x12905464u); f_12905470();
  /* 12905464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12905467:;
  /* 12905467 pop ebp */
  EBP = (pop32());
  /* 12905468 ret  */
  ESPCHK(0x12905420u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x12905470 (447 bytes, 131 insns) */
void f_12905470(void) {
  FTRACE(0x12905470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905470 push ebp */
  push32((uint32_t)(EBP));
  /* 12905471 mov ebp, esp */
  EBP = (ESP);
  /* 12905473 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905479 push ebx */
  push32((uint32_t)(EBX));
  /* 1290547a push esi */
  push32((uint32_t)(ESI));
  /* 1290547b push edi */
  push32((uint32_t)(EDI));
  /* 1290547c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12905483 jmp 0x1290548e */
  goto L_1290548e;
L_12905485:;
  /* 12905485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290548b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1290548e:;
  /* 1290548e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905492 jae 0x129054a7 */
  if (!C.cf) goto L_129054a7;
  /* 12905494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290549a cmp edx, dword ptr [ecx*8 + 0x1292cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1292cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129054a1 jne 0x129054a5 */
  if (!C.zf) goto L_129054a5;
  /* 129054a3 jmp 0x129054a7 */
  goto L_129054a7;
L_129054a5:;
  /* 129054a5 jmp 0x12905485 */
  goto L_12905485;
L_129054a7:;
  /* 129054a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129054aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129054ad cmp ecx, dword ptr [eax*8 + 0x1292cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1292cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129054b4 jne 0x12905628 */
  if (!C.zf) goto L_12905628;
  /* 129054ba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129054c1 je 0x129054e4 */
  if (C.zf) goto L_129054e4;
  /* 129054c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129054c6 mov eax, dword ptr [edx*8 + 0x1292cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1292cab4)));
  /* 129054cd push eax */
  push32((uint32_t)(EAX));
  /* 129054ce push 0 */
  push32((uint32_t)(0x0u));
  /* 129054d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129054d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129054d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129054d6 call 0x12901c00 */
  push32(0x129054dbu); f_12901c00();
  /* 129054db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129054de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129054e1 jne 0x129054e4 */
  if (!C.zf) goto L_129054e4;
  /* 129054e3 int3  */
  x86_unimpl("int3 @ 0x129054e3");
L_129054e4:;
  /* 129054e4 cmp dword ptr [0x1292e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129054eb je 0x129054ff */
  if (C.zf) goto L_129054ff;
  /* 129054ed cmp dword ptr [0x1292e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129054f4 jne 0x12905538 */
  if (!C.zf) goto L_12905538;
  /* 129054f6 cmp dword ptr [0x1292e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129054fd jne 0x12905538 */
  if (!C.zf) goto L_12905538;
L_129054ff:;
  /* 129054ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12905501 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12905504 push ecx */
  push32((uint32_t)(ECX));
  /* 12905505 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905508 mov eax, dword ptr [edx*8 + 0x1292cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1292cab4)));
  /* 1290550f push eax */
  push32((uint32_t)(EAX));
  /* 12905510 call 0x12905970 */
  push32(0x12905515u); f_12905970();
  /* 12905515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905518 push eax */
  push32((uint32_t)(EAX));
  /* 12905519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290551c mov edx, dword ptr [ecx*8 + 0x1292cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1292cab4)));
  /* 12905523 push edx */
  push32((uint32_t)(EDX));
  /* 12905524 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12905526 call dword ptr [0x12930260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930260))), 0x1290552cu);
  /* 1290552c push eax */
  push32((uint32_t)(EAX));
  /* 1290552d call dword ptr [0x12930264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930264))), 0x12905533u);
  /* 12905533 jmp 0x12905628 */
  goto L_12905628;
L_12905538:;
  /* 12905538 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290553f je 0x12905628 */
  if (C.zf) goto L_12905628;
  /* 12905545 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1290554a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12905550 push eax */
  push32((uint32_t)(EAX));
  /* 12905551 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905553 call dword ptr [0x1293027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293027c))), 0x12905559u);
  /* 12905559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290555b jne 0x12905571 */
  if (!C.zf) goto L_12905571;
  /* 1290555d push 0x1292934c */
  push32((uint32_t)(0x1292934cu));
  /* 12905562 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12905568 push ecx */
  push32((uint32_t)(ECX));
  /* 12905569 call 0x12905af0 */
  push32(0x1290556eu); f_12905af0();
  /* 1290556e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12905571:;
  /* 12905571 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12905577 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1290557a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290557d push eax */
  push32((uint32_t)(EAX));
  /* 1290557e call 0x12905970 */
  push32(0x12905583u); f_12905970();
  /* 12905583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905586 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905589 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290558c jbe 0x129055ba */
  if ((C.cf||C.zf)) goto L_129055ba;
  /* 1290558e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12905594 push ecx */
  push32((uint32_t)(ECX));
  /* 12905595 call 0x12905970 */
  push32(0x1290559au); f_12905970();
  /* 1290559a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290559d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129055a0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 129055a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129055a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 129055a9 push 0x12929348 */
  push32((uint32_t)(0x12929348u));
  /* 129055ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129055b1 push ecx */
  push32((uint32_t)(ECX));
  /* 129055b2 call 0x12906360 */
  push32(0x129055b7u); f_12906360();
  /* 129055b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129055ba:;
  /* 129055ba push 0x12929da0 */
  push32((uint32_t)(0x12929da0u));
  /* 129055bf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 129055c5 push edx */
  push32((uint32_t)(EDX));
  /* 129055c6 call 0x12905af0 */
  push32(0x129055cbu); f_12905af0();
  /* 129055cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129055ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129055d1 push eax */
  push32((uint32_t)(EAX));
  /* 129055d2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 129055d8 push ecx */
  push32((uint32_t)(ECX));
  /* 129055d9 call 0x12905b00 */
  push32(0x129055deu); f_12905b00();
  /* 129055de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129055e1 push 0x129292c0 */
  push32((uint32_t)(0x129292c0u));
  /* 129055e6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 129055ec push edx */
  push32((uint32_t)(EDX));
  /* 129055ed call 0x12905b00 */
  push32(0x129055f2u); f_12905b00();
  /* 129055f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129055f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129055f8 mov ecx, dword ptr [eax*8 + 0x1292cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1292cab4)));
  /* 129055ff push ecx */
  push32((uint32_t)(ECX));
  /* 12905600 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12905606 push edx */
  push32((uint32_t)(EDX));
  /* 12905607 call 0x12905b00 */
  push32(0x1290560cu); f_12905b00();
  /* 1290560c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290560f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12905614 push 0x12929d78 */
  push32((uint32_t)(0x12929d78u));
  /* 12905619 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1290561f push eax */
  push32((uint32_t)(EAX));
  /* 12905620 call 0x129062a0 */
  push32(0x12905625u); f_129062a0();
  /* 12905625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12905628:;
  /* 12905628 pop edi */
  EDI = (pop32());
  /* 12905629 pop esi */
  ESI = (pop32());
  /* 1290562a pop ebx */
  EBX = (pop32());
  /* 1290562b mov esp, ebp */
  ESP = (EBP);
  /* 1290562d pop ebp */
  EBP = (pop32());
  /* 1290562e ret  */
  ESPCHK(0x12905470u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12905630 (80 bytes, 27 insns) */
void f_12905630(void) {
  FTRACE(0x12905630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905630 push ebp */
  push32((uint32_t)(EBP));
  /* 12905631 mov ebp, esp */
  EBP = (ESP);
  /* 12905633 push ecx */
  push32((uint32_t)(ECX));
  /* 12905634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290563b jmp 0x12905646 */
  goto L_12905646;
L_1290563d:;
  /* 1290563d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905643 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12905646:;
  /* 12905646 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290564a jae 0x1290565f */
  if (!C.cf) goto L_1290565f;
  /* 1290564c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290564f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905652 cmp edx, dword ptr [ecx*8 + 0x1292cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1292cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905659 jne 0x1290565d */
  if (!C.zf) goto L_1290565d;
  /* 1290565b jmp 0x1290565f */
  goto L_1290565f;
L_1290565d:;
  /* 1290565d jmp 0x1290563d */
  goto L_1290563d;
L_1290565f:;
  /* 1290565f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905665 cmp ecx, dword ptr [eax*8 + 0x1292cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1292cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290566c jne 0x1290567a */
  if (!C.zf) goto L_1290567a;
  /* 1290566e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905671 mov eax, dword ptr [edx*8 + 0x1292cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1292cab4)));
  /* 12905678 jmp 0x1290567c */
  goto L_1290567c;
L_1290567a:;
  /* 1290567a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290567c:;
  /* 1290567c mov esp, ebp */
  ESP = (EBP);
  /* 1290567e pop ebp */
  EBP = (pop32());
  /* 1290567f ret  */
  ESPCHK(0x12905630u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12905680 (66 bytes, 28 insns) */
void f_12905680(void) {
  FTRACE(0x12905680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905680 push ebp */
  push32((uint32_t)(EBP));
  /* 12905681 mov ebp, esp */
  EBP = (ESP);
  /* 12905683 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905687 jne 0x129056a7 */
  if (!C.zf) goto L_129056a7;
  /* 12905689 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290568d jge 0x129056a7 */
  if ((C.sf==C.of)) goto L_129056a7;
  /* 1290568f push 1 */
  push32((uint32_t)(0x1u));
  /* 12905691 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905694 push eax */
  push32((uint32_t)(EAX));
  /* 12905695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905698 push ecx */
  push32((uint32_t)(ECX));
  /* 12905699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290569c push edx */
  push32((uint32_t)(EDX));
  /* 1290569d call 0x129056d0 */
  push32(0x129056a2u); f_129056d0();
  /* 129056a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129056a5 jmp 0x129056bd */
  goto L_129056bd;
L_129056a7:;
  /* 129056a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129056a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129056ac push eax */
  push32((uint32_t)(EAX));
  /* 129056ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129056b0 push ecx */
  push32((uint32_t)(ECX));
  /* 129056b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129056b4 push edx */
  push32((uint32_t)(EDX));
  /* 129056b5 call 0x129056d0 */
  push32(0x129056bau); f_129056d0();
  /* 129056ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129056bd:;
  /* 129056bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129056c0 pop ebp */
  EBP = (pop32());
  /* 129056c1 ret  */
  ESPCHK(0x12905680u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x129056d0 (194 bytes, 71 insns) */
void f_129056d0(void) {
  FTRACE(0x129056d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129056d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129056d1 mov ebp, esp */
  EBP = (ESP);
  /* 129056d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129056d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129056d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129056dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129056e0 je 0x129056f9 */
  if (C.zf) goto L_129056f9;
  /* 129056e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129056e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 129056e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129056eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129056ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129056f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129056f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129056f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129056f9:;
  /* 129056f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129056fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129056ff:;
  /* 129056ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905702 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12905704 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12905707 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1290570a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290570d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290570f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12905712 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12905715 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905719 jbe 0x12905731 */
  if ((C.cf||C.zf)) goto L_12905731;
  /* 1290571b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290571e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905724 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12905726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905729 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290572c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290572f jmp 0x12905745 */
  goto L_12905745;
L_12905731:;
  /* 12905731 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12905734 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290573a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1290573c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290573f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905742 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12905745:;
  /* 12905745 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905749 ja 0x129056ff */
  if ((!C.cf&&!C.zf)) goto L_129056ff;
  /* 1290574b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290574e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12905751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905754 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905757 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290575a:;
  /* 1290575a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290575d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290575f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12905762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905765 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905768 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290576a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1290576c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290576f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12905772 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12905774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905777 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290577a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290577d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905780 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905783 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12905786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905789 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290578c jb 0x1290575a */
  if (C.cf) goto L_1290575a;
  /* 1290578e mov esp, ebp */
  ESP = (EBP);
  /* 12905790 pop ebp */
  EBP = (pop32());
  /* 12905791 ret  */
  ESPCHK(0x129056d0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x129057a0 (63 bytes, 24 insns) */
void f_129057a0(void) {
  FTRACE(0x129057a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129057a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129057a1 mov ebp, esp */
  EBP = (ESP);
  /* 129057a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129057a4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129057a8 jne 0x129057b9 */
  if (!C.zf) goto L_129057b9;
  /* 129057aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129057ae jge 0x129057b9 */
  if ((C.sf==C.of)) goto L_129057b9;
  /* 129057b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129057b7 jmp 0x129057c0 */
  goto L_129057c0;
L_129057b9:;
  /* 129057b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129057c0:;
  /* 129057c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129057c3 push eax */
  push32((uint32_t)(EAX));
  /* 129057c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129057c7 push ecx */
  push32((uint32_t)(ECX));
  /* 129057c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129057cb push edx */
  push32((uint32_t)(EDX));
  /* 129057cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129057cf push eax */
  push32((uint32_t)(EAX));
  /* 129057d0 call 0x129056d0 */
  push32(0x129057d5u); f_129056d0();
  /* 129057d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129057d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129057db mov esp, ebp */
  ESP = (EBP);
  /* 129057dd pop ebp */
  EBP = (pop32());
  /* 129057de ret  */
  ESPCHK(0x129057a0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x129057e0 (30 bytes, 14 insns) */
void f_129057e0(void) {
  FTRACE(0x129057e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129057e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129057e1 mov ebp, esp */
  EBP = (ESP);
  /* 129057e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129057e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129057e8 push eax */
  push32((uint32_t)(EAX));
  /* 129057e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129057ec push ecx */
  push32((uint32_t)(ECX));
  /* 129057ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129057f0 push edx */
  push32((uint32_t)(EDX));
  /* 129057f1 call 0x129056d0 */
  push32(0x129057f6u); f_129056d0();
  /* 129057f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129057f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129057fc pop ebp */
  EBP = (pop32());
  /* 129057fd ret  */
  ESPCHK(0x129057e0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12905800 (72 bytes, 28 insns) */
void f_12905800(void) {
  FTRACE(0x12905800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905800 push ebp */
  push32((uint32_t)(EBP));
  /* 12905801 mov ebp, esp */
  EBP = (ESP);
  /* 12905803 push ecx */
  push32((uint32_t)(ECX));
  /* 12905804 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905808 jne 0x12905821 */
  if (!C.zf) goto L_12905821;
  /* 1290580a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290580e jg 0x12905821 */
  if ((!C.zf&&C.sf==C.of)) goto L_12905821;
  /* 12905810 jl 0x12905818 */
  if ((C.sf!=C.of)) goto L_12905818;
  /* 12905812 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905816 jae 0x12905821 */
  if (!C.cf) goto L_12905821;
L_12905818:;
  /* 12905818 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1290581f jmp 0x12905828 */
  goto L_12905828;
L_12905821:;
  /* 12905821 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12905828:;
  /* 12905828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290582b push eax */
  push32((uint32_t)(EAX));
  /* 1290582c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290582f push ecx */
  push32((uint32_t)(ECX));
  /* 12905830 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905833 push edx */
  push32((uint32_t)(EDX));
  /* 12905834 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905837 push eax */
  push32((uint32_t)(EAX));
  /* 12905838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290583b push ecx */
  push32((uint32_t)(ECX));
  /* 1290583c call 0x12905850 */
  push32(0x12905841u); f_12905850();
  /* 12905841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905844 mov esp, ebp */
  ESP = (EBP);
  /* 12905846 pop ebp */
  EBP = (pop32());
  /* 12905847 ret  */
  ESPCHK(0x12905800u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12905850 (242 bytes, 91 insns) */
void f_12905850(void) {
  FTRACE(0x12905850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905850 push ebp */
  push32((uint32_t)(EBP));
  /* 12905851 mov ebp, esp */
  EBP = (ESP);
  /* 12905853 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905856 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290585c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905860 je 0x12905884 */
  if (C.zf) goto L_12905884;
  /* 12905862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905865 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12905868 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290586b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290586e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12905871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905874 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12905876 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905879 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290587c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290587e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12905881 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12905884:;
  /* 12905884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905887 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1290588a:;
  /* 1290588a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290588d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290588f push ecx */
  push32((uint32_t)(ECX));
  /* 12905890 push eax */
  push32((uint32_t)(EAX));
  /* 12905891 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905894 push edx */
  push32((uint32_t)(EDX));
  /* 12905895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905898 push eax */
  push32((uint32_t)(EAX));
  /* 12905899 call 0x129097d0 */
  push32(0x1290589eu); f_129097d0();
  /* 1290589e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 129058a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129058a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129058a6 push edx */
  push32((uint32_t)(EDX));
  /* 129058a7 push ecx */
  push32((uint32_t)(ECX));
  /* 129058a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129058ab push eax */
  push32((uint32_t)(EAX));
  /* 129058ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129058af push ecx */
  push32((uint32_t)(ECX));
  /* 129058b0 call 0x12909760 */
  push32(0x129058b5u); f_12909760();
  /* 129058b5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129058b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129058bb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129058bf jbe 0x129058d7 */
  if ((C.cf||C.zf)) goto L_129058d7;
  /* 129058c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129058c4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129058c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129058ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129058cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129058cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129058d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129058d5 jmp 0x129058eb */
  goto L_129058eb;
L_129058d7:;
  /* 129058d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129058da add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129058dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129058e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129058e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129058e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129058e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129058eb:;
  /* 129058eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129058ef ja 0x1290588a */
  if ((!C.cf&&!C.zf)) goto L_1290588a;
  /* 129058f1 jb 0x129058f9 */
  if (C.cf) goto L_129058f9;
  /* 129058f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129058f7 ja 0x1290588a */
  if ((!C.cf&&!C.zf)) goto L_1290588a;
L_129058f9:;
  /* 129058f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129058fc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129058ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905902 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12905908:;
  /* 12905908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290590b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290590d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12905910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905913 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905916 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12905918 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1290591a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290591d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12905920 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12905922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905925 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905928 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290592b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290592e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905931 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12905934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905937 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290593a jb 0x12905908 */
  if (C.cf) goto L_12905908;
  /* 1290593c mov esp, ebp */
  ESP = (EBP);
  /* 1290593e pop ebp */
  EBP = (pop32());
  /* 1290593f ret 0x14 */
  ESPCHK(0x12905850u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12905950 (31 bytes, 15 insns) */
void f_12905950(void) {
  FTRACE(0x12905950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905950 push ebp */
  push32((uint32_t)(EBP));
  /* 12905951 mov ebp, esp */
  EBP = (ESP);
  /* 12905953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905955 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12905958 push eax */
  push32((uint32_t)(EAX));
  /* 12905959 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290595c push ecx */
  push32((uint32_t)(ECX));
  /* 1290595d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905960 push edx */
  push32((uint32_t)(EDX));
  /* 12905961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905964 push eax */
  push32((uint32_t)(EAX));
  /* 12905965 call 0x12905850 */
  push32(0x1290596au); f_12905850();
  /* 1290596a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290596d pop ebp */
  EBP = (pop32());
  /* 1290596e ret  */
  ESPCHK(0x12905950u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12905970 (123 bytes, 44 insns) */
void f_12905970(void) {
  FTRACE(0x12905970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905970 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12905974 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1290597a je 0x12905990 */
  if (C.zf) goto L_12905990;
L_1290597c:;
  /* 1290597c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1290597e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1290597f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12905981 je 0x129059c3 */
  if (C.zf) goto L_129059c3;
  /* 12905983 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12905989 jne 0x1290597c */
  if (!C.zf) goto L_1290597c;
  /* 1290598b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12905990:;
  /* 12905990 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12905992 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12905997 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905999 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290599c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1290599e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129059a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 129059a6 je 0x12905990 */
  if (C.zf) goto L_12905990;
  /* 129059a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 129059ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129059ad je 0x129059e1 */
  if (C.zf) goto L_129059e1;
  /* 129059af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 129059b1 je 0x129059d7 */
  if (C.zf) goto L_129059d7;
  /* 129059b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 129059b8 je 0x129059cd */
  if (C.zf) goto L_129059cd;
  /* 129059ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 129059bf je 0x129059c3 */
  if (C.zf) goto L_129059c3;
  /* 129059c1 jmp 0x12905990 */
  goto L_12905990;
L_129059c3:;
  /* 129059c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 129059c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129059ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129059cc ret  */
  ESPCHK(0x12905970u, _esp0);
  ESP += 4; return;
L_129059cd:;
  /* 129059cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 129059d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129059d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129059d6 ret  */
  ESPCHK(0x12905970u, _esp0);
  ESP += 4; return;
L_129059d7:;
  /* 129059d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 129059da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129059de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129059e0 ret  */
  ESPCHK(0x12905970u, _esp0);
  ESP += 4; return;
L_129059e1:;
  /* 129059e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 129059e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129059e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129059ea ret  */
  ESPCHK(0x12905970u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x129059f0 (249 bytes, 93 insns) */
void f_129059f0(void) {
  FTRACE(0x129059f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129059f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129059f1 mov ebp, esp */
  EBP = (ESP);
  /* 129059f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129059f6 push ebx */
  push32((uint32_t)(EBX));
  /* 129059f7 push esi */
  push32((uint32_t)(ESI));
  /* 129059f8 push edi */
  push32((uint32_t)(EDI));
  /* 129059f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 129059fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129059ff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12905a02 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12905a05:;
  /* 12905a05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905a09 jne 0x12905a29 */
  if (!C.zf) goto L_12905a29;
  /* 12905a0b push 0x12929dd8 */
  push32((uint32_t)(0x12929dd8u));
  /* 12905a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905a12 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12905a14 push 0x12929dcc */
  push32((uint32_t)(0x12929dccu));
  /* 12905a19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12905a1b call 0x12901c00 */
  push32(0x12905a20u); f_12901c00();
  /* 12905a20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905a23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905a26 jne 0x12905a29 */
  if (!C.zf) goto L_12905a29;
  /* 12905a28 int3  */
  x86_unimpl("int3 @ 0x12905a28");
L_12905a29:;
  /* 12905a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12905a2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12905a2d jne 0x12905a05 */
  if (!C.zf) goto L_12905a05;
L_12905a2f:;
  /* 12905a2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905a33 jne 0x12905a53 */
  if (!C.zf) goto L_12905a53;
  /* 12905a35 push 0x12929dbc */
  push32((uint32_t)(0x12929dbcu));
  /* 12905a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12905a3c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12905a3e push 0x12929dcc */
  push32((uint32_t)(0x12929dccu));
  /* 12905a43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12905a45 call 0x12901c00 */
  push32(0x12905a4au); f_12901c00();
  /* 12905a4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905a4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905a50 jne 0x12905a53 */
  if (!C.zf) goto L_12905a53;
  /* 12905a52 int3  */
  x86_unimpl("int3 @ 0x12905a52");
L_12905a53:;
  /* 12905a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12905a55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12905a57 jne 0x12905a2f */
  if (!C.zf) goto L_12905a2f;
  /* 12905a59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905a5c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12905a63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905a69 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12905a6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905a72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12905a74 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905a77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905a7a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12905a7d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12905a80 push edx */
  push32((uint32_t)(EDX));
  /* 12905a81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905a84 push eax */
  push32((uint32_t)(EAX));
  /* 12905a85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905a88 push ecx */
  push32((uint32_t)(ECX));
  /* 12905a89 call 0x12909ad0 */
  push32(0x12905a8eu); f_12909ad0();
  /* 12905a8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905a91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12905a94 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905a97 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12905a9a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905a9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905aa0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12905aa3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905aa6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905aaa jl 0x12905ace */
  if ((C.sf!=C.of)) goto L_12905ace;
  /* 12905aac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905aaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12905ab1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12905ab4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12905ab6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12905abc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12905abf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905ac2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12905ac4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905ac7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905aca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12905acc jmp 0x12905adf */
  goto L_12905adf;
L_12905ace:;
  /* 12905ace mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905ad1 push eax */
  push32((uint32_t)(EAX));
  /* 12905ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905ad4 call 0x12909850 */
  push32(0x12905ad9u); f_12909850();
  /* 12905ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905adc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12905adf:;
  /* 12905adf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12905ae2 pop edi */
  EDI = (pop32());
  /* 12905ae3 pop esi */
  ESI = (pop32());
  /* 12905ae4 pop ebx */
  EBX = (pop32());
  /* 12905ae5 mov esp, ebp */
  ESP = (EBP);
  /* 12905ae7 pop ebp */
  EBP = (pop32());
  /* 12905ae8 ret  */
  ESPCHK(0x129059f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005af0 @ 0x12905af0 (7 bytes, 3 insns) */
void f_12905af0(void) {
  FTRACE(0x12905af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905af0 push edi */
  push32((uint32_t)(EDI));
  /* 12905af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12905af5 jmp 0x12905b61 */
  jmp_ind(0x12905b61u); return;
}

/* FUN_10005b00 @ 0x12905b00 (224 bytes, 84 insns) */
void f_12905b00(void) {
  FTRACE(0x12905b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12905b04 push edi */
  push32((uint32_t)(EDI));
  /* 12905b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12905b0b je 0x12905b1c */
  if (C.zf) goto L_12905b1c;
L_12905b0d:;
  /* 12905b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12905b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12905b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12905b12 je 0x12905b4f */
  if (C.zf) goto L_12905b4f;
  /* 12905b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12905b1a jne 0x12905b0d */
  if (!C.zf) goto L_12905b0d;
L_12905b1c:;
  /* 12905b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12905b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12905b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12905b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12905b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12905b32 je 0x12905b1c */
  if (C.zf) goto L_12905b1c;
  /* 12905b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12905b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12905b39 je 0x12905b5e */
  if (C.zf) goto L_12905b5e;
  /* 12905b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12905b3d je 0x12905b59 */
  if (C.zf) goto L_12905b59;
  /* 12905b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12905b44 je 0x12905b54 */
  if (C.zf) goto L_12905b54;
  /* 12905b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12905b4b je 0x12905b4f */
  if (C.zf) goto L_12905b4f;
  /* 12905b4d jmp 0x12905b1c */
  goto L_12905b1c;
L_12905b4f:;
  /* 12905b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12905b52 jmp 0x12905b61 */
  goto L_12905b61;
L_12905b54:;
  /* 12905b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12905b57 jmp 0x12905b61 */
  goto L_12905b61;
L_12905b59:;
  /* 12905b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12905b5c jmp 0x12905b61 */
  goto L_12905b61;
L_12905b5e:;
  /* 12905b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12905b61:;
  /* 12905b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12905b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12905b6b je 0x12905b86 */
  if (C.zf) goto L_12905b86;
L_12905b6d:;
  /* 12905b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12905b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12905b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12905b72 je 0x12905bd8 */
  if (C.zf) goto L_12905bd8;
  /* 12905b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12905b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12905b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12905b7d jne 0x12905b6d */
  if (!C.zf) goto L_12905b6d;
  /* 12905b7f jmp 0x12905b86 */
  goto L_12905b86;
L_12905b81:;
  /* 12905b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12905b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12905b86:;
  /* 12905b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12905b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12905b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12905b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12905b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12905b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12905b9e je 0x12905b81 */
  if (C.zf) goto L_12905b81;
  /* 12905ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12905ba2 je 0x12905bd8 */
  if (C.zf) goto L_12905bd8;
  /* 12905ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12905ba6 je 0x12905bcf */
  if (C.zf) goto L_12905bcf;
  /* 12905ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12905bae je 0x12905bc2 */
  if (C.zf) goto L_12905bc2;
  /* 12905bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12905bb6 je 0x12905bba */
  if (C.zf) goto L_12905bba;
  /* 12905bb8 jmp 0x12905b81 */
  goto L_12905b81;
L_12905bba:;
  /* 12905bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12905bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12905bc0 pop edi */
  EDI = (pop32());
  /* 12905bc1 ret  */
  ESPCHK(0x12905b00u, _esp0);
  ESP += 4; return;
L_12905bc2:;
  /* 12905bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12905bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12905bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12905bcd pop edi */
  EDI = (pop32());
  /* 12905bce ret  */
  ESPCHK(0x12905b00u, _esp0);
  ESP += 4; return;
L_12905bcf:;
  /* 12905bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12905bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12905bd6 pop edi */
  EDI = (pop32());
  /* 12905bd7 ret  */
  ESPCHK(0x12905b00u, _esp0);
  ESP += 4; return;
L_12905bd8:;
  /* 12905bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12905bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12905bde pop edi */
  EDI = (pop32());
  /* 12905bdf ret  */
  ESPCHK(0x12905b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005be0 @ 0x12905be0 (243 bytes, 91 insns) */
void f_12905be0(void) {
  FTRACE(0x12905be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12905be1 mov ebp, esp */
  EBP = (ESP);
  /* 12905be3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905be6 push ebx */
  push32((uint32_t)(EBX));
  /* 12905be7 push esi */
  push32((uint32_t)(ESI));
  /* 12905be8 push edi */
  push32((uint32_t)(EDI));
  /* 12905be9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12905bec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12905bef:;
  /* 12905bef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905bf3 jne 0x12905c13 */
  if (!C.zf) goto L_12905c13;
  /* 12905bf5 push 0x12929dd8 */
  push32((uint32_t)(0x12929dd8u));
  /* 12905bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12905bfc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12905bfe push 0x12929de8 */
  push32((uint32_t)(0x12929de8u));
  /* 12905c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12905c05 call 0x12901c00 */
  push32(0x12905c0au); f_12901c00();
  /* 12905c0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905c10 jne 0x12905c13 */
  if (!C.zf) goto L_12905c13;
  /* 12905c12 int3  */
  x86_unimpl("int3 @ 0x12905c12");
L_12905c13:;
  /* 12905c13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12905c15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12905c17 jne 0x12905bef */
  if (!C.zf) goto L_12905bef;
L_12905c19:;
  /* 12905c19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905c1d jne 0x12905c3d */
  if (!C.zf) goto L_12905c3d;
  /* 12905c1f push 0x12929dbc */
  push32((uint32_t)(0x12929dbcu));
  /* 12905c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12905c26 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12905c28 push 0x12929de8 */
  push32((uint32_t)(0x12929de8u));
  /* 12905c2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12905c2f call 0x12901c00 */
  push32(0x12905c34u); f_12901c00();
  /* 12905c34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905c37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905c3a jne 0x12905c3d */
  if (!C.zf) goto L_12905c3d;
  /* 12905c3c int3  */
  x86_unimpl("int3 @ 0x12905c3c");
L_12905c3d:;
  /* 12905c3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12905c3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12905c41 jne 0x12905c19 */
  if (!C.zf) goto L_12905c19;
  /* 12905c43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c46 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12905c4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905c53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12905c56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905c5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12905c5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905c64 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12905c67 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12905c6a push ecx */
  push32((uint32_t)(ECX));
  /* 12905c6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12905c6e push edx */
  push32((uint32_t)(EDX));
  /* 12905c6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c72 push eax */
  push32((uint32_t)(EAX));
  /* 12905c73 call 0x12909ad0 */
  push32(0x12905c78u); f_12909ad0();
  /* 12905c78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905c7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12905c7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12905c84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905c87 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12905c8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c90 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905c94 jl 0x12905cb8 */
  if ((C.sf!=C.of)) goto L_12905cb8;
  /* 12905c96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905c99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12905c9b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12905c9e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12905ca0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12905ca6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12905ca9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905cac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12905cae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905cb1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905cb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12905cb6 jmp 0x12905cc9 */
  goto L_12905cc9;
L_12905cb8:;
  /* 12905cb8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12905cbb push edx */
  push32((uint32_t)(EDX));
  /* 12905cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12905cbe call 0x12909850 */
  push32(0x12905cc3u); f_12909850();
  /* 12905cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905cc6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12905cc9:;
  /* 12905cc9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12905ccc pop edi */
  EDI = (pop32());
  /* 12905ccd pop esi */
  ESI = (pop32());
  /* 12905cce pop ebx */
  EBX = (pop32());
  /* 12905ccf mov esp, ebp */
  ESP = (EBP);
  /* 12905cd1 pop ebp */
  EBP = (pop32());
  /* 12905cd2 ret  */
  ESPCHK(0x12905be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ce0 @ 0x12905ce0 (47 bytes, 17 insns) */
void f_12905ce0(void) {
  FTRACE(0x12905ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 12905ce1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905ce6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12905cea jb 0x12905d00 */
  if (C.cf) goto L_12905d00;
L_12905cec:;
  /* 12905cec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905cf2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905cf7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12905cf9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905cfe jae 0x12905cec */
  if (!C.cf) goto L_12905cec;
L_12905d00:;
  /* 12905d00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905d02 mov eax, esp */
  EAX = (ESP);
  /* 12905d04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12905d06 mov esp, ecx */
  ESP = (ECX);
  /* 12905d08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12905d0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12905d0d push eax */
  push32((uint32_t)(EAX));
  /* 12905d0e ret  */
  ESPCHK(0x12905ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d10 @ 0x12905d10 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12905d10(void) {
  FTRACE(0x12905d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12905d11 mov ebp, esp */
  EBP = (ESP);
  /* 12905d13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905d16 push esi */
  push32((uint32_t)(ESI));
  /* 12905d17 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d1b je 0x12905d23 */
  if (C.zf) goto L_12905d23;
  /* 12905d1d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d21 jne 0x12905d28 */
  if (!C.zf) goto L_12905d28;
L_12905d23:;
  /* 12905d23 jmp 0x12905ef8 */
  goto L_12905ef8;
L_12905d28:;
  /* 12905d28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d2c je 0x12905d44 */
  if (C.zf) goto L_12905d44;
  /* 12905d2e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d32 je 0x12905d44 */
  if (C.zf) goto L_12905d44;
  /* 12905d34 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d38 je 0x12905d44 */
  if (C.zf) goto L_12905d44;
  /* 12905d3a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d3e jne 0x12905e21 */
  if (!C.zf) goto L_12905e21;
L_12905d44:;
  /* 12905d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12905d46 call 0x12906540 */
  push32(0x12905d4bu); f_12906540();
  /* 12905d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905d4e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d52 je 0x12905d5a */
  if (C.zf) goto L_12905d5a;
  /* 12905d54 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d58 jne 0x12905d9f */
  if (!C.zf) goto L_12905d9f;
L_12905d5a:;
  /* 12905d5a cmp dword ptr [0x1292e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d61 jne 0x12905d9f */
  if (!C.zf) goto L_12905d9f;
  /* 12905d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12905d65 push 0x12905f40 */
  push32((uint32_t)(0x12905f40u));
  /* 12905d6a call dword ptr [0x129302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302ec))), 0x12905d70u);
  /* 12905d70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905d73 jne 0x12905d81 */
  if (!C.zf) goto L_12905d81;
  /* 12905d75 mov dword ptr [0x1292e5fc], 1 */
  w32((uint32_t)(0x1292e5fc), (0x1u));
  /* 12905d7f jmp 0x12905d9f */
  goto L_12905d9f;
L_12905d81:;
  /* 12905d81 call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x12905d87u);
  /* 12905d87 mov esi, eax */
  ESI = (EAX);
  /* 12905d89 call 0x1290aa20 */
  push32(0x12905d8eu); f_1290aa20();
  /* 12905d8e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12905d90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12905d92 call 0x129065e0 */
  push32(0x12905d97u); f_129065e0();
  /* 12905d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905d9a jmp 0x12905ef8 */
  goto L_12905ef8;
L_12905d9f:;
  /* 12905d9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905da2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12905da5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12905da8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905dab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12905dae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905db2 ja 0x12905e12 */
  if ((!C.cf&&!C.zf)) goto L_12905e12;
  /* 12905db4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12905db7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12905db9 mov dl, byte ptr [eax + 0x12905f1f] */
  DL = (r8((uint32_t)(EAX + 0x12905f1f)));
  /* 12905dbf jmp dword ptr [edx*4 + 0x12905f0b] */
  switch (EDX) {
    case 0: goto L_12905dc6;
    case 1: goto L_12905e00;
    case 2: goto L_12905dda;
    case 3: goto L_12905ded;
    case 4: goto L_12905e12;
    default: x86_unimpl("switch@0x12905dbf out of table"); return;
  }
L_12905dc6:;
  /* 12905dc6 mov ecx, dword ptr [0x1292e5ec] */
  ECX = (r32((uint32_t)(0x1292e5ec)));
  /* 12905dcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12905dcf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905dd2 mov dword ptr [0x1292e5ec], edx */
  w32((uint32_t)(0x1292e5ec), (EDX));
  /* 12905dd8 jmp 0x12905e12 */
  goto L_12905e12;
L_12905dda:;
  /* 12905dda mov eax, dword ptr [0x1292e5f0] */
  EAX = (r32((uint32_t)(0x1292e5f0)));
  /* 12905ddf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12905de2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905de5 mov dword ptr [0x1292e5f0], ecx */
  w32((uint32_t)(0x1292e5f0), (ECX));
  /* 12905deb jmp 0x12905e12 */
  goto L_12905e12;
L_12905ded:;
  /* 12905ded mov edx, dword ptr [0x1292e5f4] */
  EDX = (r32((uint32_t)(0x1292e5f4)));
  /* 12905df3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12905df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905df9 mov dword ptr [0x1292e5f4], eax */
  w32((uint32_t)(0x1292e5f4), (EAX));
  /* 12905dfe jmp 0x12905e12 */
  goto L_12905e12;
L_12905e00:;
  /* 12905e00 mov ecx, dword ptr [0x1292e5f8] */
  ECX = (r32((uint32_t)(0x1292e5f8)));
  /* 12905e06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12905e09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905e0c mov dword ptr [0x1292e5f8], edx */
  w32((uint32_t)(0x1292e5f8), (EDX));
L_12905e12:;
  /* 12905e12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12905e14 call 0x129065e0 */
  push32(0x12905e19u); f_129065e0();
  /* 12905e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905e1c jmp 0x12905ef3 */
  goto L_12905ef3;
L_12905e21:;
  /* 12905e21 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905e25 je 0x12905e38 */
  if (C.zf) goto L_12905e38;
  /* 12905e27 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905e2b je 0x12905e38 */
  if (C.zf) goto L_12905e38;
  /* 12905e2d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905e31 je 0x12905e38 */
  if (C.zf) goto L_12905e38;
  /* 12905e33 jmp 0x12905ef8 */
  goto L_12905ef8;
L_12905e38:;
  /* 12905e38 call 0x12902580 */
  push32(0x12905e3du); f_12902580();
  /* 12905e3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12905e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905e43 cmp dword ptr [eax + 0x50], 0x1292cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1292cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905e4a jne 0x12905e95 */
  if (!C.zf) goto L_12905e95;
  /* 12905e4c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12905e51 push 0x12929df4 */
  push32((uint32_t)(0x12929df4u));
  /* 12905e56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12905e58 mov ecx, dword ptr [0x1292cc80] */
  ECX = (r32((uint32_t)(0x1292cc80)));
  /* 12905e5e push ecx */
  push32((uint32_t)(ECX));
  /* 12905e5f call 0x12902b40 */
  push32(0x12905e64u); f_12902b40();
  /* 12905e64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905e67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905e6a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12905e6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905e70 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905e74 je 0x12905e93 */
  if (C.zf) goto L_12905e93;
  /* 12905e76 mov ecx, dword ptr [0x1292cc80] */
  ECX = (r32((uint32_t)(0x1292cc80)));
  /* 12905e7c push ecx */
  push32((uint32_t)(ECX));
  /* 12905e7d push 0x1292cc00 */
  push32((uint32_t)(0x1292cc00u));
  /* 12905e82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905e85 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12905e88 push eax */
  push32((uint32_t)(EAX));
  /* 12905e89 call 0x12909420 */
  push32(0x12905e8eu); f_12909420();
  /* 12905e8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905e91 jmp 0x12905e95 */
  goto L_12905e95;
L_12905e93:;
  /* 12905e93 jmp 0x12905ef8 */
  goto L_12905ef8;
L_12905e95:;
  /* 12905e95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905e98 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12905e9b push edx */
  push32((uint32_t)(EDX));
  /* 12905e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905e9f push eax */
  push32((uint32_t)(EAX));
  /* 12905ea0 call 0x12906220 */
  push32(0x12905ea5u); f_12906220();
  /* 12905ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905ea8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12905eab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905eaf jne 0x12905eb3 */
  if (!C.zf) goto L_12905eb3;
  /* 12905eb1 jmp 0x12905ef8 */
  goto L_12905ef8;
L_12905eb3:;
  /* 12905eb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905eb6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12905eb9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12905ebc:;
  /* 12905ebc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905ebf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12905ec2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905ec5 jne 0x12905ef3 */
  if (!C.zf) goto L_12905ef3;
  /* 12905ec7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905eca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12905ecd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12905ed0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905ed3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905ed6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12905ed9 mov edx, dword ptr [0x1292cc84] */
  EDX = (r32((uint32_t)(0x1292cc84)));
  /* 12905edf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12905ee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905ee5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12905ee8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12905eea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905eed jb 0x12905ef1 */
  if (C.cf) goto L_12905ef1;
  /* 12905eef jmp 0x12905ef3 */
  goto L_12905ef3;
L_12905ef1:;
  /* 12905ef1 jmp 0x12905ebc */
  goto L_12905ebc;
L_12905ef3:;
  /* 12905ef3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12905ef6 jmp 0x12905f06 */
  goto L_12905f06;
L_12905ef8:;
  /* 12905ef8 call 0x1290aa10 */
  push32(0x12905efdu); f_1290aa10();
  /* 12905efd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12905f03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12905f06:;
  /* 12905f06 pop esi */
  ESI = (pop32());
  /* 12905f07 mov esp, ebp */
  ESP = (EBP);
  /* 12905f09 pop ebp */
  EBP = (pop32());
  /* 12905f0a ret  */
  ESPCHK(0x12905d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x12905f40 (146 bytes, 45 insns) */
void f_12905f40(void) {
  FTRACE(0x12905f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12905f41 mov ebp, esp */
  EBP = (ESP);
  /* 12905f43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905f46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12905f48 call 0x12906540 */
  push32(0x12905f4du); f_12906540();
  /* 12905f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905f50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905f54 jne 0x12905f6e */
  if (!C.zf) goto L_12905f6e;
  /* 12905f56 mov dword ptr [ebp - 8], 0x1292e5ec */
  w32((uint32_t)(EBP + -0x8), (0x1292e5ecu));
  /* 12905f5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905f60 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12905f62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12905f65 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12905f6c jmp 0x12905f84 */
  goto L_12905f84;
L_12905f6e:;
  /* 12905f6e mov dword ptr [ebp - 8], 0x1292e5f0 */
  w32((uint32_t)(EBP + -0x8), (0x1292e5f0u));
  /* 12905f75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905f78 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12905f7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12905f7d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12905f84:;
  /* 12905f84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905f88 jne 0x12905f98 */
  if (!C.zf) goto L_12905f98;
  /* 12905f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12905f8c call 0x129065e0 */
  push32(0x12905f91u); f_129065e0();
  /* 12905f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12905f96 jmp 0x12905fcc */
  goto L_12905fcc;
L_12905f98:;
  /* 12905f98 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12905f9c je 0x12905fbd */
  if (C.zf) goto L_12905fbd;
  /* 12905f9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12905fa1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12905fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12905fa9 call 0x129065e0 */
  push32(0x12905faeu); f_129065e0();
  /* 12905fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12905fb4 push edx */
  push32((uint32_t)(EDX));
  /* 12905fb5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12905fb8u);
  /* 12905fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12905fbb jmp 0x12905fc7 */
  goto L_12905fc7;
L_12905fbd:;
  /* 12905fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12905fbf call 0x129065e0 */
  push32(0x12905fc4u); f_129065e0();
  /* 12905fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12905fc7:;
  /* 12905fc7 mov eax, 1 */
  EAX = (0x1u);
L_12905fcc:;
  /* 12905fcc mov esp, ebp */
  ESP = (EBP);
  /* 12905fce pop ebp */
  EBP = (pop32());
  /* 12905fcf ret 4 */
  ESPCHK(0x12905f40u, _esp0);
  ESP += 8; return;
}

/* FUN_10005fe0 @ 0x12905fe0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12905fe0(void) {
  FTRACE(0x12905fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12905fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12905fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12905fe3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905fe6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12905fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12905ff0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12905ff3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12905ff6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12905ff9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12905ffc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906000 ja 0x129060ae */
  if ((!C.cf&&!C.zf)) goto L_129060ae;
  /* 12906006 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12906009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290600b mov dl, byte ptr [eax + 0x12906202] */
  DL = (r8((uint32_t)(EAX + 0x12906202)));
  /* 12906011 jmp dword ptr [edx*4 + 0x129061ea] */
  switch (EDX) {
    case 0: goto L_12906018;
    case 1: goto L_12906083;
    case 2: goto L_12906069;
    case 3: goto L_12906035;
    case 4: goto L_1290604f;
    case 5: goto L_129060ae;
    default: x86_unimpl("switch@0x12906011 out of table"); return;
  }
L_12906018:;
  /* 12906018 mov dword ptr [ebp - 0x18], 0x1292e5ec */
  w32((uint32_t)(EBP + -0x18), (0x1292e5ecu));
  /* 1290601f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12906022 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12906024 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12906027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290602a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290602d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12906030 jmp 0x129060b6 */
  goto L_129060b6;
L_12906035:;
  /* 12906035 mov dword ptr [ebp - 0x18], 0x1292e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x1292e5f0u));
  /* 1290603c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290603f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12906041 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12906044 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12906047 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290604a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290604d jmp 0x129060b6 */
  goto L_129060b6;
L_1290604f:;
  /* 1290604f mov dword ptr [ebp - 0x18], 0x1292e5f4 */
  w32((uint32_t)(EBP + -0x18), (0x1292e5f4u));
  /* 12906056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12906059 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290605b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1290605e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12906061 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906064 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12906067 jmp 0x129060b6 */
  goto L_129060b6;
L_12906069:;
  /* 12906069 mov dword ptr [ebp - 0x18], 0x1292e5f8 */
  w32((uint32_t)(EBP + -0x18), (0x1292e5f8u));
  /* 12906070 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12906073 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12906075 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12906078 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290607b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290607e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12906081 jmp 0x129060b6 */
  goto L_129060b6;
L_12906083:;
  /* 12906083 call 0x12902580 */
  push32(0x12906088u); f_12902580();
  /* 12906088 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290608b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290608e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12906091 push edx */
  push32((uint32_t)(EDX));
  /* 12906092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906095 push eax */
  push32((uint32_t)(EAX));
  /* 12906096 call 0x12906220 */
  push32(0x1290609bu); f_12906220();
  /* 1290609b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290609e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129060a1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129060a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129060a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129060a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129060ac jmp 0x129060b6 */
  goto L_129060b6;
L_129060ae:;
  /* 129060ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129060b1 jmp 0x129061e6 */
  goto L_129061e6;
L_129060b6:;
  /* 129060b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129060ba je 0x129060c6 */
  if (C.zf) goto L_129060c6;
  /* 129060bc push 1 */
  push32((uint32_t)(0x1u));
  /* 129060be call 0x12906540 */
  push32(0x129060c3u); f_12906540();
  /* 129060c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129060c6:;
  /* 129060c6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129060ca jne 0x129060e3 */
  if (!C.zf) goto L_129060e3;
  /* 129060cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129060d0 je 0x129060dc */
  if (C.zf) goto L_129060dc;
  /* 129060d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 129060d4 call 0x129065e0 */
  push32(0x129060d9u); f_129065e0();
  /* 129060d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129060dc:;
  /* 129060dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129060de jmp 0x129061e6 */
  goto L_129061e6;
L_129060e3:;
  /* 129060e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129060e7 jne 0x12906100 */
  if (!C.zf) goto L_12906100;
  /* 129060e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129060ed je 0x129060f9 */
  if (C.zf) goto L_129060f9;
  /* 129060ef push 1 */
  push32((uint32_t)(0x1u));
  /* 129060f1 call 0x129065e0 */
  push32(0x129060f6u); f_129065e0();
  /* 129060f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129060f9:;
  /* 129060f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 129060fb call 0x12902300 */
  push32(0x12906100u); f_12902300();
L_12906100:;
  /* 12906100 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906104 je 0x12906112 */
  if (C.zf) goto L_12906112;
  /* 12906106 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290610a je 0x12906112 */
  if (C.zf) goto L_12906112;
  /* 1290610c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906110 jne 0x1290613e */
  if (!C.zf) goto L_1290613e;
L_12906112:;
  /* 12906112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906115 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12906118 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290611b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290611e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12906125 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906129 jne 0x1290613e */
  if (!C.zf) goto L_1290613e;
  /* 1290612b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290612e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12906131 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12906134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906137 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1290613e:;
  /* 1290613e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906142 jne 0x12906180 */
  if (!C.zf) goto L_12906180;
  /* 12906144 mov eax, dword ptr [0x1292cc78] */
  EAX = (r32((uint32_t)(0x1292cc78)));
  /* 12906149 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1290614c jmp 0x12906157 */
  goto L_12906157;
L_1290614e:;
  /* 1290614e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906151 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906154 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12906157:;
  /* 12906157 mov edx, dword ptr [0x1292cc78] */
  EDX = (r32((uint32_t)(0x1292cc78)));
  /* 1290615d add edx, dword ptr [0x1292cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906163 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906166 jge 0x1290617e */
  if ((C.sf==C.of)) goto L_1290617e;
  /* 12906168 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290616b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290616e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906171 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12906174 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1290617c jmp 0x1290614e */
  goto L_1290614e;
L_1290617e:;
  /* 1290617e jmp 0x12906189 */
  goto L_12906189;
L_12906180:;
  /* 12906180 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12906183 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12906189:;
  /* 12906189 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290618d je 0x12906199 */
  if (C.zf) goto L_12906199;
  /* 1290618f push 1 */
  push32((uint32_t)(0x1u));
  /* 12906191 call 0x129065e0 */
  push32(0x12906196u); f_129065e0();
  /* 12906196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12906199:;
  /* 12906199 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290619d jne 0x129061b0 */
  if (!C.zf) goto L_129061b0;
  /* 1290619f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129061a2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 129061a5 push edx */
  push32((uint32_t)(EDX));
  /* 129061a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 129061a8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x129061abu);
  /* 129061ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129061ae jmp 0x129061ba */
  goto L_129061ba;
L_129061b0:;
  /* 129061b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129061b3 push eax */
  push32((uint32_t)(EAX));
  /* 129061b4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x129061b7u);
  /* 129061b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129061ba:;
  /* 129061ba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129061be je 0x129061cc */
  if (C.zf) goto L_129061cc;
  /* 129061c0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129061c4 je 0x129061cc */
  if (C.zf) goto L_129061cc;
  /* 129061c6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129061ca jne 0x129061e4 */
  if (!C.zf) goto L_129061e4;
L_129061cc:;
  /* 129061cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129061cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129061d2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 129061d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129061d9 jne 0x129061e4 */
  if (!C.zf) goto L_129061e4;
  /* 129061db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129061de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129061e1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_129061e4:;
  /* 129061e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129061e6:;
  /* 129061e6 mov esp, ebp */
  ESP = (EBP);
  /* 129061e8 pop ebp */
  EBP = (pop32());
  /* 129061e9 ret  */
  ESPCHK(0x12905fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12906220 (91 bytes, 35 insns) */
void f_12906220(void) {
  FTRACE(0x12906220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906220 push ebp */
  push32((uint32_t)(EBP));
  /* 12906221 mov ebp, esp */
  EBP = (ESP);
  /* 12906223 push ecx */
  push32((uint32_t)(ECX));
  /* 12906224 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906227 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290622a:;
  /* 1290622a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290622d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12906230 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906233 je 0x12906253 */
  if (C.zf) goto L_12906253;
  /* 12906235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906238 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290623b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290623e mov ecx, dword ptr [0x1292cc84] */
  ECX = (r32((uint32_t)(0x1292cc84)));
  /* 12906244 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12906247 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290624a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290624c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290624f jae 0x12906253 */
  if (!C.cf) goto L_12906253;
  /* 12906251 jmp 0x1290622a */
  goto L_1290622a;
L_12906253:;
  /* 12906253 mov eax, dword ptr [0x1292cc84] */
  EAX = (r32((uint32_t)(0x1292cc84)));
  /* 12906258 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290625b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290625e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906260 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906263 jae 0x12906275 */
  if (!C.cf) goto L_12906275;
  /* 12906265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906268 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1290626b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290626e jne 0x12906275 */
  if (!C.zf) goto L_12906275;
  /* 12906270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906273 jmp 0x12906277 */
  goto L_12906277;
L_12906275:;
  /* 12906275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12906277:;
  /* 12906277 mov esp, ebp */
  ESP = (EBP);
  /* 12906279 pop ebp */
  EBP = (pop32());
  /* 1290627a ret  */
  ESPCHK(0x12906220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x12906280 (13 bytes, 6 insns) */
void f_12906280(void) {
  FTRACE(0x12906280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906280 push ebp */
  push32((uint32_t)(EBP));
  /* 12906281 mov ebp, esp */
  EBP = (ESP);
  /* 12906283 call 0x12902580 */
  push32(0x12906288u); f_12902580();
  /* 12906288 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290628b pop ebp */
  EBP = (pop32());
  /* 1290628c ret  */
  ESPCHK(0x12906280u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x12906290 (13 bytes, 6 insns) */
void f_12906290(void) {
  FTRACE(0x12906290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906290 push ebp */
  push32((uint32_t)(EBP));
  /* 12906291 mov ebp, esp */
  EBP = (ESP);
  /* 12906293 call 0x12902580 */
  push32(0x12906298u); f_12902580();
  /* 12906298 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290629b pop ebp */
  EBP = (pop32());
  /* 1290629c ret  */
  ESPCHK(0x12906290u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x129062a0 (187 bytes, 54 insns) */
void f_129062a0(void) {
  FTRACE(0x129062a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129062a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129062a1 mov ebp, esp */
  EBP = (ESP);
  /* 129062a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129062a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129062ad cmp dword ptr [0x1292e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129062b4 jne 0x12906313 */
  if (!C.zf) goto L_12906313;
  /* 129062b6 push 0x12929220 */
  push32((uint32_t)(0x12929220u));
  /* 129062bb call dword ptr [0x12930274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930274))), 0x129062c1u);
  /* 129062c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129062c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129062c8 je 0x129062e7 */
  if (C.zf) goto L_129062e7;
  /* 129062ca push 0x12929e24 */
  push32((uint32_t)(0x12929e24u));
  /* 129062cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129062d2 push eax */
  push32((uint32_t)(EAX));
  /* 129062d3 call dword ptr [0x12930270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930270))), 0x129062d9u);
  /* 129062d9 mov dword ptr [0x1292e600], eax */
  w32((uint32_t)(0x1292e600), (EAX));
  /* 129062de cmp dword ptr [0x1292e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129062e5 jne 0x129062eb */
  if (!C.zf) goto L_129062eb;
L_129062e7:;
  /* 129062e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129062e9 jmp 0x12906357 */
  goto L_12906357;
L_129062eb:;
  /* 129062eb push 0x12929e14 */
  push32((uint32_t)(0x12929e14u));
  /* 129062f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129062f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129062f4 call dword ptr [0x12930270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930270))), 0x129062fau);
  /* 129062fa mov dword ptr [0x1292e604], eax */
  w32((uint32_t)(0x1292e604), (EAX));
  /* 129062ff push 0x12929e00 */
  push32((uint32_t)(0x12929e00u));
  /* 12906304 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906307 push edx */
  push32((uint32_t)(EDX));
  /* 12906308 call dword ptr [0x12930270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930270))), 0x1290630eu);
  /* 1290630e mov dword ptr [0x1292e608], eax */
  w32((uint32_t)(0x1292e608), (EAX));
L_12906313:;
  /* 12906313 cmp dword ptr [0x1292e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290631a je 0x12906325 */
  if (C.zf) goto L_12906325;
  /* 1290631c call dword ptr [0x1292e604] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e604))), 0x12906322u);
  /* 12906322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12906325:;
  /* 12906325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906329 je 0x12906341 */
  if (C.zf) goto L_12906341;
  /* 1290632b cmp dword ptr [0x1292e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906332 je 0x12906341 */
  if (C.zf) goto L_12906341;
  /* 12906334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906337 push eax */
  push32((uint32_t)(EAX));
  /* 12906338 call dword ptr [0x1292e608] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e608))), 0x1290633eu);
  /* 1290633e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12906341:;
  /* 12906341 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12906344 push ecx */
  push32((uint32_t)(ECX));
  /* 12906345 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906348 push edx */
  push32((uint32_t)(EDX));
  /* 12906349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290634c push eax */
  push32((uint32_t)(EAX));
  /* 1290634d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906350 push ecx */
  push32((uint32_t)(ECX));
  /* 12906351 call dword ptr [0x1292e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e600))), 0x12906357u);
L_12906357:;
  /* 12906357 mov esp, ebp */
  ESP = (EBP);
  /* 12906359 pop ebp */
  EBP = (pop32());
  /* 1290635a ret  */
  ESPCHK(0x129062a0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12906360 (254 bytes, 109 insns) */
void f_12906360(void) {
  FTRACE(0x12906360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906360 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12906364 push edi */
  push32((uint32_t)(EDI));
  /* 12906365 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12906367 je 0x129063e3 */
  if (C.zf) goto L_129063e3;
  /* 12906369 push esi */
  push32((uint32_t)(ESI));
  /* 1290636a push ebx */
  push32((uint32_t)(EBX));
  /* 1290636b mov ebx, ecx */
  EBX = (ECX);
  /* 1290636d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12906371 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12906377 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1290637b jne 0x12906384 */
  if (!C.zf) goto L_12906384;
  /* 1290637d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12906380 jne 0x129063f1 */
  if (!C.zf) goto L_129063f1;
  /* 12906382 jmp 0x129063a5 */
  goto L_129063a5;
L_12906384:;
  /* 12906384 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12906386 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12906387 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12906389 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1290638a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1290638b je 0x129063b2 */
  if (C.zf) goto L_129063b2;
  /* 1290638d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1290638f je 0x129063ba */
  if (C.zf) goto L_129063ba;
  /* 12906391 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12906397 jne 0x12906384 */
  if (!C.zf) goto L_12906384;
  /* 12906399 mov ebx, ecx */
  EBX = (ECX);
  /* 1290639b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290639e jne 0x129063f1 */
  if (!C.zf) goto L_129063f1;
L_129063a0:;
  /* 129063a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 129063a3 je 0x129063b2 */
  if (C.zf) goto L_129063b2;
L_129063a5:;
  /* 129063a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129063a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129063a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129063aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129063ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129063ad je 0x129063de */
  if (C.zf) goto L_129063de;
  /* 129063af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 129063b0 jne 0x129063a5 */
  if (!C.zf) goto L_129063a5;
L_129063b2:;
  /* 129063b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129063b6 pop ebx */
  EBX = (pop32());
  /* 129063b7 pop esi */
  ESI = (pop32());
  /* 129063b8 pop edi */
  EDI = (pop32());
  /* 129063b9 ret  */
  ESPCHK(0x12906360u, _esp0);
  ESP += 4; return;
L_129063ba:;
  /* 129063ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129063c0 je 0x129063d4 */
  if (C.zf) goto L_129063d4;
L_129063c2:;
  /* 129063c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129063c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129063c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129063c6 je 0x12906456 */
  if (C.zf) goto L_12906456;
  /* 129063cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129063d2 jne 0x129063c2 */
  if (!C.zf) goto L_129063c2;
L_129063d4:;
  /* 129063d4 mov ebx, ecx */
  EBX = (ECX);
  /* 129063d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129063d9 jne 0x12906447 */
  if (!C.zf) goto L_12906447;
L_129063db:;
  /* 129063db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129063dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_129063de:;
  /* 129063de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 129063df jne 0x129063db */
  if (!C.zf) goto L_129063db;
  /* 129063e1 pop ebx */
  EBX = (pop32());
  /* 129063e2 pop esi */
  ESI = (pop32());
L_129063e3:;
  /* 129063e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129063e7 pop edi */
  EDI = (pop32());
  /* 129063e8 ret  */
  ESPCHK(0x12906360u, _esp0);
  ESP += 4; return;
L_129063e9:;
  /* 129063e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129063eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129063ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129063ef je 0x129063a0 */
  if (C.zf) goto L_129063a0;
L_129063f1:;
  /* 129063f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 129063f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 129063f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129063fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129063fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129063ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12906401 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12906404 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12906409 je 0x129063e9 */
  if (C.zf) goto L_129063e9;
  /* 1290640b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1290640d je 0x1290643b */
  if (C.zf) goto L_1290643b;
  /* 1290640f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12906411 je 0x12906431 */
  if (C.zf) goto L_12906431;
  /* 12906413 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12906419 je 0x12906427 */
  if (C.zf) goto L_12906427;
  /* 1290641b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12906421 jne 0x129063e9 */
  if (!C.zf) goto L_129063e9;
  /* 12906423 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12906425 jmp 0x1290643f */
  goto L_1290643f;
L_12906427:;
  /* 12906427 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1290642d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1290642f jmp 0x1290643f */
  goto L_1290643f;
L_12906431:;
  /* 12906431 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12906437 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12906439 jmp 0x1290643f */
  goto L_1290643f;
L_1290643b:;
  /* 1290643b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290643d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1290643f:;
  /* 1290643f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12906442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12906444 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12906445 je 0x12906451 */
  if (C.zf) goto L_12906451;
L_12906447:;
  /* 12906447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12906449:;
  /* 12906449 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1290644b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290644e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1290644f jne 0x12906449 */
  if (!C.zf) goto L_12906449;
L_12906451:;
  /* 12906451 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12906454 jne 0x129063db */
  if (!C.zf) goto L_129063db;
L_12906456:;
  /* 12906456 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1290645a pop ebx */
  EBX = (pop32());
  /* 1290645b pop esi */
  ESI = (pop32());
  /* 1290645c pop edi */
  EDI = (pop32());
  /* 1290645d ret  */
  ESPCHK(0x12906360u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x12906460 (55 bytes, 16 insns) */
void f_12906460(void) {
  FTRACE(0x12906460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906460 push ebp */
  push32((uint32_t)(EBP));
  /* 12906461 mov ebp, esp */
  EBP = (ESP);
  /* 12906463 mov eax, dword ptr [0x1292cb84] */
  EAX = (r32((uint32_t)(0x1292cb84)));
  /* 12906468 push eax */
  push32((uint32_t)(EAX));
  /* 12906469 call dword ptr [0x129302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f0))), 0x1290646fu);
  /* 1290646f mov ecx, dword ptr [0x1292cb74] */
  ECX = (r32((uint32_t)(0x1292cb74)));
  /* 12906475 push ecx */
  push32((uint32_t)(ECX));
  /* 12906476 call dword ptr [0x129302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f0))), 0x1290647cu);
  /* 1290647c mov edx, dword ptr [0x1292cb64] */
  EDX = (r32((uint32_t)(0x1292cb64)));
  /* 12906482 push edx */
  push32((uint32_t)(EDX));
  /* 12906483 call dword ptr [0x129302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f0))), 0x12906489u);
  /* 12906489 mov eax, dword ptr [0x1292cb44] */
  EAX = (r32((uint32_t)(0x1292cb44)));
  /* 1290648e push eax */
  push32((uint32_t)(EAX));
  /* 1290648f call dword ptr [0x129302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f0))), 0x12906495u);
  /* 12906495 pop ebp */
  EBP = (pop32());
  /* 12906496 ret  */
  ESPCHK(0x12906460u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x129064a0 (159 bytes, 47 insns) */
void f_129064a0(void) {
  FTRACE(0x129064a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129064a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129064a1 mov ebp, esp */
  EBP = (ESP);
  /* 129064a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129064a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129064ab jmp 0x129064b6 */
  goto L_129064b6;
L_129064ad:;
  /* 129064ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129064b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129064b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129064b6:;
  /* 129064b6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129064ba jge 0x12906509 */
  if ((C.sf==C.of)) goto L_12906509;
  /* 129064bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129064bf cmp dword ptr [ecx*4 + 0x1292cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1292cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129064c7 je 0x12906507 */
  if (C.zf) goto L_12906507;
  /* 129064c9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129064cd je 0x12906507 */
  if (C.zf) goto L_12906507;
  /* 129064cf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129064d3 je 0x12906507 */
  if (C.zf) goto L_12906507;
  /* 129064d5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129064d9 je 0x12906507 */
  if (C.zf) goto L_12906507;
  /* 129064db cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129064df je 0x12906507 */
  if (C.zf) goto L_12906507;
  /* 129064e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129064e4 mov eax, dword ptr [edx*4 + 0x1292cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292cb40)));
  /* 129064eb push eax */
  push32((uint32_t)(EAX));
  /* 129064ec call dword ptr [0x129302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b8))), 0x129064f2u);
  /* 129064f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129064f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129064f7 mov edx, dword ptr [ecx*4 + 0x1292cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292cb40)));
  /* 129064fe push edx */
  push32((uint32_t)(EDX));
  /* 129064ff call 0x129035d0 */
  push32(0x12906504u); f_129035d0();
  /* 12906504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12906507:;
  /* 12906507 jmp 0x129064ad */
  goto L_129064ad;
L_12906509:;
  /* 12906509 mov eax, dword ptr [0x1292cb64] */
  EAX = (r32((uint32_t)(0x1292cb64)));
  /* 1290650e push eax */
  push32((uint32_t)(EAX));
  /* 1290650f call dword ptr [0x129302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b8))), 0x12906515u);
  /* 12906515 mov ecx, dword ptr [0x1292cb74] */
  ECX = (r32((uint32_t)(0x1292cb74)));
  /* 1290651b push ecx */
  push32((uint32_t)(ECX));
  /* 1290651c call dword ptr [0x129302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b8))), 0x12906522u);
  /* 12906522 mov edx, dword ptr [0x1292cb84] */
  EDX = (r32((uint32_t)(0x1292cb84)));
  /* 12906528 push edx */
  push32((uint32_t)(EDX));
  /* 12906529 call dword ptr [0x129302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b8))), 0x1290652fu);
  /* 1290652f mov eax, dword ptr [0x1292cb44] */
  EAX = (r32((uint32_t)(0x1292cb44)));
  /* 12906534 push eax */
  push32((uint32_t)(EAX));
  /* 12906535 call dword ptr [0x129302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b8))), 0x1290653bu);
  /* 1290653b mov esp, ebp */
  ESP = (EBP);
  /* 1290653d pop ebp */
  EBP = (pop32());
  /* 1290653e ret  */
  ESPCHK(0x129064a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x12906540 (151 bytes, 46 insns) */
void f_12906540(void) {
  FTRACE(0x12906540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906540 push ebp */
  push32((uint32_t)(EBP));
  /* 12906541 mov ebp, esp */
  EBP = (ESP);
  /* 12906543 push ecx */
  push32((uint32_t)(ECX));
  /* 12906544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906547 cmp dword ptr [eax*4 + 0x1292cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1292cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290654f jne 0x129065c2 */
  if (!C.zf) goto L_129065c2;
  /* 12906551 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12906556 push 0x12929e30 */
  push32((uint32_t)(0x12929e30u));
  /* 1290655b push 2 */
  push32((uint32_t)(0x2u));
  /* 1290655d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1290655f call 0x12902b40 */
  push32(0x12906564u); f_12902b40();
  /* 12906564 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906567 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290656a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290656e jne 0x1290657a */
  if (!C.zf) goto L_1290657a;
  /* 12906570 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12906572 call 0x12901ab0 */
  push32(0x12906577u); f_12901ab0();
  /* 12906577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290657a:;
  /* 1290657a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1290657c call 0x12906540 */
  push32(0x12906581u); f_12906540();
  /* 12906581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906587 cmp dword ptr [ecx*4 + 0x1292cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1292cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290658f jne 0x129065aa */
  if (!C.zf) goto L_129065aa;
  /* 12906591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906594 push edx */
  push32((uint32_t)(EDX));
  /* 12906595 call dword ptr [0x129302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f0))), 0x1290659bu);
  /* 1290659b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290659e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129065a1 mov dword ptr [eax*4 + 0x1292cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1292cb40), (ECX));
  /* 129065a8 jmp 0x129065b8 */
  goto L_129065b8;
L_129065aa:;
  /* 129065aa push 2 */
  push32((uint32_t)(0x2u));
  /* 129065ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129065af push edx */
  push32((uint32_t)(EDX));
  /* 129065b0 call 0x129035d0 */
  push32(0x129065b5u); f_129035d0();
  /* 129065b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129065b8:;
  /* 129065b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129065ba call 0x129065e0 */
  push32(0x129065bfu); f_129065e0();
  /* 129065bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129065c2:;
  /* 129065c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129065c5 mov ecx, dword ptr [eax*4 + 0x1292cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292cb40)));
  /* 129065cc push ecx */
  push32((uint32_t)(ECX));
  /* 129065cd call dword ptr [0x129302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f4))), 0x129065d3u);
  /* 129065d3 mov esp, ebp */
  ESP = (EBP);
  /* 129065d5 pop ebp */
  EBP = (pop32());
  /* 129065d6 ret  */
  ESPCHK(0x12906540u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x129065e0 (22 bytes, 8 insns) */
void f_129065e0(void) {
  FTRACE(0x129065e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129065e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129065e1 mov ebp, esp */
  EBP = (ESP);
  /* 129065e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129065e6 mov ecx, dword ptr [eax*4 + 0x1292cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1292cb40)));
  /* 129065ed push ecx */
  push32((uint32_t)(ECX));
  /* 129065ee call dword ptr [0x129302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f8))), 0x129065f4u);
  /* 129065f4 pop ebp */
  EBP = (pop32());
  /* 129065f5 ret  */
  ESPCHK(0x129065e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x12906600 (26 bytes, 10 insns) */
void f_12906600(void) {
  FTRACE(0x12906600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906600 push ebp */
  push32((uint32_t)(EBP));
  /* 12906601 mov ebp, esp */
  EBP = (ESP);
  /* 12906603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906606 push eax */
  push32((uint32_t)(EAX));
  /* 12906607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12906609 call dword ptr [0x129302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302fc))), 0x1290660fu);
  /* 1290660f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12906614 call dword ptr [0x12930280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930280))), 0x1290661au);
  /* 1290661a pop ebp */
  EBP = (pop32());
  /* 1290661b ret  */
  ESPCHK(0x12906600u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12906620 (446 bytes, 130 insns) */
void f_12906620(void) {
  FTRACE(0x12906620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906620 push ebp */
  push32((uint32_t)(EBP));
  /* 12906621 mov ebp, esp */
  EBP = (ESP);
  /* 12906623 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906626 call 0x12902580 */
  push32(0x1290662bu); f_12902580();
  /* 1290662b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290662e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906631 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12906634 push ecx */
  push32((uint32_t)(ECX));
  /* 12906635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906638 push edx */
  push32((uint32_t)(EDX));
  /* 12906639 call 0x129067e0 */
  push32(0x1290663eu); f_129067e0();
  /* 1290663e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906641 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12906644 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906648 je 0x12906653 */
  if (C.zf) goto L_12906653;
  /* 1290664a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290664d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906651 jne 0x12906662 */
  if (!C.zf) goto L_12906662;
L_12906653:;
  /* 12906653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906656 push ecx */
  push32((uint32_t)(ECX));
  /* 12906657 call dword ptr [0x12930300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930300))), 0x1290665du);
  /* 1290665d jmp 0x129067da */
  goto L_129067da;
L_12906662:;
  /* 12906662 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906665 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906669 jne 0x1290667f */
  if (!C.zf) goto L_1290667f;
  /* 1290666b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290666e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12906675 mov eax, 1 */
  EAX = (0x1u);
  /* 1290667a jmp 0x129067da */
  goto L_129067da;
L_1290667f:;
  /* 1290667f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906682 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906686 jne 0x12906690 */
  if (!C.zf) goto L_12906690;
  /* 12906688 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290668b jmp 0x129067da */
  goto L_129067da;
L_12906690:;
  /* 12906690 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906693 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12906696 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12906699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290669c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1290669f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129066a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129066a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129066a8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 129066ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129066ae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129066b2 jne 0x129067b7 */
  if (!C.zf) goto L_129067b7;
  /* 129066b8 mov eax, dword ptr [0x1292cc78] */
  EAX = (r32((uint32_t)(0x1292cc78)));
  /* 129066bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 129066c0 jmp 0x129066cb */
  goto L_129066cb;
L_129066c2:;
  /* 129066c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129066c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129066c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_129066cb:;
  /* 129066cb mov edx, dword ptr [0x1292cc78] */
  EDX = (r32((uint32_t)(0x1292cc78)));
  /* 129066d1 add edx, dword ptr [0x1292cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129066d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129066da jge 0x129066f2 */
  if ((C.sf==C.of)) goto L_129066f2;
  /* 129066dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129066df imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129066e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129066e5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 129066e8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 129066f0 jmp 0x129066c2 */
  goto L_129066c2;
L_129066f2:;
  /* 129066f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129066f5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 129066f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129066fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129066fe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906704 jne 0x12906715 */
  if (!C.zf) goto L_12906715;
  /* 12906706 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906709 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12906710 jmp 0x1290679d */
  goto L_1290679d;
L_12906715:;
  /* 12906715 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906718 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290671e jne 0x1290672c */
  if (!C.zf) goto L_1290672c;
  /* 12906720 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906723 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1290672a jmp 0x1290679d */
  goto L_1290679d;
L_1290672c:;
  /* 1290672c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290672f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906735 jne 0x12906743 */
  if (!C.zf) goto L_12906743;
  /* 12906737 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290673a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12906741 jmp 0x1290679d */
  goto L_1290679d;
L_12906743:;
  /* 12906743 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906746 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290674c jne 0x1290675a */
  if (!C.zf) goto L_1290675a;
  /* 1290674e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906751 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12906758 jmp 0x1290679d */
  goto L_1290679d;
L_1290675a:;
  /* 1290675a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290675d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906763 jne 0x12906771 */
  if (!C.zf) goto L_12906771;
  /* 12906765 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906768 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1290676f jmp 0x1290679d */
  goto L_1290679d;
L_12906771:;
  /* 12906771 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906774 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290677a jne 0x12906788 */
  if (!C.zf) goto L_12906788;
  /* 1290677c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290677f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12906786 jmp 0x1290679d */
  goto L_1290679d;
L_12906788:;
  /* 12906788 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290678b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906791 jne 0x1290679d */
  if (!C.zf) goto L_1290679d;
  /* 12906793 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906796 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1290679d:;
  /* 1290679d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129067a0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 129067a3 push edx */
  push32((uint32_t)(EDX));
  /* 129067a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 129067a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129067a9u);
  /* 129067a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129067ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129067af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129067b2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 129067b5 jmp 0x129067ce */
  goto L_129067ce;
L_129067b7:;
  /* 129067b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129067ba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 129067c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129067c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129067c7 push ecx */
  push32((uint32_t)(ECX));
  /* 129067c8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x129067cbu);
  /* 129067cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129067ce:;
  /* 129067ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129067d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129067d4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 129067d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_129067da:;
  /* 129067da mov esp, ebp */
  ESP = (EBP);
  /* 129067dc pop ebp */
  EBP = (pop32());
  /* 129067dd ret  */
  ESPCHK(0x12906620u, _esp0);
  ESP += 4; return;
}

/* FUN_100067e0 @ 0x129067e0 (89 bytes, 35 insns) */
void f_129067e0(void) {
  FTRACE(0x129067e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129067e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129067e1 mov ebp, esp */
  EBP = (ESP);
  /* 129067e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129067e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129067e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129067ea:;
  /* 129067ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129067ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129067ef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129067f2 je 0x12906812 */
  if (C.zf) goto L_12906812;
  /* 129067f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129067f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129067fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129067fd mov ecx, dword ptr [0x1292cc84] */
  ECX = (r32((uint32_t)(0x1292cc84)));
  /* 12906803 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12906806 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906809 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290680b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290680e jae 0x12906812 */
  if (!C.cf) goto L_12906812;
  /* 12906810 jmp 0x129067ea */
  goto L_129067ea;
L_12906812:;
  /* 12906812 mov eax, dword ptr [0x1292cc84] */
  EAX = (r32((uint32_t)(0x1292cc84)));
  /* 12906817 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290681a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290681d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290681f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906822 jae 0x1290682e */
  if (!C.cf) goto L_1290682e;
  /* 12906824 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906827 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12906829 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290682c je 0x12906832 */
  if (C.zf) goto L_12906832;
L_1290682e:;
  /* 1290682e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12906830 jmp 0x12906835 */
  goto L_12906835;
L_12906832:;
  /* 12906832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12906835:;
  /* 12906835 mov esp, ebp */
  ESP = (EBP);
  /* 12906837 pop ebp */
  EBP = (pop32());
  /* 12906838 ret  */
  ESPCHK(0x129067e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12906840 (48 bytes, 17 insns) */
void f_12906840(void) {
  FTRACE(0x12906840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906840 push ebp */
  push32((uint32_t)(EBP));
  /* 12906841 mov ebp, esp */
  EBP = (ESP);
  /* 12906843 push ecx */
  push32((uint32_t)(ECX));
  /* 12906844 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906846 call 0x12906540 */
  push32(0x1290684bu); f_12906540();
  /* 1290684b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290684e mov eax, dword ptr [0x1292e674] */
  EAX = (r32((uint32_t)(0x1292e674)));
  /* 12906853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12906856 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906859 mov dword ptr [0x1292e674], ecx */
  w32((uint32_t)(0x1292e674), (ECX));
  /* 1290685f push 9 */
  push32((uint32_t)(0x9u));
  /* 12906861 call 0x129065e0 */
  push32(0x12906866u); f_129065e0();
  /* 12906866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290686c mov esp, ebp */
  ESP = (EBP);
  /* 1290686e pop ebp */
  EBP = (pop32());
  /* 1290686f ret  */
  ESPCHK(0x12906840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x12906870 (10 bytes, 5 insns) */
void f_12906870(void) {
  FTRACE(0x12906870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906870 push ebp */
  push32((uint32_t)(EBP));
  /* 12906871 mov ebp, esp */
  EBP = (ESP);
  /* 12906873 mov eax, dword ptr [0x1292e674] */
  EAX = (r32((uint32_t)(0x1292e674)));
  /* 12906878 pop ebp */
  EBP = (pop32());
  /* 12906879 ret  */
  ESPCHK(0x12906870u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12906880 (45 bytes, 19 insns) */
void f_12906880(void) {
  FTRACE(0x12906880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906880 push ebp */
  push32((uint32_t)(EBP));
  /* 12906881 mov ebp, esp */
  EBP = (ESP);
  /* 12906883 push ecx */
  push32((uint32_t)(ECX));
  /* 12906884 mov eax, dword ptr [0x1292e674] */
  EAX = (r32((uint32_t)(0x1292e674)));
  /* 12906889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290688c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906890 je 0x129068a0 */
  if (C.zf) goto L_129068a0;
  /* 12906892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906895 push ecx */
  push32((uint32_t)(ECX));
  /* 12906896 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12906899u);
  /* 12906899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290689c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290689e jne 0x129068a4 */
  if (!C.zf) goto L_129068a4;
L_129068a0:;
  /* 129068a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129068a2 jmp 0x129068a9 */
  goto L_129068a9;
L_129068a4:;
  /* 129068a4 mov eax, 1 */
  EAX = (0x1u);
L_129068a9:;
  /* 129068a9 mov esp, ebp */
  ESP = (EBP);
  /* 129068ab pop ebp */
  EBP = (pop32());
  /* 129068ac ret  */
  ESPCHK(0x12906880u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x129068b0 (88 bytes, 40 insns) */
void f_129068b0(void) {
  FTRACE(0x129068b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129068b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 129068b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129068b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129068ba je 0x12906903 */
  if (C.zf) goto L_12906903;
  /* 129068bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129068be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 129068c2 push edi */
  push32((uint32_t)(EDI));
  /* 129068c3 mov edi, ecx */
  EDI = (ECX);
  /* 129068c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129068c8 jb 0x129068f7 */
  if (C.cf) goto L_129068f7;
  /* 129068ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129068cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 129068cf je 0x129068d9 */
  if (C.zf) goto L_129068d9;
  /* 129068d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_129068d3:;
  /* 129068d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129068d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129068d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129068d7 jne 0x129068d3 */
  if (!C.zf) goto L_129068d3;
L_129068d9:;
  /* 129068d9 mov ecx, eax */
  ECX = (EAX);
  /* 129068db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 129068de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129068e0 mov ecx, eax */
  ECX = (EAX);
  /* 129068e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 129068e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129068e7 mov ecx, edx */
  ECX = (EDX);
  /* 129068e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129068ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129068ef je 0x129068f7 */
  if (C.zf) goto L_129068f7;
  /* 129068f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129068f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129068f5 je 0x129068fd */
  if (C.zf) goto L_129068fd;
L_129068f7:;
  /* 129068f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129068f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129068fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 129068fb jne 0x129068f7 */
  if (!C.zf) goto L_129068f7;
L_129068fd:;
  /* 129068fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12906901 pop edi */
  EDI = (pop32());
  /* 12906902 ret  */
  ESPCHK(0x129068b0u, _esp0);
  ESP += 4; return;
L_12906903:;
  /* 12906903 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12906907 ret  */
  ESPCHK(0x129068b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x12906910 (23 bytes, 10 insns) */
void f_12906910(void) {
  FTRACE(0x12906910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906910 push ebp */
  push32((uint32_t)(EBP));
  /* 12906911 mov ebp, esp */
  EBP = (ESP);
  /* 12906913 mov eax, dword ptr [0x1292e670] */
  EAX = (r32((uint32_t)(0x1292e670)));
  /* 12906918 push eax */
  push32((uint32_t)(EAX));
  /* 12906919 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290691c push ecx */
  push32((uint32_t)(ECX));
  /* 1290691d call 0x12906930 */
  push32(0x12906922u); f_12906930();
  /* 12906922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906925 pop ebp */
  EBP = (pop32());
  /* 12906926 ret  */
  ESPCHK(0x12906910u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12906930 (87 bytes, 34 insns) */
void f_12906930(void) {
  FTRACE(0x12906930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906930 push ebp */
  push32((uint32_t)(EBP));
  /* 12906931 mov ebp, esp */
  EBP = (ESP);
  /* 12906933 push ecx */
  push32((uint32_t)(ECX));
  /* 12906934 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906938 jbe 0x1290693e */
  if ((C.cf||C.zf)) goto L_1290693e;
  /* 1290693a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290693c jmp 0x12906983 */
  goto L_12906983;
L_1290693e:;
  /* 1290693e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906942 ja 0x12906955 */
  if ((!C.cf&&!C.zf)) goto L_12906955;
  /* 12906944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906947 push eax */
  push32((uint32_t)(EAX));
  /* 12906948 call 0x12906990 */
  push32(0x1290694du); f_12906990();
  /* 1290694d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906950 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12906953 jmp 0x1290695c */
  goto L_1290695c;
L_12906955:;
  /* 12906955 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1290695c:;
  /* 1290695c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906960 jne 0x12906968 */
  if (!C.zf) goto L_12906968;
  /* 12906962 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906966 jne 0x1290696d */
  if (!C.zf) goto L_1290696d;
L_12906968:;
  /* 12906968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290696b jmp 0x12906983 */
  goto L_12906983;
L_1290696d:;
  /* 1290696d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906970 push ecx */
  push32((uint32_t)(ECX));
  /* 12906971 call 0x12906880 */
  push32(0x12906976u); f_12906880();
  /* 12906976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290697b jne 0x12906981 */
  if (!C.zf) goto L_12906981;
  /* 1290697d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290697f jmp 0x12906983 */
  goto L_12906983;
L_12906981:;
  /* 12906981 jmp 0x1290693e */
  goto L_1290693e;
L_12906983:;
  /* 12906983 mov esp, ebp */
  ESP = (EBP);
  /* 12906985 pop ebp */
  EBP = (pop32());
  /* 12906986 ret  */
  ESPCHK(0x12906930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x12906990 (109 bytes, 37 insns) */
void f_12906990(void) {
  FTRACE(0x12906990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906990 push ebp */
  push32((uint32_t)(EBP));
  /* 12906991 mov ebp, esp */
  EBP = (ESP);
  /* 12906993 push ecx */
  push32((uint32_t)(ECX));
  /* 12906994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906997 cmp eax, dword ptr [0x1292cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290699d ja 0x129069cd */
  if ((!C.cf&&!C.zf)) goto L_129069cd;
  /* 1290699f push 9 */
  push32((uint32_t)(0x9u));
  /* 129069a1 call 0x12906540 */
  push32(0x129069a6u); f_12906540();
  /* 129069a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129069a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129069ac push ecx */
  push32((uint32_t)(ECX));
  /* 129069ad call 0x129074d0 */
  push32(0x129069b2u); f_129074d0();
  /* 129069b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129069b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129069b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 129069ba call 0x129065e0 */
  push32(0x129069bfu); f_129065e0();
  /* 129069bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129069c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129069c6 je 0x129069cd */
  if (C.zf) goto L_129069cd;
  /* 129069c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129069cb jmp 0x129069f9 */
  goto L_129069f9;
L_129069cd:;
  /* 129069cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129069d1 jne 0x129069da */
  if (!C.zf) goto L_129069da;
  /* 129069d3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_129069da:;
  /* 129069da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129069dd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129069e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 129069e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129069e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129069e9 push eax */
  push32((uint32_t)(EAX));
  /* 129069ea push 0 */
  push32((uint32_t)(0x0u));
  /* 129069ec mov ecx, dword ptr [0x1292fe2c] */
  ECX = (r32((uint32_t)(0x1292fe2c)));
  /* 129069f2 push ecx */
  push32((uint32_t)(ECX));
  /* 129069f3 call dword ptr [0x12930304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930304))), 0x129069f9u);
L_129069f9:;
  /* 129069f9 mov esp, ebp */
  ESP = (EBP);
  /* 129069fb pop ebp */
  EBP = (pop32());
  /* 129069fc ret  */
  ESPCHK(0x12906990u, _esp0);
  ESP += 4; return;
}

