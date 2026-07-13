#include "recomp.h"

/* thunk_FUN_10001790 @ 0x12821005 (5 bytes, 1 insns) */
void f_12821005(void) {
  FTRACE(0x12821005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821005 jmp 0x12821790 */
  f_12821790(); return;
}

/* OnInit @ 0x1282100a (5 bytes, 1 insns) */
void f_1282100a(void) {
  FTRACE(0x1282100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282100a jmp 0x128211b0 */
  f_128211b0(); return;
}

/* thunk_FUN_10001130 @ 0x1282100f (5 bytes, 1 insns) */
void f_1282100f(void) {
  FTRACE(0x1282100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282100f jmp 0x12821130 */
  f_12821130(); return;
}

/* thunk_FUN_10001050 @ 0x12821014 (5 bytes, 1 insns) */
void f_12821014(void) {
  FTRACE(0x12821014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821014 jmp 0x12821050 */
  f_12821050(); return;
}

/* thunk_FUN_100010b0 @ 0x12821019 (5 bytes, 1 insns) */
void f_12821019(void) {
  FTRACE(0x12821019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821019 jmp 0x128210b0 */
  f_128210b0(); return;
}

/* ProcessScenary @ 0x1282101e (5 bytes, 1 insns) */
void f_1282101e(void) {
  FTRACE(0x1282101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282101e jmp 0x12821390 */
  f_12821390(); return;
}

/* FUN_10001050 @ 0x12821050 (67 bytes, 26 insns) */
void f_12821050(void) {
  FTRACE(0x12821050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821050 push ebp */
  push32((uint32_t)(EBP));
  /* 12821051 mov ebp, esp */
  EBP = (ESP);
  /* 12821053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12821056 push ebx */
  push32((uint32_t)(EBX));
  /* 12821057 push esi */
  push32((uint32_t)(ESI));
  /* 12821058 push edi */
  push32((uint32_t)(EDI));
  /* 12821059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1282105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12821061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12821066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12821068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821072 je 0x12821076 */
  if (C.zf) goto L_12821076;
  /* 12821074 jmp 0x1282107b */
  goto L_1282107b;
L_12821076:;
  /* 12821076 call 0x1282100a */
  push32(0x1282107bu); f_1282100a();
L_1282107b:;
  /* 1282107b mov eax, 1 */
  EAX = (0x1u);
  /* 12821080 pop edi */
  EDI = (pop32());
  /* 12821081 pop esi */
  ESI = (pop32());
  /* 12821082 pop ebx */
  EBX = (pop32());
  /* 12821083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821088 call 0x12821830 */
  push32(0x1282108du); f_12821830();
  /* 1282108d mov esp, ebp */
  ESP = (EBP);
  /* 1282108f pop ebp */
  EBP = (pop32());
  /* 12821090 ret 0xc */
  ESPCHK(0x12821050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x128210b0 (92 bytes, 34 insns) */
void f_128210b0(void) {
  FTRACE(0x128210b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128210b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128210b1 mov ebp, esp */
  EBP = (ESP);
  /* 128210b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128210b6 push ebx */
  push32((uint32_t)(EBX));
  /* 128210b7 push esi */
  push32((uint32_t)(ESI));
  /* 128210b8 push edi */
  push32((uint32_t)(EDI));
  /* 128210b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128210bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128210c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128210c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128210c8 mov esi, esp */
  ESI = (ESP);
  /* 128210ca call dword ptr [0x128503cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503cc))), 0x128210d0u);
  /* 128210d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128210d2 call 0x12821830 */
  push32(0x128210d7u); f_12821830();
  /* 128210d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128210d9 jne 0x128210ec */
  if (!C.zf) goto L_128210ec;
  /* 128210db mov esi, esp */
  ESI = (ESP);
  /* 128210dd call dword ptr [0x128503d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503d0))), 0x128210e3u);
  /* 128210e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128210e5 call 0x12821830 */
  push32(0x128210eau); f_12821830();
  /* 128210ea jmp 0x128210fb */
  goto L_128210fb;
L_128210ec:;
  /* 128210ec mov esi, esp */
  ESI = (ESP);
  /* 128210ee call dword ptr [0x128503d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503d4))), 0x128210f4u);
  /* 128210f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128210f6 call 0x12821830 */
  push32(0x128210fbu); f_12821830();
L_128210fb:;
  /* 128210fb pop edi */
  EDI = (pop32());
  /* 128210fc pop esi */
  ESI = (pop32());
  /* 128210fd pop ebx */
  EBX = (pop32());
  /* 128210fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821103 call 0x12821830 */
  push32(0x12821108u); f_12821830();
  /* 12821108 mov esp, ebp */
  ESP = (EBP);
  /* 1282110a pop ebp */
  EBP = (pop32());
  /* 1282110b ret  */
  ESPCHK(0x128210b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12821130 (93 bytes, 34 insns) */
void f_12821130(void) {
  FTRACE(0x12821130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821130 push ebp */
  push32((uint32_t)(EBP));
  /* 12821131 mov ebp, esp */
  EBP = (ESP);
  /* 12821133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12821136 push ebx */
  push32((uint32_t)(EBX));
  /* 12821137 push esi */
  push32((uint32_t)(ESI));
  /* 12821138 push edi */
  push32((uint32_t)(EDI));
  /* 12821139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1282113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12821141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12821146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12821148 mov esi, esp */
  ESI = (ESP);
  /* 1282114a call dword ptr [0x128503cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503cc))), 0x12821150u);
  /* 12821150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821152 call 0x12821830 */
  push32(0x12821157u); f_12821830();
  /* 12821157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282115a jne 0x1282116d */
  if (!C.zf) goto L_1282116d;
  /* 1282115c mov esi, esp */
  ESI = (ESP);
  /* 1282115e call dword ptr [0x128503d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503d0))), 0x12821164u);
  /* 12821164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821166 call 0x12821830 */
  push32(0x1282116bu); f_12821830();
  /* 1282116b jmp 0x1282117c */
  goto L_1282117c;
L_1282116d:;
  /* 1282116d mov esi, esp */
  ESI = (ESP);
  /* 1282116f call dword ptr [0x128503d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503d4))), 0x12821175u);
  /* 12821175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821177 call 0x12821830 */
  push32(0x1282117cu); f_12821830();
L_1282117c:;
  /* 1282117c pop edi */
  EDI = (pop32());
  /* 1282117d pop esi */
  ESI = (pop32());
  /* 1282117e pop ebx */
  EBX = (pop32());
  /* 1282117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821184 call 0x12821830 */
  push32(0x12821189u); f_12821830();
  /* 12821189 mov esp, ebp */
  ESP = (EBP);
  /* 1282118b pop ebp */
  EBP = (pop32());
  /* 1282118c ret  */
  ESPCHK(0x12821130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x128211b0 (376 bytes, 101 insns) */
void f_128211b0(void) {
  FTRACE(0x128211b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128211b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128211b1 mov ebp, esp */
  EBP = (ESP);
  /* 128211b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128211b6 push ebx */
  push32((uint32_t)(EBX));
  /* 128211b7 push esi */
  push32((uint32_t)(ESI));
  /* 128211b8 push edi */
  push32((uint32_t)(EDI));
  /* 128211b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128211bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128211c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128211c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128211c8 mov esi, esp */
  ESI = (ESP);
  /* 128211ca push 0x1284904c */
  push32((uint32_t)(0x1284904cu));
  /* 128211cf push 0x1284e420 */
  push32((uint32_t)(0x1284e420u));
  /* 128211d4 call dword ptr [0x128503c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c0))), 0x128211dau);
  /* 128211da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128211dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128211df call 0x12821830 */
  push32(0x128211e4u); f_12821830();
  /* 128211e4 mov esi, esp */
  ESI = (ESP);
  /* 128211e6 push 0x12849044 */
  push32((uint32_t)(0x12849044u));
  /* 128211eb push 0x1284e428 */
  push32((uint32_t)(0x1284e428u));
  /* 128211f0 call dword ptr [0x128503c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c0))), 0x128211f6u);
  /* 128211f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128211f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128211fb call 0x12821830 */
  push32(0x12821200u); f_12821830();
  /* 12821200 mov esi, esp */
  ESI = (ESP);
  /* 12821202 push 0x1284903c */
  push32((uint32_t)(0x1284903cu));
  /* 12821207 push 0x1284e430 */
  push32((uint32_t)(0x1284e430u));
  /* 1282120c call dword ptr [0x128503c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c0))), 0x12821212u);
  /* 12821212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821217 call 0x12821830 */
  push32(0x1282121cu); f_12821830();
  /* 1282121c mov esi, esp */
  ESI = (ESP);
  /* 1282121e push 0x12849034 */
  push32((uint32_t)(0x12849034u));
  /* 12821223 push 0x1284e438 */
  push32((uint32_t)(0x1284e438u));
  /* 12821228 call dword ptr [0x128503c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c0))), 0x1282122eu);
  /* 1282122e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821231 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821233 call 0x12821830 */
  push32(0x12821238u); f_12821830();
  /* 12821238 mov esi, esp */
  ESI = (ESP);
  /* 1282123a push 0x1284902c */
  push32((uint32_t)(0x1284902cu));
  /* 1282123f push 0x1284e440 */
  push32((uint32_t)(0x1284e440u));
  /* 12821244 call dword ptr [0x128503c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c0))), 0x1282124au);
  /* 1282124a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282124d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282124f call 0x12821830 */
  push32(0x12821254u); f_12821830();
  /* 12821254 mov esi, esp */
  ESI = (ESP);
  /* 12821256 push 0x12849024 */
  push32((uint32_t)(0x12849024u));
  /* 1282125b push 0x1284e410 */
  push32((uint32_t)(0x1284e410u));
  /* 12821260 call dword ptr [0x128503c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c4))), 0x12821266u);
  /* 12821266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282126b call 0x12821830 */
  push32(0x12821270u); f_12821830();
  /* 12821270 mov esi, esp */
  ESI = (ESP);
  /* 12821272 push 0x1284901c */
  push32((uint32_t)(0x1284901cu));
  /* 12821277 push 0x1284e418 */
  push32((uint32_t)(0x1284e418u));
  /* 1282127c call dword ptr [0x128503c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c4))), 0x12821282u);
  /* 12821282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821287 call 0x12821830 */
  push32(0x1282128cu); f_12821830();
  /* 1282128c mov esi, esp */
  ESI = (ESP);
  /* 1282128e push 1 */
  push32((uint32_t)(0x1u));
  /* 12821290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12821292 call dword ptr [0x128503c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c8))), 0x12821298u);
  /* 12821298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282129b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282129d call 0x12821830 */
  push32(0x128212a2u); f_12821830();
  /* 128212a2 mov esi, esp */
  ESI = (ESP);
  /* 128212a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 128212a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 128212a8 call dword ptr [0x128503c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c8))), 0x128212aeu);
  /* 128212ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128212b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128212b3 call 0x12821830 */
  push32(0x128212b8u); f_12821830();
  /* 128212b8 mov esi, esp */
  ESI = (ESP);
  /* 128212ba push 0x83 */
  push32((uint32_t)(0x83u));
  /* 128212bf push 7 */
  push32((uint32_t)(0x7u));
  /* 128212c1 call dword ptr [0x128503c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503c8))), 0x128212c7u);
  /* 128212c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128212ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128212cc call 0x12821830 */
  push32(0x128212d1u); f_12821830();
  /* 128212d1 mov dword ptr [0x1284e3e0], 0 */
  w32((uint32_t)(0x1284e3e0), (0x0u));
  /* 128212db jmp 0x128212ea */
  goto L_128212ea;
L_128212dd:;
  /* 128212dd mov eax, dword ptr [0x1284e3e0] */
  EAX = (r32((uint32_t)(0x1284e3e0)));
  /* 128212e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128212e5 mov dword ptr [0x1284e3e0], eax */
  w32((uint32_t)(0x1284e3e0), (EAX));
L_128212ea:;
  /* 128212ea cmp dword ptr [0x1284e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1284e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128212f1 jge 0x12821317 */
  if ((C.sf==C.of)) goto L_12821317;
  /* 128212f3 mov ecx, dword ptr [0x1284e3e0] */
  ECX = (r32((uint32_t)(0x1284e3e0)));
  /* 128212f9 mov dword ptr [ecx*4 + 0x1284e3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x1284e3e4), (0x0u));
  /* 12821304 mov edx, dword ptr [0x1284e3e0] */
  EDX = (r32((uint32_t)(0x1284e3e0)));
  /* 1282130a mov dword ptr [edx*4 + 0x1284e3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x1284e3f8), (0x0u));
  /* 12821315 jmp 0x128212dd */
  goto L_128212dd;
L_12821317:;
  /* 12821317 pop edi */
  EDI = (pop32());
  /* 12821318 pop esi */
  ESI = (pop32());
  /* 12821319 pop ebx */
  EBX = (pop32());
  /* 1282131a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282131d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282131f call 0x12821830 */
  push32(0x12821324u); f_12821830();
  /* 12821324 mov esp, ebp */
  ESP = (EBP);
  /* 12821326 pop ebp */
  EBP = (pop32());
  /* 12821327 ret  */
  ESPCHK(0x128211b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001390 @ 0x12821390 (816 bytes, 216 insns) */
void f_12821390(void) {
  FTRACE(0x12821390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821390 push ebp */
  push32((uint32_t)(EBP));
  /* 12821391 mov ebp, esp */
  EBP = (ESP);
  /* 12821393 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12821396 push ebx */
  push32((uint32_t)(EBX));
  /* 12821397 push esi */
  push32((uint32_t)(ESI));
  /* 12821398 push edi */
  push32((uint32_t)(EDI));
  /* 12821399 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1282139c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128213a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128213a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128213a8 mov dword ptr [0x1284e3e0], 0 */
  w32((uint32_t)(0x1284e3e0), (0x0u));
  /* 128213b2 jmp 0x128213c1 */
  goto L_128213c1;
L_128213b4:;
  /* 128213b4 mov eax, dword ptr [0x1284e3e0] */
  EAX = (r32((uint32_t)(0x1284e3e0)));
  /* 128213b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128213bc mov dword ptr [0x1284e3e0], eax */
  w32((uint32_t)(0x1284e3e0), (EAX));
L_128213c1:;
  /* 128213c1 cmp dword ptr [0x1284e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1284e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128213c8 jge 0x128214ab */
  if ((C.sf==C.of)) goto L_128214ab;
  /* 128213ce mov esi, esp */
  ESI = (ESP);
  /* 128213d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128213d2 mov ecx, dword ptr [0x1284e3e0] */
  ECX = (r32((uint32_t)(0x1284e3e0)));
  /* 128213d8 lea edx, [ecx*8 + 0x1284e420] */
  EDX = ((uint32_t)(ECX*8 + 0x1284e420));
  /* 128213df push edx */
  push32((uint32_t)(EDX));
  /* 128213e0 call dword ptr [0x128503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503ac))), 0x128213e6u);
  /* 128213e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128213e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128213eb call 0x12821830 */
  push32(0x128213f0u); f_12821830();
  /* 128213f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128213f2 jle 0x1282143a */
  if ((C.zf||C.sf!=C.of)) goto L_1282143a;
  /* 128213f4 mov esi, esp */
  ESI = (ESP);
  /* 128213f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 128213f8 mov eax, dword ptr [0x1284e3e0] */
  EAX = (r32((uint32_t)(0x1284e3e0)));
  /* 128213fd lea ecx, [eax*8 + 0x1284e420] */
  ECX = ((uint32_t)(EAX*8 + 0x1284e420));
  /* 12821404 push ecx */
  push32((uint32_t)(ECX));
  /* 12821405 call dword ptr [0x128503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503ac))), 0x1282140bu);
  /* 1282140b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282140e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821410 call 0x12821830 */
  push32(0x12821415u); f_12821830();
  /* 12821415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821417 jne 0x1282143a */
  if (!C.zf) goto L_1282143a;
  /* 12821419 mov edx, dword ptr [0x1284e3e0] */
  EDX = (r32((uint32_t)(0x1284e3e0)));
  /* 1282141f mov dword ptr [edx*4 + 0x1284e3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x1284e3e4), (0x1u));
  /* 1282142a mov eax, dword ptr [0x1284e3e0] */
  EAX = (r32((uint32_t)(0x1284e3e0)));
  /* 1282142f mov dword ptr [eax*4 + 0x1284e3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x1284e3f8), (0x0u));
L_1282143a:;
  /* 1282143a mov esi, esp */
  ESI = (ESP);
  /* 1282143c push 1 */
  push32((uint32_t)(0x1u));
  /* 1282143e mov ecx, dword ptr [0x1284e3e0] */
  ECX = (r32((uint32_t)(0x1284e3e0)));
  /* 12821444 lea edx, [ecx*8 + 0x1284e420] */
  EDX = ((uint32_t)(ECX*8 + 0x1284e420));
  /* 1282144b push edx */
  push32((uint32_t)(EDX));
  /* 1282144c call dword ptr [0x128503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503ac))), 0x12821452u);
  /* 12821452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821457 call 0x12821830 */
  push32(0x1282145cu); f_12821830();
  /* 1282145c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282145e jle 0x128214a6 */
  if ((C.zf||C.sf!=C.of)) goto L_128214a6;
  /* 12821460 mov esi, esp */
  ESI = (ESP);
  /* 12821462 push 0 */
  push32((uint32_t)(0x0u));
  /* 12821464 mov eax, dword ptr [0x1284e3e0] */
  EAX = (r32((uint32_t)(0x1284e3e0)));
  /* 12821469 lea ecx, [eax*8 + 0x1284e420] */
  ECX = ((uint32_t)(EAX*8 + 0x1284e420));
  /* 12821470 push ecx */
  push32((uint32_t)(ECX));
  /* 12821471 call dword ptr [0x128503ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503ac))), 0x12821477u);
  /* 12821477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282147a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282147c call 0x12821830 */
  push32(0x12821481u); f_12821830();
  /* 12821481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821483 jne 0x128214a6 */
  if (!C.zf) goto L_128214a6;
  /* 12821485 mov edx, dword ptr [0x1284e3e0] */
  EDX = (r32((uint32_t)(0x1284e3e0)));
  /* 1282148b mov dword ptr [edx*4 + 0x1284e3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x1284e3e4), (0x0u));
  /* 12821496 mov eax, dword ptr [0x1284e3e0] */
  EAX = (r32((uint32_t)(0x1284e3e0)));
  /* 1282149b mov dword ptr [eax*4 + 0x1284e3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x1284e3f8), (0x1u));
L_128214a6:;
  /* 128214a6 jmp 0x128213b4 */
  goto L_128213b4;
L_128214ab:;
  /* 128214ab mov dword ptr [0x1284e448], 0 */
  w32((uint32_t)(0x1284e448), (0x0u));
  /* 128214b5 mov dword ptr [0x1284e44c], 0 */
  w32((uint32_t)(0x1284e44c), (0x0u));
  /* 128214bf mov dword ptr [0x1284e3e0], 0 */
  w32((uint32_t)(0x1284e3e0), (0x0u));
  /* 128214c9 jmp 0x128214da */
  goto L_128214da;
L_128214cb:;
  /* 128214cb mov ecx, dword ptr [0x1284e3e0] */
  ECX = (r32((uint32_t)(0x1284e3e0)));
  /* 128214d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128214d4 mov dword ptr [0x1284e3e0], ecx */
  w32((uint32_t)(0x1284e3e0), (ECX));
L_128214da:;
  /* 128214da cmp dword ptr [0x1284e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x1284e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128214e1 jge 0x12821515 */
  if ((C.sf==C.of)) goto L_12821515;
  /* 128214e3 mov edx, dword ptr [0x1284e3e0] */
  EDX = (r32((uint32_t)(0x1284e3e0)));
  /* 128214e9 mov eax, dword ptr [0x1284e448] */
  EAX = (r32((uint32_t)(0x1284e448)));
  /* 128214ee add eax, dword ptr [edx*4 + 0x1284e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1284e3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128214f5 mov dword ptr [0x1284e448], eax */
  w32((uint32_t)(0x1284e448), (EAX));
  /* 128214fa mov ecx, dword ptr [0x1284e3e0] */
  ECX = (r32((uint32_t)(0x1284e3e0)));
  /* 12821500 mov edx, dword ptr [0x1284e44c] */
  EDX = (r32((uint32_t)(0x1284e44c)));
  /* 12821506 add edx, dword ptr [ecx*4 + 0x1284e3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x1284e3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282150d mov dword ptr [0x1284e44c], edx */
  w32((uint32_t)(0x1284e44c), (EDX));
  /* 12821513 jmp 0x128214cb */
  goto L_128214cb;
L_12821515:;
  /* 12821515 cmp dword ptr [0x1284e448], 3 */
  { uint32_t _a=(r32((uint32_t)(0x1284e448))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282151c jl 0x12821523 */
  if ((C.sf!=C.of)) goto L_12821523;
  /* 1282151e call 0x12821019 */
  push32(0x12821523u); f_12821019();
L_12821523:;
  /* 12821523 mov esi, esp */
  ESI = (ESP);
  /* 12821525 push 0xa */
  push32((uint32_t)(0xau));
  /* 12821527 call dword ptr [0x128503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b0))), 0x1282152du);
  /* 1282152d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821532 call 0x12821830 */
  push32(0x12821537u); f_12821830();
  /* 12821537 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282153c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282153e je 0x12821585 */
  if (C.zf) goto L_12821585;
  /* 12821540 mov esi, esp */
  ESI = (ESP);
  /* 12821542 call dword ptr [0x128503b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b4))), 0x12821548u);
  /* 12821548 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282154a call 0x12821830 */
  push32(0x1282154fu); f_12821830();
  /* 1282154f cmp eax, 0x9470 */
  { uint32_t _a=(EAX),_b=(0x9470u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821554 jle 0x12821585 */
  if ((C.zf||C.sf!=C.of)) goto L_12821585;
  /* 12821556 mov esi, esp */
  ESI = (ESP);
  /* 12821558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282155a push 0xa */
  push32((uint32_t)(0xau));
  /* 1282155c call dword ptr [0x128503b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b8))), 0x12821562u);
  /* 12821562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821567 call 0x12821830 */
  push32(0x1282156cu); f_12821830();
  /* 1282156c mov esi, esp */
  ESI = (ESP);
  /* 1282156e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12821570 push 0x1284905c */
  push32((uint32_t)(0x1284905cu));
  /* 12821575 call dword ptr [0x128503bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503bc))), 0x1282157bu);
  /* 1282157b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282157e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821580 call 0x12821830 */
  push32(0x12821585u); f_12821830();
L_12821585:;
  /* 12821585 mov esi, esp */
  ESI = (ESP);
  /* 12821587 call dword ptr [0x128503b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b4))), 0x1282158du);
  /* 1282158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282158f call 0x12821830 */
  push32(0x12821594u); f_12821830();
  /* 12821594 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821599 jle 0x128215a0 */
  if ((C.zf||C.sf!=C.of)) goto L_128215a0;
  /* 1282159b call 0x1282100f */
  push32(0x128215a0u); f_1282100f();
L_128215a0:;
  /* 128215a0 mov esi, esp */
  ESI = (ESP);
  /* 128215a2 push 0xf */
  push32((uint32_t)(0xfu));
  /* 128215a4 call dword ptr [0x128503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b0))), 0x128215aau);
  /* 128215aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128215ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128215af call 0x12821830 */
  push32(0x128215b4u); f_12821830();
  /* 128215b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128215b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128215bb je 0x12821612 */
  if (C.zf) goto L_12821612;
  /* 128215bd push 0x1284e410 */
  push32((uint32_t)(0x1284e410u));
  /* 128215c2 call 0x12821005 */
  push32(0x128215c7u); f_12821005();
  /* 128215c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128215ca cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128215cd jge 0x12821612 */
  if ((C.sf==C.of)) goto L_12821612;
  /* 128215cf mov esi, esp */
  ESI = (ESP);
  /* 128215d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 128215d3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 128215d5 call dword ptr [0x128503b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b8))), 0x128215dbu);
  /* 128215db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128215de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128215e0 call 0x12821830 */
  push32(0x128215e5u); f_12821830();
  /* 128215e5 mov esi, esp */
  ESI = (ESP);
  /* 128215e7 call dword ptr [0x128503cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503cc))), 0x128215edu);
  /* 128215ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128215ef call 0x12821830 */
  push32(0x128215f4u); f_12821830();
  /* 128215f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128215f7 jne 0x12821612 */
  if (!C.zf) goto L_12821612;
  /* 128215f9 mov esi, esp */
  ESI = (ESP);
  /* 128215fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 128215fd push 0x12849054 */
  push32((uint32_t)(0x12849054u));
  /* 12821602 call dword ptr [0x128503bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503bc))), 0x12821608u);
  /* 12821608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282160b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282160d call 0x12821830 */
  push32(0x12821612u); f_12821830();
L_12821612:;
  /* 12821612 mov esi, esp */
  ESI = (ESP);
  /* 12821614 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12821616 call dword ptr [0x128503b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b0))), 0x1282161cu);
  /* 1282161c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282161f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821621 call 0x12821830 */
  push32(0x12821626u); f_12821830();
  /* 12821626 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282162b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282162d je 0x12821683 */
  if (C.zf) goto L_12821683;
  /* 1282162f push 0x1284e418 */
  push32((uint32_t)(0x1284e418u));
  /* 12821634 call 0x12821005 */
  push32(0x12821639u); f_12821005();
  /* 12821639 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282163c cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282163f jge 0x12821683 */
  if ((C.sf==C.of)) goto L_12821683;
  /* 12821641 mov esi, esp */
  ESI = (ESP);
  /* 12821643 push 0 */
  push32((uint32_t)(0x0u));
  /* 12821645 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12821647 call dword ptr [0x128503b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503b8))), 0x1282164du);
  /* 1282164d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821650 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821652 call 0x12821830 */
  push32(0x12821657u); f_12821830();
  /* 12821657 mov esi, esp */
  ESI = (ESP);
  /* 12821659 call dword ptr [0x128503cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503cc))), 0x1282165fu);
  /* 1282165f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821661 call 0x12821830 */
  push32(0x12821666u); f_12821830();
  /* 12821666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821668 jne 0x12821683 */
  if (!C.zf) goto L_12821683;
  /* 1282166a mov esi, esp */
  ESI = (ESP);
  /* 1282166c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1282166e push 0x12849054 */
  push32((uint32_t)(0x12849054u));
  /* 12821673 call dword ptr [0x128503bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503bc))), 0x12821679u);
  /* 12821679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282167c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282167e call 0x12821830 */
  push32(0x12821683u); f_12821830();
L_12821683:;
  /* 12821683 push 0x1284e410 */
  push32((uint32_t)(0x1284e410u));
  /* 12821688 call 0x12821005 */
  push32(0x1282168du); f_12821005();
  /* 1282168d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821692 jne 0x12821699 */
  if (!C.zf) goto L_12821699;
  /* 12821694 call 0x1282100f */
  push32(0x12821699u); f_1282100f();
L_12821699:;
  /* 12821699 push 0x1284e418 */
  push32((uint32_t)(0x1284e418u));
  /* 1282169e call 0x12821005 */
  push32(0x128216a3u); f_12821005();
  /* 128216a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128216a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128216a8 jne 0x128216af */
  if (!C.zf) goto L_128216af;
  /* 128216aa call 0x12821019 */
  push32(0x128216afu); f_12821019();
L_128216af:;
  /* 128216af pop edi */
  EDI = (pop32());
  /* 128216b0 pop esi */
  ESI = (pop32());
  /* 128216b1 pop ebx */
  EBX = (pop32());
  /* 128216b2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128216b5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128216b7 call 0x12821830 */
  push32(0x128216bcu); f_12821830();
  /* 128216bc mov esp, ebp */
  ESP = (EBP);
  /* 128216be pop ebp */
  EBP = (pop32());
  /* 128216bf ret  */
  ESPCHK(0x12821390u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x12821790 (63 bytes, 26 insns) */
void f_12821790(void) {
  FTRACE(0x12821790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821790 push ebp */
  push32((uint32_t)(EBP));
  /* 12821791 mov ebp, esp */
  EBP = (ESP);
  /* 12821793 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12821796 push ebx */
  push32((uint32_t)(EBX));
  /* 12821797 push esi */
  push32((uint32_t)(ESI));
  /* 12821798 push edi */
  push32((uint32_t)(EDI));
  /* 12821799 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1282179c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128217a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128217a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128217a8 mov esi, esp */
  ESI = (ESP);
  /* 128217aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128217ad push eax */
  push32((uint32_t)(EAX));
  /* 128217ae call dword ptr [0x128503a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128503a8))), 0x128217b4u);
  /* 128217b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128217b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128217b9 call 0x12821830 */
  push32(0x128217beu); f_12821830();
  /* 128217be pop edi */
  EDI = (pop32());
  /* 128217bf pop esi */
  ESI = (pop32());
  /* 128217c0 pop ebx */
  EBX = (pop32());
  /* 128217c1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128217c4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128217c6 call 0x12821830 */
  push32(0x128217cbu); f_12821830();
  /* 128217cb mov esp, ebp */
  ESP = (EBP);
  /* 128217cd pop ebp */
  EBP = (pop32());
  /* 128217ce ret  */
  ESPCHK(0x12821790u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12821830 (56 bytes, 28 insns) */
void f_12821830(void) {
  FTRACE(0x12821830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821830 jne 0x12821833 */
  if (!C.zf) goto L_12821833;
  /* 12821832 ret  */
  ESPCHK(0x12821830u, _esp0);
  ESP += 4; return;
L_12821833:;
  /* 12821833 push ebp */
  push32((uint32_t)(EBP));
  /* 12821834 mov ebp, esp */
  EBP = (ESP);
  /* 12821836 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12821839 push eax */
  push32((uint32_t)(EAX));
  /* 1282183a push edx */
  push32((uint32_t)(EDX));
  /* 1282183b push ebx */
  push32((uint32_t)(EBX));
  /* 1282183c push esi */
  push32((uint32_t)(ESI));
  /* 1282183d push edi */
  push32((uint32_t)(EDI));
  /* 1282183e push 0x12849078 */
  push32((uint32_t)(0x12849078u));
  /* 12821843 push 0x12849074 */
  push32((uint32_t)(0x12849074u));
  /* 12821848 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1282184a push 0x12849064 */
  push32((uint32_t)(0x12849064u));
  /* 1282184f push 1 */
  push32((uint32_t)(0x1u));
  /* 12821851 call 0x12821c00 */
  push32(0x12821856u); f_12821c00();
  /* 12821856 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821859 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282185c jne 0x1282185f */
  if (!C.zf) goto L_1282185f;
  /* 1282185e int3  */
  x86_unimpl("int3 @ 0x1282185e");
L_1282185f:;
  /* 1282185f pop edi */
  EDI = (pop32());
  /* 12821860 pop esi */
  ESI = (pop32());
  /* 12821861 pop ebx */
  EBX = (pop32());
  /* 12821862 pop edx */
  EDX = (pop32());
  /* 12821863 pop eax */
  EAX = (pop32());
  /* 12821864 mov esp, ebp */
  ESP = (EBP);
  /* 12821866 pop ebp */
  EBP = (pop32());
  /* 12821867 ret  */
  ESPCHK(0x12821830u, _esp0);
  ESP += 4; return;
}

/* FUN_10001870 @ 0x12821870 (313 bytes, 78 insns) */
void f_12821870(void) {
  FTRACE(0x12821870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821870 push ebp */
  push32((uint32_t)(EBP));
  /* 12821871 mov ebp, esp */
  EBP = (ESP);
  /* 12821873 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821877 jne 0x12821937 */
  if (!C.zf) goto L_12821937;
  /* 1282187d call dword ptr [0x12850258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850258))), 0x12821883u);
  /* 12821883 mov dword ptr [0x1284e488], eax */
  w32((uint32_t)(0x1284e488), (EAX));
  /* 12821888 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282188a call 0x12825330 */
  push32(0x1282188fu); f_12825330();
  /* 1282188f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821894 jne 0x1282189d */
  if (!C.zf) goto L_1282189d;
  /* 12821896 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12821898 jmp 0x128219a5 */
  goto L_128219a5;
L_1282189d:;
  /* 1282189d mov eax, dword ptr [0x1284e488] */
  EAX = (r32((uint32_t)(0x1284e488)));
  /* 128218a2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 128218a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128218aa mov dword ptr [0x1284e494], eax */
  w32((uint32_t)(0x1284e494), (EAX));
  /* 128218af mov ecx, dword ptr [0x1284e488] */
  ECX = (r32((uint32_t)(0x1284e488)));
  /* 128218b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 128218bb mov dword ptr [0x1284e490], ecx */
  w32((uint32_t)(0x1284e490), (ECX));
  /* 128218c1 mov edx, dword ptr [0x1284e490] */
  EDX = (r32((uint32_t)(0x1284e490)));
  /* 128218c7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 128218ca add edx, dword ptr [0x1284e494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284e494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128218d0 mov dword ptr [0x1284e48c], edx */
  w32((uint32_t)(0x1284e48c), (EDX));
  /* 128218d6 mov eax, dword ptr [0x1284e488] */
  EAX = (r32((uint32_t)(0x1284e488)));
  /* 128218db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 128218de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128218e3 mov dword ptr [0x1284e488], eax */
  w32((uint32_t)(0x1284e488), (EAX));
  /* 128218e8 call 0x128224a0 */
  push32(0x128218edu); f_128224a0();
  /* 128218ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128218ef jne 0x128218fd */
  if (!C.zf) goto L_128218fd;
  /* 128218f1 call 0x12825380 */
  push32(0x128218f6u); f_12825380();
  /* 128218f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128218f8 jmp 0x128219a5 */
  goto L_128219a5;
L_128218fd:;
  /* 128218fd call dword ptr [0x12850254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850254))), 0x12821903u);
  /* 12821903 mov dword ptr [0x1284ffcc], eax */
  w32((uint32_t)(0x1284ffcc), (EAX));
  /* 12821908 call 0x12825110 */
  push32(0x1282190du); f_12825110();
  /* 1282190d mov dword ptr [0x1284e470], eax */
  w32((uint32_t)(0x1284e470), (EAX));
  /* 12821912 call 0x12822750 */
  push32(0x12821917u); f_12822750();
  /* 12821917 call 0x12824c00 */
  push32(0x1282191cu); f_12824c00();
  /* 1282191c call 0x12824ab0 */
  push32(0x12821921u); f_12824ab0();
  /* 12821921 call 0x128222a0 */
  push32(0x12821926u); f_128222a0();
  /* 12821926 mov ecx, dword ptr [0x1284e46c] */
  ECX = (r32((uint32_t)(0x1284e46c)));
  /* 1282192c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282192f mov dword ptr [0x1284e46c], ecx */
  w32((uint32_t)(0x1284e46c), (ECX));
  /* 12821935 jmp 0x128219a0 */
  goto L_128219a0;
L_12821937:;
  /* 12821937 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282193b jne 0x12821990 */
  if (!C.zf) goto L_12821990;
  /* 1282193d cmp dword ptr [0x1284e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821944 jle 0x1282198a */
  if ((C.zf||C.sf!=C.of)) goto L_1282198a;
  /* 12821946 mov edx, dword ptr [0x1284e46c] */
  EDX = (r32((uint32_t)(0x1284e46c)));
  /* 1282194c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282194f mov dword ptr [0x1284e46c], edx */
  w32((uint32_t)(0x1284e46c), (EDX));
  /* 12821955 cmp dword ptr [0x1284e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282195c jne 0x12821963 */
  if (!C.zf) goto L_12821963;
  /* 1282195e call 0x12822320 */
  push32(0x12821963u); f_12822320();
L_12821963:;
  /* 12821963 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12821965 call 0x12824050 */
  push32(0x1282196au); f_12824050();
  /* 1282196a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282196d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12821970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821972 je 0x12821979 */
  if (C.zf) goto L_12821979;
  /* 12821974 call 0x12824960 */
  push32(0x12821979u); f_12824960();
L_12821979:;
  /* 12821979 call 0x12822a80 */
  push32(0x1282197eu); f_12822a80();
  /* 1282197e call 0x12822530 */
  push32(0x12821983u); f_12822530();
  /* 12821983 call 0x12825380 */
  push32(0x12821988u); f_12825380();
  /* 12821988 jmp 0x1282198e */
  goto L_1282198e;
L_1282198a:;
  /* 1282198a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282198c jmp 0x128219a5 */
  goto L_128219a5;
L_1282198e:;
  /* 1282198e jmp 0x128219a0 */
  goto L_128219a0;
L_12821990:;
  /* 12821990 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821994 jne 0x128219a0 */
  if (!C.zf) goto L_128219a0;
  /* 12821996 push 0 */
  push32((uint32_t)(0x0u));
  /* 12821998 call 0x12822620 */
  push32(0x1282199du); f_12822620();
  /* 1282199d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128219a0:;
  /* 128219a0 mov eax, 1 */
  EAX = (0x1u);
L_128219a5:;
  /* 128219a5 pop ebp */
  EBP = (pop32());
  /* 128219a6 ret 0xc */
  ESPCHK(0x12821870u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x128219b0 (243 bytes, 86 insns) */
void f_128219b0(void) {
  FTRACE(0x128219b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128219b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128219b1 mov ebp, esp */
  EBP = (ESP);
  /* 128219b3 push ecx */
  push32((uint32_t)(ECX));
  /* 128219b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 128219bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128219bf jne 0x128219d1 */
  if (!C.zf) goto L_128219d1;
  /* 128219c1 cmp dword ptr [0x1284e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128219c8 jne 0x128219d1 */
  if (!C.zf) goto L_128219d1;
  /* 128219ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128219cc jmp 0x12821a9d */
  goto L_12821a9d;
L_128219d1:;
  /* 128219d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128219d5 je 0x128219dd */
  if (C.zf) goto L_128219dd;
  /* 128219d7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128219db jne 0x12821a1f */
  if (!C.zf) goto L_12821a1f;
L_128219dd:;
  /* 128219dd cmp dword ptr [0x1284ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128219e4 je 0x128219fb */
  if (C.zf) goto L_128219fb;
  /* 128219e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128219e9 push eax */
  push32((uint32_t)(EAX));
  /* 128219ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128219ed push ecx */
  push32((uint32_t)(ECX));
  /* 128219ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128219f1 push edx */
  push32((uint32_t)(EDX));
  /* 128219f2 call dword ptr [0x1284ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284ffdc))), 0x128219f8u);
  /* 128219f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128219fb:;
  /* 128219fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128219ff je 0x12821a15 */
  if (C.zf) goto L_12821a15;
  /* 12821a01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821a04 push eax */
  push32((uint32_t)(EAX));
  /* 12821a05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821a08 push ecx */
  push32((uint32_t)(ECX));
  /* 12821a09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821a0c push edx */
  push32((uint32_t)(EDX));
  /* 12821a0d call 0x12821870 */
  push32(0x12821a12u); f_12821870();
  /* 12821a12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12821a15:;
  /* 12821a15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821a19 jne 0x12821a1f */
  if (!C.zf) goto L_12821a1f;
  /* 12821a1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12821a1d jmp 0x12821a9d */
  goto L_12821a9d;
L_12821a1f:;
  /* 12821a1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821a22 push eax */
  push32((uint32_t)(EAX));
  /* 12821a23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821a26 push ecx */
  push32((uint32_t)(ECX));
  /* 12821a27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821a2a push edx */
  push32((uint32_t)(EDX));
  /* 12821a2b call 0x12821014 */
  push32(0x12821a30u); f_12821014();
  /* 12821a30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12821a33 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821a37 jne 0x12821a4e */
  if (!C.zf) goto L_12821a4e;
  /* 12821a39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821a3d jne 0x12821a4e */
  if (!C.zf) goto L_12821a4e;
  /* 12821a3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821a42 push eax */
  push32((uint32_t)(EAX));
  /* 12821a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12821a45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821a48 push ecx */
  push32((uint32_t)(ECX));
  /* 12821a49 call 0x12821870 */
  push32(0x12821a4eu); f_12821870();
L_12821a4e:;
  /* 12821a4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821a52 je 0x12821a5a */
  if (C.zf) goto L_12821a5a;
  /* 12821a54 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821a58 jne 0x12821a9a */
  if (!C.zf) goto L_12821a9a;
L_12821a5a:;
  /* 12821a5a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821a5d push edx */
  push32((uint32_t)(EDX));
  /* 12821a5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821a61 push eax */
  push32((uint32_t)(EAX));
  /* 12821a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12821a66 call 0x12821870 */
  push32(0x12821a6bu); f_12821870();
  /* 12821a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821a6d jne 0x12821a76 */
  if (!C.zf) goto L_12821a76;
  /* 12821a6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12821a76:;
  /* 12821a76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821a7a je 0x12821a9a */
  if (C.zf) goto L_12821a9a;
  /* 12821a7c cmp dword ptr [0x1284ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821a83 je 0x12821a9a */
  if (C.zf) goto L_12821a9a;
  /* 12821a85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821a88 push edx */
  push32((uint32_t)(EDX));
  /* 12821a89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821a8c push eax */
  push32((uint32_t)(EAX));
  /* 12821a8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821a90 push ecx */
  push32((uint32_t)(ECX));
  /* 12821a91 call dword ptr [0x1284ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284ffdc))), 0x12821a97u);
  /* 12821a97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12821a9a:;
  /* 12821a9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12821a9d:;
  /* 12821a9d mov esp, ebp */
  ESP = (EBP);
  /* 12821a9f pop ebp */
  EBP = (pop32());
  /* 12821aa0 ret 0xc */
  ESPCHK(0x128219b0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12821ab0 (58 bytes, 18 insns) */
void f_12821ab0(void) {
  FTRACE(0x12821ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12821ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12821ab3 cmp dword ptr [0x1284e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821aba je 0x12821ace */
  if (C.zf) goto L_12821ace;
  /* 12821abc cmp dword ptr [0x1284e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821ac3 jne 0x12821ad3 */
  if (!C.zf) goto L_12821ad3;
  /* 12821ac5 cmp dword ptr [0x1284e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821acc jne 0x12821ad3 */
  if (!C.zf) goto L_12821ad3;
L_12821ace:;
  /* 12821ace call 0x12825420 */
  push32(0x12821ad3u); f_12825420();
L_12821ad3:;
  /* 12821ad3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821ad6 push eax */
  push32((uint32_t)(EAX));
  /* 12821ad7 call 0x12825470 */
  push32(0x12821adcu); f_12825470();
  /* 12821adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821adf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12821ae4 call dword ptr [0x1284ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284ca30))), 0x12821aeau);
  /* 12821aea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821aed pop ebp */
  EBP = (pop32());
  /* 12821aee ret  */
  ESPCHK(0x12821ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001af0 @ 0x12821af0 (11 bytes, 5 insns) */
void f_12821af0(void) {
  FTRACE(0x12821af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12821af1 mov ebp, esp */
  EBP = (ESP);
  /* 12821af3 call dword ptr [0x1285025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285025c))), 0x12821af9u);
  /* 12821af9 pop ebp */
  EBP = (pop32());
  /* 12821afa ret  */
  ESPCHK(0x12821af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b00 @ 0x12821b00 (87 bytes, 30 insns) */
void f_12821b00(void) {
  FTRACE(0x12821b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12821b01 mov ebp, esp */
  EBP = (ESP);
  /* 12821b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12821b04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821b08 jl 0x12821b10 */
  if ((C.sf!=C.of)) goto L_12821b10;
  /* 12821b0a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821b0e jl 0x12821b15 */
  if ((C.sf!=C.of)) goto L_12821b15;
L_12821b10:;
  /* 12821b10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12821b13 jmp 0x12821b53 */
  goto L_12821b53;
L_12821b15:;
  /* 12821b15 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821b19 jne 0x12821b27 */
  if (!C.zf) goto L_12821b27;
  /* 12821b1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821b1e mov eax, dword ptr [eax*4 + 0x1284ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1284ca38)));
  /* 12821b25 jmp 0x12821b53 */
  goto L_12821b53;
L_12821b27:;
  /* 12821b27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821b2a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12821b2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12821b2f je 0x12821b36 */
  if (C.zf) goto L_12821b36;
  /* 12821b31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12821b34 jmp 0x12821b53 */
  goto L_12821b53;
L_12821b36:;
  /* 12821b36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821b39 mov eax, dword ptr [edx*4 + 0x1284ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284ca38)));
  /* 12821b40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12821b43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821b46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821b49 mov dword ptr [ecx*4 + 0x1284ca38], edx */
  w32((uint32_t)(ECX*4 + 0x1284ca38), (EDX));
  /* 12821b50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12821b53:;
  /* 12821b53 mov esp, ebp */
  ESP = (EBP);
  /* 12821b55 pop ebp */
  EBP = (pop32());
  /* 12821b56 ret  */
  ESPCHK(0x12821b00u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12821b60 (126 bytes, 38 insns) */
void f_12821b60(void) {
  FTRACE(0x12821b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12821b61 mov ebp, esp */
  EBP = (ESP);
  /* 12821b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12821b64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821b68 jl 0x12821b70 */
  if ((C.sf!=C.of)) goto L_12821b70;
  /* 12821b6a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821b6e jl 0x12821b77 */
  if ((C.sf!=C.of)) goto L_12821b77;
L_12821b70:;
  /* 12821b70 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12821b75 jmp 0x12821bda */
  goto L_12821bda;
L_12821b77:;
  /* 12821b77 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821b7b jne 0x12821b89 */
  if (!C.zf) goto L_12821b89;
  /* 12821b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821b80 mov eax, dword ptr [eax*4 + 0x1284ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1284ca44)));
  /* 12821b87 jmp 0x12821bda */
  goto L_12821bda;
L_12821b89:;
  /* 12821b89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821b8c mov edx, dword ptr [ecx*4 + 0x1284ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca44)));
  /* 12821b93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12821b96 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821b9a jne 0x12821bb0 */
  if (!C.zf) goto L_12821bb0;
  /* 12821b9c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12821b9e call dword ptr [0x12850260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850260))), 0x12821ba4u);
  /* 12821ba4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821ba7 mov dword ptr [ecx*4 + 0x1284ca44], eax */
  w32((uint32_t)(ECX*4 + 0x1284ca44), (EAX));
  /* 12821bae jmp 0x12821bd7 */
  goto L_12821bd7;
L_12821bb0:;
  /* 12821bb0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821bb4 jne 0x12821bca */
  if (!C.zf) goto L_12821bca;
  /* 12821bb6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12821bb8 call dword ptr [0x12850260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850260))), 0x12821bbeu);
  /* 12821bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821bc1 mov dword ptr [edx*4 + 0x1284ca44], eax */
  w32((uint32_t)(EDX*4 + 0x1284ca44), (EAX));
  /* 12821bc8 jmp 0x12821bd7 */
  goto L_12821bd7;
L_12821bca:;
  /* 12821bca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821bcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821bd0 mov dword ptr [eax*4 + 0x1284ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x1284ca44), (ECX));
L_12821bd7:;
  /* 12821bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12821bda:;
  /* 12821bda mov esp, ebp */
  ESP = (EBP);
  /* 12821bdc pop ebp */
  EBP = (pop32());
  /* 12821bdd ret  */
  ESPCHK(0x12821b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10001be0 @ 0x12821be0 (28 bytes, 11 insns) */
void f_12821be0(void) {
  FTRACE(0x12821be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12821be1 mov ebp, esp */
  EBP = (ESP);
  /* 12821be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12821be4 mov eax, dword ptr [0x1284ffc0] */
  EAX = (r32((uint32_t)(0x1284ffc0)));
  /* 12821be9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12821bec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821bef mov dword ptr [0x1284ffc0], ecx */
  w32((uint32_t)(0x1284ffc0), (ECX));
  /* 12821bf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12821bf8 mov esp, ebp */
  ESP = (EBP);
  /* 12821bfa pop ebp */
  EBP = (pop32());
  /* 12821bfb ret  */
  ESPCHK(0x12821be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c00 @ 0x12821c00 (912 bytes, 248 insns) */
void f_12821c00(void) {
  FTRACE(0x12821c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12821c01 mov ebp, esp */
  EBP = (ESP);
  /* 12821c03 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12821c08 call 0x12825ce0 */
  push32(0x12821c0du); f_12825ce0();
  /* 12821c0d push edi */
  push32((uint32_t)(EDI));
  /* 12821c0e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12821c15 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12821c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12821c1c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12821c22 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12821c24 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12821c26 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12821c27 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12821c2e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12821c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12821c35 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12821c3b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12821c3d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12821c3f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12821c40 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12821c47 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12821c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12821c4e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12821c54 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12821c56 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12821c58 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12821c59 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12821c5c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12821c62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821c66 jl 0x12821c6e */
  if ((C.sf!=C.of)) goto L_12821c6e;
  /* 12821c68 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821c6c jl 0x12821c76 */
  if ((C.sf!=C.of)) goto L_12821c76;
L_12821c6e:;
  /* 12821c6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12821c71 jmp 0x12821f8b */
  goto L_12821f8b;
L_12821c76:;
  /* 12821c76 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821c7a jne 0x12821d20 */
  if (!C.zf) goto L_12821d20;
  /* 12821c80 push 0x1284ca34 */
  push32((uint32_t)(0x1284ca34u));
  /* 12821c85 call dword ptr [0x12850278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850278))), 0x12821c8bu);
  /* 12821c8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821c8d jle 0x12821d20 */
  if ((C.zf||C.sf!=C.of)) goto L_12821d20;
  /* 12821c93 cmp dword ptr [0x1284e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821c9a jne 0x12821cde */
  if (!C.zf) goto L_12821cde;
  /* 12821c9c push 0x12849220 */
  push32((uint32_t)(0x12849220u));
  /* 12821ca1 call dword ptr [0x12850274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850274))), 0x12821ca7u);
  /* 12821ca7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12821cad cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821cb4 je 0x12821cd6 */
  if (C.zf) goto L_12821cd6;
  /* 12821cb6 push 0x12849214 */
  push32((uint32_t)(0x12849214u));
  /* 12821cbb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12821cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12821cc2 call dword ptr [0x12850270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850270))), 0x12821cc8u);
  /* 12821cc8 mov dword ptr [0x1284e480], eax */
  w32((uint32_t)(0x1284e480), (EAX));
  /* 12821ccd cmp dword ptr [0x1284e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821cd4 jne 0x12821cde */
  if (!C.zf) goto L_12821cde;
L_12821cd6:;
  /* 12821cd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12821cd9 jmp 0x12821f8b */
  goto L_12821f8b;
L_12821cde:;
  /* 12821cde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821ce1 push edx */
  push32((uint32_t)(EDX));
  /* 12821ce2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821ce5 push eax */
  push32((uint32_t)(EAX));
  /* 12821ce6 push 0x128491e0 */
  push32((uint32_t)(0x128491e0u));
  /* 12821ceb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12821cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 12821cf2 call dword ptr [0x1284e480] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e480))), 0x12821cf8u);
  /* 12821cf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821cfb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12821d01 push edx */
  push32((uint32_t)(EDX));
  /* 12821d02 call dword ptr [0x1285026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285026c))), 0x12821d08u);
  /* 12821d08 push 0x1284ca34 */
  push32((uint32_t)(0x1284ca34u));
  /* 12821d0d call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x12821d13u);
  /* 12821d13 call 0x12821af0 */
  push32(0x12821d18u); f_12821af0();
  /* 12821d18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12821d1b jmp 0x12821f8b */
  goto L_12821f8b;
L_12821d20:;
  /* 12821d20 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821d24 je 0x12821d5d */
  if (C.zf) goto L_12821d5d;
  /* 12821d26 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12821d2c push eax */
  push32((uint32_t)(EAX));
  /* 12821d2d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12821d30 push ecx */
  push32((uint32_t)(ECX));
  /* 12821d31 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12821d36 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12821d3c push edx */
  push32((uint32_t)(EDX));
  /* 12821d3d call 0x12825be0 */
  push32(0x12821d42u); f_12825be0();
  /* 12821d42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821d45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821d47 jge 0x12821d5d */
  if ((C.sf==C.of)) goto L_12821d5d;
  /* 12821d49 push 0x128491b4 */
  push32((uint32_t)(0x128491b4u));
  /* 12821d4e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12821d54 push eax */
  push32((uint32_t)(EAX));
  /* 12821d55 call 0x12825af0 */
  push32(0x12821d5au); f_12825af0();
  /* 12821d5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12821d5d:;
  /* 12821d5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821d61 jne 0x12821d95 */
  if (!C.zf) goto L_12821d95;
  /* 12821d63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821d67 je 0x12821d75 */
  if (C.zf) goto L_12821d75;
  /* 12821d69 mov dword ptr [ebp - 0x3028], 0x128491a0 */
  w32((uint32_t)(EBP + -0x3028), (0x128491a0u));
  /* 12821d73 jmp 0x12821d7f */
  goto L_12821d7f;
L_12821d75:;
  /* 12821d75 mov dword ptr [ebp - 0x3028], 0x1284918c */
  w32((uint32_t)(EBP + -0x3028), (0x1284918cu));
L_12821d7f:;
  /* 12821d7f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12821d85 push ecx */
  push32((uint32_t)(ECX));
  /* 12821d86 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12821d8c push edx */
  push32((uint32_t)(EDX));
  /* 12821d8d call 0x12825af0 */
  push32(0x12821d92u); f_12825af0();
  /* 12821d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12821d95:;
  /* 12821d95 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12821d9b push eax */
  push32((uint32_t)(EAX));
  /* 12821d9c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12821da2 push ecx */
  push32((uint32_t)(ECX));
  /* 12821da3 call 0x12825b00 */
  push32(0x12821da8u); f_12825b00();
  /* 12821da8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821dab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821daf jne 0x12821dea */
  if (!C.zf) goto L_12821dea;
  /* 12821db1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821db4 mov eax, dword ptr [edx*4 + 0x1284ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284ca38)));
  /* 12821dbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12821dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821dc0 je 0x12821dd6 */
  if (C.zf) goto L_12821dd6;
  /* 12821dc2 push 0x12849188 */
  push32((uint32_t)(0x12849188u));
  /* 12821dc7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12821dcd push ecx */
  push32((uint32_t)(ECX));
  /* 12821dce call 0x12825b00 */
  push32(0x12821dd3u); f_12825b00();
  /* 12821dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12821dd6:;
  /* 12821dd6 push 0x12849184 */
  push32((uint32_t)(0x12849184u));
  /* 12821ddb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12821de1 push edx */
  push32((uint32_t)(EDX));
  /* 12821de2 call 0x12825b00 */
  push32(0x12821de7u); f_12825b00();
  /* 12821de7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12821dea:;
  /* 12821dea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821dee je 0x12821e32 */
  if (C.zf) goto L_12821e32;
  /* 12821df0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12821df6 push eax */
  push32((uint32_t)(EAX));
  /* 12821df7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821dfa push ecx */
  push32((uint32_t)(ECX));
  /* 12821dfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821dfe push edx */
  push32((uint32_t)(EDX));
  /* 12821dff push 0x12849178 */
  push32((uint32_t)(0x12849178u));
  /* 12821e04 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12821e09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12821e0f push eax */
  push32((uint32_t)(EAX));
  /* 12821e10 call 0x128259f0 */
  push32(0x12821e15u); f_128259f0();
  /* 12821e15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821e1a jge 0x12821e30 */
  if ((C.sf==C.of)) goto L_12821e30;
  /* 12821e1c push 0x128491b4 */
  push32((uint32_t)(0x128491b4u));
  /* 12821e21 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12821e27 push ecx */
  push32((uint32_t)(ECX));
  /* 12821e28 call 0x12825af0 */
  push32(0x12821e2du); f_12825af0();
  /* 12821e2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12821e30:;
  /* 12821e30 jmp 0x12821e48 */
  goto L_12821e48;
L_12821e32:;
  /* 12821e32 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12821e38 push edx */
  push32((uint32_t)(EDX));
  /* 12821e39 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12821e3f push eax */
  push32((uint32_t)(EAX));
  /* 12821e40 call 0x12825af0 */
  push32(0x12821e45u); f_12825af0();
  /* 12821e45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12821e48:;
  /* 12821e48 cmp dword ptr [0x1284ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821e4f je 0x12821e8c */
  if (C.zf) goto L_12821e8c;
  /* 12821e51 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12821e57 push ecx */
  push32((uint32_t)(ECX));
  /* 12821e58 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12821e5e push edx */
  push32((uint32_t)(EDX));
  /* 12821e5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821e62 push eax */
  push32((uint32_t)(EAX));
  /* 12821e63 call dword ptr [0x1284ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284ffc0))), 0x12821e69u);
  /* 12821e69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821e6e je 0x12821e8c */
  if (C.zf) goto L_12821e8c;
  /* 12821e70 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821e74 jne 0x12821e81 */
  if (!C.zf) goto L_12821e81;
  /* 12821e76 push 0x1284ca34 */
  push32((uint32_t)(0x1284ca34u));
  /* 12821e7b call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x12821e81u);
L_12821e81:;
  /* 12821e81 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12821e87 jmp 0x12821f8b */
  goto L_12821f8b;
L_12821e8c:;
  /* 12821e8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821e8f mov edx, dword ptr [ecx*4 + 0x1284ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca38)));
  /* 12821e96 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12821e99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12821e9b je 0x12821edb */
  if (C.zf) goto L_12821edb;
  /* 12821e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821ea0 cmp dword ptr [eax*4 + 0x1284ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1284ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821ea8 je 0x12821edb */
  if (C.zf) goto L_12821edb;
  /* 12821eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12821eac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12821eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12821eb3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12821eb9 push edx */
  push32((uint32_t)(EDX));
  /* 12821eba call 0x12825970 */
  push32(0x12821ebfu); f_12825970();
  /* 12821ebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821ec2 push eax */
  push32((uint32_t)(EAX));
  /* 12821ec3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12821ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12821eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821ecd mov edx, dword ptr [ecx*4 + 0x1284ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca44)));
  /* 12821ed4 push edx */
  push32((uint32_t)(EDX));
  /* 12821ed5 call dword ptr [0x12850264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850264))), 0x12821edbu);
L_12821edb:;
  /* 12821edb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821ede mov ecx, dword ptr [eax*4 + 0x1284ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284ca38)));
  /* 12821ee5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12821ee8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12821eea je 0x12821ef9 */
  if (C.zf) goto L_12821ef9;
  /* 12821eec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12821ef2 push edx */
  push32((uint32_t)(EDX));
  /* 12821ef3 call dword ptr [0x1285026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285026c))), 0x12821ef9u);
L_12821ef9:;
  /* 12821ef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821efc mov ecx, dword ptr [eax*4 + 0x1284ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284ca38)));
  /* 12821f03 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12821f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12821f08 je 0x12821f78 */
  if (C.zf) goto L_12821f78;
  /* 12821f0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821f0e je 0x12821f2d */
  if (C.zf) goto L_12821f2d;
  /* 12821f10 push 0xa */
  push32((uint32_t)(0xau));
  /* 12821f12 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12821f18 push edx */
  push32((uint32_t)(EDX));
  /* 12821f19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12821f1c push eax */
  push32((uint32_t)(EAX));
  /* 12821f1d call 0x12825680 */
  push32(0x12821f22u); f_12825680();
  /* 12821f22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821f25 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12821f2b jmp 0x12821f37 */
  goto L_12821f37;
L_12821f2d:;
  /* 12821f2d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12821f37:;
  /* 12821f37 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12821f3d push ecx */
  push32((uint32_t)(ECX));
  /* 12821f3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12821f41 push edx */
  push32((uint32_t)(EDX));
  /* 12821f42 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12821f48 push eax */
  push32((uint32_t)(EAX));
  /* 12821f49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12821f4c push ecx */
  push32((uint32_t)(ECX));
  /* 12821f4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12821f50 push edx */
  push32((uint32_t)(EDX));
  /* 12821f51 call 0x12821f90 */
  push32(0x12821f56u); f_12821f90();
  /* 12821f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821f59 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12821f5f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821f63 jne 0x12821f70 */
  if (!C.zf) goto L_12821f70;
  /* 12821f65 push 0x1284ca34 */
  push32((uint32_t)(0x1284ca34u));
  /* 12821f6a call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x12821f70u);
L_12821f70:;
  /* 12821f70 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12821f76 jmp 0x12821f8b */
  goto L_12821f8b;
L_12821f78:;
  /* 12821f78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821f7c jne 0x12821f89 */
  if (!C.zf) goto L_12821f89;
  /* 12821f7e push 0x1284ca34 */
  push32((uint32_t)(0x1284ca34u));
  /* 12821f83 call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x12821f89u);
L_12821f89:;
  /* 12821f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12821f8b:;
  /* 12821f8b pop edi */
  EDI = (pop32());
  /* 12821f8c mov esp, ebp */
  ESP = (EBP);
  /* 12821f8e pop ebp */
  EBP = (pop32());
  /* 12821f8f ret  */
  ESPCHK(0x12821c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f90 @ 0x12821f90 (780 bytes, 197 insns) */
void f_12821f90(void) {
  FTRACE(0x12821f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12821f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12821f91 mov ebp, esp */
  EBP = (ESP);
  /* 12821f93 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12821f98 call 0x12825ce0 */
  push32(0x12821f9du); f_12825ce0();
L_12821f9d:;
  /* 12821f9d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821fa1 jne 0x12821fc8 */
  if (!C.zf) goto L_12821fc8;
  /* 12821fa3 push 0x12849370 */
  push32((uint32_t)(0x12849370u));
  /* 12821fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12821faa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12821faf push 0x12849364 */
  push32((uint32_t)(0x12849364u));
  /* 12821fb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12821fb6 call 0x12821c00 */
  push32(0x12821fbbu); f_12821c00();
  /* 12821fbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12821fbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12821fc1 jne 0x12821fc8 */
  if (!C.zf) goto L_12821fc8;
  /* 12821fc3 call 0x12821af0 */
  push32(0x12821fc8u); f_12821af0();
L_12821fc8:;
  /* 12821fc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12821fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821fcc jne 0x12821f9d */
  if (!C.zf) goto L_12821f9d;
  /* 12821fce push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12821fd3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12821fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12821fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12821fdc call dword ptr [0x1285027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285027c))), 0x12821fe2u);
  /* 12821fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12821fe4 jne 0x12821ffa */
  if (!C.zf) goto L_12821ffa;
  /* 12821fe6 push 0x1284934c */
  push32((uint32_t)(0x1284934cu));
  /* 12821feb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12821ff1 push edx */
  push32((uint32_t)(EDX));
  /* 12821ff2 call 0x12825af0 */
  push32(0x12821ff7u); f_12825af0();
  /* 12821ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12821ffa:;
  /* 12821ffa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12822000 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12822003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822006 push ecx */
  push32((uint32_t)(ECX));
  /* 12822007 call 0x12825970 */
  push32(0x1282200cu); f_12825970();
  /* 1282200c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282200f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822012 jbe 0x1282203d */
  if ((C.cf||C.zf)) goto L_1282203d;
  /* 12822014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822017 push edx */
  push32((uint32_t)(EDX));
  /* 12822018 call 0x12825970 */
  push32(0x1282201du); f_12825970();
  /* 1282201d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822020 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822023 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12822027 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282202a push 3 */
  push32((uint32_t)(0x3u));
  /* 1282202c push 0x12849348 */
  push32((uint32_t)(0x12849348u));
  /* 12822031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822034 push eax */
  push32((uint32_t)(EAX));
  /* 12822035 call 0x12826360 */
  push32(0x1282203au); f_12826360();
  /* 1282203a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282203d:;
  /* 1282203d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822040 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12822046 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282204d je 0x12822098 */
  if (C.zf) goto L_12822098;
  /* 1282204f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12822055 push edx */
  push32((uint32_t)(EDX));
  /* 12822056 call 0x12825970 */
  push32(0x1282205bu); f_12825970();
  /* 1282205b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282205e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822061 jbe 0x12822098 */
  if ((C.cf||C.zf)) goto L_12822098;
  /* 12822063 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12822069 push eax */
  push32((uint32_t)(EAX));
  /* 1282206a call 0x12825970 */
  push32(0x1282206fu); f_12825970();
  /* 1282206f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822072 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12822078 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1282207c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12822082 push 3 */
  push32((uint32_t)(0x3u));
  /* 12822084 push 0x12849348 */
  push32((uint32_t)(0x12849348u));
  /* 12822089 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1282208f push eax */
  push32((uint32_t)(EAX));
  /* 12822090 call 0x12826360 */
  push32(0x12822095u); f_12826360();
  /* 12822095 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12822098:;
  /* 12822098 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282209c jne 0x128220aa */
  if (!C.zf) goto L_128220aa;
  /* 1282209e mov dword ptr [ebp - 0x1114], 0x128492d4 */
  w32((uint32_t)(EBP + -0x1114), (0x128492d4u));
  /* 128220a8 jmp 0x128220b4 */
  goto L_128220b4;
L_128220aa:;
  /* 128220aa mov dword ptr [ebp - 0x1114], 0x12849074 */
  w32((uint32_t)(EBP + -0x1114), (0x12849074u));
L_128220b4:;
  /* 128220b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128220b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128220ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128220bc je 0x128220c9 */
  if (C.zf) goto L_128220c9;
  /* 128220be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128220c1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 128220c7 jmp 0x128220d3 */
  goto L_128220d3;
L_128220c9:;
  /* 128220c9 mov dword ptr [ebp - 0x1118], 0x12849074 */
  w32((uint32_t)(EBP + -0x1118), (0x12849074u));
L_128220d3:;
  /* 128220d3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128220d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128220d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128220db je 0x128220ef */
  if (C.zf) goto L_128220ef;
  /* 128220dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128220e1 jne 0x128220ef */
  if (!C.zf) goto L_128220ef;
  /* 128220e3 mov dword ptr [ebp - 0x111c], 0x128492c4 */
  w32((uint32_t)(EBP + -0x111c), (0x128492c4u));
  /* 128220ed jmp 0x128220f9 */
  goto L_128220f9;
L_128220ef:;
  /* 128220ef mov dword ptr [ebp - 0x111c], 0x12849074 */
  w32((uint32_t)(EBP + -0x111c), (0x12849074u));
L_128220f9:;
  /* 128220f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128220fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128220ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12822101 je 0x1282210f */
  if (C.zf) goto L_1282210f;
  /* 12822103 mov dword ptr [ebp - 0x1120], 0x128492c0 */
  w32((uint32_t)(EBP + -0x1120), (0x128492c0u));
  /* 1282210d jmp 0x12822119 */
  goto L_12822119;
L_1282210f:;
  /* 1282210f mov dword ptr [ebp - 0x1120], 0x12849074 */
  w32((uint32_t)(EBP + -0x1120), (0x12849074u));
L_12822119:;
  /* 12822119 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282211d je 0x1282212a */
  if (C.zf) goto L_1282212a;
  /* 1282211f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822122 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12822128 jmp 0x12822134 */
  goto L_12822134;
L_1282212a:;
  /* 1282212a mov dword ptr [ebp - 0x1124], 0x12849074 */
  w32((uint32_t)(EBP + -0x1124), (0x12849074u));
L_12822134:;
  /* 12822134 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822138 je 0x12822146 */
  if (C.zf) goto L_12822146;
  /* 1282213a mov dword ptr [ebp - 0x1128], 0x128492b8 */
  w32((uint32_t)(EBP + -0x1128), (0x128492b8u));
  /* 12822144 jmp 0x12822150 */
  goto L_12822150;
L_12822146:;
  /* 12822146 mov dword ptr [ebp - 0x1128], 0x12849074 */
  w32((uint32_t)(EBP + -0x1128), (0x12849074u));
L_12822150:;
  /* 12822150 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822154 je 0x12822161 */
  if (C.zf) goto L_12822161;
  /* 12822156 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822159 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1282215f jmp 0x1282216b */
  goto L_1282216b;
L_12822161:;
  /* 12822161 mov dword ptr [ebp - 0x112c], 0x12849074 */
  w32((uint32_t)(EBP + -0x112c), (0x12849074u));
L_1282216b:;
  /* 1282216b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282216f je 0x1282217d */
  if (C.zf) goto L_1282217d;
  /* 12822171 mov dword ptr [ebp - 0x1130], 0x128492b0 */
  w32((uint32_t)(EBP + -0x1130), (0x128492b0u));
  /* 1282217b jmp 0x12822187 */
  goto L_12822187;
L_1282217d:;
  /* 1282217d mov dword ptr [ebp - 0x1130], 0x12849074 */
  w32((uint32_t)(EBP + -0x1130), (0x12849074u));
L_12822187:;
  /* 12822187 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282218e je 0x1282219e */
  if (C.zf) goto L_1282219e;
  /* 12822190 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12822196 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1282219c jmp 0x128221a8 */
  goto L_128221a8;
L_1282219e:;
  /* 1282219e mov dword ptr [ebp - 0x1134], 0x12849074 */
  w32((uint32_t)(EBP + -0x1134), (0x12849074u));
L_128221a8:;
  /* 128221a8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128221af je 0x128221bd */
  if (C.zf) goto L_128221bd;
  /* 128221b1 mov dword ptr [ebp - 0x1138], 0x128492a4 */
  w32((uint32_t)(EBP + -0x1138), (0x128492a4u));
  /* 128221bb jmp 0x128221c7 */
  goto L_128221c7;
L_128221bd:;
  /* 128221bd mov dword ptr [ebp - 0x1138], 0x12849074 */
  w32((uint32_t)(EBP + -0x1138), (0x12849074u));
L_128221c7:;
  /* 128221c7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 128221cd push edx */
  push32((uint32_t)(EDX));
  /* 128221ce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 128221d4 push eax */
  push32((uint32_t)(EAX));
  /* 128221d5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 128221db push ecx */
  push32((uint32_t)(ECX));
  /* 128221dc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 128221e2 push edx */
  push32((uint32_t)(EDX));
  /* 128221e3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 128221e9 push eax */
  push32((uint32_t)(EAX));
  /* 128221ea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 128221f0 push ecx */
  push32((uint32_t)(ECX));
  /* 128221f1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 128221f7 push edx */
  push32((uint32_t)(EDX));
  /* 128221f8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 128221fe push eax */
  push32((uint32_t)(EAX));
  /* 128221ff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12822205 push ecx */
  push32((uint32_t)(ECX));
  /* 12822206 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1282220c push edx */
  push32((uint32_t)(EDX));
  /* 1282220d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822210 push eax */
  push32((uint32_t)(EAX));
  /* 12822211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822214 mov edx, dword ptr [ecx*4 + 0x1284ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca50)));
  /* 1282221b push edx */
  push32((uint32_t)(EDX));
  /* 1282221c push 0x12849250 */
  push32((uint32_t)(0x12849250u));
  /* 12822221 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12822226 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1282222c push eax */
  push32((uint32_t)(EAX));
  /* 1282222d call 0x128259f0 */
  push32(0x12822232u); f_128259f0();
  /* 12822232 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12822237 jge 0x1282224d */
  if ((C.sf==C.of)) goto L_1282224d;
  /* 12822239 push 0x128491b4 */
  push32((uint32_t)(0x128491b4u));
  /* 1282223e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12822244 push ecx */
  push32((uint32_t)(ECX));
  /* 12822245 call 0x12825af0 */
  push32(0x1282224au); f_12825af0();
  /* 1282224a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282224d:;
  /* 1282224d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12822252 push 0x1284922c */
  push32((uint32_t)(0x1284922cu));
  /* 12822257 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1282225d push edx */
  push32((uint32_t)(EDX));
  /* 1282225e call 0x128262a0 */
  push32(0x12822263u); f_128262a0();
  /* 12822263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822266 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1282226c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822273 jne 0x12822286 */
  if (!C.zf) goto L_12822286;
  /* 12822275 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12822277 call 0x12825fe0 */
  push32(0x1282227cu); f_12825fe0();
  /* 1282227c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282227f push 3 */
  push32((uint32_t)(0x3u));
  /* 12822281 call 0x12822300 */
  push32(0x12822286u); f_12822300();
L_12822286:;
  /* 12822286 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282228d jne 0x12822296 */
  if (!C.zf) goto L_12822296;
  /* 1282228f mov eax, 1 */
  EAX = (0x1u);
  /* 12822294 jmp 0x12822298 */
  goto L_12822298;
L_12822296:;
  /* 12822296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12822298:;
  /* 12822298 mov esp, ebp */
  ESP = (EBP);
  /* 1282229a pop ebp */
  EBP = (pop32());
  /* 1282229b ret  */
  ESPCHK(0x12821f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100022a0 @ 0x128222a0 (56 bytes, 15 insns) */
void f_128222a0(void) {
  FTRACE(0x128222a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128222a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128222a1 mov ebp, esp */
  EBP = (ESP);
  /* 128222a3 cmp dword ptr [0x1284ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128222aa je 0x128222b2 */
  if (C.zf) goto L_128222b2;
  /* 128222ac call dword ptr [0x1284ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284ffbc))), 0x128222b2u);
L_128222b2:;
  /* 128222b2 push 0x1284c418 */
  push32((uint32_t)(0x1284c418u));
  /* 128222b7 push 0x1284c208 */
  push32((uint32_t)(0x1284c208u));
  /* 128222bc call 0x12822470 */
  push32(0x128222c1u); f_12822470();
  /* 128222c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128222c4 push 0x1284c104 */
  push32((uint32_t)(0x1284c104u));
  /* 128222c9 push 0x1284c000 */
  push32((uint32_t)(0x1284c000u));
  /* 128222ce call 0x12822470 */
  push32(0x128222d3u); f_12822470();
  /* 128222d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128222d6 pop ebp */
  EBP = (pop32());
  /* 128222d7 ret  */
  ESPCHK(0x128222a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x128222e0 (21 bytes, 10 insns) */
void f_128222e0(void) {
  FTRACE(0x128222e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128222e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128222e1 mov ebp, esp */
  EBP = (ESP);
  /* 128222e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128222e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128222e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128222ea push eax */
  push32((uint32_t)(EAX));
  /* 128222eb call 0x12822360 */
  push32(0x128222f0u); f_12822360();
  /* 128222f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128222f3 pop ebp */
  EBP = (pop32());
  /* 128222f4 ret  */
  ESPCHK(0x128222e0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12822300 (21 bytes, 10 insns) */
void f_12822300(void) {
  FTRACE(0x12822300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822300 push ebp */
  push32((uint32_t)(EBP));
  /* 12822301 mov ebp, esp */
  EBP = (ESP);
  /* 12822303 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822305 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822307 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282230a push eax */
  push32((uint32_t)(EAX));
  /* 1282230b call 0x12822360 */
  push32(0x12822310u); f_12822360();
  /* 12822310 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822313 pop ebp */
  EBP = (pop32());
  /* 12822314 ret  */
  ESPCHK(0x12822300u, _esp0);
  ESP += 4; return;
}

/* FUN_10002320 @ 0x12822320 (19 bytes, 9 insns) */
void f_12822320(void) {
  FTRACE(0x12822320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822320 push ebp */
  push32((uint32_t)(EBP));
  /* 12822321 mov ebp, esp */
  EBP = (ESP);
  /* 12822323 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822325 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822327 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822329 call 0x12822360 */
  push32(0x1282232eu); f_12822360();
  /* 1282232e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822331 pop ebp */
  EBP = (pop32());
  /* 12822332 ret  */
  ESPCHK(0x12822320u, _esp0);
  ESP += 4; return;
}

/* FUN_10002340 @ 0x12822340 (19 bytes, 9 insns) */
void f_12822340(void) {
  FTRACE(0x12822340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822340 push ebp */
  push32((uint32_t)(EBP));
  /* 12822341 mov ebp, esp */
  EBP = (ESP);
  /* 12822343 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822345 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822347 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822349 call 0x12822360 */
  push32(0x1282234eu); f_12822360();
  /* 1282234e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822351 pop ebp */
  EBP = (pop32());
  /* 12822352 ret  */
  ESPCHK(0x12822340u, _esp0);
  ESP += 4; return;
}

/* FUN_10002360 @ 0x12822360 (227 bytes, 61 insns) */
void f_12822360(void) {
  FTRACE(0x12822360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822360 push ebp */
  push32((uint32_t)(EBP));
  /* 12822361 mov ebp, esp */
  EBP = (ESP);
  /* 12822363 push ecx */
  push32((uint32_t)(ECX));
  /* 12822364 call 0x12822450 */
  push32(0x12822369u); f_12822450();
  /* 12822369 cmp dword ptr [0x1284e4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822370 jne 0x12822383 */
  if (!C.zf) goto L_12822383;
  /* 12822372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822375 push eax */
  push32((uint32_t)(EAX));
  /* 12822376 call dword ptr [0x12850288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850288))), 0x1282237cu);
  /* 1282237c push eax */
  push32((uint32_t)(EAX));
  /* 1282237d call dword ptr [0x12850284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850284))), 0x12822383u);
L_12822383:;
  /* 12822383 mov dword ptr [0x1284e4c0], 1 */
  w32((uint32_t)(0x1284e4c0), (0x1u));
  /* 1282238d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12822390 mov byte ptr [0x1284e4bc], cl */
  w8((uint32_t)(0x1284e4bc), (CL));
  /* 12822396 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282239a jne 0x128223e3 */
  if (!C.zf) goto L_128223e3;
  /* 1282239c cmp dword ptr [0x1284ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128223a3 je 0x128223d1 */
  if (C.zf) goto L_128223d1;
  /* 128223a5 mov edx, dword ptr [0x1284ffb4] */
  EDX = (r32((uint32_t)(0x1284ffb4)));
  /* 128223ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_128223ae:;
  /* 128223ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128223b1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128223b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128223b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128223ba cmp ecx, dword ptr [0x1284ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128223c0 jb 0x128223d1 */
  if (C.cf) goto L_128223d1;
  /* 128223c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128223c5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128223c8 je 0x128223cf */
  if (C.zf) goto L_128223cf;
  /* 128223ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128223cd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x128223cfu);
L_128223cf:;
  /* 128223cf jmp 0x128223ae */
  goto L_128223ae;
L_128223d1:;
  /* 128223d1 push 0x1284c724 */
  push32((uint32_t)(0x1284c724u));
  /* 128223d6 push 0x1284c51c */
  push32((uint32_t)(0x1284c51cu));
  /* 128223db call 0x12822470 */
  push32(0x128223e0u); f_12822470();
  /* 128223e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128223e3:;
  /* 128223e3 push 0x1284c92c */
  push32((uint32_t)(0x1284c92cu));
  /* 128223e8 push 0x1284c828 */
  push32((uint32_t)(0x1284c828u));
  /* 128223ed call 0x12822470 */
  push32(0x128223f2u); f_12822470();
  /* 128223f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128223f5 cmp dword ptr [0x1284e4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128223fc jne 0x1282241e */
  if (!C.zf) goto L_1282241e;
  /* 128223fe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12822400 call 0x12824050 */
  push32(0x12822405u); f_12824050();
  /* 12822405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822408 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1282240b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282240d je 0x1282241e */
  if (C.zf) goto L_1282241e;
  /* 1282240f mov dword ptr [0x1284e4c8], 1 */
  w32((uint32_t)(0x1284e4c8), (0x1u));
  /* 12822419 call 0x12824960 */
  push32(0x1282241eu); f_12824960();
L_1282241e:;
  /* 1282241e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822422 je 0x1282242b */
  if (C.zf) goto L_1282242b;
  /* 12822424 call 0x12822460 */
  push32(0x12822429u); f_12822460();
  /* 12822429 jmp 0x1282243f */
  goto L_1282243f;
L_1282242b:;
  /* 1282242b mov dword ptr [0x1284e4c4], 1 */
  w32((uint32_t)(0x1284e4c4), (0x1u));
  /* 12822435 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822438 push ecx */
  push32((uint32_t)(ECX));
  /* 12822439 call dword ptr [0x12850280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850280))), 0x1282243fu);
L_1282243f:;
  /* 1282243f mov esp, ebp */
  ESP = (EBP);
  /* 12822441 pop ebp */
  EBP = (pop32());
  /* 12822442 ret  */
  ESPCHK(0x12822360u, _esp0);
  ESP += 4; return;
}

/* FUN_10002450 @ 0x12822450 (15 bytes, 7 insns) */
void f_12822450(void) {
  FTRACE(0x12822450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822450 push ebp */
  push32((uint32_t)(EBP));
  /* 12822451 mov ebp, esp */
  EBP = (ESP);
  /* 12822453 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12822455 call 0x12826540 */
  push32(0x1282245au); f_12826540();
  /* 1282245a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282245d pop ebp */
  EBP = (pop32());
  /* 1282245e ret  */
  ESPCHK(0x12822450u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x12822460 (15 bytes, 7 insns) */
void f_12822460(void) {
  FTRACE(0x12822460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822460 push ebp */
  push32((uint32_t)(EBP));
  /* 12822461 mov ebp, esp */
  EBP = (ESP);
  /* 12822463 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12822465 call 0x128265e0 */
  push32(0x1282246au); f_128265e0();
  /* 1282246a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282246d pop ebp */
  EBP = (pop32());
  /* 1282246e ret  */
  ESPCHK(0x12822460u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12822470 (37 bytes, 16 insns) */
void f_12822470(void) {
  FTRACE(0x12822470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822470 push ebp */
  push32((uint32_t)(EBP));
  /* 12822471 mov ebp, esp */
  EBP = (ESP);
L_12822473:;
  /* 12822473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822476 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822479 jae 0x12822493 */
  if (!C.cf) goto L_12822493;
  /* 1282247b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282247e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822481 je 0x12822488 */
  if (C.zf) goto L_12822488;
  /* 12822483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822486 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12822488u);
L_12822488:;
  /* 12822488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282248b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282248e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12822491 jmp 0x12822473 */
  goto L_12822473;
L_12822493:;
  /* 12822493 pop ebp */
  EBP = (pop32());
  /* 12822494 ret  */
  ESPCHK(0x12822470u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a0 @ 0x128224a0 (130 bytes, 42 insns) */
void f_128224a0(void) {
  FTRACE(0x128224a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128224a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128224a1 mov ebp, esp */
  EBP = (ESP);
  /* 128224a3 push ecx */
  push32((uint32_t)(ECX));
  /* 128224a4 call 0x12826460 */
  push32(0x128224a9u); f_12826460();
  /* 128224a9 call dword ptr [0x12850294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850294))), 0x128224afu);
  /* 128224af mov dword ptr [0x1284ca5c], eax */
  w32((uint32_t)(0x1284ca5c), (EAX));
  /* 128224b4 cmp dword ptr [0x1284ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1284ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128224bb jne 0x128224c1 */
  if (!C.zf) goto L_128224c1;
  /* 128224bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128224bf jmp 0x1282251e */
  goto L_1282251e;
L_128224c1:;
  /* 128224c1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 128224c3 push 0x12849388 */
  push32((uint32_t)(0x12849388u));
  /* 128224c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 128224ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 128224cc push 1 */
  push32((uint32_t)(0x1u));
  /* 128224ce call 0x12822f50 */
  push32(0x128224d3u); f_12822f50();
  /* 128224d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128224d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128224d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128224dd je 0x128224f4 */
  if (C.zf) goto L_128224f4;
  /* 128224df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128224e2 push eax */
  push32((uint32_t)(EAX));
  /* 128224e3 mov ecx, dword ptr [0x1284ca5c] */
  ECX = (r32((uint32_t)(0x1284ca5c)));
  /* 128224e9 push ecx */
  push32((uint32_t)(ECX));
  /* 128224ea call dword ptr [0x12850290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850290))), 0x128224f0u);
  /* 128224f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128224f2 jne 0x128224f8 */
  if (!C.zf) goto L_128224f8;
L_128224f4:;
  /* 128224f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128224f6 jmp 0x1282251e */
  goto L_1282251e;
L_128224f8:;
  /* 128224f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128224fb push edx */
  push32((uint32_t)(EDX));
  /* 128224fc call 0x12822560 */
  push32(0x12822501u); f_12822560();
  /* 12822501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822504 call dword ptr [0x1285028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285028c))), 0x1282250au);
  /* 1282250a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282250d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1282250f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822512 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12822519 mov eax, 1 */
  EAX = (0x1u);
L_1282251e:;
  /* 1282251e mov esp, ebp */
  ESP = (EBP);
  /* 12822520 pop ebp */
  EBP = (pop32());
  /* 12822521 ret  */
  ESPCHK(0x128224a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002530 @ 0x12822530 (41 bytes, 11 insns) */
void f_12822530(void) {
  FTRACE(0x12822530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822530 push ebp */
  push32((uint32_t)(EBP));
  /* 12822531 mov ebp, esp */
  EBP = (ESP);
  /* 12822533 call 0x128264a0 */
  push32(0x12822538u); f_128264a0();
  /* 12822538 cmp dword ptr [0x1284ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1284ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282253f je 0x12822557 */
  if (C.zf) goto L_12822557;
  /* 12822541 mov eax, dword ptr [0x1284ca5c] */
  EAX = (r32((uint32_t)(0x1284ca5c)));
  /* 12822546 push eax */
  push32((uint32_t)(EAX));
  /* 12822547 call dword ptr [0x12850298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850298))), 0x1282254du);
  /* 1282254d mov dword ptr [0x1284ca5c], 0xffffffff */
  w32((uint32_t)(0x1284ca5c), (0xffffffffu));
L_12822557:;
  /* 12822557 pop ebp */
  EBP = (pop32());
  /* 12822558 ret  */
  ESPCHK(0x12822530u, _esp0);
  ESP += 4; return;
}

/* FUN_10002560 @ 0x12822560 (25 bytes, 8 insns) */
void f_12822560(void) {
  FTRACE(0x12822560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822560 push ebp */
  push32((uint32_t)(EBP));
  /* 12822561 mov ebp, esp */
  EBP = (ESP);
  /* 12822563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822566 mov dword ptr [eax + 0x50], 0x1284cc00 */
  w32((uint32_t)(EAX + 0x50), (0x1284cc00u));
  /* 1282256d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822570 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12822577 pop ebp */
  EBP = (pop32());
  /* 12822578 ret  */
  ESPCHK(0x12822560u, _esp0);
  ESP += 4; return;
}

/* FUN_10002580 @ 0x12822580 (152 bytes, 48 insns) */
void f_12822580(void) {
  FTRACE(0x12822580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822580 push ebp */
  push32((uint32_t)(EBP));
  /* 12822581 mov ebp, esp */
  EBP = (ESP);
  /* 12822583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12822586 call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x1282258cu);
  /* 1282258c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282258f mov eax, dword ptr [0x1284ca5c] */
  EAX = (r32((uint32_t)(0x1284ca5c)));
  /* 12822594 push eax */
  push32((uint32_t)(EAX));
  /* 12822595 call dword ptr [0x128502a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a0))), 0x1282259bu);
  /* 1282259b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282259e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128225a2 jne 0x12822607 */
  if (!C.zf) goto L_12822607;
  /* 128225a4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 128225a9 push 0x12849388 */
  push32((uint32_t)(0x12849388u));
  /* 128225ae push 2 */
  push32((uint32_t)(0x2u));
  /* 128225b0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 128225b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 128225b4 call 0x12822f50 */
  push32(0x128225b9u); f_12822f50();
  /* 128225b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128225bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128225bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128225c3 je 0x128225fd */
  if (C.zf) goto L_128225fd;
  /* 128225c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128225c8 push ecx */
  push32((uint32_t)(ECX));
  /* 128225c9 mov edx, dword ptr [0x1284ca5c] */
  EDX = (r32((uint32_t)(0x1284ca5c)));
  /* 128225cf push edx */
  push32((uint32_t)(EDX));
  /* 128225d0 call dword ptr [0x12850290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850290))), 0x128225d6u);
  /* 128225d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128225d8 je 0x128225fd */
  if (C.zf) goto L_128225fd;
  /* 128225da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128225dd push eax */
  push32((uint32_t)(EAX));
  /* 128225de call 0x12822560 */
  push32(0x128225e3u); f_12822560();
  /* 128225e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128225e6 call dword ptr [0x1285028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285028c))), 0x128225ecu);
  /* 128225ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128225ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128225f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128225f4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 128225fb jmp 0x12822607 */
  goto L_12822607;
L_128225fd:;
  /* 128225fd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 128225ff call 0x12821ab0 */
  push32(0x12822604u); f_12821ab0();
  /* 12822604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12822607:;
  /* 12822607 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282260a push eax */
  push32((uint32_t)(EAX));
  /* 1282260b call dword ptr [0x1285029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285029c))), 0x12822611u);
  /* 12822611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822614 mov esp, ebp */
  ESP = (EBP);
  /* 12822616 pop ebp */
  EBP = (pop32());
  /* 12822617 ret  */
  ESPCHK(0x12822580u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x12822620 (263 bytes, 86 insns) */
void f_12822620(void) {
  FTRACE(0x12822620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822620 push ebp */
  push32((uint32_t)(EBP));
  /* 12822621 mov ebp, esp */
  EBP = (ESP);
  /* 12822623 cmp dword ptr [0x1284ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1284ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282262a je 0x12822725 */
  if (C.zf) goto L_12822725;
  /* 12822630 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822634 jne 0x12822645 */
  if (!C.zf) goto L_12822645;
  /* 12822636 mov eax, dword ptr [0x1284ca5c] */
  EAX = (r32((uint32_t)(0x1284ca5c)));
  /* 1282263b push eax */
  push32((uint32_t)(EAX));
  /* 1282263c call dword ptr [0x128502a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a0))), 0x12822642u);
  /* 12822642 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12822645:;
  /* 12822645 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822649 je 0x12822716 */
  if (C.zf) goto L_12822716;
  /* 1282264f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822652 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822656 je 0x12822669 */
  if (C.zf) goto L_12822669;
  /* 12822658 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282265a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282265d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12822660 push eax */
  push32((uint32_t)(EAX));
  /* 12822661 call 0x128235d0 */
  push32(0x12822666u); f_128235d0();
  /* 12822666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12822669:;
  /* 12822669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282266c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822670 je 0x12822683 */
  if (C.zf) goto L_12822683;
  /* 12822672 push 2 */
  push32((uint32_t)(0x2u));
  /* 12822674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822677 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1282267a push eax */
  push32((uint32_t)(EAX));
  /* 1282267b call 0x128235d0 */
  push32(0x12822680u); f_128235d0();
  /* 12822680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12822683:;
  /* 12822683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822686 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282268a je 0x1282269d */
  if (C.zf) goto L_1282269d;
  /* 1282268c push 2 */
  push32((uint32_t)(0x2u));
  /* 1282268e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822691 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12822694 push eax */
  push32((uint32_t)(EAX));
  /* 12822695 call 0x128235d0 */
  push32(0x1282269au); f_128235d0();
  /* 1282269a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282269d:;
  /* 1282269d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226a0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128226a4 je 0x128226b7 */
  if (C.zf) goto L_128226b7;
  /* 128226a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 128226a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226ab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 128226ae push eax */
  push32((uint32_t)(EAX));
  /* 128226af call 0x128235d0 */
  push32(0x128226b4u); f_128235d0();
  /* 128226b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128226b7:;
  /* 128226b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226ba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128226be je 0x128226d1 */
  if (C.zf) goto L_128226d1;
  /* 128226c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 128226c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226c5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 128226c8 push eax */
  push32((uint32_t)(EAX));
  /* 128226c9 call 0x128235d0 */
  push32(0x128226ceu); f_128235d0();
  /* 128226ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128226d1:;
  /* 128226d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226d4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128226d8 je 0x128226eb */
  if (C.zf) goto L_128226eb;
  /* 128226da push 2 */
  push32((uint32_t)(0x2u));
  /* 128226dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226df mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 128226e2 push eax */
  push32((uint32_t)(EAX));
  /* 128226e3 call 0x128235d0 */
  push32(0x128226e8u); f_128235d0();
  /* 128226e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128226eb:;
  /* 128226eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226ee cmp dword ptr [ecx + 0x50], 0x1284cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1284cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128226f5 je 0x12822708 */
  if (C.zf) goto L_12822708;
  /* 128226f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 128226f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128226fc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 128226ff push eax */
  push32((uint32_t)(EAX));
  /* 12822700 call 0x128235d0 */
  push32(0x12822705u); f_128235d0();
  /* 12822705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12822708:;
  /* 12822708 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282270a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282270d push ecx */
  push32((uint32_t)(ECX));
  /* 1282270e call 0x128235d0 */
  push32(0x12822713u); f_128235d0();
  /* 12822713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12822716:;
  /* 12822716 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822718 mov edx, dword ptr [0x1284ca5c] */
  EDX = (r32((uint32_t)(0x1284ca5c)));
  /* 1282271e push edx */
  push32((uint32_t)(EDX));
  /* 1282271f call dword ptr [0x12850290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850290))), 0x12822725u);
L_12822725:;
  /* 12822725 pop ebp */
  EBP = (pop32());
  /* 12822726 ret  */
  ESPCHK(0x12822620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x12822730 (11 bytes, 5 insns) */
void f_12822730(void) {
  FTRACE(0x12822730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822730 push ebp */
  push32((uint32_t)(EBP));
  /* 12822731 mov ebp, esp */
  EBP = (ESP);
  /* 12822733 call dword ptr [0x1285028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285028c))), 0x12822739u);
  /* 12822739 pop ebp */
  EBP = (pop32());
  /* 1282273a ret  */
  ESPCHK(0x12822730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x12822740 (11 bytes, 5 insns) */
void f_12822740(void) {
  FTRACE(0x12822740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822740 push ebp */
  push32((uint32_t)(EBP));
  /* 12822741 mov ebp, esp */
  EBP = (ESP);
  /* 12822743 call dword ptr [0x128502a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a8))), 0x12822749u);
  /* 12822749 pop ebp */
  EBP = (pop32());
  /* 1282274a ret  */
  ESPCHK(0x12822740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x12822750 (804 bytes, 236 insns) */
void f_12822750(void) {
  FTRACE(0x12822750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822750 push ebp */
  push32((uint32_t)(EBP));
  /* 12822751 mov ebp, esp */
  EBP = (ESP);
  /* 12822753 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12822756 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1282275b push 0x12849394 */
  push32((uint32_t)(0x12849394u));
  /* 12822760 push 2 */
  push32((uint32_t)(0x2u));
  /* 12822762 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12822767 call 0x12822b40 */
  push32(0x1282276cu); f_12822b40();
  /* 1282276c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282276f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12822772 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822776 jne 0x12822782 */
  if (!C.zf) goto L_12822782;
  /* 12822778 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1282277a call 0x12821ab0 */
  push32(0x1282277fu); f_12821ab0();
  /* 1282277f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12822782:;
  /* 12822782 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822785 mov dword ptr [0x1284fe60], eax */
  w32((uint32_t)(0x1284fe60), (EAX));
  /* 1282278a mov dword ptr [0x1284ff9c], 0x20 */
  w32((uint32_t)(0x1284ff9c), (0x20u));
  /* 12822794 jmp 0x1282279f */
  goto L_1282279f;
L_12822796:;
  /* 12822796 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822799 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282279c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1282279f:;
  /* 1282279f mov edx, dword ptr [0x1284fe60] */
  EDX = (r32((uint32_t)(0x1284fe60)));
  /* 128227a5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128227ab cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128227ae jae 0x128227d3 */
  if (!C.cf) goto L_128227d3;
  /* 128227b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 128227b3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 128227b7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 128227ba mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 128227c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 128227c3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 128227c7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 128227ca mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 128227d1 jmp 0x12822796 */
  goto L_12822796;
L_128227d3:;
  /* 128227d3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 128227d6 push ecx */
  push32((uint32_t)(ECX));
  /* 128227d7 call dword ptr [0x128502b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b4))), 0x128227ddu);
  /* 128227dd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 128227e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128227e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128227e8 je 0x12822975 */
  if (C.zf) goto L_12822975;
  /* 128227ee cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128227f2 je 0x12822975 */
  if (C.zf) goto L_12822975;
  /* 128227f8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128227fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128227fd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12822800 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12822803 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822806 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12822809 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282280c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282280f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12822812 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822819 jge 0x12822823 */
  if ((C.sf==C.of)) goto L_12822823;
  /* 1282281b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1282281e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12822821 jmp 0x1282282a */
  goto L_1282282a;
L_12822823:;
  /* 12822823 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1282282a:;
  /* 1282282a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1282282d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12822830 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12822837 jmp 0x12822842 */
  goto L_12822842;
L_12822839:;
  /* 12822839 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1282283c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282283f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12822842:;
  /* 12822842 mov ecx, dword ptr [0x1284ff9c] */
  ECX = (r32((uint32_t)(0x1284ff9c)));
  /* 12822848 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282284b jge 0x128228e2 */
  if ((C.sf==C.of)) goto L_128228e2;
  /* 12822851 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12822856 push 0x12849394 */
  push32((uint32_t)(0x12849394u));
  /* 1282285b push 2 */
  push32((uint32_t)(0x2u));
  /* 1282285d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12822862 call 0x12822b40 */
  push32(0x12822867u); f_12822b40();
  /* 12822867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282286a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1282286d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822871 jne 0x1282287e */
  if (!C.zf) goto L_1282287e;
  /* 12822873 mov edx, dword ptr [0x1284ff9c] */
  EDX = (r32((uint32_t)(0x1284ff9c)));
  /* 12822879 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1282287c jmp 0x128228e2 */
  goto L_128228e2;
L_1282287e:;
  /* 1282287e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12822881 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822884 mov dword ptr [eax*4 + 0x1284fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1284fe60), (ECX));
  /* 1282288b mov edx, dword ptr [0x1284ff9c] */
  EDX = (r32((uint32_t)(0x1284ff9c)));
  /* 12822891 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822894 mov dword ptr [0x1284ff9c], edx */
  w32((uint32_t)(0x1284ff9c), (EDX));
  /* 1282289a jmp 0x128228a5 */
  goto L_128228a5;
L_1282289c:;
  /* 1282289c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1282289f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128228a2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_128228a5:;
  /* 128228a5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 128228a8 mov edx, dword ptr [ecx*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 128228af add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128228b5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128228b8 jae 0x128228dd */
  if (!C.cf) goto L_128228dd;
  /* 128228ba mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 128228bd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 128228c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 128228c4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 128228ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 128228cd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 128228d1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 128228d4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 128228db jmp 0x1282289c */
  goto L_1282289c;
L_128228dd:;
  /* 128228dd jmp 0x12822839 */
  goto L_12822839;
L_128228e2:;
  /* 128228e2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 128228e9 jmp 0x12822906 */
  goto L_12822906;
L_128228eb:;
  /* 128228eb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 128228ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128228f1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 128228f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128228f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128228fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128228fd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12822900 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822903 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12822906:;
  /* 12822906 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12822909 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282290c jge 0x12822975 */
  if ((C.sf==C.of)) goto L_12822975;
  /* 1282290e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12822911 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822914 je 0x12822970 */
  if (C.zf) goto L_12822970;
  /* 12822916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822919 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282291c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282291f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12822921 je 0x12822970 */
  if (C.zf) goto L_12822970;
  /* 12822923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822926 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12822929 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1282292c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282292e jne 0x12822940 */
  if (!C.zf) goto L_12822940;
  /* 12822930 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12822933 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12822935 push edx */
  push32((uint32_t)(EDX));
  /* 12822936 call dword ptr [0x128502b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b0))), 0x1282293cu);
  /* 1282293c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282293e je 0x12822970 */
  if (C.zf) goto L_12822970;
L_12822940:;
  /* 12822940 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12822943 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12822946 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12822949 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282294c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282294f mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 12822956 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822958 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1282295b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1282295e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12822961 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12822963 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12822965 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822968 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282296b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282296d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12822970:;
  /* 12822970 jmp 0x128228eb */
  goto L_128228eb;
L_12822975:;
  /* 12822975 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1282297c jmp 0x12822987 */
  goto L_12822987;
L_1282297e:;
  /* 1282297e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12822981 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822984 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12822987:;
  /* 12822987 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282298b jge 0x12822a64 */
  if ((C.sf==C.of)) goto L_12822a64;
  /* 12822991 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12822994 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12822997 mov edx, dword ptr [0x1284fe60] */
  EDX = (r32((uint32_t)(0x1284fe60)));
  /* 1282299d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282299f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 128229a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 128229a5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128229a8 jne 0x12822a50 */
  if (!C.zf) goto L_12822a50;
  /* 128229ae mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 128229b1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 128229b5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128229b9 jne 0x128229c4 */
  if (!C.zf) goto L_128229c4;
  /* 128229bb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 128229c2 jmp 0x128229d4 */
  goto L_128229d4;
L_128229c4:;
  /* 128229c4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 128229c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128229ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 128229cc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128229ce add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128229d1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_128229d4:;
  /* 128229d4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 128229d7 push eax */
  push32((uint32_t)(EAX));
  /* 128229d8 call dword ptr [0x12850260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850260))), 0x128229deu);
  /* 128229de mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 128229e1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128229e5 je 0x12822a3f */
  if (C.zf) goto L_12822a3f;
  /* 128229e7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 128229ea push ecx */
  push32((uint32_t)(ECX));
  /* 128229eb call dword ptr [0x128502b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b0))), 0x128229f1u);
  /* 128229f1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 128229f4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128229f8 je 0x12822a3f */
  if (C.zf) goto L_12822a3f;
  /* 128229fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 128229fd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12822a00 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12822a02 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12822a05 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12822a0b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822a0e jne 0x12822a20 */
  if (!C.zf) goto L_12822a20;
  /* 12822a10 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a13 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12822a16 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12822a18 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a1b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12822a1e jmp 0x12822a3d */
  goto L_12822a3d;
L_12822a20:;
  /* 12822a20 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12822a23 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12822a29 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822a2c jne 0x12822a3d */
  if (!C.zf) goto L_12822a3d;
  /* 12822a2e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a31 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12822a34 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12822a37 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a3a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12822a3d:;
  /* 12822a3d jmp 0x12822a4e */
  goto L_12822a4e;
L_12822a3f:;
  /* 12822a3f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a42 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12822a45 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12822a48 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a4b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12822a4e:;
  /* 12822a4e jmp 0x12822a5f */
  goto L_12822a5f;
L_12822a50:;
  /* 12822a50 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a53 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12822a56 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12822a59 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12822a5c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12822a5f:;
  /* 12822a5f jmp 0x1282297e */
  goto L_1282297e;
L_12822a64:;
  /* 12822a64 mov eax, dword ptr [0x1284ff9c] */
  EAX = (r32((uint32_t)(0x1284ff9c)));
  /* 12822a69 push eax */
  push32((uint32_t)(EAX));
  /* 12822a6a call dword ptr [0x128502ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502ac))), 0x12822a70u);
  /* 12822a70 mov esp, ebp */
  ESP = (EBP);
  /* 12822a72 pop ebp */
  EBP = (pop32());
  /* 12822a73 ret  */
  ESPCHK(0x12822750u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12822a80 (155 bytes, 45 insns) */
void f_12822a80(void) {
  FTRACE(0x12822a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12822a81 mov ebp, esp */
  EBP = (ESP);
  /* 12822a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12822a86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12822a8d jmp 0x12822a98 */
  goto L_12822a98;
L_12822a8f:;
  /* 12822a8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822a92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822a95 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12822a98:;
  /* 12822a98 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822a9c jge 0x12822b17 */
  if ((C.sf==C.of)) goto L_12822b17;
  /* 12822a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822aa1 cmp dword ptr [ecx*4 + 0x1284fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1284fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822aa9 je 0x12822b12 */
  if (C.zf) goto L_12822b12;
  /* 12822aab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822aae mov eax, dword ptr [edx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 12822ab5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12822ab8 jmp 0x12822ac3 */
  goto L_12822ac3;
L_12822aba:;
  /* 12822aba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822abd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822ac0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12822ac3:;
  /* 12822ac3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822ac6 mov eax, dword ptr [edx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 12822acd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822ad2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822ad5 jae 0x12822aef */
  if (!C.cf) goto L_12822aef;
  /* 12822ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822ada cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822ade je 0x12822aed */
  if (C.zf) goto L_12822aed;
  /* 12822ae0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822ae3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822ae6 push edx */
  push32((uint32_t)(EDX));
  /* 12822ae7 call dword ptr [0x128502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b8))), 0x12822aedu);
L_12822aed:;
  /* 12822aed jmp 0x12822aba */
  goto L_12822aba;
L_12822aef:;
  /* 12822aef push 2 */
  push32((uint32_t)(0x2u));
  /* 12822af1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822af4 mov ecx, dword ptr [eax*4 + 0x1284fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 12822afb push ecx */
  push32((uint32_t)(ECX));
  /* 12822afc call 0x128235d0 */
  push32(0x12822b01u); f_128235d0();
  /* 12822b01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822b04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822b07 mov dword ptr [edx*4 + 0x1284fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x1284fe60), (0x0u));
L_12822b12:;
  /* 12822b12 jmp 0x12822a8f */
  goto L_12822a8f;
L_12822b17:;
  /* 12822b17 mov esp, ebp */
  ESP = (EBP);
  /* 12822b19 pop ebp */
  EBP = (pop32());
  /* 12822b1a ret  */
  ESPCHK(0x12822a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x12822b20 (29 bytes, 13 insns) */
void f_12822b20(void) {
  FTRACE(0x12822b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12822b21 mov ebp, esp */
  EBP = (ESP);
  /* 12822b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822b29 mov eax, dword ptr [0x1284e670] */
  EAX = (r32((uint32_t)(0x1284e670)));
  /* 12822b2e push eax */
  push32((uint32_t)(EAX));
  /* 12822b2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822b32 push ecx */
  push32((uint32_t)(ECX));
  /* 12822b33 call 0x12822b90 */
  push32(0x12822b38u); f_12822b90();
  /* 12822b38 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822b3b pop ebp */
  EBP = (pop32());
  /* 12822b3c ret  */
  ESPCHK(0x12822b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b40 @ 0x12822b40 (35 bytes, 16 insns) */
void f_12822b40(void) {
  FTRACE(0x12822b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12822b41 mov ebp, esp */
  EBP = (ESP);
  /* 12822b43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822b46 push eax */
  push32((uint32_t)(EAX));
  /* 12822b47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822b4a push ecx */
  push32((uint32_t)(ECX));
  /* 12822b4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822b4e push edx */
  push32((uint32_t)(EDX));
  /* 12822b4f mov eax, dword ptr [0x1284e670] */
  EAX = (r32((uint32_t)(0x1284e670)));
  /* 12822b54 push eax */
  push32((uint32_t)(EAX));
  /* 12822b55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822b58 push ecx */
  push32((uint32_t)(ECX));
  /* 12822b59 call 0x12822b90 */
  push32(0x12822b5eu); f_12822b90();
  /* 12822b5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822b61 pop ebp */
  EBP = (pop32());
  /* 12822b62 ret  */
  ESPCHK(0x12822b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b70 @ 0x12822b70 (27 bytes, 13 insns) */
void f_12822b70(void) {
  FTRACE(0x12822b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12822b71 mov ebp, esp */
  EBP = (ESP);
  /* 12822b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822b79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822b7c push eax */
  push32((uint32_t)(EAX));
  /* 12822b7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822b80 push ecx */
  push32((uint32_t)(ECX));
  /* 12822b81 call 0x12822b90 */
  push32(0x12822b86u); f_12822b90();
  /* 12822b86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822b89 pop ebp */
  EBP = (pop32());
  /* 12822b8a ret  */
  ESPCHK(0x12822b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b90 @ 0x12822b90 (94 bytes, 38 insns) */
void f_12822b90(void) {
  FTRACE(0x12822b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12822b91 mov ebp, esp */
  EBP = (ESP);
  /* 12822b93 push ecx */
  push32((uint32_t)(ECX));
L_12822b94:;
  /* 12822b94 push 9 */
  push32((uint32_t)(0x9u));
  /* 12822b96 call 0x12826540 */
  push32(0x12822b9bu); f_12826540();
  /* 12822b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822b9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12822ba1 push eax */
  push32((uint32_t)(EAX));
  /* 12822ba2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 12822ba6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822ba9 push edx */
  push32((uint32_t)(EDX));
  /* 12822baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822bad push eax */
  push32((uint32_t)(EAX));
  /* 12822bae call 0x12822c10 */
  push32(0x12822bb3u); f_12822c10();
  /* 12822bb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822bb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12822bb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12822bbb call 0x128265e0 */
  push32(0x12822bc0u); f_128265e0();
  /* 12822bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822bc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822bc7 jne 0x12822bcf */
  if (!C.zf) goto L_12822bcf;
  /* 12822bc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822bcd jne 0x12822bd4 */
  if (!C.zf) goto L_12822bd4;
L_12822bcf:;
  /* 12822bcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822bd2 jmp 0x12822bea */
  goto L_12822bea;
L_12822bd4:;
  /* 12822bd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12822bd8 call 0x12826880 */
  push32(0x12822bddu); f_12826880();
  /* 12822bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12822be2 jne 0x12822be8 */
  if (!C.zf) goto L_12822be8;
  /* 12822be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12822be6 jmp 0x12822bea */
  goto L_12822bea;
L_12822be8:;
  /* 12822be8 jmp 0x12822b94 */
  goto L_12822b94;
L_12822bea:;
  /* 12822bea mov esp, ebp */
  ESP = (EBP);
  /* 12822bec pop ebp */
  EBP = (pop32());
  /* 12822bed ret  */
  ESPCHK(0x12822b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bf0 @ 0x12822bf0 (23 bytes, 11 insns) */
void f_12822bf0(void) {
  FTRACE(0x12822bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12822bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12822bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822bf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822bfc push eax */
  push32((uint32_t)(EAX));
  /* 12822bfd call 0x12822c10 */
  push32(0x12822c02u); f_12822c10();
  /* 12822c02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822c05 pop ebp */
  EBP = (pop32());
  /* 12822c06 ret  */
  ESPCHK(0x12822bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c10 @ 0x12822c10 (787 bytes, 254 insns) */
void f_12822c10(void) {
  FTRACE(0x12822c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12822c11 mov ebp, esp */
  EBP = (ESP);
  /* 12822c13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12822c16 push ebx */
  push32((uint32_t)(EBX));
  /* 12822c17 push esi */
  push32((uint32_t)(ESI));
  /* 12822c18 push edi */
  push32((uint32_t)(EDI));
  /* 12822c19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12822c20 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 12822c25 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12822c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12822c2a je 0x12822c5c */
  if (C.zf) goto L_12822c5c;
L_12822c2c:;
  /* 12822c2c call 0x12823ce0 */
  push32(0x12822c31u); f_12823ce0();
  /* 12822c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12822c33 jne 0x12822c56 */
  if (!C.zf) goto L_12822c56;
  /* 12822c35 push 0x12849488 */
  push32((uint32_t)(0x12849488u));
  /* 12822c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12822c3c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12822c41 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12822c46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12822c48 call 0x12821c00 */
  push32(0x12822c4du); f_12821c00();
  /* 12822c4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822c50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822c53 jne 0x12822c56 */
  if (!C.zf) goto L_12822c56;
  /* 12822c55 int3  */
  x86_unimpl("int3 @ 0x12822c55");
L_12822c56:;
  /* 12822c56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12822c58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12822c5a jne 0x12822c2c */
  if (!C.zf) goto L_12822c2c;
L_12822c5c:;
  /* 12822c5c mov edx, dword ptr [0x1284ca88] */
  EDX = (r32((uint32_t)(0x1284ca88)));
  /* 12822c62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12822c65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822c68 cmp eax, dword ptr [0x1284ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822c6e jne 0x12822c71 */
  if (!C.zf) goto L_12822c71;
  /* 12822c70 int3  */
  x86_unimpl("int3 @ 0x12822c70");
L_12822c71:;
  /* 12822c71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822c74 push ecx */
  push32((uint32_t)(ECX));
  /* 12822c75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822c78 push edx */
  push32((uint32_t)(EDX));
  /* 12822c79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822c7c push eax */
  push32((uint32_t)(EAX));
  /* 12822c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822c80 push ecx */
  push32((uint32_t)(ECX));
  /* 12822c81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822c84 push edx */
  push32((uint32_t)(EDX));
  /* 12822c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822c89 call dword ptr [0x1284cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284cc90))), 0x12822c8fu);
  /* 12822c8f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12822c94 jne 0x12822cf4 */
  if (!C.zf) goto L_12822cf4;
  /* 12822c96 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822c9a je 0x12822cc7 */
  if (C.zf) goto L_12822cc7;
L_12822c9c:;
  /* 12822c9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822c9f push eax */
  push32((uint32_t)(EAX));
  /* 12822ca0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12822ca4 push 0x12849444 */
  push32((uint32_t)(0x12849444u));
  /* 12822ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12822cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12822caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12822cb1 call 0x12821c00 */
  push32(0x12822cb6u); f_12821c00();
  /* 12822cb6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822cb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822cbc jne 0x12822cbf */
  if (!C.zf) goto L_12822cbf;
  /* 12822cbe int3  */
  x86_unimpl("int3 @ 0x12822cbe");
L_12822cbf:;
  /* 12822cbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12822cc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12822cc3 jne 0x12822c9c */
  if (!C.zf) goto L_12822c9c;
  /* 12822cc5 jmp 0x12822ced */
  goto L_12822ced;
L_12822cc7:;
  /* 12822cc7 push 0x12849420 */
  push32((uint32_t)(0x12849420u));
  /* 12822ccc push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12822cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822cd9 call 0x12821c00 */
  push32(0x12822cdeu); f_12821c00();
  /* 12822cde add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822ce1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822ce4 jne 0x12822ce7 */
  if (!C.zf) goto L_12822ce7;
  /* 12822ce6 int3  */
  x86_unimpl("int3 @ 0x12822ce6");
L_12822ce7:;
  /* 12822ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12822ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12822ceb jne 0x12822cc7 */
  if (!C.zf) goto L_12822cc7;
L_12822ced:;
  /* 12822ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12822cef jmp 0x12822f1c */
  goto L_12822f1c;
L_12822cf4:;
  /* 12822cf4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822cf7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12822cfd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d00 je 0x12822d16 */
  if (C.zf) goto L_12822d16;
  /* 12822d02 mov edx, dword ptr [0x1284ca84] */
  EDX = (r32((uint32_t)(0x1284ca84)));
  /* 12822d08 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12822d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12822d0d jne 0x12822d16 */
  if (!C.zf) goto L_12822d16;
  /* 12822d0f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12822d16:;
  /* 12822d16 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d1a ja 0x12822d27 */
  if ((!C.cf&&!C.zf)) goto L_12822d27;
  /* 12822d1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822d1f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822d22 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d25 jbe 0x12822d53 */
  if ((C.cf||C.zf)) goto L_12822d53;
L_12822d27:;
  /* 12822d27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822d2a push ecx */
  push32((uint32_t)(ECX));
  /* 12822d2b push 0x128493f8 */
  push32((uint32_t)(0x128493f8u));
  /* 12822d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822d36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822d38 call 0x12821c00 */
  push32(0x12822d3du); f_12821c00();
  /* 12822d3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822d40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d43 jne 0x12822d46 */
  if (!C.zf) goto L_12822d46;
  /* 12822d45 int3  */
  x86_unimpl("int3 @ 0x12822d45");
L_12822d46:;
  /* 12822d46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12822d48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12822d4a jne 0x12822d27 */
  if (!C.zf) goto L_12822d27;
  /* 12822d4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12822d4e jmp 0x12822f1c */
  goto L_12822f1c;
L_12822d53:;
  /* 12822d53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822d56 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12822d5b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d5e je 0x12822da0 */
  if (C.zf) goto L_12822da0;
  /* 12822d60 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d64 je 0x12822da0 */
  if (C.zf) goto L_12822da0;
  /* 12822d66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822d69 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12822d6f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d72 je 0x12822da0 */
  if (C.zf) goto L_12822da0;
  /* 12822d74 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d78 je 0x12822da0 */
  if (C.zf) goto L_12822da0;
L_12822d7a:;
  /* 12822d7a push 0x128493c4 */
  push32((uint32_t)(0x128493c4u));
  /* 12822d7f push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12822d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822d8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12822d8c call 0x12821c00 */
  push32(0x12822d91u); f_12821c00();
  /* 12822d91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822d94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822d97 jne 0x12822d9a */
  if (!C.zf) goto L_12822d9a;
  /* 12822d99 int3  */
  x86_unimpl("int3 @ 0x12822d99");
L_12822d9a:;
  /* 12822d9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12822d9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12822d9e jne 0x12822d7a */
  if (!C.zf) goto L_12822d7a;
L_12822da0:;
  /* 12822da0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822da3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822da6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12822da9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12822dac push ecx */
  push32((uint32_t)(ECX));
  /* 12822dad call 0x12826990 */
  push32(0x12822db2u); f_12826990();
  /* 12822db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822db5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12822db8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822dbc jne 0x12822dc5 */
  if (!C.zf) goto L_12822dc5;
  /* 12822dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12822dc0 jmp 0x12822f1c */
  goto L_12822f1c;
L_12822dc5:;
  /* 12822dc5 mov edx, dword ptr [0x1284ca88] */
  EDX = (r32((uint32_t)(0x1284ca88)));
  /* 12822dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822dce mov dword ptr [0x1284ca88], edx */
  w32((uint32_t)(0x1284ca88), (EDX));
  /* 12822dd4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822dd8 je 0x12822e23 */
  if (C.zf) goto L_12822e23;
  /* 12822dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822ddd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12822de3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822de6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12822ded mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822df0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12822df7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822dfa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12822e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822e07 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12822e0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e0d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12822e14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e17 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12822e1e jmp 0x12822ec3 */
  goto L_12822ec3;
L_12822e23:;
  /* 12822e23 mov edx, dword ptr [0x1284e4d0] */
  EDX = (r32((uint32_t)(0x1284e4d0)));
  /* 12822e29 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822e2c mov dword ptr [0x1284e4d0], edx */
  w32((uint32_t)(0x1284e4d0), (EDX));
  /* 12822e32 mov eax, dword ptr [0x1284e4d8] */
  EAX = (r32((uint32_t)(0x1284e4d8)));
  /* 12822e37 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822e3a mov dword ptr [0x1284e4d8], eax */
  w32((uint32_t)(0x1284e4d8), (EAX));
  /* 12822e3f mov ecx, dword ptr [0x1284e4d8] */
  ECX = (r32((uint32_t)(0x1284e4d8)));
  /* 12822e45 cmp ecx, dword ptr [0x1284e4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822e4b jbe 0x12822e59 */
  if ((C.cf||C.zf)) goto L_12822e59;
  /* 12822e4d mov edx, dword ptr [0x1284e4d8] */
  EDX = (r32((uint32_t)(0x1284e4d8)));
  /* 12822e53 mov dword ptr [0x1284e4dc], edx */
  w32((uint32_t)(0x1284e4dc), (EDX));
L_12822e59:;
  /* 12822e59 cmp dword ptr [0x1284e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822e60 je 0x12822e6f */
  if (C.zf) goto L_12822e6f;
  /* 12822e62 mov eax, dword ptr [0x1284e4d4] */
  EAX = (r32((uint32_t)(0x1284e4d4)));
  /* 12822e67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12822e6d jmp 0x12822e78 */
  goto L_12822e78;
L_12822e6f:;
  /* 12822e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e72 mov dword ptr [0x1284e4cc], edx */
  w32((uint32_t)(0x1284e4cc), (EDX));
L_12822e78:;
  /* 12822e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e7b mov ecx, dword ptr [0x1284e4d4] */
  ECX = (r32((uint32_t)(0x1284e4d4)));
  /* 12822e81 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12822e83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e86 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12822e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822e93 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12822e96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822e99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822e9c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12822e9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822ea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822ea5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12822ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822eab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822eae mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12822eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822eb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822eb7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12822eba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822ebd mov dword ptr [0x1284e4d4], ecx */
  w32((uint32_t)(0x1284e4d4), (ECX));
L_12822ec3:;
  /* 12822ec3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12822ec5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12822ec7 mov dl, byte ptr [0x1284ca90] */
  DL = (r8((uint32_t)(0x1284ca90)));
  /* 12822ecd push edx */
  push32((uint32_t)(EDX));
  /* 12822ece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822ed1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822ed4 push eax */
  push32((uint32_t)(EAX));
  /* 12822ed5 call 0x128268b0 */
  push32(0x12822edau); f_128268b0();
  /* 12822eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822edd push 4 */
  push32((uint32_t)(0x4u));
  /* 12822edf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12822ee1 mov cl, byte ptr [0x1284ca90] */
  CL = (r8((uint32_t)(0x1284ca90)));
  /* 12822ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 12822ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822eee lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12822ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 12822ef3 call 0x128268b0 */
  push32(0x12822ef8u); f_128268b0();
  /* 12822ef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822efb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822efe push edx */
  push32((uint32_t)(EDX));
  /* 12822eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12822f01 mov al, byte ptr [0x1284ca92] */
  AL = (r8((uint32_t)(0x1284ca92)));
  /* 12822f06 push eax */
  push32((uint32_t)(EAX));
  /* 12822f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822f0a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822f0d push ecx */
  push32((uint32_t)(ECX));
  /* 12822f0e call 0x128268b0 */
  push32(0x12822f13u); f_128268b0();
  /* 12822f13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822f16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12822f19 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12822f1c:;
  /* 12822f1c pop edi */
  EDI = (pop32());
  /* 12822f1d pop esi */
  ESI = (pop32());
  /* 12822f1e pop ebx */
  EBX = (pop32());
  /* 12822f1f mov esp, ebp */
  ESP = (EBP);
  /* 12822f21 pop ebp */
  EBP = (pop32());
  /* 12822f22 ret  */
  ESPCHK(0x12822c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f30 @ 0x12822f30 (27 bytes, 13 insns) */
void f_12822f30(void) {
  FTRACE(0x12822f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12822f31 mov ebp, esp */
  EBP = (ESP);
  /* 12822f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822f37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822f39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822f3c push eax */
  push32((uint32_t)(EAX));
  /* 12822f3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822f40 push ecx */
  push32((uint32_t)(ECX));
  /* 12822f41 call 0x12822f50 */
  push32(0x12822f46u); f_12822f50();
  /* 12822f46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822f49 pop ebp */
  EBP = (pop32());
  /* 12822f4a ret  */
  ESPCHK(0x12822f30u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12822f50 (96 bytes, 37 insns) */
void f_12822f50(void) {
  FTRACE(0x12822f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12822f51 mov ebp, esp */
  EBP = (ESP);
  /* 12822f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12822f56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822f59 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12822f5d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12822f60 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12822f63 push ecx */
  push32((uint32_t)(ECX));
  /* 12822f64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822f67 push edx */
  push32((uint32_t)(EDX));
  /* 12822f68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822f6b push eax */
  push32((uint32_t)(EAX));
  /* 12822f6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822f6f push ecx */
  push32((uint32_t)(ECX));
  /* 12822f70 call 0x12822b40 */
  push32(0x12822f75u); f_12822b40();
  /* 12822f75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822f78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12822f7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822f7f je 0x12822fa9 */
  if (C.zf) goto L_12822fa9;
  /* 12822f81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822f84 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12822f87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12822f8a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822f8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12822f90:;
  /* 12822f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12822f93 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12822f96 jae 0x12822fa9 */
  if (!C.cf) goto L_12822fa9;
  /* 12822f98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12822f9b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12822f9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12822fa1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12822fa4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12822fa7 jmp 0x12822f90 */
  goto L_12822f90;
L_12822fa9:;
  /* 12822fa9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12822fac mov esp, ebp */
  ESP = (EBP);
  /* 12822fae pop ebp */
  EBP = (pop32());
  /* 12822faf ret  */
  ESPCHK(0x12822f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fb0 @ 0x12822fb0 (27 bytes, 13 insns) */
void f_12822fb0(void) {
  FTRACE(0x12822fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12822fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12822fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12822fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12822fb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822fbc push eax */
  push32((uint32_t)(EAX));
  /* 12822fbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12822fc1 call 0x12822fd0 */
  push32(0x12822fc6u); f_12822fd0();
  /* 12822fc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822fc9 pop ebp */
  EBP = (pop32());
  /* 12822fca ret  */
  ESPCHK(0x12822fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x12822fd0 (64 bytes, 27 insns) */
void f_12822fd0(void) {
  FTRACE(0x12822fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12822fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12822fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12822fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12822fd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12822fd6 call 0x12826540 */
  push32(0x12822fdbu); f_12826540();
  /* 12822fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822fde push 1 */
  push32((uint32_t)(0x1u));
  /* 12822fe0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12822fe3 push eax */
  push32((uint32_t)(EAX));
  /* 12822fe4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12822fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 12822fe8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12822feb push edx */
  push32((uint32_t)(EDX));
  /* 12822fec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12822fef push eax */
  push32((uint32_t)(EAX));
  /* 12822ff0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12822ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12822ff4 call 0x12823010 */
  push32(0x12822ff9u); f_12823010();
  /* 12822ff9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12822ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12822fff push 9 */
  push32((uint32_t)(0x9u));
  /* 12823001 call 0x128265e0 */
  push32(0x12823006u); f_128265e0();
  /* 12823006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282300c mov esp, ebp */
  ESP = (EBP);
  /* 1282300e pop ebp */
  EBP = (pop32());
  /* 1282300f ret  */
  ESPCHK(0x12822fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003010 @ 0x12823010 (1297 bytes, 431 insns) */
void f_12823010(void) {
  FTRACE(0x12823010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823010 push ebp */
  push32((uint32_t)(EBP));
  /* 12823011 mov ebp, esp */
  EBP = (ESP);
  /* 12823013 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823016 push ebx */
  push32((uint32_t)(EBX));
  /* 12823017 push esi */
  push32((uint32_t)(ESI));
  /* 12823018 push edi */
  push32((uint32_t)(EDI));
  /* 12823019 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12823020 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823024 jne 0x12823043 */
  if (!C.zf) goto L_12823043;
  /* 12823026 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12823029 push eax */
  push32((uint32_t)(EAX));
  /* 1282302a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282302d push ecx */
  push32((uint32_t)(ECX));
  /* 1282302e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12823031 push edx */
  push32((uint32_t)(EDX));
  /* 12823032 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823035 push eax */
  push32((uint32_t)(EAX));
  /* 12823036 call 0x12822b40 */
  push32(0x1282303bu); f_12822b40();
  /* 1282303b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282303e jmp 0x1282351a */
  goto L_1282351a;
L_12823043:;
  /* 12823043 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823047 je 0x12823066 */
  if (C.zf) goto L_12823066;
  /* 12823049 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282304d jne 0x12823066 */
  if (!C.zf) goto L_12823066;
  /* 1282304f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12823052 push ecx */
  push32((uint32_t)(ECX));
  /* 12823053 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823056 push edx */
  push32((uint32_t)(EDX));
  /* 12823057 call 0x128235d0 */
  push32(0x1282305cu); f_128235d0();
  /* 1282305c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282305f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823061 jmp 0x1282351a */
  goto L_1282351a;
L_12823066:;
  /* 12823066 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 1282306b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1282306e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823070 je 0x128230a2 */
  if (C.zf) goto L_128230a2;
L_12823072:;
  /* 12823072 call 0x12823ce0 */
  push32(0x12823077u); f_12823ce0();
  /* 12823077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823079 jne 0x1282309c */
  if (!C.zf) goto L_1282309c;
  /* 1282307b push 0x12849488 */
  push32((uint32_t)(0x12849488u));
  /* 12823080 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823082 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12823087 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 1282308c push 2 */
  push32((uint32_t)(0x2u));
  /* 1282308e call 0x12821c00 */
  push32(0x12823093u); f_12821c00();
  /* 12823093 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823096 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823099 jne 0x1282309c */
  if (!C.zf) goto L_1282309c;
  /* 1282309b int3  */
  x86_unimpl("int3 @ 0x1282309b");
L_1282309c:;
  /* 1282309c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282309e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128230a0 jne 0x12823072 */
  if (!C.zf) goto L_12823072;
L_128230a2:;
  /* 128230a2 mov edx, dword ptr [0x1284ca88] */
  EDX = (r32((uint32_t)(0x1284ca88)));
  /* 128230a8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 128230ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128230ae cmp eax, dword ptr [0x1284ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128230b4 jne 0x128230b7 */
  if (!C.zf) goto L_128230b7;
  /* 128230b6 int3  */
  x86_unimpl("int3 @ 0x128230b6");
L_128230b7:;
  /* 128230b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128230ba push ecx */
  push32((uint32_t)(ECX));
  /* 128230bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128230be push edx */
  push32((uint32_t)(EDX));
  /* 128230bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128230c2 push eax */
  push32((uint32_t)(EAX));
  /* 128230c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128230c6 push ecx */
  push32((uint32_t)(ECX));
  /* 128230c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128230ca push edx */
  push32((uint32_t)(EDX));
  /* 128230cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128230ce push eax */
  push32((uint32_t)(EAX));
  /* 128230cf push 2 */
  push32((uint32_t)(0x2u));
  /* 128230d1 call dword ptr [0x1284cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284cc90))), 0x128230d7u);
  /* 128230d7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128230da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128230dc jne 0x1282313c */
  if (!C.zf) goto L_1282313c;
  /* 128230de cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128230e2 je 0x1282310f */
  if (C.zf) goto L_1282310f;
L_128230e4:;
  /* 128230e4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128230e7 push ecx */
  push32((uint32_t)(ECX));
  /* 128230e8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128230eb push edx */
  push32((uint32_t)(EDX));
  /* 128230ec push 0x12849604 */
  push32((uint32_t)(0x12849604u));
  /* 128230f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 128230f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128230f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128230f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128230f9 call 0x12821c00 */
  push32(0x128230feu); f_12821c00();
  /* 128230fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823101 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823104 jne 0x12823107 */
  if (!C.zf) goto L_12823107;
  /* 12823106 int3  */
  x86_unimpl("int3 @ 0x12823106");
L_12823107:;
  /* 12823107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282310b jne 0x128230e4 */
  if (!C.zf) goto L_128230e4;
  /* 1282310d jmp 0x12823135 */
  goto L_12823135;
L_1282310f:;
  /* 1282310f push 0x128495e0 */
  push32((uint32_t)(0x128495e0u));
  /* 12823114 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12823119 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282311b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282311d push 0 */
  push32((uint32_t)(0x0u));
  /* 1282311f push 0 */
  push32((uint32_t)(0x0u));
  /* 12823121 call 0x12821c00 */
  push32(0x12823126u); f_12821c00();
  /* 12823126 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823129 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282312c jne 0x1282312f */
  if (!C.zf) goto L_1282312f;
  /* 1282312e int3  */
  x86_unimpl("int3 @ 0x1282312e");
L_1282312f:;
  /* 1282312f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823131 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823133 jne 0x1282310f */
  if (!C.zf) goto L_1282310f;
L_12823135:;
  /* 12823135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823137 jmp 0x1282351a */
  goto L_1282351a;
L_1282313c:;
  /* 1282313c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823140 jbe 0x1282316e */
  if ((C.cf||C.zf)) goto L_1282316e;
L_12823142:;
  /* 12823142 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823145 push edx */
  push32((uint32_t)(EDX));
  /* 12823146 push 0x128495b0 */
  push32((uint32_t)(0x128495b0u));
  /* 1282314b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282314d push 0 */
  push32((uint32_t)(0x0u));
  /* 1282314f push 0 */
  push32((uint32_t)(0x0u));
  /* 12823151 push 1 */
  push32((uint32_t)(0x1u));
  /* 12823153 call 0x12821c00 */
  push32(0x12823158u); f_12821c00();
  /* 12823158 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282315b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282315e jne 0x12823161 */
  if (!C.zf) goto L_12823161;
  /* 12823160 int3  */
  x86_unimpl("int3 @ 0x12823160");
L_12823161:;
  /* 12823161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823165 jne 0x12823142 */
  if (!C.zf) goto L_12823142;
  /* 12823167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823169 jmp 0x1282351a */
  goto L_1282351a;
L_1282316e:;
  /* 1282316e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823172 je 0x128231b6 */
  if (C.zf) goto L_128231b6;
  /* 12823174 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12823177 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1282317d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823180 je 0x128231b6 */
  if (C.zf) goto L_128231b6;
  /* 12823182 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12823185 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1282318b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282318e je 0x128231b6 */
  if (C.zf) goto L_128231b6;
L_12823190:;
  /* 12823190 push 0x128493c4 */
  push32((uint32_t)(0x128493c4u));
  /* 12823195 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 1282319a push 0 */
  push32((uint32_t)(0x0u));
  /* 1282319c push 0 */
  push32((uint32_t)(0x0u));
  /* 1282319e push 0 */
  push32((uint32_t)(0x0u));
  /* 128231a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 128231a2 call 0x12821c00 */
  push32(0x128231a7u); f_12821c00();
  /* 128231a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128231aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128231ad jne 0x128231b0 */
  if (!C.zf) goto L_128231b0;
  /* 128231af int3  */
  x86_unimpl("int3 @ 0x128231af");
L_128231b0:;
  /* 128231b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128231b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128231b4 jne 0x12823190 */
  if (!C.zf) goto L_12823190;
L_128231b6:;
  /* 128231b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128231b9 push ecx */
  push32((uint32_t)(ECX));
  /* 128231ba call 0x12824140 */
  push32(0x128231bfu); f_12824140();
  /* 128231bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128231c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128231c4 jne 0x128231e7 */
  if (!C.zf) goto L_128231e7;
  /* 128231c6 push 0x1284958c */
  push32((uint32_t)(0x1284958cu));
  /* 128231cb push 0 */
  push32((uint32_t)(0x0u));
  /* 128231cd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 128231d2 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 128231d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 128231d9 call 0x12821c00 */
  push32(0x128231deu); f_12821c00();
  /* 128231de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128231e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128231e4 jne 0x128231e7 */
  if (!C.zf) goto L_128231e7;
  /* 128231e6 int3  */
  x86_unimpl("int3 @ 0x128231e6");
L_128231e7:;
  /* 128231e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128231e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128231eb jne 0x128231b6 */
  if (!C.zf) goto L_128231b6;
  /* 128231ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128231f0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128231f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128231f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128231f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128231fd jne 0x12823206 */
  if (!C.zf) goto L_12823206;
  /* 128231ff mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12823206:;
  /* 12823206 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282320a je 0x1282324a */
  if (C.zf) goto L_1282324a;
L_1282320c:;
  /* 1282320c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282320f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823216 jne 0x12823221 */
  if (!C.zf) goto L_12823221;
  /* 12823218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282321b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282321f je 0x12823242 */
  if (C.zf) goto L_12823242;
L_12823221:;
  /* 12823221 push 0x12849544 */
  push32((uint32_t)(0x12849544u));
  /* 12823226 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823228 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1282322d push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823232 push 2 */
  push32((uint32_t)(0x2u));
  /* 12823234 call 0x12821c00 */
  push32(0x12823239u); f_12821c00();
  /* 12823239 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282323c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282323f jne 0x12823242 */
  if (!C.zf) goto L_12823242;
  /* 12823241 int3  */
  x86_unimpl("int3 @ 0x12823241");
L_12823242:;
  /* 12823242 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823244 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823246 jne 0x1282320c */
  if (!C.zf) goto L_1282320c;
  /* 12823248 jmp 0x128232ae */
  goto L_128232ae;
L_1282324a:;
  /* 1282324a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282324d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823250 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12823255 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823258 jne 0x1282326f */
  if (!C.zf) goto L_1282326f;
  /* 1282325a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282325d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12823263 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823266 jne 0x1282326f */
  if (!C.zf) goto L_1282326f;
  /* 12823268 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1282326f:;
  /* 1282326f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823272 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823275 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282327a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282327d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12823283 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823285 je 0x128232a8 */
  if (C.zf) goto L_128232a8;
  /* 12823287 push 0x12849508 */
  push32((uint32_t)(0x12849508u));
  /* 1282328c push 0 */
  push32((uint32_t)(0x0u));
  /* 1282328e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12823293 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823298 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282329a call 0x12821c00 */
  push32(0x1282329fu); f_12821c00();
  /* 1282329f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128232a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128232a5 jne 0x128232a8 */
  if (!C.zf) goto L_128232a8;
  /* 128232a7 int3  */
  x86_unimpl("int3 @ 0x128232a7");
L_128232a8:;
  /* 128232a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128232aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128232ac jne 0x1282326f */
  if (!C.zf) goto L_1282326f;
L_128232ae:;
  /* 128232ae cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128232b2 je 0x128232d9 */
  if (C.zf) goto L_128232d9;
  /* 128232b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128232b7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128232ba push eax */
  push32((uint32_t)(EAX));
  /* 128232bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128232be push ecx */
  push32((uint32_t)(ECX));
  /* 128232bf call 0x12826ac0 */
  push32(0x128232c4u); f_12826ac0();
  /* 128232c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128232c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128232ca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128232ce jne 0x128232d7 */
  if (!C.zf) goto L_128232d7;
  /* 128232d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128232d2 jmp 0x1282351a */
  goto L_1282351a;
L_128232d7:;
  /* 128232d7 jmp 0x128232fc */
  goto L_128232fc;
L_128232d9:;
  /* 128232d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128232dc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128232df push edx */
  push32((uint32_t)(EDX));
  /* 128232e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128232e3 push eax */
  push32((uint32_t)(EAX));
  /* 128232e4 call 0x12826a10 */
  push32(0x128232e9u); f_12826a10();
  /* 128232e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128232ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128232ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128232f3 jne 0x128232fc */
  if (!C.zf) goto L_128232fc;
  /* 128232f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128232f7 jmp 0x1282351a */
  goto L_1282351a;
L_128232fc:;
  /* 128232fc mov ecx, dword ptr [0x1284ca88] */
  ECX = (r32((uint32_t)(0x1284ca88)));
  /* 12823302 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823305 mov dword ptr [0x1284ca88], ecx */
  w32((uint32_t)(0x1284ca88), (ECX));
  /* 1282330b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282330f jne 0x12823367 */
  if (!C.zf) goto L_12823367;
  /* 12823311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823314 mov eax, dword ptr [0x1284e4d0] */
  EAX = (r32((uint32_t)(0x1284e4d0)));
  /* 12823319 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282331c mov dword ptr [0x1284e4d0], eax */
  w32((uint32_t)(0x1284e4d0), (EAX));
  /* 12823321 mov ecx, dword ptr [0x1284e4d0] */
  ECX = (r32((uint32_t)(0x1284e4d0)));
  /* 12823327 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282332a mov dword ptr [0x1284e4d0], ecx */
  w32((uint32_t)(0x1284e4d0), (ECX));
  /* 12823330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823333 mov eax, dword ptr [0x1284e4d8] */
  EAX = (r32((uint32_t)(0x1284e4d8)));
  /* 12823338 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282333b mov dword ptr [0x1284e4d8], eax */
  w32((uint32_t)(0x1284e4d8), (EAX));
  /* 12823340 mov ecx, dword ptr [0x1284e4d8] */
  ECX = (r32((uint32_t)(0x1284e4d8)));
  /* 12823346 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823349 mov dword ptr [0x1284e4d8], ecx */
  w32((uint32_t)(0x1284e4d8), (ECX));
  /* 1282334f mov edx, dword ptr [0x1284e4d8] */
  EDX = (r32((uint32_t)(0x1284e4d8)));
  /* 12823355 cmp edx, dword ptr [0x1284e4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282335b jbe 0x12823367 */
  if ((C.cf||C.zf)) goto L_12823367;
  /* 1282335d mov eax, dword ptr [0x1284e4d8] */
  EAX = (r32((uint32_t)(0x1284e4d8)));
  /* 12823362 mov dword ptr [0x1284e4dc], eax */
  w32((uint32_t)(0x1284e4dc), (EAX));
L_12823367:;
  /* 12823367 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282336a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282336d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12823370 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823373 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823376 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823379 jbe 0x1282339f */
  if ((C.cf||C.zf)) goto L_1282339f;
  /* 1282337b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282337e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823381 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823384 push edx */
  push32((uint32_t)(EDX));
  /* 12823385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823387 mov al, byte ptr [0x1284ca92] */
  AL = (r8((uint32_t)(0x1284ca92)));
  /* 1282338c push eax */
  push32((uint32_t)(EAX));
  /* 1282338d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823390 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823393 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823396 push edx */
  push32((uint32_t)(EDX));
  /* 12823397 call 0x128268b0 */
  push32(0x1282339cu); f_128268b0();
  /* 1282339c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282339f:;
  /* 1282339f push 4 */
  push32((uint32_t)(0x4u));
  /* 128233a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128233a3 mov al, byte ptr [0x1284ca90] */
  AL = (r8((uint32_t)(0x1284ca90)));
  /* 128233a8 push eax */
  push32((uint32_t)(EAX));
  /* 128233a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128233ac add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128233af push ecx */
  push32((uint32_t)(ECX));
  /* 128233b0 call 0x128268b0 */
  push32(0x128233b5u); f_128268b0();
  /* 128233b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128233b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128233bc jne 0x128233d9 */
  if (!C.zf) goto L_128233d9;
  /* 128233be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128233c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128233c4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 128233c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128233ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128233cd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 128233d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128233d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128233d6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_128233d9:;
  /* 128233d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128233dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128233df mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_128233e2:;
  /* 128233e2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128233e6 jne 0x12823417 */
  if (!C.zf) goto L_12823417;
  /* 128233e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128233ec jne 0x128233f6 */
  if (!C.zf) goto L_128233f6;
  /* 128233ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128233f1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128233f4 je 0x12823417 */
  if (C.zf) goto L_12823417;
L_128233f6:;
  /* 128233f6 push 0x128494d4 */
  push32((uint32_t)(0x128494d4u));
  /* 128233fb push 0 */
  push32((uint32_t)(0x0u));
  /* 128233fd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12823402 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823407 push 2 */
  push32((uint32_t)(0x2u));
  /* 12823409 call 0x12821c00 */
  push32(0x1282340eu); f_12821c00();
  /* 1282340e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823411 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823414 jne 0x12823417 */
  if (!C.zf) goto L_12823417;
  /* 12823416 int3  */
  x86_unimpl("int3 @ 0x12823416");
L_12823417:;
  /* 12823417 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823419 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282341b jne 0x128233e2 */
  if (!C.zf) goto L_128233e2;
  /* 1282341d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823420 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823423 je 0x1282342b */
  if (C.zf) goto L_1282342b;
  /* 12823425 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823429 je 0x12823433 */
  if (C.zf) goto L_12823433;
L_1282342b:;
  /* 1282342b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282342e jmp 0x1282351a */
  goto L_1282351a;
L_12823433:;
  /* 12823433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823436 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823439 je 0x1282344b */
  if (C.zf) goto L_1282344b;
  /* 1282343b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282343e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12823440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823443 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12823446 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12823449 jmp 0x12823487 */
  goto L_12823487;
L_1282344b:;
  /* 1282344b mov eax, dword ptr [0x1284e4cc] */
  EAX = (r32((uint32_t)(0x1284e4cc)));
  /* 12823450 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823453 je 0x12823476 */
  if (C.zf) goto L_12823476;
  /* 12823455 push 0x128494b8 */
  push32((uint32_t)(0x128494b8u));
  /* 1282345a push 0 */
  push32((uint32_t)(0x0u));
  /* 1282345c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12823461 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823466 push 2 */
  push32((uint32_t)(0x2u));
  /* 12823468 call 0x12821c00 */
  push32(0x1282346du); f_12821c00();
  /* 1282346d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823470 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823473 jne 0x12823476 */
  if (!C.zf) goto L_12823476;
  /* 12823475 int3  */
  x86_unimpl("int3 @ 0x12823475");
L_12823476:;
  /* 12823476 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823478 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282347a jne 0x1282344b */
  if (!C.zf) goto L_1282344b;
  /* 1282347c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282347f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12823482 mov dword ptr [0x1284e4cc], eax */
  w32((uint32_t)(0x1284e4cc), (EAX));
L_12823487:;
  /* 12823487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282348a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282348e je 0x1282349f */
  if (C.zf) goto L_1282349f;
  /* 12823490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823493 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12823496 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823499 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282349b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1282349d jmp 0x128234da */
  goto L_128234da;
L_1282349f:;
  /* 1282349f mov eax, dword ptr [0x1284e4d4] */
  EAX = (r32((uint32_t)(0x1284e4d4)));
  /* 128234a4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128234a7 je 0x128234ca */
  if (C.zf) goto L_128234ca;
  /* 128234a9 push 0x1284949c */
  push32((uint32_t)(0x1284949cu));
  /* 128234ae push 0 */
  push32((uint32_t)(0x0u));
  /* 128234b0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 128234b5 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 128234ba push 2 */
  push32((uint32_t)(0x2u));
  /* 128234bc call 0x12821c00 */
  push32(0x128234c1u); f_12821c00();
  /* 128234c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128234c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128234c7 jne 0x128234ca */
  if (!C.zf) goto L_128234ca;
  /* 128234c9 int3  */
  x86_unimpl("int3 @ 0x128234c9");
L_128234ca:;
  /* 128234ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128234cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128234ce jne 0x1282349f */
  if (!C.zf) goto L_1282349f;
  /* 128234d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128234d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128234d5 mov dword ptr [0x1284e4d4], eax */
  w32((uint32_t)(0x1284e4d4), (EAX));
L_128234da:;
  /* 128234da cmp dword ptr [0x1284e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128234e1 je 0x128234f1 */
  if (C.zf) goto L_128234f1;
  /* 128234e3 mov ecx, dword ptr [0x1284e4d4] */
  ECX = (r32((uint32_t)(0x1284e4d4)));
  /* 128234e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128234ec mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 128234ef jmp 0x128234f9 */
  goto L_128234f9;
L_128234f1:;
  /* 128234f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128234f4 mov dword ptr [0x1284e4cc], eax */
  w32((uint32_t)(0x1284e4cc), (EAX));
L_128234f9:;
  /* 128234f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128234fc mov edx, dword ptr [0x1284e4d4] */
  EDX = (r32((uint32_t)(0x1284e4d4)));
  /* 12823502 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12823504 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823507 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1282350e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823511 mov dword ptr [0x1284e4d4], ecx */
  w32((uint32_t)(0x1284e4d4), (ECX));
  /* 12823517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1282351a:;
  /* 1282351a pop edi */
  EDI = (pop32());
  /* 1282351b pop esi */
  ESI = (pop32());
  /* 1282351c pop ebx */
  EBX = (pop32());
  /* 1282351d mov esp, ebp */
  ESP = (EBP);
  /* 1282351f pop ebp */
  EBP = (pop32());
  /* 12823520 ret  */
  ESPCHK(0x12823010u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x12823530 (27 bytes, 13 insns) */
void f_12823530(void) {
  FTRACE(0x12823530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823530 push ebp */
  push32((uint32_t)(EBP));
  /* 12823531 mov ebp, esp */
  EBP = (ESP);
  /* 12823533 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823535 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823537 push 1 */
  push32((uint32_t)(0x1u));
  /* 12823539 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282353c push eax */
  push32((uint32_t)(EAX));
  /* 1282353d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823540 push ecx */
  push32((uint32_t)(ECX));
  /* 12823541 call 0x12823550 */
  push32(0x12823546u); f_12823550();
  /* 12823546 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823549 pop ebp */
  EBP = (pop32());
  /* 1282354a ret  */
  ESPCHK(0x12823530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x12823550 (64 bytes, 27 insns) */
void f_12823550(void) {
  FTRACE(0x12823550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823550 push ebp */
  push32((uint32_t)(EBP));
  /* 12823551 mov ebp, esp */
  EBP = (ESP);
  /* 12823553 push ecx */
  push32((uint32_t)(ECX));
  /* 12823554 push 9 */
  push32((uint32_t)(0x9u));
  /* 12823556 call 0x12826540 */
  push32(0x1282355bu); f_12826540();
  /* 1282355b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282355e push 0 */
  push32((uint32_t)(0x0u));
  /* 12823560 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12823563 push eax */
  push32((uint32_t)(EAX));
  /* 12823564 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12823567 push ecx */
  push32((uint32_t)(ECX));
  /* 12823568 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282356b push edx */
  push32((uint32_t)(EDX));
  /* 1282356c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282356f push eax */
  push32((uint32_t)(EAX));
  /* 12823570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823573 push ecx */
  push32((uint32_t)(ECX));
  /* 12823574 call 0x12823010 */
  push32(0x12823579u); f_12823010();
  /* 12823579 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282357c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282357f push 9 */
  push32((uint32_t)(0x9u));
  /* 12823581 call 0x128265e0 */
  push32(0x12823586u); f_128265e0();
  /* 12823586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282358c mov esp, ebp */
  ESP = (EBP);
  /* 1282358e pop ebp */
  EBP = (pop32());
  /* 1282358f ret  */
  ESPCHK(0x12823550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003590 @ 0x12823590 (19 bytes, 9 insns) */
void f_12823590(void) {
  FTRACE(0x12823590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823590 push ebp */
  push32((uint32_t)(EBP));
  /* 12823591 mov ebp, esp */
  EBP = (ESP);
  /* 12823593 push 1 */
  push32((uint32_t)(0x1u));
  /* 12823595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823598 push eax */
  push32((uint32_t)(EAX));
  /* 12823599 call 0x128235d0 */
  push32(0x1282359eu); f_128235d0();
  /* 1282359e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128235a1 pop ebp */
  EBP = (pop32());
  /* 128235a2 ret  */
  ESPCHK(0x12823590u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b0 @ 0x128235b0 (19 bytes, 9 insns) */
void f_128235b0(void) {
  FTRACE(0x128235b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128235b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128235b1 mov ebp, esp */
  EBP = (ESP);
  /* 128235b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 128235b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128235b8 push eax */
  push32((uint32_t)(EAX));
  /* 128235b9 call 0x12823600 */
  push32(0x128235beu); f_12823600();
  /* 128235be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128235c1 pop ebp */
  EBP = (pop32());
  /* 128235c2 ret  */
  ESPCHK(0x128235b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035d0 @ 0x128235d0 (41 bytes, 16 insns) */
void f_128235d0(void) {
  FTRACE(0x128235d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128235d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128235d1 mov ebp, esp */
  EBP = (ESP);
  /* 128235d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 128235d5 call 0x12826540 */
  push32(0x128235dau); f_12826540();
  /* 128235da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128235dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128235e0 push eax */
  push32((uint32_t)(EAX));
  /* 128235e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128235e4 push ecx */
  push32((uint32_t)(ECX));
  /* 128235e5 call 0x12823600 */
  push32(0x128235eau); f_12823600();
  /* 128235ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128235ed push 9 */
  push32((uint32_t)(0x9u));
  /* 128235ef call 0x128265e0 */
  push32(0x128235f4u); f_128265e0();
  /* 128235f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128235f7 pop ebp */
  EBP = (pop32());
  /* 128235f8 ret  */
  ESPCHK(0x128235d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003600 @ 0x12823600 (1004 bytes, 342 insns) */
void f_12823600(void) {
  FTRACE(0x12823600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823600 push ebp */
  push32((uint32_t)(EBP));
  /* 12823601 mov ebp, esp */
  EBP = (ESP);
  /* 12823603 push ecx */
  push32((uint32_t)(ECX));
  /* 12823604 push ebx */
  push32((uint32_t)(EBX));
  /* 12823605 push esi */
  push32((uint32_t)(ESI));
  /* 12823606 push edi */
  push32((uint32_t)(EDI));
  /* 12823607 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 1282360c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1282360f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823611 je 0x12823643 */
  if (C.zf) goto L_12823643;
L_12823613:;
  /* 12823613 call 0x12823ce0 */
  push32(0x12823618u); f_12823ce0();
  /* 12823618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282361a jne 0x1282363d */
  if (!C.zf) goto L_1282363d;
  /* 1282361c push 0x12849488 */
  push32((uint32_t)(0x12849488u));
  /* 12823621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823623 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12823628 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 1282362d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282362f call 0x12821c00 */
  push32(0x12823634u); f_12821c00();
  /* 12823634 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823637 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282363a jne 0x1282363d */
  if (!C.zf) goto L_1282363d;
  /* 1282363c int3  */
  x86_unimpl("int3 @ 0x1282363c");
L_1282363d:;
  /* 1282363d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282363f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823641 jne 0x12823613 */
  if (!C.zf) goto L_12823613;
L_12823643:;
  /* 12823643 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823647 jne 0x1282364e */
  if (!C.zf) goto L_1282364e;
  /* 12823649 jmp 0x128239e5 */
  goto L_128239e5;
L_1282364e:;
  /* 1282364e push 0 */
  push32((uint32_t)(0x0u));
  /* 12823650 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823652 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823654 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823657 push edx */
  push32((uint32_t)(EDX));
  /* 12823658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282365a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282365d push eax */
  push32((uint32_t)(EAX));
  /* 1282365e push 3 */
  push32((uint32_t)(0x3u));
  /* 12823660 call dword ptr [0x1284cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284cc90))), 0x12823666u);
  /* 12823666 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282366b jne 0x12823698 */
  if (!C.zf) goto L_12823698;
L_1282366d:;
  /* 1282366d push 0x1284974c */
  push32((uint32_t)(0x1284974cu));
  /* 12823672 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12823677 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282367b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282367d push 0 */
  push32((uint32_t)(0x0u));
  /* 1282367f call 0x12821c00 */
  push32(0x12823684u); f_12821c00();
  /* 12823684 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823687 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282368a jne 0x1282368d */
  if (!C.zf) goto L_1282368d;
  /* 1282368c int3  */
  x86_unimpl("int3 @ 0x1282368c");
L_1282368d:;
  /* 1282368d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282368f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823691 jne 0x1282366d */
  if (!C.zf) goto L_1282366d;
  /* 12823693 jmp 0x128239e5 */
  goto L_128239e5;
L_12823698:;
  /* 12823698 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282369b push edx */
  push32((uint32_t)(EDX));
  /* 1282369c call 0x12824140 */
  push32(0x128236a1u); f_12824140();
  /* 128236a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128236a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128236a6 jne 0x128236c9 */
  if (!C.zf) goto L_128236c9;
  /* 128236a8 push 0x1284958c */
  push32((uint32_t)(0x1284958cu));
  /* 128236ad push 0 */
  push32((uint32_t)(0x0u));
  /* 128236af push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 128236b4 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 128236b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 128236bb call 0x12821c00 */
  push32(0x128236c0u); f_12821c00();
  /* 128236c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128236c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128236c6 jne 0x128236c9 */
  if (!C.zf) goto L_128236c9;
  /* 128236c8 int3  */
  x86_unimpl("int3 @ 0x128236c8");
L_128236c9:;
  /* 128236c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128236cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128236cd jne 0x12823698 */
  if (!C.zf) goto L_12823698;
  /* 128236cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128236d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128236d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128236d8:;
  /* 128236d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128236db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128236de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128236e3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128236e6 je 0x1282372b */
  if (C.zf) goto L_1282372b;
  /* 128236e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128236eb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128236ef je 0x1282372b */
  if (C.zf) goto L_1282372b;
  /* 128236f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128236f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128236f7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128236fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128236ff je 0x1282372b */
  if (C.zf) goto L_1282372b;
  /* 12823701 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823704 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823708 je 0x1282372b */
  if (C.zf) goto L_1282372b;
  /* 1282370a push 0x12849724 */
  push32((uint32_t)(0x12849724u));
  /* 1282370f push 0 */
  push32((uint32_t)(0x0u));
  /* 12823711 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12823716 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 1282371b push 2 */
  push32((uint32_t)(0x2u));
  /* 1282371d call 0x12821c00 */
  push32(0x12823722u); f_12821c00();
  /* 12823722 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823725 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823728 jne 0x1282372b */
  if (!C.zf) goto L_1282372b;
  /* 1282372a int3  */
  x86_unimpl("int3 @ 0x1282372a");
L_1282372b:;
  /* 1282372b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282372d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282372f jne 0x128236d8 */
  if (!C.zf) goto L_128236d8;
  /* 12823731 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 12823736 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12823739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282373b jne 0x12823806 */
  if (!C.zf) goto L_12823806;
  /* 12823741 push 4 */
  push32((uint32_t)(0x4u));
  /* 12823743 mov cl, byte ptr [0x1284ca90] */
  CL = (r8((uint32_t)(0x1284ca90)));
  /* 12823749 push ecx */
  push32((uint32_t)(ECX));
  /* 1282374a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282374d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823750 push edx */
  push32((uint32_t)(EDX));
  /* 12823751 call 0x12823c50 */
  push32(0x12823756u); f_12823c50();
  /* 12823756 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282375b jne 0x128237a0 */
  if (!C.zf) goto L_128237a0;
L_1282375d:;
  /* 1282375d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823760 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823763 push eax */
  push32((uint32_t)(EAX));
  /* 12823764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823767 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1282376a push edx */
  push32((uint32_t)(EDX));
  /* 1282376b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282376e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12823771 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12823777 mov edx, dword ptr [ecx*4 + 0x1284ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca94)));
  /* 1282377e push edx */
  push32((uint32_t)(EDX));
  /* 1282377f push 0x128496f8 */
  push32((uint32_t)(0x128496f8u));
  /* 12823784 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823786 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282378a push 1 */
  push32((uint32_t)(0x1u));
  /* 1282378c call 0x12821c00 */
  push32(0x12823791u); f_12821c00();
  /* 12823791 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823794 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823797 jne 0x1282379a */
  if (!C.zf) goto L_1282379a;
  /* 12823799 int3  */
  x86_unimpl("int3 @ 0x12823799");
L_1282379a:;
  /* 1282379a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282379c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282379e jne 0x1282375d */
  if (!C.zf) goto L_1282375d;
L_128237a0:;
  /* 128237a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 128237a2 mov cl, byte ptr [0x1284ca90] */
  CL = (r8((uint32_t)(0x1284ca90)));
  /* 128237a8 push ecx */
  push32((uint32_t)(ECX));
  /* 128237a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128237ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 128237af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128237b2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 128237b6 push edx */
  push32((uint32_t)(EDX));
  /* 128237b7 call 0x12823c50 */
  push32(0x128237bcu); f_12823c50();
  /* 128237bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128237bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128237c1 jne 0x12823806 */
  if (!C.zf) goto L_12823806;
L_128237c3:;
  /* 128237c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128237c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128237c9 push eax */
  push32((uint32_t)(EAX));
  /* 128237ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128237cd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 128237d0 push edx */
  push32((uint32_t)(EDX));
  /* 128237d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128237d4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128237d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 128237dd mov edx, dword ptr [ecx*4 + 0x1284ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca94)));
  /* 128237e4 push edx */
  push32((uint32_t)(EDX));
  /* 128237e5 push 0x128496cc */
  push32((uint32_t)(0x128496ccu));
  /* 128237ea push 0 */
  push32((uint32_t)(0x0u));
  /* 128237ec push 0 */
  push32((uint32_t)(0x0u));
  /* 128237ee push 0 */
  push32((uint32_t)(0x0u));
  /* 128237f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 128237f2 call 0x12821c00 */
  push32(0x128237f7u); f_12821c00();
  /* 128237f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128237fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128237fd jne 0x12823800 */
  if (!C.zf) goto L_12823800;
  /* 128237ff int3  */
  x86_unimpl("int3 @ 0x128237ff");
L_12823800:;
  /* 12823800 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823804 jne 0x128237c3 */
  if (!C.zf) goto L_128237c3;
L_12823806:;
  /* 12823806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823809 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282380d jne 0x1282387b */
  if (!C.zf) goto L_1282387b;
L_1282380f:;
  /* 1282380f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823812 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823819 jne 0x12823824 */
  if (!C.zf) goto L_12823824;
  /* 1282381b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282381e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823822 je 0x12823845 */
  if (C.zf) goto L_12823845;
L_12823824:;
  /* 12823824 push 0x1284968c */
  push32((uint32_t)(0x1284968cu));
  /* 12823829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282382b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12823830 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823835 push 2 */
  push32((uint32_t)(0x2u));
  /* 12823837 call 0x12821c00 */
  push32(0x1282383cu); f_12821c00();
  /* 1282383c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282383f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823842 jne 0x12823845 */
  if (!C.zf) goto L_12823845;
  /* 12823844 int3  */
  x86_unimpl("int3 @ 0x12823844");
L_12823845:;
  /* 12823845 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823847 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823849 jne 0x1282380f */
  if (!C.zf) goto L_1282380f;
  /* 1282384b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282384e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12823851 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823854 push eax */
  push32((uint32_t)(EAX));
  /* 12823855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823857 mov cl, byte ptr [0x1284ca91] */
  CL = (r8((uint32_t)(0x1284ca91)));
  /* 1282385d push ecx */
  push32((uint32_t)(ECX));
  /* 1282385e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823861 push edx */
  push32((uint32_t)(EDX));
  /* 12823862 call 0x128268b0 */
  push32(0x12823867u); f_128268b0();
  /* 12823867 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282386a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282386d push eax */
  push32((uint32_t)(EAX));
  /* 1282386e call 0x12826cb0 */
  push32(0x12823873u); f_12826cb0();
  /* 12823873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823876 jmp 0x128239e5 */
  goto L_128239e5;
L_1282387b:;
  /* 1282387b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282387e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823882 jne 0x12823891 */
  if (!C.zf) goto L_12823891;
  /* 12823884 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823888 jne 0x12823891 */
  if (!C.zf) goto L_12823891;
  /* 1282388a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12823891:;
  /* 12823891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823894 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823897 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282389a je 0x128238bd */
  if (C.zf) goto L_128238bd;
  /* 1282389c push 0x1284966c */
  push32((uint32_t)(0x1284966cu));
  /* 128238a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 128238a3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 128238a8 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 128238ad push 2 */
  push32((uint32_t)(0x2u));
  /* 128238af call 0x12821c00 */
  push32(0x128238b4u); f_12821c00();
  /* 128238b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128238b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128238ba jne 0x128238bd */
  if (!C.zf) goto L_128238bd;
  /* 128238bc int3  */
  x86_unimpl("int3 @ 0x128238bc");
L_128238bd:;
  /* 128238bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128238bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128238c1 jne 0x12823891 */
  if (!C.zf) goto L_12823891;
  /* 128238c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128238c6 mov eax, dword ptr [0x1284e4d8] */
  EAX = (r32((uint32_t)(0x1284e4d8)));
  /* 128238cb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128238ce mov dword ptr [0x1284e4d8], eax */
  w32((uint32_t)(0x1284e4d8), (EAX));
  /* 128238d3 mov ecx, dword ptr [0x1284ca84] */
  ECX = (r32((uint32_t)(0x1284ca84)));
  /* 128238d9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 128238dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128238de jne 0x128239bc */
  if (!C.zf) goto L_128239bc;
  /* 128238e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128238e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128238ea je 0x128238fc */
  if (C.zf) goto L_128238fc;
  /* 128238ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128238ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128238f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128238f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 128238f7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 128238fa jmp 0x1282393a */
  goto L_1282393a;
L_128238fc:;
  /* 128238fc mov ecx, dword ptr [0x1284e4cc] */
  ECX = (r32((uint32_t)(0x1284e4cc)));
  /* 12823902 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823905 je 0x12823928 */
  if (C.zf) goto L_12823928;
  /* 12823907 push 0x12849654 */
  push32((uint32_t)(0x12849654u));
  /* 1282390c push 0 */
  push32((uint32_t)(0x0u));
  /* 1282390e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12823913 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823918 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282391a call 0x12821c00 */
  push32(0x1282391fu); f_12821c00();
  /* 1282391f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823922 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823925 jne 0x12823928 */
  if (!C.zf) goto L_12823928;
  /* 12823927 int3  */
  x86_unimpl("int3 @ 0x12823927");
L_12823928:;
  /* 12823928 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282392a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282392c jne 0x128238fc */
  if (!C.zf) goto L_128238fc;
  /* 1282392e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823931 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12823934 mov dword ptr [0x1284e4cc], ecx */
  w32((uint32_t)(0x1284e4cc), (ECX));
L_1282393a:;
  /* 1282393a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282393d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823941 je 0x12823952 */
  if (C.zf) goto L_12823952;
  /* 12823943 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823946 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12823949 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282394c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1282394e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12823950 jmp 0x1282398f */
  goto L_1282398f;
L_12823952:;
  /* 12823952 mov ecx, dword ptr [0x1284e4d4] */
  ECX = (r32((uint32_t)(0x1284e4d4)));
  /* 12823958 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282395b je 0x1282397e */
  if (C.zf) goto L_1282397e;
  /* 1282395d push 0x1284963c */
  push32((uint32_t)(0x1284963cu));
  /* 12823962 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823964 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12823969 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 1282396e push 2 */
  push32((uint32_t)(0x2u));
  /* 12823970 call 0x12821c00 */
  push32(0x12823975u); f_12821c00();
  /* 12823975 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823978 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282397b jne 0x1282397e */
  if (!C.zf) goto L_1282397e;
  /* 1282397d int3  */
  x86_unimpl("int3 @ 0x1282397d");
L_1282397e:;
  /* 1282397e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12823982 jne 0x12823952 */
  if (!C.zf) goto L_12823952;
  /* 12823984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823987 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12823989 mov dword ptr [0x1284e4d4], ecx */
  w32((uint32_t)(0x1284e4d4), (ECX));
L_1282398f:;
  /* 1282398f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823992 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12823995 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823998 push eax */
  push32((uint32_t)(EAX));
  /* 12823999 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282399b mov cl, byte ptr [0x1284ca91] */
  CL = (r8((uint32_t)(0x1284ca91)));
  /* 128239a1 push ecx */
  push32((uint32_t)(ECX));
  /* 128239a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128239a5 push edx */
  push32((uint32_t)(EDX));
  /* 128239a6 call 0x128268b0 */
  push32(0x128239abu); f_128268b0();
  /* 128239ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128239ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128239b1 push eax */
  push32((uint32_t)(EAX));
  /* 128239b2 call 0x12826cb0 */
  push32(0x128239b7u); f_12826cb0();
  /* 128239b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128239ba jmp 0x128239e5 */
  goto L_128239e5;
L_128239bc:;
  /* 128239bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128239bf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 128239c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128239c9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 128239cc push eax */
  push32((uint32_t)(EAX));
  /* 128239cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128239cf mov cl, byte ptr [0x1284ca91] */
  CL = (r8((uint32_t)(0x1284ca91)));
  /* 128239d5 push ecx */
  push32((uint32_t)(ECX));
  /* 128239d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128239d9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128239dc push edx */
  push32((uint32_t)(EDX));
  /* 128239dd call 0x128268b0 */
  push32(0x128239e2u); f_128268b0();
  /* 128239e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128239e5:;
  /* 128239e5 pop edi */
  EDI = (pop32());
  /* 128239e6 pop esi */
  ESI = (pop32());
  /* 128239e7 pop ebx */
  EBX = (pop32());
  /* 128239e8 mov esp, ebp */
  ESP = (EBP);
  /* 128239ea pop ebp */
  EBP = (pop32());
  /* 128239eb ret  */
  ESPCHK(0x12823600u, _esp0);
  ESP += 4; return;
}

/* FUN_100039f0 @ 0x128239f0 (19 bytes, 9 insns) */
void f_128239f0(void) {
  FTRACE(0x128239f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128239f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128239f1 mov ebp, esp */
  EBP = (ESP);
  /* 128239f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 128239f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128239f8 push eax */
  push32((uint32_t)(EAX));
  /* 128239f9 call 0x12823a10 */
  push32(0x128239feu); f_12823a10();
  /* 128239fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823a01 pop ebp */
  EBP = (pop32());
  /* 12823a02 ret  */
  ESPCHK(0x128239f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x12823a10 (342 bytes, 119 insns) */
void f_12823a10(void) {
  FTRACE(0x12823a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12823a11 mov ebp, esp */
  EBP = (ESP);
  /* 12823a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823a16 push ebx */
  push32((uint32_t)(EBX));
  /* 12823a17 push esi */
  push32((uint32_t)(ESI));
  /* 12823a18 push edi */
  push32((uint32_t)(EDI));
  /* 12823a19 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 12823a1e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12823a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823a23 je 0x12823a55 */
  if (C.zf) goto L_12823a55;
L_12823a25:;
  /* 12823a25 call 0x12823ce0 */
  push32(0x12823a2au); f_12823ce0();
  /* 12823a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823a2c jne 0x12823a4f */
  if (!C.zf) goto L_12823a4f;
  /* 12823a2e push 0x12849488 */
  push32((uint32_t)(0x12849488u));
  /* 12823a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823a35 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12823a3a push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12823a41 call 0x12821c00 */
  push32(0x12823a46u); f_12821c00();
  /* 12823a46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823a49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823a4c jne 0x12823a4f */
  if (!C.zf) goto L_12823a4f;
  /* 12823a4e int3  */
  x86_unimpl("int3 @ 0x12823a4e");
L_12823a4f:;
  /* 12823a4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823a51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823a53 jne 0x12823a25 */
  if (!C.zf) goto L_12823a25;
L_12823a55:;
  /* 12823a55 push 9 */
  push32((uint32_t)(0x9u));
  /* 12823a57 call 0x12826540 */
  push32(0x12823a5cu); f_12826540();
  /* 12823a5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12823a5f:;
  /* 12823a5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823a62 push edx */
  push32((uint32_t)(EDX));
  /* 12823a63 call 0x12824140 */
  push32(0x12823a68u); f_12824140();
  /* 12823a68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823a6d jne 0x12823a90 */
  if (!C.zf) goto L_12823a90;
  /* 12823a6f push 0x1284958c */
  push32((uint32_t)(0x1284958cu));
  /* 12823a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823a76 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12823a7b push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823a80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12823a82 call 0x12821c00 */
  push32(0x12823a87u); f_12821c00();
  /* 12823a87 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823a8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823a8d jne 0x12823a90 */
  if (!C.zf) goto L_12823a90;
  /* 12823a8f int3  */
  x86_unimpl("int3 @ 0x12823a8f");
L_12823a90:;
  /* 12823a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823a94 jne 0x12823a5f */
  if (!C.zf) goto L_12823a5f;
  /* 12823a96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823a99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823a9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12823a9f:;
  /* 12823a9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823aa2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823aa5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12823aaa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823aad je 0x12823af2 */
  if (C.zf) goto L_12823af2;
  /* 12823aaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823ab2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823ab6 je 0x12823af2 */
  if (C.zf) goto L_12823af2;
  /* 12823ab8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823abb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823abe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12823ac3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823ac6 je 0x12823af2 */
  if (C.zf) goto L_12823af2;
  /* 12823ac8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823acb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823acf je 0x12823af2 */
  if (C.zf) goto L_12823af2;
  /* 12823ad1 push 0x12849724 */
  push32((uint32_t)(0x12849724u));
  /* 12823ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823ad8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12823add push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12823ae4 call 0x12821c00 */
  push32(0x12823ae9u); f_12821c00();
  /* 12823ae9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823aec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823aef jne 0x12823af2 */
  if (!C.zf) goto L_12823af2;
  /* 12823af1 int3  */
  x86_unimpl("int3 @ 0x12823af1");
L_12823af2:;
  /* 12823af2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823af4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12823af6 jne 0x12823a9f */
  if (!C.zf) goto L_12823a9f;
  /* 12823af8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823afb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823aff jne 0x12823b0e */
  if (!C.zf) goto L_12823b0e;
  /* 12823b01 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823b05 jne 0x12823b0e */
  if (!C.zf) goto L_12823b0e;
  /* 12823b07 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12823b0e:;
  /* 12823b0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823b11 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823b15 je 0x12823b49 */
  if (C.zf) goto L_12823b49;
L_12823b17:;
  /* 12823b17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823b1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823b1d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823b20 je 0x12823b43 */
  if (C.zf) goto L_12823b43;
  /* 12823b22 push 0x1284966c */
  push32((uint32_t)(0x1284966cu));
  /* 12823b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823b29 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12823b2e push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12823b35 call 0x12821c00 */
  push32(0x12823b3au); f_12821c00();
  /* 12823b3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823b3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823b40 jne 0x12823b43 */
  if (!C.zf) goto L_12823b43;
  /* 12823b42 int3  */
  x86_unimpl("int3 @ 0x12823b42");
L_12823b43:;
  /* 12823b43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823b45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823b47 jne 0x12823b17 */
  if (!C.zf) goto L_12823b17;
L_12823b49:;
  /* 12823b49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823b4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12823b4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12823b52 push 9 */
  push32((uint32_t)(0x9u));
  /* 12823b54 call 0x128265e0 */
  push32(0x12823b59u); f_128265e0();
  /* 12823b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823b5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823b5f pop edi */
  EDI = (pop32());
  /* 12823b60 pop esi */
  ESI = (pop32());
  /* 12823b61 pop ebx */
  EBX = (pop32());
  /* 12823b62 mov esp, ebp */
  ESP = (EBP);
  /* 12823b64 pop ebp */
  EBP = (pop32());
  /* 12823b65 ret  */
  ESPCHK(0x12823a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b70 @ 0x12823b70 (28 bytes, 11 insns) */
void f_12823b70(void) {
  FTRACE(0x12823b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12823b71 mov ebp, esp */
  EBP = (ESP);
  /* 12823b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12823b74 mov eax, dword ptr [0x1284ca8c] */
  EAX = (r32((uint32_t)(0x1284ca8c)));
  /* 12823b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12823b7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823b7f mov dword ptr [0x1284ca8c], ecx */
  w32((uint32_t)(0x1284ca8c), (ECX));
  /* 12823b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823b88 mov esp, ebp */
  ESP = (EBP);
  /* 12823b8a pop ebp */
  EBP = (pop32());
  /* 12823b8b ret  */
  ESPCHK(0x12823b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x12823b90 (157 bytes, 59 insns) */
void f_12823b90(void) {
  FTRACE(0x12823b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12823b91 mov ebp, esp */
  EBP = (ESP);
  /* 12823b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12823b94 push ebx */
  push32((uint32_t)(EBX));
  /* 12823b95 push esi */
  push32((uint32_t)(ESI));
  /* 12823b96 push edi */
  push32((uint32_t)(EDI));
  /* 12823b97 push 9 */
  push32((uint32_t)(0x9u));
  /* 12823b99 call 0x12826540 */
  push32(0x12823b9eu); f_12826540();
  /* 12823b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823ba1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823ba4 push eax */
  push32((uint32_t)(EAX));
  /* 12823ba5 call 0x12824140 */
  push32(0x12823baau); f_12824140();
  /* 12823baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823baf je 0x12823c1c */
  if (C.zf) goto L_12823c1c;
  /* 12823bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823bb4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823bb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12823bba:;
  /* 12823bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823bbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823bc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12823bc5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823bc8 je 0x12823c0d */
  if (C.zf) goto L_12823c0d;
  /* 12823bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823bcd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823bd1 je 0x12823c0d */
  if (C.zf) goto L_12823c0d;
  /* 12823bd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823bd6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12823bd9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12823bde cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823be1 je 0x12823c0d */
  if (C.zf) goto L_12823c0d;
  /* 12823be3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823be6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823bea je 0x12823c0d */
  if (C.zf) goto L_12823c0d;
  /* 12823bec push 0x12849724 */
  push32((uint32_t)(0x12849724u));
  /* 12823bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823bf3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12823bf8 push 0x1284947c */
  push32((uint32_t)(0x1284947cu));
  /* 12823bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 12823bff call 0x12821c00 */
  push32(0x12823c04u); f_12821c00();
  /* 12823c04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823c07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823c0a jne 0x12823c0d */
  if (!C.zf) goto L_12823c0d;
  /* 12823c0c int3  */
  x86_unimpl("int3 @ 0x12823c0c");
L_12823c0d:;
  /* 12823c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823c0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12823c11 jne 0x12823bba */
  if (!C.zf) goto L_12823bba;
  /* 12823c13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823c16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823c19 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12823c1c:;
  /* 12823c1c push 9 */
  push32((uint32_t)(0x9u));
  /* 12823c1e call 0x128265e0 */
  push32(0x12823c23u); f_128265e0();
  /* 12823c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823c26 pop edi */
  EDI = (pop32());
  /* 12823c27 pop esi */
  ESI = (pop32());
  /* 12823c28 pop ebx */
  EBX = (pop32());
  /* 12823c29 mov esp, ebp */
  ESP = (EBP);
  /* 12823c2b pop ebp */
  EBP = (pop32());
  /* 12823c2c ret  */
  ESPCHK(0x12823b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c30 @ 0x12823c30 (28 bytes, 11 insns) */
void f_12823c30(void) {
  FTRACE(0x12823c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12823c31 mov ebp, esp */
  EBP = (ESP);
  /* 12823c33 push ecx */
  push32((uint32_t)(ECX));
  /* 12823c34 mov eax, dword ptr [0x1284cc90] */
  EAX = (r32((uint32_t)(0x1284cc90)));
  /* 12823c39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12823c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823c3f mov dword ptr [0x1284cc90], ecx */
  w32((uint32_t)(0x1284cc90), (ECX));
  /* 12823c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823c48 mov esp, ebp */
  ESP = (EBP);
  /* 12823c4a pop ebp */
  EBP = (pop32());
  /* 12823c4b ret  */
  ESPCHK(0x12823c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c50 @ 0x12823c50 (136 bytes, 55 insns) */
void f_12823c50(void) {
  FTRACE(0x12823c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12823c51 mov ebp, esp */
  EBP = (ESP);
  /* 12823c53 push ecx */
  push32((uint32_t)(ECX));
  /* 12823c54 push ebx */
  push32((uint32_t)(EBX));
  /* 12823c55 push esi */
  push32((uint32_t)(ESI));
  /* 12823c56 push edi */
  push32((uint32_t)(EDI));
  /* 12823c57 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12823c5e:;
  /* 12823c5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12823c61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12823c64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823c67 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12823c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823c6c je 0x12823cce */
  if (C.zf) goto L_12823cce;
  /* 12823c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823c71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823c73 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12823c75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823c78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12823c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823c81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823c84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12823c87 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823c89 je 0x12823ccc */
  if (C.zf) goto L_12823ccc;
L_12823c8b:;
  /* 12823c8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12823c8e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12823c93 push eax */
  push32((uint32_t)(EAX));
  /* 12823c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823c97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823c99 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12823c9c push edx */
  push32((uint32_t)(EDX));
  /* 12823c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12823ca0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823ca3 push eax */
  push32((uint32_t)(EAX));
  /* 12823ca4 push 0x12849768 */
  push32((uint32_t)(0x12849768u));
  /* 12823ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12823cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12823caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12823cb1 call 0x12821c00 */
  push32(0x12823cb6u); f_12821c00();
  /* 12823cb6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823cb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823cbc jne 0x12823cbf */
  if (!C.zf) goto L_12823cbf;
  /* 12823cbe int3  */
  x86_unimpl("int3 @ 0x12823cbe");
L_12823cbf:;
  /* 12823cbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823cc3 jne 0x12823c8b */
  if (!C.zf) goto L_12823c8b;
  /* 12823cc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12823ccc:;
  /* 12823ccc jmp 0x12823c5e */
  goto L_12823c5e;
L_12823cce:;
  /* 12823cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12823cd1 pop edi */
  EDI = (pop32());
  /* 12823cd2 pop esi */
  ESI = (pop32());
  /* 12823cd3 pop ebx */
  EBX = (pop32());
  /* 12823cd4 mov esp, ebp */
  ESP = (EBP);
  /* 12823cd6 pop ebp */
  EBP = (pop32());
  /* 12823cd7 ret  */
  ESPCHK(0x12823c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x12823ce0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12823ce0(void) {
  FTRACE(0x12823ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12823ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12823ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12823ce3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12823ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 12823ce7 push esi */
  push32((uint32_t)(ESI));
  /* 12823ce8 push edi */
  push32((uint32_t)(EDI));
  /* 12823ce9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12823cf0 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 12823cf5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12823cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823cfa jne 0x12823d06 */
  if (!C.zf) goto L_12823d06;
  /* 12823cfc mov eax, 1 */
  EAX = (0x1u);
  /* 12823d01 jmp 0x12824038 */
  goto L_12824038;
L_12823d06:;
  /* 12823d06 push 9 */
  push32((uint32_t)(0x9u));
  /* 12823d08 call 0x12826540 */
  push32(0x12823d0du); f_12826540();
  /* 12823d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823d10 call 0x12826d20 */
  push32(0x12823d15u); f_12826d20();
  /* 12823d15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12823d18 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823d1c je 0x12823e29 */
  if (C.zf) goto L_12823e29;
  /* 12823d22 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823d26 je 0x12823e29 */
  if (C.zf) goto L_12823e29;
  /* 12823d2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12823d2f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12823d32 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12823d35 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823d38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12823d3b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823d3f ja 0x12823df2 */
  if ((!C.cf&&!C.zf)) goto L_12823df2;
  /* 12823d45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12823d48 jmp dword ptr [eax*4 + 0x1282403f] */
  switch (EAX) {
    case 0: goto L_12823dca;
    case 1: goto L_12823da2;
    case 2: goto L_12823d7a;
    case 3: goto L_12823d4f;
    default: x86_unimpl("switch@0x12823d48 out of table"); return;
  }
L_12823d4f:;
  /* 12823d4f push 0x128498bc */
  push32((uint32_t)(0x128498bcu));
  /* 12823d54 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12823d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d61 call 0x12821c00 */
  push32(0x12823d66u); f_12821c00();
  /* 12823d66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823d69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823d6c jne 0x12823d6f */
  if (!C.zf) goto L_12823d6f;
  /* 12823d6e int3  */
  x86_unimpl("int3 @ 0x12823d6e");
L_12823d6f:;
  /* 12823d6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823d71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823d73 jne 0x12823d4f */
  if (!C.zf) goto L_12823d4f;
  /* 12823d75 jmp 0x12823e18 */
  goto L_12823e18;
L_12823d7a:;
  /* 12823d7a push 0x12849898 */
  push32((uint32_t)(0x12849898u));
  /* 12823d7f push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12823d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12823d8c call 0x12821c00 */
  push32(0x12823d91u); f_12821c00();
  /* 12823d91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823d94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823d97 jne 0x12823d9a */
  if (!C.zf) goto L_12823d9a;
  /* 12823d99 int3  */
  x86_unimpl("int3 @ 0x12823d99");
L_12823d9a:;
  /* 12823d9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823d9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12823d9e jne 0x12823d7a */
  if (!C.zf) goto L_12823d7a;
  /* 12823da0 jmp 0x12823e18 */
  goto L_12823e18;
L_12823da2:;
  /* 12823da2 push 0x12849874 */
  push32((uint32_t)(0x12849874u));
  /* 12823da7 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12823dac push 0 */
  push32((uint32_t)(0x0u));
  /* 12823dae push 0 */
  push32((uint32_t)(0x0u));
  /* 12823db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823db4 call 0x12821c00 */
  push32(0x12823db9u); f_12821c00();
  /* 12823db9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823dbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823dbf jne 0x12823dc2 */
  if (!C.zf) goto L_12823dc2;
  /* 12823dc1 int3  */
  x86_unimpl("int3 @ 0x12823dc1");
L_12823dc2:;
  /* 12823dc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823dc6 jne 0x12823da2 */
  if (!C.zf) goto L_12823da2;
  /* 12823dc8 jmp 0x12823e18 */
  goto L_12823e18;
L_12823dca:;
  /* 12823dca push 0x12849850 */
  push32((uint32_t)(0x12849850u));
  /* 12823dcf push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12823dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823dd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823dda push 0 */
  push32((uint32_t)(0x0u));
  /* 12823ddc call 0x12821c00 */
  push32(0x12823de1u); f_12821c00();
  /* 12823de1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823de4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823de7 jne 0x12823dea */
  if (!C.zf) goto L_12823dea;
  /* 12823de9 int3  */
  x86_unimpl("int3 @ 0x12823de9");
L_12823dea:;
  /* 12823dea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823dec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823dee jne 0x12823dca */
  if (!C.zf) goto L_12823dca;
  /* 12823df0 jmp 0x12823e18 */
  goto L_12823e18;
L_12823df2:;
  /* 12823df2 push 0x12849824 */
  push32((uint32_t)(0x12849824u));
  /* 12823df7 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12823dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12823dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12823e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823e04 call 0x12821c00 */
  push32(0x12823e09u); f_12821c00();
  /* 12823e09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823e0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823e0f jne 0x12823e12 */
  if (!C.zf) goto L_12823e12;
  /* 12823e11 int3  */
  x86_unimpl("int3 @ 0x12823e11");
L_12823e12:;
  /* 12823e12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823e14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12823e16 jne 0x12823df2 */
  if (!C.zf) goto L_12823df2;
L_12823e18:;
  /* 12823e18 push 9 */
  push32((uint32_t)(0x9u));
  /* 12823e1a call 0x128265e0 */
  push32(0x12823e1fu); f_128265e0();
  /* 12823e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823e22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823e24 jmp 0x12824038 */
  goto L_12824038;
L_12823e29:;
  /* 12823e29 mov eax, dword ptr [0x1284e4d4] */
  EAX = (r32((uint32_t)(0x1284e4d4)));
  /* 12823e2e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12823e31 jmp 0x12823e3b */
  goto L_12823e3b;
L_12823e33:;
  /* 12823e33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823e36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12823e38 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12823e3b:;
  /* 12823e3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823e3f je 0x1282402b */
  if (C.zf) goto L_1282402b;
  /* 12823e45 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12823e4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823e4f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12823e52 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12823e58 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823e5b je 0x12823e80 */
  if (C.zf) goto L_12823e80;
  /* 12823e5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823e60 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823e64 je 0x12823e80 */
  if (C.zf) goto L_12823e80;
  /* 12823e66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823e69 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12823e6c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12823e72 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823e75 je 0x12823e80 */
  if (C.zf) goto L_12823e80;
  /* 12823e77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823e7a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823e7e jne 0x12823e98 */
  if (!C.zf) goto L_12823e98;
L_12823e80:;
  /* 12823e80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823e83 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12823e86 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12823e8c mov edx, dword ptr [ecx*4 + 0x1284ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca94)));
  /* 12823e93 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12823e96 jmp 0x12823e9f */
  goto L_12823e9f;
L_12823e98:;
  /* 12823e98 mov dword ptr [ebp - 0x14], 0x1284981c */
  w32((uint32_t)(EBP + -0x14), (0x1284981cu));
L_12823e9f:;
  /* 12823e9f push 4 */
  push32((uint32_t)(0x4u));
  /* 12823ea1 mov al, byte ptr [0x1284ca90] */
  AL = (r8((uint32_t)(0x1284ca90)));
  /* 12823ea6 push eax */
  push32((uint32_t)(EAX));
  /* 12823ea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823eaa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823ead push ecx */
  push32((uint32_t)(ECX));
  /* 12823eae call 0x12823c50 */
  push32(0x12823eb3u); f_12823c50();
  /* 12823eb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823eb8 jne 0x12823ef4 */
  if (!C.zf) goto L_12823ef4;
L_12823eba:;
  /* 12823eba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823ebd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823ec0 push edx */
  push32((uint32_t)(EDX));
  /* 12823ec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823ec4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12823ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 12823ec8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12823ecb push edx */
  push32((uint32_t)(EDX));
  /* 12823ecc push 0x128496f8 */
  push32((uint32_t)(0x128496f8u));
  /* 12823ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823ed9 call 0x12821c00 */
  push32(0x12823edeu); f_12821c00();
  /* 12823ede add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823ee4 jne 0x12823ee7 */
  if (!C.zf) goto L_12823ee7;
  /* 12823ee6 int3  */
  x86_unimpl("int3 @ 0x12823ee6");
L_12823ee7:;
  /* 12823ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823eeb jne 0x12823eba */
  if (!C.zf) goto L_12823eba;
  /* 12823eed mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12823ef4:;
  /* 12823ef4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12823ef6 mov cl, byte ptr [0x1284ca90] */
  CL = (r8((uint32_t)(0x1284ca90)));
  /* 12823efc push ecx */
  push32((uint32_t)(ECX));
  /* 12823efd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f00 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12823f03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f06 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12823f0a push edx */
  push32((uint32_t)(EDX));
  /* 12823f0b call 0x12823c50 */
  push32(0x12823f10u); f_12823c50();
  /* 12823f10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823f15 jne 0x12823f51 */
  if (!C.zf) goto L_12823f51;
L_12823f17:;
  /* 12823f17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f1a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823f1d push eax */
  push32((uint32_t)(EAX));
  /* 12823f1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f21 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12823f24 push edx */
  push32((uint32_t)(EDX));
  /* 12823f25 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12823f28 push eax */
  push32((uint32_t)(EAX));
  /* 12823f29 push 0x128496cc */
  push32((uint32_t)(0x128496ccu));
  /* 12823f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f36 call 0x12821c00 */
  push32(0x12823f3bu); f_12821c00();
  /* 12823f3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823f41 jne 0x12823f44 */
  if (!C.zf) goto L_12823f44;
  /* 12823f43 int3  */
  x86_unimpl("int3 @ 0x12823f43");
L_12823f44:;
  /* 12823f44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12823f46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12823f48 jne 0x12823f17 */
  if (!C.zf) goto L_12823f17;
  /* 12823f4a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12823f51:;
  /* 12823f51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f54 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823f58 jne 0x12823faa */
  if (!C.zf) goto L_12823faa;
  /* 12823f5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12823f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12823f61 mov dl, byte ptr [0x1284ca91] */
  DL = (r8((uint32_t)(0x1284ca91)));
  /* 12823f67 push edx */
  push32((uint32_t)(EDX));
  /* 12823f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f6b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823f6e push eax */
  push32((uint32_t)(EAX));
  /* 12823f6f call 0x12823c50 */
  push32(0x12823f74u); f_12823c50();
  /* 12823f74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823f79 jne 0x12823faa */
  if (!C.zf) goto L_12823faa;
L_12823f7b:;
  /* 12823f7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823f7e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823f81 push ecx */
  push32((uint32_t)(ECX));
  /* 12823f82 push 0x128497f0 */
  push32((uint32_t)(0x128497f0u));
  /* 12823f87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12823f8f call 0x12821c00 */
  push32(0x12823f94u); f_12821c00();
  /* 12823f94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823f97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823f9a jne 0x12823f9d */
  if (!C.zf) goto L_12823f9d;
  /* 12823f9c int3  */
  x86_unimpl("int3 @ 0x12823f9c");
L_12823f9d:;
  /* 12823f9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12823f9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12823fa1 jne 0x12823f7b */
  if (!C.zf) goto L_12823f7b;
  /* 12823fa3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12823faa:;
  /* 12823faa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823fae jne 0x12824026 */
  if (!C.zf) goto L_12824026;
  /* 12823fb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823fb3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823fb7 je 0x12823fec */
  if (C.zf) goto L_12823fec;
L_12823fb9:;
  /* 12823fb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823fbc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12823fbf push edx */
  push32((uint32_t)(EDX));
  /* 12823fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823fc3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12823fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12823fc7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12823fca push edx */
  push32((uint32_t)(EDX));
  /* 12823fcb push 0x128497d0 */
  push32((uint32_t)(0x128497d0u));
  /* 12823fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12823fd8 call 0x12821c00 */
  push32(0x12823fddu); f_12821c00();
  /* 12823fdd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12823fe0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12823fe3 jne 0x12823fe6 */
  if (!C.zf) goto L_12823fe6;
  /* 12823fe5 int3  */
  x86_unimpl("int3 @ 0x12823fe5");
L_12823fe6:;
  /* 12823fe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12823fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12823fea jne 0x12823fb9 */
  if (!C.zf) goto L_12823fb9;
L_12823fec:;
  /* 12823fec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823fef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12823ff2 push edx */
  push32((uint32_t)(EDX));
  /* 12823ff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12823ff6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12823ff9 push eax */
  push32((uint32_t)(EAX));
  /* 12823ffa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12823ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12823ffe push 0x128497a4 */
  push32((uint32_t)(0x128497a4u));
  /* 12824003 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824005 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824007 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824009 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282400b call 0x12821c00 */
  push32(0x12824010u); f_12821c00();
  /* 12824010 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824013 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824016 jne 0x12824019 */
  if (!C.zf) goto L_12824019;
  /* 12824018 int3  */
  x86_unimpl("int3 @ 0x12824018");
L_12824019:;
  /* 12824019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282401b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282401d jne 0x12823fec */
  if (!C.zf) goto L_12823fec;
  /* 1282401f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12824026:;
  /* 12824026 jmp 0x12823e33 */
  goto L_12823e33;
L_1282402b:;
  /* 1282402b push 9 */
  push32((uint32_t)(0x9u));
  /* 1282402d call 0x128265e0 */
  push32(0x12824032u); f_128265e0();
  /* 12824032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12824038:;
  /* 12824038 pop edi */
  EDI = (pop32());
  /* 12824039 pop esi */
  ESI = (pop32());
  /* 1282403a pop ebx */
  EBX = (pop32());
  /* 1282403b mov esp, ebp */
  ESP = (EBP);
  /* 1282403d pop ebp */
  EBP = (pop32());
  /* 1282403e ret  */
  ESPCHK(0x12823ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004050 @ 0x12824050 (34 bytes, 13 insns) */
void f_12824050(void) {
  FTRACE(0x12824050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824050 push ebp */
  push32((uint32_t)(EBP));
  /* 12824051 mov ebp, esp */
  EBP = (ESP);
  /* 12824053 push ecx */
  push32((uint32_t)(ECX));
  /* 12824054 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 12824059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282405c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824060 je 0x1282406b */
  if (C.zf) goto L_1282406b;
  /* 12824062 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824065 mov dword ptr [0x1284ca84], ecx */
  w32((uint32_t)(0x1284ca84), (ECX));
L_1282406b:;
  /* 1282406b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282406e mov esp, ebp */
  ESP = (EBP);
  /* 12824070 pop ebp */
  EBP = (pop32());
  /* 12824071 ret  */
  ESPCHK(0x12824050u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x12824080 (103 bytes, 38 insns) */
void f_12824080(void) {
  FTRACE(0x12824080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824080 push ebp */
  push32((uint32_t)(EBP));
  /* 12824081 mov ebp, esp */
  EBP = (ESP);
  /* 12824083 push ecx */
  push32((uint32_t)(ECX));
  /* 12824084 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 12824089 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1282408c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282408e jne 0x12824092 */
  if (!C.zf) goto L_12824092;
  /* 12824090 jmp 0x128240e3 */
  goto L_128240e3;
L_12824092:;
  /* 12824092 push 9 */
  push32((uint32_t)(0x9u));
  /* 12824094 call 0x12826540 */
  push32(0x12824099u); f_12826540();
  /* 12824099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282409c mov ecx, dword ptr [0x1284e4d4] */
  ECX = (r32((uint32_t)(0x1284e4d4)));
  /* 128240a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128240a5 jmp 0x128240af */
  goto L_128240af;
L_128240a7:;
  /* 128240a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128240aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128240ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128240af:;
  /* 128240af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128240b3 je 0x128240d9 */
  if (C.zf) goto L_128240d9;
  /* 128240b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128240b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128240bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128240c1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128240c4 jne 0x128240d7 */
  if (!C.zf) goto L_128240d7;
  /* 128240c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128240c9 push eax */
  push32((uint32_t)(EAX));
  /* 128240ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128240cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128240d0 push ecx */
  push32((uint32_t)(ECX));
  /* 128240d1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x128240d4u);
  /* 128240d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128240d7:;
  /* 128240d7 jmp 0x128240a7 */
  goto L_128240a7;
L_128240d9:;
  /* 128240d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 128240db call 0x128265e0 */
  push32(0x128240e0u); f_128265e0();
  /* 128240e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128240e3:;
  /* 128240e3 mov esp, ebp */
  ESP = (EBP);
  /* 128240e5 pop ebp */
  EBP = (pop32());
  /* 128240e6 ret  */
  ESPCHK(0x12824080u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x128240f0 (75 bytes, 28 insns) */
void f_128240f0(void) {
  FTRACE(0x128240f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128240f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128240f1 mov ebp, esp */
  EBP = (ESP);
  /* 128240f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128240f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128240f8 je 0x1282412d */
  if (C.zf) goto L_1282412d;
  /* 128240fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128240fd push eax */
  push32((uint32_t)(EAX));
  /* 128240fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824101 push ecx */
  push32((uint32_t)(ECX));
  /* 12824102 call dword ptr [0x128502c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502c0))), 0x12824108u);
  /* 12824108 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282410a jne 0x1282412d */
  if (!C.zf) goto L_1282412d;
  /* 1282410c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824110 je 0x12824124 */
  if (C.zf) goto L_12824124;
  /* 12824112 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824115 push edx */
  push32((uint32_t)(EDX));
  /* 12824116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824119 push eax */
  push32((uint32_t)(EAX));
  /* 1282411a call dword ptr [0x128502bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502bc))), 0x12824120u);
  /* 12824120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824122 jne 0x1282412d */
  if (!C.zf) goto L_1282412d;
L_12824124:;
  /* 12824124 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1282412b jmp 0x12824134 */
  goto L_12824134;
L_1282412d:;
  /* 1282412d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12824134:;
  /* 12824134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824137 mov esp, ebp */
  ESP = (EBP);
  /* 12824139 pop ebp */
  EBP = (pop32());
  /* 1282413a ret  */
  ESPCHK(0x128240f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004140 @ 0x12824140 (134 bytes, 50 insns) */
void f_12824140(void) {
  FTRACE(0x12824140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824140 push ebp */
  push32((uint32_t)(EBP));
  /* 12824141 mov ebp, esp */
  EBP = (ESP);
  /* 12824143 push ecx */
  push32((uint32_t)(ECX));
  /* 12824144 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824148 jne 0x1282414e */
  if (!C.zf) goto L_1282414e;
  /* 1282414a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282414c jmp 0x128241c2 */
  goto L_128241c2;
L_1282414e:;
  /* 1282414e push 1 */
  push32((uint32_t)(0x1u));
  /* 12824150 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12824152 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824155 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824158 push eax */
  push32((uint32_t)(EAX));
  /* 12824159 call 0x128240f0 */
  push32(0x1282415eu); f_128240f0();
  /* 1282415e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824163 jne 0x12824169 */
  if (!C.zf) goto L_12824169;
  /* 12824165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824167 jmp 0x128241c2 */
  goto L_128241c2;
L_12824169:;
  /* 12824169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282416c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282416f push ecx */
  push32((uint32_t)(ECX));
  /* 12824170 call 0x12826e40 */
  push32(0x12824175u); f_12826e40();
  /* 12824175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824178 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282417b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282417f je 0x12824196 */
  if (C.zf) goto L_12824196;
  /* 12824181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824184 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824187 push edx */
  push32((uint32_t)(EDX));
  /* 12824188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282418b push eax */
  push32((uint32_t)(EAX));
  /* 1282418c call 0x12826ea0 */
  push32(0x12824191u); f_12826ea0();
  /* 12824191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824194 jmp 0x128241c2 */
  goto L_128241c2;
L_12824196:;
  /* 12824196 mov ecx, dword ptr [0x1284e488] */
  ECX = (r32((uint32_t)(0x1284e488)));
  /* 1282419c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 128241a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128241a4 je 0x128241ad */
  if (C.zf) goto L_128241ad;
  /* 128241a6 mov eax, 1 */
  EAX = (0x1u);
  /* 128241ab jmp 0x128241c2 */
  goto L_128241c2;
L_128241ad:;
  /* 128241ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128241b0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128241b3 push edx */
  push32((uint32_t)(EDX));
  /* 128241b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128241b6 mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 128241bb push eax */
  push32((uint32_t)(EAX));
  /* 128241bc call dword ptr [0x128502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502c4))), 0x128241c2u);
L_128241c2:;
  /* 128241c2 mov esp, ebp */
  ESP = (EBP);
  /* 128241c4 pop ebp */
  EBP = (pop32());
  /* 128241c5 ret  */
  ESPCHK(0x12824140u, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x128241d0 (227 bytes, 80 insns) */
void f_128241d0(void) {
  FTRACE(0x128241d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128241d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128241d1 mov ebp, esp */
  EBP = (ESP);
  /* 128241d3 push ecx */
  push32((uint32_t)(ECX));
  /* 128241d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128241d7 push eax */
  push32((uint32_t)(EAX));
  /* 128241d8 call 0x12824140 */
  push32(0x128241ddu); f_12824140();
  /* 128241dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128241e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128241e2 jne 0x128241eb */
  if (!C.zf) goto L_128241eb;
  /* 128241e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128241e6 jmp 0x128242af */
  goto L_128242af;
L_128241eb:;
  /* 128241eb push 9 */
  push32((uint32_t)(0x9u));
  /* 128241ed call 0x12826540 */
  push32(0x128241f2u); f_12826540();
  /* 128241f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128241f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128241f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128241fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128241fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824201 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12824204 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12824209 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282420c je 0x12824230 */
  if (C.zf) goto L_12824230;
  /* 1282420e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824211 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824215 je 0x12824230 */
  if (C.zf) goto L_12824230;
  /* 12824217 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282421a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1282421d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12824222 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824225 je 0x12824230 */
  if (C.zf) goto L_12824230;
  /* 12824227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282422a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282422e jne 0x128242a3 */
  if (!C.zf) goto L_128242a3;
L_12824230:;
  /* 12824230 push 1 */
  push32((uint32_t)(0x1u));
  /* 12824232 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824235 push edx */
  push32((uint32_t)(EDX));
  /* 12824236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824239 push eax */
  push32((uint32_t)(EAX));
  /* 1282423a call 0x128240f0 */
  push32(0x1282423fu); f_128240f0();
  /* 1282423f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824244 je 0x128242a3 */
  if (C.zf) goto L_128242a3;
  /* 12824246 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824249 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1282424c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282424f jne 0x128242a3 */
  if (!C.zf) goto L_128242a3;
  /* 12824251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824254 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12824257 cmp ecx, dword ptr [0x1284ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282425d jg 0x128242a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_128242a3;
  /* 1282425f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824263 je 0x12824270 */
  if (C.zf) goto L_12824270;
  /* 12824265 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282426b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1282426e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12824270:;
  /* 12824270 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824274 je 0x12824281 */
  if (C.zf) goto L_12824281;
  /* 12824276 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12824279 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282427c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282427f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12824281:;
  /* 12824281 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824285 je 0x12824292 */
  if (C.zf) goto L_12824292;
  /* 12824287 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282428a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282428d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12824290 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12824292:;
  /* 12824292 push 9 */
  push32((uint32_t)(0x9u));
  /* 12824294 call 0x128265e0 */
  push32(0x12824299u); f_128265e0();
  /* 12824299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282429c mov eax, 1 */
  EAX = (0x1u);
  /* 128242a1 jmp 0x128242af */
  goto L_128242af;
L_128242a3:;
  /* 128242a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 128242a5 call 0x128265e0 */
  push32(0x128242aau); f_128265e0();
  /* 128242aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128242ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128242af:;
  /* 128242af mov esp, ebp */
  ESP = (EBP);
  /* 128242b1 pop ebp */
  EBP = (pop32());
  /* 128242b2 ret  */
  ESPCHK(0x128241d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042c0 @ 0x128242c0 (28 bytes, 11 insns) */
void f_128242c0(void) {
  FTRACE(0x128242c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128242c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128242c1 mov ebp, esp */
  EBP = (ESP);
  /* 128242c3 push ecx */
  push32((uint32_t)(ECX));
  /* 128242c4 mov eax, dword ptr [0x1284fe38] */
  EAX = (r32((uint32_t)(0x1284fe38)));
  /* 128242c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128242cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128242cf mov dword ptr [0x1284fe38], ecx */
  w32((uint32_t)(0x1284fe38), (ECX));
  /* 128242d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128242d8 mov esp, ebp */
  ESP = (EBP);
  /* 128242da pop ebp */
  EBP = (pop32());
  /* 128242db ret  */
  ESPCHK(0x128242c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e0 @ 0x128242e0 (362 bytes, 116 insns) */
void f_128242e0(void) {
  FTRACE(0x128242e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128242e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128242e1 mov ebp, esp */
  EBP = (ESP);
  /* 128242e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128242e6 push ebx */
  push32((uint32_t)(EBX));
  /* 128242e7 push esi */
  push32((uint32_t)(ESI));
  /* 128242e8 push edi */
  push32((uint32_t)(EDI));
  /* 128242e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128242ed jne 0x1282431a */
  if (!C.zf) goto L_1282431a;
L_128242ef:;
  /* 128242ef push 0x12849904 */
  push32((uint32_t)(0x12849904u));
  /* 128242f4 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 128242f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128242fb push 0 */
  push32((uint32_t)(0x0u));
  /* 128242fd push 0 */
  push32((uint32_t)(0x0u));
  /* 128242ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12824301 call 0x12821c00 */
  push32(0x12824306u); f_12821c00();
  /* 12824306 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824309 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282430c jne 0x1282430f */
  if (!C.zf) goto L_1282430f;
  /* 1282430e int3  */
  x86_unimpl("int3 @ 0x1282430e");
L_1282430f:;
  /* 1282430f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824313 jne 0x128242ef */
  if (!C.zf) goto L_128242ef;
  /* 12824315 jmp 0x12824443 */
  goto L_12824443;
L_1282431a:;
  /* 1282431a push 9 */
  push32((uint32_t)(0x9u));
  /* 1282431c call 0x12826540 */
  push32(0x12824321u); f_12826540();
  /* 12824321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824324 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824327 mov edx, dword ptr [0x1284e4d4] */
  EDX = (r32((uint32_t)(0x1284e4d4)));
  /* 1282432d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1282432f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12824336 jmp 0x12824341 */
  goto L_12824341;
L_12824338:;
  /* 12824338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282433b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282433e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12824341:;
  /* 12824341 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824345 jge 0x12824365 */
  if ((C.sf==C.of)) goto L_12824365;
  /* 12824347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282434a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282434d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12824355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282435b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12824363 jmp 0x12824338 */
  goto L_12824338;
L_12824365:;
  /* 12824365 mov edx, dword ptr [0x1284e4d4] */
  EDX = (r32((uint32_t)(0x1284e4d4)));
  /* 1282436b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282436e jmp 0x12824378 */
  goto L_12824378;
L_12824370:;
  /* 12824370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824373 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12824375 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12824378:;
  /* 12824378 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282437c je 0x12824421 */
  if (C.zf) goto L_12824421;
  /* 12824382 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824385 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12824388 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282438d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282438f jl 0x128243f7 */
  if ((C.sf!=C.of)) goto L_128243f7;
  /* 12824391 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824394 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12824397 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1282439d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128243a0 jge 0x128243f7 */
  if ((C.sf==C.of)) goto L_128243f7;
  /* 128243a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128243a5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128243a8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 128243ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128243b1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 128243b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128243b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128243bb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128243be and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128243c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128243c7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 128243cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128243ce mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128243d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128243d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128243d9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 128243dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128243e0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128243e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128243e6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 128243e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128243ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128243f1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 128243f5 jmp 0x1282441c */
  goto L_1282441c;
L_128243f7:;
  /* 128243f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128243fa push edx */
  push32((uint32_t)(EDX));
  /* 128243fb push 0x128498e0 */
  push32((uint32_t)(0x128498e0u));
  /* 12824400 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824404 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824406 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824408 call 0x12821c00 */
  push32(0x1282440du); f_12821c00();
  /* 1282440d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824410 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824413 jne 0x12824416 */
  if (!C.zf) goto L_12824416;
  /* 12824415 int3  */
  x86_unimpl("int3 @ 0x12824415");
L_12824416:;
  /* 12824416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282441a jne 0x128243f7 */
  if (!C.zf) goto L_128243f7;
L_1282441c:;
  /* 1282441c jmp 0x12824370 */
  goto L_12824370;
L_12824421:;
  /* 12824421 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824424 mov edx, dword ptr [0x1284e4dc] */
  EDX = (r32((uint32_t)(0x1284e4dc)));
  /* 1282442a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1282442d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824430 mov ecx, dword ptr [0x1284e4d0] */
  ECX = (r32((uint32_t)(0x1284e4d0)));
  /* 12824436 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12824439 push 9 */
  push32((uint32_t)(0x9u));
  /* 1282443b call 0x128265e0 */
  push32(0x12824440u); f_128265e0();
  /* 12824440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12824443:;
  /* 12824443 pop edi */
  EDI = (pop32());
  /* 12824444 pop esi */
  ESI = (pop32());
  /* 12824445 pop ebx */
  EBX = (pop32());
  /* 12824446 mov esp, ebp */
  ESP = (EBP);
  /* 12824448 pop ebp */
  EBP = (pop32());
  /* 12824449 ret  */
  ESPCHK(0x128242e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004450 @ 0x12824450 (291 bytes, 95 insns) */
void f_12824450(void) {
  FTRACE(0x12824450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824450 push ebp */
  push32((uint32_t)(EBP));
  /* 12824451 mov ebp, esp */
  EBP = (ESP);
  /* 12824453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824456 push ebx */
  push32((uint32_t)(EBX));
  /* 12824457 push esi */
  push32((uint32_t)(ESI));
  /* 12824458 push edi */
  push32((uint32_t)(EDI));
  /* 12824459 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12824460 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824464 je 0x12824472 */
  if (C.zf) goto L_12824472;
  /* 12824466 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282446a je 0x12824472 */
  if (C.zf) goto L_12824472;
  /* 1282446c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824470 jne 0x128244a0 */
  if (!C.zf) goto L_128244a0;
L_12824472:;
  /* 12824472 push 0x1284992c */
  push32((uint32_t)(0x1284992cu));
  /* 12824477 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 1282447c push 0 */
  push32((uint32_t)(0x0u));
  /* 1282447e push 0 */
  push32((uint32_t)(0x0u));
  /* 12824480 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824482 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824484 call 0x12821c00 */
  push32(0x12824489u); f_12821c00();
  /* 12824489 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282448c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282448f jne 0x12824492 */
  if (!C.zf) goto L_12824492;
  /* 12824491 int3  */
  x86_unimpl("int3 @ 0x12824491");
L_12824492:;
  /* 12824492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824496 jne 0x12824472 */
  if (!C.zf) goto L_12824472;
  /* 12824498 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282449b jmp 0x1282456c */
  goto L_1282456c;
L_128244a0:;
  /* 128244a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128244a7 jmp 0x128244b2 */
  goto L_128244b2;
L_128244a9:;
  /* 128244a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128244af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128244b2:;
  /* 128244b2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128244b6 jge 0x1282453c */
  if ((C.sf==C.of)) goto L_1282453c;
  /* 128244bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128244c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 128244c8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 128244cc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128244d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128244d6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 128244da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128244e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244e3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 128244e6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 128244ea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128244ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128244f4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 128244f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128244fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128244fe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824503 jne 0x12824512 */
  if (!C.zf) goto L_12824512;
  /* 12824505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282450b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824510 je 0x12824537 */
  if (C.zf) goto L_12824537;
L_12824512:;
  /* 12824512 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824516 je 0x12824537 */
  if (C.zf) goto L_12824537;
  /* 12824518 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282451c jne 0x12824530 */
  if (!C.zf) goto L_12824530;
  /* 1282451e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824522 jne 0x12824537 */
  if (!C.zf) goto L_12824537;
  /* 12824524 mov eax, dword ptr [0x1284ca84] */
  EAX = (r32((uint32_t)(0x1284ca84)));
  /* 12824529 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1282452c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282452e je 0x12824537 */
  if (C.zf) goto L_12824537;
L_12824530:;
  /* 12824530 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12824537:;
  /* 12824537 jmp 0x128244a9 */
  goto L_128244a9;
L_1282453c:;
  /* 1282453c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282453f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824542 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12824545 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282454b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1282454e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824551 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824554 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12824557 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282455a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282455d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12824560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824563 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12824569 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1282456c:;
  /* 1282456c pop edi */
  EDI = (pop32());
  /* 1282456d pop esi */
  ESI = (pop32());
  /* 1282456e pop ebx */
  EBX = (pop32());
  /* 1282456f mov esp, ebp */
  ESP = (EBP);
  /* 12824571 pop ebp */
  EBP = (pop32());
  /* 12824572 ret  */
  ESPCHK(0x12824450u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x12824580 (697 bytes, 253 insns) */
void f_12824580(void) {
  FTRACE(0x12824580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824580 push ebp */
  push32((uint32_t)(EBP));
  /* 12824581 mov ebp, esp */
  EBP = (ESP);
  /* 12824583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824586 push ebx */
  push32((uint32_t)(EBX));
  /* 12824587 push esi */
  push32((uint32_t)(ESI));
  /* 12824588 push edi */
  push32((uint32_t)(EDI));
  /* 12824589 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12824590 push 9 */
  push32((uint32_t)(0x9u));
  /* 12824592 call 0x12826540 */
  push32(0x12824597u); f_12826540();
  /* 12824597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282459a:;
  /* 1282459a push 0x12849a24 */
  push32((uint32_t)(0x12849a24u));
  /* 1282459f push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 128245a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128245a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128245a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 128245aa push 0 */
  push32((uint32_t)(0x0u));
  /* 128245ac call 0x12821c00 */
  push32(0x128245b1u); f_12821c00();
  /* 128245b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128245b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128245b7 jne 0x128245ba */
  if (!C.zf) goto L_128245ba;
  /* 128245b9 int3  */
  x86_unimpl("int3 @ 0x128245b9");
L_128245ba:;
  /* 128245ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128245bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128245be jne 0x1282459a */
  if (!C.zf) goto L_1282459a;
  /* 128245c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128245c4 je 0x128245ce */
  if (C.zf) goto L_128245ce;
  /* 128245c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128245c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128245cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_128245ce:;
  /* 128245ce mov eax, dword ptr [0x1284e4d4] */
  EAX = (r32((uint32_t)(0x1284e4d4)));
  /* 128245d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128245d6 jmp 0x128245e0 */
  goto L_128245e0;
L_128245d8:;
  /* 128245d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128245db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128245dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_128245e0:;
  /* 128245e0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128245e4 je 0x12824802 */
  if (C.zf) goto L_12824802;
  /* 128245ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128245ed cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128245f0 je 0x12824802 */
  if (C.zf) goto L_12824802;
  /* 128245f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128245f9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128245fc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12824602 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824605 je 0x12824634 */
  if (C.zf) goto L_12824634;
  /* 12824607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282460a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1282460d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12824613 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12824615 je 0x12824634 */
  if (C.zf) goto L_12824634;
  /* 12824617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282461a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1282461d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12824622 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824625 jne 0x12824639 */
  if (!C.zf) goto L_12824639;
  /* 12824627 mov ecx, dword ptr [0x1284ca84] */
  ECX = (r32((uint32_t)(0x1284ca84)));
  /* 1282462d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12824630 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12824632 jne 0x12824639 */
  if (!C.zf) goto L_12824639;
L_12824634:;
  /* 12824634 jmp 0x128247fd */
  goto L_128247fd;
L_12824639:;
  /* 12824639 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282463c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824640 je 0x128246b2 */
  if (C.zf) goto L_128246b2;
  /* 12824642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824644 push 1 */
  push32((uint32_t)(0x1u));
  /* 12824646 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824649 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282464c push ecx */
  push32((uint32_t)(ECX));
  /* 1282464d call 0x128240f0 */
  push32(0x12824652u); f_128240f0();
  /* 12824652 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824657 jne 0x12824683 */
  if (!C.zf) goto L_12824683;
L_12824659:;
  /* 12824659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282465c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1282465f push eax */
  push32((uint32_t)(EAX));
  /* 12824660 push 0x12849a10 */
  push32((uint32_t)(0x12849a10u));
  /* 12824665 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824667 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282466b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282466d call 0x12821c00 */
  push32(0x12824672u); f_12821c00();
  /* 12824672 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824675 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824678 jne 0x1282467b */
  if (!C.zf) goto L_1282467b;
  /* 1282467a int3  */
  x86_unimpl("int3 @ 0x1282467a");
L_1282467b:;
  /* 1282467b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282467d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282467f jne 0x12824659 */
  if (!C.zf) goto L_12824659;
  /* 12824681 jmp 0x128246b2 */
  goto L_128246b2;
L_12824683:;
  /* 12824683 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824686 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12824689 push eax */
  push32((uint32_t)(EAX));
  /* 1282468a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282468d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12824690 push edx */
  push32((uint32_t)(EDX));
  /* 12824691 push 0x12849a04 */
  push32((uint32_t)(0x12849a04u));
  /* 12824696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824698 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282469a push 0 */
  push32((uint32_t)(0x0u));
  /* 1282469c push 0 */
  push32((uint32_t)(0x0u));
  /* 1282469e call 0x12821c00 */
  push32(0x128246a3u); f_12821c00();
  /* 128246a3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128246a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128246a9 jne 0x128246ac */
  if (!C.zf) goto L_128246ac;
  /* 128246ab int3  */
  x86_unimpl("int3 @ 0x128246ab");
L_128246ac:;
  /* 128246ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128246ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128246b0 jne 0x12824683 */
  if (!C.zf) goto L_12824683;
L_128246b2:;
  /* 128246b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128246b5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 128246b8 push edx */
  push32((uint32_t)(EDX));
  /* 128246b9 push 0x128499fc */
  push32((uint32_t)(0x128499fcu));
  /* 128246be push 0 */
  push32((uint32_t)(0x0u));
  /* 128246c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128246c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128246c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128246c6 call 0x12821c00 */
  push32(0x128246cbu); f_12821c00();
  /* 128246cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128246ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128246d1 jne 0x128246d4 */
  if (!C.zf) goto L_128246d4;
  /* 128246d3 int3  */
  x86_unimpl("int3 @ 0x128246d3");
L_128246d4:;
  /* 128246d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128246d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128246d8 jne 0x128246b2 */
  if (!C.zf) goto L_128246b2;
  /* 128246da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128246dd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128246e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128246e6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128246e9 jne 0x1282475c */
  if (!C.zf) goto L_1282475c;
L_128246eb:;
  /* 128246eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128246ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128246f1 push ecx */
  push32((uint32_t)(ECX));
  /* 128246f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128246f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128246f8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 128246fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12824700 push eax */
  push32((uint32_t)(EAX));
  /* 12824701 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824704 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824707 push ecx */
  push32((uint32_t)(ECX));
  /* 12824708 push 0x128499c8 */
  push32((uint32_t)(0x128499c8u));
  /* 1282470d push 0 */
  push32((uint32_t)(0x0u));
  /* 1282470f push 0 */
  push32((uint32_t)(0x0u));
  /* 12824711 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824713 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824715 call 0x12821c00 */
  push32(0x1282471au); f_12821c00();
  /* 1282471a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282471d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824720 jne 0x12824723 */
  if (!C.zf) goto L_12824723;
  /* 12824722 int3  */
  x86_unimpl("int3 @ 0x12824722");
L_12824723:;
  /* 12824723 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12824725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12824727 jne 0x128246eb */
  if (!C.zf) goto L_128246eb;
  /* 12824729 cmp dword ptr [0x1284fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824730 je 0x1282474b */
  if (C.zf) goto L_1282474b;
  /* 12824732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824735 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12824738 push ecx */
  push32((uint32_t)(ECX));
  /* 12824739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282473c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282473f push edx */
  push32((uint32_t)(EDX));
  /* 12824740 call dword ptr [0x1284fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284fe38))), 0x12824746u);
  /* 12824746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824749 jmp 0x12824757 */
  goto L_12824757;
L_1282474b:;
  /* 1282474b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282474e push eax */
  push32((uint32_t)(EAX));
  /* 1282474f call 0x12824840 */
  push32(0x12824754u); f_12824840();
  /* 12824754 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12824757:;
  /* 12824757 jmp 0x128247fd */
  goto L_128247fd;
L_1282475c:;
  /* 1282475c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282475f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824763 jne 0x128247a2 */
  if (!C.zf) goto L_128247a2;
L_12824765:;
  /* 12824765 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824768 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1282476b push eax */
  push32((uint32_t)(EAX));
  /* 1282476c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282476f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824772 push ecx */
  push32((uint32_t)(ECX));
  /* 12824773 push 0x128499a0 */
  push32((uint32_t)(0x128499a0u));
  /* 12824778 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282477a push 0 */
  push32((uint32_t)(0x0u));
  /* 1282477c push 0 */
  push32((uint32_t)(0x0u));
  /* 1282477e push 0 */
  push32((uint32_t)(0x0u));
  /* 12824780 call 0x12821c00 */
  push32(0x12824785u); f_12821c00();
  /* 12824785 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824788 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282478b jne 0x1282478e */
  if (!C.zf) goto L_1282478e;
  /* 1282478d int3  */
  x86_unimpl("int3 @ 0x1282478d");
L_1282478e:;
  /* 1282478e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12824790 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12824792 jne 0x12824765 */
  if (!C.zf) goto L_12824765;
  /* 12824794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824797 push eax */
  push32((uint32_t)(EAX));
  /* 12824798 call 0x12824840 */
  push32(0x1282479du); f_12824840();
  /* 1282479d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128247a0 jmp 0x128247fd */
  goto L_128247fd;
L_128247a2:;
  /* 128247a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128247a5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128247a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128247ae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128247b1 jne 0x128247fd */
  if (!C.zf) goto L_128247fd;
L_128247b3:;
  /* 128247b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128247b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128247b9 push ecx */
  push32((uint32_t)(ECX));
  /* 128247ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128247bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128247c0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 128247c3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128247c8 push eax */
  push32((uint32_t)(EAX));
  /* 128247c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128247cc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128247cf push ecx */
  push32((uint32_t)(ECX));
  /* 128247d0 push 0x1284996c */
  push32((uint32_t)(0x1284996cu));
  /* 128247d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128247d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128247d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128247db push 0 */
  push32((uint32_t)(0x0u));
  /* 128247dd call 0x12821c00 */
  push32(0x128247e2u); f_12821c00();
  /* 128247e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128247e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128247e8 jne 0x128247eb */
  if (!C.zf) goto L_128247eb;
  /* 128247ea int3  */
  x86_unimpl("int3 @ 0x128247ea");
L_128247eb:;
  /* 128247eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128247ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128247ef jne 0x128247b3 */
  if (!C.zf) goto L_128247b3;
  /* 128247f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128247f4 push eax */
  push32((uint32_t)(EAX));
  /* 128247f5 call 0x12824840 */
  push32(0x128247fau); f_12824840();
  /* 128247fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128247fd:;
  /* 128247fd jmp 0x128245d8 */
  goto L_128245d8;
L_12824802:;
  /* 12824802 push 9 */
  push32((uint32_t)(0x9u));
  /* 12824804 call 0x128265e0 */
  push32(0x12824809u); f_128265e0();
  /* 12824809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282480c:;
  /* 1282480c push 0x12849954 */
  push32((uint32_t)(0x12849954u));
  /* 12824811 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 12824816 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282481a push 0 */
  push32((uint32_t)(0x0u));
  /* 1282481c push 0 */
  push32((uint32_t)(0x0u));
  /* 1282481e call 0x12821c00 */
  push32(0x12824823u); f_12821c00();
  /* 12824823 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824826 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824829 jne 0x1282482c */
  if (!C.zf) goto L_1282482c;
  /* 1282482b int3  */
  x86_unimpl("int3 @ 0x1282482b");
L_1282482c:;
  /* 1282482c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282482e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12824830 jne 0x1282480c */
  if (!C.zf) goto L_1282480c;
  /* 12824832 pop edi */
  EDI = (pop32());
  /* 12824833 pop esi */
  ESI = (pop32());
  /* 12824834 pop ebx */
  EBX = (pop32());
  /* 12824835 mov esp, ebp */
  ESP = (EBP);
  /* 12824837 pop ebp */
  EBP = (pop32());
  /* 12824838 ret  */
  ESPCHK(0x12824580u, _esp0);
  ESP += 4; return;
}

/* FUN_10004840 @ 0x12824840 (276 bytes, 89 insns) */
void f_12824840(void) {
  FTRACE(0x12824840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824840 push ebp */
  push32((uint32_t)(EBP));
  /* 12824841 mov ebp, esp */
  EBP = (ESP);
  /* 12824843 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824846 push ebx */
  push32((uint32_t)(EBX));
  /* 12824847 push esi */
  push32((uint32_t)(ESI));
  /* 12824848 push edi */
  push32((uint32_t)(EDI));
  /* 12824849 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12824850 jmp 0x1282485b */
  goto L_1282485b;
L_12824852:;
  /* 12824852 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12824855 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824858 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1282485b:;
  /* 1282485b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282485e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824862 jge 0x1282486f */
  if ((C.sf==C.of)) goto L_1282486f;
  /* 12824864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824867 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1282486a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1282486d jmp 0x12824876 */
  goto L_12824876;
L_1282486f:;
  /* 1282486f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12824876:;
  /* 12824876 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12824879 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282487c jge 0x1282491c */
  if ((C.sf==C.of)) goto L_1282491c;
  /* 12824882 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824885 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824888 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1282488b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1282488e cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824895 jle 0x128248b3 */
  if ((C.zf||C.sf!=C.of)) goto L_128248b3;
  /* 12824897 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1282489c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1282489f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 128248a5 push ecx */
  push32((uint32_t)(ECX));
  /* 128248a6 call 0x12828b50 */
  push32(0x128248abu); f_12828b50();
  /* 128248ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128248ae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 128248b1 jmp 0x128248d0 */
  goto L_128248d0;
L_128248b3:;
  /* 128248b3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 128248b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128248bc mov eax, dword ptr [0x1284cc98] */
  EAX = (r32((uint32_t)(0x1284cc98)));
  /* 128248c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128248c3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 128248c7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 128248cd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_128248d0:;
  /* 128248d0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128248d4 je 0x128248e4 */
  if (C.zf) goto L_128248e4;
  /* 128248d6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 128248d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128248df mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 128248e2 jmp 0x128248eb */
  goto L_128248eb;
L_128248e4:;
  /* 128248e4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_128248eb:;
  /* 128248eb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 128248ee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 128248f1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 128248f5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 128248f8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128248fe push edx */
  push32((uint32_t)(EDX));
  /* 128248ff push 0x12849a48 */
  push32((uint32_t)(0x12849a48u));
  /* 12824904 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12824907 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282490a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1282490e push ecx */
  push32((uint32_t)(ECX));
  /* 1282490f call 0x12828a50 */
  push32(0x12824914u); f_12828a50();
  /* 12824914 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824917 jmp 0x12824852 */
  goto L_12824852;
L_1282491c:;
  /* 1282491c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1282491f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12824924:;
  /* 12824924 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12824927 push eax */
  push32((uint32_t)(EAX));
  /* 12824928 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1282492b push ecx */
  push32((uint32_t)(ECX));
  /* 1282492c push 0x12849a38 */
  push32((uint32_t)(0x12849a38u));
  /* 12824931 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824933 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824935 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824937 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824939 call 0x12821c00 */
  push32(0x1282493eu); f_12821c00();
  /* 1282493e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824941 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824944 jne 0x12824947 */
  if (!C.zf) goto L_12824947;
  /* 12824946 int3  */
  x86_unimpl("int3 @ 0x12824946");
L_12824947:;
  /* 12824947 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12824949 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282494b jne 0x12824924 */
  if (!C.zf) goto L_12824924;
  /* 1282494d pop edi */
  EDI = (pop32());
  /* 1282494e pop esi */
  ESI = (pop32());
  /* 1282494f pop ebx */
  EBX = (pop32());
  /* 12824950 mov esp, ebp */
  ESP = (EBP);
  /* 12824952 pop ebp */
  EBP = (pop32());
  /* 12824953 ret  */
  ESPCHK(0x12824840u, _esp0);
  ESP += 4; return;
}

/* FUN_10004960 @ 0x12824960 (116 bytes, 46 insns) */
void f_12824960(void) {
  FTRACE(0x12824960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824960 push ebp */
  push32((uint32_t)(EBP));
  /* 12824961 mov ebp, esp */
  EBP = (ESP);
  /* 12824963 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824966 push ebx */
  push32((uint32_t)(EBX));
  /* 12824967 push esi */
  push32((uint32_t)(ESI));
  /* 12824968 push edi */
  push32((uint32_t)(EDI));
  /* 12824969 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1282496c push eax */
  push32((uint32_t)(EAX));
  /* 1282496d call 0x128242e0 */
  push32(0x12824972u); f_128242e0();
  /* 12824972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824975 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824979 jne 0x12824994 */
  if (!C.zf) goto L_12824994;
  /* 1282497b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282497f jne 0x12824994 */
  if (!C.zf) goto L_12824994;
  /* 12824981 mov ecx, dword ptr [0x1284ca84] */
  ECX = (r32((uint32_t)(0x1284ca84)));
  /* 12824987 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1282498a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282498c je 0x128249cb */
  if (C.zf) goto L_128249cb;
  /* 1282498e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824992 je 0x128249cb */
  if (C.zf) goto L_128249cb;
L_12824994:;
  /* 12824994 push 0x12849a50 */
  push32((uint32_t)(0x12849a50u));
  /* 12824999 push 0x1284941c */
  push32((uint32_t)(0x1284941cu));
  /* 1282499e push 0 */
  push32((uint32_t)(0x0u));
  /* 128249a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128249a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128249a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128249a6 call 0x12821c00 */
  push32(0x128249abu); f_12821c00();
  /* 128249ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128249ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128249b1 jne 0x128249b4 */
  if (!C.zf) goto L_128249b4;
  /* 128249b3 int3  */
  x86_unimpl("int3 @ 0x128249b3");
L_128249b4:;
  /* 128249b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128249b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128249b8 jne 0x12824994 */
  if (!C.zf) goto L_12824994;
  /* 128249ba push 0 */
  push32((uint32_t)(0x0u));
  /* 128249bc call 0x12824580 */
  push32(0x128249c1u); f_12824580();
  /* 128249c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128249c4 mov eax, 1 */
  EAX = (0x1u);
  /* 128249c9 jmp 0x128249cd */
  goto L_128249cd;
L_128249cb:;
  /* 128249cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128249cd:;
  /* 128249cd pop edi */
  EDI = (pop32());
  /* 128249ce pop esi */
  ESI = (pop32());
  /* 128249cf pop ebx */
  EBX = (pop32());
  /* 128249d0 mov esp, ebp */
  ESP = (EBP);
  /* 128249d2 pop ebp */
  EBP = (pop32());
  /* 128249d3 ret  */
  ESPCHK(0x12824960u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x128249e0 (197 bytes, 79 insns) */
void f_128249e0(void) {
  FTRACE(0x128249e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128249e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128249e1 mov ebp, esp */
  EBP = (ESP);
  /* 128249e3 push ecx */
  push32((uint32_t)(ECX));
  /* 128249e4 push ebx */
  push32((uint32_t)(EBX));
  /* 128249e5 push esi */
  push32((uint32_t)(ESI));
  /* 128249e6 push edi */
  push32((uint32_t)(EDI));
  /* 128249e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128249eb jne 0x128249f2 */
  if (!C.zf) goto L_128249f2;
  /* 128249ed jmp 0x12824a9e */
  goto L_12824a9e;
L_128249f2:;
  /* 128249f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128249f9 jmp 0x12824a04 */
  goto L_12824a04;
L_128249fb:;
  /* 128249fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128249fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824a01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12824a04:;
  /* 12824a04 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824a08 jge 0x12824a4e */
  if ((C.sf==C.of)) goto L_12824a4e;
L_12824a0a:;
  /* 12824a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824a0d mov edx, dword ptr [ecx*4 + 0x1284ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284ca94)));
  /* 12824a14 push edx */
  push32((uint32_t)(EDX));
  /* 12824a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824a18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824a1b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12824a1f push edx */
  push32((uint32_t)(EDX));
  /* 12824a20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824a23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824a26 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12824a2a push edx */
  push32((uint32_t)(EDX));
  /* 12824a2b push 0x12849aac */
  push32((uint32_t)(0x12849aacu));
  /* 12824a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a38 call 0x12821c00 */
  push32(0x12824a3du); f_12821c00();
  /* 12824a3d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824a40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824a43 jne 0x12824a46 */
  if (!C.zf) goto L_12824a46;
  /* 12824a45 int3  */
  x86_unimpl("int3 @ 0x12824a45");
L_12824a46:;
  /* 12824a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824a4a jne 0x12824a0a */
  if (!C.zf) goto L_12824a0a;
  /* 12824a4c jmp 0x128249fb */
  goto L_128249fb;
L_12824a4e:;
  /* 12824a4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824a51 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12824a54 push edx */
  push32((uint32_t)(EDX));
  /* 12824a55 push 0x12849a88 */
  push32((uint32_t)(0x12849a88u));
  /* 12824a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a62 call 0x12821c00 */
  push32(0x12824a67u); f_12821c00();
  /* 12824a67 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824a6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824a6d jne 0x12824a70 */
  if (!C.zf) goto L_12824a70;
  /* 12824a6f int3  */
  x86_unimpl("int3 @ 0x12824a6f");
L_12824a70:;
  /* 12824a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824a74 jne 0x12824a4e */
  if (!C.zf) goto L_12824a4e;
L_12824a76:;
  /* 12824a76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824a79 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12824a7c push edx */
  push32((uint32_t)(EDX));
  /* 12824a7d push 0x12849a68 */
  push32((uint32_t)(0x12849a68u));
  /* 12824a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12824a8a call 0x12821c00 */
  push32(0x12824a8fu); f_12821c00();
  /* 12824a8f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824a92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824a95 jne 0x12824a98 */
  if (!C.zf) goto L_12824a98;
  /* 12824a97 int3  */
  x86_unimpl("int3 @ 0x12824a97");
L_12824a98:;
  /* 12824a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824a9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824a9c jne 0x12824a76 */
  if (!C.zf) goto L_12824a76;
L_12824a9e:;
  /* 12824a9e pop edi */
  EDI = (pop32());
  /* 12824a9f pop esi */
  ESI = (pop32());
  /* 12824aa0 pop ebx */
  EBX = (pop32());
  /* 12824aa1 mov esp, ebp */
  ESP = (EBP);
  /* 12824aa3 pop ebp */
  EBP = (pop32());
  /* 12824aa4 ret  */
  ESPCHK(0x128249e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab0 @ 0x12824ab0 (329 bytes, 102 insns) */
void f_12824ab0(void) {
  FTRACE(0x12824ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12824ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12824ab3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824ab6 cmp dword ptr [0x1284ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824abd jne 0x12824ac4 */
  if (!C.zf) goto L_12824ac4;
  /* 12824abf call 0x128293f0 */
  push32(0x12824ac4u); f_128293f0();
L_12824ac4:;
  /* 12824ac4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12824acb mov eax, dword ptr [0x1284e470] */
  EAX = (r32((uint32_t)(0x1284e470)));
  /* 12824ad0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12824ad3:;
  /* 12824ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ad6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12824ad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12824adb je 0x12824b09 */
  if (C.zf) goto L_12824b09;
  /* 12824add mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ae0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824ae3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824ae6 je 0x12824af1 */
  if (C.zf) goto L_12824af1;
  /* 12824ae8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824aeb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824aee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12824af1:;
  /* 12824af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824af4 push eax */
  push32((uint32_t)(EAX));
  /* 12824af5 call 0x12825970 */
  push32(0x12824afau); f_12825970();
  /* 12824afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824afd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824b00 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12824b04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12824b07 jmp 0x12824ad3 */
  goto L_12824ad3;
L_12824b09:;
  /* 12824b09 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12824b0b push 0x12849acc */
  push32((uint32_t)(0x12849accu));
  /* 12824b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12824b12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824b15 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12824b1c push ecx */
  push32((uint32_t)(ECX));
  /* 12824b1d call 0x12822b40 */
  push32(0x12824b22u); f_12822b40();
  /* 12824b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824b25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12824b28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824b2b mov dword ptr [0x1284e4a4], edx */
  w32((uint32_t)(0x1284e4a4), (EDX));
  /* 12824b31 cmp dword ptr [0x1284e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824b38 jne 0x12824b44 */
  if (!C.zf) goto L_12824b44;
  /* 12824b3a push 9 */
  push32((uint32_t)(0x9u));
  /* 12824b3c call 0x12821ab0 */
  push32(0x12824b41u); f_12821ab0();
  /* 12824b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12824b44:;
  /* 12824b44 mov eax, dword ptr [0x1284e470] */
  EAX = (r32((uint32_t)(0x1284e470)));
  /* 12824b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12824b4c jmp 0x12824b57 */
  goto L_12824b57;
L_12824b4e:;
  /* 12824b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824b51 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824b54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12824b57:;
  /* 12824b57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824b5a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12824b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824b5f je 0x12824bc7 */
  if (C.zf) goto L_12824bc7;
  /* 12824b61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824b64 push ecx */
  push32((uint32_t)(ECX));
  /* 12824b65 call 0x12825970 */
  push32(0x12824b6au); f_12825970();
  /* 12824b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824b6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824b70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12824b73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824b76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12824b79 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824b7c je 0x12824bc5 */
  if (C.zf) goto L_12824bc5;
  /* 12824b7e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12824b80 push 0x12849acc */
  push32((uint32_t)(0x12849accu));
  /* 12824b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12824b87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824b8a push ecx */
  push32((uint32_t)(ECX));
  /* 12824b8b call 0x12822b40 */
  push32(0x12824b90u); f_12822b40();
  /* 12824b90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824b93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824b96 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12824b98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824b9b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824b9e jne 0x12824baa */
  if (!C.zf) goto L_12824baa;
  /* 12824ba0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12824ba2 call 0x12821ab0 */
  push32(0x12824ba7u); f_12821ab0();
  /* 12824ba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12824baa:;
  /* 12824baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824bad push ecx */
  push32((uint32_t)(ECX));
  /* 12824bae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824bb1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12824bb3 push eax */
  push32((uint32_t)(EAX));
  /* 12824bb4 call 0x12825af0 */
  push32(0x12824bb9u); f_12825af0();
  /* 12824bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824bbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824bbf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824bc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12824bc5:;
  /* 12824bc5 jmp 0x12824b4e */
  goto L_12824b4e;
L_12824bc7:;
  /* 12824bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12824bc9 mov edx, dword ptr [0x1284e470] */
  EDX = (r32((uint32_t)(0x1284e470)));
  /* 12824bcf push edx */
  push32((uint32_t)(EDX));
  /* 12824bd0 call 0x128235d0 */
  push32(0x12824bd5u); f_128235d0();
  /* 12824bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824bd8 mov dword ptr [0x1284e470], 0 */
  w32((uint32_t)(0x1284e470), (0x0u));
  /* 12824be2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824be5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12824beb mov dword ptr [0x1284ffa0], 1 */
  w32((uint32_t)(0x1284ffa0), (0x1u));
  /* 12824bf5 mov esp, ebp */
  ESP = (EBP);
  /* 12824bf7 pop ebp */
  EBP = (pop32());
  /* 12824bf8 ret  */
  ESPCHK(0x12824ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x12824c00 (216 bytes, 69 insns) */
void f_12824c00(void) {
  FTRACE(0x12824c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12824c01 mov ebp, esp */
  EBP = (ESP);
  /* 12824c03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824c06 cmp dword ptr [0x1284ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824c0d jne 0x12824c14 */
  if (!C.zf) goto L_12824c14;
  /* 12824c0f call 0x128293f0 */
  push32(0x12824c14u); f_128293f0();
L_12824c14:;
  /* 12824c14 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12824c19 push 0x1284e4e0 */
  push32((uint32_t)(0x1284e4e0u));
  /* 12824c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12824c20 call dword ptr [0x1285027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285027c))), 0x12824c26u);
  /* 12824c26 mov dword ptr [0x1284e4b4], 0x1284e4e0 */
  w32((uint32_t)(0x1284e4b4), (0x1284e4e0u));
  /* 12824c30 mov eax, dword ptr [0x1284ffcc] */
  EAX = (r32((uint32_t)(0x1284ffcc)));
  /* 12824c35 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824c38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12824c3a jne 0x12824c47 */
  if (!C.zf) goto L_12824c47;
  /* 12824c3c mov edx, dword ptr [0x1284e4b4] */
  EDX = (r32((uint32_t)(0x1284e4b4)));
  /* 12824c42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12824c45 jmp 0x12824c4f */
  goto L_12824c4f;
L_12824c47:;
  /* 12824c47 mov eax, dword ptr [0x1284ffcc] */
  EAX = (r32((uint32_t)(0x1284ffcc)));
  /* 12824c4c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12824c4f:;
  /* 12824c4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12824c52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12824c55 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12824c58 push edx */
  push32((uint32_t)(EDX));
  /* 12824c59 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12824c5c push eax */
  push32((uint32_t)(EAX));
  /* 12824c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12824c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12824c61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824c64 push ecx */
  push32((uint32_t)(ECX));
  /* 12824c65 call 0x12824ce0 */
  push32(0x12824c6au); f_12824ce0();
  /* 12824c6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824c6d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12824c72 push 0x12849ad8 */
  push32((uint32_t)(0x12849ad8u));
  /* 12824c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12824c79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824c7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824c7f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12824c82 push ecx */
  push32((uint32_t)(ECX));
  /* 12824c83 call 0x12822b40 */
  push32(0x12824c88u); f_12822b40();
  /* 12824c88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824c8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12824c8e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824c92 jne 0x12824c9e */
  if (!C.zf) goto L_12824c9e;
  /* 12824c94 push 8 */
  push32((uint32_t)(0x8u));
  /* 12824c96 call 0x12821ab0 */
  push32(0x12824c9bu); f_12821ab0();
  /* 12824c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12824c9e:;
  /* 12824c9e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12824ca1 push edx */
  push32((uint32_t)(EDX));
  /* 12824ca2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12824ca5 push eax */
  push32((uint32_t)(EAX));
  /* 12824ca6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824ca9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824cac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12824caf push eax */
  push32((uint32_t)(EAX));
  /* 12824cb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12824cb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824cb7 push edx */
  push32((uint32_t)(EDX));
  /* 12824cb8 call 0x12824ce0 */
  push32(0x12824cbdu); f_12824ce0();
  /* 12824cbd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12824cc0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824cc3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824cc6 mov dword ptr [0x1284e498], eax */
  w32((uint32_t)(0x1284e498), (EAX));
  /* 12824ccb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12824cce mov dword ptr [0x1284e49c], ecx */
  w32((uint32_t)(0x1284e49c), (ECX));
  /* 12824cd4 mov esp, ebp */
  ESP = (EBP);
  /* 12824cd6 pop ebp */
  EBP = (pop32());
  /* 12824cd7 ret  */
  ESPCHK(0x12824c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce0 @ 0x12824ce0 (1060 bytes, 360 insns) */
void f_12824ce0(void) {
  FTRACE(0x12824ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12824ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12824ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12824ce3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824ce6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824ce9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12824cef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12824cf2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12824cf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12824cfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12824cfe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824d02 je 0x12824d15 */
  if (C.zf) goto L_12824d15;
  /* 12824d04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824d07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824d0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12824d0c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824d0f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824d12 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12824d15:;
  /* 12824d15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824d18 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824d1b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824d1e jne 0x12824ded */
  if (!C.zf) goto L_12824ded;
L_12824d24:;
  /* 12824d24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824d27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824d2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12824d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824d30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824d33 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824d36 je 0x12824db2 */
  if (C.zf) goto L_12824db2;
  /* 12824d38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824d3b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12824d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824d40 je 0x12824db2 */
  if (C.zf) goto L_12824db2;
  /* 12824d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824d45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12824d47 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12824d49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12824d4b mov al, byte ptr [edx + 0x1284fd01] */
  AL = (r8((uint32_t)(EDX + 0x1284fd01)));
  /* 12824d51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12824d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824d56 je 0x12824d87 */
  if (C.zf) goto L_12824d87;
  /* 12824d58 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824d5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12824d5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824d60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824d63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12824d65 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824d69 je 0x12824d87 */
  if (C.zf) goto L_12824d87;
  /* 12824d6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824d6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824d71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12824d73 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12824d75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824d78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824d7b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12824d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824d81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824d84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12824d87:;
  /* 12824d87 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824d8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12824d8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824d8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824d92 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12824d94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824d98 je 0x12824dad */
  if (C.zf) goto L_12824dad;
  /* 12824d9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824d9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824da0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12824da2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12824da4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824da7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824daa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12824dad:;
  /* 12824dad jmp 0x12824d24 */
  goto L_12824d24;
L_12824db2:;
  /* 12824db2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824db5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12824db7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824dba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824dbd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12824dbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824dc3 je 0x12824dd4 */
  if (C.zf) goto L_12824dd4;
  /* 12824dc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824dc8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12824dcb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824dce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824dd1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12824dd4:;
  /* 12824dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824dd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824dda cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824ddd jne 0x12824de8 */
  if (!C.zf) goto L_12824de8;
  /* 12824ddf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824de2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824de5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12824de8:;
  /* 12824de8 jmp 0x12824ebc */
  goto L_12824ebc;
L_12824ded:;
  /* 12824ded mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824df0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12824df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824df5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824df8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12824dfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824dfe je 0x12824e13 */
  if (C.zf) goto L_12824e13;
  /* 12824e00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824e03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824e06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12824e08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12824e0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824e0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824e10 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12824e13:;
  /* 12824e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12824e18 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12824e1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824e1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824e21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12824e24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824e27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12824e2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12824e2f mov dl, byte ptr [ecx + 0x1284fd01] */
  DL = (r8((uint32_t)(ECX + 0x1284fd01)));
  /* 12824e35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12824e38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12824e3a je 0x12824e6b */
  if (C.zf) goto L_12824e6b;
  /* 12824e3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824e3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12824e41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824e44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824e47 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12824e49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824e4d je 0x12824e62 */
  if (C.zf) goto L_12824e62;
  /* 12824e4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824e52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824e55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12824e57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12824e59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824e5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824e5f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12824e62:;
  /* 12824e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824e68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12824e6b:;
  /* 12824e6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824e6e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12824e74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824e77 je 0x12824e97 */
  if (C.zf) goto L_12824e97;
  /* 12824e79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824e7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12824e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824e83 je 0x12824e97 */
  if (C.zf) goto L_12824e97;
  /* 12824e85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824e88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12824e8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824e91 jne 0x12824ded */
  if (!C.zf) goto L_12824ded;
L_12824e97:;
  /* 12824e97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12824e9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12824ea0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12824ea2 jne 0x12824eaf */
  if (!C.zf) goto L_12824eaf;
  /* 12824ea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ea7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824eaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12824ead jmp 0x12824ebc */
  goto L_12824ebc;
L_12824eaf:;
  /* 12824eaf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824eb3 je 0x12824ebc */
  if (C.zf) goto L_12824ebc;
  /* 12824eb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824eb8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12824ebc:;
  /* 12824ebc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12824ec3:;
  /* 12824ec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ec6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12824ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824ecb je 0x12824eee */
  if (C.zf) goto L_12824eee;
L_12824ecd:;
  /* 12824ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ed0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12824ed3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824ed6 je 0x12824ee3 */
  if (C.zf) goto L_12824ee3;
  /* 12824ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824edb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824ede cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824ee1 jne 0x12824eee */
  if (!C.zf) goto L_12824eee;
L_12824ee3:;
  /* 12824ee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ee6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824ee9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12824eec jmp 0x12824ecd */
  goto L_12824ecd;
L_12824eee:;
  /* 12824eee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ef1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824ef4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12824ef6 jne 0x12824efd */
  if (!C.zf) goto L_12824efd;
  /* 12824ef8 jmp 0x128250db */
  goto L_128250db;
L_12824efd:;
  /* 12824efd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824f01 je 0x12824f14 */
  if (C.zf) goto L_12824f14;
  /* 12824f03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824f06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824f09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12824f0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12824f0e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824f11 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12824f14:;
  /* 12824f14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12824f17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12824f19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824f1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12824f1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12824f21:;
  /* 12824f21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12824f28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12824f2f:;
  /* 12824f2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824f32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12824f35 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824f38 jne 0x12824f4e */
  if (!C.zf) goto L_12824f4e;
  /* 12824f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824f3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824f40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12824f43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824f46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824f49 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12824f4c jmp 0x12824f2f */
  goto L_12824f2f;
L_12824f4e:;
  /* 12824f4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824f51 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824f54 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824f57 jne 0x12824faa */
  if (!C.zf) goto L_12824faa;
  /* 12824f59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824f5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12824f5e mov ecx, 2 */
  ECX = (0x2u);
  /* 12824f63 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12824f65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12824f67 jne 0x12824fa2 */
  if (!C.zf) goto L_12824fa2;
  /* 12824f69 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824f6d je 0x12824f8f */
  if (C.zf) goto L_12824f8f;
  /* 12824f6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824f72 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12824f76 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824f79 jne 0x12824f86 */
  if (!C.zf) goto L_12824f86;
  /* 12824f7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824f7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824f81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12824f84 jmp 0x12824f8d */
  goto L_12824f8d;
L_12824f86:;
  /* 12824f86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12824f8d:;
  /* 12824f8d jmp 0x12824f96 */
  goto L_12824f96;
L_12824f8f:;
  /* 12824f8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12824f96:;
  /* 12824f96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12824f98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824f9c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12824f9f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12824fa2:;
  /* 12824fa2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824fa5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12824fa7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12824faa:;
  /* 12824faa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824fad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12824fb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12824fb3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12824fb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12824fb8 je 0x12824fde */
  if (C.zf) goto L_12824fde;
  /* 12824fba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824fbe je 0x12824fcf */
  if (C.zf) goto L_12824fcf;
  /* 12824fc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824fc3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12824fc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12824fc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824fcc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12824fcf:;
  /* 12824fcf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824fd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12824fd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12824fd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12824fda mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12824fdc jmp 0x12824faa */
  goto L_12824faa;
L_12824fde:;
  /* 12824fde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824fe1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12824fe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12824fe6 je 0x12825004 */
  if (C.zf) goto L_12825004;
  /* 12824fe8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824fec jne 0x12825009 */
  if (!C.zf) goto L_12825009;
  /* 12824fee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ff1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12824ff4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12824ff7 je 0x12825004 */
  if (C.zf) goto L_12825004;
  /* 12824ff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12824ffc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12824fff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825002 jne 0x12825009 */
  if (!C.zf) goto L_12825009;
L_12825004:;
  /* 12825004 jmp 0x128250b4 */
  goto L_128250b4;
L_12825009:;
  /* 12825009 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282500d je 0x128250a6 */
  if (C.zf) goto L_128250a6;
  /* 12825013 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825017 je 0x1282506d */
  if (C.zf) goto L_1282506d;
  /* 12825019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282501c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282501e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12825020 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12825022 mov cl, byte ptr [eax + 0x1284fd01] */
  CL = (r8((uint32_t)(EAX + 0x1284fd01)));
  /* 12825028 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1282502b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282502d je 0x12825058 */
  if (C.zf) goto L_12825058;
  /* 1282502f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825035 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12825037 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12825039 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282503c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282503f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12825042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825045 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825048 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282504b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282504e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12825050 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825053 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12825056 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12825058:;
  /* 12825058 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282505b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282505e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12825060 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12825062 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825065 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825068 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1282506b jmp 0x12825099 */
  goto L_12825099;
L_1282506d:;
  /* 1282506d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12825072 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12825074 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12825076 mov cl, byte ptr [eax + 0x1284fd01] */
  CL = (r8((uint32_t)(EAX + 0x1284fd01)));
  /* 1282507c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1282507f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12825081 je 0x12825099 */
  if (C.zf) goto L_12825099;
  /* 12825083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825086 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825089 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282508c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282508f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12825091 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825094 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12825097 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12825099:;
  /* 12825099 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282509c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282509e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128250a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128250a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_128250a6:;
  /* 128250a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128250a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128250ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128250af jmp 0x12824f21 */
  goto L_12824f21;
L_128250b4:;
  /* 128250b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128250b8 je 0x128250c9 */
  if (C.zf) goto L_128250c9;
  /* 128250ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128250bd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 128250c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128250c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128250c6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_128250c9:;
  /* 128250c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128250cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128250ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128250d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128250d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128250d6 jmp 0x12824ec3 */
  goto L_12824ec3;
L_128250db:;
  /* 128250db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128250df je 0x128250f3 */
  if (C.zf) goto L_128250f3;
  /* 128250e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128250e4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 128250ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128250ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128250f0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_128250f3:;
  /* 128250f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128250f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128250f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128250fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128250fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12825100 mov esp, ebp */
  ESP = (EBP);
  /* 12825102 pop ebp */
  EBP = (pop32());
  /* 12825103 ret  */
  ESPCHK(0x12824ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x12825110 (537 bytes, 173 insns) */
void f_12825110(void) {
  FTRACE(0x12825110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825110 push ebp */
  push32((uint32_t)(EBP));
  /* 12825111 mov ebp, esp */
  EBP = (ESP);
  /* 12825113 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825116 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1282511d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12825124 cmp dword ptr [0x1284e5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282512b jne 0x1282516a */
  if (!C.zf) goto L_1282516a;
  /* 1282512d call dword ptr [0x128502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d8))), 0x12825133u);
  /* 12825133 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12825136 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282513a je 0x12825148 */
  if (C.zf) goto L_12825148;
  /* 1282513c mov dword ptr [0x1284e5e4], 1 */
  w32((uint32_t)(0x1284e5e4), (0x1u));
  /* 12825146 jmp 0x1282516a */
  goto L_1282516a;
L_12825148:;
  /* 12825148 call dword ptr [0x128502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d4))), 0x1282514eu);
  /* 1282514e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12825151 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825155 je 0x12825163 */
  if (C.zf) goto L_12825163;
  /* 12825157 mov dword ptr [0x1284e5e4], 2 */
  w32((uint32_t)(0x1284e5e4), (0x2u));
  /* 12825161 jmp 0x1282516a */
  goto L_1282516a;
L_12825163:;
  /* 12825163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12825165 jmp 0x12825325 */
  goto L_12825325;
L_1282516a:;
  /* 1282516a cmp dword ptr [0x1284e5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825171 jne 0x1282526e */
  if (!C.zf) goto L_1282526e;
  /* 12825177 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282517b jne 0x12825193 */
  if (!C.zf) goto L_12825193;
  /* 1282517d call dword ptr [0x128502d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d8))), 0x12825183u);
  /* 12825183 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12825186 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282518a jne 0x12825193 */
  if (!C.zf) goto L_12825193;
  /* 1282518c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282518e jmp 0x12825325 */
  goto L_12825325;
L_12825193:;
  /* 12825193 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12825196 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12825199:;
  /* 12825199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282519c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282519e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 128251a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128251a3 je 0x128251c5 */
  if (C.zf) goto L_128251c5;
  /* 128251a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128251a8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128251ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128251ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128251b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128251b3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 128251b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128251b8 jne 0x128251c3 */
  if (!C.zf) goto L_128251c3;
  /* 128251ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128251bd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128251c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128251c3:;
  /* 128251c3 jmp 0x12825199 */
  goto L_12825199;
L_128251c5:;
  /* 128251c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128251c8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128251cb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 128251cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128251d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128251d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128251d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128251d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128251d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128251db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128251de push edx */
  push32((uint32_t)(EDX));
  /* 128251df mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128251e2 push eax */
  push32((uint32_t)(EAX));
  /* 128251e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128251e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128251e7 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x128251edu);
  /* 128251ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128251f0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128251f4 je 0x12825214 */
  if (C.zf) goto L_12825214;
  /* 128251f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 128251f8 push 0x12849ae4 */
  push32((uint32_t)(0x12849ae4u));
  /* 128251fd push 2 */
  push32((uint32_t)(0x2u));
  /* 128251ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12825202 push ecx */
  push32((uint32_t)(ECX));
  /* 12825203 call 0x12822b40 */
  push32(0x12825208u); f_12822b40();
  /* 12825208 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282520b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1282520e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825212 jne 0x12825225 */
  if (!C.zf) goto L_12825225;
L_12825214:;
  /* 12825214 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12825217 push edx */
  push32((uint32_t)(EDX));
  /* 12825218 call dword ptr [0x12850224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850224))), 0x1282521eu);
  /* 1282521e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12825220 jmp 0x12825325 */
  goto L_12825325;
L_12825225:;
  /* 12825225 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825227 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825229 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282522c push eax */
  push32((uint32_t)(EAX));
  /* 1282522d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12825230 push ecx */
  push32((uint32_t)(ECX));
  /* 12825231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825234 push edx */
  push32((uint32_t)(EDX));
  /* 12825235 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12825238 push eax */
  push32((uint32_t)(EAX));
  /* 12825239 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282523b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282523d call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x12825243u);
  /* 12825243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12825245 jne 0x1282525c */
  if (!C.zf) goto L_1282525c;
  /* 12825247 push 2 */
  push32((uint32_t)(0x2u));
  /* 12825249 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282524c push ecx */
  push32((uint32_t)(ECX));
  /* 1282524d call 0x128235d0 */
  push32(0x12825252u); f_128235d0();
  /* 12825252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825255 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1282525c:;
  /* 1282525c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282525f push edx */
  push32((uint32_t)(EDX));
  /* 12825260 call dword ptr [0x12850224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850224))), 0x12825266u);
  /* 12825266 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12825269 jmp 0x12825325 */
  goto L_12825325;
L_1282526e:;
  /* 1282526e cmp dword ptr [0x1284e5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1284e5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825275 jne 0x12825323 */
  if (!C.zf) goto L_12825323;
  /* 1282527b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282527f jne 0x12825297 */
  if (!C.zf) goto L_12825297;
  /* 12825281 call dword ptr [0x128502d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d4))), 0x12825287u);
  /* 12825287 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1282528a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282528e jne 0x12825297 */
  if (!C.zf) goto L_12825297;
  /* 12825290 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12825292 jmp 0x12825325 */
  goto L_12825325;
L_12825297:;
  /* 12825297 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282529a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1282529d:;
  /* 1282529d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128252a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128252a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128252a5 je 0x128252c5 */
  if (C.zf) goto L_128252c5;
  /* 128252a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128252aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128252ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128252b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128252b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128252b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128252b8 jne 0x128252c3 */
  if (!C.zf) goto L_128252c3;
  /* 128252ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128252bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128252c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_128252c3:;
  /* 128252c3 jmp 0x1282529d */
  goto L_1282529d;
L_128252c5:;
  /* 128252c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128252c8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128252cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128252ce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128252d1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 128252d6 push 0x12849ae4 */
  push32((uint32_t)(0x12849ae4u));
  /* 128252db push 2 */
  push32((uint32_t)(0x2u));
  /* 128252dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128252e0 push edx */
  push32((uint32_t)(EDX));
  /* 128252e1 call 0x12822b40 */
  push32(0x128252e6u); f_12822b40();
  /* 128252e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128252e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128252ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128252f0 jne 0x12825300 */
  if (!C.zf) goto L_12825300;
  /* 128252f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128252f5 push eax */
  push32((uint32_t)(EAX));
  /* 128252f6 call dword ptr [0x12850228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850228))), 0x128252fcu);
  /* 128252fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128252fe jmp 0x12825325 */
  goto L_12825325;
L_12825300:;
  /* 12825300 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12825303 push ecx */
  push32((uint32_t)(ECX));
  /* 12825304 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12825307 push edx */
  push32((uint32_t)(EDX));
  /* 12825308 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282530b push eax */
  push32((uint32_t)(EAX));
  /* 1282530c call 0x12829420 */
  push32(0x12825311u); f_12829420();
  /* 12825311 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825314 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12825317 push ecx */
  push32((uint32_t)(ECX));
  /* 12825318 call dword ptr [0x12850228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850228))), 0x1282531eu);
  /* 1282531e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12825321 jmp 0x12825325 */
  goto L_12825325;
L_12825323:;
  /* 12825323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12825325:;
  /* 12825325 mov esp, ebp */
  ESP = (EBP);
  /* 12825327 pop ebp */
  EBP = (pop32());
  /* 12825328 ret  */
  ESPCHK(0x12825110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x12825330 (77 bytes, 25 insns) */
void f_12825330(void) {
  FTRACE(0x12825330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825330 push ebp */
  push32((uint32_t)(EBP));
  /* 12825331 mov ebp, esp */
  EBP = (ESP);
  /* 12825333 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825335 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1282533a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282533c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825340 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12825343 push eax */
  push32((uint32_t)(EAX));
  /* 12825344 call dword ptr [0x128502e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e0))), 0x1282534au);
  /* 1282534a mov dword ptr [0x1284fe2c], eax */
  w32((uint32_t)(0x1284fe2c), (EAX));
  /* 1282534f cmp dword ptr [0x1284fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825356 jne 0x1282535c */
  if (!C.zf) goto L_1282535c;
  /* 12825358 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282535a jmp 0x1282537b */
  goto L_1282537b;
L_1282535c:;
  /* 1282535c call 0x12826de0 */
  push32(0x12825361u); f_12826de0();
  /* 12825361 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12825363 jne 0x12825376 */
  if (!C.zf) goto L_12825376;
  /* 12825365 mov ecx, dword ptr [0x1284fe2c] */
  ECX = (r32((uint32_t)(0x1284fe2c)));
  /* 1282536b push ecx */
  push32((uint32_t)(ECX));
  /* 1282536c call dword ptr [0x128502dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502dc))), 0x12825372u);
  /* 12825372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12825374 jmp 0x1282537b */
  goto L_1282537b;
L_12825376:;
  /* 12825376 mov eax, 1 */
  EAX = (0x1u);
L_1282537b:;
  /* 1282537b pop ebp */
  EBP = (pop32());
  /* 1282537c ret  */
  ESPCHK(0x12825330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005380 @ 0x12825380 (156 bytes, 48 insns) */
void f_12825380(void) {
  FTRACE(0x12825380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825380 push ebp */
  push32((uint32_t)(EBP));
  /* 12825381 mov ebp, esp */
  EBP = (ESP);
  /* 12825383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825386 mov eax, dword ptr [0x1284fe28] */
  EAX = (r32((uint32_t)(0x1284fe28)));
  /* 1282538b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282538e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12825395 jmp 0x128253a0 */
  goto L_128253a0;
L_12825397:;
  /* 12825397 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282539a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282539d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128253a0:;
  /* 128253a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128253a3 cmp edx, dword ptr [0x1284fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128253a9 jge 0x128253f6 */
  if ((C.sf==C.of)) goto L_128253f6;
  /* 128253ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 128253b0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 128253b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128253b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128253bb push ecx */
  push32((uint32_t)(ECX));
  /* 128253bc call dword ptr [0x128502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e8))), 0x128253c2u);
  /* 128253c2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 128253c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128253c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128253cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 128253cf push eax */
  push32((uint32_t)(EAX));
  /* 128253d0 call dword ptr [0x128502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e8))), 0x128253d6u);
  /* 128253d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128253d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 128253dc push edx */
  push32((uint32_t)(EDX));
  /* 128253dd push 0 */
  push32((uint32_t)(0x0u));
  /* 128253df mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 128253e4 push eax */
  push32((uint32_t)(EAX));
  /* 128253e5 call dword ptr [0x128502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e4))), 0x128253ebu);
  /* 128253eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128253ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128253f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128253f4 jmp 0x12825397 */
  goto L_12825397;
L_128253f6:;
  /* 128253f6 mov edx, dword ptr [0x1284fe28] */
  EDX = (r32((uint32_t)(0x1284fe28)));
  /* 128253fc push edx */
  push32((uint32_t)(EDX));
  /* 128253fd push 0 */
  push32((uint32_t)(0x0u));
  /* 128253ff mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 12825404 push eax */
  push32((uint32_t)(EAX));
  /* 12825405 call dword ptr [0x128502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e4))), 0x1282540bu);
  /* 1282540b mov ecx, dword ptr [0x1284fe2c] */
  ECX = (r32((uint32_t)(0x1284fe2c)));
  /* 12825411 push ecx */
  push32((uint32_t)(ECX));
  /* 12825412 call dword ptr [0x128502dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502dc))), 0x12825418u);
  /* 12825418 mov esp, ebp */
  ESP = (EBP);
  /* 1282541a pop ebp */
  EBP = (pop32());
  /* 1282541b ret  */
  ESPCHK(0x12825380u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12825420 (73 bytes, 19 insns) */
void f_12825420(void) {
  FTRACE(0x12825420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825420 push ebp */
  push32((uint32_t)(EBP));
  /* 12825421 mov ebp, esp */
  EBP = (ESP);
  /* 12825423 cmp dword ptr [0x1284e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282542a je 0x1282543e */
  if (C.zf) goto L_1282543e;
  /* 1282542c cmp dword ptr [0x1284e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825433 jne 0x12825467 */
  if (!C.zf) goto L_12825467;
  /* 12825435 cmp dword ptr [0x1284e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282543c jne 0x12825467 */
  if (!C.zf) goto L_12825467;
L_1282543e:;
  /* 1282543e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12825443 call 0x12825470 */
  push32(0x12825448u); f_12825470();
  /* 12825448 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282544b cmp dword ptr [0x1284e5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825452 je 0x1282545a */
  if (C.zf) goto L_1282545a;
  /* 12825454 call dword ptr [0x1284e5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e5e8))), 0x1282545au);
L_1282545a:;
  /* 1282545a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1282545f call 0x12825470 */
  push32(0x12825464u); f_12825470();
  /* 12825464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12825467:;
  /* 12825467 pop ebp */
  EBP = (pop32());
  /* 12825468 ret  */
  ESPCHK(0x12825420u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x12825470 (447 bytes, 131 insns) */
void f_12825470(void) {
  FTRACE(0x12825470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825470 push ebp */
  push32((uint32_t)(EBP));
  /* 12825471 mov ebp, esp */
  EBP = (ESP);
  /* 12825473 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825479 push ebx */
  push32((uint32_t)(EBX));
  /* 1282547a push esi */
  push32((uint32_t)(ESI));
  /* 1282547b push edi */
  push32((uint32_t)(EDI));
  /* 1282547c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12825483 jmp 0x1282548e */
  goto L_1282548e;
L_12825485:;
  /* 12825485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282548b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1282548e:;
  /* 1282548e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825492 jae 0x128254a7 */
  if (!C.cf) goto L_128254a7;
  /* 12825494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825497 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282549a cmp edx, dword ptr [ecx*8 + 0x1284cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1284cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128254a1 jne 0x128254a5 */
  if (!C.zf) goto L_128254a5;
  /* 128254a3 jmp 0x128254a7 */
  goto L_128254a7;
L_128254a5:;
  /* 128254a5 jmp 0x12825485 */
  goto L_12825485;
L_128254a7:;
  /* 128254a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128254aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128254ad cmp ecx, dword ptr [eax*8 + 0x1284cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1284cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128254b4 jne 0x12825628 */
  if (!C.zf) goto L_12825628;
  /* 128254ba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128254c1 je 0x128254e4 */
  if (C.zf) goto L_128254e4;
  /* 128254c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128254c6 mov eax, dword ptr [edx*8 + 0x1284cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1284cab4)));
  /* 128254cd push eax */
  push32((uint32_t)(EAX));
  /* 128254ce push 0 */
  push32((uint32_t)(0x0u));
  /* 128254d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128254d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128254d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 128254d6 call 0x12821c00 */
  push32(0x128254dbu); f_12821c00();
  /* 128254db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128254de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128254e1 jne 0x128254e4 */
  if (!C.zf) goto L_128254e4;
  /* 128254e3 int3  */
  x86_unimpl("int3 @ 0x128254e3");
L_128254e4:;
  /* 128254e4 cmp dword ptr [0x1284e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128254eb je 0x128254ff */
  if (C.zf) goto L_128254ff;
  /* 128254ed cmp dword ptr [0x1284e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128254f4 jne 0x12825538 */
  if (!C.zf) goto L_12825538;
  /* 128254f6 cmp dword ptr [0x1284e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128254fd jne 0x12825538 */
  if (!C.zf) goto L_12825538;
L_128254ff:;
  /* 128254ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12825501 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12825504 push ecx */
  push32((uint32_t)(ECX));
  /* 12825505 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825508 mov eax, dword ptr [edx*8 + 0x1284cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1284cab4)));
  /* 1282550f push eax */
  push32((uint32_t)(EAX));
  /* 12825510 call 0x12825970 */
  push32(0x12825515u); f_12825970();
  /* 12825515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825518 push eax */
  push32((uint32_t)(EAX));
  /* 12825519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282551c mov edx, dword ptr [ecx*8 + 0x1284cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1284cab4)));
  /* 12825523 push edx */
  push32((uint32_t)(EDX));
  /* 12825524 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12825526 call dword ptr [0x12850260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850260))), 0x1282552cu);
  /* 1282552c push eax */
  push32((uint32_t)(EAX));
  /* 1282552d call dword ptr [0x12850264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850264))), 0x12825533u);
  /* 12825533 jmp 0x12825628 */
  goto L_12825628;
L_12825538:;
  /* 12825538 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282553f je 0x12825628 */
  if (C.zf) goto L_12825628;
  /* 12825545 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1282554a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12825550 push eax */
  push32((uint32_t)(EAX));
  /* 12825551 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825553 call dword ptr [0x1285027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285027c))), 0x12825559u);
  /* 12825559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282555b jne 0x12825571 */
  if (!C.zf) goto L_12825571;
  /* 1282555d push 0x1284934c */
  push32((uint32_t)(0x1284934cu));
  /* 12825562 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12825568 push ecx */
  push32((uint32_t)(ECX));
  /* 12825569 call 0x12825af0 */
  push32(0x1282556eu); f_12825af0();
  /* 1282556e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12825571:;
  /* 12825571 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12825577 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1282557a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282557d push eax */
  push32((uint32_t)(EAX));
  /* 1282557e call 0x12825970 */
  push32(0x12825583u); f_12825970();
  /* 12825583 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825586 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825589 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282558c jbe 0x128255ba */
  if ((C.cf||C.zf)) goto L_128255ba;
  /* 1282558e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12825594 push ecx */
  push32((uint32_t)(ECX));
  /* 12825595 call 0x12825970 */
  push32(0x1282559au); f_12825970();
  /* 1282559a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282559d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128255a0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 128255a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128255a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 128255a9 push 0x12849348 */
  push32((uint32_t)(0x12849348u));
  /* 128255ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128255b1 push ecx */
  push32((uint32_t)(ECX));
  /* 128255b2 call 0x12826360 */
  push32(0x128255b7u); f_12826360();
  /* 128255b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128255ba:;
  /* 128255ba push 0x12849da0 */
  push32((uint32_t)(0x12849da0u));
  /* 128255bf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 128255c5 push edx */
  push32((uint32_t)(EDX));
  /* 128255c6 call 0x12825af0 */
  push32(0x128255cbu); f_12825af0();
  /* 128255cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128255ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128255d1 push eax */
  push32((uint32_t)(EAX));
  /* 128255d2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 128255d8 push ecx */
  push32((uint32_t)(ECX));
  /* 128255d9 call 0x12825b00 */
  push32(0x128255deu); f_12825b00();
  /* 128255de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128255e1 push 0x128492c0 */
  push32((uint32_t)(0x128492c0u));
  /* 128255e6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 128255ec push edx */
  push32((uint32_t)(EDX));
  /* 128255ed call 0x12825b00 */
  push32(0x128255f2u); f_12825b00();
  /* 128255f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128255f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128255f8 mov ecx, dword ptr [eax*8 + 0x1284cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1284cab4)));
  /* 128255ff push ecx */
  push32((uint32_t)(ECX));
  /* 12825600 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12825606 push edx */
  push32((uint32_t)(EDX));
  /* 12825607 call 0x12825b00 */
  push32(0x1282560cu); f_12825b00();
  /* 1282560c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282560f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12825614 push 0x12849d78 */
  push32((uint32_t)(0x12849d78u));
  /* 12825619 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1282561f push eax */
  push32((uint32_t)(EAX));
  /* 12825620 call 0x128262a0 */
  push32(0x12825625u); f_128262a0();
  /* 12825625 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12825628:;
  /* 12825628 pop edi */
  EDI = (pop32());
  /* 12825629 pop esi */
  ESI = (pop32());
  /* 1282562a pop ebx */
  EBX = (pop32());
  /* 1282562b mov esp, ebp */
  ESP = (EBP);
  /* 1282562d pop ebp */
  EBP = (pop32());
  /* 1282562e ret  */
  ESPCHK(0x12825470u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12825630 (80 bytes, 27 insns) */
void f_12825630(void) {
  FTRACE(0x12825630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825630 push ebp */
  push32((uint32_t)(EBP));
  /* 12825631 mov ebp, esp */
  EBP = (ESP);
  /* 12825633 push ecx */
  push32((uint32_t)(ECX));
  /* 12825634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282563b jmp 0x12825646 */
  goto L_12825646;
L_1282563d:;
  /* 1282563d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825643 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12825646:;
  /* 12825646 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282564a jae 0x1282565f */
  if (!C.cf) goto L_1282565f;
  /* 1282564c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282564f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825652 cmp edx, dword ptr [ecx*8 + 0x1284cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1284cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825659 jne 0x1282565d */
  if (!C.zf) goto L_1282565d;
  /* 1282565b jmp 0x1282565f */
  goto L_1282565f;
L_1282565d:;
  /* 1282565d jmp 0x1282563d */
  goto L_1282563d;
L_1282565f:;
  /* 1282565f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825665 cmp ecx, dword ptr [eax*8 + 0x1284cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1284cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282566c jne 0x1282567a */
  if (!C.zf) goto L_1282567a;
  /* 1282566e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825671 mov eax, dword ptr [edx*8 + 0x1284cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1284cab4)));
  /* 12825678 jmp 0x1282567c */
  goto L_1282567c;
L_1282567a:;
  /* 1282567a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282567c:;
  /* 1282567c mov esp, ebp */
  ESP = (EBP);
  /* 1282567e pop ebp */
  EBP = (pop32());
  /* 1282567f ret  */
  ESPCHK(0x12825630u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12825680 (66 bytes, 28 insns) */
void f_12825680(void) {
  FTRACE(0x12825680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825680 push ebp */
  push32((uint32_t)(EBP));
  /* 12825681 mov ebp, esp */
  EBP = (ESP);
  /* 12825683 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825687 jne 0x128256a7 */
  if (!C.zf) goto L_128256a7;
  /* 12825689 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282568d jge 0x128256a7 */
  if ((C.sf==C.of)) goto L_128256a7;
  /* 1282568f push 1 */
  push32((uint32_t)(0x1u));
  /* 12825691 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825694 push eax */
  push32((uint32_t)(EAX));
  /* 12825695 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825698 push ecx */
  push32((uint32_t)(ECX));
  /* 12825699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282569c push edx */
  push32((uint32_t)(EDX));
  /* 1282569d call 0x128256d0 */
  push32(0x128256a2u); f_128256d0();
  /* 128256a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128256a5 jmp 0x128256bd */
  goto L_128256bd;
L_128256a7:;
  /* 128256a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128256a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128256ac push eax */
  push32((uint32_t)(EAX));
  /* 128256ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128256b0 push ecx */
  push32((uint32_t)(ECX));
  /* 128256b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128256b4 push edx */
  push32((uint32_t)(EDX));
  /* 128256b5 call 0x128256d0 */
  push32(0x128256bau); f_128256d0();
  /* 128256ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128256bd:;
  /* 128256bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128256c0 pop ebp */
  EBP = (pop32());
  /* 128256c1 ret  */
  ESPCHK(0x12825680u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x128256d0 (194 bytes, 71 insns) */
void f_128256d0(void) {
  FTRACE(0x128256d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128256d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128256d1 mov ebp, esp */
  EBP = (ESP);
  /* 128256d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128256d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128256d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128256dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128256e0 je 0x128256f9 */
  if (C.zf) goto L_128256f9;
  /* 128256e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128256e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 128256e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128256eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128256ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128256f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128256f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128256f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_128256f9:;
  /* 128256f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128256fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_128256ff:;
  /* 128256ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825702 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12825704 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12825707 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1282570a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282570d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282570f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12825712 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12825715 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825719 jbe 0x12825731 */
  if ((C.cf||C.zf)) goto L_12825731;
  /* 1282571b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282571e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825724 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12825726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825729 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282572c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282572f jmp 0x12825745 */
  goto L_12825745;
L_12825731:;
  /* 12825731 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12825734 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282573a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1282573c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282573f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825742 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12825745:;
  /* 12825745 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825749 ja 0x128256ff */
  if ((!C.cf&&!C.zf)) goto L_128256ff;
  /* 1282574b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282574e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12825751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825754 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825757 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282575a:;
  /* 1282575a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282575d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282575f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12825762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825765 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825768 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282576a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1282576c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282576f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12825772 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12825774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825777 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282577a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282577d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825780 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825783 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12825786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825789 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282578c jb 0x1282575a */
  if (C.cf) goto L_1282575a;
  /* 1282578e mov esp, ebp */
  ESP = (EBP);
  /* 12825790 pop ebp */
  EBP = (pop32());
  /* 12825791 ret  */
  ESPCHK(0x128256d0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x128257a0 (63 bytes, 24 insns) */
void f_128257a0(void) {
  FTRACE(0x128257a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128257a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128257a1 mov ebp, esp */
  EBP = (ESP);
  /* 128257a3 push ecx */
  push32((uint32_t)(ECX));
  /* 128257a4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128257a8 jne 0x128257b9 */
  if (!C.zf) goto L_128257b9;
  /* 128257aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128257ae jge 0x128257b9 */
  if ((C.sf==C.of)) goto L_128257b9;
  /* 128257b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 128257b7 jmp 0x128257c0 */
  goto L_128257c0;
L_128257b9:;
  /* 128257b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_128257c0:;
  /* 128257c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128257c3 push eax */
  push32((uint32_t)(EAX));
  /* 128257c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128257c7 push ecx */
  push32((uint32_t)(ECX));
  /* 128257c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128257cb push edx */
  push32((uint32_t)(EDX));
  /* 128257cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128257cf push eax */
  push32((uint32_t)(EAX));
  /* 128257d0 call 0x128256d0 */
  push32(0x128257d5u); f_128256d0();
  /* 128257d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128257d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128257db mov esp, ebp */
  ESP = (EBP);
  /* 128257dd pop ebp */
  EBP = (pop32());
  /* 128257de ret  */
  ESPCHK(0x128257a0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x128257e0 (30 bytes, 14 insns) */
void f_128257e0(void) {
  FTRACE(0x128257e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128257e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128257e1 mov ebp, esp */
  EBP = (ESP);
  /* 128257e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128257e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128257e8 push eax */
  push32((uint32_t)(EAX));
  /* 128257e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128257ec push ecx */
  push32((uint32_t)(ECX));
  /* 128257ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128257f0 push edx */
  push32((uint32_t)(EDX));
  /* 128257f1 call 0x128256d0 */
  push32(0x128257f6u); f_128256d0();
  /* 128257f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128257f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128257fc pop ebp */
  EBP = (pop32());
  /* 128257fd ret  */
  ESPCHK(0x128257e0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12825800 (72 bytes, 28 insns) */
void f_12825800(void) {
  FTRACE(0x12825800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825800 push ebp */
  push32((uint32_t)(EBP));
  /* 12825801 mov ebp, esp */
  EBP = (ESP);
  /* 12825803 push ecx */
  push32((uint32_t)(ECX));
  /* 12825804 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825808 jne 0x12825821 */
  if (!C.zf) goto L_12825821;
  /* 1282580a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282580e jg 0x12825821 */
  if ((!C.zf&&C.sf==C.of)) goto L_12825821;
  /* 12825810 jl 0x12825818 */
  if ((C.sf!=C.of)) goto L_12825818;
  /* 12825812 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825816 jae 0x12825821 */
  if (!C.cf) goto L_12825821;
L_12825818:;
  /* 12825818 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1282581f jmp 0x12825828 */
  goto L_12825828;
L_12825821:;
  /* 12825821 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12825828:;
  /* 12825828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282582b push eax */
  push32((uint32_t)(EAX));
  /* 1282582c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282582f push ecx */
  push32((uint32_t)(ECX));
  /* 12825830 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825833 push edx */
  push32((uint32_t)(EDX));
  /* 12825834 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825837 push eax */
  push32((uint32_t)(EAX));
  /* 12825838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282583b push ecx */
  push32((uint32_t)(ECX));
  /* 1282583c call 0x12825850 */
  push32(0x12825841u); f_12825850();
  /* 12825841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825844 mov esp, ebp */
  ESP = (EBP);
  /* 12825846 pop ebp */
  EBP = (pop32());
  /* 12825847 ret  */
  ESPCHK(0x12825800u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12825850 (242 bytes, 91 insns) */
void f_12825850(void) {
  FTRACE(0x12825850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825850 push ebp */
  push32((uint32_t)(EBP));
  /* 12825851 mov ebp, esp */
  EBP = (ESP);
  /* 12825853 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825856 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282585c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825860 je 0x12825884 */
  if (C.zf) goto L_12825884;
  /* 12825862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825865 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12825868 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282586b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282586e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12825871 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825874 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12825876 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825879 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282587c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282587e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12825881 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12825884:;
  /* 12825884 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825887 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1282588a:;
  /* 1282588a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282588d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282588f push ecx */
  push32((uint32_t)(ECX));
  /* 12825890 push eax */
  push32((uint32_t)(EAX));
  /* 12825891 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825894 push edx */
  push32((uint32_t)(EDX));
  /* 12825895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825898 push eax */
  push32((uint32_t)(EAX));
  /* 12825899 call 0x128297d0 */
  push32(0x1282589eu); f_128297d0();
  /* 1282589e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128258a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128258a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128258a6 push edx */
  push32((uint32_t)(EDX));
  /* 128258a7 push ecx */
  push32((uint32_t)(ECX));
  /* 128258a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128258ab push eax */
  push32((uint32_t)(EAX));
  /* 128258ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128258af push ecx */
  push32((uint32_t)(ECX));
  /* 128258b0 call 0x12829760 */
  push32(0x128258b5u); f_12829760();
  /* 128258b5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128258b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 128258bb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128258bf jbe 0x128258d7 */
  if ((C.cf||C.zf)) goto L_128258d7;
  /* 128258c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128258c4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128258c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128258ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128258cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128258cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128258d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128258d5 jmp 0x128258eb */
  goto L_128258eb;
L_128258d7:;
  /* 128258d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128258da add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128258dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128258e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128258e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128258e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128258e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128258eb:;
  /* 128258eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128258ef ja 0x1282588a */
  if ((!C.cf&&!C.zf)) goto L_1282588a;
  /* 128258f1 jb 0x128258f9 */
  if (C.cf) goto L_128258f9;
  /* 128258f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128258f7 ja 0x1282588a */
  if ((!C.cf&&!C.zf)) goto L_1282588a;
L_128258f9:;
  /* 128258f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128258fc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 128258ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825902 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12825908:;
  /* 12825908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282590b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282590d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12825910 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825913 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825916 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12825918 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1282591a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282591d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12825920 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12825922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825925 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825928 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282592b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282592e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825931 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12825934 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825937 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282593a jb 0x12825908 */
  if (C.cf) goto L_12825908;
  /* 1282593c mov esp, ebp */
  ESP = (EBP);
  /* 1282593e pop ebp */
  EBP = (pop32());
  /* 1282593f ret 0x14 */
  ESPCHK(0x12825850u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12825950 (31 bytes, 15 insns) */
void f_12825950(void) {
  FTRACE(0x12825950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825950 push ebp */
  push32((uint32_t)(EBP));
  /* 12825951 mov ebp, esp */
  EBP = (ESP);
  /* 12825953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825955 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12825958 push eax */
  push32((uint32_t)(EAX));
  /* 12825959 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282595c push ecx */
  push32((uint32_t)(ECX));
  /* 1282595d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825960 push edx */
  push32((uint32_t)(EDX));
  /* 12825961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825964 push eax */
  push32((uint32_t)(EAX));
  /* 12825965 call 0x12825850 */
  push32(0x1282596au); f_12825850();
  /* 1282596a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282596d pop ebp */
  EBP = (pop32());
  /* 1282596e ret  */
  ESPCHK(0x12825950u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12825970 (123 bytes, 44 insns) */
void f_12825970(void) {
  FTRACE(0x12825970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825970 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12825974 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1282597a je 0x12825990 */
  if (C.zf) goto L_12825990;
L_1282597c:;
  /* 1282597c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1282597e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1282597f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12825981 je 0x128259c3 */
  if (C.zf) goto L_128259c3;
  /* 12825983 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12825989 jne 0x1282597c */
  if (!C.zf) goto L_1282597c;
  /* 1282598b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12825990:;
  /* 12825990 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12825992 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12825997 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825999 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282599c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1282599e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128259a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 128259a6 je 0x12825990 */
  if (C.zf) goto L_12825990;
  /* 128259a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 128259ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 128259ad je 0x128259e1 */
  if (C.zf) goto L_128259e1;
  /* 128259af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 128259b1 je 0x128259d7 */
  if (C.zf) goto L_128259d7;
  /* 128259b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 128259b8 je 0x128259cd */
  if (C.zf) goto L_128259cd;
  /* 128259ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 128259bf je 0x128259c3 */
  if (C.zf) goto L_128259c3;
  /* 128259c1 jmp 0x12825990 */
  goto L_12825990;
L_128259c3:;
  /* 128259c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 128259c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 128259ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128259cc ret  */
  ESPCHK(0x12825970u, _esp0);
  ESP += 4; return;
L_128259cd:;
  /* 128259cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 128259d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 128259d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128259d6 ret  */
  ESPCHK(0x12825970u, _esp0);
  ESP += 4; return;
L_128259d7:;
  /* 128259d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 128259da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 128259de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128259e0 ret  */
  ESPCHK(0x12825970u, _esp0);
  ESP += 4; return;
L_128259e1:;
  /* 128259e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 128259e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 128259e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128259ea ret  */
  ESPCHK(0x12825970u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x128259f0 (249 bytes, 93 insns) */
void f_128259f0(void) {
  FTRACE(0x128259f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128259f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128259f1 mov ebp, esp */
  EBP = (ESP);
  /* 128259f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128259f6 push ebx */
  push32((uint32_t)(EBX));
  /* 128259f7 push esi */
  push32((uint32_t)(ESI));
  /* 128259f8 push edi */
  push32((uint32_t)(EDI));
  /* 128259f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 128259fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 128259ff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12825a02 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12825a05:;
  /* 12825a05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825a09 jne 0x12825a29 */
  if (!C.zf) goto L_12825a29;
  /* 12825a0b push 0x12849dd8 */
  push32((uint32_t)(0x12849dd8u));
  /* 12825a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825a12 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12825a14 push 0x12849dcc */
  push32((uint32_t)(0x12849dccu));
  /* 12825a19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12825a1b call 0x12821c00 */
  push32(0x12825a20u); f_12821c00();
  /* 12825a20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825a23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825a26 jne 0x12825a29 */
  if (!C.zf) goto L_12825a29;
  /* 12825a28 int3  */
  x86_unimpl("int3 @ 0x12825a28");
L_12825a29:;
  /* 12825a29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12825a2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12825a2d jne 0x12825a05 */
  if (!C.zf) goto L_12825a05;
L_12825a2f:;
  /* 12825a2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825a33 jne 0x12825a53 */
  if (!C.zf) goto L_12825a53;
  /* 12825a35 push 0x12849dbc */
  push32((uint32_t)(0x12849dbcu));
  /* 12825a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12825a3c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12825a3e push 0x12849dcc */
  push32((uint32_t)(0x12849dccu));
  /* 12825a43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12825a45 call 0x12821c00 */
  push32(0x12825a4au); f_12821c00();
  /* 12825a4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825a4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825a50 jne 0x12825a53 */
  if (!C.zf) goto L_12825a53;
  /* 12825a52 int3  */
  x86_unimpl("int3 @ 0x12825a52");
L_12825a53:;
  /* 12825a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12825a55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12825a57 jne 0x12825a2f */
  if (!C.zf) goto L_12825a2f;
  /* 12825a59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825a5c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12825a63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825a69 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12825a6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825a72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12825a74 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825a77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825a7a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12825a7d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12825a80 push edx */
  push32((uint32_t)(EDX));
  /* 12825a81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825a84 push eax */
  push32((uint32_t)(EAX));
  /* 12825a85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825a88 push ecx */
  push32((uint32_t)(ECX));
  /* 12825a89 call 0x12829ad0 */
  push32(0x12825a8eu); f_12829ad0();
  /* 12825a8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825a91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12825a94 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825a97 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12825a9a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825a9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825aa0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12825aa3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825aa6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825aaa jl 0x12825ace */
  if ((C.sf!=C.of)) goto L_12825ace;
  /* 12825aac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825aaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12825ab1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12825ab4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12825ab6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12825abc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12825abf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825ac2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12825ac4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825ac7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825aca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12825acc jmp 0x12825adf */
  goto L_12825adf;
L_12825ace:;
  /* 12825ace mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825ad1 push eax */
  push32((uint32_t)(EAX));
  /* 12825ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825ad4 call 0x12829850 */
  push32(0x12825ad9u); f_12829850();
  /* 12825ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825adc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12825adf:;
  /* 12825adf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12825ae2 pop edi */
  EDI = (pop32());
  /* 12825ae3 pop esi */
  ESI = (pop32());
  /* 12825ae4 pop ebx */
  EBX = (pop32());
  /* 12825ae5 mov esp, ebp */
  ESP = (EBP);
  /* 12825ae7 pop ebp */
  EBP = (pop32());
  /* 12825ae8 ret  */
  ESPCHK(0x128259f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005af0 @ 0x12825af0 (7 bytes, 3 insns) */
void f_12825af0(void) {
  FTRACE(0x12825af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825af0 push edi */
  push32((uint32_t)(EDI));
  /* 12825af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12825af5 jmp 0x12825b61 */
  jmp_ind(0x12825b61u); return;
}

/* FUN_10005b00 @ 0x12825b00 (224 bytes, 84 insns) */
void f_12825b00(void) {
  FTRACE(0x12825b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12825b04 push edi */
  push32((uint32_t)(EDI));
  /* 12825b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12825b0b je 0x12825b1c */
  if (C.zf) goto L_12825b1c;
L_12825b0d:;
  /* 12825b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12825b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12825b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12825b12 je 0x12825b4f */
  if (C.zf) goto L_12825b4f;
  /* 12825b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12825b1a jne 0x12825b0d */
  if (!C.zf) goto L_12825b0d;
L_12825b1c:;
  /* 12825b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12825b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12825b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12825b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12825b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12825b32 je 0x12825b1c */
  if (C.zf) goto L_12825b1c;
  /* 12825b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12825b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12825b39 je 0x12825b5e */
  if (C.zf) goto L_12825b5e;
  /* 12825b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12825b3d je 0x12825b59 */
  if (C.zf) goto L_12825b59;
  /* 12825b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12825b44 je 0x12825b54 */
  if (C.zf) goto L_12825b54;
  /* 12825b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12825b4b je 0x12825b4f */
  if (C.zf) goto L_12825b4f;
  /* 12825b4d jmp 0x12825b1c */
  goto L_12825b1c;
L_12825b4f:;
  /* 12825b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12825b52 jmp 0x12825b61 */
  goto L_12825b61;
L_12825b54:;
  /* 12825b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12825b57 jmp 0x12825b61 */
  goto L_12825b61;
L_12825b59:;
  /* 12825b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12825b5c jmp 0x12825b61 */
  goto L_12825b61;
L_12825b5e:;
  /* 12825b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12825b61:;
  /* 12825b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12825b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12825b6b je 0x12825b86 */
  if (C.zf) goto L_12825b86;
L_12825b6d:;
  /* 12825b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12825b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12825b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12825b72 je 0x12825bd8 */
  if (C.zf) goto L_12825bd8;
  /* 12825b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12825b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12825b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12825b7d jne 0x12825b6d */
  if (!C.zf) goto L_12825b6d;
  /* 12825b7f jmp 0x12825b86 */
  goto L_12825b86;
L_12825b81:;
  /* 12825b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12825b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12825b86:;
  /* 12825b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12825b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12825b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12825b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12825b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12825b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12825b9e je 0x12825b81 */
  if (C.zf) goto L_12825b81;
  /* 12825ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12825ba2 je 0x12825bd8 */
  if (C.zf) goto L_12825bd8;
  /* 12825ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12825ba6 je 0x12825bcf */
  if (C.zf) goto L_12825bcf;
  /* 12825ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12825bae je 0x12825bc2 */
  if (C.zf) goto L_12825bc2;
  /* 12825bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12825bb6 je 0x12825bba */
  if (C.zf) goto L_12825bba;
  /* 12825bb8 jmp 0x12825b81 */
  goto L_12825b81;
L_12825bba:;
  /* 12825bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12825bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12825bc0 pop edi */
  EDI = (pop32());
  /* 12825bc1 ret  */
  ESPCHK(0x12825b00u, _esp0);
  ESP += 4; return;
L_12825bc2:;
  /* 12825bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12825bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12825bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12825bcd pop edi */
  EDI = (pop32());
  /* 12825bce ret  */
  ESPCHK(0x12825b00u, _esp0);
  ESP += 4; return;
L_12825bcf:;
  /* 12825bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12825bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12825bd6 pop edi */
  EDI = (pop32());
  /* 12825bd7 ret  */
  ESPCHK(0x12825b00u, _esp0);
  ESP += 4; return;
L_12825bd8:;
  /* 12825bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12825bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12825bde pop edi */
  EDI = (pop32());
  /* 12825bdf ret  */
  ESPCHK(0x12825b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005be0 @ 0x12825be0 (243 bytes, 91 insns) */
void f_12825be0(void) {
  FTRACE(0x12825be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12825be1 mov ebp, esp */
  EBP = (ESP);
  /* 12825be3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825be6 push ebx */
  push32((uint32_t)(EBX));
  /* 12825be7 push esi */
  push32((uint32_t)(ESI));
  /* 12825be8 push edi */
  push32((uint32_t)(EDI));
  /* 12825be9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12825bec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12825bef:;
  /* 12825bef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825bf3 jne 0x12825c13 */
  if (!C.zf) goto L_12825c13;
  /* 12825bf5 push 0x12849dd8 */
  push32((uint32_t)(0x12849dd8u));
  /* 12825bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12825bfc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12825bfe push 0x12849de8 */
  push32((uint32_t)(0x12849de8u));
  /* 12825c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12825c05 call 0x12821c00 */
  push32(0x12825c0au); f_12821c00();
  /* 12825c0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825c10 jne 0x12825c13 */
  if (!C.zf) goto L_12825c13;
  /* 12825c12 int3  */
  x86_unimpl("int3 @ 0x12825c12");
L_12825c13:;
  /* 12825c13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12825c15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12825c17 jne 0x12825bef */
  if (!C.zf) goto L_12825bef;
L_12825c19:;
  /* 12825c19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825c1d jne 0x12825c3d */
  if (!C.zf) goto L_12825c3d;
  /* 12825c1f push 0x12849dbc */
  push32((uint32_t)(0x12849dbcu));
  /* 12825c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12825c26 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12825c28 push 0x12849de8 */
  push32((uint32_t)(0x12849de8u));
  /* 12825c2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12825c2f call 0x12821c00 */
  push32(0x12825c34u); f_12821c00();
  /* 12825c34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825c37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825c3a jne 0x12825c3d */
  if (!C.zf) goto L_12825c3d;
  /* 12825c3c int3  */
  x86_unimpl("int3 @ 0x12825c3c");
L_12825c3d:;
  /* 12825c3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12825c3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12825c41 jne 0x12825c19 */
  if (!C.zf) goto L_12825c19;
  /* 12825c43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c46 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12825c4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825c53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12825c56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825c5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12825c5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825c64 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12825c67 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12825c6a push ecx */
  push32((uint32_t)(ECX));
  /* 12825c6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12825c6e push edx */
  push32((uint32_t)(EDX));
  /* 12825c6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c72 push eax */
  push32((uint32_t)(EAX));
  /* 12825c73 call 0x12829ad0 */
  push32(0x12825c78u); f_12829ad0();
  /* 12825c78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825c7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12825c7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12825c84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825c87 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12825c8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c90 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825c94 jl 0x12825cb8 */
  if ((C.sf!=C.of)) goto L_12825cb8;
  /* 12825c96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825c99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12825c9b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12825c9e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12825ca0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12825ca6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12825ca9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825cac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12825cae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825cb1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825cb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12825cb6 jmp 0x12825cc9 */
  goto L_12825cc9;
L_12825cb8:;
  /* 12825cb8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12825cbb push edx */
  push32((uint32_t)(EDX));
  /* 12825cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12825cbe call 0x12829850 */
  push32(0x12825cc3u); f_12829850();
  /* 12825cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825cc6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12825cc9:;
  /* 12825cc9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12825ccc pop edi */
  EDI = (pop32());
  /* 12825ccd pop esi */
  ESI = (pop32());
  /* 12825cce pop ebx */
  EBX = (pop32());
  /* 12825ccf mov esp, ebp */
  ESP = (EBP);
  /* 12825cd1 pop ebp */
  EBP = (pop32());
  /* 12825cd2 ret  */
  ESPCHK(0x12825be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ce0 @ 0x12825ce0 (47 bytes, 17 insns) */
void f_12825ce0(void) {
  FTRACE(0x12825ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 12825ce1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825ce6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12825cea jb 0x12825d00 */
  if (C.cf) goto L_12825d00;
L_12825cec:;
  /* 12825cec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825cf2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825cf7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12825cf9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825cfe jae 0x12825cec */
  if (!C.cf) goto L_12825cec;
L_12825d00:;
  /* 12825d00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825d02 mov eax, esp */
  EAX = (ESP);
  /* 12825d04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12825d06 mov esp, ecx */
  ESP = (ECX);
  /* 12825d08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12825d0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12825d0d push eax */
  push32((uint32_t)(EAX));
  /* 12825d0e ret  */
  ESPCHK(0x12825ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d10 @ 0x12825d10 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12825d10(void) {
  FTRACE(0x12825d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12825d11 mov ebp, esp */
  EBP = (ESP);
  /* 12825d13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825d16 push esi */
  push32((uint32_t)(ESI));
  /* 12825d17 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d1b je 0x12825d23 */
  if (C.zf) goto L_12825d23;
  /* 12825d1d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d21 jne 0x12825d28 */
  if (!C.zf) goto L_12825d28;
L_12825d23:;
  /* 12825d23 jmp 0x12825ef8 */
  goto L_12825ef8;
L_12825d28:;
  /* 12825d28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d2c je 0x12825d44 */
  if (C.zf) goto L_12825d44;
  /* 12825d2e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d32 je 0x12825d44 */
  if (C.zf) goto L_12825d44;
  /* 12825d34 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d38 je 0x12825d44 */
  if (C.zf) goto L_12825d44;
  /* 12825d3a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d3e jne 0x12825e21 */
  if (!C.zf) goto L_12825e21;
L_12825d44:;
  /* 12825d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12825d46 call 0x12826540 */
  push32(0x12825d4bu); f_12826540();
  /* 12825d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825d4e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d52 je 0x12825d5a */
  if (C.zf) goto L_12825d5a;
  /* 12825d54 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d58 jne 0x12825d9f */
  if (!C.zf) goto L_12825d9f;
L_12825d5a:;
  /* 12825d5a cmp dword ptr [0x1284e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d61 jne 0x12825d9f */
  if (!C.zf) goto L_12825d9f;
  /* 12825d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12825d65 push 0x12825f40 */
  push32((uint32_t)(0x12825f40u));
  /* 12825d6a call dword ptr [0x128502ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502ec))), 0x12825d70u);
  /* 12825d70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825d73 jne 0x12825d81 */
  if (!C.zf) goto L_12825d81;
  /* 12825d75 mov dword ptr [0x1284e5fc], 1 */
  w32((uint32_t)(0x1284e5fc), (0x1u));
  /* 12825d7f jmp 0x12825d9f */
  goto L_12825d9f;
L_12825d81:;
  /* 12825d81 call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x12825d87u);
  /* 12825d87 mov esi, eax */
  ESI = (EAX);
  /* 12825d89 call 0x1282aa20 */
  push32(0x12825d8eu); f_1282aa20();
  /* 12825d8e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12825d90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12825d92 call 0x128265e0 */
  push32(0x12825d97u); f_128265e0();
  /* 12825d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825d9a jmp 0x12825ef8 */
  goto L_12825ef8;
L_12825d9f:;
  /* 12825d9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825da2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12825da5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12825da8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825dab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12825dae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825db2 ja 0x12825e12 */
  if ((!C.cf&&!C.zf)) goto L_12825e12;
  /* 12825db4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12825db7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12825db9 mov dl, byte ptr [eax + 0x12825f1f] */
  DL = (r8((uint32_t)(EAX + 0x12825f1f)));
  /* 12825dbf jmp dword ptr [edx*4 + 0x12825f0b] */
  switch (EDX) {
    case 0: goto L_12825dc6;
    case 1: goto L_12825e00;
    case 2: goto L_12825dda;
    case 3: goto L_12825ded;
    case 4: goto L_12825e12;
    default: x86_unimpl("switch@0x12825dbf out of table"); return;
  }
L_12825dc6:;
  /* 12825dc6 mov ecx, dword ptr [0x1284e5ec] */
  ECX = (r32((uint32_t)(0x1284e5ec)));
  /* 12825dcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12825dcf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825dd2 mov dword ptr [0x1284e5ec], edx */
  w32((uint32_t)(0x1284e5ec), (EDX));
  /* 12825dd8 jmp 0x12825e12 */
  goto L_12825e12;
L_12825dda:;
  /* 12825dda mov eax, dword ptr [0x1284e5f0] */
  EAX = (r32((uint32_t)(0x1284e5f0)));
  /* 12825ddf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12825de2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825de5 mov dword ptr [0x1284e5f0], ecx */
  w32((uint32_t)(0x1284e5f0), (ECX));
  /* 12825deb jmp 0x12825e12 */
  goto L_12825e12;
L_12825ded:;
  /* 12825ded mov edx, dword ptr [0x1284e5f4] */
  EDX = (r32((uint32_t)(0x1284e5f4)));
  /* 12825df3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12825df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825df9 mov dword ptr [0x1284e5f4], eax */
  w32((uint32_t)(0x1284e5f4), (EAX));
  /* 12825dfe jmp 0x12825e12 */
  goto L_12825e12;
L_12825e00:;
  /* 12825e00 mov ecx, dword ptr [0x1284e5f8] */
  ECX = (r32((uint32_t)(0x1284e5f8)));
  /* 12825e06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12825e09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825e0c mov dword ptr [0x1284e5f8], edx */
  w32((uint32_t)(0x1284e5f8), (EDX));
L_12825e12:;
  /* 12825e12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12825e14 call 0x128265e0 */
  push32(0x12825e19u); f_128265e0();
  /* 12825e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825e1c jmp 0x12825ef3 */
  goto L_12825ef3;
L_12825e21:;
  /* 12825e21 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825e25 je 0x12825e38 */
  if (C.zf) goto L_12825e38;
  /* 12825e27 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825e2b je 0x12825e38 */
  if (C.zf) goto L_12825e38;
  /* 12825e2d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825e31 je 0x12825e38 */
  if (C.zf) goto L_12825e38;
  /* 12825e33 jmp 0x12825ef8 */
  goto L_12825ef8;
L_12825e38:;
  /* 12825e38 call 0x12822580 */
  push32(0x12825e3du); f_12822580();
  /* 12825e3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12825e40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825e43 cmp dword ptr [eax + 0x50], 0x1284cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1284cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825e4a jne 0x12825e95 */
  if (!C.zf) goto L_12825e95;
  /* 12825e4c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12825e51 push 0x12849df4 */
  push32((uint32_t)(0x12849df4u));
  /* 12825e56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12825e58 mov ecx, dword ptr [0x1284cc80] */
  ECX = (r32((uint32_t)(0x1284cc80)));
  /* 12825e5e push ecx */
  push32((uint32_t)(ECX));
  /* 12825e5f call 0x12822b40 */
  push32(0x12825e64u); f_12822b40();
  /* 12825e64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825e67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825e6a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12825e6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825e70 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825e74 je 0x12825e93 */
  if (C.zf) goto L_12825e93;
  /* 12825e76 mov ecx, dword ptr [0x1284cc80] */
  ECX = (r32((uint32_t)(0x1284cc80)));
  /* 12825e7c push ecx */
  push32((uint32_t)(ECX));
  /* 12825e7d push 0x1284cc00 */
  push32((uint32_t)(0x1284cc00u));
  /* 12825e82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825e85 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12825e88 push eax */
  push32((uint32_t)(EAX));
  /* 12825e89 call 0x12829420 */
  push32(0x12825e8eu); f_12829420();
  /* 12825e8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825e91 jmp 0x12825e95 */
  goto L_12825e95;
L_12825e93:;
  /* 12825e93 jmp 0x12825ef8 */
  goto L_12825ef8;
L_12825e95:;
  /* 12825e95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825e98 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12825e9b push edx */
  push32((uint32_t)(EDX));
  /* 12825e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825e9f push eax */
  push32((uint32_t)(EAX));
  /* 12825ea0 call 0x12826220 */
  push32(0x12825ea5u); f_12826220();
  /* 12825ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825ea8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12825eab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825eaf jne 0x12825eb3 */
  if (!C.zf) goto L_12825eb3;
  /* 12825eb1 jmp 0x12825ef8 */
  goto L_12825ef8;
L_12825eb3:;
  /* 12825eb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825eb6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12825eb9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12825ebc:;
  /* 12825ebc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825ebf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12825ec2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825ec5 jne 0x12825ef3 */
  if (!C.zf) goto L_12825ef3;
  /* 12825ec7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825eca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12825ecd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12825ed0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825ed3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825ed6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12825ed9 mov edx, dword ptr [0x1284cc84] */
  EDX = (r32((uint32_t)(0x1284cc84)));
  /* 12825edf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12825ee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825ee5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12825ee8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12825eea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825eed jb 0x12825ef1 */
  if (C.cf) goto L_12825ef1;
  /* 12825eef jmp 0x12825ef3 */
  goto L_12825ef3;
L_12825ef1:;
  /* 12825ef1 jmp 0x12825ebc */
  goto L_12825ebc;
L_12825ef3:;
  /* 12825ef3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12825ef6 jmp 0x12825f06 */
  goto L_12825f06;
L_12825ef8:;
  /* 12825ef8 call 0x1282aa10 */
  push32(0x12825efdu); f_1282aa10();
  /* 12825efd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12825f03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12825f06:;
  /* 12825f06 pop esi */
  ESI = (pop32());
  /* 12825f07 mov esp, ebp */
  ESP = (EBP);
  /* 12825f09 pop ebp */
  EBP = (pop32());
  /* 12825f0a ret  */
  ESPCHK(0x12825d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x12825f40 (146 bytes, 45 insns) */
void f_12825f40(void) {
  FTRACE(0x12825f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12825f41 mov ebp, esp */
  EBP = (ESP);
  /* 12825f43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825f46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12825f48 call 0x12826540 */
  push32(0x12825f4du); f_12826540();
  /* 12825f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825f50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825f54 jne 0x12825f6e */
  if (!C.zf) goto L_12825f6e;
  /* 12825f56 mov dword ptr [ebp - 8], 0x1284e5ec */
  w32((uint32_t)(EBP + -0x8), (0x1284e5ecu));
  /* 12825f5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825f60 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12825f62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12825f65 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12825f6c jmp 0x12825f84 */
  goto L_12825f84;
L_12825f6e:;
  /* 12825f6e mov dword ptr [ebp - 8], 0x1284e5f0 */
  w32((uint32_t)(EBP + -0x8), (0x1284e5f0u));
  /* 12825f75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825f78 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12825f7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12825f7d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12825f84:;
  /* 12825f84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825f88 jne 0x12825f98 */
  if (!C.zf) goto L_12825f98;
  /* 12825f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12825f8c call 0x128265e0 */
  push32(0x12825f91u); f_128265e0();
  /* 12825f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12825f96 jmp 0x12825fcc */
  goto L_12825fcc;
L_12825f98:;
  /* 12825f98 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12825f9c je 0x12825fbd */
  if (C.zf) goto L_12825fbd;
  /* 12825f9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12825fa1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12825fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12825fa9 call 0x128265e0 */
  push32(0x12825faeu); f_128265e0();
  /* 12825fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12825fb4 push edx */
  push32((uint32_t)(EDX));
  /* 12825fb5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12825fb8u);
  /* 12825fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12825fbb jmp 0x12825fc7 */
  goto L_12825fc7;
L_12825fbd:;
  /* 12825fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 12825fbf call 0x128265e0 */
  push32(0x12825fc4u); f_128265e0();
  /* 12825fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12825fc7:;
  /* 12825fc7 mov eax, 1 */
  EAX = (0x1u);
L_12825fcc:;
  /* 12825fcc mov esp, ebp */
  ESP = (EBP);
  /* 12825fce pop ebp */
  EBP = (pop32());
  /* 12825fcf ret 4 */
  ESPCHK(0x12825f40u, _esp0);
  ESP += 8; return;
}

/* FUN_10005fe0 @ 0x12825fe0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12825fe0(void) {
  FTRACE(0x12825fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12825fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12825fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12825fe3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825fe6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12825fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12825ff0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12825ff3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12825ff6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12825ff9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12825ffc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826000 ja 0x128260ae */
  if ((!C.cf&&!C.zf)) goto L_128260ae;
  /* 12826006 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12826009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282600b mov dl, byte ptr [eax + 0x12826202] */
  DL = (r8((uint32_t)(EAX + 0x12826202)));
  /* 12826011 jmp dword ptr [edx*4 + 0x128261ea] */
  switch (EDX) {
    case 0: goto L_12826018;
    case 1: goto L_12826083;
    case 2: goto L_12826069;
    case 3: goto L_12826035;
    case 4: goto L_1282604f;
    case 5: goto L_128260ae;
    default: x86_unimpl("switch@0x12826011 out of table"); return;
  }
L_12826018:;
  /* 12826018 mov dword ptr [ebp - 0x18], 0x1284e5ec */
  w32((uint32_t)(EBP + -0x18), (0x1284e5ecu));
  /* 1282601f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12826022 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12826024 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12826027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282602a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282602d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12826030 jmp 0x128260b6 */
  goto L_128260b6;
L_12826035:;
  /* 12826035 mov dword ptr [ebp - 0x18], 0x1284e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x1284e5f0u));
  /* 1282603c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282603f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12826041 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12826044 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12826047 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282604a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282604d jmp 0x128260b6 */
  goto L_128260b6;
L_1282604f:;
  /* 1282604f mov dword ptr [ebp - 0x18], 0x1284e5f4 */
  w32((uint32_t)(EBP + -0x18), (0x1284e5f4u));
  /* 12826056 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12826059 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282605b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1282605e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12826061 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826064 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12826067 jmp 0x128260b6 */
  goto L_128260b6;
L_12826069:;
  /* 12826069 mov dword ptr [ebp - 0x18], 0x1284e5f8 */
  w32((uint32_t)(EBP + -0x18), (0x1284e5f8u));
  /* 12826070 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12826073 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12826075 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12826078 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282607b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282607e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12826081 jmp 0x128260b6 */
  goto L_128260b6;
L_12826083:;
  /* 12826083 call 0x12822580 */
  push32(0x12826088u); f_12822580();
  /* 12826088 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282608b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282608e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12826091 push edx */
  push32((uint32_t)(EDX));
  /* 12826092 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826095 push eax */
  push32((uint32_t)(EAX));
  /* 12826096 call 0x12826220 */
  push32(0x1282609bu); f_12826220();
  /* 1282609b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282609e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128260a1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128260a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128260a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128260a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 128260ac jmp 0x128260b6 */
  goto L_128260b6;
L_128260ae:;
  /* 128260ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128260b1 jmp 0x128261e6 */
  goto L_128261e6;
L_128260b6:;
  /* 128260b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128260ba je 0x128260c6 */
  if (C.zf) goto L_128260c6;
  /* 128260bc push 1 */
  push32((uint32_t)(0x1u));
  /* 128260be call 0x12826540 */
  push32(0x128260c3u); f_12826540();
  /* 128260c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128260c6:;
  /* 128260c6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128260ca jne 0x128260e3 */
  if (!C.zf) goto L_128260e3;
  /* 128260cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128260d0 je 0x128260dc */
  if (C.zf) goto L_128260dc;
  /* 128260d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 128260d4 call 0x128265e0 */
  push32(0x128260d9u); f_128265e0();
  /* 128260d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128260dc:;
  /* 128260dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128260de jmp 0x128261e6 */
  goto L_128261e6;
L_128260e3:;
  /* 128260e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128260e7 jne 0x12826100 */
  if (!C.zf) goto L_12826100;
  /* 128260e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128260ed je 0x128260f9 */
  if (C.zf) goto L_128260f9;
  /* 128260ef push 1 */
  push32((uint32_t)(0x1u));
  /* 128260f1 call 0x128265e0 */
  push32(0x128260f6u); f_128265e0();
  /* 128260f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128260f9:;
  /* 128260f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 128260fb call 0x12822300 */
  push32(0x12826100u); f_12822300();
L_12826100:;
  /* 12826100 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826104 je 0x12826112 */
  if (C.zf) goto L_12826112;
  /* 12826106 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282610a je 0x12826112 */
  if (C.zf) goto L_12826112;
  /* 1282610c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826110 jne 0x1282613e */
  if (!C.zf) goto L_1282613e;
L_12826112:;
  /* 12826112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826115 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12826118 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282611b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282611e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12826125 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826129 jne 0x1282613e */
  if (!C.zf) goto L_1282613e;
  /* 1282612b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282612e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12826131 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12826134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826137 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1282613e:;
  /* 1282613e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826142 jne 0x12826180 */
  if (!C.zf) goto L_12826180;
  /* 12826144 mov eax, dword ptr [0x1284cc78] */
  EAX = (r32((uint32_t)(0x1284cc78)));
  /* 12826149 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1282614c jmp 0x12826157 */
  goto L_12826157;
L_1282614e:;
  /* 1282614e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826151 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826154 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12826157:;
  /* 12826157 mov edx, dword ptr [0x1284cc78] */
  EDX = (r32((uint32_t)(0x1284cc78)));
  /* 1282615d add edx, dword ptr [0x1284cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826163 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826166 jge 0x1282617e */
  if ((C.sf==C.of)) goto L_1282617e;
  /* 12826168 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282616b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282616e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826171 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12826174 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1282617c jmp 0x1282614e */
  goto L_1282614e;
L_1282617e:;
  /* 1282617e jmp 0x12826189 */
  goto L_12826189;
L_12826180:;
  /* 12826180 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12826183 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12826189:;
  /* 12826189 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282618d je 0x12826199 */
  if (C.zf) goto L_12826199;
  /* 1282618f push 1 */
  push32((uint32_t)(0x1u));
  /* 12826191 call 0x128265e0 */
  push32(0x12826196u); f_128265e0();
  /* 12826196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12826199:;
  /* 12826199 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282619d jne 0x128261b0 */
  if (!C.zf) goto L_128261b0;
  /* 1282619f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128261a2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 128261a5 push edx */
  push32((uint32_t)(EDX));
  /* 128261a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 128261a8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x128261abu);
  /* 128261ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128261ae jmp 0x128261ba */
  goto L_128261ba;
L_128261b0:;
  /* 128261b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128261b3 push eax */
  push32((uint32_t)(EAX));
  /* 128261b4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x128261b7u);
  /* 128261b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128261ba:;
  /* 128261ba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128261be je 0x128261cc */
  if (C.zf) goto L_128261cc;
  /* 128261c0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128261c4 je 0x128261cc */
  if (C.zf) goto L_128261cc;
  /* 128261c6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128261ca jne 0x128261e4 */
  if (!C.zf) goto L_128261e4;
L_128261cc:;
  /* 128261cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128261cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128261d2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 128261d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128261d9 jne 0x128261e4 */
  if (!C.zf) goto L_128261e4;
  /* 128261db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128261de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128261e1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_128261e4:;
  /* 128261e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128261e6:;
  /* 128261e6 mov esp, ebp */
  ESP = (EBP);
  /* 128261e8 pop ebp */
  EBP = (pop32());
  /* 128261e9 ret  */
  ESPCHK(0x12825fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12826220 (91 bytes, 35 insns) */
void f_12826220(void) {
  FTRACE(0x12826220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826220 push ebp */
  push32((uint32_t)(EBP));
  /* 12826221 mov ebp, esp */
  EBP = (ESP);
  /* 12826223 push ecx */
  push32((uint32_t)(ECX));
  /* 12826224 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826227 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282622a:;
  /* 1282622a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282622d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12826230 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826233 je 0x12826253 */
  if (C.zf) goto L_12826253;
  /* 12826235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826238 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282623b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282623e mov ecx, dword ptr [0x1284cc84] */
  ECX = (r32((uint32_t)(0x1284cc84)));
  /* 12826244 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12826247 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282624a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282624c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282624f jae 0x12826253 */
  if (!C.cf) goto L_12826253;
  /* 12826251 jmp 0x1282622a */
  goto L_1282622a;
L_12826253:;
  /* 12826253 mov eax, dword ptr [0x1284cc84] */
  EAX = (r32((uint32_t)(0x1284cc84)));
  /* 12826258 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282625b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282625e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826260 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826263 jae 0x12826275 */
  if (!C.cf) goto L_12826275;
  /* 12826265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826268 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1282626b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282626e jne 0x12826275 */
  if (!C.zf) goto L_12826275;
  /* 12826270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826273 jmp 0x12826277 */
  goto L_12826277;
L_12826275:;
  /* 12826275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12826277:;
  /* 12826277 mov esp, ebp */
  ESP = (EBP);
  /* 12826279 pop ebp */
  EBP = (pop32());
  /* 1282627a ret  */
  ESPCHK(0x12826220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x12826280 (13 bytes, 6 insns) */
void f_12826280(void) {
  FTRACE(0x12826280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826280 push ebp */
  push32((uint32_t)(EBP));
  /* 12826281 mov ebp, esp */
  EBP = (ESP);
  /* 12826283 call 0x12822580 */
  push32(0x12826288u); f_12822580();
  /* 12826288 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282628b pop ebp */
  EBP = (pop32());
  /* 1282628c ret  */
  ESPCHK(0x12826280u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x12826290 (13 bytes, 6 insns) */
void f_12826290(void) {
  FTRACE(0x12826290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826290 push ebp */
  push32((uint32_t)(EBP));
  /* 12826291 mov ebp, esp */
  EBP = (ESP);
  /* 12826293 call 0x12822580 */
  push32(0x12826298u); f_12822580();
  /* 12826298 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282629b pop ebp */
  EBP = (pop32());
  /* 1282629c ret  */
  ESPCHK(0x12826290u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x128262a0 (187 bytes, 54 insns) */
void f_128262a0(void) {
  FTRACE(0x128262a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128262a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128262a1 mov ebp, esp */
  EBP = (ESP);
  /* 128262a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128262a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128262ad cmp dword ptr [0x1284e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128262b4 jne 0x12826313 */
  if (!C.zf) goto L_12826313;
  /* 128262b6 push 0x12849220 */
  push32((uint32_t)(0x12849220u));
  /* 128262bb call dword ptr [0x12850274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850274))), 0x128262c1u);
  /* 128262c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128262c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128262c8 je 0x128262e7 */
  if (C.zf) goto L_128262e7;
  /* 128262ca push 0x12849e24 */
  push32((uint32_t)(0x12849e24u));
  /* 128262cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128262d2 push eax */
  push32((uint32_t)(EAX));
  /* 128262d3 call dword ptr [0x12850270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850270))), 0x128262d9u);
  /* 128262d9 mov dword ptr [0x1284e600], eax */
  w32((uint32_t)(0x1284e600), (EAX));
  /* 128262de cmp dword ptr [0x1284e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128262e5 jne 0x128262eb */
  if (!C.zf) goto L_128262eb;
L_128262e7:;
  /* 128262e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128262e9 jmp 0x12826357 */
  goto L_12826357;
L_128262eb:;
  /* 128262eb push 0x12849e14 */
  push32((uint32_t)(0x12849e14u));
  /* 128262f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128262f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128262f4 call dword ptr [0x12850270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850270))), 0x128262fau);
  /* 128262fa mov dword ptr [0x1284e604], eax */
  w32((uint32_t)(0x1284e604), (EAX));
  /* 128262ff push 0x12849e00 */
  push32((uint32_t)(0x12849e00u));
  /* 12826304 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826307 push edx */
  push32((uint32_t)(EDX));
  /* 12826308 call dword ptr [0x12850270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850270))), 0x1282630eu);
  /* 1282630e mov dword ptr [0x1284e608], eax */
  w32((uint32_t)(0x1284e608), (EAX));
L_12826313:;
  /* 12826313 cmp dword ptr [0x1284e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282631a je 0x12826325 */
  if (C.zf) goto L_12826325;
  /* 1282631c call dword ptr [0x1284e604] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e604))), 0x12826322u);
  /* 12826322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12826325:;
  /* 12826325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826329 je 0x12826341 */
  if (C.zf) goto L_12826341;
  /* 1282632b cmp dword ptr [0x1284e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826332 je 0x12826341 */
  if (C.zf) goto L_12826341;
  /* 12826334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826337 push eax */
  push32((uint32_t)(EAX));
  /* 12826338 call dword ptr [0x1284e608] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e608))), 0x1282633eu);
  /* 1282633e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12826341:;
  /* 12826341 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12826344 push ecx */
  push32((uint32_t)(ECX));
  /* 12826345 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826348 push edx */
  push32((uint32_t)(EDX));
  /* 12826349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282634c push eax */
  push32((uint32_t)(EAX));
  /* 1282634d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826350 push ecx */
  push32((uint32_t)(ECX));
  /* 12826351 call dword ptr [0x1284e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e600))), 0x12826357u);
L_12826357:;
  /* 12826357 mov esp, ebp */
  ESP = (EBP);
  /* 12826359 pop ebp */
  EBP = (pop32());
  /* 1282635a ret  */
  ESPCHK(0x128262a0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12826360 (254 bytes, 109 insns) */
void f_12826360(void) {
  FTRACE(0x12826360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826360 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12826364 push edi */
  push32((uint32_t)(EDI));
  /* 12826365 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12826367 je 0x128263e3 */
  if (C.zf) goto L_128263e3;
  /* 12826369 push esi */
  push32((uint32_t)(ESI));
  /* 1282636a push ebx */
  push32((uint32_t)(EBX));
  /* 1282636b mov ebx, ecx */
  EBX = (ECX);
  /* 1282636d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12826371 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12826377 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1282637b jne 0x12826384 */
  if (!C.zf) goto L_12826384;
  /* 1282637d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12826380 jne 0x128263f1 */
  if (!C.zf) goto L_128263f1;
  /* 12826382 jmp 0x128263a5 */
  goto L_128263a5;
L_12826384:;
  /* 12826384 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12826386 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12826387 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12826389 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1282638a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1282638b je 0x128263b2 */
  if (C.zf) goto L_128263b2;
  /* 1282638d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1282638f je 0x128263ba */
  if (C.zf) goto L_128263ba;
  /* 12826391 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12826397 jne 0x12826384 */
  if (!C.zf) goto L_12826384;
  /* 12826399 mov ebx, ecx */
  EBX = (ECX);
  /* 1282639b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282639e jne 0x128263f1 */
  if (!C.zf) goto L_128263f1;
L_128263a0:;
  /* 128263a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 128263a3 je 0x128263b2 */
  if (C.zf) goto L_128263b2;
L_128263a5:;
  /* 128263a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128263a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128263a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128263aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128263ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 128263ad je 0x128263de */
  if (C.zf) goto L_128263de;
  /* 128263af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 128263b0 jne 0x128263a5 */
  if (!C.zf) goto L_128263a5;
L_128263b2:;
  /* 128263b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 128263b6 pop ebx */
  EBX = (pop32());
  /* 128263b7 pop esi */
  ESI = (pop32());
  /* 128263b8 pop edi */
  EDI = (pop32());
  /* 128263b9 ret  */
  ESPCHK(0x12826360u, _esp0);
  ESP += 4; return;
L_128263ba:;
  /* 128263ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 128263c0 je 0x128263d4 */
  if (C.zf) goto L_128263d4;
L_128263c2:;
  /* 128263c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128263c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128263c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128263c6 je 0x12826456 */
  if (C.zf) goto L_12826456;
  /* 128263cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 128263d2 jne 0x128263c2 */
  if (!C.zf) goto L_128263c2;
L_128263d4:;
  /* 128263d4 mov ebx, ecx */
  EBX = (ECX);
  /* 128263d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128263d9 jne 0x12826447 */
  if (!C.zf) goto L_12826447;
L_128263db:;
  /* 128263db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128263dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_128263de:;
  /* 128263de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 128263df jne 0x128263db */
  if (!C.zf) goto L_128263db;
  /* 128263e1 pop ebx */
  EBX = (pop32());
  /* 128263e2 pop esi */
  ESI = (pop32());
L_128263e3:;
  /* 128263e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128263e7 pop edi */
  EDI = (pop32());
  /* 128263e8 ret  */
  ESPCHK(0x12826360u, _esp0);
  ESP += 4; return;
L_128263e9:;
  /* 128263e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 128263eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 128263ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128263ef je 0x128263a0 */
  if (C.zf) goto L_128263a0;
L_128263f1:;
  /* 128263f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 128263f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 128263f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128263fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128263fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 128263ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12826401 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12826404 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12826409 je 0x128263e9 */
  if (C.zf) goto L_128263e9;
  /* 1282640b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1282640d je 0x1282643b */
  if (C.zf) goto L_1282643b;
  /* 1282640f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12826411 je 0x12826431 */
  if (C.zf) goto L_12826431;
  /* 12826413 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12826419 je 0x12826427 */
  if (C.zf) goto L_12826427;
  /* 1282641b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12826421 jne 0x128263e9 */
  if (!C.zf) goto L_128263e9;
  /* 12826423 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12826425 jmp 0x1282643f */
  goto L_1282643f;
L_12826427:;
  /* 12826427 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1282642d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1282642f jmp 0x1282643f */
  goto L_1282643f;
L_12826431:;
  /* 12826431 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12826437 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12826439 jmp 0x1282643f */
  goto L_1282643f;
L_1282643b:;
  /* 1282643b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282643d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1282643f:;
  /* 1282643f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12826442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12826444 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12826445 je 0x12826451 */
  if (C.zf) goto L_12826451;
L_12826447:;
  /* 12826447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12826449:;
  /* 12826449 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1282644b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282644e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1282644f jne 0x12826449 */
  if (!C.zf) goto L_12826449;
L_12826451:;
  /* 12826451 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12826454 jne 0x128263db */
  if (!C.zf) goto L_128263db;
L_12826456:;
  /* 12826456 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1282645a pop ebx */
  EBX = (pop32());
  /* 1282645b pop esi */
  ESI = (pop32());
  /* 1282645c pop edi */
  EDI = (pop32());
  /* 1282645d ret  */
  ESPCHK(0x12826360u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x12826460 (55 bytes, 16 insns) */
void f_12826460(void) {
  FTRACE(0x12826460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826460 push ebp */
  push32((uint32_t)(EBP));
  /* 12826461 mov ebp, esp */
  EBP = (ESP);
  /* 12826463 mov eax, dword ptr [0x1284cb84] */
  EAX = (r32((uint32_t)(0x1284cb84)));
  /* 12826468 push eax */
  push32((uint32_t)(EAX));
  /* 12826469 call dword ptr [0x128502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f0))), 0x1282646fu);
  /* 1282646f mov ecx, dword ptr [0x1284cb74] */
  ECX = (r32((uint32_t)(0x1284cb74)));
  /* 12826475 push ecx */
  push32((uint32_t)(ECX));
  /* 12826476 call dword ptr [0x128502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f0))), 0x1282647cu);
  /* 1282647c mov edx, dword ptr [0x1284cb64] */
  EDX = (r32((uint32_t)(0x1284cb64)));
  /* 12826482 push edx */
  push32((uint32_t)(EDX));
  /* 12826483 call dword ptr [0x128502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f0))), 0x12826489u);
  /* 12826489 mov eax, dword ptr [0x1284cb44] */
  EAX = (r32((uint32_t)(0x1284cb44)));
  /* 1282648e push eax */
  push32((uint32_t)(EAX));
  /* 1282648f call dword ptr [0x128502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f0))), 0x12826495u);
  /* 12826495 pop ebp */
  EBP = (pop32());
  /* 12826496 ret  */
  ESPCHK(0x12826460u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x128264a0 (159 bytes, 47 insns) */
void f_128264a0(void) {
  FTRACE(0x128264a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128264a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128264a1 mov ebp, esp */
  EBP = (ESP);
  /* 128264a3 push ecx */
  push32((uint32_t)(ECX));
  /* 128264a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128264ab jmp 0x128264b6 */
  goto L_128264b6;
L_128264ad:;
  /* 128264ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128264b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128264b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128264b6:;
  /* 128264b6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128264ba jge 0x12826509 */
  if ((C.sf==C.of)) goto L_12826509;
  /* 128264bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128264bf cmp dword ptr [ecx*4 + 0x1284cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1284cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128264c7 je 0x12826507 */
  if (C.zf) goto L_12826507;
  /* 128264c9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128264cd je 0x12826507 */
  if (C.zf) goto L_12826507;
  /* 128264cf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128264d3 je 0x12826507 */
  if (C.zf) goto L_12826507;
  /* 128264d5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128264d9 je 0x12826507 */
  if (C.zf) goto L_12826507;
  /* 128264db cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128264df je 0x12826507 */
  if (C.zf) goto L_12826507;
  /* 128264e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128264e4 mov eax, dword ptr [edx*4 + 0x1284cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284cb40)));
  /* 128264eb push eax */
  push32((uint32_t)(EAX));
  /* 128264ec call dword ptr [0x128502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b8))), 0x128264f2u);
  /* 128264f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 128264f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128264f7 mov edx, dword ptr [ecx*4 + 0x1284cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284cb40)));
  /* 128264fe push edx */
  push32((uint32_t)(EDX));
  /* 128264ff call 0x128235d0 */
  push32(0x12826504u); f_128235d0();
  /* 12826504 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12826507:;
  /* 12826507 jmp 0x128264ad */
  goto L_128264ad;
L_12826509:;
  /* 12826509 mov eax, dword ptr [0x1284cb64] */
  EAX = (r32((uint32_t)(0x1284cb64)));
  /* 1282650e push eax */
  push32((uint32_t)(EAX));
  /* 1282650f call dword ptr [0x128502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b8))), 0x12826515u);
  /* 12826515 mov ecx, dword ptr [0x1284cb74] */
  ECX = (r32((uint32_t)(0x1284cb74)));
  /* 1282651b push ecx */
  push32((uint32_t)(ECX));
  /* 1282651c call dword ptr [0x128502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b8))), 0x12826522u);
  /* 12826522 mov edx, dword ptr [0x1284cb84] */
  EDX = (r32((uint32_t)(0x1284cb84)));
  /* 12826528 push edx */
  push32((uint32_t)(EDX));
  /* 12826529 call dword ptr [0x128502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b8))), 0x1282652fu);
  /* 1282652f mov eax, dword ptr [0x1284cb44] */
  EAX = (r32((uint32_t)(0x1284cb44)));
  /* 12826534 push eax */
  push32((uint32_t)(EAX));
  /* 12826535 call dword ptr [0x128502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b8))), 0x1282653bu);
  /* 1282653b mov esp, ebp */
  ESP = (EBP);
  /* 1282653d pop ebp */
  EBP = (pop32());
  /* 1282653e ret  */
  ESPCHK(0x128264a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006540 @ 0x12826540 (151 bytes, 46 insns) */
void f_12826540(void) {
  FTRACE(0x12826540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826540 push ebp */
  push32((uint32_t)(EBP));
  /* 12826541 mov ebp, esp */
  EBP = (ESP);
  /* 12826543 push ecx */
  push32((uint32_t)(ECX));
  /* 12826544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826547 cmp dword ptr [eax*4 + 0x1284cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1284cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282654f jne 0x128265c2 */
  if (!C.zf) goto L_128265c2;
  /* 12826551 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12826556 push 0x12849e30 */
  push32((uint32_t)(0x12849e30u));
  /* 1282655b push 2 */
  push32((uint32_t)(0x2u));
  /* 1282655d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1282655f call 0x12822b40 */
  push32(0x12826564u); f_12822b40();
  /* 12826564 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826567 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282656a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282656e jne 0x1282657a */
  if (!C.zf) goto L_1282657a;
  /* 12826570 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12826572 call 0x12821ab0 */
  push32(0x12826577u); f_12821ab0();
  /* 12826577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282657a:;
  /* 1282657a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1282657c call 0x12826540 */
  push32(0x12826581u); f_12826540();
  /* 12826581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826587 cmp dword ptr [ecx*4 + 0x1284cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1284cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282658f jne 0x128265aa */
  if (!C.zf) goto L_128265aa;
  /* 12826591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826594 push edx */
  push32((uint32_t)(EDX));
  /* 12826595 call dword ptr [0x128502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f0))), 0x1282659bu);
  /* 1282659b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282659e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128265a1 mov dword ptr [eax*4 + 0x1284cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1284cb40), (ECX));
  /* 128265a8 jmp 0x128265b8 */
  goto L_128265b8;
L_128265aa:;
  /* 128265aa push 2 */
  push32((uint32_t)(0x2u));
  /* 128265ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128265af push edx */
  push32((uint32_t)(EDX));
  /* 128265b0 call 0x128235d0 */
  push32(0x128265b5u); f_128235d0();
  /* 128265b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128265b8:;
  /* 128265b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 128265ba call 0x128265e0 */
  push32(0x128265bfu); f_128265e0();
  /* 128265bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128265c2:;
  /* 128265c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128265c5 mov ecx, dword ptr [eax*4 + 0x1284cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284cb40)));
  /* 128265cc push ecx */
  push32((uint32_t)(ECX));
  /* 128265cd call dword ptr [0x128502f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f4))), 0x128265d3u);
  /* 128265d3 mov esp, ebp */
  ESP = (EBP);
  /* 128265d5 pop ebp */
  EBP = (pop32());
  /* 128265d6 ret  */
  ESPCHK(0x12826540u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x128265e0 (22 bytes, 8 insns) */
void f_128265e0(void) {
  FTRACE(0x128265e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128265e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128265e1 mov ebp, esp */
  EBP = (ESP);
  /* 128265e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128265e6 mov ecx, dword ptr [eax*4 + 0x1284cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1284cb40)));
  /* 128265ed push ecx */
  push32((uint32_t)(ECX));
  /* 128265ee call dword ptr [0x128502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f8))), 0x128265f4u);
  /* 128265f4 pop ebp */
  EBP = (pop32());
  /* 128265f5 ret  */
  ESPCHK(0x128265e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006600 @ 0x12826600 (26 bytes, 10 insns) */
void f_12826600(void) {
  FTRACE(0x12826600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826600 push ebp */
  push32((uint32_t)(EBP));
  /* 12826601 mov ebp, esp */
  EBP = (ESP);
  /* 12826603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826606 push eax */
  push32((uint32_t)(EAX));
  /* 12826607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12826609 call dword ptr [0x128502fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502fc))), 0x1282660fu);
  /* 1282660f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12826614 call dword ptr [0x12850280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850280))), 0x1282661au);
  /* 1282661a pop ebp */
  EBP = (pop32());
  /* 1282661b ret  */
  ESPCHK(0x12826600u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12826620 (446 bytes, 130 insns) */
void f_12826620(void) {
  FTRACE(0x12826620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826620 push ebp */
  push32((uint32_t)(EBP));
  /* 12826621 mov ebp, esp */
  EBP = (ESP);
  /* 12826623 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826626 call 0x12822580 */
  push32(0x1282662bu); f_12822580();
  /* 1282662b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282662e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826631 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12826634 push ecx */
  push32((uint32_t)(ECX));
  /* 12826635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826638 push edx */
  push32((uint32_t)(EDX));
  /* 12826639 call 0x128267e0 */
  push32(0x1282663eu); f_128267e0();
  /* 1282663e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826641 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12826644 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826648 je 0x12826653 */
  if (C.zf) goto L_12826653;
  /* 1282664a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282664d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826651 jne 0x12826662 */
  if (!C.zf) goto L_12826662;
L_12826653:;
  /* 12826653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826656 push ecx */
  push32((uint32_t)(ECX));
  /* 12826657 call dword ptr [0x12850300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850300))), 0x1282665du);
  /* 1282665d jmp 0x128267da */
  goto L_128267da;
L_12826662:;
  /* 12826662 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826665 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826669 jne 0x1282667f */
  if (!C.zf) goto L_1282667f;
  /* 1282666b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282666e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12826675 mov eax, 1 */
  EAX = (0x1u);
  /* 1282667a jmp 0x128267da */
  goto L_128267da;
L_1282667f:;
  /* 1282667f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826682 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826686 jne 0x12826690 */
  if (!C.zf) goto L_12826690;
  /* 12826688 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282668b jmp 0x128267da */
  goto L_128267da;
L_12826690:;
  /* 12826690 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826693 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12826696 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12826699 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282669c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1282669f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 128266a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128266a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128266a8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 128266ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128266ae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128266b2 jne 0x128267b7 */
  if (!C.zf) goto L_128267b7;
  /* 128266b8 mov eax, dword ptr [0x1284cc78] */
  EAX = (r32((uint32_t)(0x1284cc78)));
  /* 128266bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128266c0 jmp 0x128266cb */
  goto L_128266cb;
L_128266c2:;
  /* 128266c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128266c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128266c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_128266cb:;
  /* 128266cb mov edx, dword ptr [0x1284cc78] */
  EDX = (r32((uint32_t)(0x1284cc78)));
  /* 128266d1 add edx, dword ptr [0x1284cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128266d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128266da jge 0x128266f2 */
  if ((C.sf==C.of)) goto L_128266f2;
  /* 128266dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128266df imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128266e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128266e5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 128266e8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 128266f0 jmp 0x128266c2 */
  goto L_128266c2;
L_128266f2:;
  /* 128266f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128266f5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 128266f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128266fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128266fe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826704 jne 0x12826715 */
  if (!C.zf) goto L_12826715;
  /* 12826706 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826709 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12826710 jmp 0x1282679d */
  goto L_1282679d;
L_12826715:;
  /* 12826715 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826718 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282671e jne 0x1282672c */
  if (!C.zf) goto L_1282672c;
  /* 12826720 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826723 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1282672a jmp 0x1282679d */
  goto L_1282679d;
L_1282672c:;
  /* 1282672c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282672f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826735 jne 0x12826743 */
  if (!C.zf) goto L_12826743;
  /* 12826737 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282673a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12826741 jmp 0x1282679d */
  goto L_1282679d;
L_12826743:;
  /* 12826743 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826746 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282674c jne 0x1282675a */
  if (!C.zf) goto L_1282675a;
  /* 1282674e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826751 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12826758 jmp 0x1282679d */
  goto L_1282679d;
L_1282675a:;
  /* 1282675a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282675d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826763 jne 0x12826771 */
  if (!C.zf) goto L_12826771;
  /* 12826765 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826768 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1282676f jmp 0x1282679d */
  goto L_1282679d;
L_12826771:;
  /* 12826771 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826774 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282677a jne 0x12826788 */
  if (!C.zf) goto L_12826788;
  /* 1282677c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282677f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12826786 jmp 0x1282679d */
  goto L_1282679d;
L_12826788:;
  /* 12826788 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282678b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826791 jne 0x1282679d */
  if (!C.zf) goto L_1282679d;
  /* 12826793 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826796 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1282679d:;
  /* 1282679d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128267a0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 128267a3 push edx */
  push32((uint32_t)(EDX));
  /* 128267a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 128267a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x128267a9u);
  /* 128267a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128267ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128267af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128267b2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 128267b5 jmp 0x128267ce */
  goto L_128267ce;
L_128267b7:;
  /* 128267b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128267ba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 128267c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128267c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 128267c7 push ecx */
  push32((uint32_t)(ECX));
  /* 128267c8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x128267cbu);
  /* 128267cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128267ce:;
  /* 128267ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128267d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128267d4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 128267d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_128267da:;
  /* 128267da mov esp, ebp */
  ESP = (EBP);
  /* 128267dc pop ebp */
  EBP = (pop32());
  /* 128267dd ret  */
  ESPCHK(0x12826620u, _esp0);
  ESP += 4; return;
}

/* FUN_100067e0 @ 0x128267e0 (89 bytes, 35 insns) */
void f_128267e0(void) {
  FTRACE(0x128267e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128267e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128267e1 mov ebp, esp */
  EBP = (ESP);
  /* 128267e3 push ecx */
  push32((uint32_t)(ECX));
  /* 128267e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128267e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128267ea:;
  /* 128267ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128267ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128267ef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128267f2 je 0x12826812 */
  if (C.zf) goto L_12826812;
  /* 128267f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128267f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128267fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128267fd mov ecx, dword ptr [0x1284cc84] */
  ECX = (r32((uint32_t)(0x1284cc84)));
  /* 12826803 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12826806 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826809 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282680b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282680e jae 0x12826812 */
  if (!C.cf) goto L_12826812;
  /* 12826810 jmp 0x128267ea */
  goto L_128267ea;
L_12826812:;
  /* 12826812 mov eax, dword ptr [0x1284cc84] */
  EAX = (r32((uint32_t)(0x1284cc84)));
  /* 12826817 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282681a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282681d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282681f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826822 jae 0x1282682e */
  if (!C.cf) goto L_1282682e;
  /* 12826824 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826827 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12826829 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282682c je 0x12826832 */
  if (C.zf) goto L_12826832;
L_1282682e:;
  /* 1282682e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12826830 jmp 0x12826835 */
  goto L_12826835;
L_12826832:;
  /* 12826832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12826835:;
  /* 12826835 mov esp, ebp */
  ESP = (EBP);
  /* 12826837 pop ebp */
  EBP = (pop32());
  /* 12826838 ret  */
  ESPCHK(0x128267e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12826840 (48 bytes, 17 insns) */
void f_12826840(void) {
  FTRACE(0x12826840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826840 push ebp */
  push32((uint32_t)(EBP));
  /* 12826841 mov ebp, esp */
  EBP = (ESP);
  /* 12826843 push ecx */
  push32((uint32_t)(ECX));
  /* 12826844 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826846 call 0x12826540 */
  push32(0x1282684bu); f_12826540();
  /* 1282684b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282684e mov eax, dword ptr [0x1284e674] */
  EAX = (r32((uint32_t)(0x1284e674)));
  /* 12826853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12826856 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826859 mov dword ptr [0x1284e674], ecx */
  w32((uint32_t)(0x1284e674), (ECX));
  /* 1282685f push 9 */
  push32((uint32_t)(0x9u));
  /* 12826861 call 0x128265e0 */
  push32(0x12826866u); f_128265e0();
  /* 12826866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282686c mov esp, ebp */
  ESP = (EBP);
  /* 1282686e pop ebp */
  EBP = (pop32());
  /* 1282686f ret  */
  ESPCHK(0x12826840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x12826870 (10 bytes, 5 insns) */
void f_12826870(void) {
  FTRACE(0x12826870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826870 push ebp */
  push32((uint32_t)(EBP));
  /* 12826871 mov ebp, esp */
  EBP = (ESP);
  /* 12826873 mov eax, dword ptr [0x1284e674] */
  EAX = (r32((uint32_t)(0x1284e674)));
  /* 12826878 pop ebp */
  EBP = (pop32());
  /* 12826879 ret  */
  ESPCHK(0x12826870u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12826880 (45 bytes, 19 insns) */
void f_12826880(void) {
  FTRACE(0x12826880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826880 push ebp */
  push32((uint32_t)(EBP));
  /* 12826881 mov ebp, esp */
  EBP = (ESP);
  /* 12826883 push ecx */
  push32((uint32_t)(ECX));
  /* 12826884 mov eax, dword ptr [0x1284e674] */
  EAX = (r32((uint32_t)(0x1284e674)));
  /* 12826889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282688c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826890 je 0x128268a0 */
  if (C.zf) goto L_128268a0;
  /* 12826892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826895 push ecx */
  push32((uint32_t)(ECX));
  /* 12826896 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12826899u);
  /* 12826899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282689c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282689e jne 0x128268a4 */
  if (!C.zf) goto L_128268a4;
L_128268a0:;
  /* 128268a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128268a2 jmp 0x128268a9 */
  goto L_128268a9;
L_128268a4:;
  /* 128268a4 mov eax, 1 */
  EAX = (0x1u);
L_128268a9:;
  /* 128268a9 mov esp, ebp */
  ESP = (EBP);
  /* 128268ab pop ebp */
  EBP = (pop32());
  /* 128268ac ret  */
  ESPCHK(0x12826880u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x128268b0 (88 bytes, 40 insns) */
void f_128268b0(void) {
  FTRACE(0x128268b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128268b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 128268b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 128268b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128268ba je 0x12826903 */
  if (C.zf) goto L_12826903;
  /* 128268bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128268be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 128268c2 push edi */
  push32((uint32_t)(EDI));
  /* 128268c3 mov edi, ecx */
  EDI = (ECX);
  /* 128268c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128268c8 jb 0x128268f7 */
  if (C.cf) goto L_128268f7;
  /* 128268ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 128268cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 128268cf je 0x128268d9 */
  if (C.zf) goto L_128268d9;
  /* 128268d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_128268d3:;
  /* 128268d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128268d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128268d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128268d7 jne 0x128268d3 */
  if (!C.zf) goto L_128268d3;
L_128268d9:;
  /* 128268d9 mov ecx, eax */
  ECX = (EAX);
  /* 128268db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 128268de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128268e0 mov ecx, eax */
  ECX = (EAX);
  /* 128268e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 128268e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128268e7 mov ecx, edx */
  ECX = (EDX);
  /* 128268e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 128268ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128268ef je 0x128268f7 */
  if (C.zf) goto L_128268f7;
  /* 128268f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128268f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128268f5 je 0x128268fd */
  if (C.zf) goto L_128268fd;
L_128268f7:;
  /* 128268f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128268f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128268fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 128268fb jne 0x128268f7 */
  if (!C.zf) goto L_128268f7;
L_128268fd:;
  /* 128268fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12826901 pop edi */
  EDI = (pop32());
  /* 12826902 ret  */
  ESPCHK(0x128268b0u, _esp0);
  ESP += 4; return;
L_12826903:;
  /* 12826903 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12826907 ret  */
  ESPCHK(0x128268b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x12826910 (23 bytes, 10 insns) */
void f_12826910(void) {
  FTRACE(0x12826910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826910 push ebp */
  push32((uint32_t)(EBP));
  /* 12826911 mov ebp, esp */
  EBP = (ESP);
  /* 12826913 mov eax, dword ptr [0x1284e670] */
  EAX = (r32((uint32_t)(0x1284e670)));
  /* 12826918 push eax */
  push32((uint32_t)(EAX));
  /* 12826919 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282691c push ecx */
  push32((uint32_t)(ECX));
  /* 1282691d call 0x12826930 */
  push32(0x12826922u); f_12826930();
  /* 12826922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826925 pop ebp */
  EBP = (pop32());
  /* 12826926 ret  */
  ESPCHK(0x12826910u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12826930 (87 bytes, 34 insns) */
void f_12826930(void) {
  FTRACE(0x12826930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826930 push ebp */
  push32((uint32_t)(EBP));
  /* 12826931 mov ebp, esp */
  EBP = (ESP);
  /* 12826933 push ecx */
  push32((uint32_t)(ECX));
  /* 12826934 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826938 jbe 0x1282693e */
  if ((C.cf||C.zf)) goto L_1282693e;
  /* 1282693a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282693c jmp 0x12826983 */
  goto L_12826983;
L_1282693e:;
  /* 1282693e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826942 ja 0x12826955 */
  if ((!C.cf&&!C.zf)) goto L_12826955;
  /* 12826944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826947 push eax */
  push32((uint32_t)(EAX));
  /* 12826948 call 0x12826990 */
  push32(0x1282694du); f_12826990();
  /* 1282694d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826950 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12826953 jmp 0x1282695c */
  goto L_1282695c;
L_12826955:;
  /* 12826955 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1282695c:;
  /* 1282695c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826960 jne 0x12826968 */
  if (!C.zf) goto L_12826968;
  /* 12826962 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826966 jne 0x1282696d */
  if (!C.zf) goto L_1282696d;
L_12826968:;
  /* 12826968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282696b jmp 0x12826983 */
  goto L_12826983;
L_1282696d:;
  /* 1282696d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826970 push ecx */
  push32((uint32_t)(ECX));
  /* 12826971 call 0x12826880 */
  push32(0x12826976u); f_12826880();
  /* 12826976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282697b jne 0x12826981 */
  if (!C.zf) goto L_12826981;
  /* 1282697d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282697f jmp 0x12826983 */
  goto L_12826983;
L_12826981:;
  /* 12826981 jmp 0x1282693e */
  goto L_1282693e;
L_12826983:;
  /* 12826983 mov esp, ebp */
  ESP = (EBP);
  /* 12826985 pop ebp */
  EBP = (pop32());
  /* 12826986 ret  */
  ESPCHK(0x12826930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x12826990 (109 bytes, 37 insns) */
void f_12826990(void) {
  FTRACE(0x12826990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826990 push ebp */
  push32((uint32_t)(EBP));
  /* 12826991 mov ebp, esp */
  EBP = (ESP);
  /* 12826993 push ecx */
  push32((uint32_t)(ECX));
  /* 12826994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826997 cmp eax, dword ptr [0x1284cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282699d ja 0x128269cd */
  if ((!C.cf&&!C.zf)) goto L_128269cd;
  /* 1282699f push 9 */
  push32((uint32_t)(0x9u));
  /* 128269a1 call 0x12826540 */
  push32(0x128269a6u); f_12826540();
  /* 128269a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128269a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128269ac push ecx */
  push32((uint32_t)(ECX));
  /* 128269ad call 0x128274d0 */
  push32(0x128269b2u); f_128274d0();
  /* 128269b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128269b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128269b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 128269ba call 0x128265e0 */
  push32(0x128269bfu); f_128265e0();
  /* 128269bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128269c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128269c6 je 0x128269cd */
  if (C.zf) goto L_128269cd;
  /* 128269c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128269cb jmp 0x128269f9 */
  goto L_128269f9;
L_128269cd:;
  /* 128269cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128269d1 jne 0x128269da */
  if (!C.zf) goto L_128269da;
  /* 128269d3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_128269da:;
  /* 128269da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128269dd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128269e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 128269e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128269e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128269e9 push eax */
  push32((uint32_t)(EAX));
  /* 128269ea push 0 */
  push32((uint32_t)(0x0u));
  /* 128269ec mov ecx, dword ptr [0x1284fe2c] */
  ECX = (r32((uint32_t)(0x1284fe2c)));
  /* 128269f2 push ecx */
  push32((uint32_t)(ECX));
  /* 128269f3 call dword ptr [0x12850304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850304))), 0x128269f9u);
L_128269f9:;
  /* 128269f9 mov esp, ebp */
  ESP = (EBP);
  /* 128269fb pop ebp */
  EBP = (pop32());
  /* 128269fc ret  */
  ESPCHK(0x12826990u, _esp0);
  ESP += 4; return;
}

