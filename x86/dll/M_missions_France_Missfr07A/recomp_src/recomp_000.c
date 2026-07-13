#include "recomp.h"

/* thunk_FUN_100034b0 @ 0x10761005 (5 bytes, 1 insns) */
void f_10761005(void) {
  FTRACE(0x10761005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10761005 jmp 0x107634b0 */
  f_107634b0(); return;
}

/* OnInit @ 0x1076100a (5 bytes, 1 insns) */
void f_1076100a(void) {
  FTRACE(0x1076100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076100a jmp 0x107610a0 */
  f_107610a0(); return;
}

/* thunk_FUN_10003500 @ 0x1076100f (5 bytes, 1 insns) */
void f_1076100f(void) {
  FTRACE(0x1076100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076100f jmp 0x10763500 */
  f_10763500(); return;
}

/* thunk_FUN_10001040 @ 0x10761014 (5 bytes, 1 insns) */
void f_10761014(void) {
  FTRACE(0x10761014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10761014 jmp 0x10761040 */
  f_10761040(); return;
}

/* ProcessScenary @ 0x10761019 (5 bytes, 1 insns) */
void f_10761019(void) {
  FTRACE(0x10761019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10761019 jmp 0x10761600 */
  f_10761600(); return;
}

/* FUN_10001040 @ 0x10761040 (67 bytes, 26 insns) */
void f_10761040(void) {
  FTRACE(0x10761040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10761040 push ebp */
  push32((uint32_t)(EBP));
  /* 10761041 mov ebp, esp */
  EBP = (ESP);
  /* 10761043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10761046 push ebx */
  push32((uint32_t)(EBX));
  /* 10761047 push esi */
  push32((uint32_t)(ESI));
  /* 10761048 push edi */
  push32((uint32_t)(EDI));
  /* 10761049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1076104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10761051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10761056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10761058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761062 je 0x10761066 */
  if (C.zf) goto L_10761066;
  /* 10761064 jmp 0x1076106b */
  goto L_1076106b;
L_10761066:;
  /* 10761066 call 0x1076100a */
  push32(0x1076106bu); f_1076100a();
L_1076106b:;
  /* 1076106b mov eax, 1 */
  EAX = (0x1u);
  /* 10761070 pop edi */
  EDI = (pop32());
  /* 10761071 pop esi */
  ESI = (pop32());
  /* 10761072 pop ebx */
  EBX = (pop32());
  /* 10761073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761078 call 0x10763630 */
  push32(0x1076107du); f_10763630();
  /* 1076107d mov esp, ebp */
  ESP = (EBP);
  /* 1076107f pop ebp */
  EBP = (pop32());
  /* 10761080 ret 0xc */
  ESPCHK(0x10761040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x107610a0 (1096 bytes, 285 insns) */
void f_107610a0(void) {
  FTRACE(0x107610a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107610a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107610a1 mov ebp, esp */
  EBP = (ESP);
  /* 107610a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107610a6 push ebx */
  push32((uint32_t)(EBX));
  /* 107610a7 push esi */
  push32((uint32_t)(ESI));
  /* 107610a8 push edi */
  push32((uint32_t)(EDI));
  /* 107610a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107610ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107610b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107610b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107610b8 mov esi, esp */
  ESI = (ESP);
  /* 107610ba push 0x1078b17c */
  push32((uint32_t)(0x1078b17cu));
  /* 107610bf push 0x10790458 */
  push32((uint32_t)(0x10790458u));
  /* 107610c4 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x107610cau);
  /* 107610ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107610cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107610cf call 0x10763630 */
  push32(0x107610d4u); f_10763630();
  /* 107610d4 mov esi, esp */
  ESI = (ESP);
  /* 107610d6 push 0x1078b174 */
  push32((uint32_t)(0x1078b174u));
  /* 107610db push 0x10790460 */
  push32((uint32_t)(0x10790460u));
  /* 107610e0 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x107610e6u);
  /* 107610e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107610e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107610eb call 0x10763630 */
  push32(0x107610f0u); f_10763630();
  /* 107610f0 mov esi, esp */
  ESI = (ESP);
  /* 107610f2 push 0x1078b16c */
  push32((uint32_t)(0x1078b16cu));
  /* 107610f7 push 0x10790468 */
  push32((uint32_t)(0x10790468u));
  /* 107610fc call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x10761102u);
  /* 10761102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761107 call 0x10763630 */
  push32(0x1076110cu); f_10763630();
  /* 1076110c mov esi, esp */
  ESI = (ESP);
  /* 1076110e push 0x1078b164 */
  push32((uint32_t)(0x1078b164u));
  /* 10761113 push 0x10790470 */
  push32((uint32_t)(0x10790470u));
  /* 10761118 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x1076111eu);
  /* 1076111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761123 call 0x10763630 */
  push32(0x10761128u); f_10763630();
  /* 10761128 mov esi, esp */
  ESI = (ESP);
  /* 1076112a push 0x1078b15c */
  push32((uint32_t)(0x1078b15cu));
  /* 1076112f push 0x10790478 */
  push32((uint32_t)(0x10790478u));
  /* 10761134 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x1076113au);
  /* 1076113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076113f call 0x10763630 */
  push32(0x10761144u); f_10763630();
  /* 10761144 mov esi, esp */
  ESI = (ESP);
  /* 10761146 push 0x1078b154 */
  push32((uint32_t)(0x1078b154u));
  /* 1076114b push 0x10790488 */
  push32((uint32_t)(0x10790488u));
  /* 10761150 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x10761156u);
  /* 10761156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076115b call 0x10763630 */
  push32(0x10761160u); f_10763630();
  /* 10761160 mov esi, esp */
  ESI = (ESP);
  /* 10761162 push 0x1078b14c */
  push32((uint32_t)(0x1078b14cu));
  /* 10761167 push 0x10790490 */
  push32((uint32_t)(0x10790490u));
  /* 1076116c call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x10761172u);
  /* 10761172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761177 call 0x10763630 */
  push32(0x1076117cu); f_10763630();
  /* 1076117c mov esi, esp */
  ESI = (ESP);
  /* 1076117e push 0x1078b144 */
  push32((uint32_t)(0x1078b144u));
  /* 10761183 push 0x10790498 */
  push32((uint32_t)(0x10790498u));
  /* 10761188 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x1076118eu);
  /* 1076118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761193 call 0x10763630 */
  push32(0x10761198u); f_10763630();
  /* 10761198 mov esi, esp */
  ESI = (ESP);
  /* 1076119a push 0x1078b13c */
  push32((uint32_t)(0x1078b13cu));
  /* 1076119f push 0x107904a0 */
  push32((uint32_t)(0x107904a0u));
  /* 107611a4 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x107611aau);
  /* 107611aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107611ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107611af call 0x10763630 */
  push32(0x107611b4u); f_10763630();
  /* 107611b4 mov esi, esp */
  ESI = (ESP);
  /* 107611b6 push 0x1078b134 */
  push32((uint32_t)(0x1078b134u));
  /* 107611bb push 0x10790438 */
  push32((uint32_t)(0x10790438u));
  /* 107611c0 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x107611c6u);
  /* 107611c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107611c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107611cb call 0x10763630 */
  push32(0x107611d0u); f_10763630();
  /* 107611d0 mov esi, esp */
  ESI = (ESP);
  /* 107611d2 push 0x1078b12c */
  push32((uint32_t)(0x1078b12cu));
  /* 107611d7 push 0x10790430 */
  push32((uint32_t)(0x10790430u));
  /* 107611dc call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x107611e2u);
  /* 107611e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107611e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107611e7 call 0x10763630 */
  push32(0x107611ecu); f_10763630();
  /* 107611ec mov esi, esp */
  ESI = (ESP);
  /* 107611ee push 0x1078b124 */
  push32((uint32_t)(0x1078b124u));
  /* 107611f3 push 0x10790448 */
  push32((uint32_t)(0x10790448u));
  /* 107611f8 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x107611feu);
  /* 107611fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761203 call 0x10763630 */
  push32(0x10761208u); f_10763630();
  /* 10761208 mov esi, esp */
  ESI = (ESP);
  /* 1076120a push 0x1078b11c */
  push32((uint32_t)(0x1078b11cu));
  /* 1076120f push 0x10790440 */
  push32((uint32_t)(0x10790440u));
  /* 10761214 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x1076121au);
  /* 1076121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076121f call 0x10763630 */
  push32(0x10761224u); f_10763630();
  /* 10761224 mov esi, esp */
  ESI = (ESP);
  /* 10761226 push 0x1078b114 */
  push32((uint32_t)(0x1078b114u));
  /* 1076122b push 0x10790450 */
  push32((uint32_t)(0x10790450u));
  /* 10761230 call dword ptr [0x10793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793490))), 0x10761236u);
  /* 10761236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076123b call 0x10763630 */
  push32(0x10761240u); f_10763630();
  /* 10761240 mov esi, esp */
  ESI = (ESP);
  /* 10761242 push 0x1078b10c */
  push32((uint32_t)(0x1078b10cu));
  /* 10761247 push 0x107903e8 */
  push32((uint32_t)(0x107903e8u));
  /* 1076124c call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x10761252u);
  /* 10761252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761257 call 0x10763630 */
  push32(0x1076125cu); f_10763630();
  /* 1076125c mov esi, esp */
  ESI = (ESP);
  /* 1076125e push 0x1078b104 */
  push32((uint32_t)(0x1078b104u));
  /* 10761263 push 0x107903f8 */
  push32((uint32_t)(0x107903f8u));
  /* 10761268 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x1076126eu);
  /* 1076126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761273 call 0x10763630 */
  push32(0x10761278u); f_10763630();
  /* 10761278 mov esi, esp */
  ESI = (ESP);
  /* 1076127a push 0x1078b0f8 */
  push32((uint32_t)(0x1078b0f8u));
  /* 1076127f push 0x107904e0 */
  push32((uint32_t)(0x107904e0u));
  /* 10761284 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x1076128au);
  /* 1076128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076128f call 0x10763630 */
  push32(0x10761294u); f_10763630();
  /* 10761294 mov esi, esp */
  ESI = (ESP);
  /* 10761296 push 0x1078b0f0 */
  push32((uint32_t)(0x1078b0f0u));
  /* 1076129b push 0x107903f0 */
  push32((uint32_t)(0x107903f0u));
  /* 107612a0 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107612a6u);
  /* 107612a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107612a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107612ab call 0x10763630 */
  push32(0x107612b0u); f_10763630();
  /* 107612b0 mov esi, esp */
  ESI = (ESP);
  /* 107612b2 push 0x1078b0e8 */
  push32((uint32_t)(0x1078b0e8u));
  /* 107612b7 push 0x10790408 */
  push32((uint32_t)(0x10790408u));
  /* 107612bc call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107612c2u);
  /* 107612c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107612c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107612c7 call 0x10763630 */
  push32(0x107612ccu); f_10763630();
  /* 107612cc mov esi, esp */
  ESI = (ESP);
  /* 107612ce push 0x1078b0dc */
  push32((uint32_t)(0x1078b0dcu));
  /* 107612d3 push 0x107904e8 */
  push32((uint32_t)(0x107904e8u));
  /* 107612d8 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107612deu);
  /* 107612de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107612e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107612e3 call 0x10763630 */
  push32(0x107612e8u); f_10763630();
  /* 107612e8 mov esi, esp */
  ESI = (ESP);
  /* 107612ea push 0x1078b0d4 */
  push32((uint32_t)(0x1078b0d4u));
  /* 107612ef push 0x10790400 */
  push32((uint32_t)(0x10790400u));
  /* 107612f4 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107612fau);
  /* 107612fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107612fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107612ff call 0x10763630 */
  push32(0x10761304u); f_10763630();
  /* 10761304 mov esi, esp */
  ESI = (ESP);
  /* 10761306 push 0x1078b0c8 */
  push32((uint32_t)(0x1078b0c8u));
  /* 1076130b push 0x107904f0 */
  push32((uint32_t)(0x107904f0u));
  /* 10761310 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x10761316u);
  /* 10761316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076131b call 0x10763630 */
  push32(0x10761320u); f_10763630();
  /* 10761320 mov esi, esp */
  ESI = (ESP);
  /* 10761322 push 0x1078b0c0 */
  push32((uint32_t)(0x1078b0c0u));
  /* 10761327 push 0x10790418 */
  push32((uint32_t)(0x10790418u));
  /* 1076132c call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x10761332u);
  /* 10761332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761337 call 0x10763630 */
  push32(0x1076133cu); f_10763630();
  /* 1076133c mov esi, esp */
  ESI = (ESP);
  /* 1076133e push 0x1078b0b8 */
  push32((uint32_t)(0x1078b0b8u));
  /* 10761343 push 0x10790410 */
  push32((uint32_t)(0x10790410u));
  /* 10761348 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x1076134eu);
  /* 1076134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761353 call 0x10763630 */
  push32(0x10761358u); f_10763630();
  /* 10761358 mov esi, esp */
  ESI = (ESP);
  /* 1076135a push 0x1078b0b0 */
  push32((uint32_t)(0x1078b0b0u));
  /* 1076135f push 0x10790428 */
  push32((uint32_t)(0x10790428u));
  /* 10761364 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x1076136au);
  /* 1076136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076136f call 0x10763630 */
  push32(0x10761374u); f_10763630();
  /* 10761374 mov esi, esp */
  ESI = (ESP);
  /* 10761376 push 0x1078b0a8 */
  push32((uint32_t)(0x1078b0a8u));
  /* 1076137b push 0x10790420 */
  push32((uint32_t)(0x10790420u));
  /* 10761380 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x10761386u);
  /* 10761386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076138b call 0x10763630 */
  push32(0x10761390u); f_10763630();
  /* 10761390 mov esi, esp */
  ESI = (ESP);
  /* 10761392 push 0x1078b09c */
  push32((uint32_t)(0x1078b09cu));
  /* 10761397 push 0x107904a8 */
  push32((uint32_t)(0x107904a8u));
  /* 1076139c call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107613a2u);
  /* 107613a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107613a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107613a7 call 0x10763630 */
  push32(0x107613acu); f_10763630();
  /* 107613ac mov esi, esp */
  ESI = (ESP);
  /* 107613ae push 0x1078b090 */
  push32((uint32_t)(0x1078b090u));
  /* 107613b3 push 0x107904d0 */
  push32((uint32_t)(0x107904d0u));
  /* 107613b8 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107613beu);
  /* 107613be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107613c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107613c3 call 0x10763630 */
  push32(0x107613c8u); f_10763630();
  /* 107613c8 mov esi, esp */
  ESI = (ESP);
  /* 107613ca push 0x1078b084 */
  push32((uint32_t)(0x1078b084u));
  /* 107613cf push 0x107904d8 */
  push32((uint32_t)(0x107904d8u));
  /* 107613d4 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107613dau);
  /* 107613da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107613dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107613df call 0x10763630 */
  push32(0x107613e4u); f_10763630();
  /* 107613e4 mov esi, esp */
  ESI = (ESP);
  /* 107613e6 push 0x1078b078 */
  push32((uint32_t)(0x1078b078u));
  /* 107613eb push 0x107904c0 */
  push32((uint32_t)(0x107904c0u));
  /* 107613f0 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x107613f6u);
  /* 107613f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107613f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107613fb call 0x10763630 */
  push32(0x10761400u); f_10763630();
  /* 10761400 mov esi, esp */
  ESI = (ESP);
  /* 10761402 push 0x1078b06c */
  push32((uint32_t)(0x1078b06cu));
  /* 10761407 push 0x107904c8 */
  push32((uint32_t)(0x107904c8u));
  /* 1076140c call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x10761412u);
  /* 10761412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761417 call 0x10763630 */
  push32(0x1076141cu); f_10763630();
  /* 1076141c mov esi, esp */
  ESI = (ESP);
  /* 1076141e push 0x1078b060 */
  push32((uint32_t)(0x1078b060u));
  /* 10761423 push 0x107904b8 */
  push32((uint32_t)(0x107904b8u));
  /* 10761428 call dword ptr [0x10793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793494))), 0x1076142eu);
  /* 1076142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761433 call 0x10763630 */
  push32(0x10761438u); f_10763630();
  /* 10761438 mov esi, esp */
  ESI = (ESP);
  /* 1076143a push 8 */
  push32((uint32_t)(0x8u));
  /* 1076143c push 0x107904b0 */
  push32((uint32_t)(0x107904b0u));
  /* 10761441 call dword ptr [0x1079348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079348c))), 0x10761447u);
  /* 10761447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076144a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076144c call 0x10763630 */
  push32(0x10761451u); f_10763630();
  /* 10761451 mov esi, esp */
  ESI = (ESP);
  /* 10761453 push 0x1078b050 */
  push32((uint32_t)(0x1078b050u));
  /* 10761458 push 0x107904f8 */
  push32((uint32_t)(0x107904f8u));
  /* 1076145d call dword ptr [0x1079349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079349c))), 0x10761463u);
  /* 10761463 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761466 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761468 call 0x10763630 */
  push32(0x1076146du); f_10763630();
  /* 1076146d mov esi, esp */
  ESI = (ESP);
  /* 1076146f push 0x1078b03c */
  push32((uint32_t)(0x1078b03cu));
  /* 10761474 push 0x107903e0 */
  push32((uint32_t)(0x107903e0u));
  /* 10761479 call dword ptr [0x1079349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079349c))), 0x1076147fu);
  /* 1076147f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761482 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761484 call 0x10763630 */
  push32(0x10761489u); f_10763630();
  /* 10761489 mov esi, esp */
  ESI = (ESP);
  /* 1076148b push 0x1078b02c */
  push32((uint32_t)(0x1078b02cu));
  /* 10761490 push 0x10790480 */
  push32((uint32_t)(0x10790480u));
  /* 10761495 call dword ptr [0x107934a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107934a0))), 0x1076149bu);
  /* 1076149b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076149e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107614a0 call 0x10763630 */
  push32(0x107614a5u); f_10763630();
  /* 107614a5 mov esi, esp */
  ESI = (ESP);
  /* 107614a7 push 0x1078b024 */
  push32((uint32_t)(0x1078b024u));
  /* 107614ac push 1 */
  push32((uint32_t)(0x1u));
  /* 107614ae call dword ptr [0x10793498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793498))), 0x107614b4u);
  /* 107614b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107614b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107614b9 call 0x10763630 */
  push32(0x107614beu); f_10763630();
  /* 107614be mov esi, esp */
  ESI = (ESP);
  /* 107614c0 push 0x1078b01c */
  push32((uint32_t)(0x1078b01cu));
  /* 107614c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 107614c7 call dword ptr [0x10793498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793498))), 0x107614cdu);
  /* 107614cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107614d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107614d2 call 0x10763630 */
  push32(0x107614d7u); f_10763630();
  /* 107614d7 pop edi */
  EDI = (pop32());
  /* 107614d8 pop esi */
  ESI = (pop32());
  /* 107614d9 pop ebx */
  EBX = (pop32());
  /* 107614da add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107614dd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107614df call 0x10763630 */
  push32(0x107614e4u); f_10763630();
  /* 107614e4 mov esp, ebp */
  ESP = (EBP);
  /* 107614e6 pop ebp */
  EBP = (pop32());
  /* 107614e7 ret  */
  ESPCHK(0x107610a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001600 @ 0x10761600 (6276 bytes, 1837 insns) */
void f_10761600(void) {
  FTRACE(0x10761600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10761600 push ebp */
  push32((uint32_t)(EBP));
  /* 10761601 mov ebp, esp */
  EBP = (ESP);
  /* 10761603 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10761606 push ebx */
  push32((uint32_t)(EBX));
  /* 10761607 push esi */
  push32((uint32_t)(ESI));
  /* 10761608 push edi */
  push32((uint32_t)(EDI));
  /* 10761609 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1076160c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10761611 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10761616 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10761618 mov esi, esp */
  ESI = (ESP);
  /* 1076161a push 1 */
  push32((uint32_t)(0x1u));
  /* 1076161c call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761622u);
  /* 10761622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761627 call 0x10763630 */
  push32(0x1076162cu); f_10763630();
  /* 1076162c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761633 je 0x1076180a */
  if (C.zf) goto L_1076180a;
  /* 10761639 mov esi, esp */
  ESI = (ESP);
  /* 1076163b push 0 */
  push32((uint32_t)(0x0u));
  /* 1076163d push 1 */
  push32((uint32_t)(0x1u));
  /* 1076163f call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761645u);
  /* 10761645 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761648 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076164a call 0x10763630 */
  push32(0x1076164fu); f_10763630();
  /* 1076164f mov esi, esp */
  ESI = (ESP);
  /* 10761651 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10761653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761655 call dword ptr [0x10793420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793420))), 0x1076165bu);
  /* 1076165b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076165e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761660 call 0x10763630 */
  push32(0x10761665u); f_10763630();
  /* 10761665 mov esi, esp */
  ESI = (ESP);
  /* 10761667 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10761669 push 4 */
  push32((uint32_t)(0x4u));
  /* 1076166b call dword ptr [0x10793420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793420))), 0x10761671u);
  /* 10761671 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761674 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761676 call 0x10763630 */
  push32(0x1076167bu); f_10763630();
  /* 1076167b mov esi, esp */
  ESI = (ESP);
  /* 1076167d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10761682 push 3 */
  push32((uint32_t)(0x3u));
  /* 10761684 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761686 call dword ptr [0x10793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793430))), 0x1076168cu);
  /* 1076168c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076168f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761691 call 0x10763630 */
  push32(0x10761696u); f_10763630();
  /* 10761696 mov esi, esp */
  ESI = (ESP);
  /* 10761698 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1076169d push 1 */
  push32((uint32_t)(0x1u));
  /* 1076169f push 0 */
  push32((uint32_t)(0x0u));
  /* 107616a1 call dword ptr [0x10793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793430))), 0x107616a7u);
  /* 107616a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107616aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107616ac call 0x10763630 */
  push32(0x107616b1u); f_10763630();
  /* 107616b1 mov esi, esp */
  ESI = (ESP);
  /* 107616b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107616b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107616b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107616b9 call dword ptr [0x10793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793430))), 0x107616bfu);
  /* 107616bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107616c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107616c4 call 0x10763630 */
  push32(0x107616c9u); f_10763630();
  /* 107616c9 mov esi, esp */
  ESI = (ESP);
  /* 107616cb push 0 */
  push32((uint32_t)(0x0u));
  /* 107616cd push 2 */
  push32((uint32_t)(0x2u));
  /* 107616cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107616d1 call dword ptr [0x10793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793430))), 0x107616d7u);
  /* 107616d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107616da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107616dc call 0x10763630 */
  push32(0x107616e1u); f_10763630();
  /* 107616e1 mov esi, esp */
  ESI = (ESP);
  /* 107616e3 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 107616e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 107616ea push 0 */
  push32((uint32_t)(0x0u));
  /* 107616ec call dword ptr [0x10793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793430))), 0x107616f2u);
  /* 107616f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107616f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107616f7 call 0x10763630 */
  push32(0x107616fcu); f_10763630();
  /* 107616fc mov esi, esp */
  ESI = (ESP);
  /* 107616fe push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10761703 push 4 */
  push32((uint32_t)(0x4u));
  /* 10761705 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761707 call dword ptr [0x10793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793430))), 0x1076170du);
  /* 1076170d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761710 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761712 call 0x10763630 */
  push32(0x10761717u); f_10763630();
  /* 10761717 mov esi, esp */
  ESI = (ESP);
  /* 10761719 push 0x1078b260 */
  push32((uint32_t)(0x1078b260u));
  /* 1076171e call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10761724u);
  /* 10761724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761729 call 0x10763630 */
  push32(0x1076172eu); f_10763630();
  /* 1076172e mov esi, esp */
  ESI = (ESP);
  /* 10761730 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10761732 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761738u);
  /* 10761738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076173b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076173d call 0x10763630 */
  push32(0x10761742u); f_10763630();
  /* 10761742 mov esi, esp */
  ESI = (ESP);
  /* 10761744 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10761746 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x1076174cu);
  /* 1076174c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076174f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761751 call 0x10763630 */
  push32(0x10761756u); f_10763630();
  /* 10761756 mov esi, esp */
  ESI = (ESP);
  /* 10761758 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1076175a call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761760u);
  /* 10761760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761763 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761765 call 0x10763630 */
  push32(0x1076176au); f_10763630();
  /* 1076176a mov esi, esp */
  ESI = (ESP);
  /* 1076176c push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1076176e call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761774u);
  /* 10761774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761777 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761779 call 0x10763630 */
  push32(0x1076177eu); f_10763630();
  /* 1076177e mov esi, esp */
  ESI = (ESP);
  /* 10761780 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10761782 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761788u);
  /* 10761788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076178b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076178d call 0x10763630 */
  push32(0x10761792u); f_10763630();
  /* 10761792 mov esi, esp */
  ESI = (ESP);
  /* 10761794 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10761796 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x1076179cu);
  /* 1076179c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076179f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107617a1 call 0x10763630 */
  push32(0x107617a6u); f_10763630();
  /* 107617a6 mov esi, esp */
  ESI = (ESP);
  /* 107617a8 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 107617aa call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x107617b0u);
  /* 107617b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107617b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107617b5 call 0x10763630 */
  push32(0x107617bau); f_10763630();
  /* 107617ba mov esi, esp */
  ESI = (ESP);
  /* 107617bc push 0x4a */
  push32((uint32_t)(0x4au));
  /* 107617be call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x107617c4u);
  /* 107617c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107617c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107617c9 call 0x10763630 */
  push32(0x107617ceu); f_10763630();
  /* 107617ce mov esi, esp */
  ESI = (ESP);
  /* 107617d0 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 107617d2 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x107617d8u);
  /* 107617d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107617db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107617dd call 0x10763630 */
  push32(0x107617e2u); f_10763630();
  /* 107617e2 mov esi, esp */
  ESI = (ESP);
  /* 107617e4 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 107617e6 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x107617ecu);
  /* 107617ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107617ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107617f1 call 0x10763630 */
  push32(0x107617f6u); f_10763630();
  /* 107617f6 mov esi, esp */
  ESI = (ESP);
  /* 107617f8 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 107617fa call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761800u);
  /* 10761800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761803 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761805 call 0x10763630 */
  push32(0x1076180au); f_10763630();
L_1076180a:;
  /* 1076180a mov esi, esp */
  ESI = (ESP);
  /* 1076180c push 2 */
  push32((uint32_t)(0x2u));
  /* 1076180e call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761814u);
  /* 10761814 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761819 call 0x10763630 */
  push32(0x1076181eu); f_10763630();
  /* 1076181e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761823 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761825 je 0x107618d3 */
  if (C.zf) goto L_107618d3;
  /* 1076182b mov esi, esp */
  ESI = (ESP);
  /* 1076182d push 0x107903e8 */
  push32((uint32_t)(0x107903e8u));
  /* 10761832 push 0x10790458 */
  push32((uint32_t)(0x10790458u));
  /* 10761837 call dword ptr [0x1079343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079343c))), 0x1076183du);
  /* 1076183d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761840 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761842 call 0x10763630 */
  push32(0x10761847u); f_10763630();
  /* 10761847 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761849 jle 0x107618d3 */
  if ((C.zf||C.sf!=C.of)) goto L_107618d3;
  /* 1076184f mov esi, esp */
  ESI = (ESP);
  /* 10761851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761853 push 2 */
  push32((uint32_t)(0x2u));
  /* 10761855 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x1076185bu);
  /* 1076185b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076185e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761860 call 0x10763630 */
  push32(0x10761865u); f_10763630();
  /* 10761865 mov esi, esp */
  ESI = (ESP);
  /* 10761867 push 0x1078b258 */
  push32((uint32_t)(0x1078b258u));
  /* 1076186c call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10761872u);
  /* 10761872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761877 call 0x10763630 */
  push32(0x1076187cu); f_10763630();
  /* 1076187c mov esi, esp */
  ESI = (ESP);
  /* 1076187e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10761880 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10761886u);
  /* 10761886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076188b call 0x10763630 */
  push32(0x10761890u); f_10763630();
  /* 10761890 mov esi, esp */
  ESI = (ESP);
  /* 10761892 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10761894 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x1076189au);
  /* 1076189a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076189d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076189f call 0x10763630 */
  push32(0x107618a4u); f_10763630();
  /* 107618a4 mov esi, esp */
  ESI = (ESP);
  /* 107618a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107618a8 push 0x107903f8 */
  push32((uint32_t)(0x107903f8u));
  /* 107618ad call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x107618b3u);
  /* 107618b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107618b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107618b8 call 0x10763630 */
  push32(0x107618bdu); f_10763630();
  /* 107618bd mov esi, esp */
  ESI = (ESP);
  /* 107618bf push 0 */
  push32((uint32_t)(0x0u));
  /* 107618c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 107618c3 call dword ptr [0x10793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793448))), 0x107618c9u);
  /* 107618c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107618cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107618ce call 0x10763630 */
  push32(0x107618d3u); f_10763630();
L_107618d3:;
  /* 107618d3 mov esi, esp */
  ESI = (ESP);
  /* 107618d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 107618d7 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107618ddu);
  /* 107618dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107618e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107618e2 call 0x10763630 */
  push32(0x107618e7u); f_10763630();
  /* 107618e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107618ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107618ee je 0x10761950 */
  if (C.zf) goto L_10761950;
  /* 107618f0 mov esi, esp */
  ESI = (ESP);
  /* 107618f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107618f4 push 0x10790438 */
  push32((uint32_t)(0x10790438u));
  /* 107618f9 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x107618ffu);
  /* 107618ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761902 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761904 call 0x10763630 */
  push32(0x10761909u); f_10763630();
  /* 10761909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076190b jle 0x10761950 */
  if ((C.zf||C.sf!=C.of)) goto L_10761950;
  /* 1076190d mov esi, esp */
  ESI = (ESP);
  /* 1076190f push 0 */
  push32((uint32_t)(0x0u));
  /* 10761911 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10761913 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761919u);
  /* 10761919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076191c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076191e call 0x10763630 */
  push32(0x10761923u); f_10763630();
  /* 10761923 mov esi, esp */
  ESI = (ESP);
  /* 10761925 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761927 push 0x107904a8 */
  push32((uint32_t)(0x107904a8u));
  /* 1076192c call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10761932u);
  /* 10761932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761937 call 0x10763630 */
  push32(0x1076193cu); f_10763630();
  /* 1076193c mov esi, esp */
  ESI = (ESP);
  /* 1076193e push 5 */
  push32((uint32_t)(0x5u));
  /* 10761940 call dword ptr [0x10793444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793444))), 0x10761946u);
  /* 10761946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076194b call 0x10763630 */
  push32(0x10761950u); f_10763630();
L_10761950:;
  /* 10761950 mov esi, esp */
  ESI = (ESP);
  /* 10761952 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10761954 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076195au);
  /* 1076195a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076195d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076195f call 0x10763630 */
  push32(0x10761964u); f_10763630();
  /* 10761964 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076196b jne 0x107619cd */
  if (!C.zf) goto L_107619cd;
  /* 1076196d mov esi, esp */
  ESI = (ESP);
  /* 1076196f push 0 */
  push32((uint32_t)(0x0u));
  /* 10761971 push 0x10790438 */
  push32((uint32_t)(0x10790438u));
  /* 10761976 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x1076197cu);
  /* 1076197c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076197f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761981 call 0x10763630 */
  push32(0x10761986u); f_10763630();
  /* 10761986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761988 jne 0x107619cd */
  if (!C.zf) goto L_107619cd;
  /* 1076198a mov esi, esp */
  ESI = (ESP);
  /* 1076198c push 1 */
  push32((uint32_t)(0x1u));
  /* 1076198e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10761990 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761996u);
  /* 10761996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076199b call 0x10763630 */
  push32(0x107619a0u); f_10763630();
  /* 107619a0 mov esi, esp */
  ESI = (ESP);
  /* 107619a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107619a4 push 0x107904a8 */
  push32((uint32_t)(0x107904a8u));
  /* 107619a9 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x107619afu);
  /* 107619af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107619b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107619b4 call 0x10763630 */
  push32(0x107619b9u); f_10763630();
  /* 107619b9 mov esi, esp */
  ESI = (ESP);
  /* 107619bb push 5 */
  push32((uint32_t)(0x5u));
  /* 107619bd call dword ptr [0x10793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793454))), 0x107619c3u);
  /* 107619c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107619c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107619c8 call 0x10763630 */
  push32(0x107619cdu); f_10763630();
L_107619cd:;
  /* 107619cd mov esi, esp */
  ESI = (ESP);
  /* 107619cf push 0x29 */
  push32((uint32_t)(0x29u));
  /* 107619d1 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107619d7u);
  /* 107619d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107619da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107619dc call 0x10763630 */
  push32(0x107619e1u); f_10763630();
  /* 107619e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107619e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107619e8 je 0x10761a4a */
  if (C.zf) goto L_10761a4a;
  /* 107619ea mov esi, esp */
  ESI = (ESP);
  /* 107619ec push 0 */
  push32((uint32_t)(0x0u));
  /* 107619ee push 0x10790430 */
  push32((uint32_t)(0x10790430u));
  /* 107619f3 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x107619f9u);
  /* 107619f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107619fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107619fe call 0x10763630 */
  push32(0x10761a03u); f_10763630();
  /* 10761a03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761a05 jle 0x10761a4a */
  if ((C.zf||C.sf!=C.of)) goto L_10761a4a;
  /* 10761a07 mov esi, esp */
  ESI = (ESP);
  /* 10761a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761a0b push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10761a0d call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761a13u);
  /* 10761a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761a16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761a18 call 0x10763630 */
  push32(0x10761a1du); f_10763630();
  /* 10761a1d mov esi, esp */
  ESI = (ESP);
  /* 10761a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10761a21 push 0x107904d0 */
  push32((uint32_t)(0x107904d0u));
  /* 10761a26 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10761a2cu);
  /* 10761a2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761a2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761a31 call 0x10763630 */
  push32(0x10761a36u); f_10763630();
  /* 10761a36 mov esi, esp */
  ESI = (ESP);
  /* 10761a38 push 5 */
  push32((uint32_t)(0x5u));
  /* 10761a3a call dword ptr [0x10793444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793444))), 0x10761a40u);
  /* 10761a40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761a43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761a45 call 0x10763630 */
  push32(0x10761a4au); f_10763630();
L_10761a4a:;
  /* 10761a4a mov esi, esp */
  ESI = (ESP);
  /* 10761a4c push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10761a4e call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761a54u);
  /* 10761a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761a57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761a59 call 0x10763630 */
  push32(0x10761a5eu); f_10763630();
  /* 10761a5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761a63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761a65 jne 0x10761ac7 */
  if (!C.zf) goto L_10761ac7;
  /* 10761a67 mov esi, esp */
  ESI = (ESP);
  /* 10761a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761a6b push 0x10790430 */
  push32((uint32_t)(0x10790430u));
  /* 10761a70 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10761a76u);
  /* 10761a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761a7b call 0x10763630 */
  push32(0x10761a80u); f_10763630();
  /* 10761a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761a82 jne 0x10761ac7 */
  if (!C.zf) goto L_10761ac7;
  /* 10761a84 mov esi, esp */
  ESI = (ESP);
  /* 10761a86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10761a88 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10761a8a call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761a90u);
  /* 10761a90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761a93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761a95 call 0x10763630 */
  push32(0x10761a9au); f_10763630();
  /* 10761a9a mov esi, esp */
  ESI = (ESP);
  /* 10761a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10761a9e push 0x107904d0 */
  push32((uint32_t)(0x107904d0u));
  /* 10761aa3 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10761aa9u);
  /* 10761aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761aac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761aae call 0x10763630 */
  push32(0x10761ab3u); f_10763630();
  /* 10761ab3 mov esi, esp */
  ESI = (ESP);
  /* 10761ab5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10761ab7 call dword ptr [0x10793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793454))), 0x10761abdu);
  /* 10761abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ac0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761ac2 call 0x10763630 */
  push32(0x10761ac7u); f_10763630();
L_10761ac7:;
  /* 10761ac7 mov esi, esp */
  ESI = (ESP);
  /* 10761ac9 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10761acb call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761ad1u);
  /* 10761ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761ad6 call 0x10763630 */
  push32(0x10761adbu); f_10763630();
  /* 10761adb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761ae2 je 0x10761b44 */
  if (C.zf) goto L_10761b44;
  /* 10761ae4 mov esi, esp */
  ESI = (ESP);
  /* 10761ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761ae8 push 0x10790448 */
  push32((uint32_t)(0x10790448u));
  /* 10761aed call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10761af3u);
  /* 10761af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761af8 call 0x10763630 */
  push32(0x10761afdu); f_10763630();
  /* 10761afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761aff jle 0x10761b44 */
  if ((C.zf||C.sf!=C.of)) goto L_10761b44;
  /* 10761b01 mov esi, esp */
  ESI = (ESP);
  /* 10761b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761b05 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10761b07 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761b0du);
  /* 10761b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761b12 call 0x10763630 */
  push32(0x10761b17u); f_10763630();
  /* 10761b17 mov esi, esp */
  ESI = (ESP);
  /* 10761b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761b1b push 0x107904d8 */
  push32((uint32_t)(0x107904d8u));
  /* 10761b20 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10761b26u);
  /* 10761b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761b29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761b2b call 0x10763630 */
  push32(0x10761b30u); f_10763630();
  /* 10761b30 mov esi, esp */
  ESI = (ESP);
  /* 10761b32 push 5 */
  push32((uint32_t)(0x5u));
  /* 10761b34 call dword ptr [0x10793444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793444))), 0x10761b3au);
  /* 10761b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761b3f call 0x10763630 */
  push32(0x10761b44u); f_10763630();
L_10761b44:;
  /* 10761b44 mov esi, esp */
  ESI = (ESP);
  /* 10761b46 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10761b48 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761b4eu);
  /* 10761b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761b51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761b53 call 0x10763630 */
  push32(0x10761b58u); f_10763630();
  /* 10761b58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761b5f jne 0x10761bc1 */
  if (!C.zf) goto L_10761bc1;
  /* 10761b61 mov esi, esp */
  ESI = (ESP);
  /* 10761b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761b65 push 0x10790448 */
  push32((uint32_t)(0x10790448u));
  /* 10761b6a call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10761b70u);
  /* 10761b70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761b73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761b75 call 0x10763630 */
  push32(0x10761b7au); f_10763630();
  /* 10761b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761b7c jne 0x10761bc1 */
  if (!C.zf) goto L_10761bc1;
  /* 10761b7e mov esi, esp */
  ESI = (ESP);
  /* 10761b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10761b82 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10761b84 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761b8au);
  /* 10761b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761b8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761b8f call 0x10763630 */
  push32(0x10761b94u); f_10763630();
  /* 10761b94 mov esi, esp */
  ESI = (ESP);
  /* 10761b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761b98 push 0x107904d8 */
  push32((uint32_t)(0x107904d8u));
  /* 10761b9d call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10761ba3u);
  /* 10761ba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761ba8 call 0x10763630 */
  push32(0x10761badu); f_10763630();
  /* 10761bad mov esi, esp */
  ESI = (ESP);
  /* 10761baf push 5 */
  push32((uint32_t)(0x5u));
  /* 10761bb1 call dword ptr [0x10793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793454))), 0x10761bb7u);
  /* 10761bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761bba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761bbc call 0x10763630 */
  push32(0x10761bc1u); f_10763630();
L_10761bc1:;
  /* 10761bc1 mov esi, esp */
  ESI = (ESP);
  /* 10761bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761bc5 push 0x10790468 */
  push32((uint32_t)(0x10790468u));
  /* 10761bca call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10761bd0u);
  /* 10761bd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761bd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761bd5 call 0x10763630 */
  push32(0x10761bdau); f_10763630();
  /* 10761bda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761bdc jle 0x10761c0d */
  if ((C.zf||C.sf!=C.of)) goto L_10761c0d;
  /* 10761bde push 0x107903f0 */
  push32((uint32_t)(0x107903f0u));
  /* 10761be3 call 0x10761005 */
  push32(0x10761be8u); f_10761005();
  /* 10761be8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761beb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761bed jle 0x10761c0d */
  if ((C.zf||C.sf!=C.of)) goto L_10761c0d;
  /* 10761bef mov esi, esp */
  ESI = (ESP);
  /* 10761bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761bf3 push 0x10790468 */
  push32((uint32_t)(0x10790468u));
  /* 10761bf8 push 0x107903f0 */
  push32((uint32_t)(0x107903f0u));
  /* 10761bfd call dword ptr [0x10793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793458))), 0x10761c03u);
  /* 10761c03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761c06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761c08 call 0x10763630 */
  push32(0x10761c0du); f_10763630();
L_10761c0d:;
  /* 10761c0d mov esi, esp */
  ESI = (ESP);
  /* 10761c0f push 3 */
  push32((uint32_t)(0x3u));
  /* 10761c11 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761c17u);
  /* 10761c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761c1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761c1c call 0x10763630 */
  push32(0x10761c21u); f_10763630();
  /* 10761c21 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761c28 je 0x10761caf */
  if (C.zf) goto L_10761caf;
  /* 10761c2e push 0x107903f0 */
  push32((uint32_t)(0x107903f0u));
  /* 10761c33 call 0x10761005 */
  push32(0x10761c38u); f_10761005();
  /* 10761c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761c3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761c3d jne 0x10761caf */
  if (!C.zf) goto L_10761caf;
  /* 10761c3f mov esi, esp */
  ESI = (ESP);
  /* 10761c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761c43 push 3 */
  push32((uint32_t)(0x3u));
  /* 10761c45 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761c4bu);
  /* 10761c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761c4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761c50 call 0x10763630 */
  push32(0x10761c55u); f_10763630();
  /* 10761c55 mov esi, esp */
  ESI = (ESP);
  /* 10761c57 push 0x1078b250 */
  push32((uint32_t)(0x1078b250u));
  /* 10761c5c call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10761c62u);
  /* 10761c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761c65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761c67 call 0x10763630 */
  push32(0x10761c6cu); f_10763630();
  /* 10761c6c mov esi, esp */
  ESI = (ESP);
  /* 10761c6e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10761c70 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761c76u);
  /* 10761c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761c7b call 0x10763630 */
  push32(0x10761c80u); f_10763630();
  /* 10761c80 mov esi, esp */
  ESI = (ESP);
  /* 10761c82 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10761c84 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10761c8au);
  /* 10761c8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761c8f call 0x10763630 */
  push32(0x10761c94u); f_10763630();
  /* 10761c94 mov esi, esp */
  ESI = (ESP);
  /* 10761c96 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10761c9b push 3 */
  push32((uint32_t)(0x3u));
  /* 10761c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10761c9f call dword ptr [0x10793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793450))), 0x10761ca5u);
  /* 10761ca5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761caa call 0x10763630 */
  push32(0x10761cafu); f_10763630();
L_10761caf:;
  /* 10761caf mov esi, esp */
  ESI = (ESP);
  /* 10761cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761cb3 push 0x10790470 */
  push32((uint32_t)(0x10790470u));
  /* 10761cb8 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10761cbeu);
  /* 10761cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761cc3 call 0x10763630 */
  push32(0x10761cc8u); f_10763630();
  /* 10761cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761cca jle 0x10761cfb */
  if ((C.zf||C.sf!=C.of)) goto L_10761cfb;
  /* 10761ccc push 0x10790408 */
  push32((uint32_t)(0x10790408u));
  /* 10761cd1 call 0x10761005 */
  push32(0x10761cd6u); f_10761005();
  /* 10761cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761cdb jle 0x10761cfb */
  if ((C.zf||C.sf!=C.of)) goto L_10761cfb;
  /* 10761cdd mov esi, esp */
  ESI = (ESP);
  /* 10761cdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10761ce1 push 0x10790470 */
  push32((uint32_t)(0x10790470u));
  /* 10761ce6 push 0x10790408 */
  push32((uint32_t)(0x10790408u));
  /* 10761ceb call dword ptr [0x10793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793458))), 0x10761cf1u);
  /* 10761cf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761cf6 call 0x10763630 */
  push32(0x10761cfbu); f_10763630();
L_10761cfb:;
  /* 10761cfb mov esi, esp */
  ESI = (ESP);
  /* 10761cfd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10761cff call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761d05u);
  /* 10761d05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761d08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761d0a call 0x10763630 */
  push32(0x10761d0fu); f_10763630();
  /* 10761d0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761d16 je 0x10761dce */
  if (C.zf) goto L_10761dce;
  /* 10761d1c push 0x10790408 */
  push32((uint32_t)(0x10790408u));
  /* 10761d21 call 0x10761005 */
  push32(0x10761d26u); f_10761005();
  /* 10761d26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761d29 cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761d2c jge 0x10761dce */
  if ((C.sf==C.of)) goto L_10761dce;
  /* 10761d32 mov esi, esp */
  ESI = (ESP);
  /* 10761d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761d36 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10761d38 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761d3eu);
  /* 10761d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761d41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761d43 call 0x10763630 */
  push32(0x10761d48u); f_10763630();
  /* 10761d48 mov esi, esp */
  ESI = (ESP);
  /* 10761d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10761d4c call dword ptr [0x10793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793460))), 0x10761d52u);
  /* 10761d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761d55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761d57 call 0x10763630 */
  push32(0x10761d5cu); f_10763630();
  /* 10761d5c mov esi, esp */
  ESI = (ESP);
  /* 10761d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10761d60 push 0x107904e8 */
  push32((uint32_t)(0x107904e8u));
  /* 10761d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 10761d67 call dword ptr [0x10793464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793464))), 0x10761d6du);
  /* 10761d6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761d72 call 0x10763630 */
  push32(0x10761d77u); f_10763630();
  /* 10761d77 mov esi, esp */
  ESI = (ESP);
  /* 10761d79 push 1 */
  push32((uint32_t)(0x1u));
  /* 10761d7b call dword ptr [0x1079345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079345c))), 0x10761d81u);
  /* 10761d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761d86 call 0x10763630 */
  push32(0x10761d8bu); f_10763630();
  /* 10761d8b mov esi, esp */
  ESI = (ESP);
  /* 10761d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10761d8f call dword ptr [0x10793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793460))), 0x10761d95u);
  /* 10761d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761d9a call 0x10763630 */
  push32(0x10761d9fu); f_10763630();
  /* 10761d9f mov esi, esp */
  ESI = (ESP);
  /* 10761da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761da3 push 0x107904e8 */
  push32((uint32_t)(0x107904e8u));
  /* 10761da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761daa call dword ptr [0x10793464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793464))), 0x10761db0u);
  /* 10761db0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761db5 call 0x10763630 */
  push32(0x10761dbau); f_10763630();
  /* 10761dba mov esi, esp */
  ESI = (ESP);
  /* 10761dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10761dbe call dword ptr [0x1079345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079345c))), 0x10761dc4u);
  /* 10761dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761dc9 call 0x10763630 */
  push32(0x10761dceu); f_10763630();
L_10761dce:;
  /* 10761dce mov esi, esp */
  ESI = (ESP);
  /* 10761dd0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10761dd2 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761dd8u);
  /* 10761dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ddb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761ddd call 0x10763630 */
  push32(0x10761de2u); f_10763630();
  /* 10761de2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761de9 je 0x10761e51 */
  if (C.zf) goto L_10761e51;
  /* 10761deb push 0x10790408 */
  push32((uint32_t)(0x10790408u));
  /* 10761df0 call 0x10761005 */
  push32(0x10761df5u); f_10761005();
  /* 10761df5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761dfa jne 0x10761e51 */
  if (!C.zf) goto L_10761e51;
  /* 10761dfc mov esi, esp */
  ESI = (ESP);
  /* 10761dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10761e00 push 4 */
  push32((uint32_t)(0x4u));
  /* 10761e02 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761e08u);
  /* 10761e08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761e0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761e0d call 0x10763630 */
  push32(0x10761e12u); f_10763630();
  /* 10761e12 mov esi, esp */
  ESI = (ESP);
  /* 10761e14 push 0x1078b248 */
  push32((uint32_t)(0x1078b248u));
  /* 10761e19 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10761e1fu);
  /* 10761e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761e24 call 0x10763630 */
  push32(0x10761e29u); f_10763630();
  /* 10761e29 mov esi, esp */
  ESI = (ESP);
  /* 10761e2b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10761e2d call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761e33u);
  /* 10761e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761e36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761e38 call 0x10763630 */
  push32(0x10761e3du); f_10763630();
  /* 10761e3d mov esi, esp */
  ESI = (ESP);
  /* 10761e3f push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10761e41 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10761e47u);
  /* 10761e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761e4c call 0x10763630 */
  push32(0x10761e51u); f_10763630();
L_10761e51:;
  /* 10761e51 mov esi, esp */
  ESI = (ESP);
  /* 10761e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761e55 push 0x10790478 */
  push32((uint32_t)(0x10790478u));
  /* 10761e5a call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10761e60u);
  /* 10761e60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761e65 call 0x10763630 */
  push32(0x10761e6au); f_10763630();
  /* 10761e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761e6c jle 0x10761e9d */
  if ((C.zf||C.sf!=C.of)) goto L_10761e9d;
  /* 10761e6e push 0x10790400 */
  push32((uint32_t)(0x10790400u));
  /* 10761e73 call 0x10761005 */
  push32(0x10761e78u); f_10761005();
  /* 10761e78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761e7d jle 0x10761e9d */
  if ((C.zf||C.sf!=C.of)) goto L_10761e9d;
  /* 10761e7f mov esi, esp */
  ESI = (ESP);
  /* 10761e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761e83 push 0x10790478 */
  push32((uint32_t)(0x10790478u));
  /* 10761e88 push 0x10790400 */
  push32((uint32_t)(0x10790400u));
  /* 10761e8d call dword ptr [0x10793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793458))), 0x10761e93u);
  /* 10761e93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761e96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761e98 call 0x10763630 */
  push32(0x10761e9du); f_10763630();
L_10761e9d:;
  /* 10761e9d mov esi, esp */
  ESI = (ESP);
  /* 10761e9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10761ea1 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761ea7u);
  /* 10761ea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761eaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761eac call 0x10763630 */
  push32(0x10761eb1u); f_10763630();
  /* 10761eb1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761eb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761eb8 je 0x10761f68 */
  if (C.zf) goto L_10761f68;
  /* 10761ebe push 0x10790400 */
  push32((uint32_t)(0x10790400u));
  /* 10761ec3 call 0x10761005 */
  push32(0x10761ec8u); f_10761005();
  /* 10761ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761ecd jne 0x10761f68 */
  if (!C.zf) goto L_10761f68;
  /* 10761ed3 mov esi, esp */
  ESI = (ESP);
  /* 10761ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761ed7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10761ed9 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761edfu);
  /* 10761edf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ee2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761ee4 call 0x10763630 */
  push32(0x10761ee9u); f_10763630();
  /* 10761ee9 mov esi, esp */
  ESI = (ESP);
  /* 10761eeb push 0x1078b240 */
  push32((uint32_t)(0x1078b240u));
  /* 10761ef0 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10761ef6u);
  /* 10761ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761ef9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761efb call 0x10763630 */
  push32(0x10761f00u); f_10763630();
  /* 10761f00 mov esi, esp */
  ESI = (ESP);
  /* 10761f02 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10761f04 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10761f0au);
  /* 10761f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761f0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761f0f call 0x10763630 */
  push32(0x10761f14u); f_10763630();
  /* 10761f14 mov esi, esp */
  ESI = (ESP);
  /* 10761f16 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10761f18 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10761f1eu);
  /* 10761f1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761f21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761f23 call 0x10763630 */
  push32(0x10761f28u); f_10763630();
  /* 10761f28 push 0x107904f0 */
  push32((uint32_t)(0x107904f0u));
  /* 10761f2d call 0x10761005 */
  push32(0x10761f32u); f_10761005();
  /* 10761f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761f37 jle 0x10761f68 */
  if ((C.zf||C.sf!=C.of)) goto L_10761f68;
  /* 10761f39 mov esi, esp */
  ESI = (ESP);
  /* 10761f3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10761f3d push 0x107904f0 */
  push32((uint32_t)(0x107904f0u));
  /* 10761f42 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10761f48u);
  /* 10761f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761f4d call 0x10763630 */
  push32(0x10761f52u); f_10763630();
  /* 10761f52 mov esi, esp */
  ESI = (ESP);
  /* 10761f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10761f58 call dword ptr [0x10793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793448))), 0x10761f5eu);
  /* 10761f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761f61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761f63 call 0x10763630 */
  push32(0x10761f68u); f_10763630();
L_10761f68:;
  /* 10761f68 mov esi, esp */
  ESI = (ESP);
  /* 10761f6a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10761f6c call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761f72u);
  /* 10761f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761f75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761f77 call 0x10763630 */
  push32(0x10761f7cu); f_10763630();
  /* 10761f7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761f83 je 0x1076200d */
  if (C.zf) goto L_1076200d;
  /* 10761f89 mov esi, esp */
  ESI = (ESP);
  /* 10761f8b push 3 */
  push32((uint32_t)(0x3u));
  /* 10761f8d call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761f93u);
  /* 10761f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761f98 call 0x10763630 */
  push32(0x10761f9du); f_10763630();
  /* 10761f9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761fa4 jne 0x1076200d */
  if (!C.zf) goto L_1076200d;
  /* 10761fa6 mov esi, esp */
  ESI = (ESP);
  /* 10761fa8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10761faa call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761fb0u);
  /* 10761fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761fb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761fb5 call 0x10763630 */
  push32(0x10761fbau); f_10763630();
  /* 10761fba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761fc1 jne 0x1076200d */
  if (!C.zf) goto L_1076200d;
  /* 10761fc3 mov esi, esp */
  ESI = (ESP);
  /* 10761fc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10761fc7 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10761fcdu);
  /* 10761fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761fd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761fd2 call 0x10763630 */
  push32(0x10761fd7u); f_10763630();
  /* 10761fd7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10761fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10761fde jne 0x1076200d */
  if (!C.zf) goto L_1076200d;
  /* 10761fe0 mov esi, esp */
  ESI = (ESP);
  /* 10761fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10761fe4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10761fe6 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10761fecu);
  /* 10761fec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10761fef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10761ff1 call 0x10763630 */
  push32(0x10761ff6u); f_10763630();
  /* 10761ff6 mov esi, esp */
  ESI = (ESP);
  /* 10761ff8 push 0x1078b234 */
  push32((uint32_t)(0x1078b234u));
  /* 10761ffd call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762003u);
  /* 10762003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762006 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762008 call 0x10763630 */
  push32(0x1076200du); f_10763630();
L_1076200d:;
  /* 1076200d mov esi, esp */
  ESI = (ESP);
  /* 1076200f push 0 */
  push32((uint32_t)(0x0u));
  /* 10762011 push 0x10790488 */
  push32((uint32_t)(0x10790488u));
  /* 10762016 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x1076201cu);
  /* 1076201c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076201f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762021 call 0x10763630 */
  push32(0x10762026u); f_10763630();
  /* 10762026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762028 jle 0x10762059 */
  if ((C.zf||C.sf!=C.of)) goto L_10762059;
  /* 1076202a push 0x10790418 */
  push32((uint32_t)(0x10790418u));
  /* 1076202f call 0x10761005 */
  push32(0x10762034u); f_10761005();
  /* 10762034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762039 jle 0x10762059 */
  if ((C.zf||C.sf!=C.of)) goto L_10762059;
  /* 1076203b mov esi, esp */
  ESI = (ESP);
  /* 1076203d push 0 */
  push32((uint32_t)(0x0u));
  /* 1076203f push 0x10790488 */
  push32((uint32_t)(0x10790488u));
  /* 10762044 push 0x10790418 */
  push32((uint32_t)(0x10790418u));
  /* 10762049 call dword ptr [0x10793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793458))), 0x1076204fu);
  /* 1076204f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762054 call 0x10763630 */
  push32(0x10762059u); f_10763630();
L_10762059:;
  /* 10762059 mov esi, esp */
  ESI = (ESP);
  /* 1076205b push 6 */
  push32((uint32_t)(0x6u));
  /* 1076205d call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762063u);
  /* 10762063 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762066 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762068 call 0x10763630 */
  push32(0x1076206du); f_10763630();
  /* 1076206d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762074 je 0x10762143 */
  if (C.zf) goto L_10762143;
  /* 1076207a mov esi, esp */
  ESI = (ESP);
  /* 1076207c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076207e push 0x10790490 */
  push32((uint32_t)(0x10790490u));
  /* 10762083 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10762089u);
  /* 10762089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076208c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076208e call 0x10763630 */
  push32(0x10762093u); f_10763630();
  /* 10762093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762095 jle 0x10762143 */
  if ((C.zf||C.sf!=C.of)) goto L_10762143;
  /* 1076209b mov esi, esp */
  ESI = (ESP);
  /* 1076209d push 0 */
  push32((uint32_t)(0x0u));
  /* 1076209f push 6 */
  push32((uint32_t)(0x6u));
  /* 107620a1 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107620a7u);
  /* 107620a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107620aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107620ac call 0x10763630 */
  push32(0x107620b1u); f_10763630();
  /* 107620b1 mov esi, esp */
  ESI = (ESP);
  /* 107620b3 push 0x1078b22c */
  push32((uint32_t)(0x1078b22cu));
  /* 107620b8 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x107620beu);
  /* 107620be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107620c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107620c3 call 0x10763630 */
  push32(0x107620c8u); f_10763630();
  /* 107620c8 mov esi, esp */
  ESI = (ESP);
  /* 107620ca push 1 */
  push32((uint32_t)(0x1u));
  /* 107620cc call dword ptr [0x10793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793460))), 0x107620d2u);
  /* 107620d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107620d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107620d7 call 0x10763630 */
  push32(0x107620dcu); f_10763630();
  /* 107620dc mov esi, esp */
  ESI = (ESP);
  /* 107620de push 0 */
  push32((uint32_t)(0x0u));
  /* 107620e0 push 0x10790410 */
  push32((uint32_t)(0x10790410u));
  /* 107620e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107620e7 call dword ptr [0x10793464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793464))), 0x107620edu);
  /* 107620ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107620f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107620f2 call 0x10763630 */
  push32(0x107620f7u); f_10763630();
  /* 107620f7 mov esi, esp */
  ESI = (ESP);
  /* 107620f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107620fb push 1 */
  push32((uint32_t)(0x1u));
  /* 107620fd call dword ptr [0x10793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793448))), 0x10762103u);
  /* 10762103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762106 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762108 call 0x10763630 */
  push32(0x1076210du); f_10763630();
  /* 1076210d mov esi, esp */
  ESI = (ESP);
  /* 1076210f push 0 */
  push32((uint32_t)(0x0u));
  /* 10762111 push 0x10790428 */
  push32((uint32_t)(0x10790428u));
  /* 10762116 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x1076211cu);
  /* 1076211c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076211f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762121 call 0x10763630 */
  push32(0x10762126u); f_10763630();
  /* 10762126 mov esi, esp */
  ESI = (ESP);
  /* 10762128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076212a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076212c push 0x10790488 */
  push32((uint32_t)(0x10790488u));
  /* 10762131 push 1 */
  push32((uint32_t)(0x1u));
  /* 10762133 call dword ptr [0x1079346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079346c))), 0x10762139u);
  /* 10762139 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076213c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076213e call 0x10763630 */
  push32(0x10762143u); f_10763630();
L_10762143:;
  /* 10762143 mov esi, esp */
  ESI = (ESP);
  /* 10762145 push 7 */
  push32((uint32_t)(0x7u));
  /* 10762147 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076214du);
  /* 1076214d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762152 call 0x10763630 */
  push32(0x10762157u); f_10763630();
  /* 10762157 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076215c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076215e je 0x1076227b */
  if (C.zf) goto L_1076227b;
  /* 10762164 mov esi, esp */
  ESI = (ESP);
  /* 10762166 push 0x10790410 */
  push32((uint32_t)(0x10790410u));
  /* 1076216b push 0x10790440 */
  push32((uint32_t)(0x10790440u));
  /* 10762170 call dword ptr [0x1079343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079343c))), 0x10762176u);
  /* 10762176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762179 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076217b call 0x10763630 */
  push32(0x10762180u); f_10763630();
  /* 10762180 mov esi, eax */
  ESI = (EAX);
  /* 10762182 push 0x10790410 */
  push32((uint32_t)(0x10790410u));
  /* 10762187 call 0x10761005 */
  push32(0x1076218cu); f_10761005();
  /* 1076218c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076218f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10762190 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10762192 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10762194 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762196 jle 0x1076227b */
  if ((C.zf||C.sf!=C.of)) goto L_1076227b;
  /* 1076219c push 0x10790410 */
  push32((uint32_t)(0x10790410u));
  /* 107621a1 call 0x10761005 */
  push32(0x107621a6u); f_10761005();
  /* 107621a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107621a9 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107621ac jle 0x1076227b */
  if ((C.zf||C.sf!=C.of)) goto L_1076227b;
  /* 107621b2 mov esi, esp */
  ESI = (ESP);
  /* 107621b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107621b6 push 7 */
  push32((uint32_t)(0x7u));
  /* 107621b8 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107621beu);
  /* 107621be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107621c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107621c3 call 0x10763630 */
  push32(0x107621c8u); f_10763630();
  /* 107621c8 mov esi, esp */
  ESI = (ESP);
  /* 107621ca push 0x1078b224 */
  push32((uint32_t)(0x1078b224u));
  /* 107621cf call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x107621d5u);
  /* 107621d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107621d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107621da call 0x10763630 */
  push32(0x107621dfu); f_10763630();
  /* 107621df mov esi, esp */
  ESI = (ESP);
  /* 107621e1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 107621e3 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x107621e9u);
  /* 107621e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107621ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107621ee call 0x10763630 */
  push32(0x107621f3u); f_10763630();
  /* 107621f3 mov esi, esp */
  ESI = (ESP);
  /* 107621f5 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 107621f7 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x107621fdu);
  /* 107621fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762202 call 0x10763630 */
  push32(0x10762207u); f_10763630();
  /* 10762207 mov esi, esp */
  ESI = (ESP);
  /* 10762209 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076220b call dword ptr [0x10793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793460))), 0x10762211u);
  /* 10762211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762216 call 0x10763630 */
  push32(0x1076221bu); f_10763630();
  /* 1076221b mov esi, esp */
  ESI = (ESP);
  /* 1076221d push 0 */
  push32((uint32_t)(0x0u));
  /* 1076221f push 0x10790410 */
  push32((uint32_t)(0x10790410u));
  /* 10762224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762226 call dword ptr [0x10793464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793464))), 0x1076222cu);
  /* 1076222c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076222f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762231 call 0x10763630 */
  push32(0x10762236u); f_10763630();
  /* 10762236 mov esi, esp */
  ESI = (ESP);
  /* 10762238 push 4 */
  push32((uint32_t)(0x4u));
  /* 1076223a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076223c call dword ptr [0x10793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793448))), 0x10762242u);
  /* 10762242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762247 call 0x10763630 */
  push32(0x1076224cu); f_10763630();
  /* 1076224c mov esi, esp */
  ESI = (ESP);
  /* 1076224e push 0 */
  push32((uint32_t)(0x0u));
  /* 10762250 push 0x107904c0 */
  push32((uint32_t)(0x107904c0u));
  /* 10762255 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x1076225bu);
  /* 1076225b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076225e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762260 call 0x10763630 */
  push32(0x10762265u); f_10763630();
  /* 10762265 mov esi, esp */
  ESI = (ESP);
  /* 10762267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762269 push 4 */
  push32((uint32_t)(0x4u));
  /* 1076226b call dword ptr [0x10793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793448))), 0x10762271u);
  /* 10762271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762276 call 0x10763630 */
  push32(0x1076227bu); f_10763630();
L_1076227b:;
  /* 1076227b mov esi, esp */
  ESI = (ESP);
  /* 1076227d push 8 */
  push32((uint32_t)(0x8u));
  /* 1076227f call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762285u);
  /* 10762285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762288 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076228a call 0x10763630 */
  push32(0x1076228fu); f_10763630();
  /* 1076228f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762296 je 0x107622e6 */
  if (C.zf) goto L_107622e6;
  /* 10762298 push 0x10790410 */
  push32((uint32_t)(0x10790410u));
  /* 1076229d call 0x10761005 */
  push32(0x107622a2u); f_10761005();
  /* 107622a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107622a5 cmp eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107622a8 jge 0x107622e6 */
  if ((C.sf==C.of)) goto L_107622e6;
  /* 107622aa mov esi, esp */
  ESI = (ESP);
  /* 107622ac push 0 */
  push32((uint32_t)(0x0u));
  /* 107622ae push 8 */
  push32((uint32_t)(0x8u));
  /* 107622b0 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107622b6u);
  /* 107622b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107622b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107622bb call 0x10763630 */
  push32(0x107622c0u); f_10763630();
  /* 107622c0 mov esi, esp */
  ESI = (ESP);
  /* 107622c2 push 0x1078b21c */
  push32((uint32_t)(0x1078b21cu));
  /* 107622c7 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x107622cdu);
  /* 107622cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107622d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107622d2 call 0x10763630 */
  push32(0x107622d7u); f_10763630();
  /* 107622d7 mov esi, esp */
  ESI = (ESP);
  /* 107622d9 call dword ptr [0x10793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793470))), 0x107622dfu);
  /* 107622df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107622e1 call 0x10763630 */
  push32(0x107622e6u); f_10763630();
L_107622e6:;
  /* 107622e6 mov esi, esp */
  ESI = (ESP);
  /* 107622e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107622ea push 0x107904a0 */
  push32((uint32_t)(0x107904a0u));
  /* 107622ef call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x107622f5u);
  /* 107622f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107622f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107622fa call 0x10763630 */
  push32(0x107622ffu); f_10763630();
  /* 107622ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762301 jle 0x10762332 */
  if ((C.zf||C.sf!=C.of)) goto L_10762332;
  /* 10762303 push 0x10790420 */
  push32((uint32_t)(0x10790420u));
  /* 10762308 call 0x10761005 */
  push32(0x1076230du); f_10761005();
  /* 1076230d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762312 jle 0x10762332 */
  if ((C.zf||C.sf!=C.of)) goto L_10762332;
  /* 10762314 mov esi, esp */
  ESI = (ESP);
  /* 10762316 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762318 push 0x107904a0 */
  push32((uint32_t)(0x107904a0u));
  /* 1076231d push 0x10790420 */
  push32((uint32_t)(0x10790420u));
  /* 10762322 call dword ptr [0x10793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793458))), 0x10762328u);
  /* 10762328 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076232b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076232d call 0x10763630 */
  push32(0x10762332u); f_10763630();
L_10762332:;
  /* 10762332 mov esi, esp */
  ESI = (ESP);
  /* 10762334 push 9 */
  push32((uint32_t)(0x9u));
  /* 10762336 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076233cu);
  /* 1076233c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076233f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762341 call 0x10763630 */
  push32(0x10762346u); f_10763630();
  /* 10762346 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076234b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076234d je 0x1076238e */
  if (C.zf) goto L_1076238e;
  /* 1076234f push 0x10790420 */
  push32((uint32_t)(0x10790420u));
  /* 10762354 call 0x10761005 */
  push32(0x10762359u); f_10761005();
  /* 10762359 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076235c cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076235f jge 0x1076238e */
  if ((C.sf==C.of)) goto L_1076238e;
  /* 10762361 mov esi, esp */
  ESI = (ESP);
  /* 10762363 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762365 push 9 */
  push32((uint32_t)(0x9u));
  /* 10762367 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x1076236du);
  /* 1076236d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762372 call 0x10763630 */
  push32(0x10762377u); f_10763630();
  /* 10762377 mov esi, esp */
  ESI = (ESP);
  /* 10762379 push 0x1078b214 */
  push32((uint32_t)(0x1078b214u));
  /* 1076237e call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762384u);
  /* 10762384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762389 call 0x10763630 */
  push32(0x1076238eu); f_10763630();
L_1076238e:;
  /* 1076238e mov esi, esp */
  ESI = (ESP);
  /* 10762390 push 0xa */
  push32((uint32_t)(0xau));
  /* 10762392 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762398u);
  /* 10762398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076239b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076239d call 0x10763630 */
  push32(0x107623a2u); f_10763630();
  /* 107623a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107623a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107623a9 je 0x1076242f */
  if (C.zf) goto L_1076242f;
  /* 107623af push 0x107903e8 */
  push32((uint32_t)(0x107903e8u));
  /* 107623b4 call 0x10761005 */
  push32(0x107623b9u); f_10761005();
  /* 107623b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107623bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107623be jne 0x1076242f */
  if (!C.zf) goto L_1076242f;
  /* 107623c0 mov esi, esp */
  ESI = (ESP);
  /* 107623c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107623c4 push 0xa */
  push32((uint32_t)(0xau));
  /* 107623c6 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107623ccu);
  /* 107623cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107623cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107623d1 call 0x10763630 */
  push32(0x107623d6u); f_10763630();
  /* 107623d6 mov esi, esp */
  ESI = (ESP);
  /* 107623d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 107623da push 0 */
  push32((uint32_t)(0x0u));
  /* 107623dc call dword ptr [0x10793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793468))), 0x107623e2u);
  /* 107623e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107623e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107623e7 call 0x10763630 */
  push32(0x107623ecu); f_10763630();
  /* 107623ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107623ee jle 0x10762409 */
  if ((C.zf||C.sf!=C.of)) goto L_10762409;
  /* 107623f0 mov esi, esp */
  ESI = (ESP);
  /* 107623f2 push 0x1078b208 */
  push32((uint32_t)(0x1078b208u));
  /* 107623f7 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x107623fdu);
  /* 107623fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762400 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762402 call 0x10763630 */
  push32(0x10762407u); f_10763630();
  /* 10762407 jmp 0x10762420 */
  goto L_10762420;
L_10762409:;
  /* 10762409 mov esi, esp */
  ESI = (ESP);
  /* 1076240b push 0x1078b1fc */
  push32((uint32_t)(0x1078b1fcu));
  /* 10762410 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762416u);
  /* 10762416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762419 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076241b call 0x10763630 */
  push32(0x10762420u); f_10763630();
L_10762420:;
  /* 10762420 mov esi, esp */
  ESI = (ESP);
  /* 10762422 call dword ptr [0x10793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793470))), 0x10762428u);
  /* 10762428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076242a call 0x10763630 */
  push32(0x1076242fu); f_10763630();
L_1076242f:;
  /* 1076242f mov esi, esp */
  ESI = (ESP);
  /* 10762431 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10762433 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762439u);
  /* 10762439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076243c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076243e call 0x10763630 */
  push32(0x10762443u); f_10763630();
  /* 10762443 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076244a je 0x1076250a */
  if (C.zf) goto L_1076250a;
  /* 10762450 mov esi, esp */
  ESI = (ESP);
  /* 10762452 push 3 */
  push32((uint32_t)(0x3u));
  /* 10762454 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076245au);
  /* 1076245a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076245d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076245f call 0x10763630 */
  push32(0x10762464u); f_10763630();
  /* 10762464 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076246b jne 0x1076250a */
  if (!C.zf) goto L_1076250a;
  /* 10762471 mov esi, esp */
  ESI = (ESP);
  /* 10762473 push 5 */
  push32((uint32_t)(0x5u));
  /* 10762475 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076247bu);
  /* 1076247b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076247e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762480 call 0x10763630 */
  push32(0x10762485u); f_10763630();
  /* 10762485 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076248a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076248c jne 0x1076250a */
  if (!C.zf) goto L_1076250a;
  /* 1076248e mov esi, esp */
  ESI = (ESP);
  /* 10762490 push 0x107903e8 */
  push32((uint32_t)(0x107903e8u));
  /* 10762495 push 0x10790458 */
  push32((uint32_t)(0x10790458u));
  /* 1076249a call dword ptr [0x1079343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079343c))), 0x107624a0u);
  /* 107624a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107624a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107624a5 call 0x10763630 */
  push32(0x107624aau); f_10763630();
  /* 107624aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107624ac jle 0x1076250a */
  if ((C.zf||C.sf!=C.of)) goto L_1076250a;
  /* 107624ae mov esi, esp */
  ESI = (ESP);
  /* 107624b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107624b2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 107624b4 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107624bau);
  /* 107624ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107624bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107624bf call 0x10763630 */
  push32(0x107624c4u); f_10763630();
  /* 107624c4 mov esi, esp */
  ESI = (ESP);
  /* 107624c6 push 0x1078b1f0 */
  push32((uint32_t)(0x1078b1f0u));
  /* 107624cb call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x107624d1u);
  /* 107624d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107624d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107624d6 call 0x10763630 */
  push32(0x107624dbu); f_10763630();
  /* 107624db mov esi, esp */
  ESI = (ESP);
  /* 107624dd push 0 */
  push32((uint32_t)(0x0u));
  /* 107624df push 0x107904e0 */
  push32((uint32_t)(0x107904e0u));
  /* 107624e4 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x107624eau);
  /* 107624ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107624ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107624ef call 0x10763630 */
  push32(0x107624f4u); f_10763630();
  /* 107624f4 mov esi, esp */
  ESI = (ESP);
  /* 107624f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107624f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 107624fa call dword ptr [0x10793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793448))), 0x10762500u);
  /* 10762500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762503 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762505 call 0x10763630 */
  push32(0x1076250au); f_10763630();
L_1076250a:;
  /* 1076250a mov esi, esp */
  ESI = (ESP);
  /* 1076250c push 1 */
  push32((uint32_t)(0x1u));
  /* 1076250e call dword ptr [0x10793478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793478))), 0x10762514u);
  /* 10762514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762519 call 0x10763630 */
  push32(0x1076251eu); f_10763630();
  /* 1076251e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762525 je 0x10762587 */
  if (C.zf) goto L_10762587;
  /* 10762527 mov esi, esp */
  ESI = (ESP);
  /* 10762529 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076252b push 0x10790460 */
  push32((uint32_t)(0x10790460u));
  /* 10762530 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762532 push 0x107903e0 */
  push32((uint32_t)(0x107903e0u));
  /* 10762537 push 0x10790480 */
  push32((uint32_t)(0x10790480u));
  /* 1076253c push 0x107904b0 */
  push32((uint32_t)(0x107904b0u));
  /* 10762541 call dword ptr [0x1079347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079347c))), 0x10762547u);
  /* 10762547 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076254a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076254c call 0x10763630 */
  push32(0x10762551u); f_10763630();
  /* 10762551 mov esi, esp */
  ESI = (ESP);
  /* 10762553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762555 push 0x107904b0 */
  push32((uint32_t)(0x107904b0u));
  /* 1076255a call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10762560u);
  /* 10762560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762563 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762565 call 0x10763630 */
  push32(0x1076256au); f_10763630();
  /* 1076256a mov esi, esp */
  ESI = (ESP);
  /* 1076256c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076256e push 0 */
  push32((uint32_t)(0x0u));
  /* 10762570 push 0x10790498 */
  push32((uint32_t)(0x10790498u));
  /* 10762575 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762577 call dword ptr [0x10793474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793474))), 0x1076257du);
  /* 1076257d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762582 call 0x10763630 */
  push32(0x10762587u); f_10763630();
L_10762587:;
  /* 10762587 mov esi, esp */
  ESI = (ESP);
  /* 10762589 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076258b call dword ptr [0x10793484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793484))), 0x10762591u);
  /* 10762591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762596 call 0x10763630 */
  push32(0x1076259bu); f_10763630();
  /* 1076259b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107625a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107625a2 je 0x10762758 */
  if (C.zf) goto L_10762758;
  /* 107625a8 mov esi, esp */
  ESI = (ESP);
  /* 107625aa push 0xc */
  push32((uint32_t)(0xcu));
  /* 107625ac call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107625b2u);
  /* 107625b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107625b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107625b7 call 0x10763630 */
  push32(0x107625bcu); f_10763630();
  /* 107625bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107625c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107625c3 je 0x1076262b */
  if (C.zf) goto L_1076262b;
  /* 107625c5 mov esi, esp */
  ESI = (ESP);
  /* 107625c7 push 0x107904b0 */
  push32((uint32_t)(0x107904b0u));
  /* 107625cc push 0x10790498 */
  push32((uint32_t)(0x10790498u));
  /* 107625d1 call dword ptr [0x1079343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079343c))), 0x107625d7u);
  /* 107625d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107625da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107625dc call 0x10763630 */
  push32(0x107625e1u); f_10763630();
  /* 107625e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107625e3 jle 0x1076262b */
  if ((C.zf||C.sf!=C.of)) goto L_1076262b;
  /* 107625e5 mov esi, esp */
  ESI = (ESP);
  /* 107625e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107625e9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 107625eb call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107625f1u);
  /* 107625f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107625f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107625f6 call 0x10763630 */
  push32(0x107625fbu); f_10763630();
  /* 107625fb mov esi, esp */
  ESI = (ESP);
  /* 107625fd push 0x1078b1e4 */
  push32((uint32_t)(0x1078b1e4u));
  /* 10762602 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762608u);
  /* 10762608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076260b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076260d call 0x10763630 */
  push32(0x10762612u); f_10763630();
  /* 10762612 mov esi, esp */
  ESI = (ESP);
  /* 10762614 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10762619 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076261b call dword ptr [0x10793488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793488))), 0x10762621u);
  /* 10762621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762624 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762626 call 0x10763630 */
  push32(0x1076262bu); f_10763630();
L_1076262b:;
  /* 1076262b mov esi, esp */
  ESI = (ESP);
  /* 1076262d push 0xd */
  push32((uint32_t)(0xdu));
  /* 1076262f call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762635u);
  /* 10762635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076263a call 0x10763630 */
  push32(0x1076263fu); f_10763630();
  /* 1076263f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762646 je 0x107626e8 */
  if (C.zf) goto L_107626e8;
  /* 1076264c mov esi, esp */
  ESI = (ESP);
  /* 1076264e push 0x107904b0 */
  push32((uint32_t)(0x107904b0u));
  /* 10762653 push 0x10790498 */
  push32((uint32_t)(0x10790498u));
  /* 10762658 call dword ptr [0x1079343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079343c))), 0x1076265eu);
  /* 1076265e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762663 call 0x10763630 */
  push32(0x10762668u); f_10763630();
  /* 10762668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076266a jle 0x107626e8 */
  if ((C.zf||C.sf!=C.of)) goto L_107626e8;
  /* 1076266c mov esi, esp */
  ESI = (ESP);
  /* 1076266e push 0x107903e8 */
  push32((uint32_t)(0x107903e8u));
  /* 10762673 push 0x10790498 */
  push32((uint32_t)(0x10790498u));
  /* 10762678 call dword ptr [0x1079343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079343c))), 0x1076267eu);
  /* 1076267e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762683 call 0x10763630 */
  push32(0x10762688u); f_10763630();
  /* 10762688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076268a jle 0x107626e8 */
  if ((C.zf||C.sf!=C.of)) goto L_107626e8;
  /* 1076268c mov esi, esp */
  ESI = (ESP);
  /* 1076268e push 0 */
  push32((uint32_t)(0x0u));
  /* 10762690 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10762692 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10762698u);
  /* 10762698 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076269b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076269d call 0x10763630 */
  push32(0x107626a2u); f_10763630();
  /* 107626a2 mov esi, esp */
  ESI = (ESP);
  /* 107626a4 push 0x1078b1d8 */
  push32((uint32_t)(0x1078b1d8u));
  /* 107626a9 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x107626afu);
  /* 107626af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107626b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107626b4 call 0x10763630 */
  push32(0x107626b9u); f_10763630();
  /* 107626b9 mov esi, esp */
  ESI = (ESP);
  /* 107626bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107626bd push 0x107904b0 */
  push32((uint32_t)(0x107904b0u));
  /* 107626c2 call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x107626c8u);
  /* 107626c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107626cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107626cd call 0x10763630 */
  push32(0x107626d2u); f_10763630();
  /* 107626d2 mov esi, esp */
  ESI = (ESP);
  /* 107626d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107626d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 107626d8 call dword ptr [0x10793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793448))), 0x107626deu);
  /* 107626de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107626e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107626e3 call 0x10763630 */
  push32(0x107626e8u); f_10763630();
L_107626e8:;
  /* 107626e8 mov esi, esp */
  ESI = (ESP);
  /* 107626ea push 2 */
  push32((uint32_t)(0x2u));
  /* 107626ec call dword ptr [0x10793478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793478))), 0x107626f2u);
  /* 107626f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107626f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107626f7 call 0x10763630 */
  push32(0x107626fcu); f_10763630();
  /* 107626fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762703 je 0x10762758 */
  if (C.zf) goto L_10762758;
  /* 10762705 mov esi, esp */
  ESI = (ESP);
  /* 10762707 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10762709 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076270fu);
  /* 1076270f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762714 call 0x10763630 */
  push32(0x10762719u); f_10763630();
  /* 10762719 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076271e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762720 je 0x10762758 */
  if (C.zf) goto L_10762758;
  /* 10762722 mov esi, esp */
  ESI = (ESP);
  /* 10762724 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762726 push 0x107904b0 */
  push32((uint32_t)(0x107904b0u));
  /* 1076272b call dword ptr [0x10793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793438))), 0x10762731u);
  /* 10762731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762734 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762736 call 0x10763630 */
  push32(0x1076273bu); f_10763630();
  /* 1076273b mov esi, esp */
  ESI = (ESP);
  /* 1076273d push 0 */
  push32((uint32_t)(0x0u));
  /* 1076273f push 0 */
  push32((uint32_t)(0x0u));
  /* 10762741 push 0x10790498 */
  push32((uint32_t)(0x10790498u));
  /* 10762746 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762748 call dword ptr [0x1079346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079346c))), 0x1076274eu);
  /* 1076274e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762751 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762753 call 0x10763630 */
  push32(0x10762758u); f_10763630();
L_10762758:;
  /* 10762758 mov esi, esp */
  ESI = (ESP);
  /* 1076275a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076275c push 0x10790450 */
  push32((uint32_t)(0x10790450u));
  /* 10762761 call dword ptr [0x1079344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079344c))), 0x10762767u);
  /* 10762767 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076276a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076276c call 0x10763630 */
  push32(0x10762771u); f_10763630();
  /* 10762771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762773 jle 0x107627a4 */
  if ((C.zf||C.sf!=C.of)) goto L_107627a4;
  /* 10762775 push 0x107904c8 */
  push32((uint32_t)(0x107904c8u));
  /* 1076277a call 0x10761005 */
  push32(0x1076277fu); f_10761005();
  /* 1076277f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762784 jle 0x107627a4 */
  if ((C.zf||C.sf!=C.of)) goto L_107627a4;
  /* 10762786 mov esi, esp */
  ESI = (ESP);
  /* 10762788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076278a push 0x10790450 */
  push32((uint32_t)(0x10790450u));
  /* 1076278f push 0x107904c8 */
  push32((uint32_t)(0x107904c8u));
  /* 10762794 call dword ptr [0x10793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793458))), 0x1076279au);
  /* 1076279a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076279d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076279f call 0x10763630 */
  push32(0x107627a4u); f_10763630();
L_107627a4:;
  /* 107627a4 mov esi, esp */
  ESI = (ESP);
  /* 107627a6 push 0xe */
  push32((uint32_t)(0xeu));
  /* 107627a8 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107627aeu);
  /* 107627ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107627b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107627b3 call 0x10763630 */
  push32(0x107627b8u); f_10763630();
  /* 107627b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107627bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107627bf je 0x107628b6 */
  if (C.zf) goto L_107628b6;
  /* 107627c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107627c7 push 0x107904f8 */
  push32((uint32_t)(0x107904f8u));
  /* 107627cc call 0x1076100f */
  push32(0x107627d1u); f_1076100f();
  /* 107627d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107627d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107627d6 jle 0x107628b6 */
  if ((C.zf||C.sf!=C.of)) goto L_107628b6;
  /* 107627dc mov esi, esp */
  ESI = (ESP);
  /* 107627de push 0 */
  push32((uint32_t)(0x0u));
  /* 107627e0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 107627e2 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107627e8u);
  /* 107627e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107627eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107627ed call 0x10763630 */
  push32(0x107627f2u); f_10763630();
  /* 107627f2 mov esi, esp */
  ESI = (ESP);
  /* 107627f4 push 0x1078b1cc */
  push32((uint32_t)(0x1078b1ccu));
  /* 107627f9 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x107627ffu);
  /* 107627ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762804 call 0x10763630 */
  push32(0x10762809u); f_10763630();
  /* 10762809 mov esi, esp */
  ESI = (ESP);
  /* 1076280b push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1076280d call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x10762813u);
  /* 10762813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762816 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762818 call 0x10763630 */
  push32(0x1076281du); f_10763630();
  /* 1076281d mov esi, esp */
  ESI = (ESP);
  /* 1076281f push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10762821 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10762827u);
  /* 10762827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076282a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076282c call 0x10763630 */
  push32(0x10762831u); f_10763630();
  /* 10762831 mov esi, esp */
  ESI = (ESP);
  /* 10762833 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10762838 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076283a call dword ptr [0x10793488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793488))), 0x10762840u);
  /* 10762840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762845 call 0x10763630 */
  push32(0x1076284au); f_10763630();
  /* 1076284a mov esi, esp */
  ESI = (ESP);
  /* 1076284c push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10762851 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762853 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762855 call dword ptr [0x10793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793450))), 0x1076285bu);
  /* 1076285b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762860 call 0x10763630 */
  push32(0x10762865u); f_10763630();
  /* 10762865 mov esi, esp */
  ESI = (ESP);
  /* 10762867 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 1076286c push 5 */
  push32((uint32_t)(0x5u));
  /* 1076286e push 0 */
  push32((uint32_t)(0x0u));
  /* 10762870 call dword ptr [0x10793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793450))), 0x10762876u);
  /* 10762876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762879 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076287b call 0x10763630 */
  push32(0x10762880u); f_10763630();
  /* 10762880 mov esi, esp */
  ESI = (ESP);
  /* 10762882 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10762887 push 1 */
  push32((uint32_t)(0x1u));
  /* 10762889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076288b call dword ptr [0x10793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793450))), 0x10762891u);
  /* 10762891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762896 call 0x10763630 */
  push32(0x1076289bu); f_10763630();
  /* 1076289b mov esi, esp */
  ESI = (ESP);
  /* 1076289d push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 107628a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 107628a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107628a6 call dword ptr [0x10793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793450))), 0x107628acu);
  /* 107628ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107628af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107628b1 call 0x10763630 */
  push32(0x107628b6u); f_10763630();
L_107628b6:;
  /* 107628b6 mov esi, esp */
  ESI = (ESP);
  /* 107628b8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 107628ba call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107628c0u);
  /* 107628c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107628c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107628c5 call 0x10763630 */
  push32(0x107628cau); f_10763630();
  /* 107628ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107628cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107628d1 je 0x10762952 */
  if (C.zf) goto L_10762952;
  /* 107628d3 push 0x107904b8 */
  push32((uint32_t)(0x107904b8u));
  /* 107628d8 call 0x10761005 */
  push32(0x107628ddu); f_10761005();
  /* 107628dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107628e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107628e2 jne 0x10762952 */
  if (!C.zf) goto L_10762952;
  /* 107628e4 mov esi, esp */
  ESI = (ESP);
  /* 107628e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107628e8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 107628ea call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x107628f0u);
  /* 107628f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107628f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107628f5 call 0x10763630 */
  push32(0x107628fau); f_10763630();
  /* 107628fa mov esi, esp */
  ESI = (ESP);
  /* 107628fc push 0x1078b1c0 */
  push32((uint32_t)(0x1078b1c0u));
  /* 10762901 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762907u);
  /* 10762907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076290a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076290c call 0x10763630 */
  push32(0x10762911u); f_10763630();
  /* 10762911 mov esi, esp */
  ESI = (ESP);
  /* 10762913 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10762915 call dword ptr [0x1079342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079342c))), 0x1076291bu);
  /* 1076291b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076291e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762920 call 0x10763630 */
  push32(0x10762925u); f_10763630();
  /* 10762925 mov esi, esp */
  ESI = (ESP);
  /* 10762927 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10762929 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x1076292fu);
  /* 1076292f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762932 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762934 call 0x10763630 */
  push32(0x10762939u); f_10763630();
  /* 10762939 mov esi, esp */
  ESI = (ESP);
  /* 1076293b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10762940 push 1 */
  push32((uint32_t)(0x1u));
  /* 10762942 call dword ptr [0x10793488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793488))), 0x10762948u);
  /* 10762948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076294b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076294d call 0x10763630 */
  push32(0x10762952u); f_10763630();
L_10762952:;
  /* 10762952 mov esi, esp */
  ESI = (ESP);
  /* 10762954 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10762956 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076295cu);
  /* 1076295c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076295f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762961 call 0x10763630 */
  push32(0x10762966u); f_10763630();
  /* 10762966 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076296b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076296d je 0x10762a69 */
  if (C.zf) goto L_10762a69;
  /* 10762973 mov esi, esp */
  ESI = (ESP);
  /* 10762975 push 3 */
  push32((uint32_t)(0x3u));
  /* 10762977 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076297du);
  /* 1076297d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762982 call 0x10763630 */
  push32(0x10762987u); f_10763630();
  /* 10762987 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076298c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076298e jne 0x10762a69 */
  if (!C.zf) goto L_10762a69;
  /* 10762994 mov esi, esp */
  ESI = (ESP);
  /* 10762996 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762998 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x1076299eu);
  /* 1076299e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107629a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107629a3 call 0x10763630 */
  push32(0x107629a8u); f_10763630();
  /* 107629a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107629ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107629af jne 0x10762a69 */
  if (!C.zf) goto L_10762a69;
  /* 107629b5 mov esi, esp */
  ESI = (ESP);
  /* 107629b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 107629b9 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107629bfu);
  /* 107629bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107629c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107629c4 call 0x10763630 */
  push32(0x107629c9u); f_10763630();
  /* 107629c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107629ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107629d0 jne 0x10762a69 */
  if (!C.zf) goto L_10762a69;
  /* 107629d6 mov esi, esp */
  ESI = (ESP);
  /* 107629d8 push 7 */
  push32((uint32_t)(0x7u));
  /* 107629da call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107629e0u);
  /* 107629e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107629e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107629e5 call 0x10763630 */
  push32(0x107629eau); f_10763630();
  /* 107629ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107629ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107629f1 jne 0x10762a69 */
  if (!C.zf) goto L_10762a69;
  /* 107629f3 mov esi, esp */
  ESI = (ESP);
  /* 107629f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 107629f7 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x107629fdu);
  /* 107629fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762a00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762a02 call 0x10763630 */
  push32(0x10762a07u); f_10763630();
  /* 10762a07 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762a0e jne 0x10762a69 */
  if (!C.zf) goto L_10762a69;
  /* 10762a10 mov esi, esp */
  ESI = (ESP);
  /* 10762a12 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10762a14 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762a1au);
  /* 10762a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762a1f call 0x10763630 */
  push32(0x10762a24u); f_10763630();
  /* 10762a24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762a29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762a2b jne 0x10762a69 */
  if (!C.zf) goto L_10762a69;
  /* 10762a2d mov esi, esp */
  ESI = (ESP);
  /* 10762a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10762a31 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10762a33 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10762a39u);
  /* 10762a39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762a3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762a3e call 0x10763630 */
  push32(0x10762a43u); f_10763630();
  /* 10762a43 mov esi, esp */
  ESI = (ESP);
  /* 10762a45 push 0x1078b1b4 */
  push32((uint32_t)(0x1078b1b4u));
  /* 10762a4a call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762a50u);
  /* 10762a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762a53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762a55 call 0x10763630 */
  push32(0x10762a5au); f_10763630();
  /* 10762a5a mov esi, esp */
  ESI = (ESP);
  /* 10762a5c call dword ptr [0x10793480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793480))), 0x10762a62u);
  /* 10762a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762a64 call 0x10763630 */
  push32(0x10762a69u); f_10763630();
L_10762a69:;
  /* 10762a69 mov esi, esp */
  ESI = (ESP);
  /* 10762a6b push 0x107903e8 */
  push32((uint32_t)(0x107903e8u));
  /* 10762a70 push 0x10790458 */
  push32((uint32_t)(0x10790458u));
  /* 10762a75 call dword ptr [0x1079343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079343c))), 0x10762a7bu);
  /* 10762a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762a80 call 0x10763630 */
  push32(0x10762a85u); f_10763630();
  /* 10762a85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762a87 jle 0x10762e73 */
  if ((C.zf||C.sf!=C.of)) goto L_10762e73;
  /* 10762a8d mov esi, esp */
  ESI = (ESP);
  /* 10762a8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10762a91 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762a97u);
  /* 10762a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762a9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762a9c call 0x10763630 */
  push32(0x10762aa1u); f_10763630();
  /* 10762aa1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762aa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762aa8 jne 0x10762e73 */
  if (!C.zf) goto L_10762e73;
  /* 10762aae mov esi, esp */
  ESI = (ESP);
  /* 10762ab0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762ab2 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762ab8u);
  /* 10762ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762abb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762abd call 0x10763630 */
  push32(0x10762ac2u); f_10763630();
  /* 10762ac2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762ac9 je 0x10762b70 */
  if (C.zf) goto L_10762b70;
  /* 10762acf mov esi, esp */
  ESI = (ESP);
  /* 10762ad1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10762ad3 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762ad9u);
  /* 10762ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762ade call 0x10763630 */
  push32(0x10762ae3u); f_10763630();
  /* 10762ae3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762aea jne 0x10762b70 */
  if (!C.zf) goto L_10762b70;
  /* 10762af0 mov esi, esp */
  ESI = (ESP);
  /* 10762af2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10762af4 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762afau);
  /* 10762afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762afd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762aff call 0x10763630 */
  push32(0x10762b04u); f_10763630();
  /* 10762b04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762b0b jne 0x10762b70 */
  if (!C.zf) goto L_10762b70;
  /* 10762b0d mov esi, esp */
  ESI = (ESP);
  /* 10762b0f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10762b11 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762b17u);
  /* 10762b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762b1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762b1c call 0x10763630 */
  push32(0x10762b21u); f_10763630();
  /* 10762b21 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762b28 je 0x10762b6b */
  if (C.zf) goto L_10762b6b;
  /* 10762b2a mov esi, esp */
  ESI = (ESP);
  /* 10762b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10762b2e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10762b30 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10762b36u);
  /* 10762b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762b39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762b3b call 0x10763630 */
  push32(0x10762b40u); f_10763630();
  /* 10762b40 mov esi, esp */
  ESI = (ESP);
  /* 10762b42 push 0x1078b1a8 */
  push32((uint32_t)(0x1078b1a8u));
  /* 10762b47 call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762b4du);
  /* 10762b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762b52 call 0x10763630 */
  push32(0x10762b57u); f_10763630();
  /* 10762b57 mov esi, esp */
  ESI = (ESP);
  /* 10762b59 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10762b5b call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10762b61u);
  /* 10762b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762b66 call 0x10763630 */
  push32(0x10762b6bu); f_10763630();
L_10762b6b:;
  /* 10762b6b jmp 0x10762e73 */
  goto L_10762e73;
L_10762b70:;
  /* 10762b70 mov esi, esp */
  ESI = (ESP);
  /* 10762b72 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10762b74 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762b7au);
  /* 10762b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762b7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762b7f call 0x10763630 */
  push32(0x10762b84u); f_10763630();
  /* 10762b84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762b8b je 0x10762c53 */
  if (C.zf) goto L_10762c53;
  /* 10762b91 mov esi, esp */
  ESI = (ESP);
  /* 10762b93 push 3 */
  push32((uint32_t)(0x3u));
  /* 10762b95 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762b9bu);
  /* 10762b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762b9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762ba0 call 0x10763630 */
  push32(0x10762ba5u); f_10763630();
  /* 10762ba5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762bac jne 0x10762c53 */
  if (!C.zf) goto L_10762c53;
  /* 10762bb2 mov esi, esp */
  ESI = (ESP);
  /* 10762bb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10762bb6 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762bbcu);
  /* 10762bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762bbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762bc1 call 0x10763630 */
  push32(0x10762bc6u); f_10763630();
  /* 10762bc6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762bcd jne 0x10762c53 */
  if (!C.zf) goto L_10762c53;
  /* 10762bd3 mov esi, esp */
  ESI = (ESP);
  /* 10762bd5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762bd7 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762bddu);
  /* 10762bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762be2 call 0x10763630 */
  push32(0x10762be7u); f_10763630();
  /* 10762be7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762bee jne 0x10762c53 */
  if (!C.zf) goto L_10762c53;
  /* 10762bf0 mov esi, esp */
  ESI = (ESP);
  /* 10762bf2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10762bf4 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762bfau);
  /* 10762bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762bff call 0x10763630 */
  push32(0x10762c04u); f_10763630();
  /* 10762c04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762c0b je 0x10762c4e */
  if (C.zf) goto L_10762c4e;
  /* 10762c0d mov esi, esp */
  ESI = (ESP);
  /* 10762c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10762c11 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10762c13 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10762c19u);
  /* 10762c19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762c1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762c1e call 0x10763630 */
  push32(0x10762c23u); f_10763630();
  /* 10762c23 mov esi, esp */
  ESI = (ESP);
  /* 10762c25 push 0x1078b19c */
  push32((uint32_t)(0x1078b19cu));
  /* 10762c2a call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762c30u);
  /* 10762c30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762c33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762c35 call 0x10763630 */
  push32(0x10762c3au); f_10763630();
  /* 10762c3a mov esi, esp */
  ESI = (ESP);
  /* 10762c3c push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10762c3e call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10762c44u);
  /* 10762c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762c49 call 0x10763630 */
  push32(0x10762c4eu); f_10763630();
L_10762c4e:;
  /* 10762c4e jmp 0x10762e73 */
  goto L_10762e73;
L_10762c53:;
  /* 10762c53 mov esi, esp */
  ESI = (ESP);
  /* 10762c55 push 7 */
  push32((uint32_t)(0x7u));
  /* 10762c57 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762c5du);
  /* 10762c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762c62 call 0x10763630 */
  push32(0x10762c67u); f_10763630();
  /* 10762c67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762c6e je 0x10762d57 */
  if (C.zf) goto L_10762d57;
  /* 10762c74 mov esi, esp */
  ESI = (ESP);
  /* 10762c76 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10762c78 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762c7eu);
  /* 10762c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762c83 call 0x10763630 */
  push32(0x10762c88u); f_10763630();
  /* 10762c88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762c8f jne 0x10762d57 */
  if (!C.zf) goto L_10762d57;
  /* 10762c95 mov esi, esp */
  ESI = (ESP);
  /* 10762c97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10762c99 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762c9fu);
  /* 10762c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762ca4 call 0x10763630 */
  push32(0x10762ca9u); f_10763630();
  /* 10762ca9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762cae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762cb0 jne 0x10762d57 */
  if (!C.zf) goto L_10762d57;
  /* 10762cb6 mov esi, esp */
  ESI = (ESP);
  /* 10762cb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10762cba call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762cc0u);
  /* 10762cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762cc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762cc5 call 0x10763630 */
  push32(0x10762ccau); f_10763630();
  /* 10762cca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762ccf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762cd1 jne 0x10762d57 */
  if (!C.zf) goto L_10762d57;
  /* 10762cd7 mov esi, esp */
  ESI = (ESP);
  /* 10762cd9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10762cdb call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762ce1u);
  /* 10762ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762ce4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762ce6 call 0x10763630 */
  push32(0x10762cebu); f_10763630();
  /* 10762ceb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762cf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762cf2 jne 0x10762d57 */
  if (!C.zf) goto L_10762d57;
  /* 10762cf4 mov esi, esp */
  ESI = (ESP);
  /* 10762cf6 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10762cf8 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762cfeu);
  /* 10762cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762d01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762d03 call 0x10763630 */
  push32(0x10762d08u); f_10763630();
  /* 10762d08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762d0f je 0x10762d52 */
  if (C.zf) goto L_10762d52;
  /* 10762d11 mov esi, esp */
  ESI = (ESP);
  /* 10762d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762d15 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10762d17 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10762d1du);
  /* 10762d1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762d20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762d22 call 0x10763630 */
  push32(0x10762d27u); f_10763630();
  /* 10762d27 mov esi, esp */
  ESI = (ESP);
  /* 10762d29 push 0x1078b190 */
  push32((uint32_t)(0x1078b190u));
  /* 10762d2e call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762d34u);
  /* 10762d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762d37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762d39 call 0x10763630 */
  push32(0x10762d3eu); f_10763630();
  /* 10762d3e mov esi, esp */
  ESI = (ESP);
  /* 10762d40 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10762d42 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10762d48u);
  /* 10762d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762d4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762d4d call 0x10763630 */
  push32(0x10762d52u); f_10763630();
L_10762d52:;
  /* 10762d52 jmp 0x10762e73 */
  goto L_10762e73;
L_10762d57:;
  /* 10762d57 mov esi, esp */
  ESI = (ESP);
  /* 10762d59 push 9 */
  push32((uint32_t)(0x9u));
  /* 10762d5b call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762d61u);
  /* 10762d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762d64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762d66 call 0x10763630 */
  push32(0x10762d6bu); f_10763630();
  /* 10762d6b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762d72 je 0x10762e73 */
  if (C.zf) goto L_10762e73;
  /* 10762d78 mov esi, esp */
  ESI = (ESP);
  /* 10762d7a push 7 */
  push32((uint32_t)(0x7u));
  /* 10762d7c call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762d82u);
  /* 10762d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762d87 call 0x10763630 */
  push32(0x10762d8cu); f_10763630();
  /* 10762d8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762d91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762d93 jne 0x10762e73 */
  if (!C.zf) goto L_10762e73;
  /* 10762d99 mov esi, esp */
  ESI = (ESP);
  /* 10762d9b push 0xe */
  push32((uint32_t)(0xeu));
  /* 10762d9d call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762da3u);
  /* 10762da3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762da6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762da8 call 0x10763630 */
  push32(0x10762dadu); f_10763630();
  /* 10762dad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762db4 jne 0x10762e73 */
  if (!C.zf) goto L_10762e73;
  /* 10762dba mov esi, esp */
  ESI = (ESP);
  /* 10762dbc push 3 */
  push32((uint32_t)(0x3u));
  /* 10762dbe call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762dc4u);
  /* 10762dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762dc9 call 0x10763630 */
  push32(0x10762dceu); f_10763630();
  /* 10762dce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762dd5 jne 0x10762e73 */
  if (!C.zf) goto L_10762e73;
  /* 10762ddb mov esi, esp */
  ESI = (ESP);
  /* 10762ddd push 2 */
  push32((uint32_t)(0x2u));
  /* 10762ddf call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762de5u);
  /* 10762de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762de8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762dea call 0x10763630 */
  push32(0x10762defu); f_10763630();
  /* 10762def and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762df6 jne 0x10762e73 */
  if (!C.zf) goto L_10762e73;
  /* 10762df8 mov esi, esp */
  ESI = (ESP);
  /* 10762dfa push 4 */
  push32((uint32_t)(0x4u));
  /* 10762dfc call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762e02u);
  /* 10762e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762e05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762e07 call 0x10763630 */
  push32(0x10762e0cu); f_10763630();
  /* 10762e0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762e13 jne 0x10762e73 */
  if (!C.zf) goto L_10762e73;
  /* 10762e15 mov esi, esp */
  ESI = (ESP);
  /* 10762e17 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10762e19 call dword ptr [0x10793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793424))), 0x10762e1fu);
  /* 10762e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762e24 call 0x10763630 */
  push32(0x10762e29u); f_10763630();
  /* 10762e29 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10762e2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10762e30 je 0x10762e73 */
  if (C.zf) goto L_10762e73;
  /* 10762e32 mov esi, esp */
  ESI = (ESP);
  /* 10762e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10762e36 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10762e38 call dword ptr [0x10793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793428))), 0x10762e3eu);
  /* 10762e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762e41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762e43 call 0x10763630 */
  push32(0x10762e48u); f_10763630();
  /* 10762e48 mov esi, esp */
  ESI = (ESP);
  /* 10762e4a push 0x1078b184 */
  push32((uint32_t)(0x1078b184u));
  /* 10762e4f call dword ptr [0x10793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793434))), 0x10762e55u);
  /* 10762e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762e5a call 0x10763630 */
  push32(0x10762e5fu); f_10763630();
  /* 10762e5f mov esi, esp */
  ESI = (ESP);
  /* 10762e61 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10762e63 call dword ptr [0x10793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793440))), 0x10762e69u);
  /* 10762e69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762e6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762e6e call 0x10763630 */
  push32(0x10762e73u); f_10763630();
L_10762e73:;
  /* 10762e73 pop edi */
  EDI = (pop32());
  /* 10762e74 pop esi */
  ESI = (pop32());
  /* 10762e75 pop ebx */
  EBX = (pop32());
  /* 10762e76 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10762e79 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10762e7b call 0x10763630 */
  push32(0x10762e80u); f_10763630();
  /* 10762e80 mov esp, ebp */
  ESP = (EBP);
  /* 10762e82 pop ebp */
  EBP = (pop32());
  /* 10762e83 ret  */
  ESPCHK(0x10761600u, _esp0);
  ESP += 4; return;
}

/* FUN_100034b0 @ 0x107634b0 (63 bytes, 26 insns) */
void f_107634b0(void) {
  FTRACE(0x107634b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107634b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107634b1 mov ebp, esp */
  EBP = (ESP);
  /* 107634b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107634b6 push ebx */
  push32((uint32_t)(EBX));
  /* 107634b7 push esi */
  push32((uint32_t)(ESI));
  /* 107634b8 push edi */
  push32((uint32_t)(EDI));
  /* 107634b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 107634bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 107634c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 107634c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107634c8 mov esi, esp */
  ESI = (ESP);
  /* 107634ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107634cd push eax */
  push32((uint32_t)(EAX));
  /* 107634ce call dword ptr [0x10793418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793418))), 0x107634d4u);
  /* 107634d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107634d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107634d9 call 0x10763630 */
  push32(0x107634deu); f_10763630();
  /* 107634de pop edi */
  EDI = (pop32());
  /* 107634df pop esi */
  ESI = (pop32());
  /* 107634e0 pop ebx */
  EBX = (pop32());
  /* 107634e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107634e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107634e6 call 0x10763630 */
  push32(0x107634ebu); f_10763630();
  /* 107634eb mov esp, ebp */
  ESP = (EBP);
  /* 107634ed pop ebp */
  EBP = (pop32());
  /* 107634ee ret  */
  ESPCHK(0x107634b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003500 @ 0x10763500 (67 bytes, 28 insns) */
void f_10763500(void) {
  FTRACE(0x10763500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10763500 push ebp */
  push32((uint32_t)(EBP));
  /* 10763501 mov ebp, esp */
  EBP = (ESP);
  /* 10763503 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10763506 push ebx */
  push32((uint32_t)(EBX));
  /* 10763507 push esi */
  push32((uint32_t)(ESI));
  /* 10763508 push edi */
  push32((uint32_t)(EDI));
  /* 10763509 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1076350c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10763511 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10763516 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10763518 mov esi, esp */
  ESI = (ESP);
  /* 1076351a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 1076351d push eax */
  push32((uint32_t)(EAX));
  /* 1076351e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763521 push ecx */
  push32((uint32_t)(ECX));
  /* 10763522 call dword ptr [0x1079341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079341c))), 0x10763528u);
  /* 10763528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076352b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076352d call 0x10763630 */
  push32(0x10763532u); f_10763630();
  /* 10763532 pop edi */
  EDI = (pop32());
  /* 10763533 pop esi */
  ESI = (pop32());
  /* 10763534 pop ebx */
  EBX = (pop32());
  /* 10763535 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763538 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076353a call 0x10763630 */
  push32(0x1076353fu); f_10763630();
  /* 1076353f mov esp, ebp */
  ESP = (EBP);
  /* 10763541 pop ebp */
  EBP = (pop32());
  /* 10763542 ret  */
  ESPCHK(0x10763500u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10763630 (56 bytes, 28 insns) */
void f_10763630(void) {
  FTRACE(0x10763630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10763630 jne 0x10763633 */
  if (!C.zf) goto L_10763633;
  /* 10763632 ret  */
  ESPCHK(0x10763630u, _esp0);
  ESP += 4; return;
L_10763633:;
  /* 10763633 push ebp */
  push32((uint32_t)(EBP));
  /* 10763634 mov ebp, esp */
  EBP = (ESP);
  /* 10763636 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10763639 push eax */
  push32((uint32_t)(EAX));
  /* 1076363a push edx */
  push32((uint32_t)(EDX));
  /* 1076363b push ebx */
  push32((uint32_t)(EBX));
  /* 1076363c push esi */
  push32((uint32_t)(ESI));
  /* 1076363d push edi */
  push32((uint32_t)(EDI));
  /* 1076363e push 0x1078b27c */
  push32((uint32_t)(0x1078b27cu));
  /* 10763643 push 0x1078b278 */
  push32((uint32_t)(0x1078b278u));
  /* 10763648 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1076364a push 0x1078b268 */
  push32((uint32_t)(0x1078b268u));
  /* 1076364f push 1 */
  push32((uint32_t)(0x1u));
  /* 10763651 call 0x10763a00 */
  push32(0x10763656u); f_10763a00();
  /* 10763656 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763659 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076365c jne 0x1076365f */
  if (!C.zf) goto L_1076365f;
  /* 1076365e int3  */
  x86_unimpl("int3 @ 0x1076365e");
L_1076365f:;
  /* 1076365f pop edi */
  EDI = (pop32());
  /* 10763660 pop esi */
  ESI = (pop32());
  /* 10763661 pop ebx */
  EBX = (pop32());
  /* 10763662 pop edx */
  EDX = (pop32());
  /* 10763663 pop eax */
  EAX = (pop32());
  /* 10763664 mov esp, ebp */
  ESP = (EBP);
  /* 10763666 pop ebp */
  EBP = (pop32());
  /* 10763667 ret  */
  ESPCHK(0x10763630u, _esp0);
  ESP += 4; return;
}

/* FUN_10003670 @ 0x10763670 (313 bytes, 78 insns) */
void f_10763670(void) {
  FTRACE(0x10763670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10763670 push ebp */
  push32((uint32_t)(EBP));
  /* 10763671 mov ebp, esp */
  EBP = (ESP);
  /* 10763673 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763677 jne 0x10763737 */
  if (!C.zf) goto L_10763737;
  /* 1076367d call dword ptr [0x10793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793324))), 0x10763683u);
  /* 10763683 mov dword ptr [0x1079055c], eax */
  w32((uint32_t)(0x1079055c), (EAX));
  /* 10763688 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076368a call 0x10767130 */
  push32(0x1076368fu); f_10767130();
  /* 1076368f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763694 jne 0x1076369d */
  if (!C.zf) goto L_1076369d;
  /* 10763696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10763698 jmp 0x107637a5 */
  goto L_107637a5;
L_1076369d:;
  /* 1076369d mov eax, dword ptr [0x1079055c] */
  EAX = (r32((uint32_t)(0x1079055c)));
  /* 107636a2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107636a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 107636aa mov dword ptr [0x10790568], eax */
  w32((uint32_t)(0x10790568), (EAX));
  /* 107636af mov ecx, dword ptr [0x1079055c] */
  ECX = (r32((uint32_t)(0x1079055c)));
  /* 107636b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107636bb mov dword ptr [0x10790564], ecx */
  w32((uint32_t)(0x10790564), (ECX));
  /* 107636c1 mov edx, dword ptr [0x10790564] */
  EDX = (r32((uint32_t)(0x10790564)));
  /* 107636c7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 107636ca add edx, dword ptr [0x10790568] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10790568))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107636d0 mov dword ptr [0x10790560], edx */
  w32((uint32_t)(0x10790560), (EDX));
  /* 107636d6 mov eax, dword ptr [0x1079055c] */
  EAX = (r32((uint32_t)(0x1079055c)));
  /* 107636db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107636de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107636e3 mov dword ptr [0x1079055c], eax */
  w32((uint32_t)(0x1079055c), (EAX));
  /* 107636e8 call 0x107642a0 */
  push32(0x107636edu); f_107642a0();
  /* 107636ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107636ef jne 0x107636fd */
  if (!C.zf) goto L_107636fd;
  /* 107636f1 call 0x10767180 */
  push32(0x107636f6u); f_10767180();
  /* 107636f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107636f8 jmp 0x107637a5 */
  goto L_107637a5;
L_107636fd:;
  /* 107636fd call dword ptr [0x10793320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793320))), 0x10763703u);
  /* 10763703 mov dword ptr [0x107920ac], eax */
  w32((uint32_t)(0x107920ac), (EAX));
  /* 10763708 call 0x10766f10 */
  push32(0x1076370du); f_10766f10();
  /* 1076370d mov dword ptr [0x10790544], eax */
  w32((uint32_t)(0x10790544), (EAX));
  /* 10763712 call 0x10764550 */
  push32(0x10763717u); f_10764550();
  /* 10763717 call 0x10766a00 */
  push32(0x1076371cu); f_10766a00();
  /* 1076371c call 0x107668b0 */
  push32(0x10763721u); f_107668b0();
  /* 10763721 call 0x107640a0 */
  push32(0x10763726u); f_107640a0();
  /* 10763726 mov ecx, dword ptr [0x10790540] */
  ECX = (r32((uint32_t)(0x10790540)));
  /* 1076372c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076372f mov dword ptr [0x10790540], ecx */
  w32((uint32_t)(0x10790540), (ECX));
  /* 10763735 jmp 0x107637a0 */
  goto L_107637a0;
L_10763737:;
  /* 10763737 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076373b jne 0x10763790 */
  if (!C.zf) goto L_10763790;
  /* 1076373d cmp dword ptr [0x10790540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763744 jle 0x1076378a */
  if ((C.zf||C.sf!=C.of)) goto L_1076378a;
  /* 10763746 mov edx, dword ptr [0x10790540] */
  EDX = (r32((uint32_t)(0x10790540)));
  /* 1076374c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076374f mov dword ptr [0x10790540], edx */
  w32((uint32_t)(0x10790540), (EDX));
  /* 10763755 cmp dword ptr [0x10790594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076375c jne 0x10763763 */
  if (!C.zf) goto L_10763763;
  /* 1076375e call 0x10764120 */
  push32(0x10763763u); f_10764120();
L_10763763:;
  /* 10763763 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10763765 call 0x10765e50 */
  push32(0x1076376au); f_10765e50();
  /* 1076376a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076376d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10763770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763772 je 0x10763779 */
  if (C.zf) goto L_10763779;
  /* 10763774 call 0x10766760 */
  push32(0x10763779u); f_10766760();
L_10763779:;
  /* 10763779 call 0x10764880 */
  push32(0x1076377eu); f_10764880();
  /* 1076377e call 0x10764330 */
  push32(0x10763783u); f_10764330();
  /* 10763783 call 0x10767180 */
  push32(0x10763788u); f_10767180();
  /* 10763788 jmp 0x1076378e */
  goto L_1076378e;
L_1076378a:;
  /* 1076378a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076378c jmp 0x107637a5 */
  goto L_107637a5;
L_1076378e:;
  /* 1076378e jmp 0x107637a0 */
  goto L_107637a0;
L_10763790:;
  /* 10763790 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763794 jne 0x107637a0 */
  if (!C.zf) goto L_107637a0;
  /* 10763796 push 0 */
  push32((uint32_t)(0x0u));
  /* 10763798 call 0x10764420 */
  push32(0x1076379du); f_10764420();
  /* 1076379d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107637a0:;
  /* 107637a0 mov eax, 1 */
  EAX = (0x1u);
L_107637a5:;
  /* 107637a5 pop ebp */
  EBP = (pop32());
  /* 107637a6 ret 0xc */
  ESPCHK(0x10763670u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x107637b0 (243 bytes, 86 insns) */
void f_107637b0(void) {
  FTRACE(0x107637b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107637b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107637b1 mov ebp, esp */
  EBP = (ESP);
  /* 107637b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107637b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107637bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107637bf jne 0x107637d1 */
  if (!C.zf) goto L_107637d1;
  /* 107637c1 cmp dword ptr [0x10790540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107637c8 jne 0x107637d1 */
  if (!C.zf) goto L_107637d1;
  /* 107637ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107637cc jmp 0x1076389d */
  goto L_1076389d;
L_107637d1:;
  /* 107637d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107637d5 je 0x107637dd */
  if (C.zf) goto L_107637dd;
  /* 107637d7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107637db jne 0x1076381f */
  if (!C.zf) goto L_1076381f;
L_107637dd:;
  /* 107637dd cmp dword ptr [0x107920bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107920bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107637e4 je 0x107637fb */
  if (C.zf) goto L_107637fb;
  /* 107637e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107637e9 push eax */
  push32((uint32_t)(EAX));
  /* 107637ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107637ed push ecx */
  push32((uint32_t)(ECX));
  /* 107637ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107637f1 push edx */
  push32((uint32_t)(EDX));
  /* 107637f2 call dword ptr [0x107920bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107920bc))), 0x107637f8u);
  /* 107637f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107637fb:;
  /* 107637fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107637ff je 0x10763815 */
  if (C.zf) goto L_10763815;
  /* 10763801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763804 push eax */
  push32((uint32_t)(EAX));
  /* 10763805 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763808 push ecx */
  push32((uint32_t)(ECX));
  /* 10763809 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076380c push edx */
  push32((uint32_t)(EDX));
  /* 1076380d call 0x10763670 */
  push32(0x10763812u); f_10763670();
  /* 10763812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10763815:;
  /* 10763815 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763819 jne 0x1076381f */
  if (!C.zf) goto L_1076381f;
  /* 1076381b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076381d jmp 0x1076389d */
  goto L_1076389d;
L_1076381f:;
  /* 1076381f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763822 push eax */
  push32((uint32_t)(EAX));
  /* 10763823 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763826 push ecx */
  push32((uint32_t)(ECX));
  /* 10763827 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076382a push edx */
  push32((uint32_t)(EDX));
  /* 1076382b call 0x10761014 */
  push32(0x10763830u); f_10761014();
  /* 10763830 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10763833 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763837 jne 0x1076384e */
  if (!C.zf) goto L_1076384e;
  /* 10763839 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076383d jne 0x1076384e */
  if (!C.zf) goto L_1076384e;
  /* 1076383f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763842 push eax */
  push32((uint32_t)(EAX));
  /* 10763843 push 0 */
  push32((uint32_t)(0x0u));
  /* 10763845 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763848 push ecx */
  push32((uint32_t)(ECX));
  /* 10763849 call 0x10763670 */
  push32(0x1076384eu); f_10763670();
L_1076384e:;
  /* 1076384e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763852 je 0x1076385a */
  if (C.zf) goto L_1076385a;
  /* 10763854 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763858 jne 0x1076389a */
  if (!C.zf) goto L_1076389a;
L_1076385a:;
  /* 1076385a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076385d push edx */
  push32((uint32_t)(EDX));
  /* 1076385e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763861 push eax */
  push32((uint32_t)(EAX));
  /* 10763862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763865 push ecx */
  push32((uint32_t)(ECX));
  /* 10763866 call 0x10763670 */
  push32(0x1076386bu); f_10763670();
  /* 1076386b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076386d jne 0x10763876 */
  if (!C.zf) goto L_10763876;
  /* 1076386f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10763876:;
  /* 10763876 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076387a je 0x1076389a */
  if (C.zf) goto L_1076389a;
  /* 1076387c cmp dword ptr [0x107920bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107920bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763883 je 0x1076389a */
  if (C.zf) goto L_1076389a;
  /* 10763885 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763888 push edx */
  push32((uint32_t)(EDX));
  /* 10763889 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076388c push eax */
  push32((uint32_t)(EAX));
  /* 1076388d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763890 push ecx */
  push32((uint32_t)(ECX));
  /* 10763891 call dword ptr [0x107920bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107920bc))), 0x10763897u);
  /* 10763897 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076389a:;
  /* 1076389a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076389d:;
  /* 1076389d mov esp, ebp */
  ESP = (EBP);
  /* 1076389f pop ebp */
  EBP = (pop32());
  /* 107638a0 ret 0xc */
  ESPCHK(0x107637b0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x107638b0 (58 bytes, 18 insns) */
void f_107638b0(void) {
  FTRACE(0x107638b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107638b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107638b1 mov ebp, esp */
  EBP = (ESP);
  /* 107638b3 cmp dword ptr [0x1079054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1079054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107638ba je 0x107638ce */
  if (C.zf) goto L_107638ce;
  /* 107638bc cmp dword ptr [0x1079054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107638c3 jne 0x107638d3 */
  if (!C.zf) goto L_107638d3;
  /* 107638c5 cmp dword ptr [0x10790550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10790550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107638cc jne 0x107638d3 */
  if (!C.zf) goto L_107638d3;
L_107638ce:;
  /* 107638ce call 0x10767220 */
  push32(0x107638d3u); f_10767220();
L_107638d3:;
  /* 107638d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107638d6 push eax */
  push32((uint32_t)(EAX));
  /* 107638d7 call 0x10767270 */
  push32(0x107638dcu); f_10767270();
  /* 107638dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107638df push 0xff */
  push32((uint32_t)(0xffu));
  /* 107638e4 call dword ptr [0x1078ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1078ea30))), 0x107638eau);
  /* 107638ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107638ed pop ebp */
  EBP = (pop32());
  /* 107638ee ret  */
  ESPCHK(0x107638b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038f0 @ 0x107638f0 (11 bytes, 5 insns) */
void f_107638f0(void) {
  FTRACE(0x107638f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107638f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107638f1 mov ebp, esp */
  EBP = (ESP);
  /* 107638f3 call dword ptr [0x10793328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793328))), 0x107638f9u);
  /* 107638f9 pop ebp */
  EBP = (pop32());
  /* 107638fa ret  */
  ESPCHK(0x107638f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003900 @ 0x10763900 (87 bytes, 30 insns) */
void f_10763900(void) {
  FTRACE(0x10763900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10763900 push ebp */
  push32((uint32_t)(EBP));
  /* 10763901 mov ebp, esp */
  EBP = (ESP);
  /* 10763903 push ecx */
  push32((uint32_t)(ECX));
  /* 10763904 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763908 jl 0x10763910 */
  if ((C.sf!=C.of)) goto L_10763910;
  /* 1076390a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076390e jl 0x10763915 */
  if ((C.sf!=C.of)) goto L_10763915;
L_10763910:;
  /* 10763910 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10763913 jmp 0x10763953 */
  goto L_10763953;
L_10763915:;
  /* 10763915 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763919 jne 0x10763927 */
  if (!C.zf) goto L_10763927;
  /* 1076391b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076391e mov eax, dword ptr [eax*4 + 0x1078ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1078ea38)));
  /* 10763925 jmp 0x10763953 */
  goto L_10763953;
L_10763927:;
  /* 10763927 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076392a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1076392d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076392f je 0x10763936 */
  if (C.zf) goto L_10763936;
  /* 10763931 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10763934 jmp 0x10763953 */
  goto L_10763953;
L_10763936:;
  /* 10763936 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763939 mov eax, dword ptr [edx*4 + 0x1078ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1078ea38)));
  /* 10763940 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10763943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763946 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763949 mov dword ptr [ecx*4 + 0x1078ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1078ea38), (EDX));
  /* 10763950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10763953:;
  /* 10763953 mov esp, ebp */
  ESP = (EBP);
  /* 10763955 pop ebp */
  EBP = (pop32());
  /* 10763956 ret  */
  ESPCHK(0x10763900u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10763960 (126 bytes, 38 insns) */
void f_10763960(void) {
  FTRACE(0x10763960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10763960 push ebp */
  push32((uint32_t)(EBP));
  /* 10763961 mov ebp, esp */
  EBP = (ESP);
  /* 10763963 push ecx */
  push32((uint32_t)(ECX));
  /* 10763964 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763968 jl 0x10763970 */
  if ((C.sf!=C.of)) goto L_10763970;
  /* 1076396a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076396e jl 0x10763977 */
  if ((C.sf!=C.of)) goto L_10763977;
L_10763970:;
  /* 10763970 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10763975 jmp 0x107639da */
  goto L_107639da;
L_10763977:;
  /* 10763977 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076397b jne 0x10763989 */
  if (!C.zf) goto L_10763989;
  /* 1076397d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763980 mov eax, dword ptr [eax*4 + 0x1078ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1078ea44)));
  /* 10763987 jmp 0x107639da */
  goto L_107639da;
L_10763989:;
  /* 10763989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076398c mov edx, dword ptr [ecx*4 + 0x1078ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea44)));
  /* 10763993 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10763996 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076399a jne 0x107639b0 */
  if (!C.zf) goto L_107639b0;
  /* 1076399c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1076399e call dword ptr [0x1079332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079332c))), 0x107639a4u);
  /* 107639a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107639a7 mov dword ptr [ecx*4 + 0x1078ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1078ea44), (EAX));
  /* 107639ae jmp 0x107639d7 */
  goto L_107639d7;
L_107639b0:;
  /* 107639b0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107639b4 jne 0x107639ca */
  if (!C.zf) goto L_107639ca;
  /* 107639b6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107639b8 call dword ptr [0x1079332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079332c))), 0x107639beu);
  /* 107639be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107639c1 mov dword ptr [edx*4 + 0x1078ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1078ea44), (EAX));
  /* 107639c8 jmp 0x107639d7 */
  goto L_107639d7;
L_107639ca:;
  /* 107639ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107639cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107639d0 mov dword ptr [eax*4 + 0x1078ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1078ea44), (ECX));
L_107639d7:;
  /* 107639d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107639da:;
  /* 107639da mov esp, ebp */
  ESP = (EBP);
  /* 107639dc pop ebp */
  EBP = (pop32());
  /* 107639dd ret  */
  ESPCHK(0x10763960u, _esp0);
  ESP += 4; return;
}

/* FUN_100039e0 @ 0x107639e0 (28 bytes, 11 insns) */
void f_107639e0(void) {
  FTRACE(0x107639e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107639e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107639e1 mov ebp, esp */
  EBP = (ESP);
  /* 107639e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107639e4 mov eax, dword ptr [0x107920a0] */
  EAX = (r32((uint32_t)(0x107920a0)));
  /* 107639e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107639ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107639ef mov dword ptr [0x107920a0], ecx */
  w32((uint32_t)(0x107920a0), (ECX));
  /* 107639f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107639f8 mov esp, ebp */
  ESP = (EBP);
  /* 107639fa pop ebp */
  EBP = (pop32());
  /* 107639fb ret  */
  ESPCHK(0x107639e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a00 @ 0x10763a00 (912 bytes, 248 insns) */
void f_10763a00(void) {
  FTRACE(0x10763a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10763a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10763a01 mov ebp, esp */
  EBP = (ESP);
  /* 10763a03 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10763a08 call 0x10767ae0 */
  push32(0x10763a0du); f_10767ae0();
  /* 10763a0d push edi */
  push32((uint32_t)(EDI));
  /* 10763a0e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10763a15 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10763a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10763a1c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10763a22 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10763a24 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10763a26 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10763a27 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10763a2e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10763a33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10763a35 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10763a3b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10763a3d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10763a3f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10763a40 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10763a47 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10763a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10763a4e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10763a54 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10763a56 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10763a58 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10763a59 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10763a5c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10763a62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763a66 jl 0x10763a6e */
  if ((C.sf!=C.of)) goto L_10763a6e;
  /* 10763a68 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763a6c jl 0x10763a76 */
  if ((C.sf!=C.of)) goto L_10763a76;
L_10763a6e:;
  /* 10763a6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10763a71 jmp 0x10763d8b */
  goto L_10763d8b;
L_10763a76:;
  /* 10763a76 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763a7a jne 0x10763b20 */
  if (!C.zf) goto L_10763b20;
  /* 10763a80 push 0x1078ea34 */
  push32((uint32_t)(0x1078ea34u));
  /* 10763a85 call dword ptr [0x10793344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793344))), 0x10763a8bu);
  /* 10763a8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763a8d jle 0x10763b20 */
  if ((C.zf||C.sf!=C.of)) goto L_10763b20;
  /* 10763a93 cmp dword ptr [0x10790554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763a9a jne 0x10763ade */
  if (!C.zf) goto L_10763ade;
  /* 10763a9c push 0x1078b424 */
  push32((uint32_t)(0x1078b424u));
  /* 10763aa1 call dword ptr [0x10793340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793340))), 0x10763aa7u);
  /* 10763aa7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10763aad cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763ab4 je 0x10763ad6 */
  if (C.zf) goto L_10763ad6;
  /* 10763ab6 push 0x1078b418 */
  push32((uint32_t)(0x1078b418u));
  /* 10763abb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10763ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 10763ac2 call dword ptr [0x1079333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079333c))), 0x10763ac8u);
  /* 10763ac8 mov dword ptr [0x10790554], eax */
  w32((uint32_t)(0x10790554), (EAX));
  /* 10763acd cmp dword ptr [0x10790554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763ad4 jne 0x10763ade */
  if (!C.zf) goto L_10763ade;
L_10763ad6:;
  /* 10763ad6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10763ad9 jmp 0x10763d8b */
  goto L_10763d8b;
L_10763ade:;
  /* 10763ade mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763ae1 push edx */
  push32((uint32_t)(EDX));
  /* 10763ae2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763ae5 push eax */
  push32((uint32_t)(EAX));
  /* 10763ae6 push 0x1078b3e4 */
  push32((uint32_t)(0x1078b3e4u));
  /* 10763aeb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10763af1 push ecx */
  push32((uint32_t)(ECX));
  /* 10763af2 call dword ptr [0x10790554] */
  call_ind((uint32_t)(r32((uint32_t)(0x10790554))), 0x10763af8u);
  /* 10763af8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763afb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10763b01 push edx */
  push32((uint32_t)(EDX));
  /* 10763b02 call dword ptr [0x10793338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793338))), 0x10763b08u);
  /* 10763b08 push 0x1078ea34 */
  push32((uint32_t)(0x1078ea34u));
  /* 10763b0d call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x10763b13u);
  /* 10763b13 call 0x107638f0 */
  push32(0x10763b18u); f_107638f0();
  /* 10763b18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10763b1b jmp 0x10763d8b */
  goto L_10763d8b;
L_10763b20:;
  /* 10763b20 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763b24 je 0x10763b5d */
  if (C.zf) goto L_10763b5d;
  /* 10763b26 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10763b2c push eax */
  push32((uint32_t)(EAX));
  /* 10763b2d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10763b30 push ecx */
  push32((uint32_t)(ECX));
  /* 10763b31 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10763b36 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10763b3c push edx */
  push32((uint32_t)(EDX));
  /* 10763b3d call 0x107679e0 */
  push32(0x10763b42u); f_107679e0();
  /* 10763b42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763b47 jge 0x10763b5d */
  if ((C.sf==C.of)) goto L_10763b5d;
  /* 10763b49 push 0x1078b3b8 */
  push32((uint32_t)(0x1078b3b8u));
  /* 10763b4e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10763b54 push eax */
  push32((uint32_t)(EAX));
  /* 10763b55 call 0x107678f0 */
  push32(0x10763b5au); f_107678f0();
  /* 10763b5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763b5d:;
  /* 10763b5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763b61 jne 0x10763b95 */
  if (!C.zf) goto L_10763b95;
  /* 10763b63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763b67 je 0x10763b75 */
  if (C.zf) goto L_10763b75;
  /* 10763b69 mov dword ptr [ebp - 0x3028], 0x1078b3a4 */
  w32((uint32_t)(EBP + -0x3028), (0x1078b3a4u));
  /* 10763b73 jmp 0x10763b7f */
  goto L_10763b7f;
L_10763b75:;
  /* 10763b75 mov dword ptr [ebp - 0x3028], 0x1078b390 */
  w32((uint32_t)(EBP + -0x3028), (0x1078b390u));
L_10763b7f:;
  /* 10763b7f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10763b85 push ecx */
  push32((uint32_t)(ECX));
  /* 10763b86 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10763b8c push edx */
  push32((uint32_t)(EDX));
  /* 10763b8d call 0x107678f0 */
  push32(0x10763b92u); f_107678f0();
  /* 10763b92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763b95:;
  /* 10763b95 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10763b9b push eax */
  push32((uint32_t)(EAX));
  /* 10763b9c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10763ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 10763ba3 call 0x10767900 */
  push32(0x10763ba8u); f_10767900();
  /* 10763ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763bab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763baf jne 0x10763bea */
  if (!C.zf) goto L_10763bea;
  /* 10763bb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763bb4 mov eax, dword ptr [edx*4 + 0x1078ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1078ea38)));
  /* 10763bbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10763bbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763bc0 je 0x10763bd6 */
  if (C.zf) goto L_10763bd6;
  /* 10763bc2 push 0x1078b38c */
  push32((uint32_t)(0x1078b38cu));
  /* 10763bc7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10763bcd push ecx */
  push32((uint32_t)(ECX));
  /* 10763bce call 0x10767900 */
  push32(0x10763bd3u); f_10767900();
  /* 10763bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763bd6:;
  /* 10763bd6 push 0x1078b388 */
  push32((uint32_t)(0x1078b388u));
  /* 10763bdb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10763be1 push edx */
  push32((uint32_t)(EDX));
  /* 10763be2 call 0x10767900 */
  push32(0x10763be7u); f_10767900();
  /* 10763be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763bea:;
  /* 10763bea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763bee je 0x10763c32 */
  if (C.zf) goto L_10763c32;
  /* 10763bf0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10763bf6 push eax */
  push32((uint32_t)(EAX));
  /* 10763bf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763bfa push ecx */
  push32((uint32_t)(ECX));
  /* 10763bfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763bfe push edx */
  push32((uint32_t)(EDX));
  /* 10763bff push 0x1078b37c */
  push32((uint32_t)(0x1078b37cu));
  /* 10763c04 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10763c09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10763c0f push eax */
  push32((uint32_t)(EAX));
  /* 10763c10 call 0x107677f0 */
  push32(0x10763c15u); f_107677f0();
  /* 10763c15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763c1a jge 0x10763c30 */
  if ((C.sf==C.of)) goto L_10763c30;
  /* 10763c1c push 0x1078b3b8 */
  push32((uint32_t)(0x1078b3b8u));
  /* 10763c21 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10763c27 push ecx */
  push32((uint32_t)(ECX));
  /* 10763c28 call 0x107678f0 */
  push32(0x10763c2du); f_107678f0();
  /* 10763c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763c30:;
  /* 10763c30 jmp 0x10763c48 */
  goto L_10763c48;
L_10763c32:;
  /* 10763c32 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10763c38 push edx */
  push32((uint32_t)(EDX));
  /* 10763c39 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10763c3f push eax */
  push32((uint32_t)(EAX));
  /* 10763c40 call 0x107678f0 */
  push32(0x10763c45u); f_107678f0();
  /* 10763c45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763c48:;
  /* 10763c48 cmp dword ptr [0x107920a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107920a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763c4f je 0x10763c8c */
  if (C.zf) goto L_10763c8c;
  /* 10763c51 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10763c57 push ecx */
  push32((uint32_t)(ECX));
  /* 10763c58 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10763c5e push edx */
  push32((uint32_t)(EDX));
  /* 10763c5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763c62 push eax */
  push32((uint32_t)(EAX));
  /* 10763c63 call dword ptr [0x107920a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107920a0))), 0x10763c69u);
  /* 10763c69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763c6e je 0x10763c8c */
  if (C.zf) goto L_10763c8c;
  /* 10763c70 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763c74 jne 0x10763c81 */
  if (!C.zf) goto L_10763c81;
  /* 10763c76 push 0x1078ea34 */
  push32((uint32_t)(0x1078ea34u));
  /* 10763c7b call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x10763c81u);
L_10763c81:;
  /* 10763c81 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10763c87 jmp 0x10763d8b */
  goto L_10763d8b;
L_10763c8c:;
  /* 10763c8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763c8f mov edx, dword ptr [ecx*4 + 0x1078ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea38)));
  /* 10763c96 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10763c99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10763c9b je 0x10763cdb */
  if (C.zf) goto L_10763cdb;
  /* 10763c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763ca0 cmp dword ptr [eax*4 + 0x1078ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1078ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763ca8 je 0x10763cdb */
  if (C.zf) goto L_10763cdb;
  /* 10763caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10763cac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10763cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10763cb3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10763cb9 push edx */
  push32((uint32_t)(EDX));
  /* 10763cba call 0x10767770 */
  push32(0x10763cbfu); f_10767770();
  /* 10763cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763cc2 push eax */
  push32((uint32_t)(EAX));
  /* 10763cc3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10763cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10763cca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763ccd mov edx, dword ptr [ecx*4 + 0x1078ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea44)));
  /* 10763cd4 push edx */
  push32((uint32_t)(EDX));
  /* 10763cd5 call dword ptr [0x10793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793330))), 0x10763cdbu);
L_10763cdb:;
  /* 10763cdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763cde mov ecx, dword ptr [eax*4 + 0x1078ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1078ea38)));
  /* 10763ce5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10763ce8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10763cea je 0x10763cf9 */
  if (C.zf) goto L_10763cf9;
  /* 10763cec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10763cf2 push edx */
  push32((uint32_t)(EDX));
  /* 10763cf3 call dword ptr [0x10793338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793338))), 0x10763cf9u);
L_10763cf9:;
  /* 10763cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763cfc mov ecx, dword ptr [eax*4 + 0x1078ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1078ea38)));
  /* 10763d03 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10763d06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10763d08 je 0x10763d78 */
  if (C.zf) goto L_10763d78;
  /* 10763d0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763d0e je 0x10763d2d */
  if (C.zf) goto L_10763d2d;
  /* 10763d10 push 0xa */
  push32((uint32_t)(0xau));
  /* 10763d12 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10763d18 push edx */
  push32((uint32_t)(EDX));
  /* 10763d19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763d1c push eax */
  push32((uint32_t)(EAX));
  /* 10763d1d call 0x10767480 */
  push32(0x10763d22u); f_10767480();
  /* 10763d22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763d25 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10763d2b jmp 0x10763d37 */
  goto L_10763d37;
L_10763d2d:;
  /* 10763d2d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10763d37:;
  /* 10763d37 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10763d3d push ecx */
  push32((uint32_t)(ECX));
  /* 10763d3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10763d41 push edx */
  push32((uint32_t)(EDX));
  /* 10763d42 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10763d48 push eax */
  push32((uint32_t)(EAX));
  /* 10763d49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763d4c push ecx */
  push32((uint32_t)(ECX));
  /* 10763d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10763d50 push edx */
  push32((uint32_t)(EDX));
  /* 10763d51 call 0x10763d90 */
  push32(0x10763d56u); f_10763d90();
  /* 10763d56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763d59 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10763d5f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763d63 jne 0x10763d70 */
  if (!C.zf) goto L_10763d70;
  /* 10763d65 push 0x1078ea34 */
  push32((uint32_t)(0x1078ea34u));
  /* 10763d6a call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x10763d70u);
L_10763d70:;
  /* 10763d70 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10763d76 jmp 0x10763d8b */
  goto L_10763d8b;
L_10763d78:;
  /* 10763d78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763d7c jne 0x10763d89 */
  if (!C.zf) goto L_10763d89;
  /* 10763d7e push 0x1078ea34 */
  push32((uint32_t)(0x1078ea34u));
  /* 10763d83 call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x10763d89u);
L_10763d89:;
  /* 10763d89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10763d8b:;
  /* 10763d8b pop edi */
  EDI = (pop32());
  /* 10763d8c mov esp, ebp */
  ESP = (EBP);
  /* 10763d8e pop ebp */
  EBP = (pop32());
  /* 10763d8f ret  */
  ESPCHK(0x10763a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d90 @ 0x10763d90 (780 bytes, 197 insns) */
void f_10763d90(void) {
  FTRACE(0x10763d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10763d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10763d91 mov ebp, esp */
  EBP = (ESP);
  /* 10763d93 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10763d98 call 0x10767ae0 */
  push32(0x10763d9du); f_10767ae0();
L_10763d9d:;
  /* 10763d9d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763da1 jne 0x10763dc8 */
  if (!C.zf) goto L_10763dc8;
  /* 10763da3 push 0x1078b574 */
  push32((uint32_t)(0x1078b574u));
  /* 10763da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10763daa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10763daf push 0x1078b568 */
  push32((uint32_t)(0x1078b568u));
  /* 10763db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10763db6 call 0x10763a00 */
  push32(0x10763dbbu); f_10763a00();
  /* 10763dbb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763dbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763dc1 jne 0x10763dc8 */
  if (!C.zf) goto L_10763dc8;
  /* 10763dc3 call 0x107638f0 */
  push32(0x10763dc8u); f_107638f0();
L_10763dc8:;
  /* 10763dc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10763dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763dcc jne 0x10763d9d */
  if (!C.zf) goto L_10763d9d;
  /* 10763dce push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10763dd3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10763dd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10763dda push 0 */
  push32((uint32_t)(0x0u));
  /* 10763ddc call dword ptr [0x10793348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793348))), 0x10763de2u);
  /* 10763de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10763de4 jne 0x10763dfa */
  if (!C.zf) goto L_10763dfa;
  /* 10763de6 push 0x1078b550 */
  push32((uint32_t)(0x1078b550u));
  /* 10763deb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10763df1 push edx */
  push32((uint32_t)(EDX));
  /* 10763df2 call 0x107678f0 */
  push32(0x10763df7u); f_107678f0();
  /* 10763df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763dfa:;
  /* 10763dfa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10763e00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10763e03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10763e06 push ecx */
  push32((uint32_t)(ECX));
  /* 10763e07 call 0x10767770 */
  push32(0x10763e0cu); f_10767770();
  /* 10763e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763e0f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763e12 jbe 0x10763e3d */
  if ((C.cf||C.zf)) goto L_10763e3d;
  /* 10763e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10763e17 push edx */
  push32((uint32_t)(EDX));
  /* 10763e18 call 0x10767770 */
  push32(0x10763e1du); f_10767770();
  /* 10763e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763e20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10763e23 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10763e27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10763e2a push 3 */
  push32((uint32_t)(0x3u));
  /* 10763e2c push 0x1078b54c */
  push32((uint32_t)(0x1078b54cu));
  /* 10763e31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10763e34 push eax */
  push32((uint32_t)(EAX));
  /* 10763e35 call 0x10768160 */
  push32(0x10763e3au); f_10768160();
  /* 10763e3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763e3d:;
  /* 10763e3d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10763e40 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10763e46 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763e4d je 0x10763e98 */
  if (C.zf) goto L_10763e98;
  /* 10763e4f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10763e55 push edx */
  push32((uint32_t)(EDX));
  /* 10763e56 call 0x10767770 */
  push32(0x10763e5bu); f_10767770();
  /* 10763e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763e5e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763e61 jbe 0x10763e98 */
  if ((C.cf||C.zf)) goto L_10763e98;
  /* 10763e63 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10763e69 push eax */
  push32((uint32_t)(EAX));
  /* 10763e6a call 0x10767770 */
  push32(0x10763e6fu); f_10767770();
  /* 10763e6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10763e72 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10763e78 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10763e7c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10763e82 push 3 */
  push32((uint32_t)(0x3u));
  /* 10763e84 push 0x1078b54c */
  push32((uint32_t)(0x1078b54cu));
  /* 10763e89 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10763e8f push eax */
  push32((uint32_t)(EAX));
  /* 10763e90 call 0x10768160 */
  push32(0x10763e95u); f_10768160();
  /* 10763e95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10763e98:;
  /* 10763e98 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763e9c jne 0x10763eaa */
  if (!C.zf) goto L_10763eaa;
  /* 10763e9e mov dword ptr [ebp - 0x1114], 0x1078b4d8 */
  w32((uint32_t)(EBP + -0x1114), (0x1078b4d8u));
  /* 10763ea8 jmp 0x10763eb4 */
  goto L_10763eb4;
L_10763eaa:;
  /* 10763eaa mov dword ptr [ebp - 0x1114], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1114), (0x1078b278u));
L_10763eb4:;
  /* 10763eb4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10763eb7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10763eba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10763ebc je 0x10763ec9 */
  if (C.zf) goto L_10763ec9;
  /* 10763ebe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10763ec1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10763ec7 jmp 0x10763ed3 */
  goto L_10763ed3;
L_10763ec9:;
  /* 10763ec9 mov dword ptr [ebp - 0x1118], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1118), (0x1078b278u));
L_10763ed3:;
  /* 10763ed3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10763ed6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10763ed9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10763edb je 0x10763eef */
  if (C.zf) goto L_10763eef;
  /* 10763edd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763ee1 jne 0x10763eef */
  if (!C.zf) goto L_10763eef;
  /* 10763ee3 mov dword ptr [ebp - 0x111c], 0x1078b4c8 */
  w32((uint32_t)(EBP + -0x111c), (0x1078b4c8u));
  /* 10763eed jmp 0x10763ef9 */
  goto L_10763ef9;
L_10763eef:;
  /* 10763eef mov dword ptr [ebp - 0x111c], 0x1078b278 */
  w32((uint32_t)(EBP + -0x111c), (0x1078b278u));
L_10763ef9:;
  /* 10763ef9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10763efc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10763eff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10763f01 je 0x10763f0f */
  if (C.zf) goto L_10763f0f;
  /* 10763f03 mov dword ptr [ebp - 0x1120], 0x1078b4c4 */
  w32((uint32_t)(EBP + -0x1120), (0x1078b4c4u));
  /* 10763f0d jmp 0x10763f19 */
  goto L_10763f19;
L_10763f0f:;
  /* 10763f0f mov dword ptr [ebp - 0x1120], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1120), (0x1078b278u));
L_10763f19:;
  /* 10763f19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763f1d je 0x10763f2a */
  if (C.zf) goto L_10763f2a;
  /* 10763f1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10763f22 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10763f28 jmp 0x10763f34 */
  goto L_10763f34;
L_10763f2a:;
  /* 10763f2a mov dword ptr [ebp - 0x1124], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1124), (0x1078b278u));
L_10763f34:;
  /* 10763f34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763f38 je 0x10763f46 */
  if (C.zf) goto L_10763f46;
  /* 10763f3a mov dword ptr [ebp - 0x1128], 0x1078b4bc */
  w32((uint32_t)(EBP + -0x1128), (0x1078b4bcu));
  /* 10763f44 jmp 0x10763f50 */
  goto L_10763f50;
L_10763f46:;
  /* 10763f46 mov dword ptr [ebp - 0x1128], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1128), (0x1078b278u));
L_10763f50:;
  /* 10763f50 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763f54 je 0x10763f61 */
  if (C.zf) goto L_10763f61;
  /* 10763f56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10763f59 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10763f5f jmp 0x10763f6b */
  goto L_10763f6b;
L_10763f61:;
  /* 10763f61 mov dword ptr [ebp - 0x112c], 0x1078b278 */
  w32((uint32_t)(EBP + -0x112c), (0x1078b278u));
L_10763f6b:;
  /* 10763f6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763f6f je 0x10763f7d */
  if (C.zf) goto L_10763f7d;
  /* 10763f71 mov dword ptr [ebp - 0x1130], 0x1078b4b4 */
  w32((uint32_t)(EBP + -0x1130), (0x1078b4b4u));
  /* 10763f7b jmp 0x10763f87 */
  goto L_10763f87;
L_10763f7d:;
  /* 10763f7d mov dword ptr [ebp - 0x1130], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1130), (0x1078b278u));
L_10763f87:;
  /* 10763f87 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763f8e je 0x10763f9e */
  if (C.zf) goto L_10763f9e;
  /* 10763f90 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10763f96 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10763f9c jmp 0x10763fa8 */
  goto L_10763fa8;
L_10763f9e:;
  /* 10763f9e mov dword ptr [ebp - 0x1134], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1134), (0x1078b278u));
L_10763fa8:;
  /* 10763fa8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10763faf je 0x10763fbd */
  if (C.zf) goto L_10763fbd;
  /* 10763fb1 mov dword ptr [ebp - 0x1138], 0x1078b4a8 */
  w32((uint32_t)(EBP + -0x1138), (0x1078b4a8u));
  /* 10763fbb jmp 0x10763fc7 */
  goto L_10763fc7;
L_10763fbd:;
  /* 10763fbd mov dword ptr [ebp - 0x1138], 0x1078b278 */
  w32((uint32_t)(EBP + -0x1138), (0x1078b278u));
L_10763fc7:;
  /* 10763fc7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10763fcd push edx */
  push32((uint32_t)(EDX));
  /* 10763fce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10763fd4 push eax */
  push32((uint32_t)(EAX));
  /* 10763fd5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10763fdb push ecx */
  push32((uint32_t)(ECX));
  /* 10763fdc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10763fe2 push edx */
  push32((uint32_t)(EDX));
  /* 10763fe3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10763fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10763fea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10763ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 10763ff1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10763ff7 push edx */
  push32((uint32_t)(EDX));
  /* 10763ff8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10763ffe push eax */
  push32((uint32_t)(EAX));
  /* 10763fff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10764005 push ecx */
  push32((uint32_t)(ECX));
  /* 10764006 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1076400c push edx */
  push32((uint32_t)(EDX));
  /* 1076400d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764010 push eax */
  push32((uint32_t)(EAX));
  /* 10764011 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764014 mov edx, dword ptr [ecx*4 + 0x1078ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea50)));
  /* 1076401b push edx */
  push32((uint32_t)(EDX));
  /* 1076401c push 0x1078b454 */
  push32((uint32_t)(0x1078b454u));
  /* 10764021 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10764026 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1076402c push eax */
  push32((uint32_t)(EAX));
  /* 1076402d call 0x107677f0 */
  push32(0x10764032u); f_107677f0();
  /* 10764032 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764037 jge 0x1076404d */
  if ((C.sf==C.of)) goto L_1076404d;
  /* 10764039 push 0x1078b3b8 */
  push32((uint32_t)(0x1078b3b8u));
  /* 1076403e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10764044 push ecx */
  push32((uint32_t)(ECX));
  /* 10764045 call 0x107678f0 */
  push32(0x1076404au); f_107678f0();
  /* 1076404a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076404d:;
  /* 1076404d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10764052 push 0x1078b430 */
  push32((uint32_t)(0x1078b430u));
  /* 10764057 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1076405d push edx */
  push32((uint32_t)(EDX));
  /* 1076405e call 0x107680a0 */
  push32(0x10764063u); f_107680a0();
  /* 10764063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764066 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1076406c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764073 jne 0x10764086 */
  if (!C.zf) goto L_10764086;
  /* 10764075 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10764077 call 0x10767de0 */
  push32(0x1076407cu); f_10767de0();
  /* 1076407c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076407f push 3 */
  push32((uint32_t)(0x3u));
  /* 10764081 call 0x10764100 */
  push32(0x10764086u); f_10764100();
L_10764086:;
  /* 10764086 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076408d jne 0x10764096 */
  if (!C.zf) goto L_10764096;
  /* 1076408f mov eax, 1 */
  EAX = (0x1u);
  /* 10764094 jmp 0x10764098 */
  goto L_10764098;
L_10764096:;
  /* 10764096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10764098:;
  /* 10764098 mov esp, ebp */
  ESP = (EBP);
  /* 1076409a pop ebp */
  EBP = (pop32());
  /* 1076409b ret  */
  ESPCHK(0x10763d90u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x107640a0 (56 bytes, 15 insns) */
void f_107640a0(void) {
  FTRACE(0x107640a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107640a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107640a1 mov ebp, esp */
  EBP = (ESP);
  /* 107640a3 cmp dword ptr [0x1079209c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079209c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107640aa je 0x107640b2 */
  if (C.zf) goto L_107640b2;
  /* 107640ac call dword ptr [0x1079209c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079209c))), 0x107640b2u);
L_107640b2:;
  /* 107640b2 push 0x1078e418 */
  push32((uint32_t)(0x1078e418u));
  /* 107640b7 push 0x1078e208 */
  push32((uint32_t)(0x1078e208u));
  /* 107640bc call 0x10764270 */
  push32(0x107640c1u); f_10764270();
  /* 107640c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107640c4 push 0x1078e104 */
  push32((uint32_t)(0x1078e104u));
  /* 107640c9 push 0x1078e000 */
  push32((uint32_t)(0x1078e000u));
  /* 107640ce call 0x10764270 */
  push32(0x107640d3u); f_10764270();
  /* 107640d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107640d6 pop ebp */
  EBP = (pop32());
  /* 107640d7 ret  */
  ESPCHK(0x107640a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x107640e0 (21 bytes, 10 insns) */
void f_107640e0(void) {
  FTRACE(0x107640e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107640e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107640e1 mov ebp, esp */
  EBP = (ESP);
  /* 107640e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107640e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107640e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107640ea push eax */
  push32((uint32_t)(EAX));
  /* 107640eb call 0x10764160 */
  push32(0x107640f0u); f_10764160();
  /* 107640f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107640f3 pop ebp */
  EBP = (pop32());
  /* 107640f4 ret  */
  ESPCHK(0x107640e0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10764100 (21 bytes, 10 insns) */
void f_10764100(void) {
  FTRACE(0x10764100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764100 push ebp */
  push32((uint32_t)(EBP));
  /* 10764101 mov ebp, esp */
  EBP = (ESP);
  /* 10764103 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764105 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764107 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076410a push eax */
  push32((uint32_t)(EAX));
  /* 1076410b call 0x10764160 */
  push32(0x10764110u); f_10764160();
  /* 10764110 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764113 pop ebp */
  EBP = (pop32());
  /* 10764114 ret  */
  ESPCHK(0x10764100u, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x10764120 (19 bytes, 9 insns) */
void f_10764120(void) {
  FTRACE(0x10764120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764120 push ebp */
  push32((uint32_t)(EBP));
  /* 10764121 mov ebp, esp */
  EBP = (ESP);
  /* 10764123 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764129 call 0x10764160 */
  push32(0x1076412eu); f_10764160();
  /* 1076412e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764131 pop ebp */
  EBP = (pop32());
  /* 10764132 ret  */
  ESPCHK(0x10764120u, _esp0);
  ESP += 4; return;
}

/* FUN_10004140 @ 0x10764140 (19 bytes, 9 insns) */
void f_10764140(void) {
  FTRACE(0x10764140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764140 push ebp */
  push32((uint32_t)(EBP));
  /* 10764141 mov ebp, esp */
  EBP = (ESP);
  /* 10764143 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764145 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764147 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764149 call 0x10764160 */
  push32(0x1076414eu); f_10764160();
  /* 1076414e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764151 pop ebp */
  EBP = (pop32());
  /* 10764152 ret  */
  ESPCHK(0x10764140u, _esp0);
  ESP += 4; return;
}

/* FUN_10004160 @ 0x10764160 (227 bytes, 61 insns) */
void f_10764160(void) {
  FTRACE(0x10764160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764160 push ebp */
  push32((uint32_t)(EBP));
  /* 10764161 mov ebp, esp */
  EBP = (ESP);
  /* 10764163 push ecx */
  push32((uint32_t)(ECX));
  /* 10764164 call 0x10764250 */
  push32(0x10764169u); f_10764250();
  /* 10764169 cmp dword ptr [0x10790598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10790598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764170 jne 0x10764183 */
  if (!C.zf) goto L_10764183;
  /* 10764172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764175 push eax */
  push32((uint32_t)(EAX));
  /* 10764176 call dword ptr [0x10793354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793354))), 0x1076417cu);
  /* 1076417c push eax */
  push32((uint32_t)(EAX));
  /* 1076417d call dword ptr [0x10793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793350))), 0x10764183u);
L_10764183:;
  /* 10764183 mov dword ptr [0x10790594], 1 */
  w32((uint32_t)(0x10790594), (0x1u));
  /* 1076418d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10764190 mov byte ptr [0x10790590], cl */
  w8((uint32_t)(0x10790590), (CL));
  /* 10764196 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076419a jne 0x107641e3 */
  if (!C.zf) goto L_107641e3;
  /* 1076419c cmp dword ptr [0x10792098], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10792098))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107641a3 je 0x107641d1 */
  if (C.zf) goto L_107641d1;
  /* 107641a5 mov edx, dword ptr [0x10792094] */
  EDX = (r32((uint32_t)(0x10792094)));
  /* 107641ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107641ae:;
  /* 107641ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107641b1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107641b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107641b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107641ba cmp ecx, dword ptr [0x10792098] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10792098))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107641c0 jb 0x107641d1 */
  if (C.cf) goto L_107641d1;
  /* 107641c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107641c5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107641c8 je 0x107641cf */
  if (C.zf) goto L_107641cf;
  /* 107641ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107641cd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x107641cfu);
L_107641cf:;
  /* 107641cf jmp 0x107641ae */
  goto L_107641ae;
L_107641d1:;
  /* 107641d1 push 0x1078e724 */
  push32((uint32_t)(0x1078e724u));
  /* 107641d6 push 0x1078e51c */
  push32((uint32_t)(0x1078e51cu));
  /* 107641db call 0x10764270 */
  push32(0x107641e0u); f_10764270();
  /* 107641e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107641e3:;
  /* 107641e3 push 0x1078e92c */
  push32((uint32_t)(0x1078e92cu));
  /* 107641e8 push 0x1078e828 */
  push32((uint32_t)(0x1078e828u));
  /* 107641ed call 0x10764270 */
  push32(0x107641f2u); f_10764270();
  /* 107641f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107641f5 cmp dword ptr [0x1079059c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079059c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107641fc jne 0x1076421e */
  if (!C.zf) goto L_1076421e;
  /* 107641fe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10764200 call 0x10765e50 */
  push32(0x10764205u); f_10765e50();
  /* 10764205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764208 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1076420b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076420d je 0x1076421e */
  if (C.zf) goto L_1076421e;
  /* 1076420f mov dword ptr [0x1079059c], 1 */
  w32((uint32_t)(0x1079059c), (0x1u));
  /* 10764219 call 0x10766760 */
  push32(0x1076421eu); f_10766760();
L_1076421e:;
  /* 1076421e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764222 je 0x1076422b */
  if (C.zf) goto L_1076422b;
  /* 10764224 call 0x10764260 */
  push32(0x10764229u); f_10764260();
  /* 10764229 jmp 0x1076423f */
  goto L_1076423f;
L_1076422b:;
  /* 1076422b mov dword ptr [0x10790598], 1 */
  w32((uint32_t)(0x10790598), (0x1u));
  /* 10764235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764238 push ecx */
  push32((uint32_t)(ECX));
  /* 10764239 call dword ptr [0x1079334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079334c))), 0x1076423fu);
L_1076423f:;
  /* 1076423f mov esp, ebp */
  ESP = (EBP);
  /* 10764241 pop ebp */
  EBP = (pop32());
  /* 10764242 ret  */
  ESPCHK(0x10764160u, _esp0);
  ESP += 4; return;
}

/* FUN_10004250 @ 0x10764250 (15 bytes, 7 insns) */
void f_10764250(void) {
  FTRACE(0x10764250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764250 push ebp */
  push32((uint32_t)(EBP));
  /* 10764251 mov ebp, esp */
  EBP = (ESP);
  /* 10764253 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10764255 call 0x10768340 */
  push32(0x1076425au); f_10768340();
  /* 1076425a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076425d pop ebp */
  EBP = (pop32());
  /* 1076425e ret  */
  ESPCHK(0x10764250u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x10764260 (15 bytes, 7 insns) */
void f_10764260(void) {
  FTRACE(0x10764260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764260 push ebp */
  push32((uint32_t)(EBP));
  /* 10764261 mov ebp, esp */
  EBP = (ESP);
  /* 10764263 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10764265 call 0x107683e0 */
  push32(0x1076426au); f_107683e0();
  /* 1076426a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076426d pop ebp */
  EBP = (pop32());
  /* 1076426e ret  */
  ESPCHK(0x10764260u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10764270 (37 bytes, 16 insns) */
void f_10764270(void) {
  FTRACE(0x10764270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764270 push ebp */
  push32((uint32_t)(EBP));
  /* 10764271 mov ebp, esp */
  EBP = (ESP);
L_10764273:;
  /* 10764273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764276 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764279 jae 0x10764293 */
  if (!C.cf) goto L_10764293;
  /* 1076427b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076427e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764281 je 0x10764288 */
  if (C.zf) goto L_10764288;
  /* 10764283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764286 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10764288u);
L_10764288:;
  /* 10764288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076428b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076428e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10764291 jmp 0x10764273 */
  goto L_10764273;
L_10764293:;
  /* 10764293 pop ebp */
  EBP = (pop32());
  /* 10764294 ret  */
  ESPCHK(0x10764270u, _esp0);
  ESP += 4; return;
}

/* FUN_100042a0 @ 0x107642a0 (130 bytes, 42 insns) */
void f_107642a0(void) {
  FTRACE(0x107642a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107642a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107642a1 mov ebp, esp */
  EBP = (ESP);
  /* 107642a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107642a4 call 0x10768260 */
  push32(0x107642a9u); f_10768260();
  /* 107642a9 call dword ptr [0x10793360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793360))), 0x107642afu);
  /* 107642af mov dword ptr [0x1078ea5c], eax */
  w32((uint32_t)(0x1078ea5c), (EAX));
  /* 107642b4 cmp dword ptr [0x1078ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1078ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107642bb jne 0x107642c1 */
  if (!C.zf) goto L_107642c1;
  /* 107642bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107642bf jmp 0x1076431e */
  goto L_1076431e;
L_107642c1:;
  /* 107642c1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 107642c3 push 0x1078b58c */
  push32((uint32_t)(0x1078b58cu));
  /* 107642c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107642ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 107642cc push 1 */
  push32((uint32_t)(0x1u));
  /* 107642ce call 0x10764d50 */
  push32(0x107642d3u); f_10764d50();
  /* 107642d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107642d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107642d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107642dd je 0x107642f4 */
  if (C.zf) goto L_107642f4;
  /* 107642df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107642e2 push eax */
  push32((uint32_t)(EAX));
  /* 107642e3 mov ecx, dword ptr [0x1078ea5c] */
  ECX = (r32((uint32_t)(0x1078ea5c)));
  /* 107642e9 push ecx */
  push32((uint32_t)(ECX));
  /* 107642ea call dword ptr [0x1079335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079335c))), 0x107642f0u);
  /* 107642f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107642f2 jne 0x107642f8 */
  if (!C.zf) goto L_107642f8;
L_107642f4:;
  /* 107642f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107642f6 jmp 0x1076431e */
  goto L_1076431e;
L_107642f8:;
  /* 107642f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107642fb push edx */
  push32((uint32_t)(EDX));
  /* 107642fc call 0x10764360 */
  push32(0x10764301u); f_10764360();
  /* 10764301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764304 call dword ptr [0x10793358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793358))), 0x1076430au);
  /* 1076430a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076430d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1076430f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764312 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10764319 mov eax, 1 */
  EAX = (0x1u);
L_1076431e:;
  /* 1076431e mov esp, ebp */
  ESP = (EBP);
  /* 10764320 pop ebp */
  EBP = (pop32());
  /* 10764321 ret  */
  ESPCHK(0x107642a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x10764330 (41 bytes, 11 insns) */
void f_10764330(void) {
  FTRACE(0x10764330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764330 push ebp */
  push32((uint32_t)(EBP));
  /* 10764331 mov ebp, esp */
  EBP = (ESP);
  /* 10764333 call 0x107682a0 */
  push32(0x10764338u); f_107682a0();
  /* 10764338 cmp dword ptr [0x1078ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1078ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076433f je 0x10764357 */
  if (C.zf) goto L_10764357;
  /* 10764341 mov eax, dword ptr [0x1078ea5c] */
  EAX = (r32((uint32_t)(0x1078ea5c)));
  /* 10764346 push eax */
  push32((uint32_t)(EAX));
  /* 10764347 call dword ptr [0x10793364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793364))), 0x1076434du);
  /* 1076434d mov dword ptr [0x1078ea5c], 0xffffffff */
  w32((uint32_t)(0x1078ea5c), (0xffffffffu));
L_10764357:;
  /* 10764357 pop ebp */
  EBP = (pop32());
  /* 10764358 ret  */
  ESPCHK(0x10764330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10764360 (25 bytes, 8 insns) */
void f_10764360(void) {
  FTRACE(0x10764360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764360 push ebp */
  push32((uint32_t)(EBP));
  /* 10764361 mov ebp, esp */
  EBP = (ESP);
  /* 10764363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764366 mov dword ptr [eax + 0x50], 0x1078ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1078ec00u));
  /* 1076436d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764370 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10764377 pop ebp */
  EBP = (pop32());
  /* 10764378 ret  */
  ESPCHK(0x10764360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x10764380 (152 bytes, 48 insns) */
void f_10764380(void) {
  FTRACE(0x10764380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764380 push ebp */
  push32((uint32_t)(EBP));
  /* 10764381 mov ebp, esp */
  EBP = (ESP);
  /* 10764383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10764386 call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x1076438cu);
  /* 1076438c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076438f mov eax, dword ptr [0x1078ea5c] */
  EAX = (r32((uint32_t)(0x1078ea5c)));
  /* 10764394 push eax */
  push32((uint32_t)(EAX));
  /* 10764395 call dword ptr [0x10793298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793298))), 0x1076439bu);
  /* 1076439b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076439e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107643a2 jne 0x10764407 */
  if (!C.zf) goto L_10764407;
  /* 107643a4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 107643a9 push 0x1078b58c */
  push32((uint32_t)(0x1078b58cu));
  /* 107643ae push 2 */
  push32((uint32_t)(0x2u));
  /* 107643b0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 107643b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107643b4 call 0x10764d50 */
  push32(0x107643b9u); f_10764d50();
  /* 107643b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107643bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107643bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107643c3 je 0x107643fd */
  if (C.zf) goto L_107643fd;
  /* 107643c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107643c8 push ecx */
  push32((uint32_t)(ECX));
  /* 107643c9 mov edx, dword ptr [0x1078ea5c] */
  EDX = (r32((uint32_t)(0x1078ea5c)));
  /* 107643cf push edx */
  push32((uint32_t)(EDX));
  /* 107643d0 call dword ptr [0x1079335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079335c))), 0x107643d6u);
  /* 107643d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107643d8 je 0x107643fd */
  if (C.zf) goto L_107643fd;
  /* 107643da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107643dd push eax */
  push32((uint32_t)(EAX));
  /* 107643de call 0x10764360 */
  push32(0x107643e3u); f_10764360();
  /* 107643e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107643e6 call dword ptr [0x10793358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793358))), 0x107643ecu);
  /* 107643ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107643ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107643f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107643f4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 107643fb jmp 0x10764407 */
  goto L_10764407;
L_107643fd:;
  /* 107643fd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107643ff call 0x107638b0 */
  push32(0x10764404u); f_107638b0();
  /* 10764404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10764407:;
  /* 10764407 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076440a push eax */
  push32((uint32_t)(EAX));
  /* 1076440b call dword ptr [0x10793294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793294))), 0x10764411u);
  /* 10764411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764414 mov esp, ebp */
  ESP = (EBP);
  /* 10764416 pop ebp */
  EBP = (pop32());
  /* 10764417 ret  */
  ESPCHK(0x10764380u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x10764420 (263 bytes, 86 insns) */
void f_10764420(void) {
  FTRACE(0x10764420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764420 push ebp */
  push32((uint32_t)(EBP));
  /* 10764421 mov ebp, esp */
  EBP = (ESP);
  /* 10764423 cmp dword ptr [0x1078ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1078ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076442a je 0x10764525 */
  if (C.zf) goto L_10764525;
  /* 10764430 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764434 jne 0x10764445 */
  if (!C.zf) goto L_10764445;
  /* 10764436 mov eax, dword ptr [0x1078ea5c] */
  EAX = (r32((uint32_t)(0x1078ea5c)));
  /* 1076443b push eax */
  push32((uint32_t)(EAX));
  /* 1076443c call dword ptr [0x10793298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793298))), 0x10764442u);
  /* 10764442 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10764445:;
  /* 10764445 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764449 je 0x10764516 */
  if (C.zf) goto L_10764516;
  /* 1076444f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764452 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764456 je 0x10764469 */
  if (C.zf) goto L_10764469;
  /* 10764458 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076445a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076445d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10764460 push eax */
  push32((uint32_t)(EAX));
  /* 10764461 call 0x107653d0 */
  push32(0x10764466u); f_107653d0();
  /* 10764466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10764469:;
  /* 10764469 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076446c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764470 je 0x10764483 */
  if (C.zf) goto L_10764483;
  /* 10764472 push 2 */
  push32((uint32_t)(0x2u));
  /* 10764474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764477 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1076447a push eax */
  push32((uint32_t)(EAX));
  /* 1076447b call 0x107653d0 */
  push32(0x10764480u); f_107653d0();
  /* 10764480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10764483:;
  /* 10764483 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764486 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076448a je 0x1076449d */
  if (C.zf) goto L_1076449d;
  /* 1076448c push 2 */
  push32((uint32_t)(0x2u));
  /* 1076448e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764491 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10764494 push eax */
  push32((uint32_t)(EAX));
  /* 10764495 call 0x107653d0 */
  push32(0x1076449au); f_107653d0();
  /* 1076449a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076449d:;
  /* 1076449d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644a0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107644a4 je 0x107644b7 */
  if (C.zf) goto L_107644b7;
  /* 107644a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107644a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644ab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 107644ae push eax */
  push32((uint32_t)(EAX));
  /* 107644af call 0x107653d0 */
  push32(0x107644b4u); f_107653d0();
  /* 107644b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107644b7:;
  /* 107644b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644ba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107644be je 0x107644d1 */
  if (C.zf) goto L_107644d1;
  /* 107644c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107644c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644c5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 107644c8 push eax */
  push32((uint32_t)(EAX));
  /* 107644c9 call 0x107653d0 */
  push32(0x107644ceu); f_107653d0();
  /* 107644ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107644d1:;
  /* 107644d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644d4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107644d8 je 0x107644eb */
  if (C.zf) goto L_107644eb;
  /* 107644da push 2 */
  push32((uint32_t)(0x2u));
  /* 107644dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644df mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 107644e2 push eax */
  push32((uint32_t)(EAX));
  /* 107644e3 call 0x107653d0 */
  push32(0x107644e8u); f_107653d0();
  /* 107644e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107644eb:;
  /* 107644eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644ee cmp dword ptr [ecx + 0x50], 0x1078ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1078ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107644f5 je 0x10764508 */
  if (C.zf) goto L_10764508;
  /* 107644f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107644f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107644fc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 107644ff push eax */
  push32((uint32_t)(EAX));
  /* 10764500 call 0x107653d0 */
  push32(0x10764505u); f_107653d0();
  /* 10764505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10764508:;
  /* 10764508 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076450a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076450d push ecx */
  push32((uint32_t)(ECX));
  /* 1076450e call 0x107653d0 */
  push32(0x10764513u); f_107653d0();
  /* 10764513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10764516:;
  /* 10764516 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764518 mov edx, dword ptr [0x1078ea5c] */
  EDX = (r32((uint32_t)(0x1078ea5c)));
  /* 1076451e push edx */
  push32((uint32_t)(EDX));
  /* 1076451f call dword ptr [0x1079335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079335c))), 0x10764525u);
L_10764525:;
  /* 10764525 pop ebp */
  EBP = (pop32());
  /* 10764526 ret  */
  ESPCHK(0x10764420u, _esp0);
  ESP += 4; return;
}

/* FUN_10004530 @ 0x10764530 (11 bytes, 5 insns) */
void f_10764530(void) {
  FTRACE(0x10764530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764530 push ebp */
  push32((uint32_t)(EBP));
  /* 10764531 mov ebp, esp */
  EBP = (ESP);
  /* 10764533 call dword ptr [0x10793358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793358))), 0x10764539u);
  /* 10764539 pop ebp */
  EBP = (pop32());
  /* 1076453a ret  */
  ESPCHK(0x10764530u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x10764540 (11 bytes, 5 insns) */
void f_10764540(void) {
  FTRACE(0x10764540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764540 push ebp */
  push32((uint32_t)(EBP));
  /* 10764541 mov ebp, esp */
  EBP = (ESP);
  /* 10764543 call dword ptr [0x10793374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793374))), 0x10764549u);
  /* 10764549 pop ebp */
  EBP = (pop32());
  /* 1076454a ret  */
  ESPCHK(0x10764540u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x10764550 (804 bytes, 236 insns) */
void f_10764550(void) {
  FTRACE(0x10764550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764550 push ebp */
  push32((uint32_t)(EBP));
  /* 10764551 mov ebp, esp */
  EBP = (ESP);
  /* 10764553 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10764556 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1076455b push 0x1078b598 */
  push32((uint32_t)(0x1078b598u));
  /* 10764560 push 2 */
  push32((uint32_t)(0x2u));
  /* 10764562 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10764567 call 0x10764940 */
  push32(0x1076456cu); f_10764940();
  /* 1076456c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076456f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10764572 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764576 jne 0x10764582 */
  if (!C.zf) goto L_10764582;
  /* 10764578 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1076457a call 0x107638b0 */
  push32(0x1076457fu); f_107638b0();
  /* 1076457f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10764582:;
  /* 10764582 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764585 mov dword ptr [0x10791f40], eax */
  w32((uint32_t)(0x10791f40), (EAX));
  /* 1076458a mov dword ptr [0x1079207c], 0x20 */
  w32((uint32_t)(0x1079207c), (0x20u));
  /* 10764594 jmp 0x1076459f */
  goto L_1076459f;
L_10764596:;
  /* 10764596 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764599 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076459c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1076459f:;
  /* 1076459f mov edx, dword ptr [0x10791f40] */
  EDX = (r32((uint32_t)(0x10791f40)));
  /* 107645a5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107645ab cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107645ae jae 0x107645d3 */
  if (!C.cf) goto L_107645d3;
  /* 107645b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107645b3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107645b7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107645ba mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107645c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107645c3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107645c7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107645ca mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107645d1 jmp 0x10764596 */
  goto L_10764596;
L_107645d3:;
  /* 107645d3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 107645d6 push ecx */
  push32((uint32_t)(ECX));
  /* 107645d7 call dword ptr [0x10793380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793380))), 0x107645ddu);
  /* 107645dd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 107645e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107645e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107645e8 je 0x10764775 */
  if (C.zf) goto L_10764775;
  /* 107645ee cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107645f2 je 0x10764775 */
  if (C.zf) goto L_10764775;
  /* 107645f8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107645fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107645fd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10764600 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10764603 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764606 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10764609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076460c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076460f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10764612 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764619 jge 0x10764623 */
  if ((C.sf==C.of)) goto L_10764623;
  /* 1076461b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1076461e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10764621 jmp 0x1076462a */
  goto L_1076462a;
L_10764623:;
  /* 10764623 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1076462a:;
  /* 1076462a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1076462d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10764630 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10764637 jmp 0x10764642 */
  goto L_10764642;
L_10764639:;
  /* 10764639 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1076463c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076463f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10764642:;
  /* 10764642 mov ecx, dword ptr [0x1079207c] */
  ECX = (r32((uint32_t)(0x1079207c)));
  /* 10764648 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076464b jge 0x107646e2 */
  if ((C.sf==C.of)) goto L_107646e2;
  /* 10764651 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10764656 push 0x1078b598 */
  push32((uint32_t)(0x1078b598u));
  /* 1076465b push 2 */
  push32((uint32_t)(0x2u));
  /* 1076465d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10764662 call 0x10764940 */
  push32(0x10764667u); f_10764940();
  /* 10764667 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076466a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1076466d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764671 jne 0x1076467e */
  if (!C.zf) goto L_1076467e;
  /* 10764673 mov edx, dword ptr [0x1079207c] */
  EDX = (r32((uint32_t)(0x1079207c)));
  /* 10764679 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1076467c jmp 0x107646e2 */
  goto L_107646e2;
L_1076467e:;
  /* 1076467e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10764681 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764684 mov dword ptr [eax*4 + 0x10791f40], ecx */
  w32((uint32_t)(EAX*4 + 0x10791f40), (ECX));
  /* 1076468b mov edx, dword ptr [0x1079207c] */
  EDX = (r32((uint32_t)(0x1079207c)));
  /* 10764691 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764694 mov dword ptr [0x1079207c], edx */
  w32((uint32_t)(0x1079207c), (EDX));
  /* 1076469a jmp 0x107646a5 */
  goto L_107646a5;
L_1076469c:;
  /* 1076469c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1076469f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107646a2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_107646a5:;
  /* 107646a5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 107646a8 mov edx, dword ptr [ecx*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 107646af add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107646b5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107646b8 jae 0x107646dd */
  if (!C.cf) goto L_107646dd;
  /* 107646ba mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107646bd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107646c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107646c4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107646ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107646cd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107646d1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107646d4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107646db jmp 0x1076469c */
  goto L_1076469c;
L_107646dd:;
  /* 107646dd jmp 0x10764639 */
  goto L_10764639;
L_107646e2:;
  /* 107646e2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 107646e9 jmp 0x10764706 */
  goto L_10764706;
L_107646eb:;
  /* 107646eb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 107646ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107646f1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 107646f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107646f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107646fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107646fd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10764700 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764703 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10764706:;
  /* 10764706 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10764709 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076470c jge 0x10764775 */
  if ((C.sf==C.of)) goto L_10764775;
  /* 1076470e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10764711 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764714 je 0x10764770 */
  if (C.zf) goto L_10764770;
  /* 10764716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764719 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076471c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1076471f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10764721 je 0x10764770 */
  if (C.zf) goto L_10764770;
  /* 10764723 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764726 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10764729 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1076472c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076472e jne 0x10764740 */
  if (!C.zf) goto L_10764740;
  /* 10764730 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10764733 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10764735 push edx */
  push32((uint32_t)(EDX));
  /* 10764736 call dword ptr [0x1079337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079337c))), 0x1076473cu);
  /* 1076473c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076473e je 0x10764770 */
  if (C.zf) goto L_10764770;
L_10764740:;
  /* 10764740 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10764743 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10764746 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10764749 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076474c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076474f mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 10764756 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764758 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1076475b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1076475e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10764761 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10764763 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10764765 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764768 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076476b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076476d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10764770:;
  /* 10764770 jmp 0x107646eb */
  goto L_107646eb;
L_10764775:;
  /* 10764775 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1076477c jmp 0x10764787 */
  goto L_10764787;
L_1076477e:;
  /* 1076477e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10764781 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764784 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10764787:;
  /* 10764787 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076478b jge 0x10764864 */
  if ((C.sf==C.of)) goto L_10764864;
  /* 10764791 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10764794 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10764797 mov edx, dword ptr [0x10791f40] */
  EDX = (r32((uint32_t)(0x10791f40)));
  /* 1076479d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076479f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 107647a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 107647a5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107647a8 jne 0x10764850 */
  if (!C.zf) goto L_10764850;
  /* 107647ae mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 107647b1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 107647b5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107647b9 jne 0x107647c4 */
  if (!C.zf) goto L_107647c4;
  /* 107647bb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 107647c2 jmp 0x107647d4 */
  goto L_107647d4;
L_107647c4:;
  /* 107647c4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 107647c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107647ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107647cc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107647ce add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107647d1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_107647d4:;
  /* 107647d4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 107647d7 push eax */
  push32((uint32_t)(EAX));
  /* 107647d8 call dword ptr [0x1079332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079332c))), 0x107647deu);
  /* 107647de mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 107647e1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107647e5 je 0x1076483f */
  if (C.zf) goto L_1076483f;
  /* 107647e7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107647ea push ecx */
  push32((uint32_t)(ECX));
  /* 107647eb call dword ptr [0x1079337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079337c))), 0x107647f1u);
  /* 107647f1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 107647f4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107647f8 je 0x1076483f */
  if (C.zf) goto L_1076483f;
  /* 107647fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107647fd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10764800 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10764802 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10764805 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1076480b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076480e jne 0x10764820 */
  if (!C.zf) goto L_10764820;
  /* 10764810 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764813 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10764816 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10764818 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1076481b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1076481e jmp 0x1076483d */
  goto L_1076483d;
L_10764820:;
  /* 10764820 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10764823 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10764829 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076482c jne 0x1076483d */
  if (!C.zf) goto L_1076483d;
  /* 1076482e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764831 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10764834 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10764837 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1076483a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1076483d:;
  /* 1076483d jmp 0x1076484e */
  goto L_1076484e;
L_1076483f:;
  /* 1076483f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764842 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10764845 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10764848 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1076484b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1076484e:;
  /* 1076484e jmp 0x1076485f */
  goto L_1076485f;
L_10764850:;
  /* 10764850 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10764853 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10764856 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10764859 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1076485c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1076485f:;
  /* 1076485f jmp 0x1076477e */
  goto L_1076477e;
L_10764864:;
  /* 10764864 mov eax, dword ptr [0x1079207c] */
  EAX = (r32((uint32_t)(0x1079207c)));
  /* 10764869 push eax */
  push32((uint32_t)(EAX));
  /* 1076486a call dword ptr [0x10793378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793378))), 0x10764870u);
  /* 10764870 mov esp, ebp */
  ESP = (EBP);
  /* 10764872 pop ebp */
  EBP = (pop32());
  /* 10764873 ret  */
  ESPCHK(0x10764550u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10764880 (155 bytes, 45 insns) */
void f_10764880(void) {
  FTRACE(0x10764880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764880 push ebp */
  push32((uint32_t)(EBP));
  /* 10764881 mov ebp, esp */
  EBP = (ESP);
  /* 10764883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10764886 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1076488d jmp 0x10764898 */
  goto L_10764898;
L_1076488f:;
  /* 1076488f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764892 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764895 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10764898:;
  /* 10764898 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076489c jge 0x10764917 */
  if ((C.sf==C.of)) goto L_10764917;
  /* 1076489e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107648a1 cmp dword ptr [ecx*4 + 0x10791f40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10791f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107648a9 je 0x10764912 */
  if (C.zf) goto L_10764912;
  /* 107648ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107648ae mov eax, dword ptr [edx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 107648b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107648b8 jmp 0x107648c3 */
  goto L_107648c3;
L_107648ba:;
  /* 107648ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107648bd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107648c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107648c3:;
  /* 107648c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107648c6 mov eax, dword ptr [edx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 107648cd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107648d2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107648d5 jae 0x107648ef */
  if (!C.cf) goto L_107648ef;
  /* 107648d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107648da cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107648de je 0x107648ed */
  if (C.zf) goto L_107648ed;
  /* 107648e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107648e3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107648e6 push edx */
  push32((uint32_t)(EDX));
  /* 107648e7 call dword ptr [0x10793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793384))), 0x107648edu);
L_107648ed:;
  /* 107648ed jmp 0x107648ba */
  goto L_107648ba;
L_107648ef:;
  /* 107648ef push 2 */
  push32((uint32_t)(0x2u));
  /* 107648f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107648f4 mov ecx, dword ptr [eax*4 + 0x10791f40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 107648fb push ecx */
  push32((uint32_t)(ECX));
  /* 107648fc call 0x107653d0 */
  push32(0x10764901u); f_107653d0();
  /* 10764901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764904 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764907 mov dword ptr [edx*4 + 0x10791f40], 0 */
  w32((uint32_t)(EDX*4 + 0x10791f40), (0x0u));
L_10764912:;
  /* 10764912 jmp 0x1076488f */
  goto L_1076488f;
L_10764917:;
  /* 10764917 mov esp, ebp */
  ESP = (EBP);
  /* 10764919 pop ebp */
  EBP = (pop32());
  /* 1076491a ret  */
  ESPCHK(0x10764880u, _esp0);
  ESP += 4; return;
}

/* FUN_10004920 @ 0x10764920 (29 bytes, 13 insns) */
void f_10764920(void) {
  FTRACE(0x10764920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764920 push ebp */
  push32((uint32_t)(EBP));
  /* 10764921 mov ebp, esp */
  EBP = (ESP);
  /* 10764923 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764925 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764927 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764929 mov eax, dword ptr [0x10790740] */
  EAX = (r32((uint32_t)(0x10790740)));
  /* 1076492e push eax */
  push32((uint32_t)(EAX));
  /* 1076492f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764932 push ecx */
  push32((uint32_t)(ECX));
  /* 10764933 call 0x10764990 */
  push32(0x10764938u); f_10764990();
  /* 10764938 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076493b pop ebp */
  EBP = (pop32());
  /* 1076493c ret  */
  ESPCHK(0x10764920u, _esp0);
  ESP += 4; return;
}

/* FUN_10004940 @ 0x10764940 (35 bytes, 16 insns) */
void f_10764940(void) {
  FTRACE(0x10764940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764940 push ebp */
  push32((uint32_t)(EBP));
  /* 10764941 mov ebp, esp */
  EBP = (ESP);
  /* 10764943 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764946 push eax */
  push32((uint32_t)(EAX));
  /* 10764947 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076494a push ecx */
  push32((uint32_t)(ECX));
  /* 1076494b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076494e push edx */
  push32((uint32_t)(EDX));
  /* 1076494f mov eax, dword ptr [0x10790740] */
  EAX = (r32((uint32_t)(0x10790740)));
  /* 10764954 push eax */
  push32((uint32_t)(EAX));
  /* 10764955 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764958 push ecx */
  push32((uint32_t)(ECX));
  /* 10764959 call 0x10764990 */
  push32(0x1076495eu); f_10764990();
  /* 1076495e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764961 pop ebp */
  EBP = (pop32());
  /* 10764962 ret  */
  ESPCHK(0x10764940u, _esp0);
  ESP += 4; return;
}

/* FUN_10004970 @ 0x10764970 (27 bytes, 13 insns) */
void f_10764970(void) {
  FTRACE(0x10764970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764970 push ebp */
  push32((uint32_t)(EBP));
  /* 10764971 mov ebp, esp */
  EBP = (ESP);
  /* 10764973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764975 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764977 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764979 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076497c push eax */
  push32((uint32_t)(EAX));
  /* 1076497d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764980 push ecx */
  push32((uint32_t)(ECX));
  /* 10764981 call 0x10764990 */
  push32(0x10764986u); f_10764990();
  /* 10764986 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764989 pop ebp */
  EBP = (pop32());
  /* 1076498a ret  */
  ESPCHK(0x10764970u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x10764990 (94 bytes, 38 insns) */
void f_10764990(void) {
  FTRACE(0x10764990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764990 push ebp */
  push32((uint32_t)(EBP));
  /* 10764991 mov ebp, esp */
  EBP = (ESP);
  /* 10764993 push ecx */
  push32((uint32_t)(ECX));
L_10764994:;
  /* 10764994 push 9 */
  push32((uint32_t)(0x9u));
  /* 10764996 call 0x10768340 */
  push32(0x1076499bu); f_10768340();
  /* 1076499b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076499e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107649a1 push eax */
  push32((uint32_t)(EAX));
  /* 107649a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107649a5 push ecx */
  push32((uint32_t)(ECX));
  /* 107649a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107649a9 push edx */
  push32((uint32_t)(EDX));
  /* 107649aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107649ad push eax */
  push32((uint32_t)(EAX));
  /* 107649ae call 0x10764a10 */
  push32(0x107649b3u); f_10764a10();
  /* 107649b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107649b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107649b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 107649bb call 0x107683e0 */
  push32(0x107649c0u); f_107683e0();
  /* 107649c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107649c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107649c7 jne 0x107649cf */
  if (!C.zf) goto L_107649cf;
  /* 107649c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107649cd jne 0x107649d4 */
  if (!C.zf) goto L_107649d4;
L_107649cf:;
  /* 107649cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107649d2 jmp 0x107649ea */
  goto L_107649ea;
L_107649d4:;
  /* 107649d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107649d7 push ecx */
  push32((uint32_t)(ECX));
  /* 107649d8 call 0x10768680 */
  push32(0x107649ddu); f_10768680();
  /* 107649dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107649e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107649e2 jne 0x107649e8 */
  if (!C.zf) goto L_107649e8;
  /* 107649e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107649e6 jmp 0x107649ea */
  goto L_107649ea;
L_107649e8:;
  /* 107649e8 jmp 0x10764994 */
  goto L_10764994;
L_107649ea:;
  /* 107649ea mov esp, ebp */
  ESP = (EBP);
  /* 107649ec pop ebp */
  EBP = (pop32());
  /* 107649ed ret  */
  ESPCHK(0x10764990u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f0 @ 0x107649f0 (23 bytes, 11 insns) */
void f_107649f0(void) {
  FTRACE(0x107649f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107649f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107649f1 mov ebp, esp */
  EBP = (ESP);
  /* 107649f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107649f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107649f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 107649f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107649fc push eax */
  push32((uint32_t)(EAX));
  /* 107649fd call 0x10764a10 */
  push32(0x10764a02u); f_10764a10();
  /* 10764a02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764a05 pop ebp */
  EBP = (pop32());
  /* 10764a06 ret  */
  ESPCHK(0x107649f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a10 @ 0x10764a10 (787 bytes, 254 insns) */
void f_10764a10(void) {
  FTRACE(0x10764a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10764a11 mov ebp, esp */
  EBP = (ESP);
  /* 10764a13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10764a16 push ebx */
  push32((uint32_t)(EBX));
  /* 10764a17 push esi */
  push32((uint32_t)(ESI));
  /* 10764a18 push edi */
  push32((uint32_t)(EDI));
  /* 10764a19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10764a20 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 10764a25 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10764a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764a2a je 0x10764a5c */
  if (C.zf) goto L_10764a5c;
L_10764a2c:;
  /* 10764a2c call 0x10765ae0 */
  push32(0x10764a31u); f_10765ae0();
  /* 10764a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764a33 jne 0x10764a56 */
  if (!C.zf) goto L_10764a56;
  /* 10764a35 push 0x1078b68c */
  push32((uint32_t)(0x1078b68cu));
  /* 10764a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10764a3c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10764a41 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10764a46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10764a48 call 0x10763a00 */
  push32(0x10764a4du); f_10763a00();
  /* 10764a4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764a50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764a53 jne 0x10764a56 */
  if (!C.zf) goto L_10764a56;
  /* 10764a55 int3  */
  x86_unimpl("int3 @ 0x10764a55");
L_10764a56:;
  /* 10764a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10764a58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10764a5a jne 0x10764a2c */
  if (!C.zf) goto L_10764a2c;
L_10764a5c:;
  /* 10764a5c mov edx, dword ptr [0x1078ea88] */
  EDX = (r32((uint32_t)(0x1078ea88)));
  /* 10764a62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10764a65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764a68 cmp eax, dword ptr [0x1078ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764a6e jne 0x10764a71 */
  if (!C.zf) goto L_10764a71;
  /* 10764a70 int3  */
  x86_unimpl("int3 @ 0x10764a70");
L_10764a71:;
  /* 10764a71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764a74 push ecx */
  push32((uint32_t)(ECX));
  /* 10764a75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764a78 push edx */
  push32((uint32_t)(EDX));
  /* 10764a79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764a7c push eax */
  push32((uint32_t)(EAX));
  /* 10764a7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764a80 push ecx */
  push32((uint32_t)(ECX));
  /* 10764a81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764a84 push edx */
  push32((uint32_t)(EDX));
  /* 10764a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764a89 call dword ptr [0x1078ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1078ec90))), 0x10764a8fu);
  /* 10764a8f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764a94 jne 0x10764af4 */
  if (!C.zf) goto L_10764af4;
  /* 10764a96 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764a9a je 0x10764ac7 */
  if (C.zf) goto L_10764ac7;
L_10764a9c:;
  /* 10764a9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764a9f push eax */
  push32((uint32_t)(EAX));
  /* 10764aa0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10764aa4 push 0x1078b648 */
  push32((uint32_t)(0x1078b648u));
  /* 10764aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764aab push 0 */
  push32((uint32_t)(0x0u));
  /* 10764aad push 0 */
  push32((uint32_t)(0x0u));
  /* 10764aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ab1 call 0x10763a00 */
  push32(0x10764ab6u); f_10763a00();
  /* 10764ab6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764ab9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764abc jne 0x10764abf */
  if (!C.zf) goto L_10764abf;
  /* 10764abe int3  */
  x86_unimpl("int3 @ 0x10764abe");
L_10764abf:;
  /* 10764abf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10764ac1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10764ac3 jne 0x10764a9c */
  if (!C.zf) goto L_10764a9c;
  /* 10764ac5 jmp 0x10764aed */
  goto L_10764aed;
L_10764ac7:;
  /* 10764ac7 push 0x1078b624 */
  push32((uint32_t)(0x1078b624u));
  /* 10764acc push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10764ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ad9 call 0x10763a00 */
  push32(0x10764adeu); f_10763a00();
  /* 10764ade add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764ae1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764ae4 jne 0x10764ae7 */
  if (!C.zf) goto L_10764ae7;
  /* 10764ae6 int3  */
  x86_unimpl("int3 @ 0x10764ae6");
L_10764ae7:;
  /* 10764ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764aeb jne 0x10764ac7 */
  if (!C.zf) goto L_10764ac7;
L_10764aed:;
  /* 10764aed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764aef jmp 0x10764d1c */
  goto L_10764d1c;
L_10764af4:;
  /* 10764af4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764af7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10764afd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b00 je 0x10764b16 */
  if (C.zf) goto L_10764b16;
  /* 10764b02 mov edx, dword ptr [0x1078ea84] */
  EDX = (r32((uint32_t)(0x1078ea84)));
  /* 10764b08 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10764b0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10764b0d jne 0x10764b16 */
  if (!C.zf) goto L_10764b16;
  /* 10764b0f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10764b16:;
  /* 10764b16 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b1a ja 0x10764b27 */
  if ((!C.cf&&!C.zf)) goto L_10764b27;
  /* 10764b1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764b1f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764b22 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b25 jbe 0x10764b53 */
  if ((C.cf||C.zf)) goto L_10764b53;
L_10764b27:;
  /* 10764b27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764b2a push ecx */
  push32((uint32_t)(ECX));
  /* 10764b2b push 0x1078b5fc */
  push32((uint32_t)(0x1078b5fcu));
  /* 10764b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764b36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764b38 call 0x10763a00 */
  push32(0x10764b3du); f_10763a00();
  /* 10764b3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764b40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b43 jne 0x10764b46 */
  if (!C.zf) goto L_10764b46;
  /* 10764b45 int3  */
  x86_unimpl("int3 @ 0x10764b45");
L_10764b46:;
  /* 10764b46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10764b48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10764b4a jne 0x10764b27 */
  if (!C.zf) goto L_10764b27;
  /* 10764b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764b4e jmp 0x10764d1c */
  goto L_10764d1c;
L_10764b53:;
  /* 10764b53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764b56 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10764b5b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b5e je 0x10764ba0 */
  if (C.zf) goto L_10764ba0;
  /* 10764b60 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b64 je 0x10764ba0 */
  if (C.zf) goto L_10764ba0;
  /* 10764b66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764b69 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10764b6f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b72 je 0x10764ba0 */
  if (C.zf) goto L_10764ba0;
  /* 10764b74 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b78 je 0x10764ba0 */
  if (C.zf) goto L_10764ba0;
L_10764b7a:;
  /* 10764b7a push 0x1078b5c8 */
  push32((uint32_t)(0x1078b5c8u));
  /* 10764b7f push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10764b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764b8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10764b8c call 0x10763a00 */
  push32(0x10764b91u); f_10763a00();
  /* 10764b91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764b94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764b97 jne 0x10764b9a */
  if (!C.zf) goto L_10764b9a;
  /* 10764b99 int3  */
  x86_unimpl("int3 @ 0x10764b99");
L_10764b9a:;
  /* 10764b9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10764b9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10764b9e jne 0x10764b7a */
  if (!C.zf) goto L_10764b7a;
L_10764ba0:;
  /* 10764ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764ba3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764ba6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10764ba9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10764bac push ecx */
  push32((uint32_t)(ECX));
  /* 10764bad call 0x10768790 */
  push32(0x10764bb2u); f_10768790();
  /* 10764bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764bb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10764bb8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764bbc jne 0x10764bc5 */
  if (!C.zf) goto L_10764bc5;
  /* 10764bbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764bc0 jmp 0x10764d1c */
  goto L_10764d1c;
L_10764bc5:;
  /* 10764bc5 mov edx, dword ptr [0x1078ea88] */
  EDX = (r32((uint32_t)(0x1078ea88)));
  /* 10764bcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764bce mov dword ptr [0x1078ea88], edx */
  w32((uint32_t)(0x1078ea88), (EDX));
  /* 10764bd4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764bd8 je 0x10764c23 */
  if (C.zf) goto L_10764c23;
  /* 10764bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764bdd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10764be3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764be6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10764bed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764bf0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10764bf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764bfa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10764c01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764c07 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10764c0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c0d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10764c14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c17 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10764c1e jmp 0x10764cc3 */
  goto L_10764cc3;
L_10764c23:;
  /* 10764c23 mov edx, dword ptr [0x107905a4] */
  EDX = (r32((uint32_t)(0x107905a4)));
  /* 10764c29 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764c2c mov dword ptr [0x107905a4], edx */
  w32((uint32_t)(0x107905a4), (EDX));
  /* 10764c32 mov eax, dword ptr [0x107905ac] */
  EAX = (r32((uint32_t)(0x107905ac)));
  /* 10764c37 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764c3a mov dword ptr [0x107905ac], eax */
  w32((uint32_t)(0x107905ac), (EAX));
  /* 10764c3f mov ecx, dword ptr [0x107905ac] */
  ECX = (r32((uint32_t)(0x107905ac)));
  /* 10764c45 cmp ecx, dword ptr [0x107905b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x107905b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764c4b jbe 0x10764c59 */
  if ((C.cf||C.zf)) goto L_10764c59;
  /* 10764c4d mov edx, dword ptr [0x107905ac] */
  EDX = (r32((uint32_t)(0x107905ac)));
  /* 10764c53 mov dword ptr [0x107905b0], edx */
  w32((uint32_t)(0x107905b0), (EDX));
L_10764c59:;
  /* 10764c59 cmp dword ptr [0x107905a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107905a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764c60 je 0x10764c6f */
  if (C.zf) goto L_10764c6f;
  /* 10764c62 mov eax, dword ptr [0x107905a8] */
  EAX = (r32((uint32_t)(0x107905a8)));
  /* 10764c67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10764c6d jmp 0x10764c78 */
  goto L_10764c78;
L_10764c6f:;
  /* 10764c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c72 mov dword ptr [0x107905a0], edx */
  w32((uint32_t)(0x107905a0), (EDX));
L_10764c78:;
  /* 10764c78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c7b mov ecx, dword ptr [0x107905a8] */
  ECX = (r32((uint32_t)(0x107905a8)));
  /* 10764c81 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10764c83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c86 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10764c8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764c93 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10764c96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764c99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764c9c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10764c9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764ca2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764ca5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10764ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764cab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764cae mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10764cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764cb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764cb7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10764cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764cbd mov dword ptr [0x107905a8], ecx */
  w32((uint32_t)(0x107905a8), (ECX));
L_10764cc3:;
  /* 10764cc3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10764cc5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10764cc7 mov dl, byte ptr [0x1078ea90] */
  DL = (r8((uint32_t)(0x1078ea90)));
  /* 10764ccd push edx */
  push32((uint32_t)(EDX));
  /* 10764cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764cd1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764cd4 push eax */
  push32((uint32_t)(EAX));
  /* 10764cd5 call 0x107686b0 */
  push32(0x10764cdau); f_107686b0();
  /* 10764cda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764cdd push 4 */
  push32((uint32_t)(0x4u));
  /* 10764cdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10764ce1 mov cl, byte ptr [0x1078ea90] */
  CL = (r8((uint32_t)(0x1078ea90)));
  /* 10764ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 10764ce8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764ceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764cee lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10764cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10764cf3 call 0x107686b0 */
  push32(0x10764cf8u); f_107686b0();
  /* 10764cf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764cfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764cfe push edx */
  push32((uint32_t)(EDX));
  /* 10764cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764d01 mov al, byte ptr [0x1078ea92] */
  AL = (r8((uint32_t)(0x1078ea92)));
  /* 10764d06 push eax */
  push32((uint32_t)(EAX));
  /* 10764d07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764d0a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764d0d push ecx */
  push32((uint32_t)(ECX));
  /* 10764d0e call 0x107686b0 */
  push32(0x10764d13u); f_107686b0();
  /* 10764d13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764d16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764d19 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10764d1c:;
  /* 10764d1c pop edi */
  EDI = (pop32());
  /* 10764d1d pop esi */
  ESI = (pop32());
  /* 10764d1e pop ebx */
  EBX = (pop32());
  /* 10764d1f mov esp, ebp */
  ESP = (EBP);
  /* 10764d21 pop ebp */
  EBP = (pop32());
  /* 10764d22 ret  */
  ESPCHK(0x10764a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x10764d30 (27 bytes, 13 insns) */
void f_10764d30(void) {
  FTRACE(0x10764d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10764d31 mov ebp, esp */
  EBP = (ESP);
  /* 10764d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764d39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764d3c push eax */
  push32((uint32_t)(EAX));
  /* 10764d3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764d40 push ecx */
  push32((uint32_t)(ECX));
  /* 10764d41 call 0x10764d50 */
  push32(0x10764d46u); f_10764d50();
  /* 10764d46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764d49 pop ebp */
  EBP = (pop32());
  /* 10764d4a ret  */
  ESPCHK(0x10764d30u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10764d50 (96 bytes, 37 insns) */
void f_10764d50(void) {
  FTRACE(0x10764d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10764d51 mov ebp, esp */
  EBP = (ESP);
  /* 10764d53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10764d56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764d59 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10764d5d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10764d60 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10764d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10764d64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764d67 push edx */
  push32((uint32_t)(EDX));
  /* 10764d68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764d6b push eax */
  push32((uint32_t)(EAX));
  /* 10764d6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764d6f push ecx */
  push32((uint32_t)(ECX));
  /* 10764d70 call 0x10764940 */
  push32(0x10764d75u); f_10764940();
  /* 10764d75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764d78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10764d7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764d7f je 0x10764da9 */
  if (C.zf) goto L_10764da9;
  /* 10764d81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764d84 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10764d87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10764d8a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764d8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10764d90:;
  /* 10764d90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10764d93 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764d96 jae 0x10764da9 */
  if (!C.cf) goto L_10764da9;
  /* 10764d98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10764d9b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10764d9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10764da1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10764da4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10764da7 jmp 0x10764d90 */
  goto L_10764d90;
L_10764da9:;
  /* 10764da9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764dac mov esp, ebp */
  ESP = (EBP);
  /* 10764dae pop ebp */
  EBP = (pop32());
  /* 10764daf ret  */
  ESPCHK(0x10764d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x10764db0 (27 bytes, 13 insns) */
void f_10764db0(void) {
  FTRACE(0x10764db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10764db1 mov ebp, esp */
  EBP = (ESP);
  /* 10764db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764db9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764dbc push eax */
  push32((uint32_t)(EAX));
  /* 10764dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10764dc1 call 0x10764dd0 */
  push32(0x10764dc6u); f_10764dd0();
  /* 10764dc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764dc9 pop ebp */
  EBP = (pop32());
  /* 10764dca ret  */
  ESPCHK(0x10764db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd0 @ 0x10764dd0 (64 bytes, 27 insns) */
void f_10764dd0(void) {
  FTRACE(0x10764dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10764dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10764dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10764dd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10764dd6 call 0x10768340 */
  push32(0x10764ddbu); f_10768340();
  /* 10764ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764dde push 1 */
  push32((uint32_t)(0x1u));
  /* 10764de0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10764de3 push eax */
  push32((uint32_t)(EAX));
  /* 10764de4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764de7 push ecx */
  push32((uint32_t)(ECX));
  /* 10764de8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764deb push edx */
  push32((uint32_t)(EDX));
  /* 10764dec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764def push eax */
  push32((uint32_t)(EAX));
  /* 10764df0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764df3 push ecx */
  push32((uint32_t)(ECX));
  /* 10764df4 call 0x10764e10 */
  push32(0x10764df9u); f_10764e10();
  /* 10764df9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764dfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10764dff push 9 */
  push32((uint32_t)(0x9u));
  /* 10764e01 call 0x107683e0 */
  push32(0x10764e06u); f_107683e0();
  /* 10764e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764e09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10764e0c mov esp, ebp */
  ESP = (EBP);
  /* 10764e0e pop ebp */
  EBP = (pop32());
  /* 10764e0f ret  */
  ESPCHK(0x10764dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e10 @ 0x10764e10 (1297 bytes, 431 insns) */
void f_10764e10(void) {
  FTRACE(0x10764e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10764e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10764e11 mov ebp, esp */
  EBP = (ESP);
  /* 10764e13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10764e16 push ebx */
  push32((uint32_t)(EBX));
  /* 10764e17 push esi */
  push32((uint32_t)(ESI));
  /* 10764e18 push edi */
  push32((uint32_t)(EDI));
  /* 10764e19 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10764e20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764e24 jne 0x10764e43 */
  if (!C.zf) goto L_10764e43;
  /* 10764e26 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10764e29 push eax */
  push32((uint32_t)(EAX));
  /* 10764e2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764e2d push ecx */
  push32((uint32_t)(ECX));
  /* 10764e2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764e31 push edx */
  push32((uint32_t)(EDX));
  /* 10764e32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764e35 push eax */
  push32((uint32_t)(EAX));
  /* 10764e36 call 0x10764940 */
  push32(0x10764e3bu); f_10764940();
  /* 10764e3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764e3e jmp 0x1076531a */
  goto L_1076531a;
L_10764e43:;
  /* 10764e43 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764e47 je 0x10764e66 */
  if (C.zf) goto L_10764e66;
  /* 10764e49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764e4d jne 0x10764e66 */
  if (!C.zf) goto L_10764e66;
  /* 10764e4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764e52 push ecx */
  push32((uint32_t)(ECX));
  /* 10764e53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764e56 push edx */
  push32((uint32_t)(EDX));
  /* 10764e57 call 0x107653d0 */
  push32(0x10764e5cu); f_107653d0();
  /* 10764e5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764e5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764e61 jmp 0x1076531a */
  goto L_1076531a;
L_10764e66:;
  /* 10764e66 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 10764e6b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10764e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764e70 je 0x10764ea2 */
  if (C.zf) goto L_10764ea2;
L_10764e72:;
  /* 10764e72 call 0x10765ae0 */
  push32(0x10764e77u); f_10765ae0();
  /* 10764e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764e79 jne 0x10764e9c */
  if (!C.zf) goto L_10764e9c;
  /* 10764e7b push 0x1078b68c */
  push32((uint32_t)(0x1078b68cu));
  /* 10764e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764e82 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10764e87 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10764e8c push 2 */
  push32((uint32_t)(0x2u));
  /* 10764e8e call 0x10763a00 */
  push32(0x10764e93u); f_10763a00();
  /* 10764e93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764e96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764e99 jne 0x10764e9c */
  if (!C.zf) goto L_10764e9c;
  /* 10764e9b int3  */
  x86_unimpl("int3 @ 0x10764e9b");
L_10764e9c:;
  /* 10764e9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10764e9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10764ea0 jne 0x10764e72 */
  if (!C.zf) goto L_10764e72;
L_10764ea2:;
  /* 10764ea2 mov edx, dword ptr [0x1078ea88] */
  EDX = (r32((uint32_t)(0x1078ea88)));
  /* 10764ea8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10764eab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10764eae cmp eax, dword ptr [0x1078ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764eb4 jne 0x10764eb7 */
  if (!C.zf) goto L_10764eb7;
  /* 10764eb6 int3  */
  x86_unimpl("int3 @ 0x10764eb6");
L_10764eb7:;
  /* 10764eb7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10764eba push ecx */
  push32((uint32_t)(ECX));
  /* 10764ebb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764ebe push edx */
  push32((uint32_t)(EDX));
  /* 10764ebf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10764ec2 push eax */
  push32((uint32_t)(EAX));
  /* 10764ec3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 10764ec7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764eca push edx */
  push32((uint32_t)(EDX));
  /* 10764ecb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764ece push eax */
  push32((uint32_t)(EAX));
  /* 10764ecf push 2 */
  push32((uint32_t)(0x2u));
  /* 10764ed1 call dword ptr [0x1078ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1078ec90))), 0x10764ed7u);
  /* 10764ed7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764edc jne 0x10764f3c */
  if (!C.zf) goto L_10764f3c;
  /* 10764ede cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764ee2 je 0x10764f0f */
  if (C.zf) goto L_10764f0f;
L_10764ee4:;
  /* 10764ee4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10764ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 10764ee8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10764eeb push edx */
  push32((uint32_t)(EDX));
  /* 10764eec push 0x1078b808 */
  push32((uint32_t)(0x1078b808u));
  /* 10764ef1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764ef9 call 0x10763a00 */
  push32(0x10764efeu); f_10763a00();
  /* 10764efe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764f01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764f04 jne 0x10764f07 */
  if (!C.zf) goto L_10764f07;
  /* 10764f06 int3  */
  x86_unimpl("int3 @ 0x10764f06");
L_10764f07:;
  /* 10764f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764f0b jne 0x10764ee4 */
  if (!C.zf) goto L_10764ee4;
  /* 10764f0d jmp 0x10764f35 */
  goto L_10764f35;
L_10764f0f:;
  /* 10764f0f push 0x1078b7e4 */
  push32((uint32_t)(0x1078b7e4u));
  /* 10764f14 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10764f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f21 call 0x10763a00 */
  push32(0x10764f26u); f_10763a00();
  /* 10764f26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764f29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764f2c jne 0x10764f2f */
  if (!C.zf) goto L_10764f2f;
  /* 10764f2e int3  */
  x86_unimpl("int3 @ 0x10764f2e");
L_10764f2f:;
  /* 10764f2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10764f31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10764f33 jne 0x10764f0f */
  if (!C.zf) goto L_10764f0f;
L_10764f35:;
  /* 10764f35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764f37 jmp 0x1076531a */
  goto L_1076531a;
L_10764f3c:;
  /* 10764f3c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764f40 jbe 0x10764f6e */
  if ((C.cf||C.zf)) goto L_10764f6e;
L_10764f42:;
  /* 10764f42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10764f45 push edx */
  push32((uint32_t)(EDX));
  /* 10764f46 push 0x1078b7b4 */
  push32((uint32_t)(0x1078b7b4u));
  /* 10764f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764f53 call 0x10763a00 */
  push32(0x10764f58u); f_10763a00();
  /* 10764f58 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764f5b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764f5e jne 0x10764f61 */
  if (!C.zf) goto L_10764f61;
  /* 10764f60 int3  */
  x86_unimpl("int3 @ 0x10764f60");
L_10764f61:;
  /* 10764f61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764f63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764f65 jne 0x10764f42 */
  if (!C.zf) goto L_10764f42;
  /* 10764f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764f69 jmp 0x1076531a */
  goto L_1076531a;
L_10764f6e:;
  /* 10764f6e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764f72 je 0x10764fb6 */
  if (C.zf) goto L_10764fb6;
  /* 10764f74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764f77 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10764f7d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764f80 je 0x10764fb6 */
  if (C.zf) goto L_10764fb6;
  /* 10764f82 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10764f85 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10764f8b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764f8e je 0x10764fb6 */
  if (C.zf) goto L_10764fb6;
L_10764f90:;
  /* 10764f90 push 0x1078b5c8 */
  push32((uint32_t)(0x1078b5c8u));
  /* 10764f95 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10764f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10764f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10764fa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10764fa2 call 0x10763a00 */
  push32(0x10764fa7u); f_10763a00();
  /* 10764fa7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764faa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764fad jne 0x10764fb0 */
  if (!C.zf) goto L_10764fb0;
  /* 10764faf int3  */
  x86_unimpl("int3 @ 0x10764faf");
L_10764fb0:;
  /* 10764fb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10764fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764fb4 jne 0x10764f90 */
  if (!C.zf) goto L_10764f90;
L_10764fb6:;
  /* 10764fb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764fb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10764fba call 0x10765f40 */
  push32(0x10764fbfu); f_10765f40();
  /* 10764fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10764fc4 jne 0x10764fe7 */
  if (!C.zf) goto L_10764fe7;
  /* 10764fc6 push 0x1078b790 */
  push32((uint32_t)(0x1078b790u));
  /* 10764fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10764fcd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10764fd2 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10764fd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10764fd9 call 0x10763a00 */
  push32(0x10764fdeu); f_10763a00();
  /* 10764fde add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10764fe1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764fe4 jne 0x10764fe7 */
  if (!C.zf) goto L_10764fe7;
  /* 10764fe6 int3  */
  x86_unimpl("int3 @ 0x10764fe6");
L_10764fe7:;
  /* 10764fe7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10764fe9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10764feb jne 0x10764fb6 */
  if (!C.zf) goto L_10764fb6;
  /* 10764fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10764ff0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10764ff3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10764ff6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10764ff9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10764ffd jne 0x10765006 */
  if (!C.zf) goto L_10765006;
  /* 10764fff mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10765006:;
  /* 10765006 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076500a je 0x1076504a */
  if (C.zf) goto L_1076504a;
L_1076500c:;
  /* 1076500c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076500f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765016 jne 0x10765021 */
  if (!C.zf) goto L_10765021;
  /* 10765018 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076501b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076501f je 0x10765042 */
  if (C.zf) goto L_10765042;
L_10765021:;
  /* 10765021 push 0x1078b748 */
  push32((uint32_t)(0x1078b748u));
  /* 10765026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765028 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1076502d push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765032 push 2 */
  push32((uint32_t)(0x2u));
  /* 10765034 call 0x10763a00 */
  push32(0x10765039u); f_10763a00();
  /* 10765039 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076503c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076503f jne 0x10765042 */
  if (!C.zf) goto L_10765042;
  /* 10765041 int3  */
  x86_unimpl("int3 @ 0x10765041");
L_10765042:;
  /* 10765042 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765044 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765046 jne 0x1076500c */
  if (!C.zf) goto L_1076500c;
  /* 10765048 jmp 0x107650ae */
  goto L_107650ae;
L_1076504a:;
  /* 1076504a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076504d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10765050 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10765055 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765058 jne 0x1076506f */
  if (!C.zf) goto L_1076506f;
  /* 1076505a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076505d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10765063 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765066 jne 0x1076506f */
  if (!C.zf) goto L_1076506f;
  /* 10765068 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1076506f:;
  /* 1076506f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765072 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10765075 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076507a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076507d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10765083 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765085 je 0x107650a8 */
  if (C.zf) goto L_107650a8;
  /* 10765087 push 0x1078b70c */
  push32((uint32_t)(0x1078b70cu));
  /* 1076508c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076508e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10765093 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765098 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076509a call 0x10763a00 */
  push32(0x1076509fu); f_10763a00();
  /* 1076509f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107650a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107650a5 jne 0x107650a8 */
  if (!C.zf) goto L_107650a8;
  /* 107650a7 int3  */
  x86_unimpl("int3 @ 0x107650a7");
L_107650a8:;
  /* 107650a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107650aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107650ac jne 0x1076506f */
  if (!C.zf) goto L_1076506f;
L_107650ae:;
  /* 107650ae cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107650b2 je 0x107650d9 */
  if (C.zf) goto L_107650d9;
  /* 107650b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107650b7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107650ba push eax */
  push32((uint32_t)(EAX));
  /* 107650bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107650be push ecx */
  push32((uint32_t)(ECX));
  /* 107650bf call 0x107688c0 */
  push32(0x107650c4u); f_107688c0();
  /* 107650c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107650c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107650ca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107650ce jne 0x107650d7 */
  if (!C.zf) goto L_107650d7;
  /* 107650d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107650d2 jmp 0x1076531a */
  goto L_1076531a;
L_107650d7:;
  /* 107650d7 jmp 0x107650fc */
  goto L_107650fc;
L_107650d9:;
  /* 107650d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107650dc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107650df push edx */
  push32((uint32_t)(EDX));
  /* 107650e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107650e3 push eax */
  push32((uint32_t)(EAX));
  /* 107650e4 call 0x10768810 */
  push32(0x107650e9u); f_10768810();
  /* 107650e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107650ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107650ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107650f3 jne 0x107650fc */
  if (!C.zf) goto L_107650fc;
  /* 107650f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107650f7 jmp 0x1076531a */
  goto L_1076531a;
L_107650fc:;
  /* 107650fc mov ecx, dword ptr [0x1078ea88] */
  ECX = (r32((uint32_t)(0x1078ea88)));
  /* 10765102 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765105 mov dword ptr [0x1078ea88], ecx */
  w32((uint32_t)(0x1078ea88), (ECX));
  /* 1076510b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076510f jne 0x10765167 */
  if (!C.zf) goto L_10765167;
  /* 10765111 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765114 mov eax, dword ptr [0x107905a4] */
  EAX = (r32((uint32_t)(0x107905a4)));
  /* 10765119 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076511c mov dword ptr [0x107905a4], eax */
  w32((uint32_t)(0x107905a4), (EAX));
  /* 10765121 mov ecx, dword ptr [0x107905a4] */
  ECX = (r32((uint32_t)(0x107905a4)));
  /* 10765127 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076512a mov dword ptr [0x107905a4], ecx */
  w32((uint32_t)(0x107905a4), (ECX));
  /* 10765130 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765133 mov eax, dword ptr [0x107905ac] */
  EAX = (r32((uint32_t)(0x107905ac)));
  /* 10765138 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076513b mov dword ptr [0x107905ac], eax */
  w32((uint32_t)(0x107905ac), (EAX));
  /* 10765140 mov ecx, dword ptr [0x107905ac] */
  ECX = (r32((uint32_t)(0x107905ac)));
  /* 10765146 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765149 mov dword ptr [0x107905ac], ecx */
  w32((uint32_t)(0x107905ac), (ECX));
  /* 1076514f mov edx, dword ptr [0x107905ac] */
  EDX = (r32((uint32_t)(0x107905ac)));
  /* 10765155 cmp edx, dword ptr [0x107905b0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x107905b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076515b jbe 0x10765167 */
  if ((C.cf||C.zf)) goto L_10765167;
  /* 1076515d mov eax, dword ptr [0x107905ac] */
  EAX = (r32((uint32_t)(0x107905ac)));
  /* 10765162 mov dword ptr [0x107905b0], eax */
  w32((uint32_t)(0x107905b0), (EAX));
L_10765167:;
  /* 10765167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076516a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076516d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10765170 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765173 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765176 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765179 jbe 0x1076519f */
  if ((C.cf||C.zf)) goto L_1076519f;
  /* 1076517b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076517e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765181 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765184 push edx */
  push32((uint32_t)(EDX));
  /* 10765185 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765187 mov al, byte ptr [0x1078ea92] */
  AL = (r8((uint32_t)(0x1078ea92)));
  /* 1076518c push eax */
  push32((uint32_t)(EAX));
  /* 1076518d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765190 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765193 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765196 push edx */
  push32((uint32_t)(EDX));
  /* 10765197 call 0x107686b0 */
  push32(0x1076519cu); f_107686b0();
  /* 1076519c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076519f:;
  /* 1076519f push 4 */
  push32((uint32_t)(0x4u));
  /* 107651a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107651a3 mov al, byte ptr [0x1078ea90] */
  AL = (r8((uint32_t)(0x1078ea90)));
  /* 107651a8 push eax */
  push32((uint32_t)(EAX));
  /* 107651a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107651ac add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107651af push ecx */
  push32((uint32_t)(ECX));
  /* 107651b0 call 0x107686b0 */
  push32(0x107651b5u); f_107686b0();
  /* 107651b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107651b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107651bc jne 0x107651d9 */
  if (!C.zf) goto L_107651d9;
  /* 107651be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107651c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107651c4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107651c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107651ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107651cd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 107651d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107651d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107651d6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_107651d9:;
  /* 107651d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107651dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107651df mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_107651e2:;
  /* 107651e2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107651e6 jne 0x10765217 */
  if (!C.zf) goto L_10765217;
  /* 107651e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107651ec jne 0x107651f6 */
  if (!C.zf) goto L_107651f6;
  /* 107651ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107651f1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107651f4 je 0x10765217 */
  if (C.zf) goto L_10765217;
L_107651f6:;
  /* 107651f6 push 0x1078b6d8 */
  push32((uint32_t)(0x1078b6d8u));
  /* 107651fb push 0 */
  push32((uint32_t)(0x0u));
  /* 107651fd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10765202 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765207 push 2 */
  push32((uint32_t)(0x2u));
  /* 10765209 call 0x10763a00 */
  push32(0x1076520eu); f_10763a00();
  /* 1076520e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765211 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765214 jne 0x10765217 */
  if (!C.zf) goto L_10765217;
  /* 10765216 int3  */
  x86_unimpl("int3 @ 0x10765216");
L_10765217:;
  /* 10765217 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765219 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076521b jne 0x107651e2 */
  if (!C.zf) goto L_107651e2;
  /* 1076521d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765220 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765223 je 0x1076522b */
  if (C.zf) goto L_1076522b;
  /* 10765225 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765229 je 0x10765233 */
  if (C.zf) goto L_10765233;
L_1076522b:;
  /* 1076522b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076522e jmp 0x1076531a */
  goto L_1076531a;
L_10765233:;
  /* 10765233 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765236 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765239 je 0x1076524b */
  if (C.zf) goto L_1076524b;
  /* 1076523b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076523e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10765240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765243 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10765246 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10765249 jmp 0x10765287 */
  goto L_10765287;
L_1076524b:;
  /* 1076524b mov eax, dword ptr [0x107905a0] */
  EAX = (r32((uint32_t)(0x107905a0)));
  /* 10765250 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765253 je 0x10765276 */
  if (C.zf) goto L_10765276;
  /* 10765255 push 0x1078b6bc */
  push32((uint32_t)(0x1078b6bcu));
  /* 1076525a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076525c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10765261 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765266 push 2 */
  push32((uint32_t)(0x2u));
  /* 10765268 call 0x10763a00 */
  push32(0x1076526du); f_10763a00();
  /* 1076526d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765270 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765273 jne 0x10765276 */
  if (!C.zf) goto L_10765276;
  /* 10765275 int3  */
  x86_unimpl("int3 @ 0x10765275");
L_10765276:;
  /* 10765276 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765278 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076527a jne 0x1076524b */
  if (!C.zf) goto L_1076524b;
  /* 1076527c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076527f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10765282 mov dword ptr [0x107905a0], eax */
  w32((uint32_t)(0x107905a0), (EAX));
L_10765287:;
  /* 10765287 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076528a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076528e je 0x1076529f */
  if (C.zf) goto L_1076529f;
  /* 10765290 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765293 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10765296 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765299 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076529b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1076529d jmp 0x107652da */
  goto L_107652da;
L_1076529f:;
  /* 1076529f mov eax, dword ptr [0x107905a8] */
  EAX = (r32((uint32_t)(0x107905a8)));
  /* 107652a4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107652a7 je 0x107652ca */
  if (C.zf) goto L_107652ca;
  /* 107652a9 push 0x1078b6a0 */
  push32((uint32_t)(0x1078b6a0u));
  /* 107652ae push 0 */
  push32((uint32_t)(0x0u));
  /* 107652b0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 107652b5 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 107652ba push 2 */
  push32((uint32_t)(0x2u));
  /* 107652bc call 0x10763a00 */
  push32(0x107652c1u); f_10763a00();
  /* 107652c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107652c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107652c7 jne 0x107652ca */
  if (!C.zf) goto L_107652ca;
  /* 107652c9 int3  */
  x86_unimpl("int3 @ 0x107652c9");
L_107652ca:;
  /* 107652ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107652cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107652ce jne 0x1076529f */
  if (!C.zf) goto L_1076529f;
  /* 107652d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107652d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107652d5 mov dword ptr [0x107905a8], eax */
  w32((uint32_t)(0x107905a8), (EAX));
L_107652da:;
  /* 107652da cmp dword ptr [0x107905a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107905a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107652e1 je 0x107652f1 */
  if (C.zf) goto L_107652f1;
  /* 107652e3 mov ecx, dword ptr [0x107905a8] */
  ECX = (r32((uint32_t)(0x107905a8)));
  /* 107652e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107652ec mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107652ef jmp 0x107652f9 */
  goto L_107652f9;
L_107652f1:;
  /* 107652f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107652f4 mov dword ptr [0x107905a0], eax */
  w32((uint32_t)(0x107905a0), (EAX));
L_107652f9:;
  /* 107652f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107652fc mov edx, dword ptr [0x107905a8] */
  EDX = (r32((uint32_t)(0x107905a8)));
  /* 10765302 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10765304 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765307 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1076530e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765311 mov dword ptr [0x107905a8], ecx */
  w32((uint32_t)(0x107905a8), (ECX));
  /* 10765317 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076531a:;
  /* 1076531a pop edi */
  EDI = (pop32());
  /* 1076531b pop esi */
  ESI = (pop32());
  /* 1076531c pop ebx */
  EBX = (pop32());
  /* 1076531d mov esp, ebp */
  ESP = (EBP);
  /* 1076531f pop ebp */
  EBP = (pop32());
  /* 10765320 ret  */
  ESPCHK(0x10764e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x10765330 (27 bytes, 13 insns) */
void f_10765330(void) {
  FTRACE(0x10765330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765330 push ebp */
  push32((uint32_t)(EBP));
  /* 10765331 mov ebp, esp */
  EBP = (ESP);
  /* 10765333 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765337 push 1 */
  push32((uint32_t)(0x1u));
  /* 10765339 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076533c push eax */
  push32((uint32_t)(EAX));
  /* 1076533d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765340 push ecx */
  push32((uint32_t)(ECX));
  /* 10765341 call 0x10765350 */
  push32(0x10765346u); f_10765350();
  /* 10765346 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765349 pop ebp */
  EBP = (pop32());
  /* 1076534a ret  */
  ESPCHK(0x10765330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x10765350 (64 bytes, 27 insns) */
void f_10765350(void) {
  FTRACE(0x10765350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765350 push ebp */
  push32((uint32_t)(EBP));
  /* 10765351 mov ebp, esp */
  EBP = (ESP);
  /* 10765353 push ecx */
  push32((uint32_t)(ECX));
  /* 10765354 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765356 call 0x10768340 */
  push32(0x1076535bu); f_10768340();
  /* 1076535b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076535e push 0 */
  push32((uint32_t)(0x0u));
  /* 10765360 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10765363 push eax */
  push32((uint32_t)(EAX));
  /* 10765364 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10765367 push ecx */
  push32((uint32_t)(ECX));
  /* 10765368 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076536b push edx */
  push32((uint32_t)(EDX));
  /* 1076536c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076536f push eax */
  push32((uint32_t)(EAX));
  /* 10765370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765373 push ecx */
  push32((uint32_t)(ECX));
  /* 10765374 call 0x10764e10 */
  push32(0x10765379u); f_10764e10();
  /* 10765379 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076537c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076537f push 9 */
  push32((uint32_t)(0x9u));
  /* 10765381 call 0x107683e0 */
  push32(0x10765386u); f_107683e0();
  /* 10765386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076538c mov esp, ebp */
  ESP = (EBP);
  /* 1076538e pop ebp */
  EBP = (pop32());
  /* 1076538f ret  */
  ESPCHK(0x10765350u, _esp0);
  ESP += 4; return;
}

/* FUN_10005390 @ 0x10765390 (19 bytes, 9 insns) */
void f_10765390(void) {
  FTRACE(0x10765390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765390 push ebp */
  push32((uint32_t)(EBP));
  /* 10765391 mov ebp, esp */
  EBP = (ESP);
  /* 10765393 push 1 */
  push32((uint32_t)(0x1u));
  /* 10765395 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765398 push eax */
  push32((uint32_t)(EAX));
  /* 10765399 call 0x107653d0 */
  push32(0x1076539eu); f_107653d0();
  /* 1076539e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107653a1 pop ebp */
  EBP = (pop32());
  /* 107653a2 ret  */
  ESPCHK(0x10765390u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b0 @ 0x107653b0 (19 bytes, 9 insns) */
void f_107653b0(void) {
  FTRACE(0x107653b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107653b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107653b1 mov ebp, esp */
  EBP = (ESP);
  /* 107653b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107653b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107653b8 push eax */
  push32((uint32_t)(EAX));
  /* 107653b9 call 0x10765400 */
  push32(0x107653beu); f_10765400();
  /* 107653be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107653c1 pop ebp */
  EBP = (pop32());
  /* 107653c2 ret  */
  ESPCHK(0x107653b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053d0 @ 0x107653d0 (41 bytes, 16 insns) */
void f_107653d0(void) {
  FTRACE(0x107653d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107653d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107653d1 mov ebp, esp */
  EBP = (ESP);
  /* 107653d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 107653d5 call 0x10768340 */
  push32(0x107653dau); f_10768340();
  /* 107653da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107653dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107653e0 push eax */
  push32((uint32_t)(EAX));
  /* 107653e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107653e4 push ecx */
  push32((uint32_t)(ECX));
  /* 107653e5 call 0x10765400 */
  push32(0x107653eau); f_10765400();
  /* 107653ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107653ed push 9 */
  push32((uint32_t)(0x9u));
  /* 107653ef call 0x107683e0 */
  push32(0x107653f4u); f_107683e0();
  /* 107653f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107653f7 pop ebp */
  EBP = (pop32());
  /* 107653f8 ret  */
  ESPCHK(0x107653d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x10765400 (1004 bytes, 342 insns) */
void f_10765400(void) {
  FTRACE(0x10765400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765400 push ebp */
  push32((uint32_t)(EBP));
  /* 10765401 mov ebp, esp */
  EBP = (ESP);
  /* 10765403 push ecx */
  push32((uint32_t)(ECX));
  /* 10765404 push ebx */
  push32((uint32_t)(EBX));
  /* 10765405 push esi */
  push32((uint32_t)(ESI));
  /* 10765406 push edi */
  push32((uint32_t)(EDI));
  /* 10765407 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 1076540c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1076540f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765411 je 0x10765443 */
  if (C.zf) goto L_10765443;
L_10765413:;
  /* 10765413 call 0x10765ae0 */
  push32(0x10765418u); f_10765ae0();
  /* 10765418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076541a jne 0x1076543d */
  if (!C.zf) goto L_1076543d;
  /* 1076541c push 0x1078b68c */
  push32((uint32_t)(0x1078b68cu));
  /* 10765421 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765423 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10765428 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 1076542d push 2 */
  push32((uint32_t)(0x2u));
  /* 1076542f call 0x10763a00 */
  push32(0x10765434u); f_10763a00();
  /* 10765434 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765437 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076543a jne 0x1076543d */
  if (!C.zf) goto L_1076543d;
  /* 1076543c int3  */
  x86_unimpl("int3 @ 0x1076543c");
L_1076543d:;
  /* 1076543d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076543f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765441 jne 0x10765413 */
  if (!C.zf) goto L_10765413;
L_10765443:;
  /* 10765443 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765447 jne 0x1076544e */
  if (!C.zf) goto L_1076544e;
  /* 10765449 jmp 0x107657e5 */
  goto L_107657e5;
L_1076544e:;
  /* 1076544e push 0 */
  push32((uint32_t)(0x0u));
  /* 10765450 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765452 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765454 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765457 push edx */
  push32((uint32_t)(EDX));
  /* 10765458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076545a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076545d push eax */
  push32((uint32_t)(EAX));
  /* 1076545e push 3 */
  push32((uint32_t)(0x3u));
  /* 10765460 call dword ptr [0x1078ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1078ec90))), 0x10765466u);
  /* 10765466 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076546b jne 0x10765498 */
  if (!C.zf) goto L_10765498;
L_1076546d:;
  /* 1076546d push 0x1078b950 */
  push32((uint32_t)(0x1078b950u));
  /* 10765472 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10765477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076547b push 0 */
  push32((uint32_t)(0x0u));
  /* 1076547d push 0 */
  push32((uint32_t)(0x0u));
  /* 1076547f call 0x10763a00 */
  push32(0x10765484u); f_10763a00();
  /* 10765484 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765487 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076548a jne 0x1076548d */
  if (!C.zf) goto L_1076548d;
  /* 1076548c int3  */
  x86_unimpl("int3 @ 0x1076548c");
L_1076548d:;
  /* 1076548d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076548f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765491 jne 0x1076546d */
  if (!C.zf) goto L_1076546d;
  /* 10765493 jmp 0x107657e5 */
  goto L_107657e5;
L_10765498:;
  /* 10765498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076549b push edx */
  push32((uint32_t)(EDX));
  /* 1076549c call 0x10765f40 */
  push32(0x107654a1u); f_10765f40();
  /* 107654a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107654a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107654a6 jne 0x107654c9 */
  if (!C.zf) goto L_107654c9;
  /* 107654a8 push 0x1078b790 */
  push32((uint32_t)(0x1078b790u));
  /* 107654ad push 0 */
  push32((uint32_t)(0x0u));
  /* 107654af push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 107654b4 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 107654b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107654bb call 0x10763a00 */
  push32(0x107654c0u); f_10763a00();
  /* 107654c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107654c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107654c6 jne 0x107654c9 */
  if (!C.zf) goto L_107654c9;
  /* 107654c8 int3  */
  x86_unimpl("int3 @ 0x107654c8");
L_107654c9:;
  /* 107654c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107654cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107654cd jne 0x10765498 */
  if (!C.zf) goto L_10765498;
  /* 107654cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107654d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107654d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107654d8:;
  /* 107654d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107654db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107654de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107654e3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107654e6 je 0x1076552b */
  if (C.zf) goto L_1076552b;
  /* 107654e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107654eb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107654ef je 0x1076552b */
  if (C.zf) goto L_1076552b;
  /* 107654f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107654f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107654f7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107654fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107654ff je 0x1076552b */
  if (C.zf) goto L_1076552b;
  /* 10765501 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765504 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765508 je 0x1076552b */
  if (C.zf) goto L_1076552b;
  /* 1076550a push 0x1078b928 */
  push32((uint32_t)(0x1078b928u));
  /* 1076550f push 0 */
  push32((uint32_t)(0x0u));
  /* 10765511 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10765516 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 1076551b push 2 */
  push32((uint32_t)(0x2u));
  /* 1076551d call 0x10763a00 */
  push32(0x10765522u); f_10763a00();
  /* 10765522 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765525 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765528 jne 0x1076552b */
  if (!C.zf) goto L_1076552b;
  /* 1076552a int3  */
  x86_unimpl("int3 @ 0x1076552a");
L_1076552b:;
  /* 1076552b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076552d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076552f jne 0x107654d8 */
  if (!C.zf) goto L_107654d8;
  /* 10765531 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 10765536 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10765539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076553b jne 0x10765606 */
  if (!C.zf) goto L_10765606;
  /* 10765541 push 4 */
  push32((uint32_t)(0x4u));
  /* 10765543 mov cl, byte ptr [0x1078ea90] */
  CL = (r8((uint32_t)(0x1078ea90)));
  /* 10765549 push ecx */
  push32((uint32_t)(ECX));
  /* 1076554a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076554d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765550 push edx */
  push32((uint32_t)(EDX));
  /* 10765551 call 0x10765a50 */
  push32(0x10765556u); f_10765a50();
  /* 10765556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076555b jne 0x107655a0 */
  if (!C.zf) goto L_107655a0;
L_1076555d:;
  /* 1076555d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765560 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765563 push eax */
  push32((uint32_t)(EAX));
  /* 10765564 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765567 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1076556a push edx */
  push32((uint32_t)(EDX));
  /* 1076556b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076556e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10765571 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10765577 mov edx, dword ptr [ecx*4 + 0x1078ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea94)));
  /* 1076557e push edx */
  push32((uint32_t)(EDX));
  /* 1076557f push 0x1078b8fc */
  push32((uint32_t)(0x1078b8fcu));
  /* 10765584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765588 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076558a push 1 */
  push32((uint32_t)(0x1u));
  /* 1076558c call 0x10763a00 */
  push32(0x10765591u); f_10763a00();
  /* 10765591 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765594 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765597 jne 0x1076559a */
  if (!C.zf) goto L_1076559a;
  /* 10765599 int3  */
  x86_unimpl("int3 @ 0x10765599");
L_1076559a:;
  /* 1076559a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076559c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076559e jne 0x1076555d */
  if (!C.zf) goto L_1076555d;
L_107655a0:;
  /* 107655a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 107655a2 mov cl, byte ptr [0x1078ea90] */
  CL = (r8((uint32_t)(0x1078ea90)));
  /* 107655a8 push ecx */
  push32((uint32_t)(ECX));
  /* 107655a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107655ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107655af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107655b2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 107655b6 push edx */
  push32((uint32_t)(EDX));
  /* 107655b7 call 0x10765a50 */
  push32(0x107655bcu); f_10765a50();
  /* 107655bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107655bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107655c1 jne 0x10765606 */
  if (!C.zf) goto L_10765606;
L_107655c3:;
  /* 107655c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107655c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107655c9 push eax */
  push32((uint32_t)(EAX));
  /* 107655ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107655cd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107655d0 push edx */
  push32((uint32_t)(EDX));
  /* 107655d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107655d4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107655d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107655dd mov edx, dword ptr [ecx*4 + 0x1078ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea94)));
  /* 107655e4 push edx */
  push32((uint32_t)(EDX));
  /* 107655e5 push 0x1078b8d0 */
  push32((uint32_t)(0x1078b8d0u));
  /* 107655ea push 0 */
  push32((uint32_t)(0x0u));
  /* 107655ec push 0 */
  push32((uint32_t)(0x0u));
  /* 107655ee push 0 */
  push32((uint32_t)(0x0u));
  /* 107655f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 107655f2 call 0x10763a00 */
  push32(0x107655f7u); f_10763a00();
  /* 107655f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107655fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107655fd jne 0x10765600 */
  if (!C.zf) goto L_10765600;
  /* 107655ff int3  */
  x86_unimpl("int3 @ 0x107655ff");
L_10765600:;
  /* 10765600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765604 jne 0x107655c3 */
  if (!C.zf) goto L_107655c3;
L_10765606:;
  /* 10765606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765609 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076560d jne 0x1076567b */
  if (!C.zf) goto L_1076567b;
L_1076560f:;
  /* 1076560f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765612 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765619 jne 0x10765624 */
  if (!C.zf) goto L_10765624;
  /* 1076561b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076561e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765622 je 0x10765645 */
  if (C.zf) goto L_10765645;
L_10765624:;
  /* 10765624 push 0x1078b890 */
  push32((uint32_t)(0x1078b890u));
  /* 10765629 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076562b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10765630 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765635 push 2 */
  push32((uint32_t)(0x2u));
  /* 10765637 call 0x10763a00 */
  push32(0x1076563cu); f_10763a00();
  /* 1076563c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076563f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765642 jne 0x10765645 */
  if (!C.zf) goto L_10765645;
  /* 10765644 int3  */
  x86_unimpl("int3 @ 0x10765644");
L_10765645:;
  /* 10765645 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765647 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765649 jne 0x1076560f */
  if (!C.zf) goto L_1076560f;
  /* 1076564b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076564e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10765651 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765654 push eax */
  push32((uint32_t)(EAX));
  /* 10765655 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765657 mov cl, byte ptr [0x1078ea91] */
  CL = (r8((uint32_t)(0x1078ea91)));
  /* 1076565d push ecx */
  push32((uint32_t)(ECX));
  /* 1076565e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765661 push edx */
  push32((uint32_t)(EDX));
  /* 10765662 call 0x107686b0 */
  push32(0x10765667u); f_107686b0();
  /* 10765667 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076566a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076566d push eax */
  push32((uint32_t)(EAX));
  /* 1076566e call 0x10768ab0 */
  push32(0x10765673u); f_10768ab0();
  /* 10765673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765676 jmp 0x107657e5 */
  goto L_107657e5;
L_1076567b:;
  /* 1076567b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076567e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765682 jne 0x10765691 */
  if (!C.zf) goto L_10765691;
  /* 10765684 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765688 jne 0x10765691 */
  if (!C.zf) goto L_10765691;
  /* 1076568a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10765691:;
  /* 10765691 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765694 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10765697 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076569a je 0x107656bd */
  if (C.zf) goto L_107656bd;
  /* 1076569c push 0x1078b870 */
  push32((uint32_t)(0x1078b870u));
  /* 107656a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107656a3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 107656a8 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 107656ad push 2 */
  push32((uint32_t)(0x2u));
  /* 107656af call 0x10763a00 */
  push32(0x107656b4u); f_10763a00();
  /* 107656b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107656b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107656ba jne 0x107656bd */
  if (!C.zf) goto L_107656bd;
  /* 107656bc int3  */
  x86_unimpl("int3 @ 0x107656bc");
L_107656bd:;
  /* 107656bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107656bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107656c1 jne 0x10765691 */
  if (!C.zf) goto L_10765691;
  /* 107656c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107656c6 mov eax, dword ptr [0x107905ac] */
  EAX = (r32((uint32_t)(0x107905ac)));
  /* 107656cb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107656ce mov dword ptr [0x107905ac], eax */
  w32((uint32_t)(0x107905ac), (EAX));
  /* 107656d3 mov ecx, dword ptr [0x1078ea84] */
  ECX = (r32((uint32_t)(0x1078ea84)));
  /* 107656d9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107656dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107656de jne 0x107657bc */
  if (!C.zf) goto L_107657bc;
  /* 107656e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107656e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107656ea je 0x107656fc */
  if (C.zf) goto L_107656fc;
  /* 107656ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107656ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107656f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107656f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107656f7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107656fa jmp 0x1076573a */
  goto L_1076573a;
L_107656fc:;
  /* 107656fc mov ecx, dword ptr [0x107905a0] */
  ECX = (r32((uint32_t)(0x107905a0)));
  /* 10765702 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765705 je 0x10765728 */
  if (C.zf) goto L_10765728;
  /* 10765707 push 0x1078b858 */
  push32((uint32_t)(0x1078b858u));
  /* 1076570c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076570e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10765713 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765718 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076571a call 0x10763a00 */
  push32(0x1076571fu); f_10763a00();
  /* 1076571f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765722 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765725 jne 0x10765728 */
  if (!C.zf) goto L_10765728;
  /* 10765727 int3  */
  x86_unimpl("int3 @ 0x10765727");
L_10765728:;
  /* 10765728 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076572a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076572c jne 0x107656fc */
  if (!C.zf) goto L_107656fc;
  /* 1076572e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765731 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10765734 mov dword ptr [0x107905a0], ecx */
  w32((uint32_t)(0x107905a0), (ECX));
L_1076573a:;
  /* 1076573a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076573d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765741 je 0x10765752 */
  if (C.zf) goto L_10765752;
  /* 10765743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765746 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10765749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076574c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076574e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10765750 jmp 0x1076578f */
  goto L_1076578f;
L_10765752:;
  /* 10765752 mov ecx, dword ptr [0x107905a8] */
  ECX = (r32((uint32_t)(0x107905a8)));
  /* 10765758 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076575b je 0x1076577e */
  if (C.zf) goto L_1076577e;
  /* 1076575d push 0x1078b840 */
  push32((uint32_t)(0x1078b840u));
  /* 10765762 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765764 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10765769 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 1076576e push 2 */
  push32((uint32_t)(0x2u));
  /* 10765770 call 0x10763a00 */
  push32(0x10765775u); f_10763a00();
  /* 10765775 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765778 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076577b jne 0x1076577e */
  if (!C.zf) goto L_1076577e;
  /* 1076577d int3  */
  x86_unimpl("int3 @ 0x1076577d");
L_1076577e:;
  /* 1076577e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765780 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10765782 jne 0x10765752 */
  if (!C.zf) goto L_10765752;
  /* 10765784 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765787 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10765789 mov dword ptr [0x107905a8], ecx */
  w32((uint32_t)(0x107905a8), (ECX));
L_1076578f:;
  /* 1076578f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765792 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10765795 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765798 push eax */
  push32((uint32_t)(EAX));
  /* 10765799 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076579b mov cl, byte ptr [0x1078ea91] */
  CL = (r8((uint32_t)(0x1078ea91)));
  /* 107657a1 push ecx */
  push32((uint32_t)(ECX));
  /* 107657a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107657a5 push edx */
  push32((uint32_t)(EDX));
  /* 107657a6 call 0x107686b0 */
  push32(0x107657abu); f_107686b0();
  /* 107657ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107657ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107657b1 push eax */
  push32((uint32_t)(EAX));
  /* 107657b2 call 0x10768ab0 */
  push32(0x107657b7u); f_10768ab0();
  /* 107657b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107657ba jmp 0x107657e5 */
  goto L_107657e5;
L_107657bc:;
  /* 107657bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107657bf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 107657c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107657c9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107657cc push eax */
  push32((uint32_t)(EAX));
  /* 107657cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107657cf mov cl, byte ptr [0x1078ea91] */
  CL = (r8((uint32_t)(0x1078ea91)));
  /* 107657d5 push ecx */
  push32((uint32_t)(ECX));
  /* 107657d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107657d9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107657dc push edx */
  push32((uint32_t)(EDX));
  /* 107657dd call 0x107686b0 */
  push32(0x107657e2u); f_107686b0();
  /* 107657e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107657e5:;
  /* 107657e5 pop edi */
  EDI = (pop32());
  /* 107657e6 pop esi */
  ESI = (pop32());
  /* 107657e7 pop ebx */
  EBX = (pop32());
  /* 107657e8 mov esp, ebp */
  ESP = (EBP);
  /* 107657ea pop ebp */
  EBP = (pop32());
  /* 107657eb ret  */
  ESPCHK(0x10765400u, _esp0);
  ESP += 4; return;
}

/* FUN_100057f0 @ 0x107657f0 (19 bytes, 9 insns) */
void f_107657f0(void) {
  FTRACE(0x107657f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107657f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107657f1 mov ebp, esp */
  EBP = (ESP);
  /* 107657f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107657f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107657f8 push eax */
  push32((uint32_t)(EAX));
  /* 107657f9 call 0x10765810 */
  push32(0x107657feu); f_10765810();
  /* 107657fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765801 pop ebp */
  EBP = (pop32());
  /* 10765802 ret  */
  ESPCHK(0x107657f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x10765810 (342 bytes, 119 insns) */
void f_10765810(void) {
  FTRACE(0x10765810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765810 push ebp */
  push32((uint32_t)(EBP));
  /* 10765811 mov ebp, esp */
  EBP = (ESP);
  /* 10765813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765816 push ebx */
  push32((uint32_t)(EBX));
  /* 10765817 push esi */
  push32((uint32_t)(ESI));
  /* 10765818 push edi */
  push32((uint32_t)(EDI));
  /* 10765819 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 1076581e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10765821 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765823 je 0x10765855 */
  if (C.zf) goto L_10765855;
L_10765825:;
  /* 10765825 call 0x10765ae0 */
  push32(0x1076582au); f_10765ae0();
  /* 1076582a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076582c jne 0x1076584f */
  if (!C.zf) goto L_1076584f;
  /* 1076582e push 0x1078b68c */
  push32((uint32_t)(0x1078b68cu));
  /* 10765833 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765835 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1076583a push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 1076583f push 2 */
  push32((uint32_t)(0x2u));
  /* 10765841 call 0x10763a00 */
  push32(0x10765846u); f_10763a00();
  /* 10765846 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765849 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076584c jne 0x1076584f */
  if (!C.zf) goto L_1076584f;
  /* 1076584e int3  */
  x86_unimpl("int3 @ 0x1076584e");
L_1076584f:;
  /* 1076584f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765851 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765853 jne 0x10765825 */
  if (!C.zf) goto L_10765825;
L_10765855:;
  /* 10765855 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765857 call 0x10768340 */
  push32(0x1076585cu); f_10768340();
  /* 1076585c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076585f:;
  /* 1076585f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765862 push edx */
  push32((uint32_t)(EDX));
  /* 10765863 call 0x10765f40 */
  push32(0x10765868u); f_10765f40();
  /* 10765868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076586b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076586d jne 0x10765890 */
  if (!C.zf) goto L_10765890;
  /* 1076586f push 0x1078b790 */
  push32((uint32_t)(0x1078b790u));
  /* 10765874 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765876 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1076587b push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765880 push 2 */
  push32((uint32_t)(0x2u));
  /* 10765882 call 0x10763a00 */
  push32(0x10765887u); f_10763a00();
  /* 10765887 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076588a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076588d jne 0x10765890 */
  if (!C.zf) goto L_10765890;
  /* 1076588f int3  */
  x86_unimpl("int3 @ 0x1076588f");
L_10765890:;
  /* 10765890 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765894 jne 0x1076585f */
  if (!C.zf) goto L_1076585f;
  /* 10765896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765899 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076589c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1076589f:;
  /* 1076589f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107658a2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107658a5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107658aa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107658ad je 0x107658f2 */
  if (C.zf) goto L_107658f2;
  /* 107658af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107658b2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107658b6 je 0x107658f2 */
  if (C.zf) goto L_107658f2;
  /* 107658b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107658bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107658be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107658c3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107658c6 je 0x107658f2 */
  if (C.zf) goto L_107658f2;
  /* 107658c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107658cb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107658cf je 0x107658f2 */
  if (C.zf) goto L_107658f2;
  /* 107658d1 push 0x1078b928 */
  push32((uint32_t)(0x1078b928u));
  /* 107658d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107658d8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 107658dd push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 107658e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107658e4 call 0x10763a00 */
  push32(0x107658e9u); f_10763a00();
  /* 107658e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107658ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107658ef jne 0x107658f2 */
  if (!C.zf) goto L_107658f2;
  /* 107658f1 int3  */
  x86_unimpl("int3 @ 0x107658f1");
L_107658f2:;
  /* 107658f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107658f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107658f6 jne 0x1076589f */
  if (!C.zf) goto L_1076589f;
  /* 107658f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107658fb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107658ff jne 0x1076590e */
  if (!C.zf) goto L_1076590e;
  /* 10765901 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765905 jne 0x1076590e */
  if (!C.zf) goto L_1076590e;
  /* 10765907 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1076590e:;
  /* 1076590e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765911 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765915 je 0x10765949 */
  if (C.zf) goto L_10765949;
L_10765917:;
  /* 10765917 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076591a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1076591d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765920 je 0x10765943 */
  if (C.zf) goto L_10765943;
  /* 10765922 push 0x1078b870 */
  push32((uint32_t)(0x1078b870u));
  /* 10765927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765929 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1076592e push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 10765933 push 2 */
  push32((uint32_t)(0x2u));
  /* 10765935 call 0x10763a00 */
  push32(0x1076593au); f_10763a00();
  /* 1076593a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076593d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765940 jne 0x10765943 */
  if (!C.zf) goto L_10765943;
  /* 10765942 int3  */
  x86_unimpl("int3 @ 0x10765942");
L_10765943:;
  /* 10765943 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765945 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765947 jne 0x10765917 */
  if (!C.zf) goto L_10765917;
L_10765949:;
  /* 10765949 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076594c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1076594f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10765952 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765954 call 0x107683e0 */
  push32(0x10765959u); f_107683e0();
  /* 10765959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076595c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076595f pop edi */
  EDI = (pop32());
  /* 10765960 pop esi */
  ESI = (pop32());
  /* 10765961 pop ebx */
  EBX = (pop32());
  /* 10765962 mov esp, ebp */
  ESP = (EBP);
  /* 10765964 pop ebp */
  EBP = (pop32());
  /* 10765965 ret  */
  ESPCHK(0x10765810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005970 @ 0x10765970 (28 bytes, 11 insns) */
void f_10765970(void) {
  FTRACE(0x10765970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765970 push ebp */
  push32((uint32_t)(EBP));
  /* 10765971 mov ebp, esp */
  EBP = (ESP);
  /* 10765973 push ecx */
  push32((uint32_t)(ECX));
  /* 10765974 mov eax, dword ptr [0x1078ea8c] */
  EAX = (r32((uint32_t)(0x1078ea8c)));
  /* 10765979 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076597c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076597f mov dword ptr [0x1078ea8c], ecx */
  w32((uint32_t)(0x1078ea8c), (ECX));
  /* 10765985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765988 mov esp, ebp */
  ESP = (EBP);
  /* 1076598a pop ebp */
  EBP = (pop32());
  /* 1076598b ret  */
  ESPCHK(0x10765970u, _esp0);
  ESP += 4; return;
}

/* FUN_10005990 @ 0x10765990 (157 bytes, 59 insns) */
void f_10765990(void) {
  FTRACE(0x10765990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765990 push ebp */
  push32((uint32_t)(EBP));
  /* 10765991 mov ebp, esp */
  EBP = (ESP);
  /* 10765993 push ecx */
  push32((uint32_t)(ECX));
  /* 10765994 push ebx */
  push32((uint32_t)(EBX));
  /* 10765995 push esi */
  push32((uint32_t)(ESI));
  /* 10765996 push edi */
  push32((uint32_t)(EDI));
  /* 10765997 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765999 call 0x10768340 */
  push32(0x1076599eu); f_10768340();
  /* 1076599e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107659a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107659a4 push eax */
  push32((uint32_t)(EAX));
  /* 107659a5 call 0x10765f40 */
  push32(0x107659aau); f_10765f40();
  /* 107659aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107659ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107659af je 0x10765a1c */
  if (C.zf) goto L_10765a1c;
  /* 107659b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107659b4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107659b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107659ba:;
  /* 107659ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107659bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107659c0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107659c5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107659c8 je 0x10765a0d */
  if (C.zf) goto L_10765a0d;
  /* 107659ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107659cd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107659d1 je 0x10765a0d */
  if (C.zf) goto L_10765a0d;
  /* 107659d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107659d6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107659d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107659de cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107659e1 je 0x10765a0d */
  if (C.zf) goto L_10765a0d;
  /* 107659e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107659e6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107659ea je 0x10765a0d */
  if (C.zf) goto L_10765a0d;
  /* 107659ec push 0x1078b928 */
  push32((uint32_t)(0x1078b928u));
  /* 107659f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107659f3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 107659f8 push 0x1078b680 */
  push32((uint32_t)(0x1078b680u));
  /* 107659fd push 2 */
  push32((uint32_t)(0x2u));
  /* 107659ff call 0x10763a00 */
  push32(0x10765a04u); f_10763a00();
  /* 10765a04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765a07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765a0a jne 0x10765a0d */
  if (!C.zf) goto L_10765a0d;
  /* 10765a0c int3  */
  x86_unimpl("int3 @ 0x10765a0c");
L_10765a0d:;
  /* 10765a0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765a0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10765a11 jne 0x107659ba */
  if (!C.zf) goto L_107659ba;
  /* 10765a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765a16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765a19 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10765a1c:;
  /* 10765a1c push 9 */
  push32((uint32_t)(0x9u));
  /* 10765a1e call 0x107683e0 */
  push32(0x10765a23u); f_107683e0();
  /* 10765a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765a26 pop edi */
  EDI = (pop32());
  /* 10765a27 pop esi */
  ESI = (pop32());
  /* 10765a28 pop ebx */
  EBX = (pop32());
  /* 10765a29 mov esp, ebp */
  ESP = (EBP);
  /* 10765a2b pop ebp */
  EBP = (pop32());
  /* 10765a2c ret  */
  ESPCHK(0x10765990u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a30 @ 0x10765a30 (28 bytes, 11 insns) */
void f_10765a30(void) {
  FTRACE(0x10765a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10765a31 mov ebp, esp */
  EBP = (ESP);
  /* 10765a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10765a34 mov eax, dword ptr [0x1078ec90] */
  EAX = (r32((uint32_t)(0x1078ec90)));
  /* 10765a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10765a3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765a3f mov dword ptr [0x1078ec90], ecx */
  w32((uint32_t)(0x1078ec90), (ECX));
  /* 10765a45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765a48 mov esp, ebp */
  ESP = (EBP);
  /* 10765a4a pop ebp */
  EBP = (pop32());
  /* 10765a4b ret  */
  ESPCHK(0x10765a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a50 @ 0x10765a50 (136 bytes, 55 insns) */
void f_10765a50(void) {
  FTRACE(0x10765a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10765a51 mov ebp, esp */
  EBP = (ESP);
  /* 10765a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10765a54 push ebx */
  push32((uint32_t)(EBX));
  /* 10765a55 push esi */
  push32((uint32_t)(ESI));
  /* 10765a56 push edi */
  push32((uint32_t)(EDI));
  /* 10765a57 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10765a5e:;
  /* 10765a5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10765a61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10765a64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765a67 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10765a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765a6c je 0x10765ace */
  if (C.zf) goto L_10765ace;
  /* 10765a6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765a71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765a73 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10765a75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765a78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10765a7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765a81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765a84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10765a87 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765a89 je 0x10765acc */
  if (C.zf) goto L_10765acc;
L_10765a8b:;
  /* 10765a8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765a8e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10765a93 push eax */
  push32((uint32_t)(EAX));
  /* 10765a94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765a97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765a99 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10765a9c push edx */
  push32((uint32_t)(EDX));
  /* 10765a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765aa0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765aa3 push eax */
  push32((uint32_t)(EAX));
  /* 10765aa4 push 0x1078b96c */
  push32((uint32_t)(0x1078b96cu));
  /* 10765aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765aab push 0 */
  push32((uint32_t)(0x0u));
  /* 10765aad push 0 */
  push32((uint32_t)(0x0u));
  /* 10765aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10765ab1 call 0x10763a00 */
  push32(0x10765ab6u); f_10763a00();
  /* 10765ab6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765ab9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765abc jne 0x10765abf */
  if (!C.zf) goto L_10765abf;
  /* 10765abe int3  */
  x86_unimpl("int3 @ 0x10765abe");
L_10765abf:;
  /* 10765abf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765ac1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765ac3 jne 0x10765a8b */
  if (!C.zf) goto L_10765a8b;
  /* 10765ac5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10765acc:;
  /* 10765acc jmp 0x10765a5e */
  goto L_10765a5e;
L_10765ace:;
  /* 10765ace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765ad1 pop edi */
  EDI = (pop32());
  /* 10765ad2 pop esi */
  ESI = (pop32());
  /* 10765ad3 pop ebx */
  EBX = (pop32());
  /* 10765ad4 mov esp, ebp */
  ESP = (EBP);
  /* 10765ad6 pop ebp */
  EBP = (pop32());
  /* 10765ad7 ret  */
  ESPCHK(0x10765a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x10765ae0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10765ae0(void) {
  FTRACE(0x10765ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10765ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10765ae3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 10765ae7 push esi */
  push32((uint32_t)(ESI));
  /* 10765ae8 push edi */
  push32((uint32_t)(EDI));
  /* 10765ae9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10765af0 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 10765af5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10765af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765afa jne 0x10765b06 */
  if (!C.zf) goto L_10765b06;
  /* 10765afc mov eax, 1 */
  EAX = (0x1u);
  /* 10765b01 jmp 0x10765e38 */
  goto L_10765e38;
L_10765b06:;
  /* 10765b06 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765b08 call 0x10768340 */
  push32(0x10765b0du); f_10768340();
  /* 10765b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765b10 call 0x10768b20 */
  push32(0x10765b15u); f_10768b20();
  /* 10765b15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10765b18 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765b1c je 0x10765c29 */
  if (C.zf) goto L_10765c29;
  /* 10765b22 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765b26 je 0x10765c29 */
  if (C.zf) goto L_10765c29;
  /* 10765b2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10765b2f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10765b32 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10765b35 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765b38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10765b3b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765b3f ja 0x10765bf2 */
  if ((!C.cf&&!C.zf)) goto L_10765bf2;
  /* 10765b45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10765b48 jmp dword ptr [eax*4 + 0x10765e3f] */
  switch (EAX) {
    case 0: goto L_10765bca;
    case 1: goto L_10765ba2;
    case 2: goto L_10765b7a;
    case 3: goto L_10765b4f;
    default: x86_unimpl("switch@0x10765b48 out of table"); return;
  }
L_10765b4f:;
  /* 10765b4f push 0x1078bac0 */
  push32((uint32_t)(0x1078bac0u));
  /* 10765b54 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10765b59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b61 call 0x10763a00 */
  push32(0x10765b66u); f_10763a00();
  /* 10765b66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765b69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765b6c jne 0x10765b6f */
  if (!C.zf) goto L_10765b6f;
  /* 10765b6e int3  */
  x86_unimpl("int3 @ 0x10765b6e");
L_10765b6f:;
  /* 10765b6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765b71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765b73 jne 0x10765b4f */
  if (!C.zf) goto L_10765b4f;
  /* 10765b75 jmp 0x10765c18 */
  goto L_10765c18;
L_10765b7a:;
  /* 10765b7a push 0x1078ba9c */
  push32((uint32_t)(0x1078ba9cu));
  /* 10765b7f push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10765b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10765b8c call 0x10763a00 */
  push32(0x10765b91u); f_10763a00();
  /* 10765b91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765b94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765b97 jne 0x10765b9a */
  if (!C.zf) goto L_10765b9a;
  /* 10765b99 int3  */
  x86_unimpl("int3 @ 0x10765b99");
L_10765b9a:;
  /* 10765b9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765b9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10765b9e jne 0x10765b7a */
  if (!C.zf) goto L_10765b7a;
  /* 10765ba0 jmp 0x10765c18 */
  goto L_10765c18;
L_10765ba2:;
  /* 10765ba2 push 0x1078ba78 */
  push32((uint32_t)(0x1078ba78u));
  /* 10765ba7 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10765bac push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bae push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bb4 call 0x10763a00 */
  push32(0x10765bb9u); f_10763a00();
  /* 10765bb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765bbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765bbf jne 0x10765bc2 */
  if (!C.zf) goto L_10765bc2;
  /* 10765bc1 int3  */
  x86_unimpl("int3 @ 0x10765bc1");
L_10765bc2:;
  /* 10765bc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765bc6 jne 0x10765ba2 */
  if (!C.zf) goto L_10765ba2;
  /* 10765bc8 jmp 0x10765c18 */
  goto L_10765c18;
L_10765bca:;
  /* 10765bca push 0x1078ba54 */
  push32((uint32_t)(0x1078ba54u));
  /* 10765bcf push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10765bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bda push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bdc call 0x10763a00 */
  push32(0x10765be1u); f_10763a00();
  /* 10765be1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765be4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765be7 jne 0x10765bea */
  if (!C.zf) goto L_10765bea;
  /* 10765be9 int3  */
  x86_unimpl("int3 @ 0x10765be9");
L_10765bea:;
  /* 10765bea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765bee jne 0x10765bca */
  if (!C.zf) goto L_10765bca;
  /* 10765bf0 jmp 0x10765c18 */
  goto L_10765c18;
L_10765bf2:;
  /* 10765bf2 push 0x1078ba28 */
  push32((uint32_t)(0x1078ba28u));
  /* 10765bf7 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10765bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10765bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10765c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765c04 call 0x10763a00 */
  push32(0x10765c09u); f_10763a00();
  /* 10765c09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765c0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765c0f jne 0x10765c12 */
  if (!C.zf) goto L_10765c12;
  /* 10765c11 int3  */
  x86_unimpl("int3 @ 0x10765c11");
L_10765c12:;
  /* 10765c12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765c14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10765c16 jne 0x10765bf2 */
  if (!C.zf) goto L_10765bf2;
L_10765c18:;
  /* 10765c18 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765c1a call 0x107683e0 */
  push32(0x10765c1fu); f_107683e0();
  /* 10765c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765c22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765c24 jmp 0x10765e38 */
  goto L_10765e38;
L_10765c29:;
  /* 10765c29 mov eax, dword ptr [0x107905a8] */
  EAX = (r32((uint32_t)(0x107905a8)));
  /* 10765c2e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10765c31 jmp 0x10765c3b */
  goto L_10765c3b;
L_10765c33:;
  /* 10765c33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765c36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10765c38 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10765c3b:;
  /* 10765c3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765c3f je 0x10765e2b */
  if (C.zf) goto L_10765e2b;
  /* 10765c45 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10765c4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765c4f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10765c52 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10765c58 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765c5b je 0x10765c80 */
  if (C.zf) goto L_10765c80;
  /* 10765c5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765c60 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765c64 je 0x10765c80 */
  if (C.zf) goto L_10765c80;
  /* 10765c66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765c69 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10765c6c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10765c72 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765c75 je 0x10765c80 */
  if (C.zf) goto L_10765c80;
  /* 10765c77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765c7a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765c7e jne 0x10765c98 */
  if (!C.zf) goto L_10765c98;
L_10765c80:;
  /* 10765c80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765c83 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10765c86 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10765c8c mov edx, dword ptr [ecx*4 + 0x1078ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea94)));
  /* 10765c93 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10765c96 jmp 0x10765c9f */
  goto L_10765c9f;
L_10765c98:;
  /* 10765c98 mov dword ptr [ebp - 0x14], 0x1078ba20 */
  w32((uint32_t)(EBP + -0x14), (0x1078ba20u));
L_10765c9f:;
  /* 10765c9f push 4 */
  push32((uint32_t)(0x4u));
  /* 10765ca1 mov al, byte ptr [0x1078ea90] */
  AL = (r8((uint32_t)(0x1078ea90)));
  /* 10765ca6 push eax */
  push32((uint32_t)(EAX));
  /* 10765ca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765caa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765cad push ecx */
  push32((uint32_t)(ECX));
  /* 10765cae call 0x10765a50 */
  push32(0x10765cb3u); f_10765a50();
  /* 10765cb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765cb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765cb8 jne 0x10765cf4 */
  if (!C.zf) goto L_10765cf4;
L_10765cba:;
  /* 10765cba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765cbd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765cc0 push edx */
  push32((uint32_t)(EDX));
  /* 10765cc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765cc4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10765cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10765cc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10765ccb push edx */
  push32((uint32_t)(EDX));
  /* 10765ccc push 0x1078b8fc */
  push32((uint32_t)(0x1078b8fcu));
  /* 10765cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765cd9 call 0x10763a00 */
  push32(0x10765cdeu); f_10763a00();
  /* 10765cde add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765ce1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765ce4 jne 0x10765ce7 */
  if (!C.zf) goto L_10765ce7;
  /* 10765ce6 int3  */
  x86_unimpl("int3 @ 0x10765ce6");
L_10765ce7:;
  /* 10765ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765ceb jne 0x10765cba */
  if (!C.zf) goto L_10765cba;
  /* 10765ced mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10765cf4:;
  /* 10765cf4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10765cf6 mov cl, byte ptr [0x1078ea90] */
  CL = (r8((uint32_t)(0x1078ea90)));
  /* 10765cfc push ecx */
  push32((uint32_t)(ECX));
  /* 10765cfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d00 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10765d03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d06 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10765d0a push edx */
  push32((uint32_t)(EDX));
  /* 10765d0b call 0x10765a50 */
  push32(0x10765d10u); f_10765a50();
  /* 10765d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765d13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765d15 jne 0x10765d51 */
  if (!C.zf) goto L_10765d51;
L_10765d17:;
  /* 10765d17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d1a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765d1d push eax */
  push32((uint32_t)(EAX));
  /* 10765d1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d21 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10765d24 push edx */
  push32((uint32_t)(EDX));
  /* 10765d25 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10765d28 push eax */
  push32((uint32_t)(EAX));
  /* 10765d29 push 0x1078b8d0 */
  push32((uint32_t)(0x1078b8d0u));
  /* 10765d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d36 call 0x10763a00 */
  push32(0x10765d3bu); f_10763a00();
  /* 10765d3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765d3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765d41 jne 0x10765d44 */
  if (!C.zf) goto L_10765d44;
  /* 10765d43 int3  */
  x86_unimpl("int3 @ 0x10765d43");
L_10765d44:;
  /* 10765d44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10765d46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765d48 jne 0x10765d17 */
  if (!C.zf) goto L_10765d17;
  /* 10765d4a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10765d51:;
  /* 10765d51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d54 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765d58 jne 0x10765daa */
  if (!C.zf) goto L_10765daa;
  /* 10765d5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10765d60 push ecx */
  push32((uint32_t)(ECX));
  /* 10765d61 mov dl, byte ptr [0x1078ea91] */
  DL = (r8((uint32_t)(0x1078ea91)));
  /* 10765d67 push edx */
  push32((uint32_t)(EDX));
  /* 10765d68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d6b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765d6e push eax */
  push32((uint32_t)(EAX));
  /* 10765d6f call 0x10765a50 */
  push32(0x10765d74u); f_10765a50();
  /* 10765d74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765d77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765d79 jne 0x10765daa */
  if (!C.zf) goto L_10765daa;
L_10765d7b:;
  /* 10765d7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765d7e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765d81 push ecx */
  push32((uint32_t)(ECX));
  /* 10765d82 push 0x1078b9f4 */
  push32((uint32_t)(0x1078b9f4u));
  /* 10765d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10765d8f call 0x10763a00 */
  push32(0x10765d94u); f_10763a00();
  /* 10765d94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765d97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765d9a jne 0x10765d9d */
  if (!C.zf) goto L_10765d9d;
  /* 10765d9c int3  */
  x86_unimpl("int3 @ 0x10765d9c");
L_10765d9d:;
  /* 10765d9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765d9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10765da1 jne 0x10765d7b */
  if (!C.zf) goto L_10765d7b;
  /* 10765da3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10765daa:;
  /* 10765daa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765dae jne 0x10765e26 */
  if (!C.zf) goto L_10765e26;
  /* 10765db0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765db3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765db7 je 0x10765dec */
  if (C.zf) goto L_10765dec;
L_10765db9:;
  /* 10765db9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765dbc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10765dbf push edx */
  push32((uint32_t)(EDX));
  /* 10765dc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765dc3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10765dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10765dc7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10765dca push edx */
  push32((uint32_t)(EDX));
  /* 10765dcb push 0x1078b9d4 */
  push32((uint32_t)(0x1078b9d4u));
  /* 10765dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765dd8 call 0x10763a00 */
  push32(0x10765dddu); f_10763a00();
  /* 10765ddd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765de0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765de3 jne 0x10765de6 */
  if (!C.zf) goto L_10765de6;
  /* 10765de5 int3  */
  x86_unimpl("int3 @ 0x10765de5");
L_10765de6:;
  /* 10765de6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765dea jne 0x10765db9 */
  if (!C.zf) goto L_10765db9;
L_10765dec:;
  /* 10765dec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765def mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10765df2 push edx */
  push32((uint32_t)(EDX));
  /* 10765df3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10765df6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765df9 push eax */
  push32((uint32_t)(EAX));
  /* 10765dfa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10765dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10765dfe push 0x1078b9a8 */
  push32((uint32_t)(0x1078b9a8u));
  /* 10765e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765e0b call 0x10763a00 */
  push32(0x10765e10u); f_10763a00();
  /* 10765e10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765e13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765e16 jne 0x10765e19 */
  if (!C.zf) goto L_10765e19;
  /* 10765e18 int3  */
  x86_unimpl("int3 @ 0x10765e18");
L_10765e19:;
  /* 10765e19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10765e1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10765e1d jne 0x10765dec */
  if (!C.zf) goto L_10765dec;
  /* 10765e1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10765e26:;
  /* 10765e26 jmp 0x10765c33 */
  goto L_10765c33;
L_10765e2b:;
  /* 10765e2b push 9 */
  push32((uint32_t)(0x9u));
  /* 10765e2d call 0x107683e0 */
  push32(0x10765e32u); f_107683e0();
  /* 10765e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10765e38:;
  /* 10765e38 pop edi */
  EDI = (pop32());
  /* 10765e39 pop esi */
  ESI = (pop32());
  /* 10765e3a pop ebx */
  EBX = (pop32());
  /* 10765e3b mov esp, ebp */
  ESP = (EBP);
  /* 10765e3d pop ebp */
  EBP = (pop32());
  /* 10765e3e ret  */
  ESPCHK(0x10765ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x10765e50 (34 bytes, 13 insns) */
void f_10765e50(void) {
  FTRACE(0x10765e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10765e51 mov ebp, esp */
  EBP = (ESP);
  /* 10765e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10765e54 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 10765e59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10765e5c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765e60 je 0x10765e6b */
  if (C.zf) goto L_10765e6b;
  /* 10765e62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765e65 mov dword ptr [0x1078ea84], ecx */
  w32((uint32_t)(0x1078ea84), (ECX));
L_10765e6b:;
  /* 10765e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765e6e mov esp, ebp */
  ESP = (EBP);
  /* 10765e70 pop ebp */
  EBP = (pop32());
  /* 10765e71 ret  */
  ESPCHK(0x10765e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e80 @ 0x10765e80 (103 bytes, 38 insns) */
void f_10765e80(void) {
  FTRACE(0x10765e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10765e81 mov ebp, esp */
  EBP = (ESP);
  /* 10765e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10765e84 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 10765e89 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10765e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765e8e jne 0x10765e92 */
  if (!C.zf) goto L_10765e92;
  /* 10765e90 jmp 0x10765ee3 */
  goto L_10765ee3;
L_10765e92:;
  /* 10765e92 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765e94 call 0x10768340 */
  push32(0x10765e99u); f_10768340();
  /* 10765e99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765e9c mov ecx, dword ptr [0x107905a8] */
  ECX = (r32((uint32_t)(0x107905a8)));
  /* 10765ea2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10765ea5 jmp 0x10765eaf */
  goto L_10765eaf;
L_10765ea7:;
  /* 10765ea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765eaa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10765eac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10765eaf:;
  /* 10765eaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765eb3 je 0x10765ed9 */
  if (C.zf) goto L_10765ed9;
  /* 10765eb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765eb8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10765ebb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10765ec1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765ec4 jne 0x10765ed7 */
  if (!C.zf) goto L_10765ed7;
  /* 10765ec6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10765eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765ecd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10765ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 10765ed1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10765ed4u);
  /* 10765ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10765ed7:;
  /* 10765ed7 jmp 0x10765ea7 */
  goto L_10765ea7;
L_10765ed9:;
  /* 10765ed9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10765edb call 0x107683e0 */
  push32(0x10765ee0u); f_107683e0();
  /* 10765ee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10765ee3:;
  /* 10765ee3 mov esp, ebp */
  ESP = (EBP);
  /* 10765ee5 pop ebp */
  EBP = (pop32());
  /* 10765ee6 ret  */
  ESPCHK(0x10765e80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10765ef0 (75 bytes, 28 insns) */
void f_10765ef0(void) {
  FTRACE(0x10765ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10765ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10765ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10765ef4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765ef8 je 0x10765f2d */
  if (C.zf) goto L_10765f2d;
  /* 10765efa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765efd push eax */
  push32((uint32_t)(EAX));
  /* 10765efe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765f01 push ecx */
  push32((uint32_t)(ECX));
  /* 10765f02 call dword ptr [0x1079338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079338c))), 0x10765f08u);
  /* 10765f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765f0a jne 0x10765f2d */
  if (!C.zf) goto L_10765f2d;
  /* 10765f0c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765f10 je 0x10765f24 */
  if (C.zf) goto L_10765f24;
  /* 10765f12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10765f15 push edx */
  push32((uint32_t)(EDX));
  /* 10765f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765f19 push eax */
  push32((uint32_t)(EAX));
  /* 10765f1a call dword ptr [0x10793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793388))), 0x10765f20u);
  /* 10765f20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765f22 jne 0x10765f2d */
  if (!C.zf) goto L_10765f2d;
L_10765f24:;
  /* 10765f24 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10765f2b jmp 0x10765f34 */
  goto L_10765f34;
L_10765f2d:;
  /* 10765f2d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10765f34:;
  /* 10765f34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765f37 mov esp, ebp */
  ESP = (EBP);
  /* 10765f39 pop ebp */
  EBP = (pop32());
  /* 10765f3a ret  */
  ESPCHK(0x10765ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x10765f40 (134 bytes, 50 insns) */
void f_10765f40(void) {
  FTRACE(0x10765f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10765f41 mov ebp, esp */
  EBP = (ESP);
  /* 10765f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10765f44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765f48 jne 0x10765f4e */
  if (!C.zf) goto L_10765f4e;
  /* 10765f4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765f4c jmp 0x10765fc2 */
  goto L_10765fc2;
L_10765f4e:;
  /* 10765f4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10765f50 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10765f52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765f55 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765f58 push eax */
  push32((uint32_t)(EAX));
  /* 10765f59 call 0x10765ef0 */
  push32(0x10765f5eu); f_10765ef0();
  /* 10765f5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765f61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765f63 jne 0x10765f69 */
  if (!C.zf) goto L_10765f69;
  /* 10765f65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765f67 jmp 0x10765fc2 */
  goto L_10765fc2;
L_10765f69:;
  /* 10765f69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765f6c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765f6f push ecx */
  push32((uint32_t)(ECX));
  /* 10765f70 call 0x10768c40 */
  push32(0x10765f75u); f_10768c40();
  /* 10765f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765f78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10765f7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10765f7f je 0x10765f96 */
  if (C.zf) goto L_10765f96;
  /* 10765f81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765f84 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765f87 push edx */
  push32((uint32_t)(EDX));
  /* 10765f88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10765f8b push eax */
  push32((uint32_t)(EAX));
  /* 10765f8c call 0x10768ca0 */
  push32(0x10765f91u); f_10768ca0();
  /* 10765f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765f94 jmp 0x10765fc2 */
  goto L_10765fc2;
L_10765f96:;
  /* 10765f96 mov ecx, dword ptr [0x1079055c] */
  ECX = (r32((uint32_t)(0x1079055c)));
  /* 10765f9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10765fa2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10765fa4 je 0x10765fad */
  if (C.zf) goto L_10765fad;
  /* 10765fa6 mov eax, 1 */
  EAX = (0x1u);
  /* 10765fab jmp 0x10765fc2 */
  goto L_10765fc2;
L_10765fad:;
  /* 10765fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765fb0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765fb3 push edx */
  push32((uint32_t)(EDX));
  /* 10765fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10765fb6 mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 10765fbb push eax */
  push32((uint32_t)(EAX));
  /* 10765fbc call dword ptr [0x10793390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793390))), 0x10765fc2u);
L_10765fc2:;
  /* 10765fc2 mov esp, ebp */
  ESP = (EBP);
  /* 10765fc4 pop ebp */
  EBP = (pop32());
  /* 10765fc5 ret  */
  ESPCHK(0x10765f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10765fd0 (227 bytes, 80 insns) */
void f_10765fd0(void) {
  FTRACE(0x10765fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10765fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10765fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10765fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10765fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765fd7 push eax */
  push32((uint32_t)(EAX));
  /* 10765fd8 call 0x10765f40 */
  push32(0x10765fddu); f_10765f40();
  /* 10765fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765fe0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10765fe2 jne 0x10765feb */
  if (!C.zf) goto L_10765feb;
  /* 10765fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10765fe6 jmp 0x107660af */
  goto L_107660af;
L_10765feb:;
  /* 10765feb push 9 */
  push32((uint32_t)(0x9u));
  /* 10765fed call 0x10768340 */
  push32(0x10765ff2u); f_10768340();
  /* 10765ff2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10765ff5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10765ff8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10765ffb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10765ffe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766001 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10766004 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10766009 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076600c je 0x10766030 */
  if (C.zf) goto L_10766030;
  /* 1076600e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766011 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766015 je 0x10766030 */
  if (C.zf) goto L_10766030;
  /* 10766017 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076601a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1076601d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10766022 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766025 je 0x10766030 */
  if (C.zf) goto L_10766030;
  /* 10766027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076602a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076602e jne 0x107660a3 */
  if (!C.zf) goto L_107660a3;
L_10766030:;
  /* 10766030 push 1 */
  push32((uint32_t)(0x1u));
  /* 10766032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766035 push edx */
  push32((uint32_t)(EDX));
  /* 10766036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766039 push eax */
  push32((uint32_t)(EAX));
  /* 1076603a call 0x10765ef0 */
  push32(0x1076603fu); f_10765ef0();
  /* 1076603f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766042 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766044 je 0x107660a3 */
  if (C.zf) goto L_107660a3;
  /* 10766046 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766049 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1076604c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076604f jne 0x107660a3 */
  if (!C.zf) goto L_107660a3;
  /* 10766051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766054 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10766057 cmp ecx, dword ptr [0x1078ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1078ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076605d jg 0x107660a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_107660a3;
  /* 1076605f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766063 je 0x10766070 */
  if (C.zf) goto L_10766070;
  /* 10766065 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076606b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1076606e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10766070:;
  /* 10766070 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766074 je 0x10766081 */
  if (C.zf) goto L_10766081;
  /* 10766076 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10766079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076607c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076607f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10766081:;
  /* 10766081 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766085 je 0x10766092 */
  if (C.zf) goto L_10766092;
  /* 10766087 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1076608a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076608d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10766090 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10766092:;
  /* 10766092 push 9 */
  push32((uint32_t)(0x9u));
  /* 10766094 call 0x107683e0 */
  push32(0x10766099u); f_107683e0();
  /* 10766099 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076609c mov eax, 1 */
  EAX = (0x1u);
  /* 107660a1 jmp 0x107660af */
  goto L_107660af;
L_107660a3:;
  /* 107660a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 107660a5 call 0x107683e0 */
  push32(0x107660aau); f_107683e0();
  /* 107660aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107660ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107660af:;
  /* 107660af mov esp, ebp */
  ESP = (EBP);
  /* 107660b1 pop ebp */
  EBP = (pop32());
  /* 107660b2 ret  */
  ESPCHK(0x10765fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x107660c0 (28 bytes, 11 insns) */
void f_107660c0(void) {
  FTRACE(0x107660c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107660c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107660c1 mov ebp, esp */
  EBP = (ESP);
  /* 107660c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107660c4 mov eax, dword ptr [0x10791f18] */
  EAX = (r32((uint32_t)(0x10791f18)));
  /* 107660c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107660cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107660cf mov dword ptr [0x10791f18], ecx */
  w32((uint32_t)(0x10791f18), (ECX));
  /* 107660d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107660d8 mov esp, ebp */
  ESP = (EBP);
  /* 107660da pop ebp */
  EBP = (pop32());
  /* 107660db ret  */
  ESPCHK(0x107660c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060e0 @ 0x107660e0 (362 bytes, 116 insns) */
void f_107660e0(void) {
  FTRACE(0x107660e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107660e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107660e1 mov ebp, esp */
  EBP = (ESP);
  /* 107660e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107660e6 push ebx */
  push32((uint32_t)(EBX));
  /* 107660e7 push esi */
  push32((uint32_t)(ESI));
  /* 107660e8 push edi */
  push32((uint32_t)(EDI));
  /* 107660e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107660ed jne 0x1076611a */
  if (!C.zf) goto L_1076611a;
L_107660ef:;
  /* 107660ef push 0x1078bb08 */
  push32((uint32_t)(0x1078bb08u));
  /* 107660f4 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 107660f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107660fb push 0 */
  push32((uint32_t)(0x0u));
  /* 107660fd push 0 */
  push32((uint32_t)(0x0u));
  /* 107660ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10766101 call 0x10763a00 */
  push32(0x10766106u); f_10763a00();
  /* 10766106 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766109 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076610c jne 0x1076610f */
  if (!C.zf) goto L_1076610f;
  /* 1076610e int3  */
  x86_unimpl("int3 @ 0x1076610e");
L_1076610f:;
  /* 1076610f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766111 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766113 jne 0x107660ef */
  if (!C.zf) goto L_107660ef;
  /* 10766115 jmp 0x10766243 */
  goto L_10766243;
L_1076611a:;
  /* 1076611a push 9 */
  push32((uint32_t)(0x9u));
  /* 1076611c call 0x10768340 */
  push32(0x10766121u); f_10768340();
  /* 10766121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766124 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766127 mov edx, dword ptr [0x107905a8] */
  EDX = (r32((uint32_t)(0x107905a8)));
  /* 1076612d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1076612f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10766136 jmp 0x10766141 */
  goto L_10766141;
L_10766138:;
  /* 10766138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076613b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076613e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10766141:;
  /* 10766141 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766145 jge 0x10766165 */
  if ((C.sf==C.of)) goto L_10766165;
  /* 10766147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076614a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076614d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10766155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766158 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076615b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10766163 jmp 0x10766138 */
  goto L_10766138;
L_10766165:;
  /* 10766165 mov edx, dword ptr [0x107905a8] */
  EDX = (r32((uint32_t)(0x107905a8)));
  /* 1076616b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1076616e jmp 0x10766178 */
  goto L_10766178;
L_10766170:;
  /* 10766170 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766173 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10766175 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10766178:;
  /* 10766178 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076617c je 0x10766221 */
  if (C.zf) goto L_10766221;
  /* 10766182 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766185 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10766188 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076618d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076618f jl 0x107661f7 */
  if ((C.sf!=C.of)) goto L_107661f7;
  /* 10766191 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766194 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10766197 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1076619d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107661a0 jge 0x107661f7 */
  if ((C.sf==C.of)) goto L_107661f7;
  /* 107661a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107661a5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 107661a8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107661ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107661b1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 107661b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107661b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107661bb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107661be and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107661c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107661c7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 107661cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107661ce mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107661d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107661d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107661d9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 107661dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107661e0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107661e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107661e6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 107661e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107661ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107661f1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 107661f5 jmp 0x1076621c */
  goto L_1076621c;
L_107661f7:;
  /* 107661f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107661fa push edx */
  push32((uint32_t)(EDX));
  /* 107661fb push 0x1078bae4 */
  push32((uint32_t)(0x1078bae4u));
  /* 10766200 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766202 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766204 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766206 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766208 call 0x10763a00 */
  push32(0x1076620du); f_10763a00();
  /* 1076620d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766210 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766213 jne 0x10766216 */
  if (!C.zf) goto L_10766216;
  /* 10766215 int3  */
  x86_unimpl("int3 @ 0x10766215");
L_10766216:;
  /* 10766216 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076621a jne 0x107661f7 */
  if (!C.zf) goto L_107661f7;
L_1076621c:;
  /* 1076621c jmp 0x10766170 */
  goto L_10766170;
L_10766221:;
  /* 10766221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766224 mov edx, dword ptr [0x107905b0] */
  EDX = (r32((uint32_t)(0x107905b0)));
  /* 1076622a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1076622d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766230 mov ecx, dword ptr [0x107905a4] */
  ECX = (r32((uint32_t)(0x107905a4)));
  /* 10766236 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10766239 push 9 */
  push32((uint32_t)(0x9u));
  /* 1076623b call 0x107683e0 */
  push32(0x10766240u); f_107683e0();
  /* 10766240 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10766243:;
  /* 10766243 pop edi */
  EDI = (pop32());
  /* 10766244 pop esi */
  ESI = (pop32());
  /* 10766245 pop ebx */
  EBX = (pop32());
  /* 10766246 mov esp, ebp */
  ESP = (EBP);
  /* 10766248 pop ebp */
  EBP = (pop32());
  /* 10766249 ret  */
  ESPCHK(0x107660e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x10766250 (291 bytes, 95 insns) */
void f_10766250(void) {
  FTRACE(0x10766250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10766250 push ebp */
  push32((uint32_t)(EBP));
  /* 10766251 mov ebp, esp */
  EBP = (ESP);
  /* 10766253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766256 push ebx */
  push32((uint32_t)(EBX));
  /* 10766257 push esi */
  push32((uint32_t)(ESI));
  /* 10766258 push edi */
  push32((uint32_t)(EDI));
  /* 10766259 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10766260 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766264 je 0x10766272 */
  if (C.zf) goto L_10766272;
  /* 10766266 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076626a je 0x10766272 */
  if (C.zf) goto L_10766272;
  /* 1076626c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766270 jne 0x107662a0 */
  if (!C.zf) goto L_107662a0;
L_10766272:;
  /* 10766272 push 0x1078bb30 */
  push32((uint32_t)(0x1078bb30u));
  /* 10766277 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 1076627c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076627e push 0 */
  push32((uint32_t)(0x0u));
  /* 10766280 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766282 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766284 call 0x10763a00 */
  push32(0x10766289u); f_10763a00();
  /* 10766289 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076628c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076628f jne 0x10766292 */
  if (!C.zf) goto L_10766292;
  /* 10766291 int3  */
  x86_unimpl("int3 @ 0x10766291");
L_10766292:;
  /* 10766292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766296 jne 0x10766272 */
  if (!C.zf) goto L_10766272;
  /* 10766298 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076629b jmp 0x1076636c */
  goto L_1076636c;
L_107662a0:;
  /* 107662a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107662a7 jmp 0x107662b2 */
  goto L_107662b2;
L_107662a9:;
  /* 107662a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107662af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107662b2:;
  /* 107662b2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107662b6 jge 0x1076633c */
  if ((C.sf==C.of)) goto L_1076633c;
  /* 107662bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107662c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107662c8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 107662cc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107662d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107662d6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 107662da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107662e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662e3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107662e6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 107662ea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107662ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107662f4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 107662f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107662fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107662fe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766303 jne 0x10766312 */
  if (!C.zf) goto L_10766312;
  /* 10766305 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766308 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076630b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766310 je 0x10766337 */
  if (C.zf) goto L_10766337;
L_10766312:;
  /* 10766312 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766316 je 0x10766337 */
  if (C.zf) goto L_10766337;
  /* 10766318 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076631c jne 0x10766330 */
  if (!C.zf) goto L_10766330;
  /* 1076631e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766322 jne 0x10766337 */
  if (!C.zf) goto L_10766337;
  /* 10766324 mov eax, dword ptr [0x1078ea84] */
  EAX = (r32((uint32_t)(0x1078ea84)));
  /* 10766329 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1076632c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076632e je 0x10766337 */
  if (C.zf) goto L_10766337;
L_10766330:;
  /* 10766330 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10766337:;
  /* 10766337 jmp 0x107662a9 */
  goto L_107662a9;
L_1076633c:;
  /* 1076633c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076633f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766342 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10766345 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766348 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076634b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1076634e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766351 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766354 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10766357 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076635a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076635d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10766360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766363 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10766369 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1076636c:;
  /* 1076636c pop edi */
  EDI = (pop32());
  /* 1076636d pop esi */
  ESI = (pop32());
  /* 1076636e pop ebx */
  EBX = (pop32());
  /* 1076636f mov esp, ebp */
  ESP = (EBP);
  /* 10766371 pop ebp */
  EBP = (pop32());
  /* 10766372 ret  */
  ESPCHK(0x10766250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006380 @ 0x10766380 (697 bytes, 253 insns) */
void f_10766380(void) {
  FTRACE(0x10766380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10766380 push ebp */
  push32((uint32_t)(EBP));
  /* 10766381 mov ebp, esp */
  EBP = (ESP);
  /* 10766383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766386 push ebx */
  push32((uint32_t)(EBX));
  /* 10766387 push esi */
  push32((uint32_t)(ESI));
  /* 10766388 push edi */
  push32((uint32_t)(EDI));
  /* 10766389 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10766390 push 9 */
  push32((uint32_t)(0x9u));
  /* 10766392 call 0x10768340 */
  push32(0x10766397u); f_10768340();
  /* 10766397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076639a:;
  /* 1076639a push 0x1078bc28 */
  push32((uint32_t)(0x1078bc28u));
  /* 1076639f push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 107663a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107663a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107663a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107663aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107663ac call 0x10763a00 */
  push32(0x107663b1u); f_10763a00();
  /* 107663b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107663b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107663b7 jne 0x107663ba */
  if (!C.zf) goto L_107663ba;
  /* 107663b9 int3  */
  x86_unimpl("int3 @ 0x107663b9");
L_107663ba:;
  /* 107663ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107663bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107663be jne 0x1076639a */
  if (!C.zf) goto L_1076639a;
  /* 107663c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107663c4 je 0x107663ce */
  if (C.zf) goto L_107663ce;
  /* 107663c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107663c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107663cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107663ce:;
  /* 107663ce mov eax, dword ptr [0x107905a8] */
  EAX = (r32((uint32_t)(0x107905a8)));
  /* 107663d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107663d6 jmp 0x107663e0 */
  goto L_107663e0;
L_107663d8:;
  /* 107663d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107663db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107663dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107663e0:;
  /* 107663e0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107663e4 je 0x10766602 */
  if (C.zf) goto L_10766602;
  /* 107663ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107663ed cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107663f0 je 0x10766602 */
  if (C.zf) goto L_10766602;
  /* 107663f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107663f9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107663fc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10766402 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766405 je 0x10766434 */
  if (C.zf) goto L_10766434;
  /* 10766407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076640a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1076640d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10766413 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766415 je 0x10766434 */
  if (C.zf) goto L_10766434;
  /* 10766417 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076641a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1076641d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10766422 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766425 jne 0x10766439 */
  if (!C.zf) goto L_10766439;
  /* 10766427 mov ecx, dword ptr [0x1078ea84] */
  ECX = (r32((uint32_t)(0x1078ea84)));
  /* 1076642d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10766430 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766432 jne 0x10766439 */
  if (!C.zf) goto L_10766439;
L_10766434:;
  /* 10766434 jmp 0x107665fd */
  goto L_107665fd;
L_10766439:;
  /* 10766439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076643c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766440 je 0x107664b2 */
  if (C.zf) goto L_107664b2;
  /* 10766442 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766444 push 1 */
  push32((uint32_t)(0x1u));
  /* 10766446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766449 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076644c push ecx */
  push32((uint32_t)(ECX));
  /* 1076644d call 0x10765ef0 */
  push32(0x10766452u); f_10765ef0();
  /* 10766452 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766457 jne 0x10766483 */
  if (!C.zf) goto L_10766483;
L_10766459:;
  /* 10766459 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076645c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1076645f push eax */
  push32((uint32_t)(EAX));
  /* 10766460 push 0x1078bc14 */
  push32((uint32_t)(0x1078bc14u));
  /* 10766465 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766469 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076646b push 0 */
  push32((uint32_t)(0x0u));
  /* 1076646d call 0x10763a00 */
  push32(0x10766472u); f_10763a00();
  /* 10766472 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766475 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766478 jne 0x1076647b */
  if (!C.zf) goto L_1076647b;
  /* 1076647a int3  */
  x86_unimpl("int3 @ 0x1076647a");
L_1076647b:;
  /* 1076647b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076647d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076647f jne 0x10766459 */
  if (!C.zf) goto L_10766459;
  /* 10766481 jmp 0x107664b2 */
  goto L_107664b2;
L_10766483:;
  /* 10766483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766486 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10766489 push eax */
  push32((uint32_t)(EAX));
  /* 1076648a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076648d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10766490 push edx */
  push32((uint32_t)(EDX));
  /* 10766491 push 0x1078bc08 */
  push32((uint32_t)(0x1078bc08u));
  /* 10766496 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076649a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076649c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076649e call 0x10763a00 */
  push32(0x107664a3u); f_10763a00();
  /* 107664a3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107664a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107664a9 jne 0x107664ac */
  if (!C.zf) goto L_107664ac;
  /* 107664ab int3  */
  x86_unimpl("int3 @ 0x107664ab");
L_107664ac:;
  /* 107664ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107664ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107664b0 jne 0x10766483 */
  if (!C.zf) goto L_10766483;
L_107664b2:;
  /* 107664b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107664b5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107664b8 push edx */
  push32((uint32_t)(EDX));
  /* 107664b9 push 0x1078bc00 */
  push32((uint32_t)(0x1078bc00u));
  /* 107664be push 0 */
  push32((uint32_t)(0x0u));
  /* 107664c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107664c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107664c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107664c6 call 0x10763a00 */
  push32(0x107664cbu); f_10763a00();
  /* 107664cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107664ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107664d1 jne 0x107664d4 */
  if (!C.zf) goto L_107664d4;
  /* 107664d3 int3  */
  x86_unimpl("int3 @ 0x107664d3");
L_107664d4:;
  /* 107664d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107664d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107664d8 jne 0x107664b2 */
  if (!C.zf) goto L_107664b2;
  /* 107664da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107664dd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107664e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107664e6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107664e9 jne 0x1076655c */
  if (!C.zf) goto L_1076655c;
L_107664eb:;
  /* 107664eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107664ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107664f1 push ecx */
  push32((uint32_t)(ECX));
  /* 107664f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107664f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107664f8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107664fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10766500 push eax */
  push32((uint32_t)(EAX));
  /* 10766501 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766504 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766507 push ecx */
  push32((uint32_t)(ECX));
  /* 10766508 push 0x1078bbcc */
  push32((uint32_t)(0x1078bbccu));
  /* 1076650d push 0 */
  push32((uint32_t)(0x0u));
  /* 1076650f push 0 */
  push32((uint32_t)(0x0u));
  /* 10766511 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766513 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766515 call 0x10763a00 */
  push32(0x1076651au); f_10763a00();
  /* 1076651a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076651d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766520 jne 0x10766523 */
  if (!C.zf) goto L_10766523;
  /* 10766522 int3  */
  x86_unimpl("int3 @ 0x10766522");
L_10766523:;
  /* 10766523 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766525 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10766527 jne 0x107664eb */
  if (!C.zf) goto L_107664eb;
  /* 10766529 cmp dword ptr [0x10791f18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791f18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766530 je 0x1076654b */
  if (C.zf) goto L_1076654b;
  /* 10766532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766535 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10766538 push ecx */
  push32((uint32_t)(ECX));
  /* 10766539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076653c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076653f push edx */
  push32((uint32_t)(EDX));
  /* 10766540 call dword ptr [0x10791f18] */
  call_ind((uint32_t)(r32((uint32_t)(0x10791f18))), 0x10766546u);
  /* 10766546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766549 jmp 0x10766557 */
  goto L_10766557;
L_1076654b:;
  /* 1076654b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076654e push eax */
  push32((uint32_t)(EAX));
  /* 1076654f call 0x10766640 */
  push32(0x10766554u); f_10766640();
  /* 10766554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10766557:;
  /* 10766557 jmp 0x107665fd */
  goto L_107665fd;
L_1076655c:;
  /* 1076655c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076655f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766563 jne 0x107665a2 */
  if (!C.zf) goto L_107665a2;
L_10766565:;
  /* 10766565 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766568 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1076656b push eax */
  push32((uint32_t)(EAX));
  /* 1076656c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076656f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766572 push ecx */
  push32((uint32_t)(ECX));
  /* 10766573 push 0x1078bba4 */
  push32((uint32_t)(0x1078bba4u));
  /* 10766578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076657a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076657c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076657e push 0 */
  push32((uint32_t)(0x0u));
  /* 10766580 call 0x10763a00 */
  push32(0x10766585u); f_10763a00();
  /* 10766585 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766588 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076658b jne 0x1076658e */
  if (!C.zf) goto L_1076658e;
  /* 1076658d int3  */
  x86_unimpl("int3 @ 0x1076658d");
L_1076658e:;
  /* 1076658e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766590 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10766592 jne 0x10766565 */
  if (!C.zf) goto L_10766565;
  /* 10766594 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766597 push eax */
  push32((uint32_t)(EAX));
  /* 10766598 call 0x10766640 */
  push32(0x1076659du); f_10766640();
  /* 1076659d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107665a0 jmp 0x107665fd */
  goto L_107665fd;
L_107665a2:;
  /* 107665a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107665a5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 107665a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107665ae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107665b1 jne 0x107665fd */
  if (!C.zf) goto L_107665fd;
L_107665b3:;
  /* 107665b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107665b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107665b9 push ecx */
  push32((uint32_t)(ECX));
  /* 107665ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107665bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107665c0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107665c3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107665c8 push eax */
  push32((uint32_t)(EAX));
  /* 107665c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107665cc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107665cf push ecx */
  push32((uint32_t)(ECX));
  /* 107665d0 push 0x1078bb70 */
  push32((uint32_t)(0x1078bb70u));
  /* 107665d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107665d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107665d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107665db push 0 */
  push32((uint32_t)(0x0u));
  /* 107665dd call 0x10763a00 */
  push32(0x107665e2u); f_10763a00();
  /* 107665e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107665e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107665e8 jne 0x107665eb */
  if (!C.zf) goto L_107665eb;
  /* 107665ea int3  */
  x86_unimpl("int3 @ 0x107665ea");
L_107665eb:;
  /* 107665eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107665ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107665ef jne 0x107665b3 */
  if (!C.zf) goto L_107665b3;
  /* 107665f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107665f4 push eax */
  push32((uint32_t)(EAX));
  /* 107665f5 call 0x10766640 */
  push32(0x107665fau); f_10766640();
  /* 107665fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107665fd:;
  /* 107665fd jmp 0x107663d8 */
  goto L_107663d8;
L_10766602:;
  /* 10766602 push 9 */
  push32((uint32_t)(0x9u));
  /* 10766604 call 0x107683e0 */
  push32(0x10766609u); f_107683e0();
  /* 10766609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076660c:;
  /* 1076660c push 0x1078bb58 */
  push32((uint32_t)(0x1078bb58u));
  /* 10766611 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 10766616 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766618 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076661a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076661c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076661e call 0x10763a00 */
  push32(0x10766623u); f_10763a00();
  /* 10766623 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766626 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766629 jne 0x1076662c */
  if (!C.zf) goto L_1076662c;
  /* 1076662b int3  */
  x86_unimpl("int3 @ 0x1076662b");
L_1076662c:;
  /* 1076662c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076662e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766630 jne 0x1076660c */
  if (!C.zf) goto L_1076660c;
  /* 10766632 pop edi */
  EDI = (pop32());
  /* 10766633 pop esi */
  ESI = (pop32());
  /* 10766634 pop ebx */
  EBX = (pop32());
  /* 10766635 mov esp, ebp */
  ESP = (EBP);
  /* 10766637 pop ebp */
  EBP = (pop32());
  /* 10766638 ret  */
  ESPCHK(0x10766380u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x10766640 (276 bytes, 89 insns) */
void f_10766640(void) {
  FTRACE(0x10766640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10766640 push ebp */
  push32((uint32_t)(EBP));
  /* 10766641 mov ebp, esp */
  EBP = (ESP);
  /* 10766643 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766646 push ebx */
  push32((uint32_t)(EBX));
  /* 10766647 push esi */
  push32((uint32_t)(ESI));
  /* 10766648 push edi */
  push32((uint32_t)(EDI));
  /* 10766649 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10766650 jmp 0x1076665b */
  goto L_1076665b;
L_10766652:;
  /* 10766652 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10766655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766658 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1076665b:;
  /* 1076665b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076665e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766662 jge 0x1076666f */
  if ((C.sf==C.of)) goto L_1076666f;
  /* 10766664 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766667 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1076666a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1076666d jmp 0x10766676 */
  goto L_10766676;
L_1076666f:;
  /* 1076666f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10766676:;
  /* 10766676 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10766679 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076667c jge 0x1076671c */
  if ((C.sf==C.of)) goto L_1076671c;
  /* 10766682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766685 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766688 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1076668b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1076668e cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766695 jle 0x107666b3 */
  if ((C.zf||C.sf!=C.of)) goto L_107666b3;
  /* 10766697 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1076669c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1076669f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107666a5 push ecx */
  push32((uint32_t)(ECX));
  /* 107666a6 call 0x1076a950 */
  push32(0x107666abu); f_1076a950();
  /* 107666ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107666ae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 107666b1 jmp 0x107666d0 */
  goto L_107666d0;
L_107666b3:;
  /* 107666b3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107666b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107666bc mov eax, dword ptr [0x1078ec98] */
  EAX = (r32((uint32_t)(0x1078ec98)));
  /* 107666c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107666c3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107666c7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 107666cd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_107666d0:;
  /* 107666d0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107666d4 je 0x107666e4 */
  if (C.zf) goto L_107666e4;
  /* 107666d6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107666d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107666df mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 107666e2 jmp 0x107666eb */
  goto L_107666eb;
L_107666e4:;
  /* 107666e4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_107666eb:;
  /* 107666eb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 107666ee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 107666f1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 107666f5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 107666f8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107666fe push edx */
  push32((uint32_t)(EDX));
  /* 107666ff push 0x1078bc4c */
  push32((uint32_t)(0x1078bc4cu));
  /* 10766704 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10766707 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076670a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1076670e push ecx */
  push32((uint32_t)(ECX));
  /* 1076670f call 0x1076a850 */
  push32(0x10766714u); f_1076a850();
  /* 10766714 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766717 jmp 0x10766652 */
  goto L_10766652;
L_1076671c:;
  /* 1076671c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1076671f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10766724:;
  /* 10766724 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10766727 push eax */
  push32((uint32_t)(EAX));
  /* 10766728 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1076672b push ecx */
  push32((uint32_t)(ECX));
  /* 1076672c push 0x1078bc3c */
  push32((uint32_t)(0x1078bc3cu));
  /* 10766731 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766735 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766737 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766739 call 0x10763a00 */
  push32(0x1076673eu); f_10763a00();
  /* 1076673e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766741 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766744 jne 0x10766747 */
  if (!C.zf) goto L_10766747;
  /* 10766746 int3  */
  x86_unimpl("int3 @ 0x10766746");
L_10766747:;
  /* 10766747 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766749 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076674b jne 0x10766724 */
  if (!C.zf) goto L_10766724;
  /* 1076674d pop edi */
  EDI = (pop32());
  /* 1076674e pop esi */
  ESI = (pop32());
  /* 1076674f pop ebx */
  EBX = (pop32());
  /* 10766750 mov esp, ebp */
  ESP = (EBP);
  /* 10766752 pop ebp */
  EBP = (pop32());
  /* 10766753 ret  */
  ESPCHK(0x10766640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x10766760 (116 bytes, 46 insns) */
void f_10766760(void) {
  FTRACE(0x10766760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10766760 push ebp */
  push32((uint32_t)(EBP));
  /* 10766761 mov ebp, esp */
  EBP = (ESP);
  /* 10766763 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766766 push ebx */
  push32((uint32_t)(EBX));
  /* 10766767 push esi */
  push32((uint32_t)(ESI));
  /* 10766768 push edi */
  push32((uint32_t)(EDI));
  /* 10766769 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1076676c push eax */
  push32((uint32_t)(EAX));
  /* 1076676d call 0x107660e0 */
  push32(0x10766772u); f_107660e0();
  /* 10766772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766775 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766779 jne 0x10766794 */
  if (!C.zf) goto L_10766794;
  /* 1076677b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076677f jne 0x10766794 */
  if (!C.zf) goto L_10766794;
  /* 10766781 mov ecx, dword ptr [0x1078ea84] */
  ECX = (r32((uint32_t)(0x1078ea84)));
  /* 10766787 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1076678a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076678c je 0x107667cb */
  if (C.zf) goto L_107667cb;
  /* 1076678e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766792 je 0x107667cb */
  if (C.zf) goto L_107667cb;
L_10766794:;
  /* 10766794 push 0x1078bc54 */
  push32((uint32_t)(0x1078bc54u));
  /* 10766799 push 0x1078b620 */
  push32((uint32_t)(0x1078b620u));
  /* 1076679e push 0 */
  push32((uint32_t)(0x0u));
  /* 107667a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107667a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107667a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107667a6 call 0x10763a00 */
  push32(0x107667abu); f_10763a00();
  /* 107667ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107667ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107667b1 jne 0x107667b4 */
  if (!C.zf) goto L_107667b4;
  /* 107667b3 int3  */
  x86_unimpl("int3 @ 0x107667b3");
L_107667b4:;
  /* 107667b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107667b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107667b8 jne 0x10766794 */
  if (!C.zf) goto L_10766794;
  /* 107667ba push 0 */
  push32((uint32_t)(0x0u));
  /* 107667bc call 0x10766380 */
  push32(0x107667c1u); f_10766380();
  /* 107667c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107667c4 mov eax, 1 */
  EAX = (0x1u);
  /* 107667c9 jmp 0x107667cd */
  goto L_107667cd;
L_107667cb:;
  /* 107667cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107667cd:;
  /* 107667cd pop edi */
  EDI = (pop32());
  /* 107667ce pop esi */
  ESI = (pop32());
  /* 107667cf pop ebx */
  EBX = (pop32());
  /* 107667d0 mov esp, ebp */
  ESP = (EBP);
  /* 107667d2 pop ebp */
  EBP = (pop32());
  /* 107667d3 ret  */
  ESPCHK(0x10766760u, _esp0);
  ESP += 4; return;
}

/* FUN_100067e0 @ 0x107667e0 (197 bytes, 79 insns) */
void f_107667e0(void) {
  FTRACE(0x107667e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107667e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107667e1 mov ebp, esp */
  EBP = (ESP);
  /* 107667e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107667e4 push ebx */
  push32((uint32_t)(EBX));
  /* 107667e5 push esi */
  push32((uint32_t)(ESI));
  /* 107667e6 push edi */
  push32((uint32_t)(EDI));
  /* 107667e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107667eb jne 0x107667f2 */
  if (!C.zf) goto L_107667f2;
  /* 107667ed jmp 0x1076689e */
  goto L_1076689e;
L_107667f2:;
  /* 107667f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107667f9 jmp 0x10766804 */
  goto L_10766804;
L_107667fb:;
  /* 107667fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107667fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766801 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10766804:;
  /* 10766804 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766808 jge 0x1076684e */
  if ((C.sf==C.of)) goto L_1076684e;
L_1076680a:;
  /* 1076680a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076680d mov edx, dword ptr [ecx*4 + 0x1078ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078ea94)));
  /* 10766814 push edx */
  push32((uint32_t)(EDX));
  /* 10766815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766818 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076681b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1076681f push edx */
  push32((uint32_t)(EDX));
  /* 10766820 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766823 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766826 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1076682a push edx */
  push32((uint32_t)(EDX));
  /* 1076682b push 0x1078bcb0 */
  push32((uint32_t)(0x1078bcb0u));
  /* 10766830 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766832 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766834 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766836 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766838 call 0x10763a00 */
  push32(0x1076683du); f_10763a00();
  /* 1076683d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766840 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766843 jne 0x10766846 */
  if (!C.zf) goto L_10766846;
  /* 10766845 int3  */
  x86_unimpl("int3 @ 0x10766845");
L_10766846:;
  /* 10766846 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076684a jne 0x1076680a */
  if (!C.zf) goto L_1076680a;
  /* 1076684c jmp 0x107667fb */
  goto L_107667fb;
L_1076684e:;
  /* 1076684e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766851 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10766854 push edx */
  push32((uint32_t)(EDX));
  /* 10766855 push 0x1078bc8c */
  push32((uint32_t)(0x1078bc8cu));
  /* 1076685a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076685c push 0 */
  push32((uint32_t)(0x0u));
  /* 1076685e push 0 */
  push32((uint32_t)(0x0u));
  /* 10766860 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766862 call 0x10763a00 */
  push32(0x10766867u); f_10763a00();
  /* 10766867 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076686a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076686d jne 0x10766870 */
  if (!C.zf) goto L_10766870;
  /* 1076686f int3  */
  x86_unimpl("int3 @ 0x1076686f");
L_10766870:;
  /* 10766870 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766874 jne 0x1076684e */
  if (!C.zf) goto L_1076684e;
L_10766876:;
  /* 10766876 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766879 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1076687c push edx */
  push32((uint32_t)(EDX));
  /* 1076687d push 0x1078bc6c */
  push32((uint32_t)(0x1078bc6cu));
  /* 10766882 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766884 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766886 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766888 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076688a call 0x10763a00 */
  push32(0x1076688fu); f_10763a00();
  /* 1076688f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766892 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766895 jne 0x10766898 */
  if (!C.zf) goto L_10766898;
  /* 10766897 int3  */
  x86_unimpl("int3 @ 0x10766897");
L_10766898:;
  /* 10766898 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076689a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076689c jne 0x10766876 */
  if (!C.zf) goto L_10766876;
L_1076689e:;
  /* 1076689e pop edi */
  EDI = (pop32());
  /* 1076689f pop esi */
  ESI = (pop32());
  /* 107668a0 pop ebx */
  EBX = (pop32());
  /* 107668a1 mov esp, ebp */
  ESP = (EBP);
  /* 107668a3 pop ebp */
  EBP = (pop32());
  /* 107668a4 ret  */
  ESPCHK(0x107667e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x107668b0 (329 bytes, 102 insns) */
void f_107668b0(void) {
  FTRACE(0x107668b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107668b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107668b1 mov ebp, esp */
  EBP = (ESP);
  /* 107668b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107668b6 cmp dword ptr [0x10792090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10792090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107668bd jne 0x107668c4 */
  if (!C.zf) goto L_107668c4;
  /* 107668bf call 0x1076b1f0 */
  push32(0x107668c4u); f_1076b1f0();
L_107668c4:;
  /* 107668c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107668cb mov eax, dword ptr [0x10790544] */
  EAX = (r32((uint32_t)(0x10790544)));
  /* 107668d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107668d3:;
  /* 107668d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107668d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107668d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107668db je 0x10766909 */
  if (C.zf) goto L_10766909;
  /* 107668dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107668e0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107668e3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107668e6 je 0x107668f1 */
  if (C.zf) goto L_107668f1;
  /* 107668e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107668eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107668ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107668f1:;
  /* 107668f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107668f4 push eax */
  push32((uint32_t)(EAX));
  /* 107668f5 call 0x10767770 */
  push32(0x107668fau); f_10767770();
  /* 107668fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107668fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766900 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10766904 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10766907 jmp 0x107668d3 */
  goto L_107668d3;
L_10766909:;
  /* 10766909 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1076690b push 0x1078bcd0 */
  push32((uint32_t)(0x1078bcd0u));
  /* 10766910 push 2 */
  push32((uint32_t)(0x2u));
  /* 10766912 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766915 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1076691c push ecx */
  push32((uint32_t)(ECX));
  /* 1076691d call 0x10764940 */
  push32(0x10766922u); f_10764940();
  /* 10766922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766925 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10766928 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076692b mov dword ptr [0x10790578], edx */
  w32((uint32_t)(0x10790578), (EDX));
  /* 10766931 cmp dword ptr [0x10790578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766938 jne 0x10766944 */
  if (!C.zf) goto L_10766944;
  /* 1076693a push 9 */
  push32((uint32_t)(0x9u));
  /* 1076693c call 0x107638b0 */
  push32(0x10766941u); f_107638b0();
  /* 10766941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10766944:;
  /* 10766944 mov eax, dword ptr [0x10790544] */
  EAX = (r32((uint32_t)(0x10790544)));
  /* 10766949 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076694c jmp 0x10766957 */
  goto L_10766957;
L_1076694e:;
  /* 1076694e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766951 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766954 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10766957:;
  /* 10766957 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076695a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1076695d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076695f je 0x107669c7 */
  if (C.zf) goto L_107669c7;
  /* 10766961 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766964 push ecx */
  push32((uint32_t)(ECX));
  /* 10766965 call 0x10767770 */
  push32(0x1076696au); f_10767770();
  /* 1076696a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076696d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766970 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10766973 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766976 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10766979 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076697c je 0x107669c5 */
  if (C.zf) goto L_107669c5;
  /* 1076697e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10766980 push 0x1078bcd0 */
  push32((uint32_t)(0x1078bcd0u));
  /* 10766985 push 2 */
  push32((uint32_t)(0x2u));
  /* 10766987 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076698a push ecx */
  push32((uint32_t)(ECX));
  /* 1076698b call 0x10764940 */
  push32(0x10766990u); f_10764940();
  /* 10766990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766993 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766996 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10766998 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076699b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076699e jne 0x107669aa */
  if (!C.zf) goto L_107669aa;
  /* 107669a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 107669a2 call 0x107638b0 */
  push32(0x107669a7u); f_107638b0();
  /* 107669a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107669aa:;
  /* 107669aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107669ad push ecx */
  push32((uint32_t)(ECX));
  /* 107669ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107669b1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107669b3 push eax */
  push32((uint32_t)(EAX));
  /* 107669b4 call 0x107678f0 */
  push32(0x107669b9u); f_107678f0();
  /* 107669b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107669bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107669bf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107669c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107669c5:;
  /* 107669c5 jmp 0x1076694e */
  goto L_1076694e;
L_107669c7:;
  /* 107669c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107669c9 mov edx, dword ptr [0x10790544] */
  EDX = (r32((uint32_t)(0x10790544)));
  /* 107669cf push edx */
  push32((uint32_t)(EDX));
  /* 107669d0 call 0x107653d0 */
  push32(0x107669d5u); f_107653d0();
  /* 107669d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107669d8 mov dword ptr [0x10790544], 0 */
  w32((uint32_t)(0x10790544), (0x0u));
  /* 107669e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107669e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107669eb mov dword ptr [0x10792080], 1 */
  w32((uint32_t)(0x10792080), (0x1u));
  /* 107669f5 mov esp, ebp */
  ESP = (EBP);
  /* 107669f7 pop ebp */
  EBP = (pop32());
  /* 107669f8 ret  */
  ESPCHK(0x107668b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x10766a00 (216 bytes, 69 insns) */
void f_10766a00(void) {
  FTRACE(0x10766a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10766a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10766a01 mov ebp, esp */
  EBP = (ESP);
  /* 10766a03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766a06 cmp dword ptr [0x10792090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10792090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766a0d jne 0x10766a14 */
  if (!C.zf) goto L_10766a14;
  /* 10766a0f call 0x1076b1f0 */
  push32(0x10766a14u); f_1076b1f0();
L_10766a14:;
  /* 10766a14 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10766a19 push 0x107905b4 */
  push32((uint32_t)(0x107905b4u));
  /* 10766a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10766a20 call dword ptr [0x10793348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793348))), 0x10766a26u);
  /* 10766a26 mov dword ptr [0x10790588], 0x107905b4 */
  w32((uint32_t)(0x10790588), (0x107905b4u));
  /* 10766a30 mov eax, dword ptr [0x107920ac] */
  EAX = (r32((uint32_t)(0x107920ac)));
  /* 10766a35 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766a38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766a3a jne 0x10766a47 */
  if (!C.zf) goto L_10766a47;
  /* 10766a3c mov edx, dword ptr [0x10790588] */
  EDX = (r32((uint32_t)(0x10790588)));
  /* 10766a42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10766a45 jmp 0x10766a4f */
  goto L_10766a4f;
L_10766a47:;
  /* 10766a47 mov eax, dword ptr [0x107920ac] */
  EAX = (r32((uint32_t)(0x107920ac)));
  /* 10766a4c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10766a4f:;
  /* 10766a4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10766a52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10766a55 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10766a58 push edx */
  push32((uint32_t)(EDX));
  /* 10766a59 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10766a5c push eax */
  push32((uint32_t)(EAX));
  /* 10766a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10766a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10766a61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10766a64 push ecx */
  push32((uint32_t)(ECX));
  /* 10766a65 call 0x10766ae0 */
  push32(0x10766a6au); f_10766ae0();
  /* 10766a6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766a6d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10766a72 push 0x1078bcdc */
  push32((uint32_t)(0x1078bcdcu));
  /* 10766a77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10766a79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766a7f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10766a82 push ecx */
  push32((uint32_t)(ECX));
  /* 10766a83 call 0x10764940 */
  push32(0x10766a88u); f_10764940();
  /* 10766a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766a8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10766a8e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766a92 jne 0x10766a9e */
  if (!C.zf) goto L_10766a9e;
  /* 10766a94 push 8 */
  push32((uint32_t)(0x8u));
  /* 10766a96 call 0x107638b0 */
  push32(0x10766a9bu); f_107638b0();
  /* 10766a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10766a9e:;
  /* 10766a9e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10766aa1 push edx */
  push32((uint32_t)(EDX));
  /* 10766aa2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10766aa5 push eax */
  push32((uint32_t)(EAX));
  /* 10766aa6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766aa9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766aac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10766aaf push eax */
  push32((uint32_t)(EAX));
  /* 10766ab0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10766ab4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10766ab7 push edx */
  push32((uint32_t)(EDX));
  /* 10766ab8 call 0x10766ae0 */
  push32(0x10766abdu); f_10766ae0();
  /* 10766abd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10766ac0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766ac3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766ac6 mov dword ptr [0x1079056c], eax */
  w32((uint32_t)(0x1079056c), (EAX));
  /* 10766acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766ace mov dword ptr [0x10790570], ecx */
  w32((uint32_t)(0x10790570), (ECX));
  /* 10766ad4 mov esp, ebp */
  ESP = (EBP);
  /* 10766ad6 pop ebp */
  EBP = (pop32());
  /* 10766ad7 ret  */
  ESPCHK(0x10766a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ae0 @ 0x10766ae0 (1060 bytes, 360 insns) */
void f_10766ae0(void) {
  FTRACE(0x10766ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10766ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10766ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10766ae3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766ae6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766ae9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10766aef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10766af2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10766af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10766afb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10766afe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766b02 je 0x10766b15 */
  if (C.zf) goto L_10766b15;
  /* 10766b04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766b07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766b0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10766b0c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766b0f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766b12 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10766b15:;
  /* 10766b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766b18 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766b1b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766b1e jne 0x10766bed */
  if (!C.zf) goto L_10766bed;
L_10766b24:;
  /* 10766b24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766b27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766b2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10766b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766b30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766b33 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766b36 je 0x10766bb2 */
  if (C.zf) goto L_10766bb2;
  /* 10766b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766b3b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10766b3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766b40 je 0x10766bb2 */
  if (C.zf) goto L_10766bb2;
  /* 10766b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766b45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766b47 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10766b49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766b4b mov al, byte ptr [edx + 0x10791de1] */
  AL = (r8((uint32_t)(EDX + 0x10791de1)));
  /* 10766b51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10766b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766b56 je 0x10766b87 */
  if (C.zf) goto L_10766b87;
  /* 10766b58 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766b5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10766b5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766b60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766b63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10766b65 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766b69 je 0x10766b87 */
  if (C.zf) goto L_10766b87;
  /* 10766b6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766b6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766b71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10766b73 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10766b75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766b78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766b7b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10766b7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766b81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766b84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10766b87:;
  /* 10766b87 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766b8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10766b8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766b8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766b92 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10766b94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766b98 je 0x10766bad */
  if (C.zf) goto L_10766bad;
  /* 10766b9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766ba0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10766ba2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10766ba4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766ba7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766baa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10766bad:;
  /* 10766bad jmp 0x10766b24 */
  goto L_10766b24;
L_10766bb2:;
  /* 10766bb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766bb5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10766bb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766bba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766bbd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10766bbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766bc3 je 0x10766bd4 */
  if (C.zf) goto L_10766bd4;
  /* 10766bc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766bc8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10766bcb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766bce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766bd1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10766bd4:;
  /* 10766bd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766bd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766bda cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766bdd jne 0x10766be8 */
  if (!C.zf) goto L_10766be8;
  /* 10766bdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766be2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766be5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10766be8:;
  /* 10766be8 jmp 0x10766cbc */
  goto L_10766cbc;
L_10766bed:;
  /* 10766bed mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766bf0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10766bf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766bf5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766bf8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10766bfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766bfe je 0x10766c13 */
  if (C.zf) goto L_10766c13;
  /* 10766c00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766c03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766c06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10766c08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10766c0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766c0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766c10 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10766c13:;
  /* 10766c13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766c16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10766c18 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10766c1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766c1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766c21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10766c24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766c27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10766c2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766c2f mov dl, byte ptr [ecx + 0x10791de1] */
  DL = (r8((uint32_t)(ECX + 0x10791de1)));
  /* 10766c35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10766c38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10766c3a je 0x10766c6b */
  if (C.zf) goto L_10766c6b;
  /* 10766c3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766c3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10766c41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766c44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766c47 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10766c49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766c4d je 0x10766c62 */
  if (C.zf) goto L_10766c62;
  /* 10766c4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766c52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766c55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10766c57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10766c59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766c5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766c5f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10766c62:;
  /* 10766c62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766c65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766c68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10766c6b:;
  /* 10766c6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766c6e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10766c74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766c77 je 0x10766c97 */
  if (C.zf) goto L_10766c97;
  /* 10766c79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766c7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10766c81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766c83 je 0x10766c97 */
  if (C.zf) goto L_10766c97;
  /* 10766c85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766c88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10766c8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766c91 jne 0x10766bed */
  if (!C.zf) goto L_10766bed;
L_10766c97:;
  /* 10766c97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10766c9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10766ca0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10766ca2 jne 0x10766caf */
  if (!C.zf) goto L_10766caf;
  /* 10766ca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766ca7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766caa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10766cad jmp 0x10766cbc */
  goto L_10766cbc;
L_10766caf:;
  /* 10766caf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766cb3 je 0x10766cbc */
  if (C.zf) goto L_10766cbc;
  /* 10766cb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766cb8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10766cbc:;
  /* 10766cbc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10766cc3:;
  /* 10766cc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766cc6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10766cc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766ccb je 0x10766cee */
  if (C.zf) goto L_10766cee;
L_10766ccd:;
  /* 10766ccd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766cd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10766cd3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766cd6 je 0x10766ce3 */
  if (C.zf) goto L_10766ce3;
  /* 10766cd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766cdb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766cde cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766ce1 jne 0x10766cee */
  if (!C.zf) goto L_10766cee;
L_10766ce3:;
  /* 10766ce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766ce6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766ce9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10766cec jmp 0x10766ccd */
  goto L_10766ccd;
L_10766cee:;
  /* 10766cee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766cf1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766cf4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766cf6 jne 0x10766cfd */
  if (!C.zf) goto L_10766cfd;
  /* 10766cf8 jmp 0x10766edb */
  goto L_10766edb;
L_10766cfd:;
  /* 10766cfd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766d01 je 0x10766d14 */
  if (C.zf) goto L_10766d14;
  /* 10766d03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766d06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766d09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10766d0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766d0e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766d11 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10766d14:;
  /* 10766d14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10766d17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10766d19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766d1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10766d1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10766d21:;
  /* 10766d21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10766d28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10766d2f:;
  /* 10766d2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766d32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10766d35 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766d38 jne 0x10766d4e */
  if (!C.zf) goto L_10766d4e;
  /* 10766d3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766d3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766d40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10766d43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10766d46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766d49 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10766d4c jmp 0x10766d2f */
  goto L_10766d2f;
L_10766d4e:;
  /* 10766d4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766d51 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766d54 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766d57 jne 0x10766daa */
  if (!C.zf) goto L_10766daa;
  /* 10766d59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10766d5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766d5e mov ecx, 2 */
  ECX = (0x2u);
  /* 10766d63 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10766d65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10766d67 jne 0x10766da2 */
  if (!C.zf) goto L_10766da2;
  /* 10766d69 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766d6d je 0x10766d8f */
  if (C.zf) goto L_10766d8f;
  /* 10766d6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766d72 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10766d76 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766d79 jne 0x10766d86 */
  if (!C.zf) goto L_10766d86;
  /* 10766d7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766d7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766d81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10766d84 jmp 0x10766d8d */
  goto L_10766d8d;
L_10766d86:;
  /* 10766d86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10766d8d:;
  /* 10766d8d jmp 0x10766d96 */
  goto L_10766d96;
L_10766d8f:;
  /* 10766d8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10766d96:;
  /* 10766d96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766d98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766d9c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10766d9f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10766da2:;
  /* 10766da2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10766da5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10766da7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10766daa:;
  /* 10766daa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10766dad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10766db0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766db3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10766db6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766db8 je 0x10766dde */
  if (C.zf) goto L_10766dde;
  /* 10766dba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766dbe je 0x10766dcf */
  if (C.zf) goto L_10766dcf;
  /* 10766dc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766dc3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10766dc6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766dc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766dcc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10766dcf:;
  /* 10766dcf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766dd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10766dd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766dd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766dda mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10766ddc jmp 0x10766daa */
  goto L_10766daa;
L_10766dde:;
  /* 10766dde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766de1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10766de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10766de6 je 0x10766e04 */
  if (C.zf) goto L_10766e04;
  /* 10766de8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766dec jne 0x10766e09 */
  if (!C.zf) goto L_10766e09;
  /* 10766dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766df1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10766df4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766df7 je 0x10766e04 */
  if (C.zf) goto L_10766e04;
  /* 10766df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766dfc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10766dff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766e02 jne 0x10766e09 */
  if (!C.zf) goto L_10766e09;
L_10766e04:;
  /* 10766e04 jmp 0x10766eb4 */
  goto L_10766eb4;
L_10766e09:;
  /* 10766e09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766e0d je 0x10766ea6 */
  if (C.zf) goto L_10766ea6;
  /* 10766e13 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766e17 je 0x10766e6d */
  if (C.zf) goto L_10766e6d;
  /* 10766e19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766e1e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10766e20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10766e22 mov cl, byte ptr [eax + 0x10791de1] */
  CL = (r8((uint32_t)(EAX + 0x10791de1)));
  /* 10766e28 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10766e2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766e2d je 0x10766e58 */
  if (C.zf) goto L_10766e58;
  /* 10766e2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766e35 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10766e37 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10766e39 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766e3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766e3f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10766e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766e45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766e48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10766e4b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766e4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10766e50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766e53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766e56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10766e58:;
  /* 10766e58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766e5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766e5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10766e60 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10766e62 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766e68 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10766e6b jmp 0x10766e99 */
  goto L_10766e99;
L_10766e6d:;
  /* 10766e6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766e72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10766e74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10766e76 mov cl, byte ptr [eax + 0x10791de1] */
  CL = (r8((uint32_t)(EAX + 0x10791de1)));
  /* 10766e7c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10766e7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10766e81 je 0x10766e99 */
  if (C.zf) goto L_10766e99;
  /* 10766e83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766e86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766e89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10766e8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766e8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10766e91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766e94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766e97 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10766e99:;
  /* 10766e99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766e9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10766e9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766ea1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766ea4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10766ea6:;
  /* 10766ea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766ea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766eac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10766eaf jmp 0x10766d21 */
  goto L_10766d21;
L_10766eb4:;
  /* 10766eb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766eb8 je 0x10766ec9 */
  if (C.zf) goto L_10766ec9;
  /* 10766eba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766ebd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10766ec0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10766ec3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766ec6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10766ec9:;
  /* 10766ec9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766ecc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10766ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766ed1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10766ed4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10766ed6 jmp 0x10766cc3 */
  goto L_10766cc3;
L_10766edb:;
  /* 10766edb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766edf je 0x10766ef3 */
  if (C.zf) goto L_10766ef3;
  /* 10766ee1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766ee4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10766eea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10766eed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766ef0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10766ef3:;
  /* 10766ef3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10766ef6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10766ef8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766efb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10766efe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10766f00 mov esp, ebp */
  ESP = (EBP);
  /* 10766f02 pop ebp */
  EBP = (pop32());
  /* 10766f03 ret  */
  ESPCHK(0x10766ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x10766f10 (537 bytes, 173 insns) */
void f_10766f10(void) {
  FTRACE(0x10766f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10766f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10766f11 mov ebp, esp */
  EBP = (ESP);
  /* 10766f13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766f16 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10766f1d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10766f24 cmp dword ptr [0x107906b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107906b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766f2b jne 0x10766f6a */
  if (!C.zf) goto L_10766f6a;
  /* 10766f2d call dword ptr [0x107933a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933a4))), 0x10766f33u);
  /* 10766f33 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10766f36 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766f3a je 0x10766f48 */
  if (C.zf) goto L_10766f48;
  /* 10766f3c mov dword ptr [0x107906b8], 1 */
  w32((uint32_t)(0x107906b8), (0x1u));
  /* 10766f46 jmp 0x10766f6a */
  goto L_10766f6a;
L_10766f48:;
  /* 10766f48 call dword ptr [0x107933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933a0))), 0x10766f4eu);
  /* 10766f4e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10766f51 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766f55 je 0x10766f63 */
  if (C.zf) goto L_10766f63;
  /* 10766f57 mov dword ptr [0x107906b8], 2 */
  w32((uint32_t)(0x107906b8), (0x2u));
  /* 10766f61 jmp 0x10766f6a */
  goto L_10766f6a;
L_10766f63:;
  /* 10766f63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766f65 jmp 0x10767125 */
  goto L_10767125;
L_10766f6a:;
  /* 10766f6a cmp dword ptr [0x107906b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x107906b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766f71 jne 0x1076706e */
  if (!C.zf) goto L_1076706e;
  /* 10766f77 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766f7b jne 0x10766f93 */
  if (!C.zf) goto L_10766f93;
  /* 10766f7d call dword ptr [0x107933a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933a4))), 0x10766f83u);
  /* 10766f83 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10766f86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766f8a jne 0x10766f93 */
  if (!C.zf) goto L_10766f93;
  /* 10766f8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10766f8e jmp 0x10767125 */
  goto L_10767125;
L_10766f93:;
  /* 10766f93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10766f96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10766f99:;
  /* 10766f99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766f9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766f9e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10766fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10766fa3 je 0x10766fc5 */
  if (C.zf) goto L_10766fc5;
  /* 10766fa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766fa8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766fab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10766fae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766fb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10766fb3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10766fb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10766fb8 jne 0x10766fc3 */
  if (!C.zf) goto L_10766fc3;
  /* 10766fba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766fbd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766fc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10766fc3:;
  /* 10766fc3 jmp 0x10766f99 */
  goto L_10766f99;
L_10766fc5:;
  /* 10766fc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10766fc8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10766fcb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10766fcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10766fd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10766fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766fdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10766fde push edx */
  push32((uint32_t)(EDX));
  /* 10766fdf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10766fe2 push eax */
  push32((uint32_t)(EAX));
  /* 10766fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10766fe7 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x10766fedu);
  /* 10766fed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10766ff0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10766ff4 je 0x10767014 */
  if (C.zf) goto L_10767014;
  /* 10766ff6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10766ff8 push 0x1078bce8 */
  push32((uint32_t)(0x1078bce8u));
  /* 10766ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 10766fff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10767002 push ecx */
  push32((uint32_t)(ECX));
  /* 10767003 call 0x10764940 */
  push32(0x10767008u); f_10764940();
  /* 10767008 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076700b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1076700e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767012 jne 0x10767025 */
  if (!C.zf) goto L_10767025;
L_10767014:;
  /* 10767014 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10767017 push edx */
  push32((uint32_t)(EDX));
  /* 10767018 call dword ptr [0x10793398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793398))), 0x1076701eu);
  /* 1076701e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10767020 jmp 0x10767125 */
  goto L_10767125;
L_10767025:;
  /* 10767025 push 0 */
  push32((uint32_t)(0x0u));
  /* 10767027 push 0 */
  push32((uint32_t)(0x0u));
  /* 10767029 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076702c push eax */
  push32((uint32_t)(EAX));
  /* 1076702d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767030 push ecx */
  push32((uint32_t)(ECX));
  /* 10767031 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767034 push edx */
  push32((uint32_t)(EDX));
  /* 10767035 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10767038 push eax */
  push32((uint32_t)(EAX));
  /* 10767039 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076703b push 0 */
  push32((uint32_t)(0x0u));
  /* 1076703d call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x10767043u);
  /* 10767043 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10767045 jne 0x1076705c */
  if (!C.zf) goto L_1076705c;
  /* 10767047 push 2 */
  push32((uint32_t)(0x2u));
  /* 10767049 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076704c push ecx */
  push32((uint32_t)(ECX));
  /* 1076704d call 0x107653d0 */
  push32(0x10767052u); f_107653d0();
  /* 10767052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767055 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1076705c:;
  /* 1076705c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076705f push edx */
  push32((uint32_t)(EDX));
  /* 10767060 call dword ptr [0x10793398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793398))), 0x10767066u);
  /* 10767066 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767069 jmp 0x10767125 */
  goto L_10767125;
L_1076706e:;
  /* 1076706e cmp dword ptr [0x107906b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x107906b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767075 jne 0x10767123 */
  if (!C.zf) goto L_10767123;
  /* 1076707b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076707f jne 0x10767097 */
  if (!C.zf) goto L_10767097;
  /* 10767081 call dword ptr [0x107933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933a0))), 0x10767087u);
  /* 10767087 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1076708a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076708e jne 0x10767097 */
  if (!C.zf) goto L_10767097;
  /* 10767090 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10767092 jmp 0x10767125 */
  goto L_10767125;
L_10767097:;
  /* 10767097 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076709a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076709d:;
  /* 1076709d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107670a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107670a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107670a5 je 0x107670c5 */
  if (C.zf) goto L_107670c5;
  /* 107670a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107670aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107670ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107670b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107670b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107670b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107670b8 jne 0x107670c3 */
  if (!C.zf) goto L_107670c3;
  /* 107670ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107670bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107670c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107670c3:;
  /* 107670c3 jmp 0x1076709d */
  goto L_1076709d;
L_107670c5:;
  /* 107670c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107670c8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107670cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107670ce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107670d1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 107670d6 push 0x1078bce8 */
  push32((uint32_t)(0x1078bce8u));
  /* 107670db push 2 */
  push32((uint32_t)(0x2u));
  /* 107670dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107670e0 push edx */
  push32((uint32_t)(EDX));
  /* 107670e1 call 0x10764940 */
  push32(0x107670e6u); f_10764940();
  /* 107670e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107670e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107670ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107670f0 jne 0x10767100 */
  if (!C.zf) goto L_10767100;
  /* 107670f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107670f5 push eax */
  push32((uint32_t)(EAX));
  /* 107670f6 call dword ptr [0x10793394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793394))), 0x107670fcu);
  /* 107670fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107670fe jmp 0x10767125 */
  goto L_10767125;
L_10767100:;
  /* 10767100 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10767103 push ecx */
  push32((uint32_t)(ECX));
  /* 10767104 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767107 push edx */
  push32((uint32_t)(EDX));
  /* 10767108 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076710b push eax */
  push32((uint32_t)(EAX));
  /* 1076710c call 0x1076b220 */
  push32(0x10767111u); f_1076b220();
  /* 10767111 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767114 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767117 push ecx */
  push32((uint32_t)(ECX));
  /* 10767118 call dword ptr [0x10793394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793394))), 0x1076711eu);
  /* 1076711e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10767121 jmp 0x10767125 */
  goto L_10767125;
L_10767123:;
  /* 10767123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10767125:;
  /* 10767125 mov esp, ebp */
  ESP = (EBP);
  /* 10767127 pop ebp */
  EBP = (pop32());
  /* 10767128 ret  */
  ESPCHK(0x10766f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x10767130 (77 bytes, 25 insns) */
void f_10767130(void) {
  FTRACE(0x10767130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767130 push ebp */
  push32((uint32_t)(EBP));
  /* 10767131 mov ebp, esp */
  EBP = (ESP);
  /* 10767133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10767135 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1076713a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076713c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767140 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10767143 push eax */
  push32((uint32_t)(EAX));
  /* 10767144 call dword ptr [0x107933ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933ac))), 0x1076714au);
  /* 1076714a mov dword ptr [0x10791f0c], eax */
  w32((uint32_t)(0x10791f0c), (EAX));
  /* 1076714f cmp dword ptr [0x10791f0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791f0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767156 jne 0x1076715c */
  if (!C.zf) goto L_1076715c;
  /* 10767158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076715a jmp 0x1076717b */
  goto L_1076717b;
L_1076715c:;
  /* 1076715c call 0x10768be0 */
  push32(0x10767161u); f_10768be0();
  /* 10767161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10767163 jne 0x10767176 */
  if (!C.zf) goto L_10767176;
  /* 10767165 mov ecx, dword ptr [0x10791f0c] */
  ECX = (r32((uint32_t)(0x10791f0c)));
  /* 1076716b push ecx */
  push32((uint32_t)(ECX));
  /* 1076716c call dword ptr [0x107933a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933a8))), 0x10767172u);
  /* 10767172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10767174 jmp 0x1076717b */
  goto L_1076717b;
L_10767176:;
  /* 10767176 mov eax, 1 */
  EAX = (0x1u);
L_1076717b:;
  /* 1076717b pop ebp */
  EBP = (pop32());
  /* 1076717c ret  */
  ESPCHK(0x10767130u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x10767180 (156 bytes, 48 insns) */
void f_10767180(void) {
  FTRACE(0x10767180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767180 push ebp */
  push32((uint32_t)(EBP));
  /* 10767181 mov ebp, esp */
  EBP = (ESP);
  /* 10767183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767186 mov eax, dword ptr [0x10791f08] */
  EAX = (r32((uint32_t)(0x10791f08)));
  /* 1076718b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076718e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10767195 jmp 0x107671a0 */
  goto L_107671a0;
L_10767197:;
  /* 10767197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076719a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076719d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107671a0:;
  /* 107671a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107671a3 cmp edx, dword ptr [0x10791f04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10791f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107671a9 jge 0x107671f6 */
  if ((C.sf==C.of)) goto L_107671f6;
  /* 107671ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107671b0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 107671b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107671b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107671bb push ecx */
  push32((uint32_t)(ECX));
  /* 107671bc call dword ptr [0x10793368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793368))), 0x107671c2u);
  /* 107671c2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107671c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107671c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107671cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107671cf push eax */
  push32((uint32_t)(EAX));
  /* 107671d0 call dword ptr [0x10793368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793368))), 0x107671d6u);
  /* 107671d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107671d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107671dc push edx */
  push32((uint32_t)(EDX));
  /* 107671dd push 0 */
  push32((uint32_t)(0x0u));
  /* 107671df mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 107671e4 push eax */
  push32((uint32_t)(EAX));
  /* 107671e5 call dword ptr [0x107933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933b0))), 0x107671ebu);
  /* 107671eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107671ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107671f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107671f4 jmp 0x10767197 */
  goto L_10767197;
L_107671f6:;
  /* 107671f6 mov edx, dword ptr [0x10791f08] */
  EDX = (r32((uint32_t)(0x10791f08)));
  /* 107671fc push edx */
  push32((uint32_t)(EDX));
  /* 107671fd push 0 */
  push32((uint32_t)(0x0u));
  /* 107671ff mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 10767204 push eax */
  push32((uint32_t)(EAX));
  /* 10767205 call dword ptr [0x107933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933b0))), 0x1076720bu);
  /* 1076720b mov ecx, dword ptr [0x10791f0c] */
  ECX = (r32((uint32_t)(0x10791f0c)));
  /* 10767211 push ecx */
  push32((uint32_t)(ECX));
  /* 10767212 call dword ptr [0x107933a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933a8))), 0x10767218u);
  /* 10767218 mov esp, ebp */
  ESP = (EBP);
  /* 1076721a pop ebp */
  EBP = (pop32());
  /* 1076721b ret  */
  ESPCHK(0x10767180u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10767220 (73 bytes, 19 insns) */
void f_10767220(void) {
  FTRACE(0x10767220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767220 push ebp */
  push32((uint32_t)(EBP));
  /* 10767221 mov ebp, esp */
  EBP = (ESP);
  /* 10767223 cmp dword ptr [0x1079054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1079054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076722a je 0x1076723e */
  if (C.zf) goto L_1076723e;
  /* 1076722c cmp dword ptr [0x1079054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767233 jne 0x10767267 */
  if (!C.zf) goto L_10767267;
  /* 10767235 cmp dword ptr [0x10790550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10790550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076723c jne 0x10767267 */
  if (!C.zf) goto L_10767267;
L_1076723e:;
  /* 1076723e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10767243 call 0x10767270 */
  push32(0x10767248u); f_10767270();
  /* 10767248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076724b cmp dword ptr [0x107906bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107906bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767252 je 0x1076725a */
  if (C.zf) goto L_1076725a;
  /* 10767254 call dword ptr [0x107906bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107906bc))), 0x1076725au);
L_1076725a:;
  /* 1076725a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1076725f call 0x10767270 */
  push32(0x10767264u); f_10767270();
  /* 10767264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767267:;
  /* 10767267 pop ebp */
  EBP = (pop32());
  /* 10767268 ret  */
  ESPCHK(0x10767220u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x10767270 (447 bytes, 131 insns) */
void f_10767270(void) {
  FTRACE(0x10767270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767270 push ebp */
  push32((uint32_t)(EBP));
  /* 10767271 mov ebp, esp */
  EBP = (ESP);
  /* 10767273 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767279 push ebx */
  push32((uint32_t)(EBX));
  /* 1076727a push esi */
  push32((uint32_t)(ESI));
  /* 1076727b push edi */
  push32((uint32_t)(EDI));
  /* 1076727c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10767283 jmp 0x1076728e */
  goto L_1076728e;
L_10767285:;
  /* 10767285 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767288 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076728b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1076728e:;
  /* 1076728e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767292 jae 0x107672a7 */
  if (!C.cf) goto L_107672a7;
  /* 10767294 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076729a cmp edx, dword ptr [ecx*8 + 0x1078eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1078eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107672a1 jne 0x107672a5 */
  if (!C.zf) goto L_107672a5;
  /* 107672a3 jmp 0x107672a7 */
  goto L_107672a7;
L_107672a5:;
  /* 107672a5 jmp 0x10767285 */
  goto L_10767285;
L_107672a7:;
  /* 107672a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107672aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107672ad cmp ecx, dword ptr [eax*8 + 0x1078eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1078eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107672b4 jne 0x10767428 */
  if (!C.zf) goto L_10767428;
  /* 107672ba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107672c1 je 0x107672e4 */
  if (C.zf) goto L_107672e4;
  /* 107672c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107672c6 mov eax, dword ptr [edx*8 + 0x1078eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1078eab4)));
  /* 107672cd push eax */
  push32((uint32_t)(EAX));
  /* 107672ce push 0 */
  push32((uint32_t)(0x0u));
  /* 107672d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107672d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107672d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107672d6 call 0x10763a00 */
  push32(0x107672dbu); f_10763a00();
  /* 107672db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107672de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107672e1 jne 0x107672e4 */
  if (!C.zf) goto L_107672e4;
  /* 107672e3 int3  */
  x86_unimpl("int3 @ 0x107672e3");
L_107672e4:;
  /* 107672e4 cmp dword ptr [0x1079054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1079054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107672eb je 0x107672ff */
  if (C.zf) goto L_107672ff;
  /* 107672ed cmp dword ptr [0x1079054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107672f4 jne 0x10767338 */
  if (!C.zf) goto L_10767338;
  /* 107672f6 cmp dword ptr [0x10790550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10790550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107672fd jne 0x10767338 */
  if (!C.zf) goto L_10767338;
L_107672ff:;
  /* 107672ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10767301 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10767304 push ecx */
  push32((uint32_t)(ECX));
  /* 10767305 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767308 mov eax, dword ptr [edx*8 + 0x1078eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1078eab4)));
  /* 1076730f push eax */
  push32((uint32_t)(EAX));
  /* 10767310 call 0x10767770 */
  push32(0x10767315u); f_10767770();
  /* 10767315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767318 push eax */
  push32((uint32_t)(EAX));
  /* 10767319 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076731c mov edx, dword ptr [ecx*8 + 0x1078eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1078eab4)));
  /* 10767323 push edx */
  push32((uint32_t)(EDX));
  /* 10767324 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10767326 call dword ptr [0x1079332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079332c))), 0x1076732cu);
  /* 1076732c push eax */
  push32((uint32_t)(EAX));
  /* 1076732d call dword ptr [0x10793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793330))), 0x10767333u);
  /* 10767333 jmp 0x10767428 */
  goto L_10767428;
L_10767338:;
  /* 10767338 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076733f je 0x10767428 */
  if (C.zf) goto L_10767428;
  /* 10767345 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1076734a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10767350 push eax */
  push32((uint32_t)(EAX));
  /* 10767351 push 0 */
  push32((uint32_t)(0x0u));
  /* 10767353 call dword ptr [0x10793348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793348))), 0x10767359u);
  /* 10767359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076735b jne 0x10767371 */
  if (!C.zf) goto L_10767371;
  /* 1076735d push 0x1078b550 */
  push32((uint32_t)(0x1078b550u));
  /* 10767362 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10767368 push ecx */
  push32((uint32_t)(ECX));
  /* 10767369 call 0x107678f0 */
  push32(0x1076736eu); f_107678f0();
  /* 1076736e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767371:;
  /* 10767371 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10767377 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1076737a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076737d push eax */
  push32((uint32_t)(EAX));
  /* 1076737e call 0x10767770 */
  push32(0x10767383u); f_10767770();
  /* 10767383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767386 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767389 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076738c jbe 0x107673ba */
  if ((C.cf||C.zf)) goto L_107673ba;
  /* 1076738e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10767394 push ecx */
  push32((uint32_t)(ECX));
  /* 10767395 call 0x10767770 */
  push32(0x1076739au); f_10767770();
  /* 1076739a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076739d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107673a0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 107673a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107673a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 107673a9 push 0x1078b54c */
  push32((uint32_t)(0x1078b54cu));
  /* 107673ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107673b1 push ecx */
  push32((uint32_t)(ECX));
  /* 107673b2 call 0x10768160 */
  push32(0x107673b7u); f_10768160();
  /* 107673b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107673ba:;
  /* 107673ba push 0x1078bfa4 */
  push32((uint32_t)(0x1078bfa4u));
  /* 107673bf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107673c5 push edx */
  push32((uint32_t)(EDX));
  /* 107673c6 call 0x107678f0 */
  push32(0x107673cbu); f_107678f0();
  /* 107673cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107673ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107673d1 push eax */
  push32((uint32_t)(EAX));
  /* 107673d2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 107673d8 push ecx */
  push32((uint32_t)(ECX));
  /* 107673d9 call 0x10767900 */
  push32(0x107673deu); f_10767900();
  /* 107673de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107673e1 push 0x1078b4c4 */
  push32((uint32_t)(0x1078b4c4u));
  /* 107673e6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 107673ec push edx */
  push32((uint32_t)(EDX));
  /* 107673ed call 0x10767900 */
  push32(0x107673f2u); f_10767900();
  /* 107673f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107673f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107673f8 mov ecx, dword ptr [eax*8 + 0x1078eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1078eab4)));
  /* 107673ff push ecx */
  push32((uint32_t)(ECX));
  /* 10767400 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10767406 push edx */
  push32((uint32_t)(EDX));
  /* 10767407 call 0x10767900 */
  push32(0x1076740cu); f_10767900();
  /* 1076740c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076740f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10767414 push 0x1078bf7c */
  push32((uint32_t)(0x1078bf7cu));
  /* 10767419 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1076741f push eax */
  push32((uint32_t)(EAX));
  /* 10767420 call 0x107680a0 */
  push32(0x10767425u); f_107680a0();
  /* 10767425 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767428:;
  /* 10767428 pop edi */
  EDI = (pop32());
  /* 10767429 pop esi */
  ESI = (pop32());
  /* 1076742a pop ebx */
  EBX = (pop32());
  /* 1076742b mov esp, ebp */
  ESP = (EBP);
  /* 1076742d pop ebp */
  EBP = (pop32());
  /* 1076742e ret  */
  ESPCHK(0x10767270u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10767430 (80 bytes, 27 insns) */
void f_10767430(void) {
  FTRACE(0x10767430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767430 push ebp */
  push32((uint32_t)(EBP));
  /* 10767431 mov ebp, esp */
  EBP = (ESP);
  /* 10767433 push ecx */
  push32((uint32_t)(ECX));
  /* 10767434 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076743b jmp 0x10767446 */
  goto L_10767446;
L_1076743d:;
  /* 1076743d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767440 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767443 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10767446:;
  /* 10767446 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076744a jae 0x1076745f */
  if (!C.cf) goto L_1076745f;
  /* 1076744c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076744f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767452 cmp edx, dword ptr [ecx*8 + 0x1078eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1078eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767459 jne 0x1076745d */
  if (!C.zf) goto L_1076745d;
  /* 1076745b jmp 0x1076745f */
  goto L_1076745f;
L_1076745d:;
  /* 1076745d jmp 0x1076743d */
  goto L_1076743d;
L_1076745f:;
  /* 1076745f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767465 cmp ecx, dword ptr [eax*8 + 0x1078eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1078eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076746c jne 0x1076747a */
  if (!C.zf) goto L_1076747a;
  /* 1076746e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767471 mov eax, dword ptr [edx*8 + 0x1078eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1078eab4)));
  /* 10767478 jmp 0x1076747c */
  goto L_1076747c;
L_1076747a:;
  /* 1076747a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076747c:;
  /* 1076747c mov esp, ebp */
  ESP = (EBP);
  /* 1076747e pop ebp */
  EBP = (pop32());
  /* 1076747f ret  */
  ESPCHK(0x10767430u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10767480 (66 bytes, 28 insns) */
void f_10767480(void) {
  FTRACE(0x10767480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767480 push ebp */
  push32((uint32_t)(EBP));
  /* 10767481 mov ebp, esp */
  EBP = (ESP);
  /* 10767483 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767487 jne 0x107674a7 */
  if (!C.zf) goto L_107674a7;
  /* 10767489 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076748d jge 0x107674a7 */
  if ((C.sf==C.of)) goto L_107674a7;
  /* 1076748f push 1 */
  push32((uint32_t)(0x1u));
  /* 10767491 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10767494 push eax */
  push32((uint32_t)(EAX));
  /* 10767495 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767498 push ecx */
  push32((uint32_t)(ECX));
  /* 10767499 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076749c push edx */
  push32((uint32_t)(EDX));
  /* 1076749d call 0x107674d0 */
  push32(0x107674a2u); f_107674d0();
  /* 107674a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107674a5 jmp 0x107674bd */
  goto L_107674bd;
L_107674a7:;
  /* 107674a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107674a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107674ac push eax */
  push32((uint32_t)(EAX));
  /* 107674ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107674b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107674b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107674b4 push edx */
  push32((uint32_t)(EDX));
  /* 107674b5 call 0x107674d0 */
  push32(0x107674bau); f_107674d0();
  /* 107674ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107674bd:;
  /* 107674bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107674c0 pop ebp */
  EBP = (pop32());
  /* 107674c1 ret  */
  ESPCHK(0x10767480u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x107674d0 (194 bytes, 71 insns) */
void f_107674d0(void) {
  FTRACE(0x107674d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107674d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107674d1 mov ebp, esp */
  EBP = (ESP);
  /* 107674d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107674d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107674d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107674dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107674e0 je 0x107674f9 */
  if (C.zf) goto L_107674f9;
  /* 107674e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107674e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 107674e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107674eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107674ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107674f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107674f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107674f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107674f9:;
  /* 107674f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107674fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107674ff:;
  /* 107674ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767502 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10767504 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10767507 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1076750a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076750d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076750f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10767512 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10767515 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767519 jbe 0x10767531 */
  if ((C.cf||C.zf)) goto L_10767531;
  /* 1076751b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076751e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767524 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10767526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767529 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076752c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076752f jmp 0x10767545 */
  goto L_10767545;
L_10767531:;
  /* 10767531 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10767534 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076753a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1076753c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076753f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767542 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10767545:;
  /* 10767545 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767549 ja 0x107674ff */
  if ((!C.cf&&!C.zf)) goto L_107674ff;
  /* 1076754b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076754e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10767551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767554 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767557 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076755a:;
  /* 1076755a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076755d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076755f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10767562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767565 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767568 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076756a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1076756c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076756f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10767572 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10767574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767577 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076757a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076757d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767583 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10767586 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767589 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076758c jb 0x1076755a */
  if (C.cf) goto L_1076755a;
  /* 1076758e mov esp, ebp */
  ESP = (EBP);
  /* 10767590 pop ebp */
  EBP = (pop32());
  /* 10767591 ret  */
  ESPCHK(0x107674d0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x107675a0 (63 bytes, 24 insns) */
void f_107675a0(void) {
  FTRACE(0x107675a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107675a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107675a1 mov ebp, esp */
  EBP = (ESP);
  /* 107675a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107675a4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107675a8 jne 0x107675b9 */
  if (!C.zf) goto L_107675b9;
  /* 107675aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107675ae jge 0x107675b9 */
  if ((C.sf==C.of)) goto L_107675b9;
  /* 107675b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107675b7 jmp 0x107675c0 */
  goto L_107675c0;
L_107675b9:;
  /* 107675b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107675c0:;
  /* 107675c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107675c3 push eax */
  push32((uint32_t)(EAX));
  /* 107675c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107675c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107675c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107675cb push edx */
  push32((uint32_t)(EDX));
  /* 107675cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107675cf push eax */
  push32((uint32_t)(EAX));
  /* 107675d0 call 0x107674d0 */
  push32(0x107675d5u); f_107674d0();
  /* 107675d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107675d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107675db mov esp, ebp */
  ESP = (EBP);
  /* 107675dd pop ebp */
  EBP = (pop32());
  /* 107675de ret  */
  ESPCHK(0x107675a0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x107675e0 (30 bytes, 14 insns) */
void f_107675e0(void) {
  FTRACE(0x107675e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107675e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107675e1 mov ebp, esp */
  EBP = (ESP);
  /* 107675e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107675e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107675e8 push eax */
  push32((uint32_t)(EAX));
  /* 107675e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107675ec push ecx */
  push32((uint32_t)(ECX));
  /* 107675ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107675f0 push edx */
  push32((uint32_t)(EDX));
  /* 107675f1 call 0x107674d0 */
  push32(0x107675f6u); f_107674d0();
  /* 107675f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107675f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107675fc pop ebp */
  EBP = (pop32());
  /* 107675fd ret  */
  ESPCHK(0x107675e0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10767600 (72 bytes, 28 insns) */
void f_10767600(void) {
  FTRACE(0x10767600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767600 push ebp */
  push32((uint32_t)(EBP));
  /* 10767601 mov ebp, esp */
  EBP = (ESP);
  /* 10767603 push ecx */
  push32((uint32_t)(ECX));
  /* 10767604 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767608 jne 0x10767621 */
  if (!C.zf) goto L_10767621;
  /* 1076760a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076760e jg 0x10767621 */
  if ((!C.zf&&C.sf==C.of)) goto L_10767621;
  /* 10767610 jl 0x10767618 */
  if ((C.sf!=C.of)) goto L_10767618;
  /* 10767612 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767616 jae 0x10767621 */
  if (!C.cf) goto L_10767621;
L_10767618:;
  /* 10767618 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1076761f jmp 0x10767628 */
  goto L_10767628;
L_10767621:;
  /* 10767621 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10767628:;
  /* 10767628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076762b push eax */
  push32((uint32_t)(EAX));
  /* 1076762c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076762f push ecx */
  push32((uint32_t)(ECX));
  /* 10767630 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10767633 push edx */
  push32((uint32_t)(EDX));
  /* 10767634 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767637 push eax */
  push32((uint32_t)(EAX));
  /* 10767638 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076763b push ecx */
  push32((uint32_t)(ECX));
  /* 1076763c call 0x10767650 */
  push32(0x10767641u); f_10767650();
  /* 10767641 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10767644 mov esp, ebp */
  ESP = (EBP);
  /* 10767646 pop ebp */
  EBP = (pop32());
  /* 10767647 ret  */
  ESPCHK(0x10767600u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10767650 (242 bytes, 91 insns) */
void f_10767650(void) {
  FTRACE(0x10767650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767650 push ebp */
  push32((uint32_t)(EBP));
  /* 10767651 mov ebp, esp */
  EBP = (ESP);
  /* 10767653 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767656 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10767659 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076765c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767660 je 0x10767684 */
  if (C.zf) goto L_10767684;
  /* 10767662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767665 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10767668 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076766b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076766e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10767671 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767674 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10767676 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767679 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076767c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076767e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10767681 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10767684:;
  /* 10767684 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767687 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1076768a:;
  /* 1076768a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076768d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076768f push ecx */
  push32((uint32_t)(ECX));
  /* 10767690 push eax */
  push32((uint32_t)(EAX));
  /* 10767691 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767694 push edx */
  push32((uint32_t)(EDX));
  /* 10767695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767698 push eax */
  push32((uint32_t)(EAX));
  /* 10767699 call 0x1076b5d0 */
  push32(0x1076769eu); f_1076b5d0();
  /* 1076769e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107676a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107676a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107676a6 push edx */
  push32((uint32_t)(EDX));
  /* 107676a7 push ecx */
  push32((uint32_t)(ECX));
  /* 107676a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107676ab push eax */
  push32((uint32_t)(EAX));
  /* 107676ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107676af push ecx */
  push32((uint32_t)(ECX));
  /* 107676b0 call 0x1076b560 */
  push32(0x107676b5u); f_1076b560();
  /* 107676b5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107676b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107676bb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107676bf jbe 0x107676d7 */
  if ((C.cf||C.zf)) goto L_107676d7;
  /* 107676c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107676c4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107676c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107676ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107676cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107676cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107676d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107676d5 jmp 0x107676eb */
  goto L_107676eb;
L_107676d7:;
  /* 107676d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107676da add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107676dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107676e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 107676e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107676e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107676e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107676eb:;
  /* 107676eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107676ef ja 0x1076768a */
  if ((!C.cf&&!C.zf)) goto L_1076768a;
  /* 107676f1 jb 0x107676f9 */
  if (C.cf) goto L_107676f9;
  /* 107676f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107676f7 ja 0x1076768a */
  if ((!C.cf&&!C.zf)) goto L_1076768a;
L_107676f9:;
  /* 107676f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107676fc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107676ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767702 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767705 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10767708:;
  /* 10767708 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076770b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076770d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10767710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767713 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767716 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10767718 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1076771a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076771d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10767720 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10767722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767725 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076772b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076772e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767731 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10767734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767737 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076773a jb 0x10767708 */
  if (C.cf) goto L_10767708;
  /* 1076773c mov esp, ebp */
  ESP = (EBP);
  /* 1076773e pop ebp */
  EBP = (pop32());
  /* 1076773f ret 0x14 */
  ESPCHK(0x10767650u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10767750 (31 bytes, 15 insns) */
void f_10767750(void) {
  FTRACE(0x10767750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767750 push ebp */
  push32((uint32_t)(EBP));
  /* 10767751 mov ebp, esp */
  EBP = (ESP);
  /* 10767753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10767755 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10767758 push eax */
  push32((uint32_t)(EAX));
  /* 10767759 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076775c push ecx */
  push32((uint32_t)(ECX));
  /* 1076775d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767760 push edx */
  push32((uint32_t)(EDX));
  /* 10767761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767764 push eax */
  push32((uint32_t)(EAX));
  /* 10767765 call 0x10767650 */
  push32(0x1076776au); f_10767650();
  /* 1076776a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076776d pop ebp */
  EBP = (pop32());
  /* 1076776e ret  */
  ESPCHK(0x10767750u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10767770 (123 bytes, 44 insns) */
void f_10767770(void) {
  FTRACE(0x10767770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767770 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10767774 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1076777a je 0x10767790 */
  if (C.zf) goto L_10767790;
L_1076777c:;
  /* 1076777c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1076777e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1076777f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10767781 je 0x107677c3 */
  if (C.zf) goto L_107677c3;
  /* 10767783 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10767789 jne 0x1076777c */
  if (!C.zf) goto L_1076777c;
  /* 1076778b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10767790:;
  /* 10767790 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10767792 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10767797 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767799 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076779c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076779e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107677a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 107677a6 je 0x10767790 */
  if (C.zf) goto L_10767790;
  /* 107677a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 107677ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107677ad je 0x107677e1 */
  if (C.zf) goto L_107677e1;
  /* 107677af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 107677b1 je 0x107677d7 */
  if (C.zf) goto L_107677d7;
  /* 107677b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 107677b8 je 0x107677cd */
  if (C.zf) goto L_107677cd;
  /* 107677ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 107677bf je 0x107677c3 */
  if (C.zf) goto L_107677c3;
  /* 107677c1 jmp 0x10767790 */
  goto L_10767790;
L_107677c3:;
  /* 107677c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 107677c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107677ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107677cc ret  */
  ESPCHK(0x10767770u, _esp0);
  ESP += 4; return;
L_107677cd:;
  /* 107677cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 107677d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107677d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107677d6 ret  */
  ESPCHK(0x10767770u, _esp0);
  ESP += 4; return;
L_107677d7:;
  /* 107677d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 107677da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107677de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107677e0 ret  */
  ESPCHK(0x10767770u, _esp0);
  ESP += 4; return;
L_107677e1:;
  /* 107677e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 107677e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107677e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107677ea ret  */
  ESPCHK(0x10767770u, _esp0);
  ESP += 4; return;
}

/* FUN_100077f0 @ 0x107677f0 (249 bytes, 93 insns) */
void f_107677f0(void) {
  FTRACE(0x107677f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107677f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107677f1 mov ebp, esp */
  EBP = (ESP);
  /* 107677f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107677f6 push ebx */
  push32((uint32_t)(EBX));
  /* 107677f7 push esi */
  push32((uint32_t)(ESI));
  /* 107677f8 push edi */
  push32((uint32_t)(EDI));
  /* 107677f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107677fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107677ff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10767802 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10767805:;
  /* 10767805 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767809 jne 0x10767829 */
  if (!C.zf) goto L_10767829;
  /* 1076780b push 0x1078bfdc */
  push32((uint32_t)(0x1078bfdcu));
  /* 10767810 push 0 */
  push32((uint32_t)(0x0u));
  /* 10767812 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10767814 push 0x1078bfd0 */
  push32((uint32_t)(0x1078bfd0u));
  /* 10767819 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076781b call 0x10763a00 */
  push32(0x10767820u); f_10763a00();
  /* 10767820 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767823 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767826 jne 0x10767829 */
  if (!C.zf) goto L_10767829;
  /* 10767828 int3  */
  x86_unimpl("int3 @ 0x10767828");
L_10767829:;
  /* 10767829 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076782b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076782d jne 0x10767805 */
  if (!C.zf) goto L_10767805;
L_1076782f:;
  /* 1076782f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767833 jne 0x10767853 */
  if (!C.zf) goto L_10767853;
  /* 10767835 push 0x1078bfc0 */
  push32((uint32_t)(0x1078bfc0u));
  /* 1076783a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076783c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1076783e push 0x1078bfd0 */
  push32((uint32_t)(0x1078bfd0u));
  /* 10767843 push 2 */
  push32((uint32_t)(0x2u));
  /* 10767845 call 0x10763a00 */
  push32(0x1076784au); f_10763a00();
  /* 1076784a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076784d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767850 jne 0x10767853 */
  if (!C.zf) goto L_10767853;
  /* 10767852 int3  */
  x86_unimpl("int3 @ 0x10767852");
L_10767853:;
  /* 10767853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10767855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10767857 jne 0x1076782f */
  if (!C.zf) goto L_1076782f;
  /* 10767859 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076785c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10767863 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767869 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1076786c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076786f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767872 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10767874 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767877 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076787a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1076787d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10767880 push edx */
  push32((uint32_t)(EDX));
  /* 10767881 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10767884 push eax */
  push32((uint32_t)(EAX));
  /* 10767885 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767888 push ecx */
  push32((uint32_t)(ECX));
  /* 10767889 call 0x1076b8d0 */
  push32(0x1076788eu); f_1076b8d0();
  /* 1076788e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767891 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10767894 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767897 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1076789a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076789d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107678a0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107678a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107678a6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107678aa jl 0x107678ce */
  if ((C.sf!=C.of)) goto L_107678ce;
  /* 107678ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107678af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107678b1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107678b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107678b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107678bc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107678bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107678c2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107678c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107678c7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107678ca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107678cc jmp 0x107678df */
  goto L_107678df;
L_107678ce:;
  /* 107678ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107678d1 push eax */
  push32((uint32_t)(EAX));
  /* 107678d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107678d4 call 0x1076b650 */
  push32(0x107678d9u); f_1076b650();
  /* 107678d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107678dc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_107678df:;
  /* 107678df mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107678e2 pop edi */
  EDI = (pop32());
  /* 107678e3 pop esi */
  ESI = (pop32());
  /* 107678e4 pop ebx */
  EBX = (pop32());
  /* 107678e5 mov esp, ebp */
  ESP = (EBP);
  /* 107678e7 pop ebp */
  EBP = (pop32());
  /* 107678e8 ret  */
  ESPCHK(0x107677f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x107678f0 (7 bytes, 3 insns) */
void f_107678f0(void) {
  FTRACE(0x107678f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107678f0 push edi */
  push32((uint32_t)(EDI));
  /* 107678f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 107678f5 jmp 0x10767961 */
  jmp_ind(0x10767961u); return;
}

/* FUN_10007900 @ 0x10767900 (224 bytes, 84 insns) */
void f_10767900(void) {
  FTRACE(0x10767900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767900 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10767904 push edi */
  push32((uint32_t)(EDI));
  /* 10767905 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1076790b je 0x1076791c */
  if (C.zf) goto L_1076791c;
L_1076790d:;
  /* 1076790d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1076790f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10767910 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10767912 je 0x1076794f */
  if (C.zf) goto L_1076794f;
  /* 10767914 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1076791a jne 0x1076790d */
  if (!C.zf) goto L_1076790d;
L_1076791c:;
  /* 1076791c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1076791e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10767923 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767925 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10767928 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076792a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076792d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10767932 je 0x1076791c */
  if (C.zf) goto L_1076791c;
  /* 10767934 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10767937 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10767939 je 0x1076795e */
  if (C.zf) goto L_1076795e;
  /* 1076793b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1076793d je 0x10767959 */
  if (C.zf) goto L_10767959;
  /* 1076793f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10767944 je 0x10767954 */
  if (C.zf) goto L_10767954;
  /* 10767946 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1076794b je 0x1076794f */
  if (C.zf) goto L_1076794f;
  /* 1076794d jmp 0x1076791c */
  goto L_1076791c;
L_1076794f:;
  /* 1076794f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10767952 jmp 0x10767961 */
  goto L_10767961;
L_10767954:;
  /* 10767954 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10767957 jmp 0x10767961 */
  goto L_10767961;
L_10767959:;
  /* 10767959 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1076795c jmp 0x10767961 */
  goto L_10767961;
L_1076795e:;
  /* 1076795e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10767961:;
  /* 10767961 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10767965 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1076796b je 0x10767986 */
  if (C.zf) goto L_10767986;
L_1076796d:;
  /* 1076796d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076796f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10767970 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10767972 je 0x107679d8 */
  if (C.zf) goto L_107679d8;
  /* 10767974 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10767976 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10767977 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1076797d jne 0x1076796d */
  if (!C.zf) goto L_1076796d;
  /* 1076797f jmp 0x10767986 */
  goto L_10767986;
L_10767981:;
  /* 10767981 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10767983 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10767986:;
  /* 10767986 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1076798b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1076798d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076798f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10767992 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10767994 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10767996 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767999 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1076799e je 0x10767981 */
  if (C.zf) goto L_10767981;
  /* 107679a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 107679a2 je 0x107679d8 */
  if (C.zf) goto L_107679d8;
  /* 107679a4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 107679a6 je 0x107679cf */
  if (C.zf) goto L_107679cf;
  /* 107679a8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 107679ae je 0x107679c2 */
  if (C.zf) goto L_107679c2;
  /* 107679b0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 107679b6 je 0x107679ba */
  if (C.zf) goto L_107679ba;
  /* 107679b8 jmp 0x10767981 */
  goto L_10767981;
L_107679ba:;
  /* 107679ba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107679bc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107679c0 pop edi */
  EDI = (pop32());
  /* 107679c1 ret  */
  ESPCHK(0x10767900u, _esp0);
  ESP += 4; return;
L_107679c2:;
  /* 107679c2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 107679c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107679c9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 107679cd pop edi */
  EDI = (pop32());
  /* 107679ce ret  */
  ESPCHK(0x10767900u, _esp0);
  ESP += 4; return;
L_107679cf:;
  /* 107679cf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 107679d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107679d6 pop edi */
  EDI = (pop32());
  /* 107679d7 ret  */
  ESPCHK(0x10767900u, _esp0);
  ESP += 4; return;
L_107679d8:;
  /* 107679d8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 107679da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107679de pop edi */
  EDI = (pop32());
  /* 107679df ret  */
  ESPCHK(0x10767900u, _esp0);
  ESP += 4; return;
}

/* FUN_100079e0 @ 0x107679e0 (243 bytes, 91 insns) */
void f_107679e0(void) {
  FTRACE(0x107679e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107679e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107679e1 mov ebp, esp */
  EBP = (ESP);
  /* 107679e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107679e6 push ebx */
  push32((uint32_t)(EBX));
  /* 107679e7 push esi */
  push32((uint32_t)(ESI));
  /* 107679e8 push edi */
  push32((uint32_t)(EDI));
  /* 107679e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107679ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107679ef:;
  /* 107679ef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107679f3 jne 0x10767a13 */
  if (!C.zf) goto L_10767a13;
  /* 107679f5 push 0x1078bfdc */
  push32((uint32_t)(0x1078bfdcu));
  /* 107679fa push 0 */
  push32((uint32_t)(0x0u));
  /* 107679fc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 107679fe push 0x1078bfec */
  push32((uint32_t)(0x1078bfecu));
  /* 10767a03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10767a05 call 0x10763a00 */
  push32(0x10767a0au); f_10763a00();
  /* 10767a0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767a0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767a10 jne 0x10767a13 */
  if (!C.zf) goto L_10767a13;
  /* 10767a12 int3  */
  x86_unimpl("int3 @ 0x10767a12");
L_10767a13:;
  /* 10767a13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10767a15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10767a17 jne 0x107679ef */
  if (!C.zf) goto L_107679ef;
L_10767a19:;
  /* 10767a19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767a1d jne 0x10767a3d */
  if (!C.zf) goto L_10767a3d;
  /* 10767a1f push 0x1078bfc0 */
  push32((uint32_t)(0x1078bfc0u));
  /* 10767a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10767a26 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10767a28 push 0x1078bfec */
  push32((uint32_t)(0x1078bfecu));
  /* 10767a2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10767a2f call 0x10763a00 */
  push32(0x10767a34u); f_10763a00();
  /* 10767a34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767a37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767a3a jne 0x10767a3d */
  if (!C.zf) goto L_10767a3d;
  /* 10767a3c int3  */
  x86_unimpl("int3 @ 0x10767a3c");
L_10767a3d:;
  /* 10767a3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10767a3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10767a41 jne 0x10767a19 */
  if (!C.zf) goto L_10767a19;
  /* 10767a43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a46 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10767a4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767a53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10767a56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767a5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10767a5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767a64 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10767a67 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10767a6a push ecx */
  push32((uint32_t)(ECX));
  /* 10767a6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10767a6e push edx */
  push32((uint32_t)(EDX));
  /* 10767a6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a72 push eax */
  push32((uint32_t)(EAX));
  /* 10767a73 call 0x1076b8d0 */
  push32(0x10767a78u); f_1076b8d0();
  /* 10767a78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767a7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10767a7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10767a84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767a87 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10767a8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a90 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767a94 jl 0x10767ab8 */
  if ((C.sf!=C.of)) goto L_10767ab8;
  /* 10767a96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767a99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10767a9b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10767a9e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10767aa0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10767aa6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10767aa9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767aac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10767aae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767ab1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767ab4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10767ab6 jmp 0x10767ac9 */
  goto L_10767ac9;
L_10767ab8:;
  /* 10767ab8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10767abb push edx */
  push32((uint32_t)(EDX));
  /* 10767abc push 0 */
  push32((uint32_t)(0x0u));
  /* 10767abe call 0x1076b650 */
  push32(0x10767ac3u); f_1076b650();
  /* 10767ac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767ac6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10767ac9:;
  /* 10767ac9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10767acc pop edi */
  EDI = (pop32());
  /* 10767acd pop esi */
  ESI = (pop32());
  /* 10767ace pop ebx */
  EBX = (pop32());
  /* 10767acf mov esp, ebp */
  ESP = (EBP);
  /* 10767ad1 pop ebp */
  EBP = (pop32());
  /* 10767ad2 ret  */
  ESPCHK(0x107679e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ae0 @ 0x10767ae0 (47 bytes, 17 insns) */
void f_10767ae0(void) {
  FTRACE(0x10767ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 10767ae1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767ae6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10767aea jb 0x10767b00 */
  if (C.cf) goto L_10767b00;
L_10767aec:;
  /* 10767aec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767af2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767af7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10767af9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767afe jae 0x10767aec */
  if (!C.cf) goto L_10767aec;
L_10767b00:;
  /* 10767b00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767b02 mov eax, esp */
  EAX = (ESP);
  /* 10767b04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10767b06 mov esp, ecx */
  ESP = (ECX);
  /* 10767b08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10767b0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10767b0d push eax */
  push32((uint32_t)(EAX));
  /* 10767b0e ret  */
  ESPCHK(0x10767ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x10767b10 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10767b10(void) {
  FTRACE(0x10767b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10767b11 mov ebp, esp */
  EBP = (ESP);
  /* 10767b13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767b16 push esi */
  push32((uint32_t)(ESI));
  /* 10767b17 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b1b je 0x10767b23 */
  if (C.zf) goto L_10767b23;
  /* 10767b1d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b21 jne 0x10767b28 */
  if (!C.zf) goto L_10767b28;
L_10767b23:;
  /* 10767b23 jmp 0x10767cf8 */
  goto L_10767cf8;
L_10767b28:;
  /* 10767b28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b2c je 0x10767b44 */
  if (C.zf) goto L_10767b44;
  /* 10767b2e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b32 je 0x10767b44 */
  if (C.zf) goto L_10767b44;
  /* 10767b34 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b38 je 0x10767b44 */
  if (C.zf) goto L_10767b44;
  /* 10767b3a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b3e jne 0x10767c21 */
  if (!C.zf) goto L_10767c21;
L_10767b44:;
  /* 10767b44 push 1 */
  push32((uint32_t)(0x1u));
  /* 10767b46 call 0x10768340 */
  push32(0x10767b4bu); f_10768340();
  /* 10767b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767b4e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b52 je 0x10767b5a */
  if (C.zf) goto L_10767b5a;
  /* 10767b54 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b58 jne 0x10767b9f */
  if (!C.zf) goto L_10767b9f;
L_10767b5a:;
  /* 10767b5a cmp dword ptr [0x107906d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107906d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b61 jne 0x10767b9f */
  if (!C.zf) goto L_10767b9f;
  /* 10767b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10767b65 push 0x10767d40 */
  push32((uint32_t)(0x10767d40u));
  /* 10767b6a call dword ptr [0x1079331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079331c))), 0x10767b70u);
  /* 10767b70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767b73 jne 0x10767b81 */
  if (!C.zf) goto L_10767b81;
  /* 10767b75 mov dword ptr [0x107906d0], 1 */
  w32((uint32_t)(0x107906d0), (0x1u));
  /* 10767b7f jmp 0x10767b9f */
  goto L_10767b9f;
L_10767b81:;
  /* 10767b81 call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x10767b87u);
  /* 10767b87 mov esi, eax */
  ESI = (EAX);
  /* 10767b89 call 0x1076c820 */
  push32(0x10767b8eu); f_1076c820();
  /* 10767b8e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10767b90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10767b92 call 0x107683e0 */
  push32(0x10767b97u); f_107683e0();
  /* 10767b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767b9a jmp 0x10767cf8 */
  goto L_10767cf8;
L_10767b9f:;
  /* 10767b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767ba2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10767ba5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10767ba8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767bab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10767bae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767bb2 ja 0x10767c12 */
  if ((!C.cf&&!C.zf)) goto L_10767c12;
  /* 10767bb4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10767bb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10767bb9 mov dl, byte ptr [eax + 0x10767d1f] */
  DL = (r8((uint32_t)(EAX + 0x10767d1f)));
  /* 10767bbf jmp dword ptr [edx*4 + 0x10767d0b] */
  switch (EDX) {
    case 0: goto L_10767bc6;
    case 1: goto L_10767c00;
    case 2: goto L_10767bda;
    case 3: goto L_10767bed;
    case 4: goto L_10767c12;
    default: x86_unimpl("switch@0x10767bbf out of table"); return;
  }
L_10767bc6:;
  /* 10767bc6 mov ecx, dword ptr [0x107906c0] */
  ECX = (r32((uint32_t)(0x107906c0)));
  /* 10767bcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10767bcf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767bd2 mov dword ptr [0x107906c0], edx */
  w32((uint32_t)(0x107906c0), (EDX));
  /* 10767bd8 jmp 0x10767c12 */
  goto L_10767c12;
L_10767bda:;
  /* 10767bda mov eax, dword ptr [0x107906c4] */
  EAX = (r32((uint32_t)(0x107906c4)));
  /* 10767bdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10767be2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767be5 mov dword ptr [0x107906c4], ecx */
  w32((uint32_t)(0x107906c4), (ECX));
  /* 10767beb jmp 0x10767c12 */
  goto L_10767c12;
L_10767bed:;
  /* 10767bed mov edx, dword ptr [0x107906c8] */
  EDX = (r32((uint32_t)(0x107906c8)));
  /* 10767bf3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10767bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767bf9 mov dword ptr [0x107906c8], eax */
  w32((uint32_t)(0x107906c8), (EAX));
  /* 10767bfe jmp 0x10767c12 */
  goto L_10767c12;
L_10767c00:;
  /* 10767c00 mov ecx, dword ptr [0x107906cc] */
  ECX = (r32((uint32_t)(0x107906cc)));
  /* 10767c06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10767c09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767c0c mov dword ptr [0x107906cc], edx */
  w32((uint32_t)(0x107906cc), (EDX));
L_10767c12:;
  /* 10767c12 push 1 */
  push32((uint32_t)(0x1u));
  /* 10767c14 call 0x107683e0 */
  push32(0x10767c19u); f_107683e0();
  /* 10767c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767c1c jmp 0x10767cf3 */
  goto L_10767cf3;
L_10767c21:;
  /* 10767c21 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767c25 je 0x10767c38 */
  if (C.zf) goto L_10767c38;
  /* 10767c27 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767c2b je 0x10767c38 */
  if (C.zf) goto L_10767c38;
  /* 10767c2d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767c31 je 0x10767c38 */
  if (C.zf) goto L_10767c38;
  /* 10767c33 jmp 0x10767cf8 */
  goto L_10767cf8;
L_10767c38:;
  /* 10767c38 call 0x10764380 */
  push32(0x10767c3du); f_10764380();
  /* 10767c3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10767c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767c43 cmp dword ptr [eax + 0x50], 0x1078ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1078ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767c4a jne 0x10767c95 */
  if (!C.zf) goto L_10767c95;
  /* 10767c4c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10767c51 push 0x1078bff8 */
  push32((uint32_t)(0x1078bff8u));
  /* 10767c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10767c58 mov ecx, dword ptr [0x1078ec80] */
  ECX = (r32((uint32_t)(0x1078ec80)));
  /* 10767c5e push ecx */
  push32((uint32_t)(ECX));
  /* 10767c5f call 0x10764940 */
  push32(0x10767c64u); f_10764940();
  /* 10767c64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767c67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767c6a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10767c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767c70 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767c74 je 0x10767c93 */
  if (C.zf) goto L_10767c93;
  /* 10767c76 mov ecx, dword ptr [0x1078ec80] */
  ECX = (r32((uint32_t)(0x1078ec80)));
  /* 10767c7c push ecx */
  push32((uint32_t)(ECX));
  /* 10767c7d push 0x1078ec00 */
  push32((uint32_t)(0x1078ec00u));
  /* 10767c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767c85 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10767c88 push eax */
  push32((uint32_t)(EAX));
  /* 10767c89 call 0x1076b220 */
  push32(0x10767c8eu); f_1076b220();
  /* 10767c8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767c91 jmp 0x10767c95 */
  goto L_10767c95;
L_10767c93:;
  /* 10767c93 jmp 0x10767cf8 */
  goto L_10767cf8;
L_10767c95:;
  /* 10767c95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767c98 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10767c9b push edx */
  push32((uint32_t)(EDX));
  /* 10767c9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767c9f push eax */
  push32((uint32_t)(EAX));
  /* 10767ca0 call 0x10768020 */
  push32(0x10767ca5u); f_10768020();
  /* 10767ca5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767ca8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10767cab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767caf jne 0x10767cb3 */
  if (!C.zf) goto L_10767cb3;
  /* 10767cb1 jmp 0x10767cf8 */
  goto L_10767cf8;
L_10767cb3:;
  /* 10767cb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767cb6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10767cb9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10767cbc:;
  /* 10767cbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767cbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10767cc2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767cc5 jne 0x10767cf3 */
  if (!C.zf) goto L_10767cf3;
  /* 10767cc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767cca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10767ccd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10767cd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767cd3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767cd6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10767cd9 mov edx, dword ptr [0x1078ec84] */
  EDX = (r32((uint32_t)(0x1078ec84)));
  /* 10767cdf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10767ce2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767ce5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10767ce8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767cea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767ced jb 0x10767cf1 */
  if (C.cf) goto L_10767cf1;
  /* 10767cef jmp 0x10767cf3 */
  goto L_10767cf3;
L_10767cf1:;
  /* 10767cf1 jmp 0x10767cbc */
  goto L_10767cbc;
L_10767cf3:;
  /* 10767cf3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10767cf6 jmp 0x10767d06 */
  goto L_10767d06;
L_10767cf8:;
  /* 10767cf8 call 0x1076c810 */
  push32(0x10767cfdu); f_1076c810();
  /* 10767cfd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10767d03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10767d06:;
  /* 10767d06 pop esi */
  ESI = (pop32());
  /* 10767d07 mov esp, ebp */
  ESP = (EBP);
  /* 10767d09 pop ebp */
  EBP = (pop32());
  /* 10767d0a ret  */
  ESPCHK(0x10767b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d40 @ 0x10767d40 (146 bytes, 45 insns) */
void f_10767d40(void) {
  FTRACE(0x10767d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10767d41 mov ebp, esp */
  EBP = (ESP);
  /* 10767d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10767d48 call 0x10768340 */
  push32(0x10767d4du); f_10768340();
  /* 10767d4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767d50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767d54 jne 0x10767d6e */
  if (!C.zf) goto L_10767d6e;
  /* 10767d56 mov dword ptr [ebp - 8], 0x107906c0 */
  w32((uint32_t)(EBP + -0x8), (0x107906c0u));
  /* 10767d5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767d60 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10767d62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10767d65 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10767d6c jmp 0x10767d84 */
  goto L_10767d84;
L_10767d6e:;
  /* 10767d6e mov dword ptr [ebp - 8], 0x107906c4 */
  w32((uint32_t)(EBP + -0x8), (0x107906c4u));
  /* 10767d75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767d78 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10767d7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10767d7d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10767d84:;
  /* 10767d84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767d88 jne 0x10767d98 */
  if (!C.zf) goto L_10767d98;
  /* 10767d8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10767d8c call 0x107683e0 */
  push32(0x10767d91u); f_107683e0();
  /* 10767d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767d94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10767d96 jmp 0x10767dcc */
  goto L_10767dcc;
L_10767d98:;
  /* 10767d98 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767d9c je 0x10767dbd */
  if (C.zf) goto L_10767dbd;
  /* 10767d9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767da1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10767da7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10767da9 call 0x107683e0 */
  push32(0x10767daeu); f_107683e0();
  /* 10767dae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767db1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767db4 push edx */
  push32((uint32_t)(EDX));
  /* 10767db5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10767db8u);
  /* 10767db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767dbb jmp 0x10767dc7 */
  goto L_10767dc7;
L_10767dbd:;
  /* 10767dbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10767dbf call 0x107683e0 */
  push32(0x10767dc4u); f_107683e0();
  /* 10767dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767dc7:;
  /* 10767dc7 mov eax, 1 */
  EAX = (0x1u);
L_10767dcc:;
  /* 10767dcc mov esp, ebp */
  ESP = (EBP);
  /* 10767dce pop ebp */
  EBP = (pop32());
  /* 10767dcf ret 4 */
  ESPCHK(0x10767d40u, _esp0);
  ESP += 8; return;
}

/* FUN_10007de0 @ 0x10767de0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10767de0(void) {
  FTRACE(0x10767de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10767de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10767de1 mov ebp, esp */
  EBP = (ESP);
  /* 10767de3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767de6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10767ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767df0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10767df3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10767df6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10767df9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10767dfc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767e00 ja 0x10767eae */
  if ((!C.cf&&!C.zf)) goto L_10767eae;
  /* 10767e06 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10767e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10767e0b mov dl, byte ptr [eax + 0x10768002] */
  DL = (r8((uint32_t)(EAX + 0x10768002)));
  /* 10767e11 jmp dword ptr [edx*4 + 0x10767fea] */
  switch (EDX) {
    case 0: goto L_10767e18;
    case 1: goto L_10767e83;
    case 2: goto L_10767e69;
    case 3: goto L_10767e35;
    case 4: goto L_10767e4f;
    case 5: goto L_10767eae;
    default: x86_unimpl("switch@0x10767e11 out of table"); return;
  }
L_10767e18:;
  /* 10767e18 mov dword ptr [ebp - 0x18], 0x107906c0 */
  w32((uint32_t)(EBP + -0x18), (0x107906c0u));
  /* 10767e1f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767e22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10767e24 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10767e27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10767e2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767e2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10767e30 jmp 0x10767eb6 */
  goto L_10767eb6;
L_10767e35:;
  /* 10767e35 mov dword ptr [ebp - 0x18], 0x107906c4 */
  w32((uint32_t)(EBP + -0x18), (0x107906c4u));
  /* 10767e3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767e3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10767e41 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10767e44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10767e47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767e4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10767e4d jmp 0x10767eb6 */
  goto L_10767eb6;
L_10767e4f:;
  /* 10767e4f mov dword ptr [ebp - 0x18], 0x107906c8 */
  w32((uint32_t)(EBP + -0x18), (0x107906c8u));
  /* 10767e56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767e59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10767e5b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10767e5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10767e61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767e64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10767e67 jmp 0x10767eb6 */
  goto L_10767eb6;
L_10767e69:;
  /* 10767e69 mov dword ptr [ebp - 0x18], 0x107906cc */
  w32((uint32_t)(EBP + -0x18), (0x107906ccu));
  /* 10767e70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767e73 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10767e75 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10767e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10767e7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767e7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10767e81 jmp 0x10767eb6 */
  goto L_10767eb6;
L_10767e83:;
  /* 10767e83 call 0x10764380 */
  push32(0x10767e88u); f_10764380();
  /* 10767e88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10767e8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767e8e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10767e91 push edx */
  push32((uint32_t)(EDX));
  /* 10767e92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767e95 push eax */
  push32((uint32_t)(EAX));
  /* 10767e96 call 0x10768020 */
  push32(0x10767e9bu); f_10768020();
  /* 10767e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767e9e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767ea1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10767ea4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767ea7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10767ea9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10767eac jmp 0x10767eb6 */
  goto L_10767eb6;
L_10767eae:;
  /* 10767eae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10767eb1 jmp 0x10767fe6 */
  goto L_10767fe6;
L_10767eb6:;
  /* 10767eb6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767eba je 0x10767ec6 */
  if (C.zf) goto L_10767ec6;
  /* 10767ebc push 1 */
  push32((uint32_t)(0x1u));
  /* 10767ebe call 0x10768340 */
  push32(0x10767ec3u); f_10768340();
  /* 10767ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767ec6:;
  /* 10767ec6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767eca jne 0x10767ee3 */
  if (!C.zf) goto L_10767ee3;
  /* 10767ecc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767ed0 je 0x10767edc */
  if (C.zf) goto L_10767edc;
  /* 10767ed2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10767ed4 call 0x107683e0 */
  push32(0x10767ed9u); f_107683e0();
  /* 10767ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767edc:;
  /* 10767edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10767ede jmp 0x10767fe6 */
  goto L_10767fe6;
L_10767ee3:;
  /* 10767ee3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767ee7 jne 0x10767f00 */
  if (!C.zf) goto L_10767f00;
  /* 10767ee9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767eed je 0x10767ef9 */
  if (C.zf) goto L_10767ef9;
  /* 10767eef push 1 */
  push32((uint32_t)(0x1u));
  /* 10767ef1 call 0x107683e0 */
  push32(0x10767ef6u); f_107683e0();
  /* 10767ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767ef9:;
  /* 10767ef9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10767efb call 0x10764100 */
  push32(0x10767f00u); f_10764100();
L_10767f00:;
  /* 10767f00 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f04 je 0x10767f12 */
  if (C.zf) goto L_10767f12;
  /* 10767f06 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f0a je 0x10767f12 */
  if (C.zf) goto L_10767f12;
  /* 10767f0c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f10 jne 0x10767f3e */
  if (!C.zf) goto L_10767f3e;
L_10767f12:;
  /* 10767f12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767f15 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10767f18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10767f1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767f1e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10767f25 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f29 jne 0x10767f3e */
  if (!C.zf) goto L_10767f3e;
  /* 10767f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767f2e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10767f31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10767f34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767f37 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10767f3e:;
  /* 10767f3e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f42 jne 0x10767f80 */
  if (!C.zf) goto L_10767f80;
  /* 10767f44 mov eax, dword ptr [0x1078ec78] */
  EAX = (r32((uint32_t)(0x1078ec78)));
  /* 10767f49 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10767f4c jmp 0x10767f57 */
  goto L_10767f57;
L_10767f4e:;
  /* 10767f4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10767f51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767f54 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10767f57:;
  /* 10767f57 mov edx, dword ptr [0x1078ec78] */
  EDX = (r32((uint32_t)(0x1078ec78)));
  /* 10767f5d add edx, dword ptr [0x1078ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1078ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10767f63 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f66 jge 0x10767f7e */
  if ((C.sf==C.of)) goto L_10767f7e;
  /* 10767f68 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10767f6b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10767f6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767f71 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10767f74 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10767f7c jmp 0x10767f4e */
  goto L_10767f4e;
L_10767f7e:;
  /* 10767f7e jmp 0x10767f89 */
  goto L_10767f89;
L_10767f80:;
  /* 10767f80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10767f83 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10767f89:;
  /* 10767f89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f8d je 0x10767f99 */
  if (C.zf) goto L_10767f99;
  /* 10767f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10767f91 call 0x107683e0 */
  push32(0x10767f96u); f_107683e0();
  /* 10767f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767f99:;
  /* 10767f99 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767f9d jne 0x10767fb0 */
  if (!C.zf) goto L_10767fb0;
  /* 10767f9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767fa2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10767fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10767fa6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10767fa8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10767fabu);
  /* 10767fab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10767fae jmp 0x10767fba */
  goto L_10767fba;
L_10767fb0:;
  /* 10767fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10767fb3 push eax */
  push32((uint32_t)(EAX));
  /* 10767fb4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10767fb7u);
  /* 10767fb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10767fba:;
  /* 10767fba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767fbe je 0x10767fcc */
  if (C.zf) goto L_10767fcc;
  /* 10767fc0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767fc4 je 0x10767fcc */
  if (C.zf) goto L_10767fcc;
  /* 10767fc6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767fca jne 0x10767fe4 */
  if (!C.zf) goto L_10767fe4;
L_10767fcc:;
  /* 10767fcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767fcf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10767fd2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10767fd5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10767fd9 jne 0x10767fe4 */
  if (!C.zf) goto L_10767fe4;
  /* 10767fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10767fde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10767fe1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10767fe4:;
  /* 10767fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10767fe6:;
  /* 10767fe6 mov esp, ebp */
  ESP = (EBP);
  /* 10767fe8 pop ebp */
  EBP = (pop32());
  /* 10767fe9 ret  */
  ESPCHK(0x10767de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008020 @ 0x10768020 (91 bytes, 35 insns) */
void f_10768020(void) {
  FTRACE(0x10768020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768020 push ebp */
  push32((uint32_t)(EBP));
  /* 10768021 mov ebp, esp */
  EBP = (ESP);
  /* 10768023 push ecx */
  push32((uint32_t)(ECX));
  /* 10768024 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768027 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076802a:;
  /* 1076802a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076802d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10768030 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768033 je 0x10768053 */
  if (C.zf) goto L_10768053;
  /* 10768035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768038 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076803b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076803e mov ecx, dword ptr [0x1078ec84] */
  ECX = (r32((uint32_t)(0x1078ec84)));
  /* 10768044 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10768047 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076804a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076804c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076804f jae 0x10768053 */
  if (!C.cf) goto L_10768053;
  /* 10768051 jmp 0x1076802a */
  goto L_1076802a;
L_10768053:;
  /* 10768053 mov eax, dword ptr [0x1078ec84] */
  EAX = (r32((uint32_t)(0x1078ec84)));
  /* 10768058 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076805b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076805e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768060 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768063 jae 0x10768075 */
  if (!C.cf) goto L_10768075;
  /* 10768065 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768068 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1076806b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076806e jne 0x10768075 */
  if (!C.zf) goto L_10768075;
  /* 10768070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768073 jmp 0x10768077 */
  goto L_10768077;
L_10768075:;
  /* 10768075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10768077:;
  /* 10768077 mov esp, ebp */
  ESP = (EBP);
  /* 10768079 pop ebp */
  EBP = (pop32());
  /* 1076807a ret  */
  ESPCHK(0x10768020u, _esp0);
  ESP += 4; return;
}

/* FUN_10008080 @ 0x10768080 (13 bytes, 6 insns) */
void f_10768080(void) {
  FTRACE(0x10768080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768080 push ebp */
  push32((uint32_t)(EBP));
  /* 10768081 mov ebp, esp */
  EBP = (ESP);
  /* 10768083 call 0x10764380 */
  push32(0x10768088u); f_10764380();
  /* 10768088 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076808b pop ebp */
  EBP = (pop32());
  /* 1076808c ret  */
  ESPCHK(0x10768080u, _esp0);
  ESP += 4; return;
}

/* FUN_10008090 @ 0x10768090 (13 bytes, 6 insns) */
void f_10768090(void) {
  FTRACE(0x10768090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768090 push ebp */
  push32((uint32_t)(EBP));
  /* 10768091 mov ebp, esp */
  EBP = (ESP);
  /* 10768093 call 0x10764380 */
  push32(0x10768098u); f_10764380();
  /* 10768098 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076809b pop ebp */
  EBP = (pop32());
  /* 1076809c ret  */
  ESPCHK(0x10768090u, _esp0);
  ESP += 4; return;
}

/* FUN_100080a0 @ 0x107680a0 (187 bytes, 54 insns) */
void f_107680a0(void) {
  FTRACE(0x107680a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107680a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107680a1 mov ebp, esp */
  EBP = (ESP);
  /* 107680a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107680a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107680ad cmp dword ptr [0x107906d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107906d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107680b4 jne 0x10768113 */
  if (!C.zf) goto L_10768113;
  /* 107680b6 push 0x1078b424 */
  push32((uint32_t)(0x1078b424u));
  /* 107680bb call dword ptr [0x10793340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793340))), 0x107680c1u);
  /* 107680c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107680c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107680c8 je 0x107680e7 */
  if (C.zf) goto L_107680e7;
  /* 107680ca push 0x1078c028 */
  push32((uint32_t)(0x1078c028u));
  /* 107680cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107680d2 push eax */
  push32((uint32_t)(EAX));
  /* 107680d3 call dword ptr [0x1079333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079333c))), 0x107680d9u);
  /* 107680d9 mov dword ptr [0x107906d4], eax */
  w32((uint32_t)(0x107906d4), (EAX));
  /* 107680de cmp dword ptr [0x107906d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107906d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107680e5 jne 0x107680eb */
  if (!C.zf) goto L_107680eb;
L_107680e7:;
  /* 107680e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107680e9 jmp 0x10768157 */
  goto L_10768157;
L_107680eb:;
  /* 107680eb push 0x1078c018 */
  push32((uint32_t)(0x1078c018u));
  /* 107680f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107680f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107680f4 call dword ptr [0x1079333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079333c))), 0x107680fau);
  /* 107680fa mov dword ptr [0x107906d8], eax */
  w32((uint32_t)(0x107906d8), (EAX));
  /* 107680ff push 0x1078c004 */
  push32((uint32_t)(0x1078c004u));
  /* 10768104 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768107 push edx */
  push32((uint32_t)(EDX));
  /* 10768108 call dword ptr [0x1079333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079333c))), 0x1076810eu);
  /* 1076810e mov dword ptr [0x107906dc], eax */
  w32((uint32_t)(0x107906dc), (EAX));
L_10768113:;
  /* 10768113 cmp dword ptr [0x107906d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107906d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076811a je 0x10768125 */
  if (C.zf) goto L_10768125;
  /* 1076811c call dword ptr [0x107906d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107906d8))), 0x10768122u);
  /* 10768122 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10768125:;
  /* 10768125 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768129 je 0x10768141 */
  if (C.zf) goto L_10768141;
  /* 1076812b cmp dword ptr [0x107906dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107906dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768132 je 0x10768141 */
  if (C.zf) goto L_10768141;
  /* 10768134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768137 push eax */
  push32((uint32_t)(EAX));
  /* 10768138 call dword ptr [0x107906dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107906dc))), 0x1076813eu);
  /* 1076813e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10768141:;
  /* 10768141 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10768144 push ecx */
  push32((uint32_t)(ECX));
  /* 10768145 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768148 push edx */
  push32((uint32_t)(EDX));
  /* 10768149 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076814c push eax */
  push32((uint32_t)(EAX));
  /* 1076814d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768150 push ecx */
  push32((uint32_t)(ECX));
  /* 10768151 call dword ptr [0x107906d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107906d4))), 0x10768157u);
L_10768157:;
  /* 10768157 mov esp, ebp */
  ESP = (EBP);
  /* 10768159 pop ebp */
  EBP = (pop32());
  /* 1076815a ret  */
  ESPCHK(0x107680a0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10768160 (254 bytes, 109 insns) */
void f_10768160(void) {
  FTRACE(0x10768160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768160 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10768164 push edi */
  push32((uint32_t)(EDI));
  /* 10768165 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10768167 je 0x107681e3 */
  if (C.zf) goto L_107681e3;
  /* 10768169 push esi */
  push32((uint32_t)(ESI));
  /* 1076816a push ebx */
  push32((uint32_t)(EBX));
  /* 1076816b mov ebx, ecx */
  EBX = (ECX);
  /* 1076816d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10768171 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10768177 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1076817b jne 0x10768184 */
  if (!C.zf) goto L_10768184;
  /* 1076817d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10768180 jne 0x107681f1 */
  if (!C.zf) goto L_107681f1;
  /* 10768182 jmp 0x107681a5 */
  goto L_107681a5;
L_10768184:;
  /* 10768184 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10768186 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10768187 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10768189 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1076818a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1076818b je 0x107681b2 */
  if (C.zf) goto L_107681b2;
  /* 1076818d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1076818f je 0x107681ba */
  if (C.zf) goto L_107681ba;
  /* 10768191 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10768197 jne 0x10768184 */
  if (!C.zf) goto L_10768184;
  /* 10768199 mov ebx, ecx */
  EBX = (ECX);
  /* 1076819b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076819e jne 0x107681f1 */
  if (!C.zf) goto L_107681f1;
L_107681a0:;
  /* 107681a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 107681a3 je 0x107681b2 */
  if (C.zf) goto L_107681b2;
L_107681a5:;
  /* 107681a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107681a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107681a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107681aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107681ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 107681ad je 0x107681de */
  if (C.zf) goto L_107681de;
  /* 107681af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 107681b0 jne 0x107681a5 */
  if (!C.zf) goto L_107681a5;
L_107681b2:;
  /* 107681b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107681b6 pop ebx */
  EBX = (pop32());
  /* 107681b7 pop esi */
  ESI = (pop32());
  /* 107681b8 pop edi */
  EDI = (pop32());
  /* 107681b9 ret  */
  ESPCHK(0x10768160u, _esp0);
  ESP += 4; return;
L_107681ba:;
  /* 107681ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107681c0 je 0x107681d4 */
  if (C.zf) goto L_107681d4;
L_107681c2:;
  /* 107681c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107681c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107681c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107681c6 je 0x10768256 */
  if (C.zf) goto L_10768256;
  /* 107681cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107681d2 jne 0x107681c2 */
  if (!C.zf) goto L_107681c2;
L_107681d4:;
  /* 107681d4 mov ebx, ecx */
  EBX = (ECX);
  /* 107681d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107681d9 jne 0x10768247 */
  if (!C.zf) goto L_10768247;
L_107681db:;
  /* 107681db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107681dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_107681de:;
  /* 107681de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 107681df jne 0x107681db */
  if (!C.zf) goto L_107681db;
  /* 107681e1 pop ebx */
  EBX = (pop32());
  /* 107681e2 pop esi */
  ESI = (pop32());
L_107681e3:;
  /* 107681e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107681e7 pop edi */
  EDI = (pop32());
  /* 107681e8 ret  */
  ESPCHK(0x10768160u, _esp0);
  ESP += 4; return;
L_107681e9:;
  /* 107681e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 107681eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107681ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107681ef je 0x107681a0 */
  if (C.zf) goto L_107681a0;
L_107681f1:;
  /* 107681f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 107681f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 107681f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107681fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107681fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107681ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10768201 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10768204 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10768209 je 0x107681e9 */
  if (C.zf) goto L_107681e9;
  /* 1076820b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1076820d je 0x1076823b */
  if (C.zf) goto L_1076823b;
  /* 1076820f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10768211 je 0x10768231 */
  if (C.zf) goto L_10768231;
  /* 10768213 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10768219 je 0x10768227 */
  if (C.zf) goto L_10768227;
  /* 1076821b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10768221 jne 0x107681e9 */
  if (!C.zf) goto L_107681e9;
  /* 10768223 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10768225 jmp 0x1076823f */
  goto L_1076823f;
L_10768227:;
  /* 10768227 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1076822d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1076822f jmp 0x1076823f */
  goto L_1076823f;
L_10768231:;
  /* 10768231 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10768237 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10768239 jmp 0x1076823f */
  goto L_1076823f;
L_1076823b:;
  /* 1076823b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076823d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1076823f:;
  /* 1076823f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10768242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10768244 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10768245 je 0x10768251 */
  if (C.zf) goto L_10768251;
L_10768247:;
  /* 10768247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10768249:;
  /* 10768249 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1076824b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076824e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1076824f jne 0x10768249 */
  if (!C.zf) goto L_10768249;
L_10768251:;
  /* 10768251 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10768254 jne 0x107681db */
  if (!C.zf) goto L_107681db;
L_10768256:;
  /* 10768256 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1076825a pop ebx */
  EBX = (pop32());
  /* 1076825b pop esi */
  ESI = (pop32());
  /* 1076825c pop edi */
  EDI = (pop32());
  /* 1076825d ret  */
  ESPCHK(0x10768160u, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x10768260 (55 bytes, 16 insns) */
void f_10768260(void) {
  FTRACE(0x10768260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768260 push ebp */
  push32((uint32_t)(EBP));
  /* 10768261 mov ebp, esp */
  EBP = (ESP);
  /* 10768263 mov eax, dword ptr [0x1078eb84] */
  EAX = (r32((uint32_t)(0x1078eb84)));
  /* 10768268 push eax */
  push32((uint32_t)(EAX));
  /* 10768269 call dword ptr [0x1079336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079336c))), 0x1076826fu);
  /* 1076826f mov ecx, dword ptr [0x1078eb74] */
  ECX = (r32((uint32_t)(0x1078eb74)));
  /* 10768275 push ecx */
  push32((uint32_t)(ECX));
  /* 10768276 call dword ptr [0x1079336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079336c))), 0x1076827cu);
  /* 1076827c mov edx, dword ptr [0x1078eb64] */
  EDX = (r32((uint32_t)(0x1078eb64)));
  /* 10768282 push edx */
  push32((uint32_t)(EDX));
  /* 10768283 call dword ptr [0x1079336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079336c))), 0x10768289u);
  /* 10768289 mov eax, dword ptr [0x1078eb44] */
  EAX = (r32((uint32_t)(0x1078eb44)));
  /* 1076828e push eax */
  push32((uint32_t)(EAX));
  /* 1076828f call dword ptr [0x1079336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079336c))), 0x10768295u);
  /* 10768295 pop ebp */
  EBP = (pop32());
  /* 10768296 ret  */
  ESPCHK(0x10768260u, _esp0);
  ESP += 4; return;
}

/* FUN_100082a0 @ 0x107682a0 (159 bytes, 47 insns) */
void f_107682a0(void) {
  FTRACE(0x107682a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107682a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107682a1 mov ebp, esp */
  EBP = (ESP);
  /* 107682a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107682a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107682ab jmp 0x107682b6 */
  goto L_107682b6;
L_107682ad:;
  /* 107682ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107682b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107682b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107682b6:;
  /* 107682b6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107682ba jge 0x10768309 */
  if ((C.sf==C.of)) goto L_10768309;
  /* 107682bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107682bf cmp dword ptr [ecx*4 + 0x1078eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1078eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107682c7 je 0x10768307 */
  if (C.zf) goto L_10768307;
  /* 107682c9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107682cd je 0x10768307 */
  if (C.zf) goto L_10768307;
  /* 107682cf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107682d3 je 0x10768307 */
  if (C.zf) goto L_10768307;
  /* 107682d5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107682d9 je 0x10768307 */
  if (C.zf) goto L_10768307;
  /* 107682db cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107682df je 0x10768307 */
  if (C.zf) goto L_10768307;
  /* 107682e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107682e4 mov eax, dword ptr [edx*4 + 0x1078eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1078eb40)));
  /* 107682eb push eax */
  push32((uint32_t)(EAX));
  /* 107682ec call dword ptr [0x10793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793384))), 0x107682f2u);
  /* 107682f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107682f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107682f7 mov edx, dword ptr [ecx*4 + 0x1078eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1078eb40)));
  /* 107682fe push edx */
  push32((uint32_t)(EDX));
  /* 107682ff call 0x107653d0 */
  push32(0x10768304u); f_107653d0();
  /* 10768304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10768307:;
  /* 10768307 jmp 0x107682ad */
  goto L_107682ad;
L_10768309:;
  /* 10768309 mov eax, dword ptr [0x1078eb64] */
  EAX = (r32((uint32_t)(0x1078eb64)));
  /* 1076830e push eax */
  push32((uint32_t)(EAX));
  /* 1076830f call dword ptr [0x10793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793384))), 0x10768315u);
  /* 10768315 mov ecx, dword ptr [0x1078eb74] */
  ECX = (r32((uint32_t)(0x1078eb74)));
  /* 1076831b push ecx */
  push32((uint32_t)(ECX));
  /* 1076831c call dword ptr [0x10793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793384))), 0x10768322u);
  /* 10768322 mov edx, dword ptr [0x1078eb84] */
  EDX = (r32((uint32_t)(0x1078eb84)));
  /* 10768328 push edx */
  push32((uint32_t)(EDX));
  /* 10768329 call dword ptr [0x10793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793384))), 0x1076832fu);
  /* 1076832f mov eax, dword ptr [0x1078eb44] */
  EAX = (r32((uint32_t)(0x1078eb44)));
  /* 10768334 push eax */
  push32((uint32_t)(EAX));
  /* 10768335 call dword ptr [0x10793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793384))), 0x1076833bu);
  /* 1076833b mov esp, ebp */
  ESP = (EBP);
  /* 1076833d pop ebp */
  EBP = (pop32());
  /* 1076833e ret  */
  ESPCHK(0x107682a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008340 @ 0x10768340 (151 bytes, 46 insns) */
void f_10768340(void) {
  FTRACE(0x10768340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768340 push ebp */
  push32((uint32_t)(EBP));
  /* 10768341 mov ebp, esp */
  EBP = (ESP);
  /* 10768343 push ecx */
  push32((uint32_t)(ECX));
  /* 10768344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768347 cmp dword ptr [eax*4 + 0x1078eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1078eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076834f jne 0x107683c2 */
  if (!C.zf) goto L_107683c2;
  /* 10768351 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10768356 push 0x1078c034 */
  push32((uint32_t)(0x1078c034u));
  /* 1076835b push 2 */
  push32((uint32_t)(0x2u));
  /* 1076835d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1076835f call 0x10764940 */
  push32(0x10768364u); f_10764940();
  /* 10768364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768367 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076836a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076836e jne 0x1076837a */
  if (!C.zf) goto L_1076837a;
  /* 10768370 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10768372 call 0x107638b0 */
  push32(0x10768377u); f_107638b0();
  /* 10768377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076837a:;
  /* 1076837a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1076837c call 0x10768340 */
  push32(0x10768381u); f_10768340();
  /* 10768381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768387 cmp dword ptr [ecx*4 + 0x1078eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1078eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076838f jne 0x107683aa */
  if (!C.zf) goto L_107683aa;
  /* 10768391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768394 push edx */
  push32((uint32_t)(EDX));
  /* 10768395 call dword ptr [0x1079336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079336c))), 0x1076839bu);
  /* 1076839b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076839e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107683a1 mov dword ptr [eax*4 + 0x1078eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1078eb40), (ECX));
  /* 107683a8 jmp 0x107683b8 */
  goto L_107683b8;
L_107683aa:;
  /* 107683aa push 2 */
  push32((uint32_t)(0x2u));
  /* 107683ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107683af push edx */
  push32((uint32_t)(EDX));
  /* 107683b0 call 0x107653d0 */
  push32(0x107683b5u); f_107653d0();
  /* 107683b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107683b8:;
  /* 107683b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107683ba call 0x107683e0 */
  push32(0x107683bfu); f_107683e0();
  /* 107683bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107683c2:;
  /* 107683c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107683c5 mov ecx, dword ptr [eax*4 + 0x1078eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1078eb40)));
  /* 107683cc push ecx */
  push32((uint32_t)(ECX));
  /* 107683cd call dword ptr [0x10793314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793314))), 0x107683d3u);
  /* 107683d3 mov esp, ebp */
  ESP = (EBP);
  /* 107683d5 pop ebp */
  EBP = (pop32());
  /* 107683d6 ret  */
  ESPCHK(0x10768340u, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x107683e0 (22 bytes, 8 insns) */
void f_107683e0(void) {
  FTRACE(0x107683e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107683e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107683e1 mov ebp, esp */
  EBP = (ESP);
  /* 107683e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107683e6 mov ecx, dword ptr [eax*4 + 0x1078eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1078eb40)));
  /* 107683ed push ecx */
  push32((uint32_t)(ECX));
  /* 107683ee call dword ptr [0x10793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793310))), 0x107683f4u);
  /* 107683f4 pop ebp */
  EBP = (pop32());
  /* 107683f5 ret  */
  ESPCHK(0x107683e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008400 @ 0x10768400 (26 bytes, 10 insns) */
void f_10768400(void) {
  FTRACE(0x10768400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768400 push ebp */
  push32((uint32_t)(EBP));
  /* 10768401 mov ebp, esp */
  EBP = (ESP);
  /* 10768403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768406 push eax */
  push32((uint32_t)(EAX));
  /* 10768407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10768409 call dword ptr [0x10793318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793318))), 0x1076840fu);
  /* 1076840f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10768414 call dword ptr [0x1079334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079334c))), 0x1076841au);
  /* 1076841a pop ebp */
  EBP = (pop32());
  /* 1076841b ret  */
  ESPCHK(0x10768400u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10768420 (446 bytes, 130 insns) */
void f_10768420(void) {
  FTRACE(0x10768420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768420 push ebp */
  push32((uint32_t)(EBP));
  /* 10768421 mov ebp, esp */
  EBP = (ESP);
  /* 10768423 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768426 call 0x10764380 */
  push32(0x1076842bu); f_10764380();
  /* 1076842b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076842e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768431 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10768434 push ecx */
  push32((uint32_t)(ECX));
  /* 10768435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768438 push edx */
  push32((uint32_t)(EDX));
  /* 10768439 call 0x107685e0 */
  push32(0x1076843eu); f_107685e0();
  /* 1076843e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768441 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10768444 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768448 je 0x10768453 */
  if (C.zf) goto L_10768453;
  /* 1076844a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076844d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768451 jne 0x10768462 */
  if (!C.zf) goto L_10768462;
L_10768453:;
  /* 10768453 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768456 push ecx */
  push32((uint32_t)(ECX));
  /* 10768457 call dword ptr [0x10793308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793308))), 0x1076845du);
  /* 1076845d jmp 0x107685da */
  goto L_107685da;
L_10768462:;
  /* 10768462 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10768465 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768469 jne 0x1076847f */
  if (!C.zf) goto L_1076847f;
  /* 1076846b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076846e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10768475 mov eax, 1 */
  EAX = (0x1u);
  /* 1076847a jmp 0x107685da */
  goto L_107685da;
L_1076847f:;
  /* 1076847f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10768482 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768486 jne 0x10768490 */
  if (!C.zf) goto L_10768490;
  /* 10768488 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076848b jmp 0x107685da */
  goto L_107685da;
L_10768490:;
  /* 10768490 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10768493 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10768496 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10768499 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076849c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1076849f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107684a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107684a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107684a8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 107684ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107684ae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107684b2 jne 0x107685b7 */
  if (!C.zf) goto L_107685b7;
  /* 107684b8 mov eax, dword ptr [0x1078ec78] */
  EAX = (r32((uint32_t)(0x1078ec78)));
  /* 107684bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107684c0 jmp 0x107684cb */
  goto L_107684cb;
L_107684c2:;
  /* 107684c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107684c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107684c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107684cb:;
  /* 107684cb mov edx, dword ptr [0x1078ec78] */
  EDX = (r32((uint32_t)(0x1078ec78)));
  /* 107684d1 add edx, dword ptr [0x1078ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1078ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107684d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107684da jge 0x107684f2 */
  if ((C.sf==C.of)) goto L_107684f2;
  /* 107684dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107684df imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107684e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107684e5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107684e8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 107684f0 jmp 0x107684c2 */
  goto L_107684c2;
L_107684f2:;
  /* 107684f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107684f5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 107684f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107684fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107684fe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768504 jne 0x10768515 */
  if (!C.zf) goto L_10768515;
  /* 10768506 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768509 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10768510 jmp 0x1076859d */
  goto L_1076859d;
L_10768515:;
  /* 10768515 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10768518 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076851e jne 0x1076852c */
  if (!C.zf) goto L_1076852c;
  /* 10768520 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768523 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1076852a jmp 0x1076859d */
  goto L_1076859d;
L_1076852c:;
  /* 1076852c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076852f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768535 jne 0x10768543 */
  if (!C.zf) goto L_10768543;
  /* 10768537 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076853a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10768541 jmp 0x1076859d */
  goto L_1076859d;
L_10768543:;
  /* 10768543 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10768546 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076854c jne 0x1076855a */
  if (!C.zf) goto L_1076855a;
  /* 1076854e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768551 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10768558 jmp 0x1076859d */
  goto L_1076859d;
L_1076855a:;
  /* 1076855a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076855d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768563 jne 0x10768571 */
  if (!C.zf) goto L_10768571;
  /* 10768565 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768568 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1076856f jmp 0x1076859d */
  goto L_1076859d;
L_10768571:;
  /* 10768571 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10768574 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076857a jne 0x10768588 */
  if (!C.zf) goto L_10768588;
  /* 1076857c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076857f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10768586 jmp 0x1076859d */
  goto L_1076859d;
L_10768588:;
  /* 10768588 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076858b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768591 jne 0x1076859d */
  if (!C.zf) goto L_1076859d;
  /* 10768593 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768596 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1076859d:;
  /* 1076859d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107685a0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 107685a3 push edx */
  push32((uint32_t)(EDX));
  /* 107685a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 107685a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107685a9u);
  /* 107685a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107685ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107685af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107685b2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 107685b5 jmp 0x107685ce */
  goto L_107685ce;
L_107685b7:;
  /* 107685b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107685ba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 107685c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107685c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107685c7 push ecx */
  push32((uint32_t)(ECX));
  /* 107685c8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x107685cbu);
  /* 107685cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107685ce:;
  /* 107685ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107685d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107685d4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 107685d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107685da:;
  /* 107685da mov esp, ebp */
  ESP = (EBP);
  /* 107685dc pop ebp */
  EBP = (pop32());
  /* 107685dd ret  */
  ESPCHK(0x10768420u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x107685e0 (89 bytes, 35 insns) */
void f_107685e0(void) {
  FTRACE(0x107685e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107685e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107685e1 mov ebp, esp */
  EBP = (ESP);
  /* 107685e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107685e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107685e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107685ea:;
  /* 107685ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107685ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107685ef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107685f2 je 0x10768612 */
  if (C.zf) goto L_10768612;
  /* 107685f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107685f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107685fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107685fd mov ecx, dword ptr [0x1078ec84] */
  ECX = (r32((uint32_t)(0x1078ec84)));
  /* 10768603 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10768606 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768609 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076860b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076860e jae 0x10768612 */
  if (!C.cf) goto L_10768612;
  /* 10768610 jmp 0x107685ea */
  goto L_107685ea;
L_10768612:;
  /* 10768612 mov eax, dword ptr [0x1078ec84] */
  EAX = (r32((uint32_t)(0x1078ec84)));
  /* 10768617 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076861a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076861d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076861f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768622 jae 0x1076862e */
  if (!C.cf) goto L_1076862e;
  /* 10768624 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768627 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10768629 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076862c je 0x10768632 */
  if (C.zf) goto L_10768632;
L_1076862e:;
  /* 1076862e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10768630 jmp 0x10768635 */
  goto L_10768635;
L_10768632:;
  /* 10768632 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10768635:;
  /* 10768635 mov esp, ebp */
  ESP = (EBP);
  /* 10768637 pop ebp */
  EBP = (pop32());
  /* 10768638 ret  */
  ESPCHK(0x107685e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10768640 (48 bytes, 17 insns) */
void f_10768640(void) {
  FTRACE(0x10768640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768640 push ebp */
  push32((uint32_t)(EBP));
  /* 10768641 mov ebp, esp */
  EBP = (ESP);
  /* 10768643 push ecx */
  push32((uint32_t)(ECX));
  /* 10768644 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768646 call 0x10768340 */
  push32(0x1076864bu); f_10768340();
  /* 1076864b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076864e mov eax, dword ptr [0x10790744] */
  EAX = (r32((uint32_t)(0x10790744)));
  /* 10768653 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10768656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768659 mov dword ptr [0x10790744], ecx */
  w32((uint32_t)(0x10790744), (ECX));
  /* 1076865f push 9 */
  push32((uint32_t)(0x9u));
  /* 10768661 call 0x107683e0 */
  push32(0x10768666u); f_107683e0();
  /* 10768666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076866c mov esp, ebp */
  ESP = (EBP);
  /* 1076866e pop ebp */
  EBP = (pop32());
  /* 1076866f ret  */
  ESPCHK(0x10768640u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x10768670 (10 bytes, 5 insns) */
void f_10768670(void) {
  FTRACE(0x10768670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768670 push ebp */
  push32((uint32_t)(EBP));
  /* 10768671 mov ebp, esp */
  EBP = (ESP);
  /* 10768673 mov eax, dword ptr [0x10790744] */
  EAX = (r32((uint32_t)(0x10790744)));
  /* 10768678 pop ebp */
  EBP = (pop32());
  /* 10768679 ret  */
  ESPCHK(0x10768670u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10768680 (45 bytes, 19 insns) */
void f_10768680(void) {
  FTRACE(0x10768680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768680 push ebp */
  push32((uint32_t)(EBP));
  /* 10768681 mov ebp, esp */
  EBP = (ESP);
  /* 10768683 push ecx */
  push32((uint32_t)(ECX));
  /* 10768684 mov eax, dword ptr [0x10790744] */
  EAX = (r32((uint32_t)(0x10790744)));
  /* 10768689 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076868c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768690 je 0x107686a0 */
  if (C.zf) goto L_107686a0;
  /* 10768692 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768695 push ecx */
  push32((uint32_t)(ECX));
  /* 10768696 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10768699u);
  /* 10768699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076869c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076869e jne 0x107686a4 */
  if (!C.zf) goto L_107686a4;
L_107686a0:;
  /* 107686a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107686a2 jmp 0x107686a9 */
  goto L_107686a9;
L_107686a4:;
  /* 107686a4 mov eax, 1 */
  EAX = (0x1u);
L_107686a9:;
  /* 107686a9 mov esp, ebp */
  ESP = (EBP);
  /* 107686ab pop ebp */
  EBP = (pop32());
  /* 107686ac ret  */
  ESPCHK(0x10768680u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x107686b0 (88 bytes, 40 insns) */
void f_107686b0(void) {
  FTRACE(0x107686b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107686b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 107686b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 107686b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107686ba je 0x10768703 */
  if (C.zf) goto L_10768703;
  /* 107686bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107686be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 107686c2 push edi */
  push32((uint32_t)(EDI));
  /* 107686c3 mov edi, ecx */
  EDI = (ECX);
  /* 107686c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107686c8 jb 0x107686f7 */
  if (C.cf) goto L_107686f7;
  /* 107686ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107686cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 107686cf je 0x107686d9 */
  if (C.zf) goto L_107686d9;
  /* 107686d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_107686d3:;
  /* 107686d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107686d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107686d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107686d7 jne 0x107686d3 */
  if (!C.zf) goto L_107686d3;
L_107686d9:;
  /* 107686d9 mov ecx, eax */
  ECX = (EAX);
  /* 107686db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 107686de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107686e0 mov ecx, eax */
  ECX = (EAX);
  /* 107686e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107686e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107686e7 mov ecx, edx */
  ECX = (EDX);
  /* 107686e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107686ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107686ef je 0x107686f7 */
  if (C.zf) goto L_107686f7;
  /* 107686f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 107686f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107686f5 je 0x107686fd */
  if (C.zf) goto L_107686fd;
L_107686f7:;
  /* 107686f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107686f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107686fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 107686fb jne 0x107686f7 */
  if (!C.zf) goto L_107686f7;
L_107686fd:;
  /* 107686fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10768701 pop edi */
  EDI = (pop32());
  /* 10768702 ret  */
  ESPCHK(0x107686b0u, _esp0);
  ESP += 4; return;
L_10768703:;
  /* 10768703 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10768707 ret  */
  ESPCHK(0x107686b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x10768710 (23 bytes, 10 insns) */
void f_10768710(void) {
  FTRACE(0x10768710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768710 push ebp */
  push32((uint32_t)(EBP));
  /* 10768711 mov ebp, esp */
  EBP = (ESP);
  /* 10768713 mov eax, dword ptr [0x10790740] */
  EAX = (r32((uint32_t)(0x10790740)));
  /* 10768718 push eax */
  push32((uint32_t)(EAX));
  /* 10768719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076871c push ecx */
  push32((uint32_t)(ECX));
  /* 1076871d call 0x10768730 */
  push32(0x10768722u); f_10768730();
  /* 10768722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768725 pop ebp */
  EBP = (pop32());
  /* 10768726 ret  */
  ESPCHK(0x10768710u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10768730 (87 bytes, 34 insns) */
void f_10768730(void) {
  FTRACE(0x10768730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768730 push ebp */
  push32((uint32_t)(EBP));
  /* 10768731 mov ebp, esp */
  EBP = (ESP);
  /* 10768733 push ecx */
  push32((uint32_t)(ECX));
  /* 10768734 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768738 jbe 0x1076873e */
  if ((C.cf||C.zf)) goto L_1076873e;
  /* 1076873a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076873c jmp 0x10768783 */
  goto L_10768783;
L_1076873e:;
  /* 1076873e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768742 ja 0x10768755 */
  if ((!C.cf&&!C.zf)) goto L_10768755;
  /* 10768744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768747 push eax */
  push32((uint32_t)(EAX));
  /* 10768748 call 0x10768790 */
  push32(0x1076874du); f_10768790();
  /* 1076874d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768750 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10768753 jmp 0x1076875c */
  goto L_1076875c;
L_10768755:;
  /* 10768755 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1076875c:;
  /* 1076875c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768760 jne 0x10768768 */
  if (!C.zf) goto L_10768768;
  /* 10768762 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768766 jne 0x1076876d */
  if (!C.zf) goto L_1076876d;
L_10768768:;
  /* 10768768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076876b jmp 0x10768783 */
  goto L_10768783;
L_1076876d:;
  /* 1076876d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768770 push ecx */
  push32((uint32_t)(ECX));
  /* 10768771 call 0x10768680 */
  push32(0x10768776u); f_10768680();
  /* 10768776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076877b jne 0x10768781 */
  if (!C.zf) goto L_10768781;
  /* 1076877d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076877f jmp 0x10768783 */
  goto L_10768783;
L_10768781:;
  /* 10768781 jmp 0x1076873e */
  goto L_1076873e;
L_10768783:;
  /* 10768783 mov esp, ebp */
  ESP = (EBP);
  /* 10768785 pop ebp */
  EBP = (pop32());
  /* 10768786 ret  */
  ESPCHK(0x10768730u, _esp0);
  ESP += 4; return;
}

/* FUN_10008790 @ 0x10768790 (109 bytes, 37 insns) */
void f_10768790(void) {
  FTRACE(0x10768790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768790 push ebp */
  push32((uint32_t)(EBP));
  /* 10768791 mov ebp, esp */
  EBP = (ESP);
  /* 10768793 push ecx */
  push32((uint32_t)(ECX));
  /* 10768794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768797 cmp eax, dword ptr [0x1078ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076879d ja 0x107687cd */
  if ((!C.cf&&!C.zf)) goto L_107687cd;
  /* 1076879f push 9 */
  push32((uint32_t)(0x9u));
  /* 107687a1 call 0x10768340 */
  push32(0x107687a6u); f_10768340();
  /* 107687a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107687a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107687ac push ecx */
  push32((uint32_t)(ECX));
  /* 107687ad call 0x107692d0 */
  push32(0x107687b2u); f_107692d0();
  /* 107687b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107687b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107687b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 107687ba call 0x107683e0 */
  push32(0x107687bfu); f_107683e0();
  /* 107687bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107687c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107687c6 je 0x107687cd */
  if (C.zf) goto L_107687cd;
  /* 107687c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107687cb jmp 0x107687f9 */
  goto L_107687f9;
L_107687cd:;
  /* 107687cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107687d1 jne 0x107687da */
  if (!C.zf) goto L_107687da;
  /* 107687d3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_107687da:;
  /* 107687da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107687dd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107687e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107687e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107687e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107687e9 push eax */
  push32((uint32_t)(EAX));
  /* 107687ea push 0 */
  push32((uint32_t)(0x0u));
  /* 107687ec mov ecx, dword ptr [0x10791f0c] */
  ECX = (r32((uint32_t)(0x10791f0c)));
  /* 107687f2 push ecx */
  push32((uint32_t)(ECX));
  /* 107687f3 call dword ptr [0x10793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793304))), 0x107687f9u);
L_107687f9:;
  /* 107687f9 mov esp, ebp */
  ESP = (EBP);
  /* 107687fb pop ebp */
  EBP = (pop32());
  /* 107687fc ret  */
  ESPCHK(0x10768790u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x10768800 (10 bytes, 5 insns) */
void f_10768800(void) {
  FTRACE(0x10768800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768800 push ebp */
  push32((uint32_t)(EBP));
  /* 10768801 mov ebp, esp */
  EBP = (ESP);
  /* 10768803 mov eax, 1 */
  EAX = (0x1u);
  /* 10768808 pop ebp */
  EBP = (pop32());
  /* 10768809 ret  */
  ESPCHK(0x10768800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x10768810 (173 bytes, 59 insns) */
void f_10768810(void) {
  FTRACE(0x10768810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768810 push ebp */
  push32((uint32_t)(EBP));
  /* 10768811 mov ebp, esp */
  EBP = (ESP);
  /* 10768813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768816 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076881a jbe 0x10768823 */
  if ((C.cf||C.zf)) goto L_10768823;
  /* 1076881c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076881e jmp 0x107688b9 */
  goto L_107688b9;
L_10768823:;
  /* 10768823 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768825 call 0x10768340 */
  push32(0x1076882au); f_10768340();
  /* 1076882a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076882d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768830 push eax */
  push32((uint32_t)(EAX));
  /* 10768831 call 0x10768c40 */
  push32(0x10768836u); f_10768c40();
  /* 10768836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768839 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076883c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768840 je 0x10768881 */
  if (C.zf) goto L_10768881;
  /* 10768842 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10768849 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076884c cmp ecx, dword ptr [0x1078ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1078ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768852 ja 0x10768872 */
  if ((!C.cf&&!C.zf)) goto L_10768872;
  /* 10768854 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768857 push edx */
  push32((uint32_t)(EDX));
  /* 10768858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076885b push eax */
  push32((uint32_t)(EAX));
  /* 1076885c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076885f push ecx */
  push32((uint32_t)(ECX));
  /* 10768860 call 0x10769b10 */
  push32(0x10768865u); f_10769b10();
  /* 10768865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076886a je 0x10768872 */
  if (C.zf) goto L_10768872;
  /* 1076886c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076886f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10768872:;
  /* 10768872 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768874 call 0x107683e0 */
  push32(0x10768879u); f_107683e0();
  /* 10768879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076887c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076887f jmp 0x107688b9 */
  goto L_107688b9;
L_10768881:;
  /* 10768881 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768883 call 0x107683e0 */
  push32(0x10768888u); f_107683e0();
  /* 10768888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076888b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076888f jne 0x10768898 */
  if (!C.zf) goto L_10768898;
  /* 10768891 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10768898:;
  /* 10768898 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076889b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076889e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 107688a0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107688a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107688a6 push ecx */
  push32((uint32_t)(ECX));
  /* 107688a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107688aa push edx */
  push32((uint32_t)(EDX));
  /* 107688ab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107688ad mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 107688b2 push eax */
  push32((uint32_t)(EAX));
  /* 107688b3 call dword ptr [0x1079330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079330c))), 0x107688b9u);
L_107688b9:;
  /* 107688b9 mov esp, ebp */
  ESP = (EBP);
  /* 107688bb pop ebp */
  EBP = (pop32());
  /* 107688bc ret  */
  ESPCHK(0x10768810u, _esp0);
  ESP += 4; return;
}

