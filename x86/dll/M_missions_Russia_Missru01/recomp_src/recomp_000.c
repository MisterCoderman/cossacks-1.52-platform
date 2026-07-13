#include "recomp.h"

/* thunk_FUN_100049f0 @ 0x10981005 (5 bytes, 1 insns) */
void f_10981005(void) {
  FTRACE(0x10981005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10981005 jmp 0x109849f0 */
  f_109849f0(); return;
}

/* OnInit @ 0x1098100a (5 bytes, 1 insns) */
void f_1098100a(void) {
  FTRACE(0x1098100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098100a jmp 0x109810a0 */
  f_109810a0(); return;
}

/* thunk_FUN_10004a40 @ 0x1098100f (5 bytes, 1 insns) */
void f_1098100f(void) {
  FTRACE(0x1098100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1098100f jmp 0x10984a40 */
  f_10984a40(); return;
}

/* thunk_FUN_10001040 @ 0x10981014 (5 bytes, 1 insns) */
void f_10981014(void) {
  FTRACE(0x10981014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10981014 jmp 0x10981040 */
  f_10981040(); return;
}

/* ProcessScenary @ 0x10981019 (5 bytes, 1 insns) */
void f_10981019(void) {
  FTRACE(0x10981019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10981019 jmp 0x109819b0 */
  f_109819b0(); return;
}

/* FUN_10001040 @ 0x10981040 (67 bytes, 26 insns) */
void f_10981040(void) {
  FTRACE(0x10981040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10981040 push ebp */
  push32((uint32_t)(EBP));
  /* 10981041 mov ebp, esp */
  EBP = (ESP);
  /* 10981043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10981046 push ebx */
  push32((uint32_t)(EBX));
  /* 10981047 push esi */
  push32((uint32_t)(ESI));
  /* 10981048 push edi */
  push32((uint32_t)(EDI));
  /* 10981049 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1098104c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10981051 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10981056 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10981058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098105b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098105e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981062 je 0x10981066 */
  if (C.zf) goto L_10981066;
  /* 10981064 jmp 0x1098106b */
  goto L_1098106b;
L_10981066:;
  /* 10981066 call 0x1098100a */
  push32(0x1098106bu); f_1098100a();
L_1098106b:;
  /* 1098106b mov eax, 1 */
  EAX = (0x1u);
  /* 10981070 pop edi */
  EDI = (pop32());
  /* 10981071 pop esi */
  ESI = (pop32());
  /* 10981072 pop ebx */
  EBX = (pop32());
  /* 10981073 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981076 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981078 call 0x10984b90 */
  push32(0x1098107du); f_10984b90();
  /* 1098107d mov esp, ebp */
  ESP = (EBP);
  /* 1098107f pop ebp */
  EBP = (pop32());
  /* 10981080 ret 0xc */
  ESPCHK(0x10981040u, _esp0);
  ESP += 16; return;
}

/* FUN_100010a0 @ 0x109810a0 (1850 bytes, 481 insns) */
void f_109810a0(void) {
  FTRACE(0x109810a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109810a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109810a1 mov ebp, esp */
  EBP = (ESP);
  /* 109810a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109810a6 push ebx */
  push32((uint32_t)(EBX));
  /* 109810a7 push esi */
  push32((uint32_t)(ESI));
  /* 109810a8 push edi */
  push32((uint32_t)(EDI));
  /* 109810a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 109810ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 109810b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 109810b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109810b8 mov esi, esp */
  ESI = (ESP);
  /* 109810ba push 0x109ac250 */
  push32((uint32_t)(0x109ac250u));
  /* 109810bf push 0x109b14f8 */
  push32((uint32_t)(0x109b14f8u));
  /* 109810c4 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109810cau);
  /* 109810ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109810cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109810cf call 0x10984b90 */
  push32(0x109810d4u); f_10984b90();
  /* 109810d4 mov esi, esp */
  ESI = (ESP);
  /* 109810d6 push 0x109ac248 */
  push32((uint32_t)(0x109ac248u));
  /* 109810db push 0x109b1500 */
  push32((uint32_t)(0x109b1500u));
  /* 109810e0 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109810e6u);
  /* 109810e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109810e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109810eb call 0x10984b90 */
  push32(0x109810f0u); f_10984b90();
  /* 109810f0 mov esi, esp */
  ESI = (ESP);
  /* 109810f2 push 0x109ac240 */
  push32((uint32_t)(0x109ac240u));
  /* 109810f7 push 0x109b1508 */
  push32((uint32_t)(0x109b1508u));
  /* 109810fc call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981102u);
  /* 10981102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981107 call 0x10984b90 */
  push32(0x1098110cu); f_10984b90();
  /* 1098110c mov esi, esp */
  ESI = (ESP);
  /* 1098110e push 0x109ac238 */
  push32((uint32_t)(0x109ac238u));
  /* 10981113 push 0x109b14d0 */
  push32((uint32_t)(0x109b14d0u));
  /* 10981118 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098111eu);
  /* 1098111e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981123 call 0x10984b90 */
  push32(0x10981128u); f_10984b90();
  /* 10981128 mov esi, esp */
  ESI = (ESP);
  /* 1098112a push 0x109ac230 */
  push32((uint32_t)(0x109ac230u));
  /* 1098112f push 0x109b1510 */
  push32((uint32_t)(0x109b1510u));
  /* 10981134 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098113au);
  /* 1098113a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098113d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098113f call 0x10984b90 */
  push32(0x10981144u); f_10984b90();
  /* 10981144 mov esi, esp */
  ESI = (ESP);
  /* 10981146 push 0x109ac228 */
  push32((uint32_t)(0x109ac228u));
  /* 1098114b push 0x109b1518 */
  push32((uint32_t)(0x109b1518u));
  /* 10981150 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981156u);
  /* 10981156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098115b call 0x10984b90 */
  push32(0x10981160u); f_10984b90();
  /* 10981160 mov esi, esp */
  ESI = (ESP);
  /* 10981162 push 0x109ac220 */
  push32((uint32_t)(0x109ac220u));
  /* 10981167 push 0x109b1520 */
  push32((uint32_t)(0x109b1520u));
  /* 1098116c call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981172u);
  /* 10981172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981177 call 0x10984b90 */
  push32(0x1098117cu); f_10984b90();
  /* 1098117c mov esi, esp */
  ESI = (ESP);
  /* 1098117e push 0x109ac218 */
  push32((uint32_t)(0x109ac218u));
  /* 10981183 push 0x109b1528 */
  push32((uint32_t)(0x109b1528u));
  /* 10981188 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098118eu);
  /* 1098118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981191 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981193 call 0x10984b90 */
  push32(0x10981198u); f_10984b90();
  /* 10981198 mov esi, esp */
  ESI = (ESP);
  /* 1098119a push 0x109ac210 */
  push32((uint32_t)(0x109ac210u));
  /* 1098119f push 0x109b1530 */
  push32((uint32_t)(0x109b1530u));
  /* 109811a4 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109811aau);
  /* 109811aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109811ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109811af call 0x10984b90 */
  push32(0x109811b4u); f_10984b90();
  /* 109811b4 mov esi, esp */
  ESI = (ESP);
  /* 109811b6 push 0x109ac208 */
  push32((uint32_t)(0x109ac208u));
  /* 109811bb push 0x109b1538 */
  push32((uint32_t)(0x109b1538u));
  /* 109811c0 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109811c6u);
  /* 109811c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109811c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109811cb call 0x10984b90 */
  push32(0x109811d0u); f_10984b90();
  /* 109811d0 mov esi, esp */
  ESI = (ESP);
  /* 109811d2 push 0x109ac200 */
  push32((uint32_t)(0x109ac200u));
  /* 109811d7 push 0x109b1440 */
  push32((uint32_t)(0x109b1440u));
  /* 109811dc call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109811e2u);
  /* 109811e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109811e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109811e7 call 0x10984b90 */
  push32(0x109811ecu); f_10984b90();
  /* 109811ec mov esi, esp */
  ESI = (ESP);
  /* 109811ee push 0x109ac1f8 */
  push32((uint32_t)(0x109ac1f8u));
  /* 109811f3 push 0x109b1438 */
  push32((uint32_t)(0x109b1438u));
  /* 109811f8 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109811feu);
  /* 109811fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981203 call 0x10984b90 */
  push32(0x10981208u); f_10984b90();
  /* 10981208 mov esi, esp */
  ESI = (ESP);
  /* 1098120a push 0x109ac1f0 */
  push32((uint32_t)(0x109ac1f0u));
  /* 1098120f push 0x109b1450 */
  push32((uint32_t)(0x109b1450u));
  /* 10981214 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098121au);
  /* 1098121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098121d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098121f call 0x10984b90 */
  push32(0x10981224u); f_10984b90();
  /* 10981224 mov esi, esp */
  ESI = (ESP);
  /* 10981226 push 0x109ac1e8 */
  push32((uint32_t)(0x109ac1e8u));
  /* 1098122b push 0x109b1448 */
  push32((uint32_t)(0x109b1448u));
  /* 10981230 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981236u);
  /* 10981236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981239 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098123b call 0x10984b90 */
  push32(0x10981240u); f_10984b90();
  /* 10981240 mov esi, esp */
  ESI = (ESP);
  /* 10981242 push 0x109ac1e0 */
  push32((uint32_t)(0x109ac1e0u));
  /* 10981247 push 0x109b1470 */
  push32((uint32_t)(0x109b1470u));
  /* 1098124c call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981252u);
  /* 10981252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981257 call 0x10984b90 */
  push32(0x1098125cu); f_10984b90();
  /* 1098125c mov esi, esp */
  ESI = (ESP);
  /* 1098125e push 0x109ac1d8 */
  push32((uint32_t)(0x109ac1d8u));
  /* 10981263 push 0x109b1460 */
  push32((uint32_t)(0x109b1460u));
  /* 10981268 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098126eu);
  /* 1098126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981273 call 0x10984b90 */
  push32(0x10981278u); f_10984b90();
  /* 10981278 mov esi, esp */
  ESI = (ESP);
  /* 1098127a push 0x109ac1d0 */
  push32((uint32_t)(0x109ac1d0u));
  /* 1098127f push 0x109b1490 */
  push32((uint32_t)(0x109b1490u));
  /* 10981284 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098128au);
  /* 1098128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098128d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098128f call 0x10984b90 */
  push32(0x10981294u); f_10984b90();
  /* 10981294 mov esi, esp */
  ESI = (ESP);
  /* 10981296 push 0x109ac1c8 */
  push32((uint32_t)(0x109ac1c8u));
  /* 1098129b push 0x109b1480 */
  push32((uint32_t)(0x109b1480u));
  /* 109812a0 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109812a6u);
  /* 109812a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109812a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109812ab call 0x10984b90 */
  push32(0x109812b0u); f_10984b90();
  /* 109812b0 mov esi, esp */
  ESI = (ESP);
  /* 109812b2 push 0x109ac1c0 */
  push32((uint32_t)(0x109ac1c0u));
  /* 109812b7 push 0x109b14b0 */
  push32((uint32_t)(0x109b14b0u));
  /* 109812bc call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109812c2u);
  /* 109812c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109812c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109812c7 call 0x10984b90 */
  push32(0x109812ccu); f_10984b90();
  /* 109812cc mov esi, esp */
  ESI = (ESP);
  /* 109812ce push 0x109ac1b8 */
  push32((uint32_t)(0x109ac1b8u));
  /* 109812d3 push 0x109b14a0 */
  push32((uint32_t)(0x109b14a0u));
  /* 109812d8 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109812deu);
  /* 109812de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109812e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109812e3 call 0x10984b90 */
  push32(0x109812e8u); f_10984b90();
  /* 109812e8 mov esi, esp */
  ESI = (ESP);
  /* 109812ea push 0x109ac1b0 */
  push32((uint32_t)(0x109ac1b0u));
  /* 109812ef push 0x109b1468 */
  push32((uint32_t)(0x109b1468u));
  /* 109812f4 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109812fau);
  /* 109812fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109812fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109812ff call 0x10984b90 */
  push32(0x10981304u); f_10984b90();
  /* 10981304 mov esi, esp */
  ESI = (ESP);
  /* 10981306 push 0x109ac1a8 */
  push32((uint32_t)(0x109ac1a8u));
  /* 1098130b push 0x109b1458 */
  push32((uint32_t)(0x109b1458u));
  /* 10981310 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981316u);
  /* 10981316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098131b call 0x10984b90 */
  push32(0x10981320u); f_10984b90();
  /* 10981320 mov esi, esp */
  ESI = (ESP);
  /* 10981322 push 0x109ac1a0 */
  push32((uint32_t)(0x109ac1a0u));
  /* 10981327 push 0x109b1488 */
  push32((uint32_t)(0x109b1488u));
  /* 1098132c call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981332u);
  /* 10981332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981337 call 0x10984b90 */
  push32(0x1098133cu); f_10984b90();
  /* 1098133c mov esi, esp */
  ESI = (ESP);
  /* 1098133e push 0x109ac198 */
  push32((uint32_t)(0x109ac198u));
  /* 10981343 push 0x109b1478 */
  push32((uint32_t)(0x109b1478u));
  /* 10981348 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098134eu);
  /* 1098134e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981353 call 0x10984b90 */
  push32(0x10981358u); f_10984b90();
  /* 10981358 mov esi, esp */
  ESI = (ESP);
  /* 1098135a push 0x109ac190 */
  push32((uint32_t)(0x109ac190u));
  /* 1098135f push 0x109b14a8 */
  push32((uint32_t)(0x109b14a8u));
  /* 10981364 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x1098136au);
  /* 1098136a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098136d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098136f call 0x10984b90 */
  push32(0x10981374u); f_10984b90();
  /* 10981374 mov esi, esp */
  ESI = (ESP);
  /* 10981376 push 0x109ac188 */
  push32((uint32_t)(0x109ac188u));
  /* 1098137b push 0x109b1498 */
  push32((uint32_t)(0x109b1498u));
  /* 10981380 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x10981386u);
  /* 10981386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981389 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098138b call 0x10984b90 */
  push32(0x10981390u); f_10984b90();
  /* 10981390 mov esi, esp */
  ESI = (ESP);
  /* 10981392 push 0x109ac17c */
  push32((uint32_t)(0x109ac17cu));
  /* 10981397 push 0x109b15c8 */
  push32((uint32_t)(0x109b15c8u));
  /* 1098139c call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109813a2u);
  /* 109813a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109813a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109813a7 call 0x10984b90 */
  push32(0x109813acu); f_10984b90();
  /* 109813ac mov esi, esp */
  ESI = (ESP);
  /* 109813ae push 0x109ac174 */
  push32((uint32_t)(0x109ac174u));
  /* 109813b3 push 0x109b14c0 */
  push32((uint32_t)(0x109b14c0u));
  /* 109813b8 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109813beu);
  /* 109813be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109813c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109813c3 call 0x10984b90 */
  push32(0x109813c8u); f_10984b90();
  /* 109813c8 mov esi, esp */
  ESI = (ESP);
  /* 109813ca push 0x109ac16c */
  push32((uint32_t)(0x109ac16cu));
  /* 109813cf push 0x109b14b8 */
  push32((uint32_t)(0x109b14b8u));
  /* 109813d4 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109813dau);
  /* 109813da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109813dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109813df call 0x10984b90 */
  push32(0x109813e4u); f_10984b90();
  /* 109813e4 mov esi, esp */
  ESI = (ESP);
  /* 109813e6 push 0x109ac164 */
  push32((uint32_t)(0x109ac164u));
  /* 109813eb push 0x109b14c8 */
  push32((uint32_t)(0x109b14c8u));
  /* 109813f0 call dword ptr [0x109b44b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b4))), 0x109813f6u);
  /* 109813f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109813f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109813fb call 0x10984b90 */
  push32(0x10981400u); f_10984b90();
  /* 10981400 mov esi, esp */
  ESI = (ESP);
  /* 10981402 push 0x109ac15c */
  push32((uint32_t)(0x109ac15cu));
  /* 10981407 push 0x109b13e8 */
  push32((uint32_t)(0x109b13e8u));
  /* 1098140c call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981412u);
  /* 10981412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981417 call 0x10984b90 */
  push32(0x1098141cu); f_10984b90();
  /* 1098141c mov esi, esp */
  ESI = (ESP);
  /* 1098141e push 0x109ac154 */
  push32((uint32_t)(0x109ac154u));
  /* 10981423 push 0x109b13f8 */
  push32((uint32_t)(0x109b13f8u));
  /* 10981428 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098142eu);
  /* 1098142e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981433 call 0x10984b90 */
  push32(0x10981438u); f_10984b90();
  /* 10981438 mov esi, esp */
  ESI = (ESP);
  /* 1098143a push 0x109ac14c */
  push32((uint32_t)(0x109ac14cu));
  /* 1098143f push 0x109b13f0 */
  push32((uint32_t)(0x109b13f0u));
  /* 10981444 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098144au);
  /* 1098144a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098144d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098144f call 0x10984b90 */
  push32(0x10981454u); f_10984b90();
  /* 10981454 mov esi, esp */
  ESI = (ESP);
  /* 10981456 push 0x109ac144 */
  push32((uint32_t)(0x109ac144u));
  /* 1098145b push 0x109b1408 */
  push32((uint32_t)(0x109b1408u));
  /* 10981460 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981466u);
  /* 10981466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098146b call 0x10984b90 */
  push32(0x10981470u); f_10984b90();
  /* 10981470 mov esi, esp */
  ESI = (ESP);
  /* 10981472 push 0x109ac13c */
  push32((uint32_t)(0x109ac13cu));
  /* 10981477 push 0x109b1400 */
  push32((uint32_t)(0x109b1400u));
  /* 1098147c call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981482u);
  /* 10981482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981487 call 0x10984b90 */
  push32(0x1098148cu); f_10984b90();
  /* 1098148c mov esi, esp */
  ESI = (ESP);
  /* 1098148e push 0x109ac134 */
  push32((uint32_t)(0x109ac134u));
  /* 10981493 push 0x109b1418 */
  push32((uint32_t)(0x109b1418u));
  /* 10981498 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098149eu);
  /* 1098149e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109814a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109814a3 call 0x10984b90 */
  push32(0x109814a8u); f_10984b90();
  /* 109814a8 mov esi, esp */
  ESI = (ESP);
  /* 109814aa push 0x109ac12c */
  push32((uint32_t)(0x109ac12cu));
  /* 109814af push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 109814b4 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x109814bau);
  /* 109814ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109814bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109814bf call 0x10984b90 */
  push32(0x109814c4u); f_10984b90();
  /* 109814c4 mov esi, esp */
  ESI = (ESP);
  /* 109814c6 push 0x109ac124 */
  push32((uint32_t)(0x109ac124u));
  /* 109814cb push 0x109b1428 */
  push32((uint32_t)(0x109b1428u));
  /* 109814d0 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x109814d6u);
  /* 109814d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109814d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109814db call 0x10984b90 */
  push32(0x109814e0u); f_10984b90();
  /* 109814e0 mov esi, esp */
  ESI = (ESP);
  /* 109814e2 push 0x109ac11c */
  push32((uint32_t)(0x109ac11cu));
  /* 109814e7 push 0x109b1420 */
  push32((uint32_t)(0x109b1420u));
  /* 109814ec call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x109814f2u);
  /* 109814f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109814f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109814f7 call 0x10984b90 */
  push32(0x109814fcu); f_10984b90();
  /* 109814fc mov esi, esp */
  ESI = (ESP);
  /* 109814fe push 0x109ac110 */
  push32((uint32_t)(0x109ac110u));
  /* 10981503 push 0x109b1548 */
  push32((uint32_t)(0x109b1548u));
  /* 10981508 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098150eu);
  /* 1098150e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981513 call 0x10984b90 */
  push32(0x10981518u); f_10984b90();
  /* 10981518 mov esi, esp */
  ESI = (ESP);
  /* 1098151a push 0x109ac104 */
  push32((uint32_t)(0x109ac104u));
  /* 1098151f push 0x109b15a8 */
  push32((uint32_t)(0x109b15a8u));
  /* 10981524 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098152au);
  /* 1098152a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098152d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098152f call 0x10984b90 */
  push32(0x10981534u); f_10984b90();
  /* 10981534 mov esi, esp */
  ESI = (ESP);
  /* 10981536 push 0x109ac0f8 */
  push32((uint32_t)(0x109ac0f8u));
  /* 1098153b push 0x109b15b0 */
  push32((uint32_t)(0x109b15b0u));
  /* 10981540 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981546u);
  /* 10981546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098154b call 0x10984b90 */
  push32(0x10981550u); f_10984b90();
  /* 10981550 mov esi, esp */
  ESI = (ESP);
  /* 10981552 push 0x109ac0ec */
  push32((uint32_t)(0x109ac0ecu));
  /* 10981557 push 0x109b1590 */
  push32((uint32_t)(0x109b1590u));
  /* 1098155c call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981562u);
  /* 10981562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981567 call 0x10984b90 */
  push32(0x1098156cu); f_10984b90();
  /* 1098156c mov esi, esp */
  ESI = (ESP);
  /* 1098156e push 0x109ac0e0 */
  push32((uint32_t)(0x109ac0e0u));
  /* 10981573 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10981578 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098157eu);
  /* 1098157e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981583 call 0x10984b90 */
  push32(0x10981588u); f_10984b90();
  /* 10981588 mov esi, esp */
  ESI = (ESP);
  /* 1098158a push 0x109ac0d4 */
  push32((uint32_t)(0x109ac0d4u));
  /* 1098158f push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981594 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098159au);
  /* 1098159a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098159d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098159f call 0x10984b90 */
  push32(0x109815a4u); f_10984b90();
  /* 109815a4 mov esi, esp */
  ESI = (ESP);
  /* 109815a6 push 0x109ac0c8 */
  push32((uint32_t)(0x109ac0c8u));
  /* 109815ab push 0x109b1588 */
  push32((uint32_t)(0x109b1588u));
  /* 109815b0 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x109815b6u);
  /* 109815b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109815b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109815bb call 0x10984b90 */
  push32(0x109815c0u); f_10984b90();
  /* 109815c0 mov esi, esp */
  ESI = (ESP);
  /* 109815c2 push 0x109ac0bc */
  push32((uint32_t)(0x109ac0bcu));
  /* 109815c7 push 0x109b1558 */
  push32((uint32_t)(0x109b1558u));
  /* 109815cc call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x109815d2u);
  /* 109815d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109815d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109815d7 call 0x10984b90 */
  push32(0x109815dcu); f_10984b90();
  /* 109815dc mov esi, esp */
  ESI = (ESP);
  /* 109815de push 0x109ac0b0 */
  push32((uint32_t)(0x109ac0b0u));
  /* 109815e3 push 0x109b1568 */
  push32((uint32_t)(0x109b1568u));
  /* 109815e8 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x109815eeu);
  /* 109815ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109815f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109815f3 call 0x10984b90 */
  push32(0x109815f8u); f_10984b90();
  /* 109815f8 mov esi, esp */
  ESI = (ESP);
  /* 109815fa push 0x109ac0a4 */
  push32((uint32_t)(0x109ac0a4u));
  /* 109815ff push 0x109b1598 */
  push32((uint32_t)(0x109b1598u));
  /* 10981604 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098160au);
  /* 1098160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098160f call 0x10984b90 */
  push32(0x10981614u); f_10984b90();
  /* 10981614 mov esi, esp */
  ESI = (ESP);
  /* 10981616 push 0x109ac098 */
  push32((uint32_t)(0x109ac098u));
  /* 1098161b push 0x109b1570 */
  push32((uint32_t)(0x109b1570u));
  /* 10981620 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981626u);
  /* 10981626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098162b call 0x10984b90 */
  push32(0x10981630u); f_10984b90();
  /* 10981630 mov esi, esp */
  ESI = (ESP);
  /* 10981632 push 0x109ac08c */
  push32((uint32_t)(0x109ac08cu));
  /* 10981637 push 0x109b1580 */
  push32((uint32_t)(0x109b1580u));
  /* 1098163c call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981642u);
  /* 10981642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981647 call 0x10984b90 */
  push32(0x1098164cu); f_10984b90();
  /* 1098164c mov esi, esp */
  ESI = (ESP);
  /* 1098164e push 0x109ac080 */
  push32((uint32_t)(0x109ac080u));
  /* 10981653 push 0x109b1550 */
  push32((uint32_t)(0x109b1550u));
  /* 10981658 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098165eu);
  /* 1098165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981663 call 0x10984b90 */
  push32(0x10981668u); f_10984b90();
  /* 10981668 mov esi, esp */
  ESI = (ESP);
  /* 1098166a push 0x109ac074 */
  push32((uint32_t)(0x109ac074u));
  /* 1098166f push 0x109b1560 */
  push32((uint32_t)(0x109b1560u));
  /* 10981674 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x1098167au);
  /* 1098167a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098167d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098167f call 0x10984b90 */
  push32(0x10981684u); f_10984b90();
  /* 10981684 mov esi, esp */
  ESI = (ESP);
  /* 10981686 push 0x109ac068 */
  push32((uint32_t)(0x109ac068u));
  /* 1098168b push 0x109b15b8 */
  push32((uint32_t)(0x109b15b8u));
  /* 10981690 call dword ptr [0x109b44b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b8))), 0x10981696u);
  /* 10981696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981699 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098169b call 0x10984b90 */
  push32(0x109816a0u); f_10984b90();
  /* 109816a0 mov esi, esp */
  ESI = (ESP);
  /* 109816a2 push 0x109ac058 */
  push32((uint32_t)(0x109ac058u));
  /* 109816a7 push 0x109b14d8 */
  push32((uint32_t)(0x109b14d8u));
  /* 109816ac call dword ptr [0x109b44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44bc))), 0x109816b2u);
  /* 109816b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109816b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109816b7 call 0x10984b90 */
  push32(0x109816bcu); f_10984b90();
  /* 109816bc mov esi, esp */
  ESI = (ESP);
  /* 109816be push 0x109ac048 */
  push32((uint32_t)(0x109ac048u));
  /* 109816c3 push 0x109b14f0 */
  push32((uint32_t)(0x109b14f0u));
  /* 109816c8 call dword ptr [0x109b44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44bc))), 0x109816ceu);
  /* 109816ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109816d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109816d3 call 0x10984b90 */
  push32(0x109816d8u); f_10984b90();
  /* 109816d8 mov esi, esp */
  ESI = (ESP);
  /* 109816da push 0x109ac038 */
  push32((uint32_t)(0x109ac038u));
  /* 109816df push 0x109b1540 */
  push32((uint32_t)(0x109b1540u));
  /* 109816e4 call dword ptr [0x109b44bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44bc))), 0x109816eau);
  /* 109816ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109816ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109816ef call 0x10984b90 */
  push32(0x109816f4u); f_10984b90();
  /* 109816f4 mov esi, esp */
  ESI = (ESP);
  /* 109816f6 push 0x109ac02c */
  push32((uint32_t)(0x109ac02cu));
  /* 109816fb push 0x109b13e0 */
  push32((uint32_t)(0x109b13e0u));
  /* 10981700 call dword ptr [0x109b44c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44c0))), 0x10981706u);
  /* 10981706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098170b call 0x10984b90 */
  push32(0x10981710u); f_10984b90();
  /* 10981710 mov esi, esp */
  ESI = (ESP);
  /* 10981712 push 8 */
  push32((uint32_t)(0x8u));
  /* 10981714 push 0x109b15c0 */
  push32((uint32_t)(0x109b15c0u));
  /* 10981719 call dword ptr [0x109b44c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44c4))), 0x1098171fu);
  /* 1098171f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981724 call 0x10984b90 */
  push32(0x10981729u); f_10984b90();
  /* 10981729 mov esi, esp */
  ESI = (ESP);
  /* 1098172b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1098172d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098172f call dword ptr [0x109b44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44c8))), 0x10981735u);
  /* 10981735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981738 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098173a call 0x10984b90 */
  push32(0x1098173fu); f_10984b90();
  /* 1098173f mov esi, esp */
  ESI = (ESP);
  /* 10981741 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10981743 push 1 */
  push32((uint32_t)(0x1u));
  /* 10981745 call dword ptr [0x109b44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44c8))), 0x1098174bu);
  /* 1098174b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098174e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981750 call 0x10984b90 */
  push32(0x10981755u); f_10984b90();
  /* 10981755 mov esi, esp */
  ESI = (ESP);
  /* 10981757 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10981759 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098175b call dword ptr [0x109b44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44c8))), 0x10981761u);
  /* 10981761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981766 call 0x10984b90 */
  push32(0x1098176bu); f_10984b90();
  /* 1098176b mov esi, esp */
  ESI = (ESP);
  /* 1098176d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1098176f push 4 */
  push32((uint32_t)(0x4u));
  /* 10981771 call dword ptr [0x109b44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44c8))), 0x10981777u);
  /* 10981777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098177a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098177c call 0x10984b90 */
  push32(0x10981781u); f_10984b90();
  /* 10981781 mov esi, esp */
  ESI = (ESP);
  /* 10981783 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10981785 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981787 call dword ptr [0x109b44c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44c8))), 0x1098178du);
  /* 1098178d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981792 call 0x10984b90 */
  push32(0x10981797u); f_10984b90();
  /* 10981797 mov esi, esp */
  ESI = (ESP);
  /* 10981799 push 0x109ac024 */
  push32((uint32_t)(0x109ac024u));
  /* 1098179e push 4 */
  push32((uint32_t)(0x4u));
  /* 109817a0 call dword ptr [0x109b44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44cc))), 0x109817a6u);
  /* 109817a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109817a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109817ab call 0x10984b90 */
  push32(0x109817b0u); f_10984b90();
  /* 109817b0 mov esi, esp */
  ESI = (ESP);
  /* 109817b2 push 0x109ac01c */
  push32((uint32_t)(0x109ac01cu));
  /* 109817b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 109817b9 call dword ptr [0x109b44cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44cc))), 0x109817bfu);
  /* 109817bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109817c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109817c4 call 0x10984b90 */
  push32(0x109817c9u); f_10984b90();
  /* 109817c9 pop edi */
  EDI = (pop32());
  /* 109817ca pop esi */
  ESI = (pop32());
  /* 109817cb pop ebx */
  EBX = (pop32());
  /* 109817cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109817cf cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109817d1 call 0x10984b90 */
  push32(0x109817d6u); f_10984b90();
  /* 109817d6 mov esp, ebp */
  ESP = (EBP);
  /* 109817d8 pop ebp */
  EBP = (pop32());
  /* 109817d9 ret  */
  ESPCHK(0x109810a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100019b0 @ 0x109819b0 (9877 bytes, 2849 insns) */
void f_109819b0(void) {
  FTRACE(0x109819b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109819b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109819b1 mov ebp, esp */
  EBP = (ESP);
  /* 109819b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109819b6 push ebx */
  push32((uint32_t)(EBX));
  /* 109819b7 push esi */
  push32((uint32_t)(ESI));
  /* 109819b8 push edi */
  push32((uint32_t)(EDI));
  /* 109819b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 109819bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 109819c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 109819c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109819c8 mov esi, esp */
  ESI = (ESP);
  /* 109819ca push 1 */
  push32((uint32_t)(0x1u));
  /* 109819cc call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109819d2u);
  /* 109819d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109819d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109819d7 call 0x10984b90 */
  push32(0x109819dcu); f_10984b90();
  /* 109819dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109819e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109819e3 je 0x10981b27 */
  if (C.zf) goto L_10981b27;
  /* 109819e9 mov esi, esp */
  ESI = (ESP);
  /* 109819eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109819ed push 1 */
  push32((uint32_t)(0x1u));
  /* 109819ef call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109819f5u);
  /* 109819f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109819f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109819fa call 0x10984b90 */
  push32(0x109819ffu); f_10984b90();
  /* 109819ff mov esi, esp */
  ESI = (ESP);
  /* 10981a01 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10981a06 push 3 */
  push32((uint32_t)(0x3u));
  /* 10981a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a0a call dword ptr [0x109b4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4440))), 0x10981a10u);
  /* 10981a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981a13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981a15 call 0x10984b90 */
  push32(0x10981a1au); f_10984b90();
  /* 10981a1a mov esi, esp */
  ESI = (ESP);
  /* 10981a1c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10981a21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10981a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a25 call dword ptr [0x109b4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4440))), 0x10981a2bu);
  /* 10981a2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981a2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981a30 call 0x10984b90 */
  push32(0x10981a35u); f_10984b90();
  /* 10981a35 mov esi, esp */
  ESI = (ESP);
  /* 10981a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a3d call dword ptr [0x109b4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4440))), 0x10981a43u);
  /* 10981a43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981a48 call 0x10984b90 */
  push32(0x10981a4du); f_10984b90();
  /* 10981a4d mov esi, esp */
  ESI = (ESP);
  /* 10981a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10981a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a55 call dword ptr [0x109b4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4440))), 0x10981a5bu);
  /* 10981a5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981a60 call 0x10984b90 */
  push32(0x10981a65u); f_10984b90();
  /* 10981a65 mov esi, esp */
  ESI = (ESP);
  /* 10981a67 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10981a6c push 5 */
  push32((uint32_t)(0x5u));
  /* 10981a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a70 call dword ptr [0x109b4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4440))), 0x10981a76u);
  /* 10981a76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981a7b call 0x10984b90 */
  push32(0x10981a80u); f_10984b90();
  /* 10981a80 mov esi, esp */
  ESI = (ESP);
  /* 10981a82 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10981a87 push 4 */
  push32((uint32_t)(0x4u));
  /* 10981a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981a8b call dword ptr [0x109b4440] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4440))), 0x10981a91u);
  /* 10981a91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981a96 call 0x10984b90 */
  push32(0x10981a9bu); f_10984b90();
  /* 10981a9b mov esi, esp */
  ESI = (ESP);
  /* 10981a9d push 0x109ac454 */
  push32((uint32_t)(0x109ac454u));
  /* 10981aa2 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10981aa8u);
  /* 10981aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981aad call 0x10984b90 */
  push32(0x10981ab2u); f_10984b90();
  /* 10981ab2 mov esi, esp */
  ESI = (ESP);
  /* 10981ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981ab6 push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981abb call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981ac1u);
  /* 10981ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981ac6 call 0x10984b90 */
  push32(0x10981acbu); f_10984b90();
  /* 10981acb mov esi, esp */
  ESI = (ESP);
  /* 10981acd push 0 */
  push32((uint32_t)(0x0u));
  /* 10981acf push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10981ad4 push 0x109b1438 */
  push32((uint32_t)(0x109b1438u));
  /* 10981ad9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981adb call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10981ae1u);
  /* 10981ae1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981ae6 call 0x10984b90 */
  push32(0x10981aebu); f_10984b90();
  /* 10981aeb mov esi, esp */
  ESI = (ESP);
  /* 10981aed push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10981aef call dword ptr [0x109b4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4450))), 0x10981af5u);
  /* 10981af5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981af8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981afa call 0x10984b90 */
  push32(0x10981affu); f_10984b90();
  /* 10981aff mov esi, esp */
  ESI = (ESP);
  /* 10981b01 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10981b03 call dword ptr [0x109b4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4450))), 0x10981b09u);
  /* 10981b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981b0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981b0e call 0x10984b90 */
  push32(0x10981b13u); f_10984b90();
  /* 10981b13 mov esi, esp */
  ESI = (ESP);
  /* 10981b15 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10981b17 call dword ptr [0x109b4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4450))), 0x10981b1du);
  /* 10981b1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981b20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981b22 call 0x10984b90 */
  push32(0x10981b27u); f_10984b90();
L_10981b27:;
  /* 10981b27 mov esi, esp */
  ESI = (ESP);
  /* 10981b29 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10981b2b call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10981b31u);
  /* 10981b31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981b34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981b36 call 0x10984b90 */
  push32(0x10981b3bu); f_10984b90();
  /* 10981b3b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981b40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981b42 je 0x10981bd3 */
  if (C.zf) goto L_10981bd3;
  /* 10981b48 mov esi, esp */
  ESI = (ESP);
  /* 10981b4a call dword ptr [0x109b4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4454))), 0x10981b50u);
  /* 10981b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981b52 call 0x10984b90 */
  push32(0x10981b57u); f_10984b90();
  /* 10981b57 cmp eax, 0x5dc */
  { uint32_t _a=(EAX),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981b5c jle 0x10981bd3 */
  if ((C.zf||C.sf!=C.of)) goto L_10981bd3;
  /* 10981b5e mov esi, esp */
  ESI = (ESP);
  /* 10981b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981b62 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10981b64 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10981b6au);
  /* 10981b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981b6f call 0x10984b90 */
  push32(0x10981b74u); f_10984b90();
  /* 10981b74 mov esi, esp */
  ESI = (ESP);
  /* 10981b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981b78 push 0x109b1590 */
  push32((uint32_t)(0x109b1590u));
  /* 10981b7d call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981b83u);
  /* 10981b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981b86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981b88 call 0x10984b90 */
  push32(0x10981b8du); f_10984b90();
  /* 10981b8d mov esi, esp */
  ESI = (ESP);
  /* 10981b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10981b91 push 0x109b15b0 */
  push32((uint32_t)(0x109b15b0u));
  /* 10981b96 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981b9cu);
  /* 10981b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981b9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981ba1 call 0x10984b90 */
  push32(0x10981ba6u); f_10984b90();
  /* 10981ba6 mov esi, esp */
  ESI = (ESP);
  /* 10981ba8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10981baa push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981baf call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981bb5u);
  /* 10981bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981bb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981bba call 0x10984b90 */
  push32(0x10981bbfu); f_10984b90();
  /* 10981bbf mov esi, esp */
  ESI = (ESP);
  /* 10981bc1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981bc3 call dword ptr [0x109b4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4458))), 0x10981bc9u);
  /* 10981bc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981bcc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981bce call 0x10984b90 */
  push32(0x10981bd3u); f_10984b90();
L_10981bd3:;
  /* 10981bd3 mov esi, esp */
  ESI = (ESP);
  /* 10981bd5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10981bd7 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10981bddu);
  /* 10981bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981be2 call 0x10984b90 */
  push32(0x10981be7u); f_10984b90();
  /* 10981be7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981bee je 0x10981ccf */
  if (C.zf) goto L_10981ccf;
  /* 10981bf4 mov esi, esp */
  ESI = (ESP);
  /* 10981bf6 call dword ptr [0x109b4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4454))), 0x10981bfcu);
  /* 10981bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981bfe call 0x10984b90 */
  push32(0x10981c03u); f_10984b90();
  /* 10981c03 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981c08 jle 0x10981ccf */
  if ((C.zf||C.sf!=C.of)) goto L_10981ccf;
  /* 10981c0e mov esi, esp */
  ESI = (ESP);
  /* 10981c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981c12 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10981c14 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10981c1au);
  /* 10981c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981c1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981c1f call 0x10984b90 */
  push32(0x10981c24u); f_10984b90();
  /* 10981c24 mov esi, esp */
  ESI = (ESP);
  /* 10981c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981c28 push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981c2d call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981c33u);
  /* 10981c33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981c36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981c38 call 0x10984b90 */
  push32(0x10981c3du); f_10984b90();
  /* 10981c3d mov esi, esp */
  ESI = (ESP);
  /* 10981c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10981c41 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10981c46 push 0x109b1480 */
  push32((uint32_t)(0x109b1480u));
  /* 10981c4b push 5 */
  push32((uint32_t)(0x5u));
  /* 10981c4d call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10981c53u);
  /* 10981c53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981c56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981c58 call 0x10984b90 */
  push32(0x10981c5du); f_10984b90();
  /* 10981c5d mov esi, esp */
  ESI = (ESP);
  /* 10981c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10981c61 push 0x109b1588 */
  push32((uint32_t)(0x109b1588u));
  /* 10981c66 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981c6cu);
  /* 10981c6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981c6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981c71 call 0x10984b90 */
  push32(0x10981c76u); f_10984b90();
  /* 10981c76 mov esi, esp */
  ESI = (ESP);
  /* 10981c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981c7a push 0x82 */
  push32((uint32_t)(0x82u));
  /* 10981c7f push 0x109b1490 */
  push32((uint32_t)(0x109b1490u));
  /* 10981c84 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981c86 call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x10981c8cu);
  /* 10981c8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981c8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981c91 call 0x10984b90 */
  push32(0x10981c96u); f_10984b90();
  /* 10981c96 mov esi, esp */
  ESI = (ESP);
  /* 10981c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981c9a push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10981c9f call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981ca5u);
  /* 10981ca5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981caa call 0x10984b90 */
  push32(0x10981cafu); f_10984b90();
  /* 10981caf mov esi, esp */
  ESI = (ESP);
  /* 10981cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981cb3 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10981cb8 push 0x109b1450 */
  push32((uint32_t)(0x109b1450u));
  /* 10981cbd push 5 */
  push32((uint32_t)(0x5u));
  /* 10981cbf call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x10981cc5u);
  /* 10981cc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981cc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981cca call 0x10984b90 */
  push32(0x10981ccfu); f_10984b90();
L_10981ccf:;
  /* 10981ccf mov esi, esp */
  ESI = (ESP);
  /* 10981cd1 call dword ptr [0x109b4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4454))), 0x10981cd7u);
  /* 10981cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981cd9 call 0x10984b90 */
  push32(0x10981cdeu); f_10984b90();
  /* 10981cde cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981ce3 jle 0x10981d62 */
  if ((C.zf||C.sf!=C.of)) goto L_10981d62;
  /* 10981ce5 mov esi, esp */
  ESI = (ESP);
  /* 10981ce7 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10981ce9 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10981cefu);
  /* 10981cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981cf4 call 0x10984b90 */
  push32(0x10981cf9u); f_10984b90();
  /* 10981cf9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981d00 je 0x10981d62 */
  if (C.zf) goto L_10981d62;
  /* 10981d02 mov esi, esp */
  ESI = (ESP);
  /* 10981d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981d06 push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981d0b call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981d11u);
  /* 10981d11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981d14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981d16 call 0x10984b90 */
  push32(0x10981d1bu); f_10984b90();
  /* 10981d1b mov esi, esp */
  ESI = (ESP);
  /* 10981d1d push 5 */
  push32((uint32_t)(0x5u));
  /* 10981d1f call dword ptr [0x109b4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4460))), 0x10981d25u);
  /* 10981d25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981d2a call 0x10984b90 */
  push32(0x10981d2fu); f_10984b90();
  /* 10981d2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981d36 je 0x10981d62 */
  if (C.zf) goto L_10981d62;
  /* 10981d38 mov esi, esp */
  ESI = (ESP);
  /* 10981d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10981d3c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10981d3e call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10981d44u);
  /* 10981d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981d49 call 0x10984b90 */
  push32(0x10981d4eu); f_10984b90();
  /* 10981d4e mov esi, esp */
  ESI = (ESP);
  /* 10981d50 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981d52 call dword ptr [0x109b4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4464))), 0x10981d58u);
  /* 10981d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981d5d call 0x10984b90 */
  push32(0x10981d62u); f_10984b90();
L_10981d62:;
  /* 10981d62 mov esi, esp */
  ESI = (ESP);
  /* 10981d64 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10981d66 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10981d6cu);
  /* 10981d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981d71 call 0x10984b90 */
  push32(0x10981d76u); f_10984b90();
  /* 10981d76 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981d7d je 0x10981e8a */
  if (C.zf) goto L_10981e8a;
  /* 10981d83 mov esi, esp */
  ESI = (ESP);
  /* 10981d85 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10981d8a push 0x109b1450 */
  push32((uint32_t)(0x109b1450u));
  /* 10981d8f call dword ptr [0x109b4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4468))), 0x10981d95u);
  /* 10981d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981d9a call 0x10984b90 */
  push32(0x10981d9fu); f_10984b90();
  /* 10981d9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981da1 jle 0x10981e8a */
  if ((C.zf||C.sf!=C.of)) goto L_10981e8a;
  /* 10981da7 mov esi, esp */
  ESI = (ESP);
  /* 10981da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981dab push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10981dad call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10981db3u);
  /* 10981db3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981db6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981db8 call 0x10984b90 */
  push32(0x10981dbdu); f_10984b90();
  /* 10981dbd mov esi, esp */
  ESI = (ESP);
  /* 10981dbf push 0xa */
  push32((uint32_t)(0xau));
  /* 10981dc1 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10981dc7u);
  /* 10981dc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981dca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981dcc call 0x10984b90 */
  push32(0x10981dd1u); f_10984b90();
  /* 10981dd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981dd8 je 0x10981e3e */
  if (C.zf) goto L_10981e3e;
  /* 10981dda mov esi, esp */
  ESI = (ESP);
  /* 10981ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 10981dde push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 10981de3 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981de9u);
  /* 10981de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981dee call 0x10984b90 */
  push32(0x10981df3u); f_10984b90();
  /* 10981df3 mov esi, esp */
  ESI = (ESP);
  /* 10981df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981df9 push 0x109b1450 */
  push32((uint32_t)(0x109b1450u));
  /* 10981dfe push 4 */
  push32((uint32_t)(0x4u));
  /* 10981e00 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10981e06u);
  /* 10981e06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981e0b call 0x10984b90 */
  push32(0x10981e10u); f_10984b90();
  /* 10981e10 mov esi, esp */
  ESI = (ESP);
  /* 10981e12 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981e14 push 4 */
  push32((uint32_t)(0x4u));
  /* 10981e16 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x10981e1cu);
  /* 10981e1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981e1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981e21 call 0x10984b90 */
  push32(0x10981e26u); f_10984b90();
  /* 10981e26 mov esi, esp */
  ESI = (ESP);
  /* 10981e28 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10981e2a push 4 */
  push32((uint32_t)(0x4u));
  /* 10981e2c call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x10981e32u);
  /* 10981e32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981e35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981e37 call 0x10984b90 */
  push32(0x10981e3cu); f_10984b90();
  /* 10981e3c jmp 0x10981e8a */
  goto L_10981e8a;
L_10981e3e:;
  /* 10981e3e mov esi, esp */
  ESI = (ESP);
  /* 10981e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981e42 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10981e47 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981e4du);
  /* 10981e4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981e50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981e52 call 0x10984b90 */
  push32(0x10981e57u); f_10984b90();
  /* 10981e57 mov esi, esp */
  ESI = (ESP);
  /* 10981e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10981e5d push 0x109b1468 */
  push32((uint32_t)(0x109b1468u));
  /* 10981e62 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981e64 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10981e6au);
  /* 10981e6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981e6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981e6f call 0x10984b90 */
  push32(0x10981e74u); f_10984b90();
  /* 10981e74 mov esi, esp */
  ESI = (ESP);
  /* 10981e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981e78 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10981e7a call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10981e80u);
  /* 10981e80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981e85 call 0x10984b90 */
  push32(0x10981e8au); f_10984b90();
L_10981e8a:;
  /* 10981e8a mov esi, esp */
  ESI = (ESP);
  /* 10981e8c push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10981e8e call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10981e94u);
  /* 10981e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981e97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981e99 call 0x10984b90 */
  push32(0x10981e9eu); f_10984b90();
  /* 10981e9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981ea5 je 0x10981fbc */
  if (C.zf) goto L_10981fbc;
  /* 10981eab mov esi, esp */
  ESI = (ESP);
  /* 10981ead push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10981eaf call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10981eb5u);
  /* 10981eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981eb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981eba call 0x10984b90 */
  push32(0x10981ebfu); f_10984b90();
  /* 10981ebf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981ec6 jne 0x10981fbc */
  if (!C.zf) goto L_10981fbc;
  /* 10981ecc mov esi, esp */
  ESI = (ESP);
  /* 10981ece push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10981ed3 push 0x109b1468 */
  push32((uint32_t)(0x109b1468u));
  /* 10981ed8 call dword ptr [0x109b4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4468))), 0x10981edeu);
  /* 10981ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981ee1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981ee3 call 0x10984b90 */
  push32(0x10981ee8u); f_10984b90();
  /* 10981ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981eea jle 0x10981fbc */
  if ((C.zf||C.sf!=C.of)) goto L_10981fbc;
  /* 10981ef0 mov esi, esp */
  ESI = (ESP);
  /* 10981ef2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10981ef4 call dword ptr [0x109b4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4474))), 0x10981efau);
  /* 10981efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981efd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981eff call 0x10984b90 */
  push32(0x10981f04u); f_10984b90();
  /* 10981f04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981f0b je 0x10981fbc */
  if (C.zf) goto L_10981fbc;
  /* 10981f11 mov esi, esp */
  ESI = (ESP);
  /* 10981f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981f15 push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981f1a call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981f20u);
  /* 10981f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981f23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981f25 call 0x10984b90 */
  push32(0x10981f2au); f_10984b90();
  /* 10981f2a mov esi, esp */
  ESI = (ESP);
  /* 10981f2c push 5 */
  push32((uint32_t)(0x5u));
  /* 10981f2e call dword ptr [0x109b4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4460))), 0x10981f34u);
  /* 10981f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981f39 call 0x10984b90 */
  push32(0x10981f3eu); f_10984b90();
  /* 10981f3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981f45 je 0x10981fbc */
  if (C.zf) goto L_10981fbc;
  /* 10981f47 mov esi, esp */
  ESI = (ESP);
  /* 10981f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981f4b push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10981f4d call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10981f53u);
  /* 10981f53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981f56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981f58 call 0x10984b90 */
  push32(0x10981f5du); f_10984b90();
  /* 10981f5d mov esi, esp */
  ESI = (ESP);
  /* 10981f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10981f61 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10981f66 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981f6cu);
  /* 10981f6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981f6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981f71 call 0x10984b90 */
  push32(0x10981f76u); f_10984b90();
  /* 10981f76 mov esi, esp */
  ESI = (ESP);
  /* 10981f78 push 1 */
  push32((uint32_t)(0x1u));
  /* 10981f7a push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981f7f call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981f85u);
  /* 10981f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981f8a call 0x10984b90 */
  push32(0x10981f8fu); f_10984b90();
  /* 10981f8f mov esi, esp */
  ESI = (ESP);
  /* 10981f91 push 5 */
  push32((uint32_t)(0x5u));
  /* 10981f93 call dword ptr [0x109b4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4458))), 0x10981f99u);
  /* 10981f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981f9e call 0x10984b90 */
  push32(0x10981fa3u); f_10984b90();
  /* 10981fa3 mov esi, esp */
  ESI = (ESP);
  /* 10981fa5 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10981faa push 0xa */
  push32((uint32_t)(0xau));
  /* 10981fac call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x10981fb2u);
  /* 10981fb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981fb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981fb7 call 0x10984b90 */
  push32(0x10981fbcu); f_10984b90();
L_10981fbc:;
  /* 10981fbc mov esi, esp */
  ESI = (ESP);
  /* 10981fbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10981fc0 call dword ptr [0x109b4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4478))), 0x10981fc6u);
  /* 10981fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981fc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981fcb call 0x10984b90 */
  push32(0x10981fd0u); f_10984b90();
  /* 10981fd0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10981fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10981fd7 je 0x1098202b */
  if (C.zf) goto L_1098202b;
  /* 10981fd9 mov esi, esp */
  ESI = (ESP);
  /* 10981fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 10981fdd push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10981fe2 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10981fe8u);
  /* 10981fe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10981feb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10981fed call 0x10984b90 */
  push32(0x10981ff2u); f_10984b90();
  /* 10981ff2 mov esi, esp */
  ESI = (ESP);
  /* 10981ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10981ff6 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10981ffb push 0x109b1480 */
  push32((uint32_t)(0x109b1480u));
  /* 10982000 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982002 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982008u);
  /* 10982008 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098200b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098200d call 0x10984b90 */
  push32(0x10982012u); f_10984b90();
  /* 10982012 mov esi, esp */
  ESI = (ESP);
  /* 10982014 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10982019 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1098201b call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x10982021u);
  /* 10982021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982024 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982026 call 0x10984b90 */
  push32(0x1098202bu); f_10984b90();
L_1098202b:;
  /* 1098202b mov esi, esp */
  ESI = (ESP);
  /* 1098202d push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1098202f call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982035u);
  /* 10982035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982038 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098203a call 0x10984b90 */
  push32(0x1098203fu); f_10984b90();
  /* 1098203f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982046 je 0x10982103 */
  if (C.zf) goto L_10982103;
  /* 1098204c mov esi, esp */
  ESI = (ESP);
  /* 1098204e push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10982050 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982056u);
  /* 10982056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982059 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098205b call 0x10984b90 */
  push32(0x10982060u); f_10984b90();
  /* 10982060 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982067 jne 0x10982103 */
  if (!C.zf) goto L_10982103;
  /* 1098206d mov esi, esp */
  ESI = (ESP);
  /* 1098206f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10982071 call dword ptr [0x109b4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4474))), 0x10982077u);
  /* 10982077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098207a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098207c call 0x10984b90 */
  push32(0x10982081u); f_10984b90();
  /* 10982081 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982088 je 0x10982103 */
  if (C.zf) goto L_10982103;
  /* 1098208a mov esi, esp */
  ESI = (ESP);
  /* 1098208c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098208e push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10982093 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982099u);
  /* 10982099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098209c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098209e call 0x10984b90 */
  push32(0x109820a3u); f_10984b90();
  /* 109820a3 mov esi, esp */
  ESI = (ESP);
  /* 109820a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 109820a7 call dword ptr [0x109b4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4460))), 0x109820adu);
  /* 109820ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109820b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109820b2 call 0x10984b90 */
  push32(0x109820b7u); f_10984b90();
  /* 109820b7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109820bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109820be je 0x10982103 */
  if (C.zf) goto L_10982103;
  /* 109820c0 mov esi, esp */
  ESI = (ESP);
  /* 109820c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109820c4 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 109820c6 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109820ccu);
  /* 109820cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109820cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109820d1 call 0x10984b90 */
  push32(0x109820d6u); f_10984b90();
  /* 109820d6 mov esi, esp */
  ESI = (ESP);
  /* 109820d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109820da push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 109820df call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109820e5u);
  /* 109820e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109820e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109820ea call 0x10984b90 */
  push32(0x109820efu); f_10984b90();
  /* 109820ef mov esi, esp */
  ESI = (ESP);
  /* 109820f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 109820f3 call dword ptr [0x109b4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4464))), 0x109820f9u);
  /* 109820f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109820fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109820fe call 0x10984b90 */
  push32(0x10982103u); f_10984b90();
L_10982103:;
  /* 10982103 mov esi, esp */
  ESI = (ESP);
  /* 10982105 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10982107 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098210du);
  /* 1098210d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982110 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982112 call 0x10984b90 */
  push32(0x10982117u); f_10984b90();
  /* 10982117 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098211c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098211e jne 0x10982187 */
  if (!C.zf) goto L_10982187;
  /* 10982120 mov esi, esp */
  ESI = (ESP);
  /* 10982122 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982124 push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 10982129 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098212fu);
  /* 1098212f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982132 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982134 call 0x10984b90 */
  push32(0x10982139u); f_10984b90();
  /* 10982139 mov esi, esp */
  ESI = (ESP);
  /* 1098213b push 5 */
  push32((uint32_t)(0x5u));
  /* 1098213d call dword ptr [0x109b447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b447c))), 0x10982143u);
  /* 10982143 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982148 call 0x10984b90 */
  push32(0x1098214du); f_10984b90();
  /* 1098214d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098214f je 0x10982187 */
  if (C.zf) goto L_10982187;
  /* 10982151 mov esi, esp */
  ESI = (ESP);
  /* 10982153 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982155 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 1098215a call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982160u);
  /* 10982160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982165 call 0x10984b90 */
  push32(0x1098216au); f_10984b90();
  /* 1098216a mov esi, esp */
  ESI = (ESP);
  /* 1098216c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098216e push 0 */
  push32((uint32_t)(0x0u));
  /* 10982170 push 0x109b14a0 */
  push32((uint32_t)(0x109b14a0u));
  /* 10982175 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982177 call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x1098217du);
  /* 1098217d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982180 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982182 call 0x10984b90 */
  push32(0x10982187u); f_10984b90();
L_10982187:;
  /* 10982187 mov esi, esp */
  ESI = (ESP);
  /* 10982189 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 1098218e push 0x109b14a0 */
  push32((uint32_t)(0x109b14a0u));
  /* 10982193 call dword ptr [0x109b4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4468))), 0x10982199u);
  /* 10982199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098219c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098219e call 0x10984b90 */
  push32(0x109821a3u); f_10984b90();
  /* 109821a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109821a5 jle 0x109821da */
  if ((C.zf||C.sf!=C.of)) goto L_109821da;
  /* 109821a7 mov esi, esp */
  ESI = (ESP);
  /* 109821a9 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109821ab call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109821b1u);
  /* 109821b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109821b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109821b6 call 0x10984b90 */
  push32(0x109821bbu); f_10984b90();
  /* 109821bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109821c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109821c2 je 0x109821da */
  if (C.zf) goto L_109821da;
  /* 109821c4 mov esi, esp */
  ESI = (ESP);
  /* 109821c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109821c8 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109821ca call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109821d0u);
  /* 109821d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109821d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109821d5 call 0x10984b90 */
  push32(0x109821dau); f_10984b90();
L_109821da:;
  /* 109821da mov esi, esp */
  ESI = (ESP);
  /* 109821dc push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109821de call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109821e4u);
  /* 109821e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109821e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109821e9 call 0x10984b90 */
  push32(0x109821eeu); f_10984b90();
  /* 109821ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109821f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109821f5 jne 0x10982229 */
  if (!C.zf) goto L_10982229;
  /* 109821f7 mov esi, esp */
  ESI = (ESP);
  /* 109821f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109821fb push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10982200 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982206u);
  /* 10982206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982209 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098220b call 0x10984b90 */
  push32(0x10982210u); f_10984b90();
  /* 10982210 mov esi, esp */
  ESI = (ESP);
  /* 10982212 push 0x109b13e8 */
  push32((uint32_t)(0x109b13e8u));
  /* 10982217 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982219 call dword ptr [0x109b4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4480))), 0x1098221fu);
  /* 1098221f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982222 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982224 call 0x10984b90 */
  push32(0x10982229u); f_10984b90();
L_10982229:;
  /* 10982229 mov esi, esp */
  ESI = (ESP);
  /* 1098222b push 4 */
  push32((uint32_t)(0x4u));
  /* 1098222d call dword ptr [0x109b4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4474))), 0x10982233u);
  /* 10982233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982238 call 0x10984b90 */
  push32(0x1098223du); f_10984b90();
  /* 1098223d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982244 je 0x109822fa */
  if (C.zf) goto L_109822fa;
  /* 1098224a mov esi, esp */
  ESI = (ESP);
  /* 1098224c push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1098224e call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982254u);
  /* 10982254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982257 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982259 call 0x10984b90 */
  push32(0x1098225eu); f_10984b90();
  /* 1098225e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982265 je 0x109822fa */
  if (C.zf) goto L_109822fa;
  /* 1098226b mov esi, esp */
  ESI = (ESP);
  /* 1098226d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098226f push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 10982274 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098227au);
  /* 1098227a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098227d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098227f call 0x10984b90 */
  push32(0x10982284u); f_10984b90();
  /* 10982284 mov esi, esp */
  ESI = (ESP);
  /* 10982286 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982288 call dword ptr [0x109b4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4460))), 0x1098228eu);
  /* 1098228e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982291 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982293 call 0x10984b90 */
  push32(0x10982298u); f_10984b90();
  /* 10982298 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098229f je 0x109822fa */
  if (C.zf) goto L_109822fa;
  /* 109822a1 mov esi, esp */
  ESI = (ESP);
  /* 109822a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109822a5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 109822a7 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109822adu);
  /* 109822ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109822b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109822b2 call 0x10984b90 */
  push32(0x109822b7u); f_10984b90();
  /* 109822b7 mov esi, esp */
  ESI = (ESP);
  /* 109822b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109822bb push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 109822c0 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109822c6u);
  /* 109822c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109822c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109822cb call 0x10984b90 */
  push32(0x109822d0u); f_10984b90();
  /* 109822d0 mov esi, esp */
  ESI = (ESP);
  /* 109822d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 109822d4 call dword ptr [0x109b4458] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4458))), 0x109822dau);
  /* 109822da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109822dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109822df call 0x10984b90 */
  push32(0x109822e4u); f_10984b90();
  /* 109822e4 mov esi, esp */
  ESI = (ESP);
  /* 109822e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 109822e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 109822ea call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x109822f0u);
  /* 109822f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109822f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109822f5 call 0x10984b90 */
  push32(0x109822fau); f_10984b90();
L_109822fa:;
  /* 109822fa mov esi, esp */
  ESI = (ESP);
  /* 109822fc push 5 */
  push32((uint32_t)(0x5u));
  /* 109822fe call dword ptr [0x109b4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4474))), 0x10982304u);
  /* 10982304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982307 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982309 call 0x10984b90 */
  push32(0x1098230eu); f_10984b90();
  /* 1098230e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982315 je 0x109823e1 */
  if (C.zf) goto L_109823e1;
  /* 1098231b mov esi, esp */
  ESI = (ESP);
  /* 1098231d push 0x22 */
  push32((uint32_t)(0x22u));
  /* 1098231f call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982325u);
  /* 10982325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982328 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098232a call 0x10984b90 */
  push32(0x1098232fu); f_10984b90();
  /* 1098232f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982336 je 0x109823e1 */
  if (C.zf) goto L_109823e1;
  /* 1098233c mov esi, esp */
  ESI = (ESP);
  /* 1098233e push 0 */
  push32((uint32_t)(0x0u));
  /* 10982340 push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 10982345 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098234bu);
  /* 1098234b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098234e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982350 call 0x10984b90 */
  push32(0x10982355u); f_10984b90();
  /* 10982355 mov esi, esp */
  ESI = (ESP);
  /* 10982357 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982359 call dword ptr [0x109b447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b447c))), 0x1098235fu);
  /* 1098235f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982362 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982364 call 0x10984b90 */
  push32(0x10982369u); f_10984b90();
  /* 10982369 mov esi, eax */
  ESI = (EAX);
  /* 1098236b push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10982370 call 0x10981005 */
  push32(0x10982375u); f_10981005();
  /* 10982375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982378 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098237a jne 0x109823e1 */
  if (!C.zf) goto L_109823e1;
  /* 1098237c mov esi, esp */
  ESI = (ESP);
  /* 1098237e push 0 */
  push32((uint32_t)(0x0u));
  /* 10982380 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10982382 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982388u);
  /* 10982388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098238b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098238d call 0x10984b90 */
  push32(0x10982392u); f_10984b90();
  /* 10982392 mov esi, esp */
  ESI = (ESP);
  /* 10982394 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982396 push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 1098239b call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109823a1u);
  /* 109823a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109823a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109823a6 call 0x10984b90 */
  push32(0x109823abu); f_10984b90();
  /* 109823ab mov esi, esp */
  ESI = (ESP);
  /* 109823ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109823af push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 109823b4 push 0x109b1448 */
  push32((uint32_t)(0x109b1448u));
  /* 109823b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 109823bb call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x109823c1u);
  /* 109823c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109823c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109823c6 call 0x10984b90 */
  push32(0x109823cbu); f_10984b90();
  /* 109823cb mov esi, esp */
  ESI = (ESP);
  /* 109823cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109823cf push 7 */
  push32((uint32_t)(0x7u));
  /* 109823d1 call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x109823d7u);
  /* 109823d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109823da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109823dc call 0x10984b90 */
  push32(0x109823e1u); f_10984b90();
L_109823e1:;
  /* 109823e1 mov esi, esp */
  ESI = (ESP);
  /* 109823e3 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109823e5 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109823ebu);
  /* 109823eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109823ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109823f0 call 0x10984b90 */
  push32(0x109823f5u); f_10984b90();
  /* 109823f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109823fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109823fc je 0x109824da */
  if (C.zf) goto L_109824da;
  /* 10982402 mov esi, esp */
  ESI = (ESP);
  /* 10982404 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10982406 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098240cu);
  /* 1098240c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098240f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982411 call 0x10984b90 */
  push32(0x10982416u); f_10984b90();
  /* 10982416 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098241b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098241d jne 0x109824da */
  if (!C.zf) goto L_109824da;
  /* 10982423 mov esi, esp */
  ESI = (ESP);
  /* 10982425 push 7 */
  push32((uint32_t)(0x7u));
  /* 10982427 call dword ptr [0x109b4474] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4474))), 0x1098242du);
  /* 1098242d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982430 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982432 call 0x10984b90 */
  push32(0x10982437u); f_10984b90();
  /* 10982437 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098243c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098243e je 0x109824da */
  if (C.zf) goto L_109824da;
  /* 10982444 mov esi, esp */
  ESI = (ESP);
  /* 10982446 push 0xa */
  push32((uint32_t)(0xau));
  /* 10982448 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098244eu);
  /* 1098244e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982453 call 0x10984b90 */
  push32(0x10982458u); f_10984b90();
  /* 10982458 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098245d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098245f je 0x109824da */
  if (C.zf) goto L_109824da;
  /* 10982461 mov esi, esp */
  ESI = (ESP);
  /* 10982463 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982465 push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 1098246a call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982470u);
  /* 10982470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982473 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982475 call 0x10984b90 */
  push32(0x1098247au); f_10984b90();
  /* 1098247a mov esi, esp */
  ESI = (ESP);
  /* 1098247c push 5 */
  push32((uint32_t)(0x5u));
  /* 1098247e call dword ptr [0x109b4460] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4460))), 0x10982484u);
  /* 10982484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982487 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982489 call 0x10984b90 */
  push32(0x1098248eu); f_10984b90();
  /* 1098248e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982493 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982495 je 0x109824da */
  if (C.zf) goto L_109824da;
  /* 10982497 mov esi, esp */
  ESI = (ESP);
  /* 10982499 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098249b push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 109824a0 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109824a6u);
  /* 109824a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109824a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109824ab call 0x10984b90 */
  push32(0x109824b0u); f_10984b90();
  /* 109824b0 mov esi, esp */
  ESI = (ESP);
  /* 109824b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 109824b4 call dword ptr [0x109b4464] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4464))), 0x109824bau);
  /* 109824ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109824bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109824bf call 0x10984b90 */
  push32(0x109824c4u); f_10984b90();
  /* 109824c4 mov esi, esp */
  ESI = (ESP);
  /* 109824c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109824c8 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109824ca call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109824d0u);
  /* 109824d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109824d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109824d5 call 0x10984b90 */
  push32(0x109824dau); f_10984b90();
L_109824da:;
  /* 109824da mov esi, esp */
  ESI = (ESP);
  /* 109824dc push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109824de call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109824e4u);
  /* 109824e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109824e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109824e9 call 0x10984b90 */
  push32(0x109824eeu); f_10984b90();
  /* 109824ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109824f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109824f5 jne 0x109825d0 */
  if (!C.zf) goto L_109825d0;
  /* 109824fb mov esi, esp */
  ESI = (ESP);
  /* 109824fd push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109824ff call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982505u);
  /* 10982505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982508 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098250a call 0x10984b90 */
  push32(0x1098250fu); f_10984b90();
  /* 1098250f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982516 je 0x109825d0 */
  if (C.zf) goto L_109825d0;
  /* 1098251c mov esi, esp */
  ESI = (ESP);
  /* 1098251e push 0xa */
  push32((uint32_t)(0xau));
  /* 10982520 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982526u);
  /* 10982526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982529 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098252b call 0x10984b90 */
  push32(0x10982530u); f_10984b90();
  /* 10982530 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982537 je 0x109825d0 */
  if (C.zf) goto L_109825d0;
  /* 1098253d mov esi, esp */
  ESI = (ESP);
  /* 1098253f push 0 */
  push32((uint32_t)(0x0u));
  /* 10982541 push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 10982546 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098254cu);
  /* 1098254c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098254f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982551 call 0x10984b90 */
  push32(0x10982556u); f_10984b90();
  /* 10982556 mov esi, esp */
  ESI = (ESP);
  /* 10982558 push 5 */
  push32((uint32_t)(0x5u));
  /* 1098255a call dword ptr [0x109b447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b447c))), 0x10982560u);
  /* 10982560 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982563 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982565 call 0x10984b90 */
  push32(0x1098256au); f_10984b90();
  /* 1098256a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098256c jne 0x109825d0 */
  if (!C.zf) goto L_109825d0;
  /* 1098256e mov esi, esp */
  ESI = (ESP);
  /* 10982570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10982572 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10982574 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x1098257au);
  /* 1098257a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098257f call 0x10984b90 */
  push32(0x10982584u); f_10984b90();
  /* 10982584 mov esi, esp */
  ESI = (ESP);
  /* 10982586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982588 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 1098258d call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982593u);
  /* 10982593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982598 call 0x10984b90 */
  push32(0x1098259du); f_10984b90();
  /* 1098259d mov esi, esp */
  ESI = (ESP);
  /* 1098259f push 0 */
  push32((uint32_t)(0x0u));
  /* 109825a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109825a3 push 0x109b14a0 */
  push32((uint32_t)(0x109b14a0u));
  /* 109825a8 push 5 */
  push32((uint32_t)(0x5u));
  /* 109825aa call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x109825b0u);
  /* 109825b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109825b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109825b5 call 0x10984b90 */
  push32(0x109825bau); f_10984b90();
  /* 109825ba mov esi, esp */
  ESI = (ESP);
  /* 109825bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109825be push 0x33 */
  push32((uint32_t)(0x33u));
  /* 109825c0 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109825c6u);
  /* 109825c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109825c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109825cb call 0x10984b90 */
  push32(0x109825d0u); f_10984b90();
L_109825d0:;
  /* 109825d0 mov esi, esp */
  ESI = (ESP);
  /* 109825d2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109825d4 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109825dau);
  /* 109825da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109825dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109825df call 0x10984b90 */
  push32(0x109825e4u); f_10984b90();
  /* 109825e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109825e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109825eb jne 0x10982702 */
  if (!C.zf) goto L_10982702;
  /* 109825f1 mov esi, esp */
  ESI = (ESP);
  /* 109825f3 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 109825f5 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109825fbu);
  /* 109825fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109825fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982600 call 0x10984b90 */
  push32(0x10982605u); f_10984b90();
  /* 10982605 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098260a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098260c je 0x10982702 */
  if (C.zf) goto L_10982702;
  /* 10982612 mov esi, esp */
  ESI = (ESP);
  /* 10982614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982616 push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 1098261b call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982621u);
  /* 10982621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982624 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982626 call 0x10984b90 */
  push32(0x1098262bu); f_10984b90();
  /* 1098262b mov esi, esp */
  ESI = (ESP);
  /* 1098262d push 5 */
  push32((uint32_t)(0x5u));
  /* 1098262f call dword ptr [0x109b447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b447c))), 0x10982635u);
  /* 10982635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098263a call 0x10984b90 */
  push32(0x1098263fu); f_10984b90();
  /* 1098263f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982641 jne 0x10982702 */
  if (!C.zf) goto L_10982702;
  /* 10982647 mov esi, esp */
  ESI = (ESP);
  /* 10982649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098264b push 0x24 */
  push32((uint32_t)(0x24u));
  /* 1098264d call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982653u);
  /* 10982653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982656 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982658 call 0x10984b90 */
  push32(0x1098265du); f_10984b90();
  /* 1098265d mov esi, esp */
  ESI = (ESP);
  /* 1098265f push 0 */
  push32((uint32_t)(0x0u));
  /* 10982661 push 0x109b1590 */
  push32((uint32_t)(0x109b1590u));
  /* 10982666 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098266cu);
  /* 1098266c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098266f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982671 call 0x10984b90 */
  push32(0x10982676u); f_10984b90();
  /* 10982676 mov esi, esp */
  ESI = (ESP);
  /* 10982678 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098267a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098267c push 0x109b14b0 */
  push32((uint32_t)(0x109b14b0u));
  /* 10982681 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982683 call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x10982689u);
  /* 10982689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098268c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098268e call 0x10984b90 */
  push32(0x10982693u); f_10984b90();
  /* 10982693 mov esi, esp */
  ESI = (ESP);
  /* 10982695 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10982697 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098269du);
  /* 1098269d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109826a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109826a2 call 0x10984b90 */
  push32(0x109826a7u); f_10984b90();
  /* 109826a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109826ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109826ae jne 0x10982702 */
  if (!C.zf) goto L_10982702;
  /* 109826b0 mov esi, esp */
  ESI = (ESP);
  /* 109826b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109826b4 push 0x109b1578 */
  push32((uint32_t)(0x109b1578u));
  /* 109826b9 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109826bfu);
  /* 109826bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109826c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109826c4 call 0x10984b90 */
  push32(0x109826c9u); f_10984b90();
  /* 109826c9 mov esi, esp */
  ESI = (ESP);
  /* 109826cb push 0 */
  push32((uint32_t)(0x0u));
  /* 109826cd push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 109826d2 push 0x109b1468 */
  push32((uint32_t)(0x109b1468u));
  /* 109826d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 109826d9 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x109826dfu);
  /* 109826df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109826e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109826e4 call 0x10984b90 */
  push32(0x109826e9u); f_10984b90();
  /* 109826e9 mov esi, esp */
  ESI = (ESP);
  /* 109826eb push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 109826f0 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109826f2 call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x109826f8u);
  /* 109826f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109826fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109826fd call 0x10984b90 */
  push32(0x10982702u); f_10984b90();
L_10982702:;
  /* 10982702 mov esi, esp */
  ESI = (ESP);
  /* 10982704 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10982706 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098270cu);
  /* 1098270c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098270f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982711 call 0x10984b90 */
  push32(0x10982716u); f_10984b90();
  /* 10982716 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098271b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098271d je 0x1098278a */
  if (C.zf) goto L_1098278a;
  /* 1098271f mov esi, esp */
  ESI = (ESP);
  /* 10982721 push 0x109b1590 */
  push32((uint32_t)(0x109b1590u));
  /* 10982726 push 0x109b14b0 */
  push32((uint32_t)(0x109b14b0u));
  /* 1098272b call dword ptr [0x109b4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4468))), 0x10982731u);
  /* 10982731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982734 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982736 call 0x10984b90 */
  push32(0x1098273bu); f_10984b90();
  /* 1098273b cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098273e jle 0x1098278a */
  if ((C.zf||C.sf!=C.of)) goto L_1098278a;
  /* 10982740 mov esi, esp */
  ESI = (ESP);
  /* 10982742 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982744 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10982746 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x1098274cu);
  /* 1098274c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098274f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982751 call 0x10984b90 */
  push32(0x10982756u); f_10984b90();
  /* 10982756 mov esi, esp */
  ESI = (ESP);
  /* 10982758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098275a push 0x109b1590 */
  push32((uint32_t)(0x109b1590u));
  /* 1098275f call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982765u);
  /* 10982765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982768 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098276a call 0x10984b90 */
  push32(0x1098276fu); f_10984b90();
  /* 1098276f mov esi, esp */
  ESI = (ESP);
  /* 10982771 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982773 push 0x109b1530 */
  push32((uint32_t)(0x109b1530u));
  /* 10982778 push 5 */
  push32((uint32_t)(0x5u));
  /* 1098277a call dword ptr [0x109b4484] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4484))), 0x10982780u);
  /* 10982780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982783 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982785 call 0x10984b90 */
  push32(0x1098278au); f_10984b90();
L_1098278a:;
  /* 1098278a mov esi, esp */
  ESI = (ESP);
  /* 1098278c push 2 */
  push32((uint32_t)(0x2u));
  /* 1098278e call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982794u);
  /* 10982794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982799 call 0x10984b90 */
  push32(0x1098279eu); f_10984b90();
  /* 1098279e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109827a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109827a5 je 0x1098283f */
  if (C.zf) goto L_1098283f;
  /* 109827ab mov esi, esp */
  ESI = (ESP);
  /* 109827ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109827af push 0x109b14f8 */
  push32((uint32_t)(0x109b14f8u));
  /* 109827b4 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x109827bau);
  /* 109827ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109827bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109827bf call 0x10984b90 */
  push32(0x109827c4u); f_10984b90();
  /* 109827c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109827c6 jle 0x1098283f */
  if ((C.zf||C.sf!=C.of)) goto L_1098283f;
  /* 109827c8 push 0x109b1428 */
  push32((uint32_t)(0x109b1428u));
  /* 109827cd call 0x10981005 */
  push32(0x109827d2u); f_10981005();
  /* 109827d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109827d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109827d7 jle 0x1098283f */
  if ((C.zf||C.sf!=C.of)) goto L_1098283f;
  /* 109827d9 mov esi, esp */
  ESI = (ESP);
  /* 109827db push 0 */
  push32((uint32_t)(0x0u));
  /* 109827dd push 2 */
  push32((uint32_t)(0x2u));
  /* 109827df call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109827e5u);
  /* 109827e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109827e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109827ea call 0x10984b90 */
  push32(0x109827efu); f_10984b90();
  /* 109827ef mov esi, esp */
  ESI = (ESP);
  /* 109827f1 push 0x109ac44c */
  push32((uint32_t)(0x109ac44cu));
  /* 109827f6 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109827fcu);
  /* 109827fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109827ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982801 call 0x10984b90 */
  push32(0x10982806u); f_10984b90();
  /* 10982806 mov esi, esp */
  ESI = (ESP);
  /* 10982808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098280a push 0x109b1428 */
  push32((uint32_t)(0x109b1428u));
  /* 1098280f call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982815u);
  /* 10982815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098281a call 0x10984b90 */
  push32(0x1098281fu); f_10984b90();
  /* 1098281f mov esi, esp */
  ESI = (ESP);
  /* 10982821 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982823 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10982828 push 0x109b14f8 */
  push32((uint32_t)(0x109b14f8u));
  /* 1098282d push 5 */
  push32((uint32_t)(0x5u));
  /* 1098282f call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x10982835u);
  /* 10982835 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982838 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098283a call 0x10984b90 */
  push32(0x1098283fu); f_10984b90();
L_1098283f:;
  /* 1098283f mov esi, esp */
  ESI = (ESP);
  /* 10982841 push 3 */
  push32((uint32_t)(0x3u));
  /* 10982843 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982849u);
  /* 10982849 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098284c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098284e call 0x10984b90 */
  push32(0x10982853u); f_10984b90();
  /* 10982853 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982858 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098285a je 0x10982916 */
  if (C.zf) goto L_10982916;
  /* 10982860 mov esi, esp */
  ESI = (ESP);
  /* 10982862 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982864 push 0x109b1500 */
  push32((uint32_t)(0x109b1500u));
  /* 10982869 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x1098286fu);
  /* 1098286f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982872 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982874 call 0x10984b90 */
  push32(0x10982879u); f_10984b90();
  /* 10982879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098287b jle 0x10982916 */
  if ((C.zf||C.sf!=C.of)) goto L_10982916;
  /* 10982881 mov esi, esp */
  ESI = (ESP);
  /* 10982883 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982885 push 3 */
  push32((uint32_t)(0x3u));
  /* 10982887 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x1098288du);
  /* 1098288d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982890 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982892 call 0x10984b90 */
  push32(0x10982897u); f_10984b90();
  /* 10982897 mov esi, esp */
  ESI = (ESP);
  /* 10982899 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098289b push 0x109b1548 */
  push32((uint32_t)(0x109b1548u));
  /* 109828a0 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109828a6u);
  /* 109828a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109828a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109828ab call 0x10984b90 */
  push32(0x109828b0u); f_10984b90();
  /* 109828b0 mov esi, esp */
  ESI = (ESP);
  /* 109828b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109828b4 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 109828b9 push 0x109b1500 */
  push32((uint32_t)(0x109b1500u));
  /* 109828be push 1 */
  push32((uint32_t)(0x1u));
  /* 109828c0 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x109828c6u);
  /* 109828c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109828c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109828cb call 0x10984b90 */
  push32(0x109828d0u); f_10984b90();
  /* 109828d0 mov esi, esp */
  ESI = (ESP);
  /* 109828d2 push 0x109ac444 */
  push32((uint32_t)(0x109ac444u));
  /* 109828d7 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109828ddu);
  /* 109828dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109828e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109828e2 call 0x10984b90 */
  push32(0x109828e7u); f_10984b90();
  /* 109828e7 mov esi, esp */
  ESI = (ESP);
  /* 109828e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109828eb push 0x109b1558 */
  push32((uint32_t)(0x109b1558u));
  /* 109828f0 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109828f6u);
  /* 109828f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109828f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109828fb call 0x10984b90 */
  push32(0x10982900u); f_10984b90();
  /* 10982900 mov esi, esp */
  ESI = (ESP);
  /* 10982902 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982904 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982906 call dword ptr [0x109b448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b448c))), 0x1098290cu);
  /* 1098290c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098290f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982911 call 0x10984b90 */
  push32(0x10982916u); f_10984b90();
L_10982916:;
  /* 10982916 mov esi, esp */
  ESI = (ESP);
  /* 10982918 push 3 */
  push32((uint32_t)(0x3u));
  /* 1098291a call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982920u);
  /* 10982920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982923 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982925 call 0x10984b90 */
  push32(0x1098292au); f_10984b90();
  /* 1098292a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098292f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982931 je 0x109829ea */
  if (C.zf) goto L_109829ea;
  /* 10982937 mov esi, esp */
  ESI = (ESP);
  /* 10982939 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098293b push 0x109b1508 */
  push32((uint32_t)(0x109b1508u));
  /* 10982940 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10982946u);
  /* 10982946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098294b call 0x10984b90 */
  push32(0x10982950u); f_10984b90();
  /* 10982950 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982952 jle 0x109829ea */
  if ((C.zf||C.sf!=C.of)) goto L_109829ea;
  /* 10982958 mov esi, esp */
  ESI = (ESP);
  /* 1098295a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098295c push 3 */
  push32((uint32_t)(0x3u));
  /* 1098295e call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982964u);
  /* 10982964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982967 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982969 call 0x10984b90 */
  push32(0x1098296eu); f_10984b90();
  /* 1098296e mov esi, esp */
  ESI = (ESP);
  /* 10982970 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982972 push 0x109b1548 */
  push32((uint32_t)(0x109b1548u));
  /* 10982977 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098297du);
  /* 1098297d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982982 call 0x10984b90 */
  push32(0x10982987u); f_10984b90();
  /* 10982987 mov esi, esp */
  ESI = (ESP);
  /* 10982989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098298b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1098298d push 0x109b1508 */
  push32((uint32_t)(0x109b1508u));
  /* 10982992 push 1 */
  push32((uint32_t)(0x1u));
  /* 10982994 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x1098299au);
  /* 1098299a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098299d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098299f call 0x10984b90 */
  push32(0x109829a4u); f_10984b90();
  /* 109829a4 mov esi, esp */
  ESI = (ESP);
  /* 109829a6 push 0x109ac444 */
  push32((uint32_t)(0x109ac444u));
  /* 109829ab call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109829b1u);
  /* 109829b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109829b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109829b6 call 0x10984b90 */
  push32(0x109829bbu); f_10984b90();
  /* 109829bb mov esi, esp */
  ESI = (ESP);
  /* 109829bd push 0 */
  push32((uint32_t)(0x0u));
  /* 109829bf push 0x109b1558 */
  push32((uint32_t)(0x109b1558u));
  /* 109829c4 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109829cau);
  /* 109829ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109829cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109829cf call 0x10984b90 */
  push32(0x109829d4u); f_10984b90();
  /* 109829d4 mov esi, esp */
  ESI = (ESP);
  /* 109829d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109829d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 109829da call dword ptr [0x109b448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b448c))), 0x109829e0u);
  /* 109829e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109829e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109829e5 call 0x10984b90 */
  push32(0x109829eau); f_10984b90();
L_109829ea:;
  /* 109829ea mov esi, esp */
  ESI = (ESP);
  /* 109829ec push 3 */
  push32((uint32_t)(0x3u));
  /* 109829ee call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109829f4u);
  /* 109829f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109829f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109829f9 call 0x10984b90 */
  push32(0x109829feu); f_10984b90();
  /* 109829fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982a03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982a05 je 0x10982abe */
  if (C.zf) goto L_10982abe;
  /* 10982a0b mov esi, esp */
  ESI = (ESP);
  /* 10982a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10982a0f push 0x109b14d0 */
  push32((uint32_t)(0x109b14d0u));
  /* 10982a14 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10982a1au);
  /* 10982a1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982a1f call 0x10984b90 */
  push32(0x10982a24u); f_10984b90();
  /* 10982a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982a26 jle 0x10982abe */
  if ((C.zf||C.sf!=C.of)) goto L_10982abe;
  /* 10982a2c mov esi, esp */
  ESI = (ESP);
  /* 10982a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10982a30 push 3 */
  push32((uint32_t)(0x3u));
  /* 10982a32 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982a38u);
  /* 10982a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982a3d call 0x10984b90 */
  push32(0x10982a42u); f_10984b90();
  /* 10982a42 mov esi, esp */
  ESI = (ESP);
  /* 10982a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982a46 push 0x109b1548 */
  push32((uint32_t)(0x109b1548u));
  /* 10982a4b call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982a51u);
  /* 10982a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982a54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982a56 call 0x10984b90 */
  push32(0x10982a5bu); f_10984b90();
  /* 10982a5b mov esi, esp */
  ESI = (ESP);
  /* 10982a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10982a5f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10982a61 push 0x109b14d0 */
  push32((uint32_t)(0x109b14d0u));
  /* 10982a66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10982a68 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982a6eu);
  /* 10982a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982a71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982a73 call 0x10984b90 */
  push32(0x10982a78u); f_10984b90();
  /* 10982a78 mov esi, esp */
  ESI = (ESP);
  /* 10982a7a push 0x109ac444 */
  push32((uint32_t)(0x109ac444u));
  /* 10982a7f call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982a85u);
  /* 10982a85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982a88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982a8a call 0x10984b90 */
  push32(0x10982a8fu); f_10984b90();
  /* 10982a8f mov esi, esp */
  ESI = (ESP);
  /* 10982a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982a93 push 0x109b1558 */
  push32((uint32_t)(0x109b1558u));
  /* 10982a98 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982a9eu);
  /* 10982a9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982aa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982aa3 call 0x10984b90 */
  push32(0x10982aa8u); f_10984b90();
  /* 10982aa8 mov esi, esp */
  ESI = (ESP);
  /* 10982aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10982aac push 5 */
  push32((uint32_t)(0x5u));
  /* 10982aae call dword ptr [0x109b448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b448c))), 0x10982ab4u);
  /* 10982ab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982ab7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982ab9 call 0x10984b90 */
  push32(0x10982abeu); f_10984b90();
L_10982abe:;
  /* 10982abe mov esi, esp */
  ESI = (ESP);
  /* 10982ac0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10982ac2 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982ac8u);
  /* 10982ac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982acb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982acd call 0x10984b90 */
  push32(0x10982ad2u); f_10984b90();
  /* 10982ad2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982ad9 je 0x10982ca5 */
  if (C.zf) goto L_10982ca5;
  /* 10982adf mov esi, esp */
  ESI = (ESP);
  /* 10982ae1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10982ae3 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982ae9u);
  /* 10982ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982aec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982aee call 0x10984b90 */
  push32(0x10982af3u); f_10984b90();
  /* 10982af3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982afa jne 0x10982ca5 */
  if (!C.zf) goto L_10982ca5;
  /* 10982b00 push 0x109b1558 */
  push32((uint32_t)(0x109b1558u));
  /* 10982b05 call 0x10981005 */
  push32(0x10982b0au); f_10981005();
  /* 10982b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982b0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982b0f jne 0x10982ca5 */
  if (!C.zf) goto L_10982ca5;
  /* 10982b15 push 0x109b1548 */
  push32((uint32_t)(0x109b1548u));
  /* 10982b1a call 0x10981005 */
  push32(0x10982b1fu); f_10981005();
  /* 10982b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982b24 jle 0x10982ca5 */
  if ((C.zf||C.sf!=C.of)) goto L_10982ca5;
  /* 10982b2a mov esi, esp */
  ESI = (ESP);
  /* 10982b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10982b2e push 4 */
  push32((uint32_t)(0x4u));
  /* 10982b30 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982b36u);
  /* 10982b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982b39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982b3b call 0x10984b90 */
  push32(0x10982b40u); f_10984b90();
  /* 10982b40 mov esi, esp */
  ESI = (ESP);
  /* 10982b42 push 0x109ac43c */
  push32((uint32_t)(0x109ac43cu));
  /* 10982b47 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982b4du);
  /* 10982b4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982b52 call 0x10984b90 */
  push32(0x10982b57u); f_10984b90();
  /* 10982b57 mov esi, esp */
  ESI = (ESP);
  /* 10982b59 push 0x109ac430 */
  push32((uint32_t)(0x109ac430u));
  /* 10982b5e call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982b64u);
  /* 10982b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982b69 call 0x10984b90 */
  push32(0x10982b6eu); f_10984b90();
  /* 10982b6e mov esi, esp */
  ESI = (ESP);
  /* 10982b70 push 0x109ac424 */
  push32((uint32_t)(0x109ac424u));
  /* 10982b75 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982b7bu);
  /* 10982b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982b7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982b80 call 0x10984b90 */
  push32(0x10982b85u); f_10984b90();
  /* 10982b85 mov esi, esp */
  ESI = (ESP);
  /* 10982b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982b89 push 0x109b1548 */
  push32((uint32_t)(0x109b1548u));
  /* 10982b8e call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982b94u);
  /* 10982b94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982b99 call 0x10984b90 */
  push32(0x10982b9eu); f_10984b90();
  /* 10982b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10982ba0 push 0x109b14f0 */
  push32((uint32_t)(0x109b14f0u));
  /* 10982ba5 call 0x1098100f */
  push32(0x10982baau); f_1098100f();
  /* 10982baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982baf jle 0x10982c06 */
  if ((C.zf||C.sf!=C.of)) goto L_10982c06;
  /* 10982bb1 mov esi, esp */
  ESI = (ESP);
  /* 10982bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10982bb5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10982bb7 push 0x109b1528 */
  push32((uint32_t)(0x109b1528u));
  /* 10982bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10982bbe call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982bc4u);
  /* 10982bc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982bc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982bc9 call 0x10984b90 */
  push32(0x10982bceu); f_10984b90();
  /* 10982bce mov esi, esp */
  ESI = (ESP);
  /* 10982bd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10982bd2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10982bd4 push 0x109b1530 */
  push32((uint32_t)(0x109b1530u));
  /* 10982bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982bdb call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982be1u);
  /* 10982be1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982be4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982be6 call 0x10984b90 */
  push32(0x10982bebu); f_10984b90();
  /* 10982beb mov esi, esp */
  ESI = (ESP);
  /* 10982bed push 1 */
  push32((uint32_t)(0x1u));
  /* 10982bef push 0 */
  push32((uint32_t)(0x0u));
  /* 10982bf1 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x10982bf7u);
  /* 10982bf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982bfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982bfc call 0x10984b90 */
  push32(0x10982c01u); f_10984b90();
  /* 10982c01 jmp 0x10982ca5 */
  goto L_10982ca5;
L_10982c06:;
  /* 10982c06 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982c08 push 0x109b14f0 */
  push32((uint32_t)(0x109b14f0u));
  /* 10982c0d call 0x1098100f */
  push32(0x10982c12u); f_1098100f();
  /* 10982c12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982c17 jle 0x10982c6b */
  if ((C.zf||C.sf!=C.of)) goto L_10982c6b;
  /* 10982c19 mov esi, esp */
  ESI = (ESP);
  /* 10982c1b push 2 */
  push32((uint32_t)(0x2u));
  /* 10982c1d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10982c1f push 0x109b1528 */
  push32((uint32_t)(0x109b1528u));
  /* 10982c24 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982c26 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982c2cu);
  /* 10982c2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982c31 call 0x10984b90 */
  push32(0x10982c36u); f_10984b90();
  /* 10982c36 mov esi, esp */
  ESI = (ESP);
  /* 10982c38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10982c3a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10982c3c push 0x109b1530 */
  push32((uint32_t)(0x109b1530u));
  /* 10982c41 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982c43 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982c49u);
  /* 10982c49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982c4e call 0x10984b90 */
  push32(0x10982c53u); f_10984b90();
  /* 10982c53 mov esi, esp */
  ESI = (ESP);
  /* 10982c55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10982c57 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982c59 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x10982c5fu);
  /* 10982c5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982c62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982c64 call 0x10984b90 */
  push32(0x10982c69u); f_10984b90();
  /* 10982c69 jmp 0x10982ca5 */
  goto L_10982ca5;
L_10982c6b:;
  /* 10982c6b mov esi, esp */
  ESI = (ESP);
  /* 10982c6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10982c6f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10982c71 push 0x109b1528 */
  push32((uint32_t)(0x109b1528u));
  /* 10982c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10982c78 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982c7eu);
  /* 10982c7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982c83 call 0x10984b90 */
  push32(0x10982c88u); f_10984b90();
  /* 10982c88 mov esi, esp */
  ESI = (ESP);
  /* 10982c8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10982c8c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10982c8e push 0x109b1530 */
  push32((uint32_t)(0x109b1530u));
  /* 10982c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10982c95 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982c9bu);
  /* 10982c9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982c9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982ca0 call 0x10984b90 */
  push32(0x10982ca5u); f_10984b90();
L_10982ca5:;
  /* 10982ca5 mov esi, esp */
  ESI = (ESP);
  /* 10982ca7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982ca9 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982cafu);
  /* 10982caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982cb4 call 0x10984b90 */
  push32(0x10982cb9u); f_10984b90();
  /* 10982cb9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982cc0 je 0x10982d84 */
  if (C.zf) goto L_10982d84;
  /* 10982cc6 mov esi, esp */
  ESI = (ESP);
  /* 10982cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982cca push 0x109b1510 */
  push32((uint32_t)(0x109b1510u));
  /* 10982ccf call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10982cd5u);
  /* 10982cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982cd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982cda call 0x10984b90 */
  push32(0x10982cdfu); f_10984b90();
  /* 10982cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982ce1 jle 0x10982d84 */
  if ((C.zf||C.sf!=C.of)) goto L_10982d84;
  /* 10982ce7 push 0x109b1420 */
  push32((uint32_t)(0x109b1420u));
  /* 10982cec call 0x10981005 */
  push32(0x10982cf1u); f_10981005();
  /* 10982cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982cf6 jle 0x10982d84 */
  if ((C.zf||C.sf!=C.of)) goto L_10982d84;
  /* 10982cfc mov esi, esp */
  ESI = (ESP);
  /* 10982cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10982d00 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982d02 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982d08u);
  /* 10982d08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982d0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982d0d call 0x10984b90 */
  push32(0x10982d12u); f_10984b90();
  /* 10982d12 mov esi, esp */
  ESI = (ESP);
  /* 10982d14 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10982d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982d18 push 0x109b14d8 */
  push32((uint32_t)(0x109b14d8u));
  /* 10982d1d push 0x109b1510 */
  push32((uint32_t)(0x109b1510u));
  /* 10982d22 push 0x109b14e8 */
  push32((uint32_t)(0x109b14e8u));
  /* 10982d27 call dword ptr [0x109b4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4490))), 0x10982d2du);
  /* 10982d2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982d30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982d32 call 0x10984b90 */
  push32(0x10982d37u); f_10984b90();
  /* 10982d37 mov esi, esp */
  ESI = (ESP);
  /* 10982d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982d3b push 0x109b1420 */
  push32((uint32_t)(0x109b1420u));
  /* 10982d40 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982d46u);
  /* 10982d46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982d49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982d4b call 0x10984b90 */
  push32(0x10982d50u); f_10984b90();
  /* 10982d50 mov esi, esp */
  ESI = (ESP);
  /* 10982d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982d56 push 0x109b14e8 */
  push32((uint32_t)(0x109b14e8u));
  /* 10982d5b push 5 */
  push32((uint32_t)(0x5u));
  /* 10982d5d call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x10982d63u);
  /* 10982d63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982d68 call 0x10984b90 */
  push32(0x10982d6du); f_10984b90();
  /* 10982d6d mov esi, esp */
  ESI = (ESP);
  /* 10982d6f push 0x109ac41c */
  push32((uint32_t)(0x109ac41cu));
  /* 10982d74 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982d7au);
  /* 10982d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982d7f call 0x10984b90 */
  push32(0x10982d84u); f_10984b90();
L_10982d84:;
  /* 10982d84 mov esi, esp */
  ESI = (ESP);
  /* 10982d86 push 6 */
  push32((uint32_t)(0x6u));
  /* 10982d88 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982d8eu);
  /* 10982d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982d91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982d93 call 0x10984b90 */
  push32(0x10982d98u); f_10984b90();
  /* 10982d98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982d9f je 0x10982e51 */
  if (C.zf) goto L_10982e51;
  /* 10982da5 mov esi, esp */
  ESI = (ESP);
  /* 10982da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982da9 push 0x109b1518 */
  push32((uint32_t)(0x109b1518u));
  /* 10982dae call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10982db4u);
  /* 10982db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982db9 call 0x10984b90 */
  push32(0x10982dbeu); f_10984b90();
  /* 10982dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982dc0 jle 0x10982e51 */
  if ((C.zf||C.sf!=C.of)) goto L_10982e51;
  /* 10982dc6 push 0x109b1418 */
  push32((uint32_t)(0x109b1418u));
  /* 10982dcb call 0x10981005 */
  push32(0x10982dd0u); f_10981005();
  /* 10982dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982dd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982dd5 jle 0x10982e51 */
  if ((C.zf||C.sf!=C.of)) goto L_10982e51;
  /* 10982dd7 mov esi, esp */
  ESI = (ESP);
  /* 10982dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982ddb push 6 */
  push32((uint32_t)(0x6u));
  /* 10982ddd call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982de3u);
  /* 10982de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982de8 call 0x10984b90 */
  push32(0x10982dedu); f_10984b90();
  /* 10982ded mov esi, esp */
  ESI = (ESP);
  /* 10982def push 0x109ac414 */
  push32((uint32_t)(0x109ac414u));
  /* 10982df4 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982dfau);
  /* 10982dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982dfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982dff call 0x10984b90 */
  push32(0x10982e04u); f_10984b90();
  /* 10982e04 mov esi, esp */
  ESI = (ESP);
  /* 10982e06 push 0x109ac408 */
  push32((uint32_t)(0x109ac408u));
  /* 10982e0b call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982e11u);
  /* 10982e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982e14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982e16 call 0x10984b90 */
  push32(0x10982e1bu); f_10984b90();
  /* 10982e1b mov esi, esp */
  ESI = (ESP);
  /* 10982e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10982e1f push 0x109b1418 */
  push32((uint32_t)(0x109b1418u));
  /* 10982e24 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982e2au);
  /* 10982e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982e2f call 0x10984b90 */
  push32(0x10982e34u); f_10984b90();
  /* 10982e34 mov esi, esp */
  ESI = (ESP);
  /* 10982e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982e3a push 0x109b1520 */
  push32((uint32_t)(0x109b1520u));
  /* 10982e3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10982e41 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10982e47u);
  /* 10982e47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982e4c call 0x10984b90 */
  push32(0x10982e51u); f_10984b90();
L_10982e51:;
  /* 10982e51 mov esi, esp */
  ESI = (ESP);
  /* 10982e53 push 7 */
  push32((uint32_t)(0x7u));
  /* 10982e55 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982e5bu);
  /* 10982e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982e5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982e60 call 0x10984b90 */
  push32(0x10982e65u); f_10984b90();
  /* 10982e65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982e6c je 0x10982f18 */
  if (C.zf) goto L_10982f18;
  /* 10982e72 mov esi, esp */
  ESI = (ESP);
  /* 10982e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982e76 push 0x109b1520 */
  push32((uint32_t)(0x109b1520u));
  /* 10982e7b call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10982e81u);
  /* 10982e81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982e84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982e86 call 0x10984b90 */
  push32(0x10982e8bu); f_10984b90();
  /* 10982e8b cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982e8e jle 0x10982f18 */
  if ((C.zf||C.sf!=C.of)) goto L_10982f18;
  /* 10982e94 push 0x109b15a8 */
  push32((uint32_t)(0x109b15a8u));
  /* 10982e99 call 0x10981005 */
  push32(0x10982e9eu); f_10981005();
  /* 10982e9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982ea1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982ea3 jle 0x10982f18 */
  if ((C.zf||C.sf!=C.of)) goto L_10982f18;
  /* 10982ea5 mov esi, esp */
  ESI = (ESP);
  /* 10982ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982ea9 push 7 */
  push32((uint32_t)(0x7u));
  /* 10982eab call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982eb1u);
  /* 10982eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982eb6 call 0x10984b90 */
  push32(0x10982ebbu); f_10984b90();
  /* 10982ebb mov esi, esp */
  ESI = (ESP);
  /* 10982ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 10982ebf push 0x109b15a8 */
  push32((uint32_t)(0x109b15a8u));
  /* 10982ec4 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982ecau);
  /* 10982eca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982ecd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982ecf call 0x10984b90 */
  push32(0x10982ed4u); f_10984b90();
  /* 10982ed4 mov esi, esp */
  ESI = (ESP);
  /* 10982ed6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10982eda call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x10982ee0u);
  /* 10982ee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982ee3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982ee5 call 0x10984b90 */
  push32(0x10982eeau); f_10984b90();
  /* 10982eea mov esi, esp */
  ESI = (ESP);
  /* 10982eec push 0x109ac400 */
  push32((uint32_t)(0x109ac400u));
  /* 10982ef1 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982ef7u);
  /* 10982ef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982efa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982efc call 0x10984b90 */
  push32(0x10982f01u); f_10984b90();
  /* 10982f01 mov esi, esp */
  ESI = (ESP);
  /* 10982f03 push 0x109ac3f4 */
  push32((uint32_t)(0x109ac3f4u));
  /* 10982f08 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982f0eu);
  /* 10982f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982f11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982f13 call 0x10984b90 */
  push32(0x10982f18u); f_10984b90();
L_10982f18:;
  /* 10982f18 mov esi, esp */
  ESI = (ESP);
  /* 10982f1a push 8 */
  push32((uint32_t)(0x8u));
  /* 10982f1c call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10982f22u);
  /* 10982f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982f25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982f27 call 0x10984b90 */
  push32(0x10982f2cu); f_10984b90();
  /* 10982f2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10982f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982f33 je 0x109830ce */
  if (C.zf) goto L_109830ce;
  /* 10982f39 mov esi, esp */
  ESI = (ESP);
  /* 10982f3b push 0x109b13e8 */
  push32((uint32_t)(0x109b13e8u));
  /* 10982f40 push 0x109b1538 */
  push32((uint32_t)(0x109b1538u));
  /* 10982f45 call dword ptr [0x109b4468] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4468))), 0x10982f4bu);
  /* 10982f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982f50 call 0x10984b90 */
  push32(0x10982f55u); f_10984b90();
  /* 10982f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982f57 jle 0x109830ce */
  if ((C.zf||C.sf!=C.of)) goto L_109830ce;
  /* 10982f5d mov esi, esp */
  ESI = (ESP);
  /* 10982f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10982f61 push 8 */
  push32((uint32_t)(0x8u));
  /* 10982f63 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10982f69u);
  /* 10982f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982f6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982f6e call 0x10984b90 */
  push32(0x10982f73u); f_10984b90();
  /* 10982f73 mov esi, esp */
  ESI = (ESP);
  /* 10982f75 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10982f77 call dword ptr [0x109b4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4494))), 0x10982f7du);
  /* 10982f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982f82 call 0x10984b90 */
  push32(0x10982f87u); f_10984b90();
  /* 10982f87 push 0x109b1408 */
  push32((uint32_t)(0x109b1408u));
  /* 10982f8c call 0x10981005 */
  push32(0x10982f91u); f_10981005();
  /* 10982f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10982f96 jle 0x1098302d */
  if ((C.zf||C.sf!=C.of)) goto L_1098302d;
  /* 10982f9c mov esi, esp */
  ESI = (ESP);
  /* 10982f9e push 0x109ac3ec */
  push32((uint32_t)(0x109ac3ecu));
  /* 10982fa3 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10982fa9u);
  /* 10982fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982fac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982fae call 0x10984b90 */
  push32(0x10982fb3u); f_10984b90();
  /* 10982fb3 mov esi, esp */
  ESI = (ESP);
  /* 10982fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10982fb7 push 0x109b1568 */
  push32((uint32_t)(0x109b1568u));
  /* 10982fbc call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10982fc2u);
  /* 10982fc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982fc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982fc7 call 0x10984b90 */
  push32(0x10982fccu); f_10984b90();
  /* 10982fcc mov esi, esp */
  ESI = (ESP);
  /* 10982fce push 5 */
  push32((uint32_t)(0x5u));
  /* 10982fd0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10982fd2 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x10982fd8u);
  /* 10982fd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982fdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982fdd call 0x10984b90 */
  push32(0x10982fe2u); f_10984b90();
  /* 10982fe2 mov esi, esp */
  ESI = (ESP);
  /* 10982fe4 push 0x109b1408 */
  push32((uint32_t)(0x109b1408u));
  /* 10982fe9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10982feb call dword ptr [0x109b4480] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4480))), 0x10982ff1u);
  /* 10982ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10982ff4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10982ff6 call 0x10984b90 */
  push32(0x10982ffbu); f_10984b90();
  /* 10982ffb mov esi, esp */
  ESI = (ESP);
  /* 10982ffd push 0xa */
  push32((uint32_t)(0xau));
  /* 10982fff push 1 */
  push32((uint32_t)(0x1u));
  /* 10983001 call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x10983007u);
  /* 10983007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098300a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098300c call 0x10984b90 */
  push32(0x10983011u); f_10984b90();
  /* 10983011 mov esi, esp */
  ESI = (ESP);
  /* 10983013 push 0x109ac3e0 */
  push32((uint32_t)(0x109ac3e0u));
  /* 10983018 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098301eu);
  /* 1098301e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983021 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983023 call 0x10984b90 */
  push32(0x10983028u); f_10984b90();
  /* 10983028 jmp 0x109830ce */
  goto L_109830ce;
L_1098302d:;
  /* 1098302d mov esi, esp */
  ESI = (ESP);
  /* 1098302f push 0x109ac3d4 */
  push32((uint32_t)(0x109ac3d4u));
  /* 10983034 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098303au);
  /* 1098303a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098303d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098303f call 0x10984b90 */
  push32(0x10983044u); f_10984b90();
  /* 10983044 mov esi, esp */
  ESI = (ESP);
  /* 10983046 push 0x109ac3c8 */
  push32((uint32_t)(0x109ac3c8u));
  /* 1098304b call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983051u);
  /* 10983051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983054 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983056 call 0x10984b90 */
  push32(0x1098305bu); f_10984b90();
  /* 1098305b mov esi, esp */
  ESI = (ESP);
  /* 1098305d push 0x109ac3bc */
  push32((uint32_t)(0x109ac3bcu));
  /* 10983062 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983068u);
  /* 10983068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098306b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098306d call 0x10984b90 */
  push32(0x10983072u); f_10984b90();
  /* 10983072 mov esi, esp */
  ESI = (ESP);
  /* 10983074 push 0x109ac3b0 */
  push32((uint32_t)(0x109ac3b0u));
  /* 10983079 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098307fu);
  /* 1098307f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983082 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983084 call 0x10984b90 */
  push32(0x10983089u); f_10984b90();
  /* 10983089 mov esi, esp */
  ESI = (ESP);
  /* 1098308b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098308d push 0x109b13f0 */
  push32((uint32_t)(0x109b13f0u));
  /* 10983092 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10983098u);
  /* 10983098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098309b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098309d call 0x10984b90 */
  push32(0x109830a2u); f_10984b90();
  /* 109830a2 mov esi, esp */
  ESI = (ESP);
  /* 109830a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109830a6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 109830a8 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109830aeu);
  /* 109830ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109830b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109830b3 call 0x10984b90 */
  push32(0x109830b8u); f_10984b90();
  /* 109830b8 mov esi, esp */
  ESI = (ESP);
  /* 109830ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109830bc push 4 */
  push32((uint32_t)(0x4u));
  /* 109830be call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x109830c4u);
  /* 109830c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109830c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109830c9 call 0x10984b90 */
  push32(0x109830ceu); f_10984b90();
L_109830ce:;
  /* 109830ce mov esi, esp */
  ESI = (ESP);
  /* 109830d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109830d2 call dword ptr [0x109b4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4478))), 0x109830d8u);
  /* 109830d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109830db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109830dd call 0x10984b90 */
  push32(0x109830e2u); f_10984b90();
  /* 109830e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109830e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109830e9 je 0x1098312e */
  if (C.zf) goto L_1098312e;
  /* 109830eb mov esi, esp */
  ESI = (ESP);
  /* 109830ed push 0 */
  push32((uint32_t)(0x0u));
  /* 109830ef push 0x109b1408 */
  push32((uint32_t)(0x109b1408u));
  /* 109830f4 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109830fau);
  /* 109830fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109830fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109830ff call 0x10984b90 */
  push32(0x10983104u); f_10984b90();
  /* 10983104 mov esi, esp */
  ESI = (ESP);
  /* 10983106 push 4 */
  push32((uint32_t)(0x4u));
  /* 10983108 call dword ptr [0x109b4498] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4498))), 0x1098310eu);
  /* 1098310e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983113 call 0x10984b90 */
  push32(0x10983118u); f_10984b90();
  /* 10983118 mov esi, esp */
  ESI = (ESP);
  /* 1098311a push 0x23 */
  push32((uint32_t)(0x23u));
  /* 1098311c push 2 */
  push32((uint32_t)(0x2u));
  /* 1098311e call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x10983124u);
  /* 10983124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983127 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983129 call 0x10984b90 */
  push32(0x1098312eu); f_10984b90();
L_1098312e:;
  /* 1098312e mov esi, esp */
  ESI = (ESP);
  /* 10983130 push 2 */
  push32((uint32_t)(0x2u));
  /* 10983132 call dword ptr [0x109b4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4478))), 0x10983138u);
  /* 10983138 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098313b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098313d call 0x10984b90 */
  push32(0x10983142u); f_10984b90();
  /* 10983142 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983147 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983149 je 0x109831d9 */
  if (C.zf) goto L_109831d9;
  /* 1098314f mov esi, esp */
  ESI = (ESP);
  /* 10983151 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983153 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10983155 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x1098315bu);
  /* 1098315b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098315e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983160 call 0x10984b90 */
  push32(0x10983165u); f_10984b90();
  /* 10983165 mov esi, esp */
  ESI = (ESP);
  /* 10983167 push 0x109ac3a4 */
  push32((uint32_t)(0x109ac3a4u));
  /* 1098316c call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983172u);
  /* 10983172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983177 call 0x10984b90 */
  push32(0x1098317cu); f_10984b90();
  /* 1098317c mov esi, esp */
  ESI = (ESP);
  /* 1098317e push 0x109ac398 */
  push32((uint32_t)(0x109ac398u));
  /* 10983183 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983189u);
  /* 10983189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098318c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098318e call 0x10984b90 */
  push32(0x10983193u); f_10984b90();
  /* 10983193 mov esi, esp */
  ESI = (ESP);
  /* 10983195 push 0x109ac3b0 */
  push32((uint32_t)(0x109ac3b0u));
  /* 1098319a call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109831a0u);
  /* 109831a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109831a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109831a5 call 0x10984b90 */
  push32(0x109831aau); f_10984b90();
  /* 109831aa mov esi, esp */
  ESI = (ESP);
  /* 109831ac push 0 */
  push32((uint32_t)(0x0u));
  /* 109831ae push 0x109b13f0 */
  push32((uint32_t)(0x109b13f0u));
  /* 109831b3 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109831b9u);
  /* 109831b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109831bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109831be call 0x10984b90 */
  push32(0x109831c3u); f_10984b90();
  /* 109831c3 mov esi, esp */
  ESI = (ESP);
  /* 109831c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109831c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109831c9 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x109831cfu);
  /* 109831cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109831d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109831d4 call 0x10984b90 */
  push32(0x109831d9u); f_10984b90();
L_109831d9:;
  /* 109831d9 mov esi, esp */
  ESI = (ESP);
  /* 109831db push 9 */
  push32((uint32_t)(0x9u));
  /* 109831dd call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109831e3u);
  /* 109831e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109831e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109831e8 call 0x10984b90 */
  push32(0x109831edu); f_10984b90();
  /* 109831ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109831f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109831f4 je 0x10983294 */
  if (C.zf) goto L_10983294;
  /* 109831fa mov esi, esp */
  ESI = (ESP);
  /* 109831fc call dword ptr [0x109b4454] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4454))), 0x10983202u);
  /* 10983202 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983204 call 0x10984b90 */
  push32(0x10983209u); f_10984b90();
  /* 10983209 cmp eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098320e jle 0x10983294 */
  if ((C.zf||C.sf!=C.of)) goto L_10983294;
  /* 10983214 mov esi, esp */
  ESI = (ESP);
  /* 10983216 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983218 push 9 */
  push32((uint32_t)(0x9u));
  /* 1098321a call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983220u);
  /* 10983220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983223 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983225 call 0x10984b90 */
  push32(0x1098322au); f_10984b90();
  /* 1098322a mov esi, esp */
  ESI = (ESP);
  /* 1098322c push 8 */
  push32((uint32_t)(0x8u));
  /* 1098322e call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983234u);
  /* 10983234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983237 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983239 call 0x10984b90 */
  push32(0x1098323eu); f_10984b90();
  /* 1098323e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983245 jne 0x1098325e */
  if (!C.zf) goto L_1098325e;
  /* 10983247 mov esi, esp */
  ESI = (ESP);
  /* 10983249 push 0x109ac390 */
  push32((uint32_t)(0x109ac390u));
  /* 1098324e call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983254u);
  /* 10983254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983257 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983259 call 0x10984b90 */
  push32(0x1098325eu); f_10984b90();
L_1098325e:;
  /* 1098325e mov esi, esp */
  ESI = (ESP);
  /* 10983260 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983262 push 0x109b1400 */
  push32((uint32_t)(0x109b1400u));
  /* 10983267 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098326du);
  /* 1098326d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983270 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983272 call 0x10984b90 */
  push32(0x10983277u); f_10984b90();
  /* 10983277 mov esi, esp */
  ESI = (ESP);
  /* 10983279 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098327b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098327d push 0x109b1440 */
  push32((uint32_t)(0x109b1440u));
  /* 10983282 push 4 */
  push32((uint32_t)(0x4u));
  /* 10983284 call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x1098328au);
  /* 1098328a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098328d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098328f call 0x10984b90 */
  push32(0x10983294u); f_10984b90();
L_10983294:;
  /* 10983294 mov esi, esp */
  ESI = (ESP);
  /* 10983296 push 0xa */
  push32((uint32_t)(0xau));
  /* 10983298 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098329eu);
  /* 1098329e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109832a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109832a3 call 0x10984b90 */
  push32(0x109832a8u); f_10984b90();
  /* 109832a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109832ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109832af je 0x10983408 */
  if (C.zf) goto L_10983408;
  /* 109832b5 mov esi, esp */
  ESI = (ESP);
  /* 109832b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109832b9 push 0x109b1448 */
  push32((uint32_t)(0x109b1448u));
  /* 109832be call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x109832c4u);
  /* 109832c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109832c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109832c9 call 0x10984b90 */
  push32(0x109832ceu); f_10984b90();
  /* 109832ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109832d0 je 0x10983408 */
  if (C.zf) goto L_10983408;
  /* 109832d6 mov esi, esp */
  ESI = (ESP);
  /* 109832d8 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 109832da call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109832e0u);
  /* 109832e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109832e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109832e5 call 0x10984b90 */
  push32(0x109832eau); f_10984b90();
  /* 109832ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109832ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109832f1 je 0x10983378 */
  if (C.zf) goto L_10983378;
  /* 109832f7 mov esi, esp */
  ESI = (ESP);
  /* 109832f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109832fb push 0xa */
  push32((uint32_t)(0xau));
  /* 109832fd call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983303u);
  /* 10983303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983306 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983308 call 0x10984b90 */
  push32(0x1098330du); f_10984b90();
  /* 1098330d mov esi, esp */
  ESI = (ESP);
  /* 1098330f push 0x109ac384 */
  push32((uint32_t)(0x109ac384u));
  /* 10983314 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098331au);
  /* 1098331a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098331d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098331f call 0x10984b90 */
  push32(0x10983324u); f_10984b90();
  /* 10983324 mov esi, esp */
  ESI = (ESP);
  /* 10983326 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983328 push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 1098332d call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10983333u);
  /* 10983333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983338 call 0x10984b90 */
  push32(0x1098333du); f_10984b90();
  /* 1098333d mov esi, esp */
  ESI = (ESP);
  /* 1098333f push 0 */
  push32((uint32_t)(0x0u));
  /* 10983341 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10983346 push 0x109b1448 */
  push32((uint32_t)(0x109b1448u));
  /* 1098334b push 4 */
  push32((uint32_t)(0x4u));
  /* 1098334d call dword ptr [0x109b444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b444c))), 0x10983353u);
  /* 10983353 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983358 call 0x10984b90 */
  push32(0x1098335du); f_10984b90();
  /* 1098335d mov esi, esp */
  ESI = (ESP);
  /* 1098335f push 0 */
  push32((uint32_t)(0x0u));
  /* 10983361 push 4 */
  push32((uint32_t)(0x4u));
  /* 10983363 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x10983369u);
  /* 10983369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098336c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098336e call 0x10984b90 */
  push32(0x10983373u); f_10984b90();
  /* 10983373 jmp 0x10983408 */
  goto L_10983408;
L_10983378:;
  /* 10983378 mov esi, esp */
  ESI = (ESP);
  /* 1098337a push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1098337c call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983382u);
  /* 10983382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983385 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983387 call 0x10984b90 */
  push32(0x1098338cu); f_10984b90();
  /* 1098338c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983393 jne 0x10983408 */
  if (!C.zf) goto L_10983408;
  /* 10983395 mov esi, esp */
  ESI = (ESP);
  /* 10983397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983399 push 0xa */
  push32((uint32_t)(0xau));
  /* 1098339b call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109833a1u);
  /* 109833a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109833a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109833a6 call 0x10984b90 */
  push32(0x109833abu); f_10984b90();
  /* 109833ab mov esi, esp */
  ESI = (ESP);
  /* 109833ad push 0x109ac378 */
  push32((uint32_t)(0x109ac378u));
  /* 109833b2 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109833b8u);
  /* 109833b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109833bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109833bd call 0x10984b90 */
  push32(0x109833c2u); f_10984b90();
  /* 109833c2 mov esi, esp */
  ESI = (ESP);
  /* 109833c4 push 0x109ac36c */
  push32((uint32_t)(0x109ac36cu));
  /* 109833c9 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109833cfu);
  /* 109833cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109833d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109833d4 call 0x10984b90 */
  push32(0x109833d9u); f_10984b90();
  /* 109833d9 mov esi, esp */
  ESI = (ESP);
  /* 109833db push 0 */
  push32((uint32_t)(0x0u));
  /* 109833dd push 0x109b1410 */
  push32((uint32_t)(0x109b1410u));
  /* 109833e2 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109833e8u);
  /* 109833e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109833eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109833ed call 0x10984b90 */
  push32(0x109833f2u); f_10984b90();
  /* 109833f2 mov esi, esp */
  ESI = (ESP);
  /* 109833f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109833f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 109833f8 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x109833feu);
  /* 109833fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983401 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983403 call 0x10984b90 */
  push32(0x10983408u); f_10984b90();
L_10983408:;
  /* 10983408 mov esi, esp */
  ESI = (ESP);
  /* 1098340a push 0xb */
  push32((uint32_t)(0xbu));
  /* 1098340c call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983412u);
  /* 10983412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983415 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983417 call 0x10984b90 */
  push32(0x1098341cu); f_10984b90();
  /* 1098341c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983423 je 0x109834a1 */
  if (C.zf) goto L_109834a1;
  /* 10983425 push 0x109b15b0 */
  push32((uint32_t)(0x109b15b0u));
  /* 1098342a call 0x10981005 */
  push32(0x1098342fu); f_10981005();
  /* 1098342f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983432 mov esi, eax */
  ESI = (EAX);
  /* 10983434 push 0x109b1590 */
  push32((uint32_t)(0x109b1590u));
  /* 10983439 call 0x10981005 */
  push32(0x1098343eu); f_10981005();
  /* 1098343e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983441 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10983443 push 0x109b15a0 */
  push32((uint32_t)(0x109b15a0u));
  /* 10983448 call 0x10981005 */
  push32(0x1098344du); f_10981005();
  /* 1098344d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983450 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10983452 push 0x109b1588 */
  push32((uint32_t)(0x109b1588u));
  /* 10983457 call 0x10981005 */
  push32(0x1098345cu); f_10981005();
  /* 1098345c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098345f add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10983461 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10983463 jne 0x109834a1 */
  if (!C.zf) goto L_109834a1;
  /* 10983465 mov esi, esp */
  ESI = (ESP);
  /* 10983467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983469 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1098346b call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983471u);
  /* 10983471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983474 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983476 call 0x10984b90 */
  push32(0x1098347bu); f_10984b90();
  /* 1098347b mov esi, esp */
  ESI = (ESP);
  /* 1098347d push 0x109ac360 */
  push32((uint32_t)(0x109ac360u));
  /* 10983482 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983488u);
  /* 10983488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098348b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098348d call 0x10984b90 */
  push32(0x10983492u); f_10984b90();
  /* 10983492 mov esi, esp */
  ESI = (ESP);
  /* 10983494 call dword ptr [0x109b449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b449c))), 0x1098349au);
  /* 1098349a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098349c call 0x10984b90 */
  push32(0x109834a1u); f_10984b90();
L_109834a1:;
  /* 109834a1 mov esi, esp */
  ESI = (ESP);
  /* 109834a3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109834a5 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109834abu);
  /* 109834ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109834ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109834b0 call 0x10984b90 */
  push32(0x109834b5u); f_10984b90();
  /* 109834b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109834ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109834bc je 0x10983542 */
  if (C.zf) goto L_10983542;
  /* 109834c2 push 0x109b13e8 */
  push32((uint32_t)(0x109b13e8u));
  /* 109834c7 call 0x10981005 */
  push32(0x109834ccu); f_10981005();
  /* 109834cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109834cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109834d1 jne 0x10983542 */
  if (!C.zf) goto L_10983542;
  /* 109834d3 mov esi, esp */
  ESI = (ESP);
  /* 109834d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109834d7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109834d9 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109834dfu);
  /* 109834df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109834e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109834e4 call 0x10984b90 */
  push32(0x109834e9u); f_10984b90();
  /* 109834e9 mov esi, esp */
  ESI = (ESP);
  /* 109834eb push 3 */
  push32((uint32_t)(0x3u));
  /* 109834ed push 0 */
  push32((uint32_t)(0x0u));
  /* 109834ef call dword ptr [0x109b44a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44a0))), 0x109834f5u);
  /* 109834f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109834f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109834fa call 0x10984b90 */
  push32(0x109834ffu); f_10984b90();
  /* 109834ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983501 jne 0x1098351c */
  if (!C.zf) goto L_1098351c;
  /* 10983503 mov esi, esp */
  ESI = (ESP);
  /* 10983505 push 0x109ac354 */
  push32((uint32_t)(0x109ac354u));
  /* 1098350a call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983510u);
  /* 10983510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983515 call 0x10984b90 */
  push32(0x1098351au); f_10984b90();
  /* 1098351a jmp 0x10983533 */
  goto L_10983533;
L_1098351c:;
  /* 1098351c mov esi, esp */
  ESI = (ESP);
  /* 1098351e push 0x109ac348 */
  push32((uint32_t)(0x109ac348u));
  /* 10983523 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983529u);
  /* 10983529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098352c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098352e call 0x10984b90 */
  push32(0x10983533u); f_10984b90();
L_10983533:;
  /* 10983533 mov esi, esp */
  ESI = (ESP);
  /* 10983535 call dword ptr [0x109b44a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44a4))), 0x1098353bu);
  /* 1098353b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098353d call 0x10984b90 */
  push32(0x10983542u); f_10984b90();
L_10983542:;
  /* 10983542 mov esi, esp */
  ESI = (ESP);
  /* 10983544 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10983546 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098354cu);
  /* 1098354c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098354f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983551 call 0x10984b90 */
  push32(0x10983556u); f_10984b90();
  /* 10983556 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098355b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098355d je 0x1098366f */
  if (C.zf) goto L_1098366f;
  /* 10983563 mov esi, esp */
  ESI = (ESP);
  /* 10983565 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10983567 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098356du);
  /* 1098356d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983570 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983572 call 0x10984b90 */
  push32(0x10983577u); f_10984b90();
  /* 10983577 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098357c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098357e jne 0x1098366f */
  if (!C.zf) goto L_1098366f;
  /* 10983584 mov esi, esp */
  ESI = (ESP);
  /* 10983586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983588 push 0x109b1470 */
  push32((uint32_t)(0x109b1470u));
  /* 1098358d call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983593u);
  /* 10983593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983598 call 0x10984b90 */
  push32(0x1098359du); f_10984b90();
  /* 1098359d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098359f jle 0x1098366f */
  if ((C.zf||C.sf!=C.of)) goto L_1098366f;
  /* 109835a5 mov esi, esp */
  ESI = (ESP);
  /* 109835a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109835a9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109835ab call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109835b1u);
  /* 109835b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109835b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109835b6 call 0x10984b90 */
  push32(0x109835bbu); f_10984b90();
  /* 109835bb mov esi, esp */
  ESI = (ESP);
  /* 109835bd push 0x44 */
  push32((uint32_t)(0x44u));
  /* 109835bf call dword ptr [0x109b4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4450))), 0x109835c5u);
  /* 109835c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109835c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109835ca call 0x10984b90 */
  push32(0x109835cfu); f_10984b90();
  /* 109835cf mov esi, esp */
  ESI = (ESP);
  /* 109835d1 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 109835d3 call dword ptr [0x109b4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4494))), 0x109835d9u);
  /* 109835d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109835dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109835de call 0x10984b90 */
  push32(0x109835e3u); f_10984b90();
  /* 109835e3 mov esi, esp */
  ESI = (ESP);
  /* 109835e5 push 0x109ac33c */
  push32((uint32_t)(0x109ac33cu));
  /* 109835ea call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109835f0u);
  /* 109835f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109835f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109835f5 call 0x10984b90 */
  push32(0x109835fau); f_10984b90();
  /* 109835fa mov esi, esp */
  ESI = (ESP);
  /* 109835fc push 0x109ac330 */
  push32((uint32_t)(0x109ac330u));
  /* 10983601 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983607u);
  /* 10983607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098360a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098360c call 0x10984b90 */
  push32(0x10983611u); f_10984b90();
  /* 10983611 mov esi, esp */
  ESI = (ESP);
  /* 10983613 push 0x109ac324 */
  push32((uint32_t)(0x109ac324u));
  /* 10983618 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098361eu);
  /* 1098361e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983621 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983623 call 0x10984b90 */
  push32(0x10983628u); f_10984b90();
  /* 10983628 mov esi, esp */
  ESI = (ESP);
  /* 1098362a push 0x109ac318 */
  push32((uint32_t)(0x109ac318u));
  /* 1098362f call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983635u);
  /* 10983635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098363a call 0x10984b90 */
  push32(0x1098363fu); f_10984b90();
  /* 1098363f mov esi, esp */
  ESI = (ESP);
  /* 10983641 push 0x109ac30c */
  push32((uint32_t)(0x109ac30cu));
  /* 10983646 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098364cu);
  /* 1098364c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098364f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983651 call 0x10984b90 */
  push32(0x10983656u); f_10984b90();
  /* 10983656 mov esi, esp */
  ESI = (ESP);
  /* 10983658 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1098365d push 0xd */
  push32((uint32_t)(0xdu));
  /* 1098365f call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x10983665u);
  /* 10983665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098366a call 0x10984b90 */
  push32(0x1098366fu); f_10984b90();
L_1098366f:;
  /* 1098366f mov esi, esp */
  ESI = (ESP);
  /* 10983671 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10983673 call dword ptr [0x109b4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4478))), 0x10983679u);
  /* 10983679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098367c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098367e call 0x10984b90 */
  push32(0x10983683u); f_10984b90();
  /* 10983683 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098368a je 0x109836cd */
  if (C.zf) goto L_109836cd;
  /* 1098368c mov esi, esp */
  ESI = (ESP);
  /* 1098368e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10983690 push 0x109b1460 */
  push32((uint32_t)(0x109b1460u));
  /* 10983695 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983697 push 0x109b1540 */
  push32((uint32_t)(0x109b1540u));
  /* 1098369c push 0x109b13e0 */
  push32((uint32_t)(0x109b13e0u));
  /* 109836a1 push 0x109b15c0 */
  push32((uint32_t)(0x109b15c0u));
  /* 109836a6 call dword ptr [0x109b44a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44a8))), 0x109836acu);
  /* 109836ac add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109836af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109836b1 call 0x10984b90 */
  push32(0x109836b6u); f_10984b90();
  /* 109836b6 mov esi, esp */
  ESI = (ESP);
  /* 109836b8 push 0x109ac300 */
  push32((uint32_t)(0x109ac300u));
  /* 109836bd call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109836c3u);
  /* 109836c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109836c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109836c8 call 0x10984b90 */
  push32(0x109836cdu); f_10984b90();
L_109836cd:;
  /* 109836cd mov esi, esp */
  ESI = (ESP);
  /* 109836cf push 0xf */
  push32((uint32_t)(0xfu));
  /* 109836d1 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x109836d7u);
  /* 109836d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109836da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109836dc call 0x10984b90 */
  push32(0x109836e1u); f_10984b90();
  /* 109836e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109836e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109836e8 je 0x10983871 */
  if (C.zf) goto L_10983871;
  /* 109836ee mov esi, esp */
  ESI = (ESP);
  /* 109836f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109836f2 push 0x109b14a0 */
  push32((uint32_t)(0x109b14a0u));
  /* 109836f7 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x109836fdu);
  /* 109836fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983702 call 0x10984b90 */
  push32(0x10983707u); f_10984b90();
  /* 10983707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983709 jle 0x10983871 */
  if ((C.zf||C.sf!=C.of)) goto L_10983871;
  /* 1098370f mov esi, esp */
  ESI = (ESP);
  /* 10983711 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983713 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10983715 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x1098371bu);
  /* 1098371b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098371e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983720 call 0x10984b90 */
  push32(0x10983725u); f_10984b90();
  /* 10983725 mov esi, esp */
  ESI = (ESP);
  /* 10983727 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10983729 call dword ptr [0x109b4450] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4450))), 0x1098372fu);
  /* 1098372f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983732 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983734 call 0x10984b90 */
  push32(0x10983739u); f_10984b90();
  /* 10983739 mov esi, esp */
  ESI = (ESP);
  /* 1098373b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1098373d call dword ptr [0x109b4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4494))), 0x10983743u);
  /* 10983743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983748 call 0x10984b90 */
  push32(0x1098374du); f_10984b90();
  /* 1098374d mov esi, esp */
  ESI = (ESP);
  /* 1098374f push 0 */
  push32((uint32_t)(0x0u));
  /* 10983751 push 4 */
  push32((uint32_t)(0x4u));
  /* 10983753 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983759u);
  /* 10983759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098375c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098375e call 0x10984b90 */
  push32(0x10983763u); f_10984b90();
  /* 10983763 mov esi, esp */
  ESI = (ESP);
  /* 10983765 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983767 push 6 */
  push32((uint32_t)(0x6u));
  /* 10983769 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x1098376fu);
  /* 1098376f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983774 call 0x10984b90 */
  push32(0x10983779u); f_10984b90();
  /* 10983779 push 0x109b1408 */
  push32((uint32_t)(0x109b1408u));
  /* 1098377e call 0x10981005 */
  push32(0x10983783u); f_10981005();
  /* 10983783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983788 jle 0x109837a6 */
  if ((C.zf||C.sf!=C.of)) goto L_109837a6;
  /* 1098378a mov esi, esp */
  ESI = (ESP);
  /* 1098378c push 0x109ac2f4 */
  push32((uint32_t)(0x109ac2f4u));
  /* 10983791 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983797u);
  /* 10983797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098379a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098379c call 0x10984b90 */
  push32(0x109837a1u); f_10984b90();
  /* 109837a1 jmp 0x10983871 */
  goto L_10983871;
L_109837a6:;
  /* 109837a6 mov esi, esp */
  ESI = (ESP);
  /* 109837a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109837aa push 8 */
  push32((uint32_t)(0x8u));
  /* 109837ac call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109837b2u);
  /* 109837b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109837b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109837b7 call 0x10984b90 */
  push32(0x109837bcu); f_10984b90();
  /* 109837bc mov esi, esp */
  ESI = (ESP);
  /* 109837be push 0x109ac3d4 */
  push32((uint32_t)(0x109ac3d4u));
  /* 109837c3 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109837c9u);
  /* 109837c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109837cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109837ce call 0x10984b90 */
  push32(0x109837d3u); f_10984b90();
  /* 109837d3 mov esi, esp */
  ESI = (ESP);
  /* 109837d5 push 0x109ac3c8 */
  push32((uint32_t)(0x109ac3c8u));
  /* 109837da call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109837e0u);
  /* 109837e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109837e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109837e5 call 0x10984b90 */
  push32(0x109837eau); f_10984b90();
  /* 109837ea mov esi, esp */
  ESI = (ESP);
  /* 109837ec push 0x109ac3bc */
  push32((uint32_t)(0x109ac3bcu));
  /* 109837f1 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x109837f7u);
  /* 109837f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109837fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109837fc call 0x10984b90 */
  push32(0x10983801u); f_10984b90();
  /* 10983801 mov esi, esp */
  ESI = (ESP);
  /* 10983803 push 0x109ac3b0 */
  push32((uint32_t)(0x109ac3b0u));
  /* 10983808 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098380eu);
  /* 1098380e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983813 call 0x10984b90 */
  push32(0x10983818u); f_10984b90();
  /* 10983818 mov esi, esp */
  ESI = (ESP);
  /* 1098381a push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1098381c call dword ptr [0x109b4494] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4494))), 0x10983822u);
  /* 10983822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983825 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983827 call 0x10984b90 */
  push32(0x1098382cu); f_10984b90();
  /* 1098382c mov esi, esp */
  ESI = (ESP);
  /* 1098382e push 0 */
  push32((uint32_t)(0x0u));
  /* 10983830 push 0x109b13f0 */
  push32((uint32_t)(0x109b13f0u));
  /* 10983835 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x1098383bu);
  /* 1098383b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098383e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983840 call 0x10984b90 */
  push32(0x10983845u); f_10984b90();
  /* 10983845 mov esi, esp */
  ESI = (ESP);
  /* 10983847 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983849 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1098384b call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983851u);
  /* 10983851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983854 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983856 call 0x10984b90 */
  push32(0x1098385bu); f_10984b90();
  /* 1098385b mov esi, esp */
  ESI = (ESP);
  /* 1098385d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098385f push 4 */
  push32((uint32_t)(0x4u));
  /* 10983861 call dword ptr [0x109b446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b446c))), 0x10983867u);
  /* 10983867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098386a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098386c call 0x10984b90 */
  push32(0x10983871u); f_10984b90();
L_10983871:;
  /* 10983871 mov esi, esp */
  ESI = (ESP);
  /* 10983873 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10983875 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098387bu);
  /* 1098387b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098387e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983880 call 0x10984b90 */
  push32(0x10983885u); f_10984b90();
  /* 10983885 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098388a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098388c je 0x10983950 */
  if (C.zf) goto L_10983950;
  /* 10983892 mov esi, esp */
  ESI = (ESP);
  /* 10983894 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983896 push 0x109b1458 */
  push32((uint32_t)(0x109b1458u));
  /* 1098389b call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x109838a1u);
  /* 109838a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109838a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109838a6 call 0x10984b90 */
  push32(0x109838abu); f_10984b90();
  /* 109838ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109838ad jle 0x10983950 */
  if ((C.zf||C.sf!=C.of)) goto L_10983950;
  /* 109838b3 push 0x109b1598 */
  push32((uint32_t)(0x109b1598u));
  /* 109838b8 call 0x10981005 */
  push32(0x109838bdu); f_10981005();
  /* 109838bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109838c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109838c2 jle 0x10983950 */
  if ((C.zf||C.sf!=C.of)) goto L_10983950;
  /* 109838c8 mov esi, esp */
  ESI = (ESP);
  /* 109838ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109838cc push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109838ce call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109838d4u);
  /* 109838d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109838d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109838d9 call 0x10984b90 */
  push32(0x109838deu); f_10984b90();
  /* 109838de mov esi, esp */
  ESI = (ESP);
  /* 109838e0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109838e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109838e4 push 0x109b14d8 */
  push32((uint32_t)(0x109b14d8u));
  /* 109838e9 push 0x109b1458 */
  push32((uint32_t)(0x109b1458u));
  /* 109838ee push 0x109b1430 */
  push32((uint32_t)(0x109b1430u));
  /* 109838f3 call dword ptr [0x109b4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4490))), 0x109838f9u);
  /* 109838f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109838fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109838fe call 0x10984b90 */
  push32(0x10983903u); f_10984b90();
  /* 10983903 mov esi, esp */
  ESI = (ESP);
  /* 10983905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983907 push 0x109b1598 */
  push32((uint32_t)(0x109b1598u));
  /* 1098390c call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10983912u);
  /* 10983912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983915 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983917 call 0x10984b90 */
  push32(0x1098391cu); f_10984b90();
  /* 1098391c mov esi, esp */
  ESI = (ESP);
  /* 1098391e push 0 */
  push32((uint32_t)(0x0u));
  /* 10983920 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983922 push 0x109b1430 */
  push32((uint32_t)(0x109b1430u));
  /* 10983927 push 5 */
  push32((uint32_t)(0x5u));
  /* 10983929 call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x1098392fu);
  /* 1098392f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983932 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983934 call 0x10984b90 */
  push32(0x10983939u); f_10984b90();
  /* 10983939 mov esi, esp */
  ESI = (ESP);
  /* 1098393b push 0x109ac2e8 */
  push32((uint32_t)(0x109ac2e8u));
  /* 10983940 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983946u);
  /* 10983946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098394b call 0x10984b90 */
  push32(0x10983950u); f_10984b90();
L_10983950:;
  /* 10983950 mov esi, esp */
  ESI = (ESP);
  /* 10983952 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10983954 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x1098395au);
  /* 1098395a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098395d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098395f call 0x10984b90 */
  push32(0x10983964u); f_10984b90();
  /* 10983964 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098396b je 0x10983a2f */
  if (C.zf) goto L_10983a2f;
  /* 10983971 mov esi, esp */
  ESI = (ESP);
  /* 10983973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983975 push 0x109b1488 */
  push32((uint32_t)(0x109b1488u));
  /* 1098397a call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983980u);
  /* 10983980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983983 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983985 call 0x10984b90 */
  push32(0x1098398au); f_10984b90();
  /* 1098398a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098398c jle 0x10983a2f */
  if ((C.zf||C.sf!=C.of)) goto L_10983a2f;
  /* 10983992 push 0x109b1570 */
  push32((uint32_t)(0x109b1570u));
  /* 10983997 call 0x10981005 */
  push32(0x1098399cu); f_10981005();
  /* 1098399c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098399f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109839a1 jle 0x10983a2f */
  if ((C.zf||C.sf!=C.of)) goto L_10983a2f;
  /* 109839a7 mov esi, esp */
  ESI = (ESP);
  /* 109839a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109839ab push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109839ad call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x109839b3u);
  /* 109839b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109839b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109839b8 call 0x10984b90 */
  push32(0x109839bdu); f_10984b90();
  /* 109839bd mov esi, esp */
  ESI = (ESP);
  /* 109839bf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109839c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109839c3 push 0x109b14d8 */
  push32((uint32_t)(0x109b14d8u));
  /* 109839c8 push 0x109b1488 */
  push32((uint32_t)(0x109b1488u));
  /* 109839cd push 0x109b14e0 */
  push32((uint32_t)(0x109b14e0u));
  /* 109839d2 call dword ptr [0x109b4490] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4490))), 0x109839d8u);
  /* 109839d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109839db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109839dd call 0x10984b90 */
  push32(0x109839e2u); f_10984b90();
  /* 109839e2 mov esi, esp */
  ESI = (ESP);
  /* 109839e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109839e6 push 0x109b1570 */
  push32((uint32_t)(0x109b1570u));
  /* 109839eb call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x109839f1u);
  /* 109839f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109839f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109839f6 call 0x10984b90 */
  push32(0x109839fbu); f_10984b90();
  /* 109839fb mov esi, esp */
  ESI = (ESP);
  /* 109839fd push 0 */
  push32((uint32_t)(0x0u));
  /* 109839ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10983a01 push 0x109b14e0 */
  push32((uint32_t)(0x109b14e0u));
  /* 10983a06 push 5 */
  push32((uint32_t)(0x5u));
  /* 10983a08 call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x10983a0eu);
  /* 10983a0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983a11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983a13 call 0x10984b90 */
  push32(0x10983a18u); f_10984b90();
  /* 10983a18 mov esi, esp */
  ESI = (ESP);
  /* 10983a1a push 0x109ac2dc */
  push32((uint32_t)(0x109ac2dcu));
  /* 10983a1f call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983a25u);
  /* 10983a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983a28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983a2a call 0x10984b90 */
  push32(0x10983a2fu); f_10984b90();
L_10983a2f:;
  /* 10983a2f mov esi, esp */
  ESI = (ESP);
  /* 10983a31 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10983a33 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983a39u);
  /* 10983a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983a3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983a3e call 0x10984b90 */
  push32(0x10983a43u); f_10984b90();
  /* 10983a43 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983a4a je 0x10983ae4 */
  if (C.zf) goto L_10983ae4;
  /* 10983a50 mov esi, esp */
  ESI = (ESP);
  /* 10983a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983a54 push 0x109b1478 */
  push32((uint32_t)(0x109b1478u));
  /* 10983a59 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983a5fu);
  /* 10983a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983a64 call 0x10984b90 */
  push32(0x10983a69u); f_10984b90();
  /* 10983a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983a6b jle 0x10983ae4 */
  if ((C.zf||C.sf!=C.of)) goto L_10983ae4;
  /* 10983a6d push 0x109b1580 */
  push32((uint32_t)(0x109b1580u));
  /* 10983a72 call 0x10981005 */
  push32(0x10983a77u); f_10981005();
  /* 10983a77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983a7c jle 0x10983ae4 */
  if ((C.zf||C.sf!=C.of)) goto L_10983ae4;
  /* 10983a7e mov esi, esp */
  ESI = (ESP);
  /* 10983a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983a82 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10983a84 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983a8au);
  /* 10983a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983a8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983a8f call 0x10984b90 */
  push32(0x10983a94u); f_10984b90();
  /* 10983a94 mov esi, esp */
  ESI = (ESP);
  /* 10983a96 push 0x109ac2d0 */
  push32((uint32_t)(0x109ac2d0u));
  /* 10983a9b call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983aa1u);
  /* 10983aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983aa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983aa6 call 0x10984b90 */
  push32(0x10983aabu); f_10984b90();
  /* 10983aab mov esi, esp */
  ESI = (ESP);
  /* 10983aad push 0 */
  push32((uint32_t)(0x0u));
  /* 10983aaf push 0x109b1580 */
  push32((uint32_t)(0x109b1580u));
  /* 10983ab4 call dword ptr [0x109b4448] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4448))), 0x10983abau);
  /* 10983aba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983abd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983abf call 0x10984b90 */
  push32(0x10983ac4u); f_10984b90();
  /* 10983ac4 mov esi, esp */
  ESI = (ESP);
  /* 10983ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983ac8 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10983acd push 0x109b1478 */
  push32((uint32_t)(0x109b1478u));
  /* 10983ad2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10983ad4 call dword ptr [0x109b445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b445c))), 0x10983adau);
  /* 10983ada add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983adf call 0x10984b90 */
  push32(0x10983ae4u); f_10984b90();
L_10983ae4:;
  /* 10983ae4 mov esi, esp */
  ESI = (ESP);
  /* 10983ae6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10983ae8 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983aeeu);
  /* 10983aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983af1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983af3 call 0x10984b90 */
  push32(0x10983af8u); f_10984b90();
  /* 10983af8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983aff je 0x10983b7a */
  if (C.zf) goto L_10983b7a;
  /* 10983b01 mov esi, esp */
  ESI = (ESP);
  /* 10983b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983b05 push 0x109b14a8 */
  push32((uint32_t)(0x109b14a8u));
  /* 10983b0a call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983b10u);
  /* 10983b10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983b13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983b15 call 0x10984b90 */
  push32(0x10983b1au); f_10984b90();
  /* 10983b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983b1c jle 0x10983b7a */
  if ((C.zf||C.sf!=C.of)) goto L_10983b7a;
  /* 10983b1e push 0x109b1550 */
  push32((uint32_t)(0x109b1550u));
  /* 10983b23 call 0x10981005 */
  push32(0x10983b28u); f_10981005();
  /* 10983b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983b2d jle 0x10983b7a */
  if ((C.zf||C.sf!=C.of)) goto L_10983b7a;
  /* 10983b2f mov esi, esp */
  ESI = (ESP);
  /* 10983b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983b33 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10983b35 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983b3bu);
  /* 10983b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983b40 call 0x10984b90 */
  push32(0x10983b45u); f_10984b90();
  /* 10983b45 mov esi, esp */
  ESI = (ESP);
  /* 10983b47 push 0x109ac2c4 */
  push32((uint32_t)(0x109ac2c4u));
  /* 10983b4c call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983b52u);
  /* 10983b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983b57 call 0x10984b90 */
  push32(0x10983b5cu); f_10984b90();
  /* 10983b5c mov esi, esp */
  ESI = (ESP);
  /* 10983b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10983b60 push 0x109b14a8 */
  push32((uint32_t)(0x109b14a8u));
  /* 10983b65 push 0x109b1550 */
  push32((uint32_t)(0x109b1550u));
  /* 10983b6a call dword ptr [0x109b44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44ac))), 0x10983b70u);
  /* 10983b70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983b73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983b75 call 0x10984b90 */
  push32(0x10983b7au); f_10984b90();
L_10983b7a:;
  /* 10983b7a mov esi, esp */
  ESI = (ESP);
  /* 10983b7c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10983b7e call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983b84u);
  /* 10983b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983b87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983b89 call 0x10984b90 */
  push32(0x10983b8eu); f_10984b90();
  /* 10983b8e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983b95 jne 0x10983be3 */
  if (!C.zf) goto L_10983be3;
  /* 10983b97 mov esi, esp */
  ESI = (ESP);
  /* 10983b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983b9b push 0x109b14a8 */
  push32((uint32_t)(0x109b14a8u));
  /* 10983ba0 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983ba6u);
  /* 10983ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983ba9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983bab call 0x10984b90 */
  push32(0x10983bb0u); f_10984b90();
  /* 10983bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983bb2 jle 0x10983be3 */
  if ((C.zf||C.sf!=C.of)) goto L_10983be3;
  /* 10983bb4 push 0x109b1550 */
  push32((uint32_t)(0x109b1550u));
  /* 10983bb9 call 0x10981005 */
  push32(0x10983bbeu); f_10981005();
  /* 10983bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983bc3 jle 0x10983be3 */
  if ((C.zf||C.sf!=C.of)) goto L_10983be3;
  /* 10983bc5 mov esi, esp */
  ESI = (ESP);
  /* 10983bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983bc9 push 0x109b14a8 */
  push32((uint32_t)(0x109b14a8u));
  /* 10983bce push 0x109b1550 */
  push32((uint32_t)(0x109b1550u));
  /* 10983bd3 call dword ptr [0x109b44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44ac))), 0x10983bd9u);
  /* 10983bd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983bde call 0x10984b90 */
  push32(0x10983be3u); f_10984b90();
L_10983be3:;
  /* 10983be3 mov esi, esp */
  ESI = (ESP);
  /* 10983be5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10983be7 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983bedu);
  /* 10983bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983bf2 call 0x10984b90 */
  push32(0x10983bf7u); f_10984b90();
  /* 10983bf7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983bfe je 0x10983c94 */
  if (C.zf) goto L_10983c94;
  /* 10983c04 mov esi, esp */
  ESI = (ESP);
  /* 10983c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983c08 push 0x109b1498 */
  push32((uint32_t)(0x109b1498u));
  /* 10983c0d call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983c13u);
  /* 10983c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983c16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983c18 call 0x10984b90 */
  push32(0x10983c1du); f_10984b90();
  /* 10983c1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983c1f jle 0x10983c94 */
  if ((C.zf||C.sf!=C.of)) goto L_10983c94;
  /* 10983c21 push 0x109b1560 */
  push32((uint32_t)(0x109b1560u));
  /* 10983c26 call 0x10981005 */
  push32(0x10983c2bu); f_10981005();
  /* 10983c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983c30 jle 0x10983c94 */
  if ((C.zf||C.sf!=C.of)) goto L_10983c94;
  /* 10983c32 mov esi, esp */
  ESI = (ESP);
  /* 10983c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983c36 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10983c38 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983c3eu);
  /* 10983c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983c43 call 0x10984b90 */
  push32(0x10983c48u); f_10984b90();
  /* 10983c48 mov esi, esp */
  ESI = (ESP);
  /* 10983c4a push 0x109ac2b8 */
  push32((uint32_t)(0x109ac2b8u));
  /* 10983c4f call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983c55u);
  /* 10983c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983c5a call 0x10984b90 */
  push32(0x10983c5fu); f_10984b90();
  /* 10983c5f mov esi, esp */
  ESI = (ESP);
  /* 10983c61 push 0x109ac2ac */
  push32((uint32_t)(0x109ac2acu));
  /* 10983c66 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983c6cu);
  /* 10983c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983c6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983c71 call 0x10984b90 */
  push32(0x10983c76u); f_10984b90();
  /* 10983c76 mov esi, esp */
  ESI = (ESP);
  /* 10983c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983c7a push 0x109b1498 */
  push32((uint32_t)(0x109b1498u));
  /* 10983c7f push 0x109b1560 */
  push32((uint32_t)(0x109b1560u));
  /* 10983c84 call dword ptr [0x109b44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44ac))), 0x10983c8au);
  /* 10983c8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983c8f call 0x10984b90 */
  push32(0x10983c94u); f_10984b90();
L_10983c94:;
  /* 10983c94 mov esi, esp */
  ESI = (ESP);
  /* 10983c96 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10983c98 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983c9eu);
  /* 10983c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983ca1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983ca3 call 0x10984b90 */
  push32(0x10983ca8u); f_10984b90();
  /* 10983ca8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983cad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983caf jne 0x10983cfd */
  if (!C.zf) goto L_10983cfd;
  /* 10983cb1 mov esi, esp */
  ESI = (ESP);
  /* 10983cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983cb5 push 0x109b1498 */
  push32((uint32_t)(0x109b1498u));
  /* 10983cba call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983cc0u);
  /* 10983cc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983cc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983cc5 call 0x10984b90 */
  push32(0x10983ccau); f_10984b90();
  /* 10983cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983ccc jle 0x10983cfd */
  if ((C.zf||C.sf!=C.of)) goto L_10983cfd;
  /* 10983cce push 0x109b1560 */
  push32((uint32_t)(0x109b1560u));
  /* 10983cd3 call 0x10981005 */
  push32(0x10983cd8u); f_10981005();
  /* 10983cd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983cdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983cdd jle 0x10983cfd */
  if ((C.zf||C.sf!=C.of)) goto L_10983cfd;
  /* 10983cdf mov esi, esp */
  ESI = (ESP);
  /* 10983ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983ce3 push 0x109b1498 */
  push32((uint32_t)(0x109b1498u));
  /* 10983ce8 push 0x109b1560 */
  push32((uint32_t)(0x109b1560u));
  /* 10983ced call dword ptr [0x109b44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44ac))), 0x10983cf3u);
  /* 10983cf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983cf8 call 0x10984b90 */
  push32(0x10983cfdu); f_10984b90();
L_10983cfd:;
  /* 10983cfd mov esi, esp */
  ESI = (ESP);
  /* 10983cff push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10983d01 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983d07u);
  /* 10983d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983d0c call 0x10984b90 */
  push32(0x10983d11u); f_10984b90();
  /* 10983d11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983d16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983d18 je 0x10983daa */
  if (C.zf) goto L_10983daa;
  /* 10983d1e push 0x109b1560 */
  push32((uint32_t)(0x109b1560u));
  /* 10983d23 call 0x10981005 */
  push32(0x10983d28u); f_10981005();
  /* 10983d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983d2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983d2d jne 0x10983daa */
  if (!C.zf) goto L_10983daa;
  /* 10983d2f mov esi, esp */
  ESI = (ESP);
  /* 10983d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983d33 push 0x109b15c8 */
  push32((uint32_t)(0x109b15c8u));
  /* 10983d38 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983d3eu);
  /* 10983d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983d41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983d43 call 0x10984b90 */
  push32(0x10983d48u); f_10984b90();
  /* 10983d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983d4a jle 0x10983daa */
  if ((C.zf||C.sf!=C.of)) goto L_10983daa;
  /* 10983d4c mov esi, esp */
  ESI = (ESP);
  /* 10983d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10983d50 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10983d52 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983d58u);
  /* 10983d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983d5d call 0x10984b90 */
  push32(0x10983d62u); f_10984b90();
  /* 10983d62 mov esi, esp */
  ESI = (ESP);
  /* 10983d64 push 0x109ac2a0 */
  push32((uint32_t)(0x109ac2a0u));
  /* 10983d69 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983d6fu);
  /* 10983d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983d74 call 0x10984b90 */
  push32(0x10983d79u); f_10984b90();
  /* 10983d79 mov esi, esp */
  ESI = (ESP);
  /* 10983d7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10983d7d push 3 */
  push32((uint32_t)(0x3u));
  /* 10983d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10983d81 call dword ptr [0x109b44b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44b0))), 0x10983d87u);
  /* 10983d87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983d8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983d8c call 0x10984b90 */
  push32(0x10983d91u); f_10984b90();
  /* 10983d91 mov esi, esp */
  ESI = (ESP);
  /* 10983d93 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10983d98 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10983d9a call dword ptr [0x109b4470] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4470))), 0x10983da0u);
  /* 10983da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983da3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983da5 call 0x10984b90 */
  push32(0x10983daau); f_10984b90();
L_10983daa:;
  /* 10983daa mov esi, esp */
  ESI = (ESP);
  /* 10983dac push 0xf */
  push32((uint32_t)(0xfu));
  /* 10983dae call dword ptr [0x109b4478] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4478))), 0x10983db4u);
  /* 10983db4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983db9 call 0x10984b90 */
  push32(0x10983dbeu); f_10984b90();
  /* 10983dbe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983dc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983dc5 je 0x10983dde */
  if (C.zf) goto L_10983dde;
  /* 10983dc7 mov esi, esp */
  ESI = (ESP);
  /* 10983dc9 push 0x109ac294 */
  push32((uint32_t)(0x109ac294u));
  /* 10983dce call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983dd4u);
  /* 10983dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983dd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983dd9 call 0x10984b90 */
  push32(0x10983ddeu); f_10984b90();
L_10983dde:;
  /* 10983dde mov esi, esp */
  ESI = (ESP);
  /* 10983de0 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10983de2 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983de8u);
  /* 10983de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983deb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983ded call 0x10984b90 */
  push32(0x10983df2u); f_10984b90();
  /* 10983df2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983df9 je 0x10983e74 */
  if (C.zf) goto L_10983e74;
  /* 10983dfb mov esi, esp */
  ESI = (ESP);
  /* 10983dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10983dff push 0x109b14b8 */
  push32((uint32_t)(0x109b14b8u));
  /* 10983e04 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983e0au);
  /* 10983e0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983e0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983e0f call 0x10984b90 */
  push32(0x10983e14u); f_10984b90();
  /* 10983e14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983e16 jle 0x10983e74 */
  if ((C.zf||C.sf!=C.of)) goto L_10983e74;
  /* 10983e18 push 0x109b15b8 */
  push32((uint32_t)(0x109b15b8u));
  /* 10983e1d call 0x10981005 */
  push32(0x10983e22u); f_10981005();
  /* 10983e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983e27 jle 0x10983e74 */
  if ((C.zf||C.sf!=C.of)) goto L_10983e74;
  /* 10983e29 mov esi, esp */
  ESI = (ESP);
  /* 10983e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10983e2d push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10983e2f call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983e35u);
  /* 10983e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983e38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983e3a call 0x10984b90 */
  push32(0x10983e3fu); f_10984b90();
  /* 10983e3f mov esi, esp */
  ESI = (ESP);
  /* 10983e41 push 0x109ac288 */
  push32((uint32_t)(0x109ac288u));
  /* 10983e46 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983e4cu);
  /* 10983e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983e51 call 0x10984b90 */
  push32(0x10983e56u); f_10984b90();
  /* 10983e56 mov esi, esp */
  ESI = (ESP);
  /* 10983e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983e5a push 0x109b14b8 */
  push32((uint32_t)(0x109b14b8u));
  /* 10983e5f push 0x109b15b8 */
  push32((uint32_t)(0x109b15b8u));
  /* 10983e64 call dword ptr [0x109b44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44ac))), 0x10983e6au);
  /* 10983e6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983e6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983e6f call 0x10984b90 */
  push32(0x10983e74u); f_10984b90();
L_10983e74:;
  /* 10983e74 mov esi, esp */
  ESI = (ESP);
  /* 10983e76 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10983e78 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983e7eu);
  /* 10983e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983e83 call 0x10984b90 */
  push32(0x10983e88u); f_10984b90();
  /* 10983e88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983e8f jne 0x10983edd */
  if (!C.zf) goto L_10983edd;
  /* 10983e91 mov esi, esp */
  ESI = (ESP);
  /* 10983e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983e95 push 0x109b14b8 */
  push32((uint32_t)(0x109b14b8u));
  /* 10983e9a call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983ea0u);
  /* 10983ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983ea3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983ea5 call 0x10984b90 */
  push32(0x10983eaau); f_10984b90();
  /* 10983eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983eac jle 0x10983edd */
  if ((C.zf||C.sf!=C.of)) goto L_10983edd;
  /* 10983eae push 0x109b15b8 */
  push32((uint32_t)(0x109b15b8u));
  /* 10983eb3 call 0x10981005 */
  push32(0x10983eb8u); f_10981005();
  /* 10983eb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983ebd jle 0x10983edd */
  if ((C.zf||C.sf!=C.of)) goto L_10983edd;
  /* 10983ebf mov esi, esp */
  ESI = (ESP);
  /* 10983ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983ec3 push 0x109b14b8 */
  push32((uint32_t)(0x109b14b8u));
  /* 10983ec8 push 0x109b15b8 */
  push32((uint32_t)(0x109b15b8u));
  /* 10983ecd call dword ptr [0x109b44ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b44ac))), 0x10983ed3u);
  /* 10983ed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983ed6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983ed8 call 0x10984b90 */
  push32(0x10983eddu); f_10984b90();
L_10983edd:;
  /* 10983edd mov esi, esp */
  ESI = (ESP);
  /* 10983edf push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10983ee1 call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983ee7u);
  /* 10983ee7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983eea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983eec call 0x10984b90 */
  push32(0x10983ef1u); f_10984b90();
  /* 10983ef1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983ef6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983ef8 je 0x10983f78 */
  if (C.zf) goto L_10983f78;
  /* 10983efa mov esi, esp */
  ESI = (ESP);
  /* 10983efc push 0xf */
  push32((uint32_t)(0xfu));
  /* 10983efe call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983f04u);
  /* 10983f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983f09 call 0x10984b90 */
  push32(0x10983f0eu); f_10984b90();
  /* 10983f0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983f15 je 0x10983f78 */
  if (C.zf) goto L_10983f78;
  /* 10983f17 mov esi, esp */
  ESI = (ESP);
  /* 10983f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983f1b push 0x109b14c0 */
  push32((uint32_t)(0x109b14c0u));
  /* 10983f20 call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983f26u);
  /* 10983f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983f29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983f2b call 0x10984b90 */
  push32(0x10983f30u); f_10984b90();
  /* 10983f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983f32 jle 0x10983f78 */
  if ((C.zf||C.sf!=C.of)) goto L_10983f78;
  /* 10983f34 mov esi, esp */
  ESI = (ESP);
  /* 10983f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983f38 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10983f3a call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983f40u);
  /* 10983f40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983f43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983f45 call 0x10984b90 */
  push32(0x10983f4au); f_10984b90();
  /* 10983f4a mov esi, esp */
  ESI = (ESP);
  /* 10983f4c push 0x109ac27c */
  push32((uint32_t)(0x109ac27cu));
  /* 10983f51 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983f57u);
  /* 10983f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983f5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983f5c call 0x10984b90 */
  push32(0x10983f61u); f_10984b90();
  /* 10983f61 mov esi, esp */
  ESI = (ESP);
  /* 10983f63 push 0x109ac270 */
  push32((uint32_t)(0x109ac270u));
  /* 10983f68 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10983f6eu);
  /* 10983f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983f71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983f73 call 0x10984b90 */
  push32(0x10983f78u); f_10984b90();
L_10983f78:;
  /* 10983f78 mov esi, esp */
  ESI = (ESP);
  /* 10983f7a push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10983f7c call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983f82u);
  /* 10983f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983f85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983f87 call 0x10984b90 */
  push32(0x10983f8cu); f_10984b90();
  /* 10983f8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983f93 je 0x10984034 */
  if (C.zf) goto L_10984034;
  /* 10983f99 mov esi, esp */
  ESI = (ESP);
  /* 10983f9b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10983f9d call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983fa3u);
  /* 10983fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983fa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983fa8 call 0x10984b90 */
  push32(0x10983fadu); f_10984b90();
  /* 10983fad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983fb4 je 0x10984034 */
  if (C.zf) goto L_10984034;
  /* 10983fb6 mov esi, esp */
  ESI = (ESP);
  /* 10983fb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10983fba call dword ptr [0x109b4438] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4438))), 0x10983fc0u);
  /* 10983fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983fc5 call 0x10984b90 */
  push32(0x10983fcau); f_10984b90();
  /* 10983fca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10983fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983fd1 jne 0x10984034 */
  if (!C.zf) goto L_10984034;
  /* 10983fd3 mov esi, esp */
  ESI = (ESP);
  /* 10983fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983fd7 push 0x109b14c8 */
  push32((uint32_t)(0x109b14c8u));
  /* 10983fdc call dword ptr [0x109b4488] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4488))), 0x10983fe2u);
  /* 10983fe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983fe5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10983fe7 call 0x10984b90 */
  push32(0x10983fecu); f_10984b90();
  /* 10983fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10983fee jle 0x10984034 */
  if ((C.zf||C.sf!=C.of)) goto L_10984034;
  /* 10983ff0 mov esi, esp */
  ESI = (ESP);
  /* 10983ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10983ff4 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10983ff6 call dword ptr [0x109b443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b443c))), 0x10983ffcu);
  /* 10983ffc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10983fff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984001 call 0x10984b90 */
  push32(0x10984006u); f_10984b90();
  /* 10984006 mov esi, esp */
  ESI = (ESP);
  /* 10984008 push 0x109ac264 */
  push32((uint32_t)(0x109ac264u));
  /* 1098400d call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x10984013u);
  /* 10984013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984018 call 0x10984b90 */
  push32(0x1098401du); f_10984b90();
  /* 1098401d mov esi, esp */
  ESI = (ESP);
  /* 1098401f push 0x109ac258 */
  push32((uint32_t)(0x109ac258u));
  /* 10984024 call dword ptr [0x109b4444] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4444))), 0x1098402au);
  /* 1098402a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098402d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098402f call 0x10984b90 */
  push32(0x10984034u); f_10984b90();
L_10984034:;
  /* 10984034 pop edi */
  EDI = (pop32());
  /* 10984035 pop esi */
  ESI = (pop32());
  /* 10984036 pop ebx */
  EBX = (pop32());
  /* 10984037 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098403a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098403c call 0x10984b90 */
  push32(0x10984041u); f_10984b90();
  /* 10984041 mov esp, ebp */
  ESP = (EBP);
  /* 10984043 pop ebp */
  EBP = (pop32());
  /* 10984044 ret  */
  ESPCHK(0x109819b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f0 @ 0x109849f0 (63 bytes, 26 insns) */
void f_109849f0(void) {
  FTRACE(0x109849f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109849f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109849f1 mov ebp, esp */
  EBP = (ESP);
  /* 109849f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109849f6 push ebx */
  push32((uint32_t)(EBX));
  /* 109849f7 push esi */
  push32((uint32_t)(ESI));
  /* 109849f8 push edi */
  push32((uint32_t)(EDI));
  /* 109849f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 109849fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10984a01 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10984a06 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10984a08 mov esi, esp */
  ESI = (ESP);
  /* 10984a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984a0d push eax */
  push32((uint32_t)(EAX));
  /* 10984a0e call dword ptr [0x109b4434] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4434))), 0x10984a14u);
  /* 10984a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984a17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984a19 call 0x10984b90 */
  push32(0x10984a1eu); f_10984b90();
  /* 10984a1e pop edi */
  EDI = (pop32());
  /* 10984a1f pop esi */
  ESI = (pop32());
  /* 10984a20 pop ebx */
  EBX = (pop32());
  /* 10984a21 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984a24 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984a26 call 0x10984b90 */
  push32(0x10984a2bu); f_10984b90();
  /* 10984a2b mov esp, ebp */
  ESP = (EBP);
  /* 10984a2d pop ebp */
  EBP = (pop32());
  /* 10984a2e ret  */
  ESPCHK(0x109849f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x10984a40 (67 bytes, 28 insns) */
void f_10984a40(void) {
  FTRACE(0x10984a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10984a41 mov ebp, esp */
  EBP = (ESP);
  /* 10984a43 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10984a46 push ebx */
  push32((uint32_t)(EBX));
  /* 10984a47 push esi */
  push32((uint32_t)(ESI));
  /* 10984a48 push edi */
  push32((uint32_t)(EDI));
  /* 10984a49 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10984a4c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10984a51 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10984a56 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10984a58 mov esi, esp */
  ESI = (ESP);
  /* 10984a5a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10984a5d push eax */
  push32((uint32_t)(EAX));
  /* 10984a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984a61 push ecx */
  push32((uint32_t)(ECX));
  /* 10984a62 call dword ptr [0x109b4430] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4430))), 0x10984a68u);
  /* 10984a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984a6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984a6d call 0x10984b90 */
  push32(0x10984a72u); f_10984b90();
  /* 10984a72 pop edi */
  EDI = (pop32());
  /* 10984a73 pop esi */
  ESI = (pop32());
  /* 10984a74 pop ebx */
  EBX = (pop32());
  /* 10984a75 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984a78 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984a7a call 0x10984b90 */
  push32(0x10984a7fu); f_10984b90();
  /* 10984a7f mov esp, ebp */
  ESP = (EBP);
  /* 10984a81 pop ebp */
  EBP = (pop32());
  /* 10984a82 ret  */
  ESPCHK(0x10984a40u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10984b90 (56 bytes, 28 insns) */
void f_10984b90(void) {
  FTRACE(0x10984b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984b90 jne 0x10984b93 */
  if (!C.zf) goto L_10984b93;
  /* 10984b92 ret  */
  ESPCHK(0x10984b90u, _esp0);
  ESP += 4; return;
L_10984b93:;
  /* 10984b93 push ebp */
  push32((uint32_t)(EBP));
  /* 10984b94 mov ebp, esp */
  EBP = (ESP);
  /* 10984b96 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10984b99 push eax */
  push32((uint32_t)(EAX));
  /* 10984b9a push edx */
  push32((uint32_t)(EDX));
  /* 10984b9b push ebx */
  push32((uint32_t)(EBX));
  /* 10984b9c push esi */
  push32((uint32_t)(ESI));
  /* 10984b9d push edi */
  push32((uint32_t)(EDI));
  /* 10984b9e push 0x109ac470 */
  push32((uint32_t)(0x109ac470u));
  /* 10984ba3 push 0x109ac46c */
  push32((uint32_t)(0x109ac46cu));
  /* 10984ba8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10984baa push 0x109ac45c */
  push32((uint32_t)(0x109ac45cu));
  /* 10984baf push 1 */
  push32((uint32_t)(0x1u));
  /* 10984bb1 call 0x10984f60 */
  push32(0x10984bb6u); f_10984f60();
  /* 10984bb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984bb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984bbc jne 0x10984bbf */
  if (!C.zf) goto L_10984bbf;
  /* 10984bbe int3  */
  x86_unimpl("int3 @ 0x10984bbe");
L_10984bbf:;
  /* 10984bbf pop edi */
  EDI = (pop32());
  /* 10984bc0 pop esi */
  ESI = (pop32());
  /* 10984bc1 pop ebx */
  EBX = (pop32());
  /* 10984bc2 pop edx */
  EDX = (pop32());
  /* 10984bc3 pop eax */
  EAX = (pop32());
  /* 10984bc4 mov esp, ebp */
  ESP = (EBP);
  /* 10984bc6 pop ebp */
  EBP = (pop32());
  /* 10984bc7 ret  */
  ESPCHK(0x10984b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd0 @ 0x10984bd0 (313 bytes, 78 insns) */
void f_10984bd0(void) {
  FTRACE(0x10984bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10984bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10984bd3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984bd7 jne 0x10984c97 */
  if (!C.zf) goto L_10984c97;
  /* 10984bdd call dword ptr [0x109b4350] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4350))), 0x10984be3u);
  /* 10984be3 mov dword ptr [0x109b1654], eax */
  w32((uint32_t)(0x109b1654), (EAX));
  /* 10984be8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10984bea call 0x10988690 */
  push32(0x10984befu); f_10988690();
  /* 10984bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984bf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10984bf4 jne 0x10984bfd */
  if (!C.zf) goto L_10984bfd;
  /* 10984bf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984bf8 jmp 0x10984d05 */
  goto L_10984d05;
L_10984bfd:;
  /* 10984bfd mov eax, dword ptr [0x109b1654] */
  EAX = (r32((uint32_t)(0x109b1654)));
  /* 10984c02 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10984c05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10984c0a mov dword ptr [0x109b1660], eax */
  w32((uint32_t)(0x109b1660), (EAX));
  /* 10984c0f mov ecx, dword ptr [0x109b1654] */
  ECX = (r32((uint32_t)(0x109b1654)));
  /* 10984c15 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10984c1b mov dword ptr [0x109b165c], ecx */
  w32((uint32_t)(0x109b165c), (ECX));
  /* 10984c21 mov edx, dword ptr [0x109b165c] */
  EDX = (r32((uint32_t)(0x109b165c)));
  /* 10984c27 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10984c2a add edx, dword ptr [0x109b1660] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b1660))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10984c30 mov dword ptr [0x109b1658], edx */
  w32((uint32_t)(0x109b1658), (EDX));
  /* 10984c36 mov eax, dword ptr [0x109b1654] */
  EAX = (r32((uint32_t)(0x109b1654)));
  /* 10984c3b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10984c3e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10984c43 mov dword ptr [0x109b1654], eax */
  w32((uint32_t)(0x109b1654), (EAX));
  /* 10984c48 call 0x10985800 */
  push32(0x10984c4du); f_10985800();
  /* 10984c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10984c4f jne 0x10984c5d */
  if (!C.zf) goto L_10984c5d;
  /* 10984c51 call 0x109886e0 */
  push32(0x10984c56u); f_109886e0();
  /* 10984c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984c58 jmp 0x10984d05 */
  goto L_10984d05;
L_10984c5d:;
  /* 10984c5d call dword ptr [0x109b434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b434c))), 0x10984c63u);
  /* 10984c63 mov dword ptr [0x109b318c], eax */
  w32((uint32_t)(0x109b318c), (EAX));
  /* 10984c68 call 0x10988470 */
  push32(0x10984c6du); f_10988470();
  /* 10984c6d mov dword ptr [0x109b163c], eax */
  w32((uint32_t)(0x109b163c), (EAX));
  /* 10984c72 call 0x10985ab0 */
  push32(0x10984c77u); f_10985ab0();
  /* 10984c77 call 0x10987f60 */
  push32(0x10984c7cu); f_10987f60();
  /* 10984c7c call 0x10987e10 */
  push32(0x10984c81u); f_10987e10();
  /* 10984c81 call 0x10985600 */
  push32(0x10984c86u); f_10985600();
  /* 10984c86 mov ecx, dword ptr [0x109b1638] */
  ECX = (r32((uint32_t)(0x109b1638)));
  /* 10984c8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10984c8f mov dword ptr [0x109b1638], ecx */
  w32((uint32_t)(0x109b1638), (ECX));
  /* 10984c95 jmp 0x10984d00 */
  goto L_10984d00;
L_10984c97:;
  /* 10984c97 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984c9b jne 0x10984cf0 */
  if (!C.zf) goto L_10984cf0;
  /* 10984c9d cmp dword ptr [0x109b1638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984ca4 jle 0x10984cea */
  if ((C.zf||C.sf!=C.of)) goto L_10984cea;
  /* 10984ca6 mov edx, dword ptr [0x109b1638] */
  EDX = (r32((uint32_t)(0x109b1638)));
  /* 10984cac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10984caf mov dword ptr [0x109b1638], edx */
  w32((uint32_t)(0x109b1638), (EDX));
  /* 10984cb5 cmp dword ptr [0x109b168c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b168c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984cbc jne 0x10984cc3 */
  if (!C.zf) goto L_10984cc3;
  /* 10984cbe call 0x10985680 */
  push32(0x10984cc3u); f_10985680();
L_10984cc3:;
  /* 10984cc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10984cc5 call 0x109873b0 */
  push32(0x10984ccau); f_109873b0();
  /* 10984cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984ccd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10984cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10984cd2 je 0x10984cd9 */
  if (C.zf) goto L_10984cd9;
  /* 10984cd4 call 0x10987cc0 */
  push32(0x10984cd9u); f_10987cc0();
L_10984cd9:;
  /* 10984cd9 call 0x10985de0 */
  push32(0x10984cdeu); f_10985de0();
  /* 10984cde call 0x10985890 */
  push32(0x10984ce3u); f_10985890();
  /* 10984ce3 call 0x109886e0 */
  push32(0x10984ce8u); f_109886e0();
  /* 10984ce8 jmp 0x10984cee */
  goto L_10984cee;
L_10984cea:;
  /* 10984cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984cec jmp 0x10984d05 */
  goto L_10984d05;
L_10984cee:;
  /* 10984cee jmp 0x10984d00 */
  goto L_10984d00;
L_10984cf0:;
  /* 10984cf0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984cf4 jne 0x10984d00 */
  if (!C.zf) goto L_10984d00;
  /* 10984cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10984cf8 call 0x10985980 */
  push32(0x10984cfdu); f_10985980();
  /* 10984cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10984d00:;
  /* 10984d00 mov eax, 1 */
  EAX = (0x1u);
L_10984d05:;
  /* 10984d05 pop ebp */
  EBP = (pop32());
  /* 10984d06 ret 0xc */
  ESPCHK(0x10984bd0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10984d10 (243 bytes, 86 insns) */
void f_10984d10(void) {
  FTRACE(0x10984d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10984d11 mov ebp, esp */
  EBP = (ESP);
  /* 10984d13 push ecx */
  push32((uint32_t)(ECX));
  /* 10984d14 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10984d1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d1f jne 0x10984d31 */
  if (!C.zf) goto L_10984d31;
  /* 10984d21 cmp dword ptr [0x109b1638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d28 jne 0x10984d31 */
  if (!C.zf) goto L_10984d31;
  /* 10984d2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984d2c jmp 0x10984dfd */
  goto L_10984dfd;
L_10984d31:;
  /* 10984d31 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d35 je 0x10984d3d */
  if (C.zf) goto L_10984d3d;
  /* 10984d37 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d3b jne 0x10984d7f */
  if (!C.zf) goto L_10984d7f;
L_10984d3d:;
  /* 10984d3d cmp dword ptr [0x109b319c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b319c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d44 je 0x10984d5b */
  if (C.zf) goto L_10984d5b;
  /* 10984d46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10984d49 push eax */
  push32((uint32_t)(EAX));
  /* 10984d4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984d4d push ecx */
  push32((uint32_t)(ECX));
  /* 10984d4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984d51 push edx */
  push32((uint32_t)(EDX));
  /* 10984d52 call dword ptr [0x109b319c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b319c))), 0x10984d58u);
  /* 10984d58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10984d5b:;
  /* 10984d5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d5f je 0x10984d75 */
  if (C.zf) goto L_10984d75;
  /* 10984d61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10984d64 push eax */
  push32((uint32_t)(EAX));
  /* 10984d65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984d68 push ecx */
  push32((uint32_t)(ECX));
  /* 10984d69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984d6c push edx */
  push32((uint32_t)(EDX));
  /* 10984d6d call 0x10984bd0 */
  push32(0x10984d72u); f_10984bd0();
  /* 10984d72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10984d75:;
  /* 10984d75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d79 jne 0x10984d7f */
  if (!C.zf) goto L_10984d7f;
  /* 10984d7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984d7d jmp 0x10984dfd */
  goto L_10984dfd;
L_10984d7f:;
  /* 10984d7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10984d82 push eax */
  push32((uint32_t)(EAX));
  /* 10984d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984d86 push ecx */
  push32((uint32_t)(ECX));
  /* 10984d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984d8a push edx */
  push32((uint32_t)(EDX));
  /* 10984d8b call 0x10981014 */
  push32(0x10984d90u); f_10981014();
  /* 10984d90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10984d93 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d97 jne 0x10984dae */
  if (!C.zf) goto L_10984dae;
  /* 10984d99 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984d9d jne 0x10984dae */
  if (!C.zf) goto L_10984dae;
  /* 10984d9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10984da2 push eax */
  push32((uint32_t)(EAX));
  /* 10984da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10984da5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984da8 push ecx */
  push32((uint32_t)(ECX));
  /* 10984da9 call 0x10984bd0 */
  push32(0x10984daeu); f_10984bd0();
L_10984dae:;
  /* 10984dae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984db2 je 0x10984dba */
  if (C.zf) goto L_10984dba;
  /* 10984db4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984db8 jne 0x10984dfa */
  if (!C.zf) goto L_10984dfa;
L_10984dba:;
  /* 10984dba mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10984dbd push edx */
  push32((uint32_t)(EDX));
  /* 10984dbe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984dc1 push eax */
  push32((uint32_t)(EAX));
  /* 10984dc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10984dc6 call 0x10984bd0 */
  push32(0x10984dcbu); f_10984bd0();
  /* 10984dcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10984dcd jne 0x10984dd6 */
  if (!C.zf) goto L_10984dd6;
  /* 10984dcf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10984dd6:;
  /* 10984dd6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984dda je 0x10984dfa */
  if (C.zf) goto L_10984dfa;
  /* 10984ddc cmp dword ptr [0x109b319c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b319c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984de3 je 0x10984dfa */
  if (C.zf) goto L_10984dfa;
  /* 10984de5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10984de8 push edx */
  push32((uint32_t)(EDX));
  /* 10984de9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984dec push eax */
  push32((uint32_t)(EAX));
  /* 10984ded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984df0 push ecx */
  push32((uint32_t)(ECX));
  /* 10984df1 call dword ptr [0x109b319c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b319c))), 0x10984df7u);
  /* 10984df7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10984dfa:;
  /* 10984dfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10984dfd:;
  /* 10984dfd mov esp, ebp */
  ESP = (EBP);
  /* 10984dff pop ebp */
  EBP = (pop32());
  /* 10984e00 ret 0xc */
  ESPCHK(0x10984d10u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10984e10 (58 bytes, 18 insns) */
void f_10984e10(void) {
  FTRACE(0x10984e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10984e11 mov ebp, esp */
  EBP = (ESP);
  /* 10984e13 cmp dword ptr [0x109b1644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984e1a je 0x10984e2e */
  if (C.zf) goto L_10984e2e;
  /* 10984e1c cmp dword ptr [0x109b1644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984e23 jne 0x10984e33 */
  if (!C.zf) goto L_10984e33;
  /* 10984e25 cmp dword ptr [0x109b1648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984e2c jne 0x10984e33 */
  if (!C.zf) goto L_10984e33;
L_10984e2e:;
  /* 10984e2e call 0x10988780 */
  push32(0x10984e33u); f_10988780();
L_10984e33:;
  /* 10984e33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984e36 push eax */
  push32((uint32_t)(EAX));
  /* 10984e37 call 0x109887d0 */
  push32(0x10984e3cu); f_109887d0();
  /* 10984e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984e3f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10984e44 call dword ptr [0x109afa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x109afa30))), 0x10984e4au);
  /* 10984e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10984e4d pop ebp */
  EBP = (pop32());
  /* 10984e4e ret  */
  ESPCHK(0x10984e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x10984e50 (11 bytes, 5 insns) */
void f_10984e50(void) {
  FTRACE(0x10984e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10984e51 mov ebp, esp */
  EBP = (ESP);
  /* 10984e53 call dword ptr [0x109b4354] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4354))), 0x10984e59u);
  /* 10984e59 pop ebp */
  EBP = (pop32());
  /* 10984e5a ret  */
  ESPCHK(0x10984e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x10984e60 (87 bytes, 30 insns) */
void f_10984e60(void) {
  FTRACE(0x10984e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10984e61 mov ebp, esp */
  EBP = (ESP);
  /* 10984e63 push ecx */
  push32((uint32_t)(ECX));
  /* 10984e64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984e68 jl 0x10984e70 */
  if ((C.sf!=C.of)) goto L_10984e70;
  /* 10984e6a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984e6e jl 0x10984e75 */
  if ((C.sf!=C.of)) goto L_10984e75;
L_10984e70:;
  /* 10984e70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10984e73 jmp 0x10984eb3 */
  goto L_10984eb3;
L_10984e75:;
  /* 10984e75 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984e79 jne 0x10984e87 */
  if (!C.zf) goto L_10984e87;
  /* 10984e7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984e7e mov eax, dword ptr [eax*4 + 0x109afa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x109afa38)));
  /* 10984e85 jmp 0x10984eb3 */
  goto L_10984eb3;
L_10984e87:;
  /* 10984e87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984e8a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10984e8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10984e8f je 0x10984e96 */
  if (C.zf) goto L_10984e96;
  /* 10984e91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10984e94 jmp 0x10984eb3 */
  goto L_10984eb3;
L_10984e96:;
  /* 10984e96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984e99 mov eax, dword ptr [edx*4 + 0x109afa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109afa38)));
  /* 10984ea0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10984ea3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984ea6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984ea9 mov dword ptr [ecx*4 + 0x109afa38], edx */
  w32((uint32_t)(ECX*4 + 0x109afa38), (EDX));
  /* 10984eb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10984eb3:;
  /* 10984eb3 mov esp, ebp */
  ESP = (EBP);
  /* 10984eb5 pop ebp */
  EBP = (pop32());
  /* 10984eb6 ret  */
  ESPCHK(0x10984e60u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10984ec0 (126 bytes, 38 insns) */
void f_10984ec0(void) {
  FTRACE(0x10984ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10984ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10984ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10984ec4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984ec8 jl 0x10984ed0 */
  if ((C.sf!=C.of)) goto L_10984ed0;
  /* 10984eca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984ece jl 0x10984ed7 */
  if ((C.sf!=C.of)) goto L_10984ed7;
L_10984ed0:;
  /* 10984ed0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10984ed5 jmp 0x10984f3a */
  goto L_10984f3a;
L_10984ed7:;
  /* 10984ed7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984edb jne 0x10984ee9 */
  if (!C.zf) goto L_10984ee9;
  /* 10984edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984ee0 mov eax, dword ptr [eax*4 + 0x109afa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x109afa44)));
  /* 10984ee7 jmp 0x10984f3a */
  goto L_10984f3a;
L_10984ee9:;
  /* 10984ee9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984eec mov edx, dword ptr [ecx*4 + 0x109afa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa44)));
  /* 10984ef3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10984ef6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984efa jne 0x10984f10 */
  if (!C.zf) goto L_10984f10;
  /* 10984efc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10984efe call dword ptr [0x109b4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4358))), 0x10984f04u);
  /* 10984f04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984f07 mov dword ptr [ecx*4 + 0x109afa44], eax */
  w32((uint32_t)(ECX*4 + 0x109afa44), (EAX));
  /* 10984f0e jmp 0x10984f37 */
  goto L_10984f37;
L_10984f10:;
  /* 10984f10 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984f14 jne 0x10984f2a */
  if (!C.zf) goto L_10984f2a;
  /* 10984f16 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10984f18 call dword ptr [0x109b4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4358))), 0x10984f1eu);
  /* 10984f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984f21 mov dword ptr [edx*4 + 0x109afa44], eax */
  w32((uint32_t)(EDX*4 + 0x109afa44), (EAX));
  /* 10984f28 jmp 0x10984f37 */
  goto L_10984f37;
L_10984f2a:;
  /* 10984f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984f2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10984f30 mov dword ptr [eax*4 + 0x109afa44], ecx */
  w32((uint32_t)(EAX*4 + 0x109afa44), (ECX));
L_10984f37:;
  /* 10984f37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10984f3a:;
  /* 10984f3a mov esp, ebp */
  ESP = (EBP);
  /* 10984f3c pop ebp */
  EBP = (pop32());
  /* 10984f3d ret  */
  ESPCHK(0x10984ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f40 @ 0x10984f40 (28 bytes, 11 insns) */
void f_10984f40(void) {
  FTRACE(0x10984f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10984f41 mov ebp, esp */
  EBP = (ESP);
  /* 10984f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10984f44 mov eax, dword ptr [0x109b3180] */
  EAX = (r32((uint32_t)(0x109b3180)));
  /* 10984f49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10984f4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10984f4f mov dword ptr [0x109b3180], ecx */
  w32((uint32_t)(0x109b3180), (ECX));
  /* 10984f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10984f58 mov esp, ebp */
  ESP = (EBP);
  /* 10984f5a pop ebp */
  EBP = (pop32());
  /* 10984f5b ret  */
  ESPCHK(0x10984f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f60 @ 0x10984f60 (912 bytes, 248 insns) */
void f_10984f60(void) {
  FTRACE(0x10984f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10984f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10984f61 mov ebp, esp */
  EBP = (ESP);
  /* 10984f63 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10984f68 call 0x10989040 */
  push32(0x10984f6du); f_10989040();
  /* 10984f6d push edi */
  push32((uint32_t)(EDI));
  /* 10984f6e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10984f75 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10984f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984f7c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10984f82 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10984f84 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10984f86 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10984f87 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10984f8e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10984f93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984f95 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10984f9b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10984f9d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10984f9f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10984fa0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10984fa7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10984fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10984fae lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10984fb4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10984fb6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10984fb8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10984fb9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10984fbc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10984fc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984fc6 jl 0x10984fce */
  if ((C.sf!=C.of)) goto L_10984fce;
  /* 10984fc8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984fcc jl 0x10984fd6 */
  if ((C.sf!=C.of)) goto L_10984fd6;
L_10984fce:;
  /* 10984fce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10984fd1 jmp 0x109852eb */
  goto L_109852eb;
L_10984fd6:;
  /* 10984fd6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984fda jne 0x10985080 */
  if (!C.zf) goto L_10985080;
  /* 10984fe0 push 0x109afa34 */
  push32((uint32_t)(0x109afa34u));
  /* 10984fe5 call dword ptr [0x109b4370] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4370))), 0x10984febu);
  /* 10984feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10984fed jle 0x10985080 */
  if ((C.zf||C.sf!=C.of)) goto L_10985080;
  /* 10984ff3 cmp dword ptr [0x109b164c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b164c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10984ffa jne 0x1098503e */
  if (!C.zf) goto L_1098503e;
  /* 10984ffc push 0x109ac618 */
  push32((uint32_t)(0x109ac618u));
  /* 10985001 call dword ptr [0x109b436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b436c))), 0x10985007u);
  /* 10985007 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1098500d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985014 je 0x10985036 */
  if (C.zf) goto L_10985036;
  /* 10985016 push 0x109ac60c */
  push32((uint32_t)(0x109ac60cu));
  /* 1098501b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10985021 push ecx */
  push32((uint32_t)(ECX));
  /* 10985022 call dword ptr [0x109b4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4368))), 0x10985028u);
  /* 10985028 mov dword ptr [0x109b164c], eax */
  w32((uint32_t)(0x109b164c), (EAX));
  /* 1098502d cmp dword ptr [0x109b164c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b164c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985034 jne 0x1098503e */
  if (!C.zf) goto L_1098503e;
L_10985036:;
  /* 10985036 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10985039 jmp 0x109852eb */
  goto L_109852eb;
L_1098503e:;
  /* 1098503e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10985041 push edx */
  push32((uint32_t)(EDX));
  /* 10985042 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10985045 push eax */
  push32((uint32_t)(EAX));
  /* 10985046 push 0x109ac5d8 */
  push32((uint32_t)(0x109ac5d8u));
  /* 1098504b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10985051 push ecx */
  push32((uint32_t)(ECX));
  /* 10985052 call dword ptr [0x109b164c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b164c))), 0x10985058u);
  /* 10985058 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098505b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10985061 push edx */
  push32((uint32_t)(EDX));
  /* 10985062 call dword ptr [0x109b4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4364))), 0x10985068u);
  /* 10985068 push 0x109afa34 */
  push32((uint32_t)(0x109afa34u));
  /* 1098506d call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x10985073u);
  /* 10985073 call 0x10984e50 */
  push32(0x10985078u); f_10984e50();
  /* 10985078 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098507b jmp 0x109852eb */
  goto L_109852eb;
L_10985080:;
  /* 10985080 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985084 je 0x109850bd */
  if (C.zf) goto L_109850bd;
  /* 10985086 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1098508c push eax */
  push32((uint32_t)(EAX));
  /* 1098508d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10985090 push ecx */
  push32((uint32_t)(ECX));
  /* 10985091 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10985096 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1098509c push edx */
  push32((uint32_t)(EDX));
  /* 1098509d call 0x10988f40 */
  push32(0x109850a2u); f_10988f40();
  /* 109850a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109850a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109850a7 jge 0x109850bd */
  if ((C.sf==C.of)) goto L_109850bd;
  /* 109850a9 push 0x109ac5ac */
  push32((uint32_t)(0x109ac5acu));
  /* 109850ae lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 109850b4 push eax */
  push32((uint32_t)(EAX));
  /* 109850b5 call 0x10988e50 */
  push32(0x109850bau); f_10988e50();
  /* 109850ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109850bd:;
  /* 109850bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109850c1 jne 0x109850f5 */
  if (!C.zf) goto L_109850f5;
  /* 109850c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109850c7 je 0x109850d5 */
  if (C.zf) goto L_109850d5;
  /* 109850c9 mov dword ptr [ebp - 0x3028], 0x109ac598 */
  w32((uint32_t)(EBP + -0x3028), (0x109ac598u));
  /* 109850d3 jmp 0x109850df */
  goto L_109850df;
L_109850d5:;
  /* 109850d5 mov dword ptr [ebp - 0x3028], 0x109ac584 */
  w32((uint32_t)(EBP + -0x3028), (0x109ac584u));
L_109850df:;
  /* 109850df mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 109850e5 push ecx */
  push32((uint32_t)(ECX));
  /* 109850e6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 109850ec push edx */
  push32((uint32_t)(EDX));
  /* 109850ed call 0x10988e50 */
  push32(0x109850f2u); f_10988e50();
  /* 109850f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109850f5:;
  /* 109850f5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 109850fb push eax */
  push32((uint32_t)(EAX));
  /* 109850fc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10985102 push ecx */
  push32((uint32_t)(ECX));
  /* 10985103 call 0x10988e60 */
  push32(0x10985108u); f_10988e60();
  /* 10985108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098510b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098510f jne 0x1098514a */
  if (!C.zf) goto L_1098514a;
  /* 10985111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985114 mov eax, dword ptr [edx*4 + 0x109afa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109afa38)));
  /* 1098511b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1098511e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985120 je 0x10985136 */
  if (C.zf) goto L_10985136;
  /* 10985122 push 0x109ac580 */
  push32((uint32_t)(0x109ac580u));
  /* 10985127 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1098512d push ecx */
  push32((uint32_t)(ECX));
  /* 1098512e call 0x10988e60 */
  push32(0x10985133u); f_10988e60();
  /* 10985133 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985136:;
  /* 10985136 push 0x109ac57c */
  push32((uint32_t)(0x109ac57cu));
  /* 1098513b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10985141 push edx */
  push32((uint32_t)(EDX));
  /* 10985142 call 0x10988e60 */
  push32(0x10985147u); f_10988e60();
  /* 10985147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098514a:;
  /* 1098514a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098514e je 0x10985192 */
  if (C.zf) goto L_10985192;
  /* 10985150 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10985156 push eax */
  push32((uint32_t)(EAX));
  /* 10985157 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098515a push ecx */
  push32((uint32_t)(ECX));
  /* 1098515b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098515e push edx */
  push32((uint32_t)(EDX));
  /* 1098515f push 0x109ac570 */
  push32((uint32_t)(0x109ac570u));
  /* 10985164 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10985169 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1098516f push eax */
  push32((uint32_t)(EAX));
  /* 10985170 call 0x10988d50 */
  push32(0x10985175u); f_10988d50();
  /* 10985175 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098517a jge 0x10985190 */
  if ((C.sf==C.of)) goto L_10985190;
  /* 1098517c push 0x109ac5ac */
  push32((uint32_t)(0x109ac5acu));
  /* 10985181 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10985187 push ecx */
  push32((uint32_t)(ECX));
  /* 10985188 call 0x10988e50 */
  push32(0x1098518du); f_10988e50();
  /* 1098518d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985190:;
  /* 10985190 jmp 0x109851a8 */
  goto L_109851a8;
L_10985192:;
  /* 10985192 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10985198 push edx */
  push32((uint32_t)(EDX));
  /* 10985199 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1098519f push eax */
  push32((uint32_t)(EAX));
  /* 109851a0 call 0x10988e50 */
  push32(0x109851a5u); f_10988e50();
  /* 109851a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109851a8:;
  /* 109851a8 cmp dword ptr [0x109b3180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b3180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109851af je 0x109851ec */
  if (C.zf) goto L_109851ec;
  /* 109851b1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 109851b7 push ecx */
  push32((uint32_t)(ECX));
  /* 109851b8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 109851be push edx */
  push32((uint32_t)(EDX));
  /* 109851bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109851c2 push eax */
  push32((uint32_t)(EAX));
  /* 109851c3 call dword ptr [0x109b3180] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b3180))), 0x109851c9u);
  /* 109851c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109851cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109851ce je 0x109851ec */
  if (C.zf) goto L_109851ec;
  /* 109851d0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109851d4 jne 0x109851e1 */
  if (!C.zf) goto L_109851e1;
  /* 109851d6 push 0x109afa34 */
  push32((uint32_t)(0x109afa34u));
  /* 109851db call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x109851e1u);
L_109851e1:;
  /* 109851e1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 109851e7 jmp 0x109852eb */
  goto L_109852eb;
L_109851ec:;
  /* 109851ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109851ef mov edx, dword ptr [ecx*4 + 0x109afa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa38)));
  /* 109851f6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 109851f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109851fb je 0x1098523b */
  if (C.zf) goto L_1098523b;
  /* 109851fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985200 cmp dword ptr [eax*4 + 0x109afa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x109afa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985208 je 0x1098523b */
  if (C.zf) goto L_1098523b;
  /* 1098520a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098520c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10985212 push ecx */
  push32((uint32_t)(ECX));
  /* 10985213 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10985219 push edx */
  push32((uint32_t)(EDX));
  /* 1098521a call 0x10988cd0 */
  push32(0x1098521fu); f_10988cd0();
  /* 1098521f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985222 push eax */
  push32((uint32_t)(EAX));
  /* 10985223 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10985229 push eax */
  push32((uint32_t)(EAX));
  /* 1098522a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098522d mov edx, dword ptr [ecx*4 + 0x109afa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa44)));
  /* 10985234 push edx */
  push32((uint32_t)(EDX));
  /* 10985235 call dword ptr [0x109b435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b435c))), 0x1098523bu);
L_1098523b:;
  /* 1098523b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098523e mov ecx, dword ptr [eax*4 + 0x109afa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109afa38)));
  /* 10985245 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10985248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098524a je 0x10985259 */
  if (C.zf) goto L_10985259;
  /* 1098524c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10985252 push edx */
  push32((uint32_t)(EDX));
  /* 10985253 call dword ptr [0x109b4364] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4364))), 0x10985259u);
L_10985259:;
  /* 10985259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098525c mov ecx, dword ptr [eax*4 + 0x109afa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109afa38)));
  /* 10985263 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10985266 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10985268 je 0x109852d8 */
  if (C.zf) goto L_109852d8;
  /* 1098526a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098526e je 0x1098528d */
  if (C.zf) goto L_1098528d;
  /* 10985270 push 0xa */
  push32((uint32_t)(0xau));
  /* 10985272 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10985278 push edx */
  push32((uint32_t)(EDX));
  /* 10985279 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098527c push eax */
  push32((uint32_t)(EAX));
  /* 1098527d call 0x109889e0 */
  push32(0x10985282u); f_109889e0();
  /* 10985282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985285 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1098528b jmp 0x10985297 */
  goto L_10985297;
L_1098528d:;
  /* 1098528d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10985297:;
  /* 10985297 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1098529d push ecx */
  push32((uint32_t)(ECX));
  /* 1098529e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109852a1 push edx */
  push32((uint32_t)(EDX));
  /* 109852a2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 109852a8 push eax */
  push32((uint32_t)(EAX));
  /* 109852a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109852ac push ecx */
  push32((uint32_t)(ECX));
  /* 109852ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109852b0 push edx */
  push32((uint32_t)(EDX));
  /* 109852b1 call 0x109852f0 */
  push32(0x109852b6u); f_109852f0();
  /* 109852b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109852b9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 109852bf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109852c3 jne 0x109852d0 */
  if (!C.zf) goto L_109852d0;
  /* 109852c5 push 0x109afa34 */
  push32((uint32_t)(0x109afa34u));
  /* 109852ca call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x109852d0u);
L_109852d0:;
  /* 109852d0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 109852d6 jmp 0x109852eb */
  goto L_109852eb;
L_109852d8:;
  /* 109852d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109852dc jne 0x109852e9 */
  if (!C.zf) goto L_109852e9;
  /* 109852de push 0x109afa34 */
  push32((uint32_t)(0x109afa34u));
  /* 109852e3 call dword ptr [0x109b4360] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4360))), 0x109852e9u);
L_109852e9:;
  /* 109852e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109852eb:;
  /* 109852eb pop edi */
  EDI = (pop32());
  /* 109852ec mov esp, ebp */
  ESP = (EBP);
  /* 109852ee pop ebp */
  EBP = (pop32());
  /* 109852ef ret  */
  ESPCHK(0x10984f60u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x109852f0 (780 bytes, 197 insns) */
void f_109852f0(void) {
  FTRACE(0x109852f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109852f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109852f1 mov ebp, esp */
  EBP = (ESP);
  /* 109852f3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 109852f8 call 0x10989040 */
  push32(0x109852fdu); f_10989040();
L_109852fd:;
  /* 109852fd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985301 jne 0x10985328 */
  if (!C.zf) goto L_10985328;
  /* 10985303 push 0x109ac768 */
  push32((uint32_t)(0x109ac768u));
  /* 10985308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098530a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1098530f push 0x109ac75c */
  push32((uint32_t)(0x109ac75cu));
  /* 10985314 push 2 */
  push32((uint32_t)(0x2u));
  /* 10985316 call 0x10984f60 */
  push32(0x1098531bu); f_10984f60();
  /* 1098531b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098531e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985321 jne 0x10985328 */
  if (!C.zf) goto L_10985328;
  /* 10985323 call 0x10984e50 */
  push32(0x10985328u); f_10984e50();
L_10985328:;
  /* 10985328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098532a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098532c jne 0x109852fd */
  if (!C.zf) goto L_109852fd;
  /* 1098532e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10985333 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10985339 push ecx */
  push32((uint32_t)(ECX));
  /* 1098533a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098533c call dword ptr [0x109b4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4374))), 0x10985342u);
  /* 10985342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985344 jne 0x1098535a */
  if (!C.zf) goto L_1098535a;
  /* 10985346 push 0x109ac744 */
  push32((uint32_t)(0x109ac744u));
  /* 1098534b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10985351 push edx */
  push32((uint32_t)(EDX));
  /* 10985352 call 0x10988e50 */
  push32(0x10985357u); f_10988e50();
  /* 10985357 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098535a:;
  /* 1098535a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10985360 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10985363 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985366 push ecx */
  push32((uint32_t)(ECX));
  /* 10985367 call 0x10988cd0 */
  push32(0x1098536cu); f_10988cd0();
  /* 1098536c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098536f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985372 jbe 0x1098539d */
  if ((C.cf||C.zf)) goto L_1098539d;
  /* 10985374 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985377 push edx */
  push32((uint32_t)(EDX));
  /* 10985378 call 0x10988cd0 */
  push32(0x1098537du); f_10988cd0();
  /* 1098537d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985380 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985383 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10985387 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098538a push 3 */
  push32((uint32_t)(0x3u));
  /* 1098538c push 0x109ac740 */
  push32((uint32_t)(0x109ac740u));
  /* 10985391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985394 push eax */
  push32((uint32_t)(EAX));
  /* 10985395 call 0x109896c0 */
  push32(0x1098539au); f_109896c0();
  /* 1098539a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098539d:;
  /* 1098539d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109853a0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 109853a6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109853ad je 0x109853f8 */
  if (C.zf) goto L_109853f8;
  /* 109853af mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109853b5 push edx */
  push32((uint32_t)(EDX));
  /* 109853b6 call 0x10988cd0 */
  push32(0x109853bbu); f_10988cd0();
  /* 109853bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109853be cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109853c1 jbe 0x109853f8 */
  if ((C.cf||C.zf)) goto L_109853f8;
  /* 109853c3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109853c9 push eax */
  push32((uint32_t)(EAX));
  /* 109853ca call 0x10988cd0 */
  push32(0x109853cfu); f_10988cd0();
  /* 109853cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109853d2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109853d8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 109853dc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 109853e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 109853e4 push 0x109ac740 */
  push32((uint32_t)(0x109ac740u));
  /* 109853e9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109853ef push eax */
  push32((uint32_t)(EAX));
  /* 109853f0 call 0x109896c0 */
  push32(0x109853f5u); f_109896c0();
  /* 109853f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109853f8:;
  /* 109853f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109853fc jne 0x1098540a */
  if (!C.zf) goto L_1098540a;
  /* 109853fe mov dword ptr [ebp - 0x1114], 0x109ac6cc */
  w32((uint32_t)(EBP + -0x1114), (0x109ac6ccu));
  /* 10985408 jmp 0x10985414 */
  goto L_10985414;
L_1098540a:;
  /* 1098540a mov dword ptr [ebp - 0x1114], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1114), (0x109ac46cu));
L_10985414:;
  /* 10985414 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10985417 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1098541a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098541c je 0x10985429 */
  if (C.zf) goto L_10985429;
  /* 1098541e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10985421 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10985427 jmp 0x10985433 */
  goto L_10985433;
L_10985429:;
  /* 10985429 mov dword ptr [ebp - 0x1118], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1118), (0x109ac46cu));
L_10985433:;
  /* 10985433 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10985436 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10985439 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098543b je 0x1098544f */
  if (C.zf) goto L_1098544f;
  /* 1098543d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985441 jne 0x1098544f */
  if (!C.zf) goto L_1098544f;
  /* 10985443 mov dword ptr [ebp - 0x111c], 0x109ac6bc */
  w32((uint32_t)(EBP + -0x111c), (0x109ac6bcu));
  /* 1098544d jmp 0x10985459 */
  goto L_10985459;
L_1098544f:;
  /* 1098544f mov dword ptr [ebp - 0x111c], 0x109ac46c */
  w32((uint32_t)(EBP + -0x111c), (0x109ac46cu));
L_10985459:;
  /* 10985459 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098545c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098545f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10985461 je 0x1098546f */
  if (C.zf) goto L_1098546f;
  /* 10985463 mov dword ptr [ebp - 0x1120], 0x109ac6b8 */
  w32((uint32_t)(EBP + -0x1120), (0x109ac6b8u));
  /* 1098546d jmp 0x10985479 */
  goto L_10985479;
L_1098546f:;
  /* 1098546f mov dword ptr [ebp - 0x1120], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1120), (0x109ac46cu));
L_10985479:;
  /* 10985479 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098547d je 0x1098548a */
  if (C.zf) goto L_1098548a;
  /* 1098547f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10985482 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10985488 jmp 0x10985494 */
  goto L_10985494;
L_1098548a:;
  /* 1098548a mov dword ptr [ebp - 0x1124], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1124), (0x109ac46cu));
L_10985494:;
  /* 10985494 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985498 je 0x109854a6 */
  if (C.zf) goto L_109854a6;
  /* 1098549a mov dword ptr [ebp - 0x1128], 0x109ac6b0 */
  w32((uint32_t)(EBP + -0x1128), (0x109ac6b0u));
  /* 109854a4 jmp 0x109854b0 */
  goto L_109854b0;
L_109854a6:;
  /* 109854a6 mov dword ptr [ebp - 0x1128], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1128), (0x109ac46cu));
L_109854b0:;
  /* 109854b0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109854b4 je 0x109854c1 */
  if (C.zf) goto L_109854c1;
  /* 109854b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109854b9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 109854bf jmp 0x109854cb */
  goto L_109854cb;
L_109854c1:;
  /* 109854c1 mov dword ptr [ebp - 0x112c], 0x109ac46c */
  w32((uint32_t)(EBP + -0x112c), (0x109ac46cu));
L_109854cb:;
  /* 109854cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109854cf je 0x109854dd */
  if (C.zf) goto L_109854dd;
  /* 109854d1 mov dword ptr [ebp - 0x1130], 0x109ac6a8 */
  w32((uint32_t)(EBP + -0x1130), (0x109ac6a8u));
  /* 109854db jmp 0x109854e7 */
  goto L_109854e7;
L_109854dd:;
  /* 109854dd mov dword ptr [ebp - 0x1130], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1130), (0x109ac46cu));
L_109854e7:;
  /* 109854e7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109854ee je 0x109854fe */
  if (C.zf) goto L_109854fe;
  /* 109854f0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 109854f6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 109854fc jmp 0x10985508 */
  goto L_10985508;
L_109854fe:;
  /* 109854fe mov dword ptr [ebp - 0x1134], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1134), (0x109ac46cu));
L_10985508:;
  /* 10985508 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098550f je 0x1098551d */
  if (C.zf) goto L_1098551d;
  /* 10985511 mov dword ptr [ebp - 0x1138], 0x109ac69c */
  w32((uint32_t)(EBP + -0x1138), (0x109ac69cu));
  /* 1098551b jmp 0x10985527 */
  goto L_10985527;
L_1098551d:;
  /* 1098551d mov dword ptr [ebp - 0x1138], 0x109ac46c */
  w32((uint32_t)(EBP + -0x1138), (0x109ac46cu));
L_10985527:;
  /* 10985527 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1098552d push edx */
  push32((uint32_t)(EDX));
  /* 1098552e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10985534 push eax */
  push32((uint32_t)(EAX));
  /* 10985535 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1098553b push ecx */
  push32((uint32_t)(ECX));
  /* 1098553c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10985542 push edx */
  push32((uint32_t)(EDX));
  /* 10985543 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10985549 push eax */
  push32((uint32_t)(EAX));
  /* 1098554a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10985550 push ecx */
  push32((uint32_t)(ECX));
  /* 10985551 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10985557 push edx */
  push32((uint32_t)(EDX));
  /* 10985558 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1098555e push eax */
  push32((uint32_t)(EAX));
  /* 1098555f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10985565 push ecx */
  push32((uint32_t)(ECX));
  /* 10985566 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1098556c push edx */
  push32((uint32_t)(EDX));
  /* 1098556d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985570 push eax */
  push32((uint32_t)(EAX));
  /* 10985571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985574 mov edx, dword ptr [ecx*4 + 0x109afa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa50)));
  /* 1098557b push edx */
  push32((uint32_t)(EDX));
  /* 1098557c push 0x109ac648 */
  push32((uint32_t)(0x109ac648u));
  /* 10985581 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10985586 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1098558c push eax */
  push32((uint32_t)(EAX));
  /* 1098558d call 0x10988d50 */
  push32(0x10985592u); f_10988d50();
  /* 10985592 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985597 jge 0x109855ad */
  if ((C.sf==C.of)) goto L_109855ad;
  /* 10985599 push 0x109ac5ac */
  push32((uint32_t)(0x109ac5acu));
  /* 1098559e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 109855a4 push ecx */
  push32((uint32_t)(ECX));
  /* 109855a5 call 0x10988e50 */
  push32(0x109855aau); f_10988e50();
  /* 109855aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109855ad:;
  /* 109855ad push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 109855b2 push 0x109ac624 */
  push32((uint32_t)(0x109ac624u));
  /* 109855b7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 109855bd push edx */
  push32((uint32_t)(EDX));
  /* 109855be call 0x10989600 */
  push32(0x109855c3u); f_10989600();
  /* 109855c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109855c6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 109855cc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109855d3 jne 0x109855e6 */
  if (!C.zf) goto L_109855e6;
  /* 109855d5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109855d7 call 0x10989340 */
  push32(0x109855dcu); f_10989340();
  /* 109855dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109855df push 3 */
  push32((uint32_t)(0x3u));
  /* 109855e1 call 0x10985660 */
  push32(0x109855e6u); f_10985660();
L_109855e6:;
  /* 109855e6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109855ed jne 0x109855f6 */
  if (!C.zf) goto L_109855f6;
  /* 109855ef mov eax, 1 */
  EAX = (0x1u);
  /* 109855f4 jmp 0x109855f8 */
  goto L_109855f8;
L_109855f6:;
  /* 109855f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109855f8:;
  /* 109855f8 mov esp, ebp */
  ESP = (EBP);
  /* 109855fa pop ebp */
  EBP = (pop32());
  /* 109855fb ret  */
  ESPCHK(0x109852f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005600 @ 0x10985600 (56 bytes, 15 insns) */
void f_10985600(void) {
  FTRACE(0x10985600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985600 push ebp */
  push32((uint32_t)(EBP));
  /* 10985601 mov ebp, esp */
  EBP = (ESP);
  /* 10985603 cmp dword ptr [0x109b317c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b317c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098560a je 0x10985612 */
  if (C.zf) goto L_10985612;
  /* 1098560c call dword ptr [0x109b317c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b317c))), 0x10985612u);
L_10985612:;
  /* 10985612 push 0x109af418 */
  push32((uint32_t)(0x109af418u));
  /* 10985617 push 0x109af208 */
  push32((uint32_t)(0x109af208u));
  /* 1098561c call 0x109857d0 */
  push32(0x10985621u); f_109857d0();
  /* 10985621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985624 push 0x109af104 */
  push32((uint32_t)(0x109af104u));
  /* 10985629 push 0x109af000 */
  push32((uint32_t)(0x109af000u));
  /* 1098562e call 0x109857d0 */
  push32(0x10985633u); f_109857d0();
  /* 10985633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985636 pop ebp */
  EBP = (pop32());
  /* 10985637 ret  */
  ESPCHK(0x10985600u, _esp0);
  ESP += 4; return;
}

/* FUN_10005640 @ 0x10985640 (21 bytes, 10 insns) */
void f_10985640(void) {
  FTRACE(0x10985640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985640 push ebp */
  push32((uint32_t)(EBP));
  /* 10985641 mov ebp, esp */
  EBP = (ESP);
  /* 10985643 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985645 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098564a push eax */
  push32((uint32_t)(EAX));
  /* 1098564b call 0x109856c0 */
  push32(0x10985650u); f_109856c0();
  /* 10985650 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985653 pop ebp */
  EBP = (pop32());
  /* 10985654 ret  */
  ESPCHK(0x10985640u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10985660 (21 bytes, 10 insns) */
void f_10985660(void) {
  FTRACE(0x10985660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985660 push ebp */
  push32((uint32_t)(EBP));
  /* 10985661 mov ebp, esp */
  EBP = (ESP);
  /* 10985663 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985665 push 1 */
  push32((uint32_t)(0x1u));
  /* 10985667 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098566a push eax */
  push32((uint32_t)(EAX));
  /* 1098566b call 0x109856c0 */
  push32(0x10985670u); f_109856c0();
  /* 10985670 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985673 pop ebp */
  EBP = (pop32());
  /* 10985674 ret  */
  ESPCHK(0x10985660u, _esp0);
  ESP += 4; return;
}

/* FUN_10005680 @ 0x10985680 (19 bytes, 9 insns) */
void f_10985680(void) {
  FTRACE(0x10985680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985680 push ebp */
  push32((uint32_t)(EBP));
  /* 10985681 mov ebp, esp */
  EBP = (ESP);
  /* 10985683 push 1 */
  push32((uint32_t)(0x1u));
  /* 10985685 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985687 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985689 call 0x109856c0 */
  push32(0x1098568eu); f_109856c0();
  /* 1098568e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985691 pop ebp */
  EBP = (pop32());
  /* 10985692 ret  */
  ESPCHK(0x10985680u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a0 @ 0x109856a0 (19 bytes, 9 insns) */
void f_109856a0(void) {
  FTRACE(0x109856a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109856a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109856a1 mov ebp, esp */
  EBP = (ESP);
  /* 109856a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109856a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109856a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109856a9 call 0x109856c0 */
  push32(0x109856aeu); f_109856c0();
  /* 109856ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109856b1 pop ebp */
  EBP = (pop32());
  /* 109856b2 ret  */
  ESPCHK(0x109856a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c0 @ 0x109856c0 (227 bytes, 61 insns) */
void f_109856c0(void) {
  FTRACE(0x109856c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109856c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109856c1 mov ebp, esp */
  EBP = (ESP);
  /* 109856c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109856c4 call 0x109857b0 */
  push32(0x109856c9u); f_109857b0();
  /* 109856c9 cmp dword ptr [0x109b1690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109856d0 jne 0x109856e3 */
  if (!C.zf) goto L_109856e3;
  /* 109856d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109856d5 push eax */
  push32((uint32_t)(EAX));
  /* 109856d6 call dword ptr [0x109b4380] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4380))), 0x109856dcu);
  /* 109856dc push eax */
  push32((uint32_t)(EAX));
  /* 109856dd call dword ptr [0x109b437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b437c))), 0x109856e3u);
L_109856e3:;
  /* 109856e3 mov dword ptr [0x109b168c], 1 */
  w32((uint32_t)(0x109b168c), (0x1u));
  /* 109856ed mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 109856f0 mov byte ptr [0x109b1688], cl */
  w8((uint32_t)(0x109b1688), (CL));
  /* 109856f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109856fa jne 0x10985743 */
  if (!C.zf) goto L_10985743;
  /* 109856fc cmp dword ptr [0x109b3178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b3178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985703 je 0x10985731 */
  if (C.zf) goto L_10985731;
  /* 10985705 mov edx, dword ptr [0x109b3174] */
  EDX = (r32((uint32_t)(0x109b3174)));
  /* 1098570b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1098570e:;
  /* 1098570e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985711 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10985714 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10985717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098571a cmp ecx, dword ptr [0x109b3178] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b3178))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985720 jb 0x10985731 */
  if (C.cf) goto L_10985731;
  /* 10985722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985725 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985728 je 0x1098572f */
  if (C.zf) goto L_1098572f;
  /* 1098572a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098572d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1098572fu);
L_1098572f:;
  /* 1098572f jmp 0x1098570e */
  goto L_1098570e;
L_10985731:;
  /* 10985731 push 0x109af724 */
  push32((uint32_t)(0x109af724u));
  /* 10985736 push 0x109af51c */
  push32((uint32_t)(0x109af51cu));
  /* 1098573b call 0x109857d0 */
  push32(0x10985740u); f_109857d0();
  /* 10985740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985743:;
  /* 10985743 push 0x109af92c */
  push32((uint32_t)(0x109af92cu));
  /* 10985748 push 0x109af828 */
  push32((uint32_t)(0x109af828u));
  /* 1098574d call 0x109857d0 */
  push32(0x10985752u); f_109857d0();
  /* 10985752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985755 cmp dword ptr [0x109b1694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098575c jne 0x1098577e */
  if (!C.zf) goto L_1098577e;
  /* 1098575e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10985760 call 0x109873b0 */
  push32(0x10985765u); f_109873b0();
  /* 10985765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985768 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1098576b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098576d je 0x1098577e */
  if (C.zf) goto L_1098577e;
  /* 1098576f mov dword ptr [0x109b1694], 1 */
  w32((uint32_t)(0x109b1694), (0x1u));
  /* 10985779 call 0x10987cc0 */
  push32(0x1098577eu); f_10987cc0();
L_1098577e:;
  /* 1098577e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985782 je 0x1098578b */
  if (C.zf) goto L_1098578b;
  /* 10985784 call 0x109857c0 */
  push32(0x10985789u); f_109857c0();
  /* 10985789 jmp 0x1098579f */
  goto L_1098579f;
L_1098578b:;
  /* 1098578b mov dword ptr [0x109b1690], 1 */
  w32((uint32_t)(0x109b1690), (0x1u));
  /* 10985795 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985798 push ecx */
  push32((uint32_t)(ECX));
  /* 10985799 call dword ptr [0x109b4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4378))), 0x1098579fu);
L_1098579f:;
  /* 1098579f mov esp, ebp */
  ESP = (EBP);
  /* 109857a1 pop ebp */
  EBP = (pop32());
  /* 109857a2 ret  */
  ESPCHK(0x109856c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057b0 @ 0x109857b0 (15 bytes, 7 insns) */
void f_109857b0(void) {
  FTRACE(0x109857b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109857b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109857b1 mov ebp, esp */
  EBP = (ESP);
  /* 109857b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109857b5 call 0x109898a0 */
  push32(0x109857bau); f_109898a0();
  /* 109857ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109857bd pop ebp */
  EBP = (pop32());
  /* 109857be ret  */
  ESPCHK(0x109857b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100057c0 @ 0x109857c0 (15 bytes, 7 insns) */
void f_109857c0(void) {
  FTRACE(0x109857c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109857c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109857c1 mov ebp, esp */
  EBP = (ESP);
  /* 109857c3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109857c5 call 0x10989940 */
  push32(0x109857cau); f_10989940();
  /* 109857ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109857cd pop ebp */
  EBP = (pop32());
  /* 109857ce ret  */
  ESPCHK(0x109857c0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x109857d0 (37 bytes, 16 insns) */
void f_109857d0(void) {
  FTRACE(0x109857d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109857d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109857d1 mov ebp, esp */
  EBP = (ESP);
L_109857d3:;
  /* 109857d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109857d6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109857d9 jae 0x109857f3 */
  if (!C.cf) goto L_109857f3;
  /* 109857db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109857de cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109857e1 je 0x109857e8 */
  if (C.zf) goto L_109857e8;
  /* 109857e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109857e6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x109857e8u);
L_109857e8:;
  /* 109857e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109857eb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109857ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 109857f1 jmp 0x109857d3 */
  goto L_109857d3;
L_109857f3:;
  /* 109857f3 pop ebp */
  EBP = (pop32());
  /* 109857f4 ret  */
  ESPCHK(0x109857d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005800 @ 0x10985800 (130 bytes, 42 insns) */
void f_10985800(void) {
  FTRACE(0x10985800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985800 push ebp */
  push32((uint32_t)(EBP));
  /* 10985801 mov ebp, esp */
  EBP = (ESP);
  /* 10985803 push ecx */
  push32((uint32_t)(ECX));
  /* 10985804 call 0x109897c0 */
  push32(0x10985809u); f_109897c0();
  /* 10985809 call dword ptr [0x109b42ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42ac))), 0x1098580fu);
  /* 1098580f mov dword ptr [0x109afa5c], eax */
  w32((uint32_t)(0x109afa5c), (EAX));
  /* 10985814 cmp dword ptr [0x109afa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x109afa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098581b jne 0x10985821 */
  if (!C.zf) goto L_10985821;
  /* 1098581d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098581f jmp 0x1098587e */
  goto L_1098587e;
L_10985821:;
  /* 10985821 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10985823 push 0x109ac780 */
  push32((uint32_t)(0x109ac780u));
  /* 10985828 push 2 */
  push32((uint32_t)(0x2u));
  /* 1098582a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1098582c push 1 */
  push32((uint32_t)(0x1u));
  /* 1098582e call 0x109862b0 */
  push32(0x10985833u); f_109862b0();
  /* 10985833 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985836 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10985839 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098583d je 0x10985854 */
  if (C.zf) goto L_10985854;
  /* 1098583f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985842 push eax */
  push32((uint32_t)(EAX));
  /* 10985843 mov ecx, dword ptr [0x109afa5c] */
  ECX = (r32((uint32_t)(0x109afa5c)));
  /* 10985849 push ecx */
  push32((uint32_t)(ECX));
  /* 1098584a call dword ptr [0x109b42b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42b0))), 0x10985850u);
  /* 10985850 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985852 jne 0x10985858 */
  if (!C.zf) goto L_10985858;
L_10985854:;
  /* 10985854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10985856 jmp 0x1098587e */
  goto L_1098587e;
L_10985858:;
  /* 10985858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098585b push edx */
  push32((uint32_t)(EDX));
  /* 1098585c call 0x109858c0 */
  push32(0x10985861u); f_109858c0();
  /* 10985861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985864 call dword ptr [0x109b4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4384))), 0x1098586au);
  /* 1098586a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098586d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1098586f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985872 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10985879 mov eax, 1 */
  EAX = (0x1u);
L_1098587e:;
  /* 1098587e mov esp, ebp */
  ESP = (EBP);
  /* 10985880 pop ebp */
  EBP = (pop32());
  /* 10985881 ret  */
  ESPCHK(0x10985800u, _esp0);
  ESP += 4; return;
}

/* FUN_10005890 @ 0x10985890 (41 bytes, 11 insns) */
void f_10985890(void) {
  FTRACE(0x10985890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985890 push ebp */
  push32((uint32_t)(EBP));
  /* 10985891 mov ebp, esp */
  EBP = (ESP);
  /* 10985893 call 0x10989800 */
  push32(0x10985898u); f_10989800();
  /* 10985898 cmp dword ptr [0x109afa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x109afa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098589f je 0x109858b7 */
  if (C.zf) goto L_109858b7;
  /* 109858a1 mov eax, dword ptr [0x109afa5c] */
  EAX = (r32((uint32_t)(0x109afa5c)));
  /* 109858a6 push eax */
  push32((uint32_t)(EAX));
  /* 109858a7 call dword ptr [0x109b4390] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4390))), 0x109858adu);
  /* 109858ad mov dword ptr [0x109afa5c], 0xffffffff */
  w32((uint32_t)(0x109afa5c), (0xffffffffu));
L_109858b7:;
  /* 109858b7 pop ebp */
  EBP = (pop32());
  /* 109858b8 ret  */
  ESPCHK(0x10985890u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x109858c0 (25 bytes, 8 insns) */
void f_109858c0(void) {
  FTRACE(0x109858c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109858c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109858c1 mov ebp, esp */
  EBP = (ESP);
  /* 109858c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109858c6 mov dword ptr [eax + 0x50], 0x109afc00 */
  w32((uint32_t)(EAX + 0x50), (0x109afc00u));
  /* 109858cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109858d0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 109858d7 pop ebp */
  EBP = (pop32());
  /* 109858d8 ret  */
  ESPCHK(0x109858c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058e0 @ 0x109858e0 (152 bytes, 48 insns) */
void f_109858e0(void) {
  FTRACE(0x109858e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109858e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109858e1 mov ebp, esp */
  EBP = (ESP);
  /* 109858e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109858e6 call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x109858ecu);
  /* 109858ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109858ef mov eax, dword ptr [0x109afa5c] */
  EAX = (r32((uint32_t)(0x109afa5c)));
  /* 109858f4 push eax */
  push32((uint32_t)(EAX));
  /* 109858f5 call dword ptr [0x109b4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4398))), 0x109858fbu);
  /* 109858fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109858fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985902 jne 0x10985967 */
  if (!C.zf) goto L_10985967;
  /* 10985904 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10985909 push 0x109ac780 */
  push32((uint32_t)(0x109ac780u));
  /* 1098590e push 2 */
  push32((uint32_t)(0x2u));
  /* 10985910 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10985912 push 1 */
  push32((uint32_t)(0x1u));
  /* 10985914 call 0x109862b0 */
  push32(0x10985919u); f_109862b0();
  /* 10985919 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098591c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098591f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985923 je 0x1098595d */
  if (C.zf) goto L_1098595d;
  /* 10985925 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985928 push ecx */
  push32((uint32_t)(ECX));
  /* 10985929 mov edx, dword ptr [0x109afa5c] */
  EDX = (r32((uint32_t)(0x109afa5c)));
  /* 1098592f push edx */
  push32((uint32_t)(EDX));
  /* 10985930 call dword ptr [0x109b42b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42b0))), 0x10985936u);
  /* 10985936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985938 je 0x1098595d */
  if (C.zf) goto L_1098595d;
  /* 1098593a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098593d push eax */
  push32((uint32_t)(EAX));
  /* 1098593e call 0x109858c0 */
  push32(0x10985943u); f_109858c0();
  /* 10985943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985946 call dword ptr [0x109b4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4384))), 0x1098594cu);
  /* 1098594c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098594f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10985951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985954 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1098595b jmp 0x10985967 */
  goto L_10985967;
L_1098595d:;
  /* 1098595d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1098595f call 0x10984e10 */
  push32(0x10985964u); f_10984e10();
  /* 10985964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985967:;
  /* 10985967 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098596a push eax */
  push32((uint32_t)(EAX));
  /* 1098596b call dword ptr [0x109b4394] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4394))), 0x10985971u);
  /* 10985971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985974 mov esp, ebp */
  ESP = (EBP);
  /* 10985976 pop ebp */
  EBP = (pop32());
  /* 10985977 ret  */
  ESPCHK(0x109858e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x10985980 (263 bytes, 86 insns) */
void f_10985980(void) {
  FTRACE(0x10985980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985980 push ebp */
  push32((uint32_t)(EBP));
  /* 10985981 mov ebp, esp */
  EBP = (ESP);
  /* 10985983 cmp dword ptr [0x109afa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x109afa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098598a je 0x10985a85 */
  if (C.zf) goto L_10985a85;
  /* 10985990 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985994 jne 0x109859a5 */
  if (!C.zf) goto L_109859a5;
  /* 10985996 mov eax, dword ptr [0x109afa5c] */
  EAX = (r32((uint32_t)(0x109afa5c)));
  /* 1098599b push eax */
  push32((uint32_t)(EAX));
  /* 1098599c call dword ptr [0x109b4398] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4398))), 0x109859a2u);
  /* 109859a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_109859a5:;
  /* 109859a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109859a9 je 0x10985a76 */
  if (C.zf) goto L_10985a76;
  /* 109859af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109859b2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109859b6 je 0x109859c9 */
  if (C.zf) goto L_109859c9;
  /* 109859b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109859ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109859bd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 109859c0 push eax */
  push32((uint32_t)(EAX));
  /* 109859c1 call 0x10986930 */
  push32(0x109859c6u); f_10986930();
  /* 109859c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109859c9:;
  /* 109859c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109859cc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109859d0 je 0x109859e3 */
  if (C.zf) goto L_109859e3;
  /* 109859d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109859d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109859d7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 109859da push eax */
  push32((uint32_t)(EAX));
  /* 109859db call 0x10986930 */
  push32(0x109859e0u); f_10986930();
  /* 109859e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109859e3:;
  /* 109859e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109859e6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109859ea je 0x109859fd */
  if (C.zf) goto L_109859fd;
  /* 109859ec push 2 */
  push32((uint32_t)(0x2u));
  /* 109859ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109859f1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 109859f4 push eax */
  push32((uint32_t)(EAX));
  /* 109859f5 call 0x10986930 */
  push32(0x109859fau); f_10986930();
  /* 109859fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109859fd:;
  /* 109859fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a00 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985a04 je 0x10985a17 */
  if (C.zf) goto L_10985a17;
  /* 10985a06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10985a08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a0b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10985a0e push eax */
  push32((uint32_t)(EAX));
  /* 10985a0f call 0x10986930 */
  push32(0x10985a14u); f_10986930();
  /* 10985a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985a17:;
  /* 10985a17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a1a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985a1e je 0x10985a31 */
  if (C.zf) goto L_10985a31;
  /* 10985a20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10985a22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a25 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10985a28 push eax */
  push32((uint32_t)(EAX));
  /* 10985a29 call 0x10986930 */
  push32(0x10985a2eu); f_10986930();
  /* 10985a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985a31:;
  /* 10985a31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a34 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985a38 je 0x10985a4b */
  if (C.zf) goto L_10985a4b;
  /* 10985a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10985a3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a3f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10985a42 push eax */
  push32((uint32_t)(EAX));
  /* 10985a43 call 0x10986930 */
  push32(0x10985a48u); f_10986930();
  /* 10985a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985a4b:;
  /* 10985a4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a4e cmp dword ptr [ecx + 0x50], 0x109afc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x109afc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985a55 je 0x10985a68 */
  if (C.zf) goto L_10985a68;
  /* 10985a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10985a59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a5c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10985a5f push eax */
  push32((uint32_t)(EAX));
  /* 10985a60 call 0x10986930 */
  push32(0x10985a65u); f_10986930();
  /* 10985a65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985a68:;
  /* 10985a68 push 2 */
  push32((uint32_t)(0x2u));
  /* 10985a6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985a6d push ecx */
  push32((uint32_t)(ECX));
  /* 10985a6e call 0x10986930 */
  push32(0x10985a73u); f_10986930();
  /* 10985a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985a76:;
  /* 10985a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985a78 mov edx, dword ptr [0x109afa5c] */
  EDX = (r32((uint32_t)(0x109afa5c)));
  /* 10985a7e push edx */
  push32((uint32_t)(EDX));
  /* 10985a7f call dword ptr [0x109b42b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b42b0))), 0x10985a85u);
L_10985a85:;
  /* 10985a85 pop ebp */
  EBP = (pop32());
  /* 10985a86 ret  */
  ESPCHK(0x10985980u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10985a90 (11 bytes, 5 insns) */
void f_10985a90(void) {
  FTRACE(0x10985a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10985a91 mov ebp, esp */
  EBP = (ESP);
  /* 10985a93 call dword ptr [0x109b4384] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4384))), 0x10985a99u);
  /* 10985a99 pop ebp */
  EBP = (pop32());
  /* 10985a9a ret  */
  ESPCHK(0x10985a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aa0 @ 0x10985aa0 (11 bytes, 5 insns) */
void f_10985aa0(void) {
  FTRACE(0x10985aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10985aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10985aa3 call dword ptr [0x109b43a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43a0))), 0x10985aa9u);
  /* 10985aa9 pop ebp */
  EBP = (pop32());
  /* 10985aaa ret  */
  ESPCHK(0x10985aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x10985ab0 (804 bytes, 236 insns) */
void f_10985ab0(void) {
  FTRACE(0x10985ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10985ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10985ab3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10985ab6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10985abb push 0x109ac78c */
  push32((uint32_t)(0x109ac78cu));
  /* 10985ac0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10985ac2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10985ac7 call 0x10985ea0 */
  push32(0x10985accu); f_10985ea0();
  /* 10985acc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985acf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10985ad2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985ad6 jne 0x10985ae2 */
  if (!C.zf) goto L_10985ae2;
  /* 10985ad8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10985ada call 0x10984e10 */
  push32(0x10985adfu); f_10984e10();
  /* 10985adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10985ae2:;
  /* 10985ae2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985ae5 mov dword ptr [0x109b3020], eax */
  w32((uint32_t)(0x109b3020), (EAX));
  /* 10985aea mov dword ptr [0x109b315c], 0x20 */
  w32((uint32_t)(0x109b315c), (0x20u));
  /* 10985af4 jmp 0x10985aff */
  goto L_10985aff;
L_10985af6:;
  /* 10985af6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985af9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985afc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10985aff:;
  /* 10985aff mov edx, dword ptr [0x109b3020] */
  EDX = (r32((uint32_t)(0x109b3020)));
  /* 10985b05 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985b0b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985b0e jae 0x10985b33 */
  if (!C.cf) goto L_10985b33;
  /* 10985b10 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985b13 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10985b17 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985b1a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10985b20 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985b23 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10985b27 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985b2a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10985b31 jmp 0x10985af6 */
  goto L_10985af6;
L_10985b33:;
  /* 10985b33 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10985b36 push ecx */
  push32((uint32_t)(ECX));
  /* 10985b37 call dword ptr [0x109b438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b438c))), 0x10985b3du);
  /* 10985b3d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10985b40 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10985b46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10985b48 je 0x10985cd5 */
  if (C.zf) goto L_10985cd5;
  /* 10985b4e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985b52 je 0x10985cd5 */
  if (C.zf) goto L_10985cd5;
  /* 10985b58 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10985b5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10985b5d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10985b60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10985b63 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985b66 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10985b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985b6c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985b6f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10985b72 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985b79 jge 0x10985b83 */
  if ((C.sf==C.of)) goto L_10985b83;
  /* 10985b7b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10985b7e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10985b81 jmp 0x10985b8a */
  goto L_10985b8a;
L_10985b83:;
  /* 10985b83 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10985b8a:;
  /* 10985b8a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10985b8d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10985b90 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10985b97 jmp 0x10985ba2 */
  goto L_10985ba2;
L_10985b99:;
  /* 10985b99 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10985b9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985b9f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10985ba2:;
  /* 10985ba2 mov ecx, dword ptr [0x109b315c] */
  ECX = (r32((uint32_t)(0x109b315c)));
  /* 10985ba8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985bab jge 0x10985c42 */
  if ((C.sf==C.of)) goto L_10985c42;
  /* 10985bb1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10985bb6 push 0x109ac78c */
  push32((uint32_t)(0x109ac78cu));
  /* 10985bbb push 2 */
  push32((uint32_t)(0x2u));
  /* 10985bbd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10985bc2 call 0x10985ea0 */
  push32(0x10985bc7u); f_10985ea0();
  /* 10985bc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985bca mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10985bcd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985bd1 jne 0x10985bde */
  if (!C.zf) goto L_10985bde;
  /* 10985bd3 mov edx, dword ptr [0x109b315c] */
  EDX = (r32((uint32_t)(0x109b315c)));
  /* 10985bd9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10985bdc jmp 0x10985c42 */
  goto L_10985c42;
L_10985bde:;
  /* 10985bde mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10985be1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985be4 mov dword ptr [eax*4 + 0x109b3020], ecx */
  w32((uint32_t)(EAX*4 + 0x109b3020), (ECX));
  /* 10985beb mov edx, dword ptr [0x109b315c] */
  EDX = (r32((uint32_t)(0x109b315c)));
  /* 10985bf1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985bf4 mov dword ptr [0x109b315c], edx */
  w32((uint32_t)(0x109b315c), (EDX));
  /* 10985bfa jmp 0x10985c05 */
  goto L_10985c05;
L_10985bfc:;
  /* 10985bfc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985bff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985c02 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10985c05:;
  /* 10985c05 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10985c08 mov edx, dword ptr [ecx*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109b3020)));
  /* 10985c0f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985c15 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985c18 jae 0x10985c3d */
  if (!C.cf) goto L_10985c3d;
  /* 10985c1a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985c1d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10985c21 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985c24 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10985c2a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985c2d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10985c31 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985c34 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10985c3b jmp 0x10985bfc */
  goto L_10985bfc;
L_10985c3d:;
  /* 10985c3d jmp 0x10985b99 */
  goto L_10985b99;
L_10985c42:;
  /* 10985c42 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10985c49 jmp 0x10985c66 */
  goto L_10985c66;
L_10985c4b:;
  /* 10985c4b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10985c4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985c51 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10985c54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985c57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985c5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10985c5d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10985c60 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985c63 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10985c66:;
  /* 10985c66 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10985c69 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985c6c jge 0x10985cd5 */
  if ((C.sf==C.of)) goto L_10985cd5;
  /* 10985c6e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10985c71 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985c74 je 0x10985cd0 */
  if (C.zf) goto L_10985cd0;
  /* 10985c76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985c79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10985c7c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10985c7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10985c81 je 0x10985cd0 */
  if (C.zf) goto L_10985cd0;
  /* 10985c83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985c86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10985c89 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10985c8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985c8e jne 0x10985ca0 */
  if (!C.zf) goto L_10985ca0;
  /* 10985c90 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10985c93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10985c95 push edx */
  push32((uint32_t)(EDX));
  /* 10985c96 call dword ptr [0x109b43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43a8))), 0x10985c9cu);
  /* 10985c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985c9e je 0x10985cd0 */
  if (C.zf) goto L_10985cd0;
L_10985ca0:;
  /* 10985ca0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10985ca3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10985ca6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10985ca9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10985cac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10985caf mov edx, dword ptr [eax*4 + 0x109b3020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 10985cb6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985cb8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10985cbb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985cbe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10985cc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10985cc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10985cc5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985cc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985ccb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10985ccd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10985cd0:;
  /* 10985cd0 jmp 0x10985c4b */
  goto L_10985c4b;
L_10985cd5:;
  /* 10985cd5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10985cdc jmp 0x10985ce7 */
  goto L_10985ce7;
L_10985cde:;
  /* 10985cde mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10985ce1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985ce4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10985ce7:;
  /* 10985ce7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985ceb jge 0x10985dc4 */
  if ((C.sf==C.of)) goto L_10985dc4;
  /* 10985cf1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10985cf4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10985cf7 mov edx, dword ptr [0x109b3020] */
  EDX = (r32((uint32_t)(0x109b3020)));
  /* 10985cfd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985cff mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10985d02 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985d05 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985d08 jne 0x10985db0 */
  if (!C.zf) goto L_10985db0;
  /* 10985d0e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985d11 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10985d15 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985d19 jne 0x10985d24 */
  if (!C.zf) goto L_10985d24;
  /* 10985d1b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10985d22 jmp 0x10985d34 */
  goto L_10985d34;
L_10985d24:;
  /* 10985d24 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10985d27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10985d2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10985d2c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10985d2e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985d31 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10985d34:;
  /* 10985d34 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10985d37 push eax */
  push32((uint32_t)(EAX));
  /* 10985d38 call dword ptr [0x109b4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4358))), 0x10985d3eu);
  /* 10985d3e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10985d41 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985d45 je 0x10985d9f */
  if (C.zf) goto L_10985d9f;
  /* 10985d47 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10985d4a push ecx */
  push32((uint32_t)(ECX));
  /* 10985d4b call dword ptr [0x109b43a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43a8))), 0x10985d51u);
  /* 10985d51 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10985d54 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985d58 je 0x10985d9f */
  if (C.zf) goto L_10985d9f;
  /* 10985d5a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985d5d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10985d60 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10985d62 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10985d65 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10985d6b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985d6e jne 0x10985d80 */
  if (!C.zf) goto L_10985d80;
  /* 10985d70 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985d73 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10985d76 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10985d78 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985d7b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10985d7e jmp 0x10985d9d */
  goto L_10985d9d;
L_10985d80:;
  /* 10985d80 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10985d83 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10985d89 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985d8c jne 0x10985d9d */
  if (!C.zf) goto L_10985d9d;
  /* 10985d8e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985d91 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10985d94 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10985d97 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985d9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10985d9d:;
  /* 10985d9d jmp 0x10985dae */
  goto L_10985dae;
L_10985d9f:;
  /* 10985d9f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985da2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10985da5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10985da8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985dab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10985dae:;
  /* 10985dae jmp 0x10985dbf */
  goto L_10985dbf;
L_10985db0:;
  /* 10985db0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985db3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10985db6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10985db9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10985dbc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10985dbf:;
  /* 10985dbf jmp 0x10985cde */
  goto L_10985cde;
L_10985dc4:;
  /* 10985dc4 mov eax, dword ptr [0x109b315c] */
  EAX = (r32((uint32_t)(0x109b315c)));
  /* 10985dc9 push eax */
  push32((uint32_t)(EAX));
  /* 10985dca call dword ptr [0x109b43a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43a4))), 0x10985dd0u);
  /* 10985dd0 mov esp, ebp */
  ESP = (EBP);
  /* 10985dd2 pop ebp */
  EBP = (pop32());
  /* 10985dd3 ret  */
  ESPCHK(0x10985ab0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10985de0 (155 bytes, 45 insns) */
void f_10985de0(void) {
  FTRACE(0x10985de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10985de1 mov ebp, esp */
  EBP = (ESP);
  /* 10985de3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10985de6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10985ded jmp 0x10985df8 */
  goto L_10985df8;
L_10985def:;
  /* 10985def mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985df2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985df5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10985df8:;
  /* 10985df8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985dfc jge 0x10985e77 */
  if ((C.sf==C.of)) goto L_10985e77;
  /* 10985dfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985e01 cmp dword ptr [ecx*4 + 0x109b3020], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109b3020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985e09 je 0x10985e72 */
  if (C.zf) goto L_10985e72;
  /* 10985e0b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985e0e mov eax, dword ptr [edx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 10985e15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10985e18 jmp 0x10985e23 */
  goto L_10985e23;
L_10985e1a:;
  /* 10985e1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985e1d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985e20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10985e23:;
  /* 10985e23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985e26 mov eax, dword ptr [edx*4 + 0x109b3020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109b3020)));
  /* 10985e2d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985e32 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985e35 jae 0x10985e4f */
  if (!C.cf) goto L_10985e4f;
  /* 10985e37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985e3a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985e3e je 0x10985e4d */
  if (C.zf) goto L_10985e4d;
  /* 10985e40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985e43 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10985e46 push edx */
  push32((uint32_t)(EDX));
  /* 10985e47 call dword ptr [0x109b43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b0))), 0x10985e4du);
L_10985e4d:;
  /* 10985e4d jmp 0x10985e1a */
  goto L_10985e1a;
L_10985e4f:;
  /* 10985e4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10985e51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985e54 mov ecx, dword ptr [eax*4 + 0x109b3020] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109b3020)));
  /* 10985e5b push ecx */
  push32((uint32_t)(ECX));
  /* 10985e5c call 0x10986930 */
  push32(0x10985e61u); f_10986930();
  /* 10985e61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985e64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985e67 mov dword ptr [edx*4 + 0x109b3020], 0 */
  w32((uint32_t)(EDX*4 + 0x109b3020), (0x0u));
L_10985e72:;
  /* 10985e72 jmp 0x10985def */
  goto L_10985def;
L_10985e77:;
  /* 10985e77 mov esp, ebp */
  ESP = (EBP);
  /* 10985e79 pop ebp */
  EBP = (pop32());
  /* 10985e7a ret  */
  ESPCHK(0x10985de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e80 @ 0x10985e80 (29 bytes, 13 insns) */
void f_10985e80(void) {
  FTRACE(0x10985e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10985e81 mov ebp, esp */
  EBP = (ESP);
  /* 10985e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985e87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10985e89 mov eax, dword ptr [0x109b1838] */
  EAX = (r32((uint32_t)(0x109b1838)));
  /* 10985e8e push eax */
  push32((uint32_t)(EAX));
  /* 10985e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985e92 push ecx */
  push32((uint32_t)(ECX));
  /* 10985e93 call 0x10985ef0 */
  push32(0x10985e98u); f_10985ef0();
  /* 10985e98 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985e9b pop ebp */
  EBP = (pop32());
  /* 10985e9c ret  */
  ESPCHK(0x10985e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ea0 @ 0x10985ea0 (35 bytes, 16 insns) */
void f_10985ea0(void) {
  FTRACE(0x10985ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10985ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10985ea3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10985ea6 push eax */
  push32((uint32_t)(EAX));
  /* 10985ea7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10985eaa push ecx */
  push32((uint32_t)(ECX));
  /* 10985eab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10985eae push edx */
  push32((uint32_t)(EDX));
  /* 10985eaf mov eax, dword ptr [0x109b1838] */
  EAX = (r32((uint32_t)(0x109b1838)));
  /* 10985eb4 push eax */
  push32((uint32_t)(EAX));
  /* 10985eb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985eb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10985eb9 call 0x10985ef0 */
  push32(0x10985ebeu); f_10985ef0();
  /* 10985ebe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985ec1 pop ebp */
  EBP = (pop32());
  /* 10985ec2 ret  */
  ESPCHK(0x10985ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x10985ed0 (27 bytes, 13 insns) */
void f_10985ed0(void) {
  FTRACE(0x10985ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10985ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10985ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10985ed9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10985edc push eax */
  push32((uint32_t)(EAX));
  /* 10985edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 10985ee1 call 0x10985ef0 */
  push32(0x10985ee6u); f_10985ef0();
  /* 10985ee6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985ee9 pop ebp */
  EBP = (pop32());
  /* 10985eea ret  */
  ESPCHK(0x10985ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ef0 @ 0x10985ef0 (94 bytes, 38 insns) */
void f_10985ef0(void) {
  FTRACE(0x10985ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10985ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10985ef3 push ecx */
  push32((uint32_t)(ECX));
L_10985ef4:;
  /* 10985ef4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10985ef6 call 0x109898a0 */
  push32(0x10985efbu); f_109898a0();
  /* 10985efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985efe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10985f01 push eax */
  push32((uint32_t)(EAX));
  /* 10985f02 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10985f05 push ecx */
  push32((uint32_t)(ECX));
  /* 10985f06 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10985f09 push edx */
  push32((uint32_t)(EDX));
  /* 10985f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985f0d push eax */
  push32((uint32_t)(EAX));
  /* 10985f0e call 0x10985f70 */
  push32(0x10985f13u); f_10985f70();
  /* 10985f13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985f16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10985f19 push 9 */
  push32((uint32_t)(0x9u));
  /* 10985f1b call 0x10989940 */
  push32(0x10985f20u); f_10989940();
  /* 10985f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985f23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985f27 jne 0x10985f2f */
  if (!C.zf) goto L_10985f2f;
  /* 10985f29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985f2d jne 0x10985f34 */
  if (!C.zf) goto L_10985f34;
L_10985f2f:;
  /* 10985f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10985f32 jmp 0x10985f4a */
  goto L_10985f4a;
L_10985f34:;
  /* 10985f34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985f37 push ecx */
  push32((uint32_t)(ECX));
  /* 10985f38 call 0x10989be0 */
  push32(0x10985f3du); f_10989be0();
  /* 10985f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985f42 jne 0x10985f48 */
  if (!C.zf) goto L_10985f48;
  /* 10985f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10985f46 jmp 0x10985f4a */
  goto L_10985f4a;
L_10985f48:;
  /* 10985f48 jmp 0x10985ef4 */
  goto L_10985ef4;
L_10985f4a:;
  /* 10985f4a mov esp, ebp */
  ESP = (EBP);
  /* 10985f4c pop ebp */
  EBP = (pop32());
  /* 10985f4d ret  */
  ESPCHK(0x10985ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x10985f50 (23 bytes, 11 insns) */
void f_10985f50(void) {
  FTRACE(0x10985f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10985f51 mov ebp, esp */
  EBP = (ESP);
  /* 10985f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985f57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10985f59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985f5c push eax */
  push32((uint32_t)(EAX));
  /* 10985f5d call 0x10985f70 */
  push32(0x10985f62u); f_10985f70();
  /* 10985f62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985f65 pop ebp */
  EBP = (pop32());
  /* 10985f66 ret  */
  ESPCHK(0x10985f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x10985f70 (787 bytes, 254 insns) */
void f_10985f70(void) {
  FTRACE(0x10985f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10985f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10985f71 mov ebp, esp */
  EBP = (ESP);
  /* 10985f73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10985f76 push ebx */
  push32((uint32_t)(EBX));
  /* 10985f77 push esi */
  push32((uint32_t)(ESI));
  /* 10985f78 push edi */
  push32((uint32_t)(EDI));
  /* 10985f79 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10985f80 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 10985f85 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10985f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985f8a je 0x10985fbc */
  if (C.zf) goto L_10985fbc;
L_10985f8c:;
  /* 10985f8c call 0x10987040 */
  push32(0x10985f91u); f_10987040();
  /* 10985f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985f93 jne 0x10985fb6 */
  if (!C.zf) goto L_10985fb6;
  /* 10985f95 push 0x109ac880 */
  push32((uint32_t)(0x109ac880u));
  /* 10985f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10985f9c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10985fa1 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10985fa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10985fa8 call 0x10984f60 */
  push32(0x10985fadu); f_10984f60();
  /* 10985fad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985fb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985fb3 jne 0x10985fb6 */
  if (!C.zf) goto L_10985fb6;
  /* 10985fb5 int3  */
  x86_unimpl("int3 @ 0x10985fb5");
L_10985fb6:;
  /* 10985fb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10985fb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10985fba jne 0x10985f8c */
  if (!C.zf) goto L_10985f8c;
L_10985fbc:;
  /* 10985fbc mov edx, dword ptr [0x109afa88] */
  EDX = (r32((uint32_t)(0x109afa88)));
  /* 10985fc2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10985fc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985fc8 cmp eax, dword ptr [0x109afa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109afa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985fce jne 0x10985fd1 */
  if (!C.zf) goto L_10985fd1;
  /* 10985fd0 int3  */
  x86_unimpl("int3 @ 0x10985fd0");
L_10985fd1:;
  /* 10985fd1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10985fd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10985fd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10985fd8 push edx */
  push32((uint32_t)(EDX));
  /* 10985fd9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10985fdc push eax */
  push32((uint32_t)(EAX));
  /* 10985fdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10985fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 10985fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10985fe4 push edx */
  push32((uint32_t)(EDX));
  /* 10985fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10985fe7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10985fe9 call dword ptr [0x109afc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x109afc90))), 0x10985fefu);
  /* 10985fef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10985ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10985ff4 jne 0x10986054 */
  if (!C.zf) goto L_10986054;
  /* 10985ff6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10985ffa je 0x10986027 */
  if (C.zf) goto L_10986027;
L_10985ffc:;
  /* 10985ffc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10985fff push eax */
  push32((uint32_t)(EAX));
  /* 10986000 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10986003 push ecx */
  push32((uint32_t)(ECX));
  /* 10986004 push 0x109ac83c */
  push32((uint32_t)(0x109ac83cu));
  /* 10986009 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098600b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098600d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098600f push 0 */
  push32((uint32_t)(0x0u));
  /* 10986011 call 0x10984f60 */
  push32(0x10986016u); f_10984f60();
  /* 10986016 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986019 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098601c jne 0x1098601f */
  if (!C.zf) goto L_1098601f;
  /* 1098601e int3  */
  x86_unimpl("int3 @ 0x1098601e");
L_1098601f:;
  /* 1098601f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986021 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10986023 jne 0x10985ffc */
  if (!C.zf) goto L_10985ffc;
  /* 10986025 jmp 0x1098604d */
  goto L_1098604d;
L_10986027:;
  /* 10986027 push 0x109ac818 */
  push32((uint32_t)(0x109ac818u));
  /* 1098602c push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 10986031 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986033 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986035 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986037 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986039 call 0x10984f60 */
  push32(0x1098603eu); f_10984f60();
  /* 1098603e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986041 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986044 jne 0x10986047 */
  if (!C.zf) goto L_10986047;
  /* 10986046 int3  */
  x86_unimpl("int3 @ 0x10986046");
L_10986047:;
  /* 10986047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098604b jne 0x10986027 */
  if (!C.zf) goto L_10986027;
L_1098604d:;
  /* 1098604d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098604f jmp 0x1098627c */
  goto L_1098627c;
L_10986054:;
  /* 10986054 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10986057 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098605d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986060 je 0x10986076 */
  if (C.zf) goto L_10986076;
  /* 10986062 mov edx, dword ptr [0x109afa84] */
  EDX = (r32((uint32_t)(0x109afa84)));
  /* 10986068 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1098606b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098606d jne 0x10986076 */
  if (!C.zf) goto L_10986076;
  /* 1098606f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10986076:;
  /* 10986076 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098607a ja 0x10986087 */
  if ((!C.cf&&!C.zf)) goto L_10986087;
  /* 1098607c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098607f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986082 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986085 jbe 0x109860b3 */
  if ((C.cf||C.zf)) goto L_109860b3;
L_10986087:;
  /* 10986087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098608a push ecx */
  push32((uint32_t)(ECX));
  /* 1098608b push 0x109ac7f0 */
  push32((uint32_t)(0x109ac7f0u));
  /* 10986090 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986092 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986094 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986096 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986098 call 0x10984f60 */
  push32(0x1098609du); f_10984f60();
  /* 1098609d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109860a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109860a3 jne 0x109860a6 */
  if (!C.zf) goto L_109860a6;
  /* 109860a5 int3  */
  x86_unimpl("int3 @ 0x109860a5");
L_109860a6:;
  /* 109860a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109860a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109860aa jne 0x10986087 */
  if (!C.zf) goto L_10986087;
  /* 109860ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109860ae jmp 0x1098627c */
  goto L_1098627c;
L_109860b3:;
  /* 109860b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109860b6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109860bb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109860be je 0x10986100 */
  if (C.zf) goto L_10986100;
  /* 109860c0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109860c4 je 0x10986100 */
  if (C.zf) goto L_10986100;
  /* 109860c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109860c9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109860cf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109860d2 je 0x10986100 */
  if (C.zf) goto L_10986100;
  /* 109860d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109860d8 je 0x10986100 */
  if (C.zf) goto L_10986100;
L_109860da:;
  /* 109860da push 0x109ac7bc */
  push32((uint32_t)(0x109ac7bcu));
  /* 109860df push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 109860e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109860e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109860e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109860ea push 1 */
  push32((uint32_t)(0x1u));
  /* 109860ec call 0x10984f60 */
  push32(0x109860f1u); f_10984f60();
  /* 109860f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109860f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109860f7 jne 0x109860fa */
  if (!C.zf) goto L_109860fa;
  /* 109860f9 int3  */
  x86_unimpl("int3 @ 0x109860f9");
L_109860fa:;
  /* 109860fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109860fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109860fe jne 0x109860da */
  if (!C.zf) goto L_109860da;
L_10986100:;
  /* 10986100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986103 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986106 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10986109 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098610c push ecx */
  push32((uint32_t)(ECX));
  /* 1098610d call 0x10989cf0 */
  push32(0x10986112u); f_10989cf0();
  /* 10986112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10986118 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098611c jne 0x10986125 */
  if (!C.zf) goto L_10986125;
  /* 1098611e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986120 jmp 0x1098627c */
  goto L_1098627c;
L_10986125:;
  /* 10986125 mov edx, dword ptr [0x109afa88] */
  EDX = (r32((uint32_t)(0x109afa88)));
  /* 1098612b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098612e mov dword ptr [0x109afa88], edx */
  w32((uint32_t)(0x109afa88), (EDX));
  /* 10986134 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986138 je 0x10986183 */
  if (C.zf) goto L_10986183;
  /* 1098613a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098613d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10986143 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986146 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1098614d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986150 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10986157 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098615a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10986161 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986167 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1098616a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098616d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10986174 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986177 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1098617e jmp 0x10986223 */
  goto L_10986223;
L_10986183:;
  /* 10986183 mov edx, dword ptr [0x109b169c] */
  EDX = (r32((uint32_t)(0x109b169c)));
  /* 10986189 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098618c mov dword ptr [0x109b169c], edx */
  w32((uint32_t)(0x109b169c), (EDX));
  /* 10986192 mov eax, dword ptr [0x109b16a4] */
  EAX = (r32((uint32_t)(0x109b16a4)));
  /* 10986197 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098619a mov dword ptr [0x109b16a4], eax */
  w32((uint32_t)(0x109b16a4), (EAX));
  /* 1098619f mov ecx, dword ptr [0x109b16a4] */
  ECX = (r32((uint32_t)(0x109b16a4)));
  /* 109861a5 cmp ecx, dword ptr [0x109b16a8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109b16a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109861ab jbe 0x109861b9 */
  if ((C.cf||C.zf)) goto L_109861b9;
  /* 109861ad mov edx, dword ptr [0x109b16a4] */
  EDX = (r32((uint32_t)(0x109b16a4)));
  /* 109861b3 mov dword ptr [0x109b16a8], edx */
  w32((uint32_t)(0x109b16a8), (EDX));
L_109861b9:;
  /* 109861b9 cmp dword ptr [0x109b16a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b16a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109861c0 je 0x109861cf */
  if (C.zf) goto L_109861cf;
  /* 109861c2 mov eax, dword ptr [0x109b16a0] */
  EAX = (r32((uint32_t)(0x109b16a0)));
  /* 109861c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109861ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 109861cd jmp 0x109861d8 */
  goto L_109861d8;
L_109861cf:;
  /* 109861cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109861d2 mov dword ptr [0x109b1698], edx */
  w32((uint32_t)(0x109b1698), (EDX));
L_109861d8:;
  /* 109861d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109861db mov ecx, dword ptr [0x109b16a0] */
  ECX = (r32((uint32_t)(0x109b16a0)));
  /* 109861e1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109861e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109861e6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 109861ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109861f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109861f3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 109861f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109861f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109861fc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 109861ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986205 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10986208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098620b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098620e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10986211 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986214 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986217 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1098621a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098621d mov dword ptr [0x109b16a0], ecx */
  w32((uint32_t)(0x109b16a0), (ECX));
L_10986223:;
  /* 10986223 push 4 */
  push32((uint32_t)(0x4u));
  /* 10986225 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986227 mov dl, byte ptr [0x109afa90] */
  DL = (r8((uint32_t)(0x109afa90)));
  /* 1098622d push edx */
  push32((uint32_t)(EDX));
  /* 1098622e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986231 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986234 push eax */
  push32((uint32_t)(EAX));
  /* 10986235 call 0x10989c10 */
  push32(0x1098623au); f_10989c10();
  /* 1098623a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098623d push 4 */
  push32((uint32_t)(0x4u));
  /* 1098623f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986241 mov cl, byte ptr [0x109afa90] */
  CL = (r8((uint32_t)(0x109afa90)));
  /* 10986247 push ecx */
  push32((uint32_t)(ECX));
  /* 10986248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098624b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098624e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10986252 push ecx */
  push32((uint32_t)(ECX));
  /* 10986253 call 0x10989c10 */
  push32(0x10986258u); f_10989c10();
  /* 10986258 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098625b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098625e push edx */
  push32((uint32_t)(EDX));
  /* 1098625f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986261 mov al, byte ptr [0x109afa92] */
  AL = (r8((uint32_t)(0x109afa92)));
  /* 10986266 push eax */
  push32((uint32_t)(EAX));
  /* 10986267 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098626a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098626d push ecx */
  push32((uint32_t)(ECX));
  /* 1098626e call 0x10989c10 */
  push32(0x10986273u); f_10989c10();
  /* 10986273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986279 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1098627c:;
  /* 1098627c pop edi */
  EDI = (pop32());
  /* 1098627d pop esi */
  ESI = (pop32());
  /* 1098627e pop ebx */
  EBX = (pop32());
  /* 1098627f mov esp, ebp */
  ESP = (EBP);
  /* 10986281 pop ebp */
  EBP = (pop32());
  /* 10986282 ret  */
  ESPCHK(0x10985f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006290 @ 0x10986290 (27 bytes, 13 insns) */
void f_10986290(void) {
  FTRACE(0x10986290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986290 push ebp */
  push32((uint32_t)(EBP));
  /* 10986291 mov ebp, esp */
  EBP = (ESP);
  /* 10986293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098629c push eax */
  push32((uint32_t)(EAX));
  /* 1098629d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109862a0 push ecx */
  push32((uint32_t)(ECX));
  /* 109862a1 call 0x109862b0 */
  push32(0x109862a6u); f_109862b0();
  /* 109862a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109862a9 pop ebp */
  EBP = (pop32());
  /* 109862aa ret  */
  ESPCHK(0x10986290u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x109862b0 (96 bytes, 37 insns) */
void f_109862b0(void) {
  FTRACE(0x109862b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109862b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109862b1 mov ebp, esp */
  EBP = (ESP);
  /* 109862b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109862b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109862b9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109862bd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 109862c0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109862c3 push ecx */
  push32((uint32_t)(ECX));
  /* 109862c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109862c7 push edx */
  push32((uint32_t)(EDX));
  /* 109862c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109862cb push eax */
  push32((uint32_t)(EAX));
  /* 109862cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109862cf push ecx */
  push32((uint32_t)(ECX));
  /* 109862d0 call 0x10985ea0 */
  push32(0x109862d5u); f_10985ea0();
  /* 109862d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109862d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109862db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109862df je 0x10986309 */
  if (C.zf) goto L_10986309;
  /* 109862e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109862e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109862e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109862ea add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109862ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109862f0:;
  /* 109862f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109862f3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109862f6 jae 0x10986309 */
  if (!C.cf) goto L_10986309;
  /* 109862f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109862fb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 109862fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986301 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986304 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10986307 jmp 0x109862f0 */
  goto L_109862f0;
L_10986309:;
  /* 10986309 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098630c mov esp, ebp */
  ESP = (EBP);
  /* 1098630e pop ebp */
  EBP = (pop32());
  /* 1098630f ret  */
  ESPCHK(0x109862b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006310 @ 0x10986310 (27 bytes, 13 insns) */
void f_10986310(void) {
  FTRACE(0x10986310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986310 push ebp */
  push32((uint32_t)(EBP));
  /* 10986311 mov ebp, esp */
  EBP = (ESP);
  /* 10986313 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986315 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986317 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986319 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098631c push eax */
  push32((uint32_t)(EAX));
  /* 1098631d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986320 push ecx */
  push32((uint32_t)(ECX));
  /* 10986321 call 0x10986330 */
  push32(0x10986326u); f_10986330();
  /* 10986326 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986329 pop ebp */
  EBP = (pop32());
  /* 1098632a ret  */
  ESPCHK(0x10986310u, _esp0);
  ESP += 4; return;
}

/* FUN_10006330 @ 0x10986330 (64 bytes, 27 insns) */
void f_10986330(void) {
  FTRACE(0x10986330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986330 push ebp */
  push32((uint32_t)(EBP));
  /* 10986331 mov ebp, esp */
  EBP = (ESP);
  /* 10986333 push ecx */
  push32((uint32_t)(ECX));
  /* 10986334 push 9 */
  push32((uint32_t)(0x9u));
  /* 10986336 call 0x109898a0 */
  push32(0x1098633bu); f_109898a0();
  /* 1098633b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098633e push 1 */
  push32((uint32_t)(0x1u));
  /* 10986340 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10986343 push eax */
  push32((uint32_t)(EAX));
  /* 10986344 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10986347 push ecx */
  push32((uint32_t)(ECX));
  /* 10986348 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098634b push edx */
  push32((uint32_t)(EDX));
  /* 1098634c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098634f push eax */
  push32((uint32_t)(EAX));
  /* 10986350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986353 push ecx */
  push32((uint32_t)(ECX));
  /* 10986354 call 0x10986370 */
  push32(0x10986359u); f_10986370();
  /* 10986359 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098635c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098635f push 9 */
  push32((uint32_t)(0x9u));
  /* 10986361 call 0x10989940 */
  push32(0x10986366u); f_10989940();
  /* 10986366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098636c mov esp, ebp */
  ESP = (EBP);
  /* 1098636e pop ebp */
  EBP = (pop32());
  /* 1098636f ret  */
  ESPCHK(0x10986330u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x10986370 (1297 bytes, 431 insns) */
void f_10986370(void) {
  FTRACE(0x10986370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986370 push ebp */
  push32((uint32_t)(EBP));
  /* 10986371 mov ebp, esp */
  EBP = (ESP);
  /* 10986373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986376 push ebx */
  push32((uint32_t)(EBX));
  /* 10986377 push esi */
  push32((uint32_t)(ESI));
  /* 10986378 push edi */
  push32((uint32_t)(EDI));
  /* 10986379 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10986380 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986384 jne 0x109863a3 */
  if (!C.zf) goto L_109863a3;
  /* 10986386 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10986389 push eax */
  push32((uint32_t)(EAX));
  /* 1098638a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098638d push ecx */
  push32((uint32_t)(ECX));
  /* 1098638e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10986391 push edx */
  push32((uint32_t)(EDX));
  /* 10986392 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10986395 push eax */
  push32((uint32_t)(EAX));
  /* 10986396 call 0x10985ea0 */
  push32(0x1098639bu); f_10985ea0();
  /* 1098639b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098639e jmp 0x1098687a */
  goto L_1098687a;
L_109863a3:;
  /* 109863a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109863a7 je 0x109863c6 */
  if (C.zf) goto L_109863c6;
  /* 109863a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109863ad jne 0x109863c6 */
  if (!C.zf) goto L_109863c6;
  /* 109863af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109863b2 push ecx */
  push32((uint32_t)(ECX));
  /* 109863b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109863b6 push edx */
  push32((uint32_t)(EDX));
  /* 109863b7 call 0x10986930 */
  push32(0x109863bcu); f_10986930();
  /* 109863bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109863bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109863c1 jmp 0x1098687a */
  goto L_1098687a;
L_109863c6:;
  /* 109863c6 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 109863cb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109863ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109863d0 je 0x10986402 */
  if (C.zf) goto L_10986402;
L_109863d2:;
  /* 109863d2 call 0x10987040 */
  push32(0x109863d7u); f_10987040();
  /* 109863d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109863d9 jne 0x109863fc */
  if (!C.zf) goto L_109863fc;
  /* 109863db push 0x109ac880 */
  push32((uint32_t)(0x109ac880u));
  /* 109863e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109863e2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 109863e7 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 109863ec push 2 */
  push32((uint32_t)(0x2u));
  /* 109863ee call 0x10984f60 */
  push32(0x109863f3u); f_10984f60();
  /* 109863f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109863f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109863f9 jne 0x109863fc */
  if (!C.zf) goto L_109863fc;
  /* 109863fb int3  */
  x86_unimpl("int3 @ 0x109863fb");
L_109863fc:;
  /* 109863fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109863fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10986400 jne 0x109863d2 */
  if (!C.zf) goto L_109863d2;
L_10986402:;
  /* 10986402 mov edx, dword ptr [0x109afa88] */
  EDX = (r32((uint32_t)(0x109afa88)));
  /* 10986408 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1098640b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098640e cmp eax, dword ptr [0x109afa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109afa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986414 jne 0x10986417 */
  if (!C.zf) goto L_10986417;
  /* 10986416 int3  */
  x86_unimpl("int3 @ 0x10986416");
L_10986417:;
  /* 10986417 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098641a push ecx */
  push32((uint32_t)(ECX));
  /* 1098641b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098641e push edx */
  push32((uint32_t)(EDX));
  /* 1098641f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10986422 push eax */
  push32((uint32_t)(EAX));
  /* 10986423 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10986426 push ecx */
  push32((uint32_t)(ECX));
  /* 10986427 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098642a push edx */
  push32((uint32_t)(EDX));
  /* 1098642b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098642e push eax */
  push32((uint32_t)(EAX));
  /* 1098642f push 2 */
  push32((uint32_t)(0x2u));
  /* 10986431 call dword ptr [0x109afc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x109afc90))), 0x10986437u);
  /* 10986437 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098643a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098643c jne 0x1098649c */
  if (!C.zf) goto L_1098649c;
  /* 1098643e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986442 je 0x1098646f */
  if (C.zf) goto L_1098646f;
L_10986444:;
  /* 10986444 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10986447 push ecx */
  push32((uint32_t)(ECX));
  /* 10986448 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098644b push edx */
  push32((uint32_t)(EDX));
  /* 1098644c push 0x109ac9fc */
  push32((uint32_t)(0x109ac9fcu));
  /* 10986451 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986453 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986455 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986457 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986459 call 0x10984f60 */
  push32(0x1098645eu); f_10984f60();
  /* 1098645e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986461 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986464 jne 0x10986467 */
  if (!C.zf) goto L_10986467;
  /* 10986466 int3  */
  x86_unimpl("int3 @ 0x10986466");
L_10986467:;
  /* 10986467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098646b jne 0x10986444 */
  if (!C.zf) goto L_10986444;
  /* 1098646d jmp 0x10986495 */
  goto L_10986495;
L_1098646f:;
  /* 1098646f push 0x109ac9d8 */
  push32((uint32_t)(0x109ac9d8u));
  /* 10986474 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 10986479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098647b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098647d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098647f push 0 */
  push32((uint32_t)(0x0u));
  /* 10986481 call 0x10984f60 */
  push32(0x10986486u); f_10984f60();
  /* 10986486 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986489 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098648c jne 0x1098648f */
  if (!C.zf) goto L_1098648f;
  /* 1098648e int3  */
  x86_unimpl("int3 @ 0x1098648e");
L_1098648f:;
  /* 1098648f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986491 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10986493 jne 0x1098646f */
  if (!C.zf) goto L_1098646f;
L_10986495:;
  /* 10986495 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986497 jmp 0x1098687a */
  goto L_1098687a;
L_1098649c:;
  /* 1098649c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109864a0 jbe 0x109864ce */
  if ((C.cf||C.zf)) goto L_109864ce;
L_109864a2:;
  /* 109864a2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109864a5 push edx */
  push32((uint32_t)(EDX));
  /* 109864a6 push 0x109ac9a8 */
  push32((uint32_t)(0x109ac9a8u));
  /* 109864ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109864ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109864af push 0 */
  push32((uint32_t)(0x0u));
  /* 109864b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109864b3 call 0x10984f60 */
  push32(0x109864b8u); f_10984f60();
  /* 109864b8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109864bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109864be jne 0x109864c1 */
  if (!C.zf) goto L_109864c1;
  /* 109864c0 int3  */
  x86_unimpl("int3 @ 0x109864c0");
L_109864c1:;
  /* 109864c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109864c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109864c5 jne 0x109864a2 */
  if (!C.zf) goto L_109864a2;
  /* 109864c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109864c9 jmp 0x1098687a */
  goto L_1098687a;
L_109864ce:;
  /* 109864ce cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109864d2 je 0x10986516 */
  if (C.zf) goto L_10986516;
  /* 109864d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109864d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109864dd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109864e0 je 0x10986516 */
  if (C.zf) goto L_10986516;
  /* 109864e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109864e5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109864eb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109864ee je 0x10986516 */
  if (C.zf) goto L_10986516;
L_109864f0:;
  /* 109864f0 push 0x109ac7bc */
  push32((uint32_t)(0x109ac7bcu));
  /* 109864f5 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 109864fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109864fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109864fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10986500 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986502 call 0x10984f60 */
  push32(0x10986507u); f_10984f60();
  /* 10986507 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098650a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098650d jne 0x10986510 */
  if (!C.zf) goto L_10986510;
  /* 1098650f int3  */
  x86_unimpl("int3 @ 0x1098650f");
L_10986510:;
  /* 10986510 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986514 jne 0x109864f0 */
  if (!C.zf) goto L_109864f0;
L_10986516:;
  /* 10986516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986519 push ecx */
  push32((uint32_t)(ECX));
  /* 1098651a call 0x109874a0 */
  push32(0x1098651fu); f_109874a0();
  /* 1098651f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986524 jne 0x10986547 */
  if (!C.zf) goto L_10986547;
  /* 10986526 push 0x109ac984 */
  push32((uint32_t)(0x109ac984u));
  /* 1098652b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098652d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10986532 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986537 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986539 call 0x10984f60 */
  push32(0x1098653eu); f_10984f60();
  /* 1098653e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986541 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986544 jne 0x10986547 */
  if (!C.zf) goto L_10986547;
  /* 10986546 int3  */
  x86_unimpl("int3 @ 0x10986546");
L_10986547:;
  /* 10986547 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986549 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098654b jne 0x10986516 */
  if (!C.zf) goto L_10986516;
  /* 1098654d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986550 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986553 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10986556 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986559 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098655d jne 0x10986566 */
  if (!C.zf) goto L_10986566;
  /* 1098655f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10986566:;
  /* 10986566 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098656a je 0x109865aa */
  if (C.zf) goto L_109865aa;
L_1098656c:;
  /* 1098656c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098656f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986576 jne 0x10986581 */
  if (!C.zf) goto L_10986581;
  /* 10986578 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098657b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098657f je 0x109865a2 */
  if (C.zf) goto L_109865a2;
L_10986581:;
  /* 10986581 push 0x109ac93c */
  push32((uint32_t)(0x109ac93cu));
  /* 10986586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986588 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1098658d push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986592 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986594 call 0x10984f60 */
  push32(0x10986599u); f_10984f60();
  /* 10986599 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098659c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098659f jne 0x109865a2 */
  if (!C.zf) goto L_109865a2;
  /* 109865a1 int3  */
  x86_unimpl("int3 @ 0x109865a1");
L_109865a2:;
  /* 109865a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109865a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109865a6 jne 0x1098656c */
  if (!C.zf) goto L_1098656c;
  /* 109865a8 jmp 0x1098660e */
  goto L_1098660e;
L_109865aa:;
  /* 109865aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109865ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109865b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109865b5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109865b8 jne 0x109865cf */
  if (!C.zf) goto L_109865cf;
  /* 109865ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109865bd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109865c3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109865c6 jne 0x109865cf */
  if (!C.zf) goto L_109865cf;
  /* 109865c8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_109865cf:;
  /* 109865cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109865d2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109865d5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109865da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109865dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109865e3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109865e5 je 0x10986608 */
  if (C.zf) goto L_10986608;
  /* 109865e7 push 0x109ac900 */
  push32((uint32_t)(0x109ac900u));
  /* 109865ec push 0 */
  push32((uint32_t)(0x0u));
  /* 109865ee push 0x272 */
  push32((uint32_t)(0x272u));
  /* 109865f3 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 109865f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109865fa call 0x10984f60 */
  push32(0x109865ffu); f_10984f60();
  /* 109865ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986602 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986605 jne 0x10986608 */
  if (!C.zf) goto L_10986608;
  /* 10986607 int3  */
  x86_unimpl("int3 @ 0x10986607");
L_10986608:;
  /* 10986608 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098660a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098660c jne 0x109865cf */
  if (!C.zf) goto L_109865cf;
L_1098660e:;
  /* 1098660e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986612 je 0x10986639 */
  if (C.zf) goto L_10986639;
  /* 10986614 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10986617 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098661a push eax */
  push32((uint32_t)(EAX));
  /* 1098661b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098661e push ecx */
  push32((uint32_t)(ECX));
  /* 1098661f call 0x10989e20 */
  push32(0x10986624u); f_10989e20();
  /* 10986624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986627 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1098662a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098662e jne 0x10986637 */
  if (!C.zf) goto L_10986637;
  /* 10986630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986632 jmp 0x1098687a */
  goto L_1098687a;
L_10986637:;
  /* 10986637 jmp 0x1098665c */
  goto L_1098665c;
L_10986639:;
  /* 10986639 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098663c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098663f push edx */
  push32((uint32_t)(EDX));
  /* 10986640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986643 push eax */
  push32((uint32_t)(EAX));
  /* 10986644 call 0x10989d70 */
  push32(0x10986649u); f_10989d70();
  /* 10986649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098664c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1098664f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986653 jne 0x1098665c */
  if (!C.zf) goto L_1098665c;
  /* 10986655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986657 jmp 0x1098687a */
  goto L_1098687a;
L_1098665c:;
  /* 1098665c mov ecx, dword ptr [0x109afa88] */
  ECX = (r32((uint32_t)(0x109afa88)));
  /* 10986662 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986665 mov dword ptr [0x109afa88], ecx */
  w32((uint32_t)(0x109afa88), (ECX));
  /* 1098666b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098666f jne 0x109866c7 */
  if (!C.zf) goto L_109866c7;
  /* 10986671 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986674 mov eax, dword ptr [0x109b169c] */
  EAX = (r32((uint32_t)(0x109b169c)));
  /* 10986679 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098667c mov dword ptr [0x109b169c], eax */
  w32((uint32_t)(0x109b169c), (EAX));
  /* 10986681 mov ecx, dword ptr [0x109b169c] */
  ECX = (r32((uint32_t)(0x109b169c)));
  /* 10986687 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098668a mov dword ptr [0x109b169c], ecx */
  w32((uint32_t)(0x109b169c), (ECX));
  /* 10986690 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986693 mov eax, dword ptr [0x109b16a4] */
  EAX = (r32((uint32_t)(0x109b16a4)));
  /* 10986698 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098669b mov dword ptr [0x109b16a4], eax */
  w32((uint32_t)(0x109b16a4), (EAX));
  /* 109866a0 mov ecx, dword ptr [0x109b16a4] */
  ECX = (r32((uint32_t)(0x109b16a4)));
  /* 109866a6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109866a9 mov dword ptr [0x109b16a4], ecx */
  w32((uint32_t)(0x109b16a4), (ECX));
  /* 109866af mov edx, dword ptr [0x109b16a4] */
  EDX = (r32((uint32_t)(0x109b16a4)));
  /* 109866b5 cmp edx, dword ptr [0x109b16a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b16a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109866bb jbe 0x109866c7 */
  if ((C.cf||C.zf)) goto L_109866c7;
  /* 109866bd mov eax, dword ptr [0x109b16a4] */
  EAX = (r32((uint32_t)(0x109b16a4)));
  /* 109866c2 mov dword ptr [0x109b16a8], eax */
  w32((uint32_t)(0x109b16a8), (EAX));
L_109866c7:;
  /* 109866c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109866ca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109866cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109866d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109866d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109866d6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109866d9 jbe 0x109866ff */
  if ((C.cf||C.zf)) goto L_109866ff;
  /* 109866db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109866de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109866e1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109866e4 push edx */
  push32((uint32_t)(EDX));
  /* 109866e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109866e7 mov al, byte ptr [0x109afa92] */
  AL = (r8((uint32_t)(0x109afa92)));
  /* 109866ec push eax */
  push32((uint32_t)(EAX));
  /* 109866ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109866f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109866f3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109866f6 push edx */
  push32((uint32_t)(EDX));
  /* 109866f7 call 0x10989c10 */
  push32(0x109866fcu); f_10989c10();
  /* 109866fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109866ff:;
  /* 109866ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10986701 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986703 mov al, byte ptr [0x109afa90] */
  AL = (r8((uint32_t)(0x109afa90)));
  /* 10986708 push eax */
  push32((uint32_t)(EAX));
  /* 10986709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098670c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098670f push ecx */
  push32((uint32_t)(ECX));
  /* 10986710 call 0x10989c10 */
  push32(0x10986715u); f_10989c10();
  /* 10986715 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986718 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098671c jne 0x10986739 */
  if (!C.zf) goto L_10986739;
  /* 1098671e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986721 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10986724 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10986727 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098672a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098672d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10986730 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986733 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10986736 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10986739:;
  /* 10986739 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098673c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098673f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10986742:;
  /* 10986742 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986746 jne 0x10986777 */
  if (!C.zf) goto L_10986777;
  /* 10986748 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098674c jne 0x10986756 */
  if (!C.zf) goto L_10986756;
  /* 1098674e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986751 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986754 je 0x10986777 */
  if (C.zf) goto L_10986777;
L_10986756:;
  /* 10986756 push 0x109ac8cc */
  push32((uint32_t)(0x109ac8ccu));
  /* 1098675b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098675d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10986762 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986767 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986769 call 0x10984f60 */
  push32(0x1098676eu); f_10984f60();
  /* 1098676e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986771 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986774 jne 0x10986777 */
  if (!C.zf) goto L_10986777;
  /* 10986776 int3  */
  x86_unimpl("int3 @ 0x10986776");
L_10986777:;
  /* 10986777 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986779 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098677b jne 0x10986742 */
  if (!C.zf) goto L_10986742;
  /* 1098677d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986780 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986783 je 0x1098678b */
  if (C.zf) goto L_1098678b;
  /* 10986785 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986789 je 0x10986793 */
  if (C.zf) goto L_10986793;
L_1098678b:;
  /* 1098678b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098678e jmp 0x1098687a */
  goto L_1098687a;
L_10986793:;
  /* 10986793 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986796 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986799 je 0x109867ab */
  if (C.zf) goto L_109867ab;
  /* 1098679b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098679e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109867a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109867a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109867a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 109867a9 jmp 0x109867e7 */
  goto L_109867e7;
L_109867ab:;
  /* 109867ab mov eax, dword ptr [0x109b1698] */
  EAX = (r32((uint32_t)(0x109b1698)));
  /* 109867b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109867b3 je 0x109867d6 */
  if (C.zf) goto L_109867d6;
  /* 109867b5 push 0x109ac8b0 */
  push32((uint32_t)(0x109ac8b0u));
  /* 109867ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109867bc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 109867c1 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 109867c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109867c8 call 0x10984f60 */
  push32(0x109867cdu); f_10984f60();
  /* 109867cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109867d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109867d3 jne 0x109867d6 */
  if (!C.zf) goto L_109867d6;
  /* 109867d5 int3  */
  x86_unimpl("int3 @ 0x109867d5");
L_109867d6:;
  /* 109867d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109867d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109867da jne 0x109867ab */
  if (!C.zf) goto L_109867ab;
  /* 109867dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109867df mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109867e2 mov dword ptr [0x109b1698], eax */
  w32((uint32_t)(0x109b1698), (EAX));
L_109867e7:;
  /* 109867e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109867ea cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109867ee je 0x109867ff */
  if (C.zf) goto L_109867ff;
  /* 109867f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109867f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109867f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109867f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109867fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109867fd jmp 0x1098683a */
  goto L_1098683a;
L_109867ff:;
  /* 109867ff mov eax, dword ptr [0x109b16a0] */
  EAX = (r32((uint32_t)(0x109b16a0)));
  /* 10986804 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986807 je 0x1098682a */
  if (C.zf) goto L_1098682a;
  /* 10986809 push 0x109ac894 */
  push32((uint32_t)(0x109ac894u));
  /* 1098680e push 0 */
  push32((uint32_t)(0x0u));
  /* 10986810 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10986815 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 1098681a push 2 */
  push32((uint32_t)(0x2u));
  /* 1098681c call 0x10984f60 */
  push32(0x10986821u); f_10984f60();
  /* 10986821 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986824 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986827 jne 0x1098682a */
  if (!C.zf) goto L_1098682a;
  /* 10986829 int3  */
  x86_unimpl("int3 @ 0x10986829");
L_1098682a:;
  /* 1098682a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098682c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098682e jne 0x109867ff */
  if (!C.zf) goto L_109867ff;
  /* 10986830 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986833 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10986835 mov dword ptr [0x109b16a0], eax */
  w32((uint32_t)(0x109b16a0), (EAX));
L_1098683a:;
  /* 1098683a cmp dword ptr [0x109b16a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b16a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986841 je 0x10986851 */
  if (C.zf) goto L_10986851;
  /* 10986843 mov ecx, dword ptr [0x109b16a0] */
  ECX = (r32((uint32_t)(0x109b16a0)));
  /* 10986849 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098684c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1098684f jmp 0x10986859 */
  goto L_10986859;
L_10986851:;
  /* 10986851 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986854 mov dword ptr [0x109b1698], eax */
  w32((uint32_t)(0x109b1698), (EAX));
L_10986859:;
  /* 10986859 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098685c mov edx, dword ptr [0x109b16a0] */
  EDX = (r32((uint32_t)(0x109b16a0)));
  /* 10986862 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10986864 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986867 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1098686e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10986871 mov dword ptr [0x109b16a0], ecx */
  w32((uint32_t)(0x109b16a0), (ECX));
  /* 10986877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1098687a:;
  /* 1098687a pop edi */
  EDI = (pop32());
  /* 1098687b pop esi */
  ESI = (pop32());
  /* 1098687c pop ebx */
  EBX = (pop32());
  /* 1098687d mov esp, ebp */
  ESP = (EBP);
  /* 1098687f pop ebp */
  EBP = (pop32());
  /* 10986880 ret  */
  ESPCHK(0x10986370u, _esp0);
  ESP += 4; return;
}

/* FUN_10006890 @ 0x10986890 (27 bytes, 13 insns) */
void f_10986890(void) {
  FTRACE(0x10986890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986890 push ebp */
  push32((uint32_t)(EBP));
  /* 10986891 mov ebp, esp */
  EBP = (ESP);
  /* 10986893 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986895 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986897 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986899 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098689c push eax */
  push32((uint32_t)(EAX));
  /* 1098689d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109868a0 push ecx */
  push32((uint32_t)(ECX));
  /* 109868a1 call 0x109868b0 */
  push32(0x109868a6u); f_109868b0();
  /* 109868a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109868a9 pop ebp */
  EBP = (pop32());
  /* 109868aa ret  */
  ESPCHK(0x10986890u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x109868b0 (64 bytes, 27 insns) */
void f_109868b0(void) {
  FTRACE(0x109868b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109868b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109868b1 mov ebp, esp */
  EBP = (ESP);
  /* 109868b3 push ecx */
  push32((uint32_t)(ECX));
  /* 109868b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 109868b6 call 0x109898a0 */
  push32(0x109868bbu); f_109898a0();
  /* 109868bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109868be push 0 */
  push32((uint32_t)(0x0u));
  /* 109868c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109868c3 push eax */
  push32((uint32_t)(EAX));
  /* 109868c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 109868c7 push ecx */
  push32((uint32_t)(ECX));
  /* 109868c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109868cb push edx */
  push32((uint32_t)(EDX));
  /* 109868cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109868cf push eax */
  push32((uint32_t)(EAX));
  /* 109868d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109868d3 push ecx */
  push32((uint32_t)(ECX));
  /* 109868d4 call 0x10986370 */
  push32(0x109868d9u); f_10986370();
  /* 109868d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109868dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109868df push 9 */
  push32((uint32_t)(0x9u));
  /* 109868e1 call 0x10989940 */
  push32(0x109868e6u); f_10989940();
  /* 109868e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109868e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109868ec mov esp, ebp */
  ESP = (EBP);
  /* 109868ee pop ebp */
  EBP = (pop32());
  /* 109868ef ret  */
  ESPCHK(0x109868b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x109868f0 (19 bytes, 9 insns) */
void f_109868f0(void) {
  FTRACE(0x109868f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109868f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109868f1 mov ebp, esp */
  EBP = (ESP);
  /* 109868f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109868f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109868f8 push eax */
  push32((uint32_t)(EAX));
  /* 109868f9 call 0x10986930 */
  push32(0x109868feu); f_10986930();
  /* 109868fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986901 pop ebp */
  EBP = (pop32());
  /* 10986902 ret  */
  ESPCHK(0x109868f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006910 @ 0x10986910 (19 bytes, 9 insns) */
void f_10986910(void) {
  FTRACE(0x10986910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986910 push ebp */
  push32((uint32_t)(EBP));
  /* 10986911 mov ebp, esp */
  EBP = (ESP);
  /* 10986913 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986918 push eax */
  push32((uint32_t)(EAX));
  /* 10986919 call 0x10986960 */
  push32(0x1098691eu); f_10986960();
  /* 1098691e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986921 pop ebp */
  EBP = (pop32());
  /* 10986922 ret  */
  ESPCHK(0x10986910u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x10986930 (41 bytes, 16 insns) */
void f_10986930(void) {
  FTRACE(0x10986930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986930 push ebp */
  push32((uint32_t)(EBP));
  /* 10986931 mov ebp, esp */
  EBP = (ESP);
  /* 10986933 push 9 */
  push32((uint32_t)(0x9u));
  /* 10986935 call 0x109898a0 */
  push32(0x1098693au); f_109898a0();
  /* 1098693a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098693d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10986940 push eax */
  push32((uint32_t)(EAX));
  /* 10986941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986944 push ecx */
  push32((uint32_t)(ECX));
  /* 10986945 call 0x10986960 */
  push32(0x1098694au); f_10986960();
  /* 1098694a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098694d push 9 */
  push32((uint32_t)(0x9u));
  /* 1098694f call 0x10989940 */
  push32(0x10986954u); f_10989940();
  /* 10986954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986957 pop ebp */
  EBP = (pop32());
  /* 10986958 ret  */
  ESPCHK(0x10986930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006960 @ 0x10986960 (1004 bytes, 342 insns) */
void f_10986960(void) {
  FTRACE(0x10986960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986960 push ebp */
  push32((uint32_t)(EBP));
  /* 10986961 mov ebp, esp */
  EBP = (ESP);
  /* 10986963 push ecx */
  push32((uint32_t)(ECX));
  /* 10986964 push ebx */
  push32((uint32_t)(EBX));
  /* 10986965 push esi */
  push32((uint32_t)(ESI));
  /* 10986966 push edi */
  push32((uint32_t)(EDI));
  /* 10986967 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 1098696c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1098696f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986971 je 0x109869a3 */
  if (C.zf) goto L_109869a3;
L_10986973:;
  /* 10986973 call 0x10987040 */
  push32(0x10986978u); f_10987040();
  /* 10986978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098697a jne 0x1098699d */
  if (!C.zf) goto L_1098699d;
  /* 1098697c push 0x109ac880 */
  push32((uint32_t)(0x109ac880u));
  /* 10986981 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986983 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10986988 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 1098698d push 2 */
  push32((uint32_t)(0x2u));
  /* 1098698f call 0x10984f60 */
  push32(0x10986994u); f_10984f60();
  /* 10986994 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986997 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098699a jne 0x1098699d */
  if (!C.zf) goto L_1098699d;
  /* 1098699c int3  */
  x86_unimpl("int3 @ 0x1098699c");
L_1098699d:;
  /* 1098699d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098699f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109869a1 jne 0x10986973 */
  if (!C.zf) goto L_10986973;
L_109869a3:;
  /* 109869a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109869a7 jne 0x109869ae */
  if (!C.zf) goto L_109869ae;
  /* 109869a9 jmp 0x10986d45 */
  goto L_10986d45;
L_109869ae:;
  /* 109869ae push 0 */
  push32((uint32_t)(0x0u));
  /* 109869b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109869b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109869b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109869b7 push edx */
  push32((uint32_t)(EDX));
  /* 109869b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109869ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109869bd push eax */
  push32((uint32_t)(EAX));
  /* 109869be push 3 */
  push32((uint32_t)(0x3u));
  /* 109869c0 call dword ptr [0x109afc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x109afc90))), 0x109869c6u);
  /* 109869c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109869c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109869cb jne 0x109869f8 */
  if (!C.zf) goto L_109869f8;
L_109869cd:;
  /* 109869cd push 0x109acb44 */
  push32((uint32_t)(0x109acb44u));
  /* 109869d2 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 109869d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109869d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109869db push 0 */
  push32((uint32_t)(0x0u));
  /* 109869dd push 0 */
  push32((uint32_t)(0x0u));
  /* 109869df call 0x10984f60 */
  push32(0x109869e4u); f_10984f60();
  /* 109869e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109869e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109869ea jne 0x109869ed */
  if (!C.zf) goto L_109869ed;
  /* 109869ec int3  */
  x86_unimpl("int3 @ 0x109869ec");
L_109869ed:;
  /* 109869ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109869ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109869f1 jne 0x109869cd */
  if (!C.zf) goto L_109869cd;
  /* 109869f3 jmp 0x10986d45 */
  goto L_10986d45;
L_109869f8:;
  /* 109869f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109869fb push edx */
  push32((uint32_t)(EDX));
  /* 109869fc call 0x109874a0 */
  push32(0x10986a01u); f_109874a0();
  /* 10986a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986a04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986a06 jne 0x10986a29 */
  if (!C.zf) goto L_10986a29;
  /* 10986a08 push 0x109ac984 */
  push32((uint32_t)(0x109ac984u));
  /* 10986a0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10986a0f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10986a14 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986a19 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986a1b call 0x10984f60 */
  push32(0x10986a20u); f_10984f60();
  /* 10986a20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986a23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986a26 jne 0x10986a29 */
  if (!C.zf) goto L_10986a29;
  /* 10986a28 int3  */
  x86_unimpl("int3 @ 0x10986a28");
L_10986a29:;
  /* 10986a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986a2d jne 0x109869f8 */
  if (!C.zf) goto L_109869f8;
  /* 10986a2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986a32 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986a35 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10986a38:;
  /* 10986a38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986a3b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986a3e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10986a43 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986a46 je 0x10986a8b */
  if (C.zf) goto L_10986a8b;
  /* 10986a48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986a4b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986a4f je 0x10986a8b */
  if (C.zf) goto L_10986a8b;
  /* 10986a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986a54 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986a57 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10986a5c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986a5f je 0x10986a8b */
  if (C.zf) goto L_10986a8b;
  /* 10986a61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986a64 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986a68 je 0x10986a8b */
  if (C.zf) goto L_10986a8b;
  /* 10986a6a push 0x109acb1c */
  push32((uint32_t)(0x109acb1cu));
  /* 10986a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10986a71 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10986a76 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986a7b push 2 */
  push32((uint32_t)(0x2u));
  /* 10986a7d call 0x10984f60 */
  push32(0x10986a82u); f_10984f60();
  /* 10986a82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986a85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986a88 jne 0x10986a8b */
  if (!C.zf) goto L_10986a8b;
  /* 10986a8a int3  */
  x86_unimpl("int3 @ 0x10986a8a");
L_10986a8b:;
  /* 10986a8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986a8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10986a8f jne 0x10986a38 */
  if (!C.zf) goto L_10986a38;
  /* 10986a91 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 10986a96 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10986a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986a9b jne 0x10986b66 */
  if (!C.zf) goto L_10986b66;
  /* 10986aa1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10986aa3 mov cl, byte ptr [0x109afa90] */
  CL = (r8((uint32_t)(0x109afa90)));
  /* 10986aa9 push ecx */
  push32((uint32_t)(ECX));
  /* 10986aaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986aad add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986ab0 push edx */
  push32((uint32_t)(EDX));
  /* 10986ab1 call 0x10986fb0 */
  push32(0x10986ab6u); f_10986fb0();
  /* 10986ab6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986abb jne 0x10986b00 */
  if (!C.zf) goto L_10986b00;
L_10986abd:;
  /* 10986abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986ac0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986ac3 push eax */
  push32((uint32_t)(EAX));
  /* 10986ac4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986ac7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10986aca push edx */
  push32((uint32_t)(EDX));
  /* 10986acb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986ace mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10986ad1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10986ad7 mov edx, dword ptr [ecx*4 + 0x109afa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa94)));
  /* 10986ade push edx */
  push32((uint32_t)(EDX));
  /* 10986adf push 0x109acaf0 */
  push32((uint32_t)(0x109acaf0u));
  /* 10986ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986aea push 1 */
  push32((uint32_t)(0x1u));
  /* 10986aec call 0x10984f60 */
  push32(0x10986af1u); f_10984f60();
  /* 10986af1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986af4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986af7 jne 0x10986afa */
  if (!C.zf) goto L_10986afa;
  /* 10986af9 int3  */
  x86_unimpl("int3 @ 0x10986af9");
L_10986afa:;
  /* 10986afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986afe jne 0x10986abd */
  if (!C.zf) goto L_10986abd;
L_10986b00:;
  /* 10986b00 push 4 */
  push32((uint32_t)(0x4u));
  /* 10986b02 mov cl, byte ptr [0x109afa90] */
  CL = (r8((uint32_t)(0x109afa90)));
  /* 10986b08 push ecx */
  push32((uint32_t)(ECX));
  /* 10986b09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b0c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10986b0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b12 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10986b16 push edx */
  push32((uint32_t)(EDX));
  /* 10986b17 call 0x10986fb0 */
  push32(0x10986b1cu); f_10986fb0();
  /* 10986b1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986b21 jne 0x10986b66 */
  if (!C.zf) goto L_10986b66;
L_10986b23:;
  /* 10986b23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b26 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986b29 push eax */
  push32((uint32_t)(EAX));
  /* 10986b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b2d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10986b30 push edx */
  push32((uint32_t)(EDX));
  /* 10986b31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b34 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10986b37 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10986b3d mov edx, dword ptr [ecx*4 + 0x109afa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa94)));
  /* 10986b44 push edx */
  push32((uint32_t)(EDX));
  /* 10986b45 push 0x109acac4 */
  push32((uint32_t)(0x109acac4u));
  /* 10986b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10986b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10986b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10986b50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986b52 call 0x10984f60 */
  push32(0x10986b57u); f_10984f60();
  /* 10986b57 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986b5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986b5d jne 0x10986b60 */
  if (!C.zf) goto L_10986b60;
  /* 10986b5f int3  */
  x86_unimpl("int3 @ 0x10986b5f");
L_10986b60:;
  /* 10986b60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986b64 jne 0x10986b23 */
  if (!C.zf) goto L_10986b23;
L_10986b66:;
  /* 10986b66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986b6d jne 0x10986bdb */
  if (!C.zf) goto L_10986bdb;
L_10986b6f:;
  /* 10986b6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b72 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986b79 jne 0x10986b84 */
  if (!C.zf) goto L_10986b84;
  /* 10986b7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986b7e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986b82 je 0x10986ba5 */
  if (C.zf) goto L_10986ba5;
L_10986b84:;
  /* 10986b84 push 0x109aca84 */
  push32((uint32_t)(0x109aca84u));
  /* 10986b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986b8b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10986b90 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986b97 call 0x10984f60 */
  push32(0x10986b9cu); f_10984f60();
  /* 10986b9c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986b9f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986ba2 jne 0x10986ba5 */
  if (!C.zf) goto L_10986ba5;
  /* 10986ba4 int3  */
  x86_unimpl("int3 @ 0x10986ba4");
L_10986ba5:;
  /* 10986ba5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986ba7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10986ba9 jne 0x10986b6f */
  if (!C.zf) goto L_10986b6f;
  /* 10986bab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986bae mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10986bb1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10986bb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986bb7 mov cl, byte ptr [0x109afa91] */
  CL = (r8((uint32_t)(0x109afa91)));
  /* 10986bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10986bbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986bc1 push edx */
  push32((uint32_t)(EDX));
  /* 10986bc2 call 0x10989c10 */
  push32(0x10986bc7u); f_10989c10();
  /* 10986bc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986bca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986bcd push eax */
  push32((uint32_t)(EAX));
  /* 10986bce call 0x1098a010 */
  push32(0x10986bd3u); f_1098a010();
  /* 10986bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986bd6 jmp 0x10986d45 */
  goto L_10986d45;
L_10986bdb:;
  /* 10986bdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986bde cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986be2 jne 0x10986bf1 */
  if (!C.zf) goto L_10986bf1;
  /* 10986be4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986be8 jne 0x10986bf1 */
  if (!C.zf) goto L_10986bf1;
  /* 10986bea mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10986bf1:;
  /* 10986bf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986bf4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986bf7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986bfa je 0x10986c1d */
  if (C.zf) goto L_10986c1d;
  /* 10986bfc push 0x109aca64 */
  push32((uint32_t)(0x109aca64u));
  /* 10986c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986c03 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10986c08 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10986c0f call 0x10984f60 */
  push32(0x10986c14u); f_10984f60();
  /* 10986c14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986c17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986c1a jne 0x10986c1d */
  if (!C.zf) goto L_10986c1d;
  /* 10986c1c int3  */
  x86_unimpl("int3 @ 0x10986c1c");
L_10986c1d:;
  /* 10986c1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986c1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10986c21 jne 0x10986bf1 */
  if (!C.zf) goto L_10986bf1;
  /* 10986c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986c26 mov eax, dword ptr [0x109b16a4] */
  EAX = (r32((uint32_t)(0x109b16a4)));
  /* 10986c2b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986c2e mov dword ptr [0x109b16a4], eax */
  w32((uint32_t)(0x109b16a4), (EAX));
  /* 10986c33 mov ecx, dword ptr [0x109afa84] */
  ECX = (r32((uint32_t)(0x109afa84)));
  /* 10986c39 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10986c3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10986c3e jne 0x10986d1c */
  if (!C.zf) goto L_10986d1c;
  /* 10986c44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986c47 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986c4a je 0x10986c5c */
  if (C.zf) goto L_10986c5c;
  /* 10986c4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986c4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10986c51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986c54 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10986c57 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10986c5a jmp 0x10986c9a */
  goto L_10986c9a;
L_10986c5c:;
  /* 10986c5c mov ecx, dword ptr [0x109b1698] */
  ECX = (r32((uint32_t)(0x109b1698)));
  /* 10986c62 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986c65 je 0x10986c88 */
  if (C.zf) goto L_10986c88;
  /* 10986c67 push 0x109aca4c */
  push32((uint32_t)(0x109aca4cu));
  /* 10986c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10986c6e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10986c73 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986c78 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986c7a call 0x10984f60 */
  push32(0x10986c7fu); f_10984f60();
  /* 10986c7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986c82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986c85 jne 0x10986c88 */
  if (!C.zf) goto L_10986c88;
  /* 10986c87 int3  */
  x86_unimpl("int3 @ 0x10986c87");
L_10986c88:;
  /* 10986c88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986c8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10986c8c jne 0x10986c5c */
  if (!C.zf) goto L_10986c5c;
  /* 10986c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986c91 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10986c94 mov dword ptr [0x109b1698], ecx */
  w32((uint32_t)(0x109b1698), (ECX));
L_10986c9a:;
  /* 10986c9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986c9d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986ca1 je 0x10986cb2 */
  if (C.zf) goto L_10986cb2;
  /* 10986ca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986ca6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10986ca9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986cac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10986cae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10986cb0 jmp 0x10986cef */
  goto L_10986cef;
L_10986cb2:;
  /* 10986cb2 mov ecx, dword ptr [0x109b16a0] */
  ECX = (r32((uint32_t)(0x109b16a0)));
  /* 10986cb8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986cbb je 0x10986cde */
  if (C.zf) goto L_10986cde;
  /* 10986cbd push 0x109aca34 */
  push32((uint32_t)(0x109aca34u));
  /* 10986cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986cc4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10986cc9 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986cce push 2 */
  push32((uint32_t)(0x2u));
  /* 10986cd0 call 0x10984f60 */
  push32(0x10986cd5u); f_10984f60();
  /* 10986cd5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986cd8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986cdb jne 0x10986cde */
  if (!C.zf) goto L_10986cde;
  /* 10986cdd int3  */
  x86_unimpl("int3 @ 0x10986cdd");
L_10986cde:;
  /* 10986cde xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986ce0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10986ce2 jne 0x10986cb2 */
  if (!C.zf) goto L_10986cb2;
  /* 10986ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986ce7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10986ce9 mov dword ptr [0x109b16a0], ecx */
  w32((uint32_t)(0x109b16a0), (ECX));
L_10986cef:;
  /* 10986cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986cf2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10986cf5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986cf8 push eax */
  push32((uint32_t)(EAX));
  /* 10986cf9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986cfb mov cl, byte ptr [0x109afa91] */
  CL = (r8((uint32_t)(0x109afa91)));
  /* 10986d01 push ecx */
  push32((uint32_t)(ECX));
  /* 10986d02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986d05 push edx */
  push32((uint32_t)(EDX));
  /* 10986d06 call 0x10989c10 */
  push32(0x10986d0bu); f_10989c10();
  /* 10986d0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986d0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986d11 push eax */
  push32((uint32_t)(EAX));
  /* 10986d12 call 0x1098a010 */
  push32(0x10986d17u); f_1098a010();
  /* 10986d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986d1a jmp 0x10986d45 */
  goto L_10986d45;
L_10986d1c:;
  /* 10986d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986d1f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10986d26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986d29 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10986d2c push eax */
  push32((uint32_t)(EAX));
  /* 10986d2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986d2f mov cl, byte ptr [0x109afa91] */
  CL = (r8((uint32_t)(0x109afa91)));
  /* 10986d35 push ecx */
  push32((uint32_t)(ECX));
  /* 10986d36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986d39 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986d3c push edx */
  push32((uint32_t)(EDX));
  /* 10986d3d call 0x10989c10 */
  push32(0x10986d42u); f_10989c10();
  /* 10986d42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10986d45:;
  /* 10986d45 pop edi */
  EDI = (pop32());
  /* 10986d46 pop esi */
  ESI = (pop32());
  /* 10986d47 pop ebx */
  EBX = (pop32());
  /* 10986d48 mov esp, ebp */
  ESP = (EBP);
  /* 10986d4a pop ebp */
  EBP = (pop32());
  /* 10986d4b ret  */
  ESPCHK(0x10986960u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d50 @ 0x10986d50 (19 bytes, 9 insns) */
void f_10986d50(void) {
  FTRACE(0x10986d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10986d51 mov ebp, esp */
  EBP = (ESP);
  /* 10986d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10986d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986d58 push eax */
  push32((uint32_t)(EAX));
  /* 10986d59 call 0x10986d70 */
  push32(0x10986d5eu); f_10986d70();
  /* 10986d5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986d61 pop ebp */
  EBP = (pop32());
  /* 10986d62 ret  */
  ESPCHK(0x10986d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x10986d70 (342 bytes, 119 insns) */
void f_10986d70(void) {
  FTRACE(0x10986d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10986d71 mov ebp, esp */
  EBP = (ESP);
  /* 10986d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986d76 push ebx */
  push32((uint32_t)(EBX));
  /* 10986d77 push esi */
  push32((uint32_t)(ESI));
  /* 10986d78 push edi */
  push32((uint32_t)(EDI));
  /* 10986d79 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 10986d7e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10986d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986d83 je 0x10986db5 */
  if (C.zf) goto L_10986db5;
L_10986d85:;
  /* 10986d85 call 0x10987040 */
  push32(0x10986d8au); f_10987040();
  /* 10986d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986d8c jne 0x10986daf */
  if (!C.zf) goto L_10986daf;
  /* 10986d8e push 0x109ac880 */
  push32((uint32_t)(0x109ac880u));
  /* 10986d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986d95 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10986d9a push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10986da1 call 0x10984f60 */
  push32(0x10986da6u); f_10984f60();
  /* 10986da6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986da9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986dac jne 0x10986daf */
  if (!C.zf) goto L_10986daf;
  /* 10986dae int3  */
  x86_unimpl("int3 @ 0x10986dae");
L_10986daf:;
  /* 10986daf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986db1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10986db3 jne 0x10986d85 */
  if (!C.zf) goto L_10986d85;
L_10986db5:;
  /* 10986db5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10986db7 call 0x109898a0 */
  push32(0x10986dbcu); f_109898a0();
  /* 10986dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10986dbf:;
  /* 10986dbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986dc2 push edx */
  push32((uint32_t)(EDX));
  /* 10986dc3 call 0x109874a0 */
  push32(0x10986dc8u); f_109874a0();
  /* 10986dc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986dcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986dcd jne 0x10986df0 */
  if (!C.zf) goto L_10986df0;
  /* 10986dcf push 0x109ac984 */
  push32((uint32_t)(0x109ac984u));
  /* 10986dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986dd6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10986ddb push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986de0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986de2 call 0x10984f60 */
  push32(0x10986de7u); f_10984f60();
  /* 10986de7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986dea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986ded jne 0x10986df0 */
  if (!C.zf) goto L_10986df0;
  /* 10986def int3  */
  x86_unimpl("int3 @ 0x10986def");
L_10986df0:;
  /* 10986df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986df4 jne 0x10986dbf */
  if (!C.zf) goto L_10986dbf;
  /* 10986df6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986df9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986dfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10986dff:;
  /* 10986dff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986e02 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986e05 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10986e0a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e0d je 0x10986e52 */
  if (C.zf) goto L_10986e52;
  /* 10986e0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986e12 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e16 je 0x10986e52 */
  if (C.zf) goto L_10986e52;
  /* 10986e18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986e1b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986e1e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10986e23 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e26 je 0x10986e52 */
  if (C.zf) goto L_10986e52;
  /* 10986e28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986e2b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e2f je 0x10986e52 */
  if (C.zf) goto L_10986e52;
  /* 10986e31 push 0x109acb1c */
  push32((uint32_t)(0x109acb1cu));
  /* 10986e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986e38 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10986e3d push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986e42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986e44 call 0x10984f60 */
  push32(0x10986e49u); f_10984f60();
  /* 10986e49 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986e4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e4f jne 0x10986e52 */
  if (!C.zf) goto L_10986e52;
  /* 10986e51 int3  */
  x86_unimpl("int3 @ 0x10986e51");
L_10986e52:;
  /* 10986e52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986e54 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10986e56 jne 0x10986dff */
  if (!C.zf) goto L_10986dff;
  /* 10986e58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986e5b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e5f jne 0x10986e6e */
  if (!C.zf) goto L_10986e6e;
  /* 10986e61 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e65 jne 0x10986e6e */
  if (!C.zf) goto L_10986e6e;
  /* 10986e67 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10986e6e:;
  /* 10986e6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986e71 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e75 je 0x10986ea9 */
  if (C.zf) goto L_10986ea9;
L_10986e77:;
  /* 10986e77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986e7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986e7d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986e80 je 0x10986ea3 */
  if (C.zf) goto L_10986ea3;
  /* 10986e82 push 0x109aca64 */
  push32((uint32_t)(0x109aca64u));
  /* 10986e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986e89 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10986e8e push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986e93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10986e95 call 0x10984f60 */
  push32(0x10986e9au); f_10984f60();
  /* 10986e9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986e9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986ea0 jne 0x10986ea3 */
  if (!C.zf) goto L_10986ea3;
  /* 10986ea2 int3  */
  x86_unimpl("int3 @ 0x10986ea2");
L_10986ea3:;
  /* 10986ea3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10986ea5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10986ea7 jne 0x10986e77 */
  if (!C.zf) goto L_10986e77;
L_10986ea9:;
  /* 10986ea9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10986eac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10986eaf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10986eb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10986eb4 call 0x10989940 */
  push32(0x10986eb9u); f_10989940();
  /* 10986eb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986ebc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986ebf pop edi */
  EDI = (pop32());
  /* 10986ec0 pop esi */
  ESI = (pop32());
  /* 10986ec1 pop ebx */
  EBX = (pop32());
  /* 10986ec2 mov esp, ebp */
  ESP = (EBP);
  /* 10986ec4 pop ebp */
  EBP = (pop32());
  /* 10986ec5 ret  */
  ESPCHK(0x10986d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x10986ed0 (28 bytes, 11 insns) */
void f_10986ed0(void) {
  FTRACE(0x10986ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10986ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10986ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10986ed4 mov eax, dword ptr [0x109afa8c] */
  EAX = (r32((uint32_t)(0x109afa8c)));
  /* 10986ed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10986edc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986edf mov dword ptr [0x109afa8c], ecx */
  w32((uint32_t)(0x109afa8c), (ECX));
  /* 10986ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986ee8 mov esp, ebp */
  ESP = (EBP);
  /* 10986eea pop ebp */
  EBP = (pop32());
  /* 10986eeb ret  */
  ESPCHK(0x10986ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x10986ef0 (157 bytes, 59 insns) */
void f_10986ef0(void) {
  FTRACE(0x10986ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10986ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10986ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10986ef4 push ebx */
  push32((uint32_t)(EBX));
  /* 10986ef5 push esi */
  push32((uint32_t)(ESI));
  /* 10986ef6 push edi */
  push32((uint32_t)(EDI));
  /* 10986ef7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10986ef9 call 0x109898a0 */
  push32(0x10986efeu); f_109898a0();
  /* 10986efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986f01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986f04 push eax */
  push32((uint32_t)(EAX));
  /* 10986f05 call 0x109874a0 */
  push32(0x10986f0au); f_109874a0();
  /* 10986f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986f0f je 0x10986f7c */
  if (C.zf) goto L_10986f7c;
  /* 10986f11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986f14 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986f17 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10986f1a:;
  /* 10986f1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986f1d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986f20 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10986f25 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986f28 je 0x10986f6d */
  if (C.zf) goto L_10986f6d;
  /* 10986f2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986f2d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986f31 je 0x10986f6d */
  if (C.zf) goto L_10986f6d;
  /* 10986f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986f36 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10986f39 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10986f3e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986f41 je 0x10986f6d */
  if (C.zf) goto L_10986f6d;
  /* 10986f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986f46 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986f4a je 0x10986f6d */
  if (C.zf) goto L_10986f6d;
  /* 10986f4c push 0x109acb1c */
  push32((uint32_t)(0x109acb1cu));
  /* 10986f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10986f53 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10986f58 push 0x109ac874 */
  push32((uint32_t)(0x109ac874u));
  /* 10986f5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10986f5f call 0x10984f60 */
  push32(0x10986f64u); f_10984f60();
  /* 10986f64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986f67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986f6a jne 0x10986f6d */
  if (!C.zf) goto L_10986f6d;
  /* 10986f6c int3  */
  x86_unimpl("int3 @ 0x10986f6c");
L_10986f6d:;
  /* 10986f6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10986f71 jne 0x10986f1a */
  if (!C.zf) goto L_10986f1a;
  /* 10986f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986f76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10986f79 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10986f7c:;
  /* 10986f7c push 9 */
  push32((uint32_t)(0x9u));
  /* 10986f7e call 0x10989940 */
  push32(0x10986f83u); f_10989940();
  /* 10986f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10986f86 pop edi */
  EDI = (pop32());
  /* 10986f87 pop esi */
  ESI = (pop32());
  /* 10986f88 pop ebx */
  EBX = (pop32());
  /* 10986f89 mov esp, ebp */
  ESP = (EBP);
  /* 10986f8b pop ebp */
  EBP = (pop32());
  /* 10986f8c ret  */
  ESPCHK(0x10986ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x10986f90 (28 bytes, 11 insns) */
void f_10986f90(void) {
  FTRACE(0x10986f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10986f91 mov ebp, esp */
  EBP = (ESP);
  /* 10986f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10986f94 mov eax, dword ptr [0x109afc90] */
  EAX = (r32((uint32_t)(0x109afc90)));
  /* 10986f99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10986f9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986f9f mov dword ptr [0x109afc90], ecx */
  w32((uint32_t)(0x109afc90), (ECX));
  /* 10986fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10986fa8 mov esp, ebp */
  ESP = (EBP);
  /* 10986faa pop ebp */
  EBP = (pop32());
  /* 10986fab ret  */
  ESPCHK(0x10986f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb0 @ 0x10986fb0 (136 bytes, 55 insns) */
void f_10986fb0(void) {
  FTRACE(0x10986fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10986fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10986fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10986fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10986fb4 push ebx */
  push32((uint32_t)(EBX));
  /* 10986fb5 push esi */
  push32((uint32_t)(ESI));
  /* 10986fb6 push edi */
  push32((uint32_t)(EDI));
  /* 10986fb7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10986fbe:;
  /* 10986fbe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10986fc1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10986fc4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10986fc7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10986fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10986fcc je 0x1098702e */
  if (C.zf) goto L_1098702e;
  /* 10986fce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986fd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10986fd3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10986fd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10986fd8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10986fde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986fe1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10986fe4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10986fe7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10986fe9 je 0x1098702c */
  if (C.zf) goto L_1098702c;
L_10986feb:;
  /* 10986feb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10986fee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10986ff3 push eax */
  push32((uint32_t)(EAX));
  /* 10986ff4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10986ff7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10986ff9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10986ffc push edx */
  push32((uint32_t)(EDX));
  /* 10986ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987000 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987003 push eax */
  push32((uint32_t)(EAX));
  /* 10987004 push 0x109acb60 */
  push32((uint32_t)(0x109acb60u));
  /* 10987009 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098700b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098700d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098700f push 0 */
  push32((uint32_t)(0x0u));
  /* 10987011 call 0x10984f60 */
  push32(0x10987016u); f_10984f60();
  /* 10987016 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987019 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098701c jne 0x1098701f */
  if (!C.zf) goto L_1098701f;
  /* 1098701e int3  */
  x86_unimpl("int3 @ 0x1098701e");
L_1098701f:;
  /* 1098701f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10987021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10987023 jne 0x10986feb */
  if (!C.zf) goto L_10986feb;
  /* 10987025 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1098702c:;
  /* 1098702c jmp 0x10986fbe */
  goto L_10986fbe;
L_1098702e:;
  /* 1098702e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987031 pop edi */
  EDI = (pop32());
  /* 10987032 pop esi */
  ESI = (pop32());
  /* 10987033 pop ebx */
  EBX = (pop32());
  /* 10987034 mov esp, ebp */
  ESP = (EBP);
  /* 10987036 pop ebp */
  EBP = (pop32());
  /* 10987037 ret  */
  ESPCHK(0x10986fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007040 @ 0x10987040 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10987040(void) {
  FTRACE(0x10987040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987040 push ebp */
  push32((uint32_t)(EBP));
  /* 10987041 mov ebp, esp */
  EBP = (ESP);
  /* 10987043 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987046 push ebx */
  push32((uint32_t)(EBX));
  /* 10987047 push esi */
  push32((uint32_t)(ESI));
  /* 10987048 push edi */
  push32((uint32_t)(EDI));
  /* 10987049 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10987050 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 10987055 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10987058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098705a jne 0x10987066 */
  if (!C.zf) goto L_10987066;
  /* 1098705c mov eax, 1 */
  EAX = (0x1u);
  /* 10987061 jmp 0x10987398 */
  goto L_10987398;
L_10987066:;
  /* 10987066 push 9 */
  push32((uint32_t)(0x9u));
  /* 10987068 call 0x109898a0 */
  push32(0x1098706du); f_109898a0();
  /* 1098706d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987070 call 0x1098a080 */
  push32(0x10987075u); f_1098a080();
  /* 10987075 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10987078 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098707c je 0x10987189 */
  if (C.zf) goto L_10987189;
  /* 10987082 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987086 je 0x10987189 */
  if (C.zf) goto L_10987189;
  /* 1098708c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098708f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10987092 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10987095 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987098 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1098709b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098709f ja 0x10987152 */
  if ((!C.cf&&!C.zf)) goto L_10987152;
  /* 109870a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109870a8 jmp dword ptr [eax*4 + 0x1098739f] */
  switch (EAX) {
    case 0: goto L_1098712a;
    case 1: goto L_10987102;
    case 2: goto L_109870da;
    case 3: goto L_109870af;
    default: x86_unimpl("switch@0x109870a8 out of table"); return;
  }
L_109870af:;
  /* 109870af push 0x109accb4 */
  push32((uint32_t)(0x109accb4u));
  /* 109870b4 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 109870b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109870bb push 0 */
  push32((uint32_t)(0x0u));
  /* 109870bd push 0 */
  push32((uint32_t)(0x0u));
  /* 109870bf push 0 */
  push32((uint32_t)(0x0u));
  /* 109870c1 call 0x10984f60 */
  push32(0x109870c6u); f_10984f60();
  /* 109870c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109870c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109870cc jne 0x109870cf */
  if (!C.zf) goto L_109870cf;
  /* 109870ce int3  */
  x86_unimpl("int3 @ 0x109870ce");
L_109870cf:;
  /* 109870cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109870d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109870d3 jne 0x109870af */
  if (!C.zf) goto L_109870af;
  /* 109870d5 jmp 0x10987178 */
  goto L_10987178;
L_109870da:;
  /* 109870da push 0x109acc90 */
  push32((uint32_t)(0x109acc90u));
  /* 109870df push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 109870e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109870e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109870e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109870ea push 0 */
  push32((uint32_t)(0x0u));
  /* 109870ec call 0x10984f60 */
  push32(0x109870f1u); f_10984f60();
  /* 109870f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109870f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109870f7 jne 0x109870fa */
  if (!C.zf) goto L_109870fa;
  /* 109870f9 int3  */
  x86_unimpl("int3 @ 0x109870f9");
L_109870fa:;
  /* 109870fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109870fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109870fe jne 0x109870da */
  if (!C.zf) goto L_109870da;
  /* 10987100 jmp 0x10987178 */
  goto L_10987178;
L_10987102:;
  /* 10987102 push 0x109acc6c */
  push32((uint32_t)(0x109acc6cu));
  /* 10987107 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 1098710c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098710e push 0 */
  push32((uint32_t)(0x0u));
  /* 10987110 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987112 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987114 call 0x10984f60 */
  push32(0x10987119u); f_10984f60();
  /* 10987119 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098711c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098711f jne 0x10987122 */
  if (!C.zf) goto L_10987122;
  /* 10987121 int3  */
  x86_unimpl("int3 @ 0x10987121");
L_10987122:;
  /* 10987122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987126 jne 0x10987102 */
  if (!C.zf) goto L_10987102;
  /* 10987128 jmp 0x10987178 */
  goto L_10987178;
L_1098712a:;
  /* 1098712a push 0x109acc48 */
  push32((uint32_t)(0x109acc48u));
  /* 1098712f push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 10987134 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987136 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987138 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098713a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098713c call 0x10984f60 */
  push32(0x10987141u); f_10984f60();
  /* 10987141 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987144 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987147 jne 0x1098714a */
  if (!C.zf) goto L_1098714a;
  /* 10987149 int3  */
  x86_unimpl("int3 @ 0x10987149");
L_1098714a:;
  /* 1098714a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1098714c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098714e jne 0x1098712a */
  if (!C.zf) goto L_1098712a;
  /* 10987150 jmp 0x10987178 */
  goto L_10987178;
L_10987152:;
  /* 10987152 push 0x109acc1c */
  push32((uint32_t)(0x109acc1cu));
  /* 10987157 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 1098715c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098715e push 0 */
  push32((uint32_t)(0x0u));
  /* 10987160 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987162 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987164 call 0x10984f60 */
  push32(0x10987169u); f_10984f60();
  /* 10987169 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098716c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098716f jne 0x10987172 */
  if (!C.zf) goto L_10987172;
  /* 10987171 int3  */
  x86_unimpl("int3 @ 0x10987171");
L_10987172:;
  /* 10987172 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10987174 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987176 jne 0x10987152 */
  if (!C.zf) goto L_10987152;
L_10987178:;
  /* 10987178 push 9 */
  push32((uint32_t)(0x9u));
  /* 1098717a call 0x10989940 */
  push32(0x1098717fu); f_10989940();
  /* 1098717f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987184 jmp 0x10987398 */
  goto L_10987398;
L_10987189:;
  /* 10987189 mov eax, dword ptr [0x109b16a0] */
  EAX = (r32((uint32_t)(0x109b16a0)));
  /* 1098718e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10987191 jmp 0x1098719b */
  goto L_1098719b;
L_10987193:;
  /* 10987193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987196 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10987198 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1098719b:;
  /* 1098719b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098719f je 0x1098738b */
  if (C.zf) goto L_1098738b;
  /* 109871a5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 109871ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109871af mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109871b2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109871b8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109871bb je 0x109871e0 */
  if (C.zf) goto L_109871e0;
  /* 109871bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109871c0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109871c4 je 0x109871e0 */
  if (C.zf) goto L_109871e0;
  /* 109871c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109871c9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109871cc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109871d2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109871d5 je 0x109871e0 */
  if (C.zf) goto L_109871e0;
  /* 109871d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109871da cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109871de jne 0x109871f8 */
  if (!C.zf) goto L_109871f8;
L_109871e0:;
  /* 109871e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109871e3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 109871e6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 109871ec mov edx, dword ptr [ecx*4 + 0x109afa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa94)));
  /* 109871f3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 109871f6 jmp 0x109871ff */
  goto L_109871ff;
L_109871f8:;
  /* 109871f8 mov dword ptr [ebp - 0x14], 0x109acc14 */
  w32((uint32_t)(EBP + -0x14), (0x109acc14u));
L_109871ff:;
  /* 109871ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10987201 mov al, byte ptr [0x109afa90] */
  AL = (r8((uint32_t)(0x109afa90)));
  /* 10987206 push eax */
  push32((uint32_t)(EAX));
  /* 10987207 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098720a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098720d push ecx */
  push32((uint32_t)(ECX));
  /* 1098720e call 0x10986fb0 */
  push32(0x10987213u); f_10986fb0();
  /* 10987213 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987218 jne 0x10987254 */
  if (!C.zf) goto L_10987254;
L_1098721a:;
  /* 1098721a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098721d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987220 push edx */
  push32((uint32_t)(EDX));
  /* 10987221 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987224 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10987227 push ecx */
  push32((uint32_t)(ECX));
  /* 10987228 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098722b push edx */
  push32((uint32_t)(EDX));
  /* 1098722c push 0x109acaf0 */
  push32((uint32_t)(0x109acaf0u));
  /* 10987231 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987233 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987235 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987237 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987239 call 0x10984f60 */
  push32(0x1098723eu); f_10984f60();
  /* 1098723e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987241 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987244 jne 0x10987247 */
  if (!C.zf) goto L_10987247;
  /* 10987246 int3  */
  x86_unimpl("int3 @ 0x10987246");
L_10987247:;
  /* 10987247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098724b jne 0x1098721a */
  if (!C.zf) goto L_1098721a;
  /* 1098724d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10987254:;
  /* 10987254 push 4 */
  push32((uint32_t)(0x4u));
  /* 10987256 mov cl, byte ptr [0x109afa90] */
  CL = (r8((uint32_t)(0x109afa90)));
  /* 1098725c push ecx */
  push32((uint32_t)(ECX));
  /* 1098725d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987260 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10987263 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987266 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1098726a push edx */
  push32((uint32_t)(EDX));
  /* 1098726b call 0x10986fb0 */
  push32(0x10987270u); f_10986fb0();
  /* 10987270 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987273 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987275 jne 0x109872b1 */
  if (!C.zf) goto L_109872b1;
L_10987277:;
  /* 10987277 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098727a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098727d push eax */
  push32((uint32_t)(EAX));
  /* 1098727e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987281 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10987284 push edx */
  push32((uint32_t)(EDX));
  /* 10987285 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10987288 push eax */
  push32((uint32_t)(EAX));
  /* 10987289 push 0x109acac4 */
  push32((uint32_t)(0x109acac4u));
  /* 1098728e push 0 */
  push32((uint32_t)(0x0u));
  /* 10987290 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987292 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987294 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987296 call 0x10984f60 */
  push32(0x1098729bu); f_10984f60();
  /* 1098729b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098729e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109872a1 jne 0x109872a4 */
  if (!C.zf) goto L_109872a4;
  /* 109872a3 int3  */
  x86_unimpl("int3 @ 0x109872a3");
L_109872a4:;
  /* 109872a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109872a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109872a8 jne 0x10987277 */
  if (!C.zf) goto L_10987277;
  /* 109872aa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_109872b1:;
  /* 109872b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109872b4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109872b8 jne 0x1098730a */
  if (!C.zf) goto L_1098730a;
  /* 109872ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109872bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109872c0 push ecx */
  push32((uint32_t)(ECX));
  /* 109872c1 mov dl, byte ptr [0x109afa91] */
  DL = (r8((uint32_t)(0x109afa91)));
  /* 109872c7 push edx */
  push32((uint32_t)(EDX));
  /* 109872c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109872cb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109872ce push eax */
  push32((uint32_t)(EAX));
  /* 109872cf call 0x10986fb0 */
  push32(0x109872d4u); f_10986fb0();
  /* 109872d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109872d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109872d9 jne 0x1098730a */
  if (!C.zf) goto L_1098730a;
L_109872db:;
  /* 109872db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109872de add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109872e1 push ecx */
  push32((uint32_t)(ECX));
  /* 109872e2 push 0x109acbe8 */
  push32((uint32_t)(0x109acbe8u));
  /* 109872e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109872e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109872eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109872ed push 0 */
  push32((uint32_t)(0x0u));
  /* 109872ef call 0x10984f60 */
  push32(0x109872f4u); f_10984f60();
  /* 109872f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109872f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109872fa jne 0x109872fd */
  if (!C.zf) goto L_109872fd;
  /* 109872fc int3  */
  x86_unimpl("int3 @ 0x109872fc");
L_109872fd:;
  /* 109872fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109872ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987301 jne 0x109872db */
  if (!C.zf) goto L_109872db;
  /* 10987303 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1098730a:;
  /* 1098730a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098730e jne 0x10987386 */
  if (!C.zf) goto L_10987386;
  /* 10987310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987313 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987317 je 0x1098734c */
  if (C.zf) goto L_1098734c;
L_10987319:;
  /* 10987319 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098731c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1098731f push edx */
  push32((uint32_t)(EDX));
  /* 10987320 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987323 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10987326 push ecx */
  push32((uint32_t)(ECX));
  /* 10987327 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098732a push edx */
  push32((uint32_t)(EDX));
  /* 1098732b push 0x109acbc8 */
  push32((uint32_t)(0x109acbc8u));
  /* 10987330 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987332 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987334 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987336 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987338 call 0x10984f60 */
  push32(0x1098733du); f_10984f60();
  /* 1098733d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987340 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987343 jne 0x10987346 */
  if (!C.zf) goto L_10987346;
  /* 10987345 int3  */
  x86_unimpl("int3 @ 0x10987345");
L_10987346:;
  /* 10987346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098734a jne 0x10987319 */
  if (!C.zf) goto L_10987319;
L_1098734c:;
  /* 1098734c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098734f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10987352 push edx */
  push32((uint32_t)(EDX));
  /* 10987353 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987356 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987359 push eax */
  push32((uint32_t)(EAX));
  /* 1098735a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1098735d push ecx */
  push32((uint32_t)(ECX));
  /* 1098735e push 0x109acb9c */
  push32((uint32_t)(0x109acb9cu));
  /* 10987363 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987365 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987367 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098736b call 0x10984f60 */
  push32(0x10987370u); f_10984f60();
  /* 10987370 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987373 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987376 jne 0x10987379 */
  if (!C.zf) goto L_10987379;
  /* 10987378 int3  */
  x86_unimpl("int3 @ 0x10987378");
L_10987379:;
  /* 10987379 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098737b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098737d jne 0x1098734c */
  if (!C.zf) goto L_1098734c;
  /* 1098737f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10987386:;
  /* 10987386 jmp 0x10987193 */
  goto L_10987193;
L_1098738b:;
  /* 1098738b push 9 */
  push32((uint32_t)(0x9u));
  /* 1098738d call 0x10989940 */
  push32(0x10987392u); f_10989940();
  /* 10987392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10987398:;
  /* 10987398 pop edi */
  EDI = (pop32());
  /* 10987399 pop esi */
  ESI = (pop32());
  /* 1098739a pop ebx */
  EBX = (pop32());
  /* 1098739b mov esp, ebp */
  ESP = (EBP);
  /* 1098739d pop ebp */
  EBP = (pop32());
  /* 1098739e ret  */
  ESPCHK(0x10987040u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x109873b0 (34 bytes, 13 insns) */
void f_109873b0(void) {
  FTRACE(0x109873b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109873b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109873b1 mov ebp, esp */
  EBP = (ESP);
  /* 109873b3 push ecx */
  push32((uint32_t)(ECX));
  /* 109873b4 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 109873b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109873bc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109873c0 je 0x109873cb */
  if (C.zf) goto L_109873cb;
  /* 109873c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109873c5 mov dword ptr [0x109afa84], ecx */
  w32((uint32_t)(0x109afa84), (ECX));
L_109873cb:;
  /* 109873cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109873ce mov esp, ebp */
  ESP = (EBP);
  /* 109873d0 pop ebp */
  EBP = (pop32());
  /* 109873d1 ret  */
  ESPCHK(0x109873b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073e0 @ 0x109873e0 (103 bytes, 38 insns) */
void f_109873e0(void) {
  FTRACE(0x109873e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109873e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109873e1 mov ebp, esp */
  EBP = (ESP);
  /* 109873e3 push ecx */
  push32((uint32_t)(ECX));
  /* 109873e4 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 109873e9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 109873ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109873ee jne 0x109873f2 */
  if (!C.zf) goto L_109873f2;
  /* 109873f0 jmp 0x10987443 */
  goto L_10987443;
L_109873f2:;
  /* 109873f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 109873f4 call 0x109898a0 */
  push32(0x109873f9u); f_109898a0();
  /* 109873f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109873fc mov ecx, dword ptr [0x109b16a0] */
  ECX = (r32((uint32_t)(0x109b16a0)));
  /* 10987402 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10987405 jmp 0x1098740f */
  goto L_1098740f;
L_10987407:;
  /* 10987407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098740a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098740c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098740f:;
  /* 1098740f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987413 je 0x10987439 */
  if (C.zf) goto L_10987439;
  /* 10987415 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987418 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1098741b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987421 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987424 jne 0x10987437 */
  if (!C.zf) goto L_10987437;
  /* 10987426 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10987429 push eax */
  push32((uint32_t)(EAX));
  /* 1098742a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098742d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987430 push ecx */
  push32((uint32_t)(ECX));
  /* 10987431 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10987434u);
  /* 10987434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987437:;
  /* 10987437 jmp 0x10987407 */
  goto L_10987407;
L_10987439:;
  /* 10987439 push 9 */
  push32((uint32_t)(0x9u));
  /* 1098743b call 0x10989940 */
  push32(0x10987440u); f_10989940();
  /* 10987440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987443:;
  /* 10987443 mov esp, ebp */
  ESP = (EBP);
  /* 10987445 pop ebp */
  EBP = (pop32());
  /* 10987446 ret  */
  ESPCHK(0x109873e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10987450 (75 bytes, 28 insns) */
void f_10987450(void) {
  FTRACE(0x10987450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987450 push ebp */
  push32((uint32_t)(EBP));
  /* 10987451 mov ebp, esp */
  EBP = (ESP);
  /* 10987453 push ecx */
  push32((uint32_t)(ECX));
  /* 10987454 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987458 je 0x1098748d */
  if (C.zf) goto L_1098748d;
  /* 1098745a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098745d push eax */
  push32((uint32_t)(EAX));
  /* 1098745e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987461 push ecx */
  push32((uint32_t)(ECX));
  /* 10987462 call dword ptr [0x109b43b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b8))), 0x10987468u);
  /* 10987468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098746a jne 0x1098748d */
  if (!C.zf) goto L_1098748d;
  /* 1098746c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987470 je 0x10987484 */
  if (C.zf) goto L_10987484;
  /* 10987472 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10987475 push edx */
  push32((uint32_t)(EDX));
  /* 10987476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987479 push eax */
  push32((uint32_t)(EAX));
  /* 1098747a call dword ptr [0x109b43b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b4))), 0x10987480u);
  /* 10987480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987482 jne 0x1098748d */
  if (!C.zf) goto L_1098748d;
L_10987484:;
  /* 10987484 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1098748b jmp 0x10987494 */
  goto L_10987494;
L_1098748d:;
  /* 1098748d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10987494:;
  /* 10987494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987497 mov esp, ebp */
  ESP = (EBP);
  /* 10987499 pop ebp */
  EBP = (pop32());
  /* 1098749a ret  */
  ESPCHK(0x10987450u, _esp0);
  ESP += 4; return;
}

/* FUN_100074a0 @ 0x109874a0 (134 bytes, 50 insns) */
void f_109874a0(void) {
  FTRACE(0x109874a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109874a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109874a1 mov ebp, esp */
  EBP = (ESP);
  /* 109874a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109874a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109874a8 jne 0x109874ae */
  if (!C.zf) goto L_109874ae;
  /* 109874aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109874ac jmp 0x10987522 */
  goto L_10987522;
L_109874ae:;
  /* 109874ae push 1 */
  push32((uint32_t)(0x1u));
  /* 109874b0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109874b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109874b5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109874b8 push eax */
  push32((uint32_t)(EAX));
  /* 109874b9 call 0x10987450 */
  push32(0x109874beu); f_10987450();
  /* 109874be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109874c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109874c3 jne 0x109874c9 */
  if (!C.zf) goto L_109874c9;
  /* 109874c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109874c7 jmp 0x10987522 */
  goto L_10987522;
L_109874c9:;
  /* 109874c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109874cc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109874cf push ecx */
  push32((uint32_t)(ECX));
  /* 109874d0 call 0x1098a1a0 */
  push32(0x109874d5u); f_1098a1a0();
  /* 109874d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109874d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109874db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109874df je 0x109874f6 */
  if (C.zf) goto L_109874f6;
  /* 109874e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109874e4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109874e7 push edx */
  push32((uint32_t)(EDX));
  /* 109874e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109874eb push eax */
  push32((uint32_t)(EAX));
  /* 109874ec call 0x1098a200 */
  push32(0x109874f1u); f_1098a200();
  /* 109874f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109874f4 jmp 0x10987522 */
  goto L_10987522;
L_109874f6:;
  /* 109874f6 mov ecx, dword ptr [0x109b1654] */
  ECX = (r32((uint32_t)(0x109b1654)));
  /* 109874fc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10987502 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10987504 je 0x1098750d */
  if (C.zf) goto L_1098750d;
  /* 10987506 mov eax, 1 */
  EAX = (0x1u);
  /* 1098750b jmp 0x10987522 */
  goto L_10987522;
L_1098750d:;
  /* 1098750d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987510 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987513 push edx */
  push32((uint32_t)(EDX));
  /* 10987514 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987516 mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 1098751b push eax */
  push32((uint32_t)(EAX));
  /* 1098751c call dword ptr [0x109b43ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43ac))), 0x10987522u);
L_10987522:;
  /* 10987522 mov esp, ebp */
  ESP = (EBP);
  /* 10987524 pop ebp */
  EBP = (pop32());
  /* 10987525 ret  */
  ESPCHK(0x109874a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x10987530 (227 bytes, 80 insns) */
void f_10987530(void) {
  FTRACE(0x10987530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987530 push ebp */
  push32((uint32_t)(EBP));
  /* 10987531 mov ebp, esp */
  EBP = (ESP);
  /* 10987533 push ecx */
  push32((uint32_t)(ECX));
  /* 10987534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987537 push eax */
  push32((uint32_t)(EAX));
  /* 10987538 call 0x109874a0 */
  push32(0x1098753du); f_109874a0();
  /* 1098753d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987540 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987542 jne 0x1098754b */
  if (!C.zf) goto L_1098754b;
  /* 10987544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987546 jmp 0x1098760f */
  goto L_1098760f;
L_1098754b:;
  /* 1098754b push 9 */
  push32((uint32_t)(0x9u));
  /* 1098754d call 0x109898a0 */
  push32(0x10987552u); f_109898a0();
  /* 10987552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987555 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987558 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098755b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1098755e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987561 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10987564 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10987569 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098756c je 0x10987590 */
  if (C.zf) goto L_10987590;
  /* 1098756e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987571 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987575 je 0x10987590 */
  if (C.zf) goto L_10987590;
  /* 10987577 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098757a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1098757d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10987582 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987585 je 0x10987590 */
  if (C.zf) goto L_10987590;
  /* 10987587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098758a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098758e jne 0x10987603 */
  if (!C.zf) goto L_10987603;
L_10987590:;
  /* 10987590 push 1 */
  push32((uint32_t)(0x1u));
  /* 10987592 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10987595 push edx */
  push32((uint32_t)(EDX));
  /* 10987596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987599 push eax */
  push32((uint32_t)(EAX));
  /* 1098759a call 0x10987450 */
  push32(0x1098759fu); f_10987450();
  /* 1098759f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109875a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109875a4 je 0x10987603 */
  if (C.zf) goto L_10987603;
  /* 109875a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109875a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 109875ac cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109875af jne 0x10987603 */
  if (!C.zf) goto L_10987603;
  /* 109875b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109875b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109875b7 cmp ecx, dword ptr [0x109afa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109afa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109875bd jg 0x10987603 */
  if ((!C.zf&&C.sf==C.of)) goto L_10987603;
  /* 109875bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109875c3 je 0x109875d0 */
  if (C.zf) goto L_109875d0;
  /* 109875c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109875c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109875cb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 109875ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109875d0:;
  /* 109875d0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109875d4 je 0x109875e1 */
  if (C.zf) goto L_109875e1;
  /* 109875d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 109875d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109875dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109875df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109875e1:;
  /* 109875e1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109875e5 je 0x109875f2 */
  if (C.zf) goto L_109875f2;
  /* 109875e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109875ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109875ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 109875f0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109875f2:;
  /* 109875f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 109875f4 call 0x10989940 */
  push32(0x109875f9u); f_10989940();
  /* 109875f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109875fc mov eax, 1 */
  EAX = (0x1u);
  /* 10987601 jmp 0x1098760f */
  goto L_1098760f;
L_10987603:;
  /* 10987603 push 9 */
  push32((uint32_t)(0x9u));
  /* 10987605 call 0x10989940 */
  push32(0x1098760au); f_10989940();
  /* 1098760a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098760d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1098760f:;
  /* 1098760f mov esp, ebp */
  ESP = (EBP);
  /* 10987611 pop ebp */
  EBP = (pop32());
  /* 10987612 ret  */
  ESPCHK(0x10987530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007620 @ 0x10987620 (28 bytes, 11 insns) */
void f_10987620(void) {
  FTRACE(0x10987620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987620 push ebp */
  push32((uint32_t)(EBP));
  /* 10987621 mov ebp, esp */
  EBP = (ESP);
  /* 10987623 push ecx */
  push32((uint32_t)(ECX));
  /* 10987624 mov eax, dword ptr [0x109b2ff8] */
  EAX = (r32((uint32_t)(0x109b2ff8)));
  /* 10987629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098762c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098762f mov dword ptr [0x109b2ff8], ecx */
  w32((uint32_t)(0x109b2ff8), (ECX));
  /* 10987635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987638 mov esp, ebp */
  ESP = (EBP);
  /* 1098763a pop ebp */
  EBP = (pop32());
  /* 1098763b ret  */
  ESPCHK(0x10987620u, _esp0);
  ESP += 4; return;
}

/* FUN_10007640 @ 0x10987640 (362 bytes, 116 insns) */
void f_10987640(void) {
  FTRACE(0x10987640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987640 push ebp */
  push32((uint32_t)(EBP));
  /* 10987641 mov ebp, esp */
  EBP = (ESP);
  /* 10987643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987646 push ebx */
  push32((uint32_t)(EBX));
  /* 10987647 push esi */
  push32((uint32_t)(ESI));
  /* 10987648 push edi */
  push32((uint32_t)(EDI));
  /* 10987649 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098764d jne 0x1098767a */
  if (!C.zf) goto L_1098767a;
L_1098764f:;
  /* 1098764f push 0x109accfc */
  push32((uint32_t)(0x109accfcu));
  /* 10987654 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 10987659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098765b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098765d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098765f push 0 */
  push32((uint32_t)(0x0u));
  /* 10987661 call 0x10984f60 */
  push32(0x10987666u); f_10984f60();
  /* 10987666 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987669 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098766c jne 0x1098766f */
  if (!C.zf) goto L_1098766f;
  /* 1098766e int3  */
  x86_unimpl("int3 @ 0x1098766e");
L_1098766f:;
  /* 1098766f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987671 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987673 jne 0x1098764f */
  if (!C.zf) goto L_1098764f;
  /* 10987675 jmp 0x109877a3 */
  goto L_109877a3;
L_1098767a:;
  /* 1098767a push 9 */
  push32((uint32_t)(0x9u));
  /* 1098767c call 0x109898a0 */
  push32(0x10987681u); f_109898a0();
  /* 10987681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987684 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987687 mov edx, dword ptr [0x109b16a0] */
  EDX = (r32((uint32_t)(0x109b16a0)));
  /* 1098768d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1098768f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10987696 jmp 0x109876a1 */
  goto L_109876a1;
L_10987698:;
  /* 10987698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098769b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098769e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109876a1:;
  /* 109876a1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109876a5 jge 0x109876c5 */
  if ((C.sf==C.of)) goto L_109876c5;
  /* 109876a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109876aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109876ad mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 109876b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109876b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109876bb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 109876c3 jmp 0x10987698 */
  goto L_10987698;
L_109876c5:;
  /* 109876c5 mov edx, dword ptr [0x109b16a0] */
  EDX = (r32((uint32_t)(0x109b16a0)));
  /* 109876cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109876ce jmp 0x109876d8 */
  goto L_109876d8;
L_109876d0:;
  /* 109876d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109876d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109876d5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_109876d8:;
  /* 109876d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109876dc je 0x10987781 */
  if (C.zf) goto L_10987781;
  /* 109876e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109876e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 109876e8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109876ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109876ef jl 0x10987757 */
  if ((C.sf!=C.of)) goto L_10987757;
  /* 109876f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109876f4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 109876f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 109876fd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987700 jge 0x10987757 */
  if ((C.sf==C.of)) goto L_10987757;
  /* 10987702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987705 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10987708 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098770e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987711 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10987715 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987718 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098771b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1098771e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987724 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987727 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1098772b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098772e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10987731 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10987736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987739 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1098773d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987740 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987746 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10987749 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098774e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987751 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10987755 jmp 0x1098777c */
  goto L_1098777c;
L_10987757:;
  /* 10987757 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098775a push edx */
  push32((uint32_t)(EDX));
  /* 1098775b push 0x109accd8 */
  push32((uint32_t)(0x109accd8u));
  /* 10987760 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987762 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987768 call 0x10984f60 */
  push32(0x1098776du); f_10984f60();
  /* 1098776d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987770 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987773 jne 0x10987776 */
  if (!C.zf) goto L_10987776;
  /* 10987775 int3  */
  x86_unimpl("int3 @ 0x10987775");
L_10987776:;
  /* 10987776 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098777a jne 0x10987757 */
  if (!C.zf) goto L_10987757;
L_1098777c:;
  /* 1098777c jmp 0x109876d0 */
  goto L_109876d0;
L_10987781:;
  /* 10987781 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987784 mov edx, dword ptr [0x109b16a8] */
  EDX = (r32((uint32_t)(0x109b16a8)));
  /* 1098778a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1098778d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987790 mov ecx, dword ptr [0x109b169c] */
  ECX = (r32((uint32_t)(0x109b169c)));
  /* 10987796 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10987799 push 9 */
  push32((uint32_t)(0x9u));
  /* 1098779b call 0x10989940 */
  push32(0x109877a0u); f_10989940();
  /* 109877a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109877a3:;
  /* 109877a3 pop edi */
  EDI = (pop32());
  /* 109877a4 pop esi */
  ESI = (pop32());
  /* 109877a5 pop ebx */
  EBX = (pop32());
  /* 109877a6 mov esp, ebp */
  ESP = (EBP);
  /* 109877a8 pop ebp */
  EBP = (pop32());
  /* 109877a9 ret  */
  ESPCHK(0x10987640u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x109877b0 (291 bytes, 95 insns) */
void f_109877b0(void) {
  FTRACE(0x109877b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109877b0 push ebp */
  push32((uint32_t)(EBP));
  /* 109877b1 mov ebp, esp */
  EBP = (ESP);
  /* 109877b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109877b6 push ebx */
  push32((uint32_t)(EBX));
  /* 109877b7 push esi */
  push32((uint32_t)(ESI));
  /* 109877b8 push edi */
  push32((uint32_t)(EDI));
  /* 109877b9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109877c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109877c4 je 0x109877d2 */
  if (C.zf) goto L_109877d2;
  /* 109877c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109877ca je 0x109877d2 */
  if (C.zf) goto L_109877d2;
  /* 109877cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109877d0 jne 0x10987800 */
  if (!C.zf) goto L_10987800;
L_109877d2:;
  /* 109877d2 push 0x109acd24 */
  push32((uint32_t)(0x109acd24u));
  /* 109877d7 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 109877dc push 0 */
  push32((uint32_t)(0x0u));
  /* 109877de push 0 */
  push32((uint32_t)(0x0u));
  /* 109877e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109877e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109877e4 call 0x10984f60 */
  push32(0x109877e9u); f_10984f60();
  /* 109877e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109877ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109877ef jne 0x109877f2 */
  if (!C.zf) goto L_109877f2;
  /* 109877f1 int3  */
  x86_unimpl("int3 @ 0x109877f1");
L_109877f2:;
  /* 109877f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109877f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109877f6 jne 0x109877d2 */
  if (!C.zf) goto L_109877d2;
  /* 109877f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109877fb jmp 0x109878cc */
  goto L_109878cc;
L_10987800:;
  /* 10987800 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10987807 jmp 0x10987812 */
  goto L_10987812;
L_10987809:;
  /* 10987809 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098780c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098780f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10987812:;
  /* 10987812 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987816 jge 0x1098789c */
  if ((C.sf==C.of)) goto L_1098789c;
  /* 1098781c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098781f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10987822 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987825 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10987828 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1098782c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987830 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987836 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1098783a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098783d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10987840 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987843 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10987846 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1098784a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098784e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987854 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10987858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098785b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098785e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987863 jne 0x10987872 */
  if (!C.zf) goto L_10987872;
  /* 10987865 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098786b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987870 je 0x10987897 */
  if (C.zf) goto L_10987897;
L_10987872:;
  /* 10987872 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987876 je 0x10987897 */
  if (C.zf) goto L_10987897;
  /* 10987878 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098787c jne 0x10987890 */
  if (!C.zf) goto L_10987890;
  /* 1098787e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987882 jne 0x10987897 */
  if (!C.zf) goto L_10987897;
  /* 10987884 mov eax, dword ptr [0x109afa84] */
  EAX = (r32((uint32_t)(0x109afa84)));
  /* 10987889 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1098788c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098788e je 0x10987897 */
  if (C.zf) goto L_10987897;
L_10987890:;
  /* 10987890 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10987897:;
  /* 10987897 jmp 0x10987809 */
  goto L_10987809;
L_1098789c:;
  /* 1098789c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098789f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109878a2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 109878a5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109878a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109878ab mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 109878ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 109878b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 109878b4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 109878b7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109878ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109878bd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 109878c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109878c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 109878c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_109878cc:;
  /* 109878cc pop edi */
  EDI = (pop32());
  /* 109878cd pop esi */
  ESI = (pop32());
  /* 109878ce pop ebx */
  EBX = (pop32());
  /* 109878cf mov esp, ebp */
  ESP = (EBP);
  /* 109878d1 pop ebp */
  EBP = (pop32());
  /* 109878d2 ret  */
  ESPCHK(0x109877b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078e0 @ 0x109878e0 (697 bytes, 253 insns) */
void f_109878e0(void) {
  FTRACE(0x109878e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109878e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109878e1 mov ebp, esp */
  EBP = (ESP);
  /* 109878e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109878e6 push ebx */
  push32((uint32_t)(EBX));
  /* 109878e7 push esi */
  push32((uint32_t)(ESI));
  /* 109878e8 push edi */
  push32((uint32_t)(EDI));
  /* 109878e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109878f0 push 9 */
  push32((uint32_t)(0x9u));
  /* 109878f2 call 0x109898a0 */
  push32(0x109878f7u); f_109898a0();
  /* 109878f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109878fa:;
  /* 109878fa push 0x109ace1c */
  push32((uint32_t)(0x109ace1cu));
  /* 109878ff push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 10987904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987906 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098790a push 0 */
  push32((uint32_t)(0x0u));
  /* 1098790c call 0x10984f60 */
  push32(0x10987911u); f_10984f60();
  /* 10987911 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987917 jne 0x1098791a */
  if (!C.zf) goto L_1098791a;
  /* 10987919 int3  */
  x86_unimpl("int3 @ 0x10987919");
L_1098791a:;
  /* 1098791a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098791c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098791e jne 0x109878fa */
  if (!C.zf) goto L_109878fa;
  /* 10987920 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987924 je 0x1098792e */
  if (C.zf) goto L_1098792e;
  /* 10987926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987929 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098792b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1098792e:;
  /* 1098792e mov eax, dword ptr [0x109b16a0] */
  EAX = (r32((uint32_t)(0x109b16a0)));
  /* 10987933 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10987936 jmp 0x10987940 */
  goto L_10987940;
L_10987938:;
  /* 10987938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098793b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1098793d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10987940:;
  /* 10987940 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987944 je 0x10987b62 */
  if (C.zf) goto L_10987b62;
  /* 1098794a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098794d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987950 je 0x10987b62 */
  if (C.zf) goto L_10987b62;
  /* 10987956 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987959 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1098795c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987962 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987965 je 0x10987994 */
  if (C.zf) goto L_10987994;
  /* 10987967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098796a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1098796d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10987973 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10987975 je 0x10987994 */
  if (C.zf) goto L_10987994;
  /* 10987977 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098797a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1098797d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10987982 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987985 jne 0x10987999 */
  if (!C.zf) goto L_10987999;
  /* 10987987 mov ecx, dword ptr [0x109afa84] */
  ECX = (r32((uint32_t)(0x109afa84)));
  /* 1098798d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10987990 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10987992 jne 0x10987999 */
  if (!C.zf) goto L_10987999;
L_10987994:;
  /* 10987994 jmp 0x10987b5d */
  goto L_10987b5d;
L_10987999:;
  /* 10987999 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098799c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109879a0 je 0x10987a12 */
  if (C.zf) goto L_10987a12;
  /* 109879a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109879a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109879a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109879a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 109879ac push ecx */
  push32((uint32_t)(ECX));
  /* 109879ad call 0x10987450 */
  push32(0x109879b2u); f_10987450();
  /* 109879b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109879b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109879b7 jne 0x109879e3 */
  if (!C.zf) goto L_109879e3;
L_109879b9:;
  /* 109879b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109879bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109879bf push eax */
  push32((uint32_t)(EAX));
  /* 109879c0 push 0x109ace08 */
  push32((uint32_t)(0x109ace08u));
  /* 109879c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109879c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109879c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109879cb push 0 */
  push32((uint32_t)(0x0u));
  /* 109879cd call 0x10984f60 */
  push32(0x109879d2u); f_10984f60();
  /* 109879d2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109879d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109879d8 jne 0x109879db */
  if (!C.zf) goto L_109879db;
  /* 109879da int3  */
  x86_unimpl("int3 @ 0x109879da");
L_109879db:;
  /* 109879db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109879dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109879df jne 0x109879b9 */
  if (!C.zf) goto L_109879b9;
  /* 109879e1 jmp 0x10987a12 */
  goto L_10987a12;
L_109879e3:;
  /* 109879e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109879e6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 109879e9 push eax */
  push32((uint32_t)(EAX));
  /* 109879ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109879ed mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109879f0 push edx */
  push32((uint32_t)(EDX));
  /* 109879f1 push 0x109acdfc */
  push32((uint32_t)(0x109acdfcu));
  /* 109879f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109879f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109879fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109879fc push 0 */
  push32((uint32_t)(0x0u));
  /* 109879fe call 0x10984f60 */
  push32(0x10987a03u); f_10984f60();
  /* 10987a03 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987a06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987a09 jne 0x10987a0c */
  if (!C.zf) goto L_10987a0c;
  /* 10987a0b int3  */
  x86_unimpl("int3 @ 0x10987a0b");
L_10987a0c:;
  /* 10987a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987a10 jne 0x109879e3 */
  if (!C.zf) goto L_109879e3;
L_10987a12:;
  /* 10987a12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987a15 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10987a18 push edx */
  push32((uint32_t)(EDX));
  /* 10987a19 push 0x109acdf4 */
  push32((uint32_t)(0x109acdf4u));
  /* 10987a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a26 call 0x10984f60 */
  push32(0x10987a2bu); f_10984f60();
  /* 10987a2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987a2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987a31 jne 0x10987a34 */
  if (!C.zf) goto L_10987a34;
  /* 10987a33 int3  */
  x86_unimpl("int3 @ 0x10987a33");
L_10987a34:;
  /* 10987a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987a36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987a38 jne 0x10987a12 */
  if (!C.zf) goto L_10987a12;
  /* 10987a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987a3d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10987a40 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987a46 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987a49 jne 0x10987abc */
  if (!C.zf) goto L_10987abc;
L_10987a4b:;
  /* 10987a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987a4e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10987a51 push ecx */
  push32((uint32_t)(ECX));
  /* 10987a52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987a55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10987a58 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10987a5b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10987a60 push eax */
  push32((uint32_t)(EAX));
  /* 10987a61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987a64 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987a67 push ecx */
  push32((uint32_t)(ECX));
  /* 10987a68 push 0x109acdc0 */
  push32((uint32_t)(0x109acdc0u));
  /* 10987a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987a75 call 0x10984f60 */
  push32(0x10987a7au); f_10984f60();
  /* 10987a7a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987a7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987a80 jne 0x10987a83 */
  if (!C.zf) goto L_10987a83;
  /* 10987a82 int3  */
  x86_unimpl("int3 @ 0x10987a82");
L_10987a83:;
  /* 10987a83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10987a85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987a87 jne 0x10987a4b */
  if (!C.zf) goto L_10987a4b;
  /* 10987a89 cmp dword ptr [0x109b2ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987a90 je 0x10987aab */
  if (C.zf) goto L_10987aab;
  /* 10987a92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987a95 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10987a98 push ecx */
  push32((uint32_t)(ECX));
  /* 10987a99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987a9c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987a9f push edx */
  push32((uint32_t)(EDX));
  /* 10987aa0 call dword ptr [0x109b2ff8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b2ff8))), 0x10987aa6u);
  /* 10987aa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987aa9 jmp 0x10987ab7 */
  goto L_10987ab7;
L_10987aab:;
  /* 10987aab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987aae push eax */
  push32((uint32_t)(EAX));
  /* 10987aaf call 0x10987ba0 */
  push32(0x10987ab4u); f_10987ba0();
  /* 10987ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987ab7:;
  /* 10987ab7 jmp 0x10987b5d */
  goto L_10987b5d;
L_10987abc:;
  /* 10987abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987abf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987ac3 jne 0x10987b02 */
  if (!C.zf) goto L_10987b02;
L_10987ac5:;
  /* 10987ac5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987ac8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10987acb push eax */
  push32((uint32_t)(EAX));
  /* 10987acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987acf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 10987ad3 push 0x109acd98 */
  push32((uint32_t)(0x109acd98u));
  /* 10987ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987ada push 0 */
  push32((uint32_t)(0x0u));
  /* 10987adc push 0 */
  push32((uint32_t)(0x0u));
  /* 10987ade push 0 */
  push32((uint32_t)(0x0u));
  /* 10987ae0 call 0x10984f60 */
  push32(0x10987ae5u); f_10984f60();
  /* 10987ae5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987ae8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987aeb jne 0x10987aee */
  if (!C.zf) goto L_10987aee;
  /* 10987aed int3  */
  x86_unimpl("int3 @ 0x10987aed");
L_10987aee:;
  /* 10987aee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10987af0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987af2 jne 0x10987ac5 */
  if (!C.zf) goto L_10987ac5;
  /* 10987af4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987af7 push eax */
  push32((uint32_t)(EAX));
  /* 10987af8 call 0x10987ba0 */
  push32(0x10987afdu); f_10987ba0();
  /* 10987afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987b00 jmp 0x10987b5d */
  goto L_10987b5d;
L_10987b02:;
  /* 10987b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987b05 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10987b08 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987b0e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987b11 jne 0x10987b5d */
  if (!C.zf) goto L_10987b5d;
L_10987b13:;
  /* 10987b13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987b16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10987b19 push ecx */
  push32((uint32_t)(ECX));
  /* 10987b1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987b1d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10987b20 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10987b23 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10987b28 push eax */
  push32((uint32_t)(EAX));
  /* 10987b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987b2c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987b2f push ecx */
  push32((uint32_t)(ECX));
  /* 10987b30 push 0x109acd64 */
  push32((uint32_t)(0x109acd64u));
  /* 10987b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b3d call 0x10984f60 */
  push32(0x10987b42u); f_10984f60();
  /* 10987b42 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987b45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987b48 jne 0x10987b4b */
  if (!C.zf) goto L_10987b4b;
  /* 10987b4a int3  */
  x86_unimpl("int3 @ 0x10987b4a");
L_10987b4b:;
  /* 10987b4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10987b4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987b4f jne 0x10987b13 */
  if (!C.zf) goto L_10987b13;
  /* 10987b51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987b54 push eax */
  push32((uint32_t)(EAX));
  /* 10987b55 call 0x10987ba0 */
  push32(0x10987b5au); f_10987ba0();
  /* 10987b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987b5d:;
  /* 10987b5d jmp 0x10987938 */
  goto L_10987938;
L_10987b62:;
  /* 10987b62 push 9 */
  push32((uint32_t)(0x9u));
  /* 10987b64 call 0x10989940 */
  push32(0x10987b69u); f_10989940();
  /* 10987b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987b6c:;
  /* 10987b6c push 0x109acd4c */
  push32((uint32_t)(0x109acd4cu));
  /* 10987b71 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 10987b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10987b7e call 0x10984f60 */
  push32(0x10987b83u); f_10984f60();
  /* 10987b83 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987b86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987b89 jne 0x10987b8c */
  if (!C.zf) goto L_10987b8c;
  /* 10987b8b int3  */
  x86_unimpl("int3 @ 0x10987b8b");
L_10987b8c:;
  /* 10987b8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10987b8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10987b90 jne 0x10987b6c */
  if (!C.zf) goto L_10987b6c;
  /* 10987b92 pop edi */
  EDI = (pop32());
  /* 10987b93 pop esi */
  ESI = (pop32());
  /* 10987b94 pop ebx */
  EBX = (pop32());
  /* 10987b95 mov esp, ebp */
  ESP = (EBP);
  /* 10987b97 pop ebp */
  EBP = (pop32());
  /* 10987b98 ret  */
  ESPCHK(0x109878e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ba0 @ 0x10987ba0 (276 bytes, 89 insns) */
void f_10987ba0(void) {
  FTRACE(0x10987ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10987ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10987ba3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 10987ba7 push esi */
  push32((uint32_t)(ESI));
  /* 10987ba8 push edi */
  push32((uint32_t)(EDI));
  /* 10987ba9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10987bb0 jmp 0x10987bbb */
  goto L_10987bbb;
L_10987bb2:;
  /* 10987bb2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10987bb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987bb8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10987bbb:;
  /* 10987bbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987bbe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987bc2 jge 0x10987bcf */
  if ((C.sf==C.of)) goto L_10987bcf;
  /* 10987bc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987bc7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10987bca mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10987bcd jmp 0x10987bd6 */
  goto L_10987bd6;
L_10987bcf:;
  /* 10987bcf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10987bd6:;
  /* 10987bd6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10987bd9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987bdc jge 0x10987c7c */
  if ((C.sf==C.of)) goto L_10987c7c;
  /* 10987be2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987be5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987be8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10987beb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10987bee cmp dword ptr [0x109afea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109afea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987bf5 jle 0x10987c13 */
  if ((C.zf||C.sf!=C.of)) goto L_10987c13;
  /* 10987bf7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10987bfc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10987bff and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10987c05 push ecx */
  push32((uint32_t)(ECX));
  /* 10987c06 call 0x1098beb0 */
  push32(0x10987c0bu); f_1098beb0();
  /* 10987c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987c0e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10987c11 jmp 0x10987c30 */
  goto L_10987c30;
L_10987c13:;
  /* 10987c13 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10987c16 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987c1c mov eax, dword ptr [0x109afc98] */
  EAX = (r32((uint32_t)(0x109afc98)));
  /* 10987c21 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10987c23 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10987c27 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10987c2d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10987c30:;
  /* 10987c30 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987c34 je 0x10987c44 */
  if (C.zf) goto L_10987c44;
  /* 10987c36 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10987c39 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987c3f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10987c42 jmp 0x10987c4b */
  goto L_10987c4b;
L_10987c44:;
  /* 10987c44 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10987c4b:;
  /* 10987c4b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10987c4e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10987c51 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10987c55 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10987c58 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10987c5e push edx */
  push32((uint32_t)(EDX));
  /* 10987c5f push 0x109ace40 */
  push32((uint32_t)(0x109ace40u));
  /* 10987c64 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10987c67 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10987c6a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10987c6e push ecx */
  push32((uint32_t)(ECX));
  /* 10987c6f call 0x1098bdb0 */
  push32(0x10987c74u); f_1098bdb0();
  /* 10987c74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987c77 jmp 0x10987bb2 */
  goto L_10987bb2;
L_10987c7c:;
  /* 10987c7c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10987c7f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10987c84:;
  /* 10987c84 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10987c87 push eax */
  push32((uint32_t)(EAX));
  /* 10987c88 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10987c8b push ecx */
  push32((uint32_t)(ECX));
  /* 10987c8c push 0x109ace30 */
  push32((uint32_t)(0x109ace30u));
  /* 10987c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987c99 call 0x10984f60 */
  push32(0x10987c9eu); f_10984f60();
  /* 10987c9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987ca1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987ca4 jne 0x10987ca7 */
  if (!C.zf) goto L_10987ca7;
  /* 10987ca6 int3  */
  x86_unimpl("int3 @ 0x10987ca6");
L_10987ca7:;
  /* 10987ca7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10987ca9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987cab jne 0x10987c84 */
  if (!C.zf) goto L_10987c84;
  /* 10987cad pop edi */
  EDI = (pop32());
  /* 10987cae pop esi */
  ESI = (pop32());
  /* 10987caf pop ebx */
  EBX = (pop32());
  /* 10987cb0 mov esp, ebp */
  ESP = (EBP);
  /* 10987cb2 pop ebp */
  EBP = (pop32());
  /* 10987cb3 ret  */
  ESPCHK(0x10987ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc0 @ 0x10987cc0 (116 bytes, 46 insns) */
void f_10987cc0(void) {
  FTRACE(0x10987cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10987cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10987cc3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10987cc7 push esi */
  push32((uint32_t)(ESI));
  /* 10987cc8 push edi */
  push32((uint32_t)(EDI));
  /* 10987cc9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10987ccc push eax */
  push32((uint32_t)(EAX));
  /* 10987ccd call 0x10987640 */
  push32(0x10987cd2u); f_10987640();
  /* 10987cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987cd5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987cd9 jne 0x10987cf4 */
  if (!C.zf) goto L_10987cf4;
  /* 10987cdb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987cdf jne 0x10987cf4 */
  if (!C.zf) goto L_10987cf4;
  /* 10987ce1 mov ecx, dword ptr [0x109afa84] */
  ECX = (r32((uint32_t)(0x109afa84)));
  /* 10987ce7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10987cea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10987cec je 0x10987d2b */
  if (C.zf) goto L_10987d2b;
  /* 10987cee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987cf2 je 0x10987d2b */
  if (C.zf) goto L_10987d2b;
L_10987cf4:;
  /* 10987cf4 push 0x109ace48 */
  push32((uint32_t)(0x109ace48u));
  /* 10987cf9 push 0x109ac814 */
  push32((uint32_t)(0x109ac814u));
  /* 10987cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d06 call 0x10984f60 */
  push32(0x10987d0bu); f_10984f60();
  /* 10987d0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987d0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987d11 jne 0x10987d14 */
  if (!C.zf) goto L_10987d14;
  /* 10987d13 int3  */
  x86_unimpl("int3 @ 0x10987d13");
L_10987d14:;
  /* 10987d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10987d16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987d18 jne 0x10987cf4 */
  if (!C.zf) goto L_10987cf4;
  /* 10987d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d1c call 0x109878e0 */
  push32(0x10987d21u); f_109878e0();
  /* 10987d21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987d24 mov eax, 1 */
  EAX = (0x1u);
  /* 10987d29 jmp 0x10987d2d */
  goto L_10987d2d;
L_10987d2b:;
  /* 10987d2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10987d2d:;
  /* 10987d2d pop edi */
  EDI = (pop32());
  /* 10987d2e pop esi */
  ESI = (pop32());
  /* 10987d2f pop ebx */
  EBX = (pop32());
  /* 10987d30 mov esp, ebp */
  ESP = (EBP);
  /* 10987d32 pop ebp */
  EBP = (pop32());
  /* 10987d33 ret  */
  ESPCHK(0x10987cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d40 @ 0x10987d40 (197 bytes, 79 insns) */
void f_10987d40(void) {
  FTRACE(0x10987d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10987d41 mov ebp, esp */
  EBP = (ESP);
  /* 10987d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10987d44 push ebx */
  push32((uint32_t)(EBX));
  /* 10987d45 push esi */
  push32((uint32_t)(ESI));
  /* 10987d46 push edi */
  push32((uint32_t)(EDI));
  /* 10987d47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987d4b jne 0x10987d52 */
  if (!C.zf) goto L_10987d52;
  /* 10987d4d jmp 0x10987dfe */
  goto L_10987dfe;
L_10987d52:;
  /* 10987d52 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10987d59 jmp 0x10987d64 */
  goto L_10987d64;
L_10987d5b:;
  /* 10987d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987d5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987d61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10987d64:;
  /* 10987d64 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987d68 jge 0x10987dae */
  if ((C.sf==C.of)) goto L_10987dae;
L_10987d6a:;
  /* 10987d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987d6d mov edx, dword ptr [ecx*4 + 0x109afa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afa94)));
  /* 10987d74 push edx */
  push32((uint32_t)(EDX));
  /* 10987d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987d78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987d7b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10987d7f push edx */
  push32((uint32_t)(EDX));
  /* 10987d80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987d86 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10987d8a push edx */
  push32((uint32_t)(EDX));
  /* 10987d8b push 0x109acea4 */
  push32((uint32_t)(0x109acea4u));
  /* 10987d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987d98 call 0x10984f60 */
  push32(0x10987d9du); f_10984f60();
  /* 10987d9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987da0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987da3 jne 0x10987da6 */
  if (!C.zf) goto L_10987da6;
  /* 10987da5 int3  */
  x86_unimpl("int3 @ 0x10987da5");
L_10987da6:;
  /* 10987da6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987daa jne 0x10987d6a */
  if (!C.zf) goto L_10987d6a;
  /* 10987dac jmp 0x10987d5b */
  goto L_10987d5b;
L_10987dae:;
  /* 10987dae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987db1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10987db4 push edx */
  push32((uint32_t)(EDX));
  /* 10987db5 push 0x109ace80 */
  push32((uint32_t)(0x109ace80u));
  /* 10987dba push 0 */
  push32((uint32_t)(0x0u));
  /* 10987dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10987dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10987dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987dc2 call 0x10984f60 */
  push32(0x10987dc7u); f_10984f60();
  /* 10987dc7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987dca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987dcd jne 0x10987dd0 */
  if (!C.zf) goto L_10987dd0;
  /* 10987dcf int3  */
  x86_unimpl("int3 @ 0x10987dcf");
L_10987dd0:;
  /* 10987dd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987dd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987dd4 jne 0x10987dae */
  if (!C.zf) goto L_10987dae;
L_10987dd6:;
  /* 10987dd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10987dd9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10987ddc push edx */
  push32((uint32_t)(EDX));
  /* 10987ddd push 0x109ace60 */
  push32((uint32_t)(0x109ace60u));
  /* 10987de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10987dea call 0x10984f60 */
  push32(0x10987defu); f_10984f60();
  /* 10987def add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987df2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987df5 jne 0x10987df8 */
  if (!C.zf) goto L_10987df8;
  /* 10987df7 int3  */
  x86_unimpl("int3 @ 0x10987df7");
L_10987df8:;
  /* 10987df8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10987dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987dfc jne 0x10987dd6 */
  if (!C.zf) goto L_10987dd6;
L_10987dfe:;
  /* 10987dfe pop edi */
  EDI = (pop32());
  /* 10987dff pop esi */
  ESI = (pop32());
  /* 10987e00 pop ebx */
  EBX = (pop32());
  /* 10987e01 mov esp, ebp */
  ESP = (EBP);
  /* 10987e03 pop ebp */
  EBP = (pop32());
  /* 10987e04 ret  */
  ESPCHK(0x10987d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e10 @ 0x10987e10 (329 bytes, 102 insns) */
void f_10987e10(void) {
  FTRACE(0x10987e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10987e11 mov ebp, esp */
  EBP = (ESP);
  /* 10987e13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987e16 cmp dword ptr [0x109b3170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b3170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987e1d jne 0x10987e24 */
  if (!C.zf) goto L_10987e24;
  /* 10987e1f call 0x1098c750 */
  push32(0x10987e24u); f_1098c750();
L_10987e24:;
  /* 10987e24 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10987e2b mov eax, dword ptr [0x109b163c] */
  EAX = (r32((uint32_t)(0x109b163c)));
  /* 10987e30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10987e33:;
  /* 10987e33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987e36 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10987e39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10987e3b je 0x10987e69 */
  if (C.zf) goto L_10987e69;
  /* 10987e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987e40 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10987e43 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987e46 je 0x10987e51 */
  if (C.zf) goto L_10987e51;
  /* 10987e48 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987e4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987e4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10987e51:;
  /* 10987e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987e54 push eax */
  push32((uint32_t)(EAX));
  /* 10987e55 call 0x10988cd0 */
  push32(0x10987e5au); f_10988cd0();
  /* 10987e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987e5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987e60 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10987e64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10987e67 jmp 0x10987e33 */
  goto L_10987e33;
L_10987e69:;
  /* 10987e69 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10987e6b push 0x109acec4 */
  push32((uint32_t)(0x109acec4u));
  /* 10987e70 push 2 */
  push32((uint32_t)(0x2u));
  /* 10987e72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10987e75 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10987e7c push ecx */
  push32((uint32_t)(ECX));
  /* 10987e7d call 0x10985ea0 */
  push32(0x10987e82u); f_10985ea0();
  /* 10987e82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987e85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10987e88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10987e8b mov dword ptr [0x109b1670], edx */
  w32((uint32_t)(0x109b1670), (EDX));
  /* 10987e91 cmp dword ptr [0x109b1670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987e98 jne 0x10987ea4 */
  if (!C.zf) goto L_10987ea4;
  /* 10987e9a push 9 */
  push32((uint32_t)(0x9u));
  /* 10987e9c call 0x10984e10 */
  push32(0x10987ea1u); f_10984e10();
  /* 10987ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987ea4:;
  /* 10987ea4 mov eax, dword ptr [0x109b163c] */
  EAX = (r32((uint32_t)(0x109b163c)));
  /* 10987ea9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10987eac jmp 0x10987eb7 */
  goto L_10987eb7;
L_10987eae:;
  /* 10987eae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987eb1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987eb4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10987eb7:;
  /* 10987eb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987eba movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10987ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10987ebf je 0x10987f27 */
  if (C.zf) goto L_10987f27;
  /* 10987ec1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 10987ec5 call 0x10988cd0 */
  push32(0x10987ecau); f_10988cd0();
  /* 10987eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987ecd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987ed0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10987ed3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987ed6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10987ed9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987edc je 0x10987f25 */
  if (C.zf) goto L_10987f25;
  /* 10987ede push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10987ee0 push 0x109acec4 */
  push32((uint32_t)(0x109acec4u));
  /* 10987ee5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10987ee7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10987eea push ecx */
  push32((uint32_t)(ECX));
  /* 10987eeb call 0x10985ea0 */
  push32(0x10987ef0u); f_10985ea0();
  /* 10987ef0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987ef3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10987ef6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10987ef8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10987efb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987efe jne 0x10987f0a */
  if (!C.zf) goto L_10987f0a;
  /* 10987f00 push 9 */
  push32((uint32_t)(0x9u));
  /* 10987f02 call 0x10984e10 */
  push32(0x10987f07u); f_10984e10();
  /* 10987f07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987f0a:;
  /* 10987f0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987f0d push ecx */
  push32((uint32_t)(ECX));
  /* 10987f0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10987f11 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10987f13 push eax */
  push32((uint32_t)(EAX));
  /* 10987f14 call 0x10988e50 */
  push32(0x10987f19u); f_10988e50();
  /* 10987f19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987f1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10987f1f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10987f22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10987f25:;
  /* 10987f25 jmp 0x10987eae */
  goto L_10987eae;
L_10987f27:;
  /* 10987f27 push 2 */
  push32((uint32_t)(0x2u));
  /* 10987f29 mov edx, dword ptr [0x109b163c] */
  EDX = (r32((uint32_t)(0x109b163c)));
  /* 10987f2f push edx */
  push32((uint32_t)(EDX));
  /* 10987f30 call 0x10986930 */
  push32(0x10987f35u); f_10986930();
  /* 10987f35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987f38 mov dword ptr [0x109b163c], 0 */
  w32((uint32_t)(0x109b163c), (0x0u));
  /* 10987f42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10987f45 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10987f4b mov dword ptr [0x109b3160], 1 */
  w32((uint32_t)(0x109b3160), (0x1u));
  /* 10987f55 mov esp, ebp */
  ESP = (EBP);
  /* 10987f57 pop ebp */
  EBP = (pop32());
  /* 10987f58 ret  */
  ESPCHK(0x10987e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f60 @ 0x10987f60 (216 bytes, 69 insns) */
void f_10987f60(void) {
  FTRACE(0x10987f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10987f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10987f61 mov ebp, esp */
  EBP = (ESP);
  /* 10987f63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10987f66 cmp dword ptr [0x109b3170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b3170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987f6d jne 0x10987f74 */
  if (!C.zf) goto L_10987f74;
  /* 10987f6f call 0x1098c750 */
  push32(0x10987f74u); f_1098c750();
L_10987f74:;
  /* 10987f74 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10987f79 push 0x109b16ac */
  push32((uint32_t)(0x109b16acu));
  /* 10987f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10987f80 call dword ptr [0x109b4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4374))), 0x10987f86u);
  /* 10987f86 mov dword ptr [0x109b1680], 0x109b16ac */
  w32((uint32_t)(0x109b1680), (0x109b16acu));
  /* 10987f90 mov eax, dword ptr [0x109b318c] */
  EAX = (r32((uint32_t)(0x109b318c)));
  /* 10987f95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10987f98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10987f9a jne 0x10987fa7 */
  if (!C.zf) goto L_10987fa7;
  /* 10987f9c mov edx, dword ptr [0x109b1680] */
  EDX = (r32((uint32_t)(0x109b1680)));
  /* 10987fa2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10987fa5 jmp 0x10987faf */
  goto L_10987faf;
L_10987fa7:;
  /* 10987fa7 mov eax, dword ptr [0x109b318c] */
  EAX = (r32((uint32_t)(0x109b318c)));
  /* 10987fac mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10987faf:;
  /* 10987faf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10987fb2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10987fb5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10987fb8 push edx */
  push32((uint32_t)(EDX));
  /* 10987fb9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10987fbc push eax */
  push32((uint32_t)(EAX));
  /* 10987fbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10987fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10987fc1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10987fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10987fc5 call 0x10988040 */
  push32(0x10987fcau); f_10988040();
  /* 10987fca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987fcd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10987fd2 push 0x109aced0 */
  push32((uint32_t)(0x109aced0u));
  /* 10987fd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10987fd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10987fdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10987fdf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10987fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 10987fe3 call 0x10985ea0 */
  push32(0x10987fe8u); f_10985ea0();
  /* 10987fe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10987feb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10987fee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10987ff2 jne 0x10987ffe */
  if (!C.zf) goto L_10987ffe;
  /* 10987ff4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10987ff6 call 0x10984e10 */
  push32(0x10987ffbu); f_10984e10();
  /* 10987ffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10987ffe:;
  /* 10987ffe lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10988001 push edx */
  push32((uint32_t)(EDX));
  /* 10988002 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10988005 push eax */
  push32((uint32_t)(EAX));
  /* 10988006 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988009 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098800c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1098800f push eax */
  push32((uint32_t)(EAX));
  /* 10988010 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988013 push ecx */
  push32((uint32_t)(ECX));
  /* 10988014 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10988017 push edx */
  push32((uint32_t)(EDX));
  /* 10988018 call 0x10988040 */
  push32(0x1098801du); f_10988040();
  /* 1098801d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988020 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988023 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988026 mov dword ptr [0x109b1664], eax */
  w32((uint32_t)(0x109b1664), (EAX));
  /* 1098802b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098802e mov dword ptr [0x109b1668], ecx */
  w32((uint32_t)(0x109b1668), (ECX));
  /* 10988034 mov esp, ebp */
  ESP = (EBP);
  /* 10988036 pop ebp */
  EBP = (pop32());
  /* 10988037 ret  */
  ESPCHK(0x10987f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x10988040 (1060 bytes, 360 insns) */
void f_10988040(void) {
  FTRACE(0x10988040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988040 push ebp */
  push32((uint32_t)(EBP));
  /* 10988041 mov ebp, esp */
  EBP = (ESP);
  /* 10988043 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988046 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10988049 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098804f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988052 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10988058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098805b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098805e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988062 je 0x10988075 */
  if (C.zf) goto L_10988075;
  /* 10988064 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988067 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098806a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1098806c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098806f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988072 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10988075:;
  /* 10988075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988078 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098807b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098807e jne 0x1098814d */
  if (!C.zf) goto L_1098814d;
L_10988084:;
  /* 10988084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988087 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098808a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098808d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988090 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10988093 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988096 je 0x10988112 */
  if (C.zf) goto L_10988112;
  /* 10988098 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098809b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1098809e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109880a0 je 0x10988112 */
  if (C.zf) goto L_10988112;
  /* 109880a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109880a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109880a7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109880a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109880ab mov al, byte ptr [edx + 0x109b2ec1] */
  AL = (r8((uint32_t)(EDX + 0x109b2ec1)));
  /* 109880b1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 109880b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109880b6 je 0x109880e7 */
  if (C.zf) goto L_109880e7;
  /* 109880b8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109880bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109880bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109880c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109880c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 109880c5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109880c9 je 0x109880e7 */
  if (C.zf) goto L_109880e7;
  /* 109880cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109880ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109880d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109880d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109880d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109880d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109880db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109880de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109880e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109880e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_109880e7:;
  /* 109880e7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109880ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109880ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109880ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109880f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109880f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109880f8 je 0x1098810d */
  if (C.zf) goto L_1098810d;
  /* 109880fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109880fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988100 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988102 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10988104 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988107 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098810a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1098810d:;
  /* 1098810d jmp 0x10988084 */
  goto L_10988084;
L_10988112:;
  /* 10988112 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10988115 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10988117 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098811a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098811d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1098811f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988123 je 0x10988134 */
  if (C.zf) goto L_10988134;
  /* 10988125 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988128 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1098812b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098812e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988131 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10988134:;
  /* 10988134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988137 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098813a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098813d jne 0x10988148 */
  if (!C.zf) goto L_10988148;
  /* 1098813f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988142 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988145 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10988148:;
  /* 10988148 jmp 0x1098821c */
  goto L_1098821c;
L_1098814d:;
  /* 1098814d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10988150 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10988152 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988155 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10988158 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1098815a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098815e je 0x10988173 */
  if (C.zf) goto L_10988173;
  /* 10988160 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988166 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988168 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1098816a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098816d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988170 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10988173:;
  /* 10988173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988176 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988178 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1098817b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098817e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988181 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10988184 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988187 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1098818d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098818f mov dl, byte ptr [ecx + 0x109b2ec1] */
  DL = (r8((uint32_t)(ECX + 0x109b2ec1)));
  /* 10988195 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10988198 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1098819a je 0x109881cb */
  if (C.zf) goto L_109881cb;
  /* 1098819c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098819f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109881a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109881a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109881a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109881a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109881ad je 0x109881c2 */
  if (C.zf) goto L_109881c2;
  /* 109881af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109881b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109881b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109881b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 109881b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109881bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109881bf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_109881c2:;
  /* 109881c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109881c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109881c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_109881cb:;
  /* 109881cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109881ce and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 109881d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109881d7 je 0x109881f7 */
  if (C.zf) goto L_109881f7;
  /* 109881d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109881dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109881e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109881e3 je 0x109881f7 */
  if (C.zf) goto L_109881f7;
  /* 109881e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109881e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 109881ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109881f1 jne 0x1098814d */
  if (!C.zf) goto L_1098814d;
L_109881f7:;
  /* 109881f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 109881fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10988200 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10988202 jne 0x1098820f */
  if (!C.zf) goto L_1098820f;
  /* 10988204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988207 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098820a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098820d jmp 0x1098821c */
  goto L_1098821c;
L_1098820f:;
  /* 1098820f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988213 je 0x1098821c */
  if (C.zf) goto L_1098821c;
  /* 10988215 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988218 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1098821c:;
  /* 1098821c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10988223:;
  /* 10988223 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988226 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10988229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1098822b je 0x1098824e */
  if (C.zf) goto L_1098824e;
L_1098822d:;
  /* 1098822d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988230 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10988233 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988236 je 0x10988243 */
  if (C.zf) goto L_10988243;
  /* 10988238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098823b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098823e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988241 jne 0x1098824e */
  if (!C.zf) goto L_1098824e;
L_10988243:;
  /* 10988243 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988246 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988249 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1098824c jmp 0x1098822d */
  goto L_1098822d;
L_1098824e:;
  /* 1098824e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988251 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10988254 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10988256 jne 0x1098825d */
  if (!C.zf) goto L_1098825d;
  /* 10988258 jmp 0x1098843b */
  goto L_1098843b;
L_1098825d:;
  /* 1098825d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988261 je 0x10988274 */
  if (C.zf) goto L_10988274;
  /* 10988263 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988269 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1098826b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098826e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988271 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10988274:;
  /* 10988274 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988277 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10988279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098827c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098827f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10988281:;
  /* 10988281 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10988288 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1098828f:;
  /* 1098828f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988292 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10988295 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988298 jne 0x109882ae */
  if (!C.zf) goto L_109882ae;
  /* 1098829a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098829d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109882a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109882a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109882a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109882a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 109882ac jmp 0x1098828f */
  goto L_1098828f;
L_109882ae:;
  /* 109882ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109882b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 109882b4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109882b7 jne 0x1098830a */
  if (!C.zf) goto L_1098830a;
  /* 109882b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109882bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109882be mov ecx, 2 */
  ECX = (0x2u);
  /* 109882c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 109882c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109882c7 jne 0x10988302 */
  if (!C.zf) goto L_10988302;
  /* 109882c9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109882cd je 0x109882ef */
  if (C.zf) goto L_109882ef;
  /* 109882cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109882d2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 109882d6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109882d9 jne 0x109882e6 */
  if (!C.zf) goto L_109882e6;
  /* 109882db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109882de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109882e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 109882e4 jmp 0x109882ed */
  goto L_109882ed;
L_109882e6:;
  /* 109882e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109882ed:;
  /* 109882ed jmp 0x109882f6 */
  goto L_109882f6;
L_109882ef:;
  /* 109882ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_109882f6:;
  /* 109882f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109882f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109882fc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 109882ff mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10988302:;
  /* 10988302 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10988305 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10988307 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1098830a:;
  /* 1098830a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098830d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10988310 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988313 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10988316 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10988318 je 0x1098833e */
  if (C.zf) goto L_1098833e;
  /* 1098831a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098831e je 0x1098832f */
  if (C.zf) goto L_1098832f;
  /* 10988320 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988323 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10988326 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988329 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098832c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1098832f:;
  /* 1098832f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10988332 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10988334 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988337 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098833a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1098833c jmp 0x1098830a */
  goto L_1098830a;
L_1098833e:;
  /* 1098833e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988341 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10988344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10988346 je 0x10988364 */
  if (C.zf) goto L_10988364;
  /* 10988348 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098834c jne 0x10988369 */
  if (!C.zf) goto L_10988369;
  /* 1098834e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988351 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10988354 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988357 je 0x10988364 */
  if (C.zf) goto L_10988364;
  /* 10988359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098835c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1098835f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988362 jne 0x10988369 */
  if (!C.zf) goto L_10988369;
L_10988364:;
  /* 10988364 jmp 0x10988414 */
  goto L_10988414;
L_10988369:;
  /* 10988369 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098836d je 0x10988406 */
  if (C.zf) goto L_10988406;
  /* 10988373 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988377 je 0x109883cd */
  if (C.zf) goto L_109883cd;
  /* 10988379 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098837c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098837e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10988380 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10988382 mov cl, byte ptr [eax + 0x109b2ec1] */
  CL = (r8((uint32_t)(EAX + 0x109b2ec1)));
  /* 10988388 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1098838b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1098838d je 0x109883b8 */
  if (C.zf) goto L_109883b8;
  /* 1098838f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988392 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988395 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10988397 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10988399 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098839c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098839f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 109883a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109883a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109883a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109883ab mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109883ae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109883b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109883b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109883b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_109883b8:;
  /* 109883b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109883bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109883be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109883c0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 109883c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109883c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109883c8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 109883cb jmp 0x109883f9 */
  goto L_109883f9;
L_109883cd:;
  /* 109883cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109883d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109883d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 109883d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 109883d6 mov cl, byte ptr [eax + 0x109b2ec1] */
  CL = (r8((uint32_t)(EAX + 0x109b2ec1)));
  /* 109883dc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 109883df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109883e1 je 0x109883f9 */
  if (C.zf) goto L_109883f9;
  /* 109883e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109883e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109883e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109883ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109883ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109883f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109883f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 109883f7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_109883f9:;
  /* 109883f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 109883fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109883fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988401 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10988404 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10988406:;
  /* 10988406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098840c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098840f jmp 0x10988281 */
  goto L_10988281;
L_10988414:;
  /* 10988414 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988418 je 0x10988429 */
  if (C.zf) goto L_10988429;
  /* 1098841a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1098841d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10988420 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988423 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988426 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10988429:;
  /* 10988429 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1098842c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098842e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988431 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10988434 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10988436 jmp 0x10988223 */
  goto L_10988223;
L_1098843b:;
  /* 1098843b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098843f je 0x10988453 */
  if (C.zf) goto L_10988453;
  /* 10988441 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988444 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1098844a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098844d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988450 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10988453:;
  /* 10988453 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988456 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10988458 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098845b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1098845e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10988460 mov esp, ebp */
  ESP = (EBP);
  /* 10988462 pop ebp */
  EBP = (pop32());
  /* 10988463 ret  */
  ESPCHK(0x10988040u, _esp0);
  ESP += 4; return;
}

/* FUN_10008470 @ 0x10988470 (537 bytes, 173 insns) */
void f_10988470(void) {
  FTRACE(0x10988470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988470 push ebp */
  push32((uint32_t)(EBP));
  /* 10988471 mov ebp, esp */
  EBP = (ESP);
  /* 10988473 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988476 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1098847d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10988484 cmp dword ptr [0x109b17b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b17b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098848b jne 0x109884ca */
  if (!C.zf) goto L_109884ca;
  /* 1098848d call dword ptr [0x109b4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4388))), 0x10988493u);
  /* 10988493 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10988496 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098849a je 0x109884a8 */
  if (C.zf) goto L_109884a8;
  /* 1098849c mov dword ptr [0x109b17b0], 1 */
  w32((uint32_t)(0x109b17b0), (0x1u));
  /* 109884a6 jmp 0x109884ca */
  goto L_109884ca;
L_109884a8:;
  /* 109884a8 call dword ptr [0x109b43c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c8))), 0x109884aeu);
  /* 109884ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109884b1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109884b5 je 0x109884c3 */
  if (C.zf) goto L_109884c3;
  /* 109884b7 mov dword ptr [0x109b17b0], 2 */
  w32((uint32_t)(0x109b17b0), (0x2u));
  /* 109884c1 jmp 0x109884ca */
  goto L_109884ca;
L_109884c3:;
  /* 109884c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109884c5 jmp 0x10988685 */
  goto L_10988685;
L_109884ca:;
  /* 109884ca cmp dword ptr [0x109b17b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b17b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109884d1 jne 0x109885ce */
  if (!C.zf) goto L_109885ce;
  /* 109884d7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109884db jne 0x109884f3 */
  if (!C.zf) goto L_109884f3;
  /* 109884dd call dword ptr [0x109b4388] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4388))), 0x109884e3u);
  /* 109884e3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 109884e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109884ea jne 0x109884f3 */
  if (!C.zf) goto L_109884f3;
  /* 109884ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109884ee jmp 0x10988685 */
  goto L_10988685;
L_109884f3:;
  /* 109884f3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109884f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109884f9:;
  /* 109884f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109884fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109884fe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10988501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10988503 je 0x10988525 */
  if (C.zf) goto L_10988525;
  /* 10988505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988508 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098850b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098850e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988511 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10988513 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10988516 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10988518 jne 0x10988523 */
  if (!C.zf) goto L_10988523;
  /* 1098851a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098851d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988520 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10988523:;
  /* 10988523 jmp 0x109884f9 */
  goto L_109884f9;
L_10988525:;
  /* 10988525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988528 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098852b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1098852d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988530 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10988533 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988535 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988537 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988539 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098853b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098853e push edx */
  push32((uint32_t)(EDX));
  /* 1098853f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10988542 push eax */
  push32((uint32_t)(EAX));
  /* 10988543 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988547 call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x1098854du);
  /* 1098854d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10988550 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988554 je 0x10988574 */
  if (C.zf) goto L_10988574;
  /* 10988556 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10988558 push 0x109acedc */
  push32((uint32_t)(0x109acedcu));
  /* 1098855d push 2 */
  push32((uint32_t)(0x2u));
  /* 1098855f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10988562 push ecx */
  push32((uint32_t)(ECX));
  /* 10988563 call 0x10985ea0 */
  push32(0x10988568u); f_10985ea0();
  /* 10988568 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098856b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1098856e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988572 jne 0x10988585 */
  if (!C.zf) goto L_10988585;
L_10988574:;
  /* 10988574 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10988577 push edx */
  push32((uint32_t)(EDX));
  /* 10988578 call dword ptr [0x109b43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c0))), 0x1098857eu);
  /* 1098857e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10988580 jmp 0x10988685 */
  goto L_10988685;
L_10988585:;
  /* 10988585 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988587 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988589 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1098858c push eax */
  push32((uint32_t)(EAX));
  /* 1098858d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10988590 push ecx */
  push32((uint32_t)(ECX));
  /* 10988591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988594 push edx */
  push32((uint32_t)(EDX));
  /* 10988595 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10988598 push eax */
  push32((uint32_t)(EAX));
  /* 10988599 push 0 */
  push32((uint32_t)(0x0u));
  /* 1098859b push 0 */
  push32((uint32_t)(0x0u));
  /* 1098859d call dword ptr [0x109b43c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c4))), 0x109885a3u);
  /* 109885a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109885a5 jne 0x109885bc */
  if (!C.zf) goto L_109885bc;
  /* 109885a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109885a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109885ac push ecx */
  push32((uint32_t)(ECX));
  /* 109885ad call 0x10986930 */
  push32(0x109885b2u); f_10986930();
  /* 109885b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109885b5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_109885bc:;
  /* 109885bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 109885bf push edx */
  push32((uint32_t)(EDX));
  /* 109885c0 call dword ptr [0x109b43c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c0))), 0x109885c6u);
  /* 109885c6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109885c9 jmp 0x10988685 */
  goto L_10988685;
L_109885ce:;
  /* 109885ce cmp dword ptr [0x109b17b0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x109b17b0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109885d5 jne 0x10988683 */
  if (!C.zf) goto L_10988683;
  /* 109885db cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109885df jne 0x109885f7 */
  if (!C.zf) goto L_109885f7;
  /* 109885e1 call dword ptr [0x109b43c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43c8))), 0x109885e7u);
  /* 109885e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 109885ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109885ee jne 0x109885f7 */
  if (!C.zf) goto L_109885f7;
  /* 109885f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109885f2 jmp 0x10988685 */
  goto L_10988685;
L_109885f7:;
  /* 109885f7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109885fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_109885fd:;
  /* 109885fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988600 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10988603 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10988605 je 0x10988625 */
  if (C.zf) goto L_10988625;
  /* 10988607 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098860a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098860d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10988610 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988613 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10988616 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10988618 jne 0x10988623 */
  if (!C.zf) goto L_10988623;
  /* 1098861a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098861d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988620 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10988623:;
  /* 10988623 jmp 0x109885fd */
  goto L_109885fd;
L_10988625:;
  /* 10988625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988628 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098862b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098862e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10988631 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10988636 push 0x109acedc */
  push32((uint32_t)(0x109acedcu));
  /* 1098863b push 2 */
  push32((uint32_t)(0x2u));
  /* 1098863d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10988640 push edx */
  push32((uint32_t)(EDX));
  /* 10988641 call 0x10985ea0 */
  push32(0x10988646u); f_10985ea0();
  /* 10988646 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988649 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1098864c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988650 jne 0x10988660 */
  if (!C.zf) goto L_10988660;
  /* 10988652 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10988655 push eax */
  push32((uint32_t)(EAX));
  /* 10988656 call dword ptr [0x109b43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43bc))), 0x1098865cu);
  /* 1098865c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098865e jmp 0x10988685 */
  goto L_10988685;
L_10988660:;
  /* 10988660 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10988663 push ecx */
  push32((uint32_t)(ECX));
  /* 10988664 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10988667 push edx */
  push32((uint32_t)(EDX));
  /* 10988668 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098866b push eax */
  push32((uint32_t)(EAX));
  /* 1098866c call 0x1098c780 */
  push32(0x10988671u); f_1098c780();
  /* 10988671 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988674 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10988677 push ecx */
  push32((uint32_t)(ECX));
  /* 10988678 call dword ptr [0x109b43bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43bc))), 0x1098867eu);
  /* 1098867e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988681 jmp 0x10988685 */
  goto L_10988685;
L_10988683:;
  /* 10988683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10988685:;
  /* 10988685 mov esp, ebp */
  ESP = (EBP);
  /* 10988687 pop ebp */
  EBP = (pop32());
  /* 10988688 ret  */
  ESPCHK(0x10988470u, _esp0);
  ESP += 4; return;
}

/* FUN_10008690 @ 0x10988690 (77 bytes, 25 insns) */
void f_10988690(void) {
  FTRACE(0x10988690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988690 push ebp */
  push32((uint32_t)(EBP));
  /* 10988691 mov ebp, esp */
  EBP = (ESP);
  /* 10988693 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988695 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1098869a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098869c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109886a0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 109886a3 push eax */
  push32((uint32_t)(EAX));
  /* 109886a4 call dword ptr [0x109b4344] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4344))), 0x109886aau);
  /* 109886aa mov dword ptr [0x109b2fec], eax */
  w32((uint32_t)(0x109b2fec), (EAX));
  /* 109886af cmp dword ptr [0x109b2fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b2fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109886b6 jne 0x109886bc */
  if (!C.zf) goto L_109886bc;
  /* 109886b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109886ba jmp 0x109886db */
  goto L_109886db;
L_109886bc:;
  /* 109886bc call 0x1098a140 */
  push32(0x109886c1u); f_1098a140();
  /* 109886c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109886c3 jne 0x109886d6 */
  if (!C.zf) goto L_109886d6;
  /* 109886c5 mov ecx, dword ptr [0x109b2fec] */
  ECX = (r32((uint32_t)(0x109b2fec)));
  /* 109886cb push ecx */
  push32((uint32_t)(ECX));
  /* 109886cc call dword ptr [0x109b4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4348))), 0x109886d2u);
  /* 109886d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109886d4 jmp 0x109886db */
  goto L_109886db;
L_109886d6:;
  /* 109886d6 mov eax, 1 */
  EAX = (0x1u);
L_109886db:;
  /* 109886db pop ebp */
  EBP = (pop32());
  /* 109886dc ret  */
  ESPCHK(0x10988690u, _esp0);
  ESP += 4; return;
}

/* FUN_100086e0 @ 0x109886e0 (156 bytes, 48 insns) */
void f_109886e0(void) {
  FTRACE(0x109886e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109886e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109886e1 mov ebp, esp */
  EBP = (ESP);
  /* 109886e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109886e6 mov eax, dword ptr [0x109b2fe8] */
  EAX = (r32((uint32_t)(0x109b2fe8)));
  /* 109886eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 109886ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 109886f5 jmp 0x10988700 */
  goto L_10988700;
L_109886f7:;
  /* 109886f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109886fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109886fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10988700:;
  /* 10988700 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988703 cmp edx, dword ptr [0x109b2fe4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109b2fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988709 jge 0x10988756 */
  if ((C.sf==C.of)) goto L_10988756;
  /* 1098870b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10988710 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10988715 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988718 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1098871b push ecx */
  push32((uint32_t)(ECX));
  /* 1098871c call dword ptr [0x109b433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b433c))), 0x10988722u);
  /* 10988722 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10988727 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988729 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098872c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1098872f push eax */
  push32((uint32_t)(EAX));
  /* 10988730 call dword ptr [0x109b433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b433c))), 0x10988736u);
  /* 10988736 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988739 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1098873c push edx */
  push32((uint32_t)(EDX));
  /* 1098873d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098873f mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 10988744 push eax */
  push32((uint32_t)(EAX));
  /* 10988745 call dword ptr [0x109b4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4340))), 0x1098874bu);
  /* 1098874b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098874e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988751 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10988754 jmp 0x109886f7 */
  goto L_109886f7;
L_10988756:;
  /* 10988756 mov edx, dword ptr [0x109b2fe8] */
  EDX = (r32((uint32_t)(0x109b2fe8)));
  /* 1098875c push edx */
  push32((uint32_t)(EDX));
  /* 1098875d push 0 */
  push32((uint32_t)(0x0u));
  /* 1098875f mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 10988764 push eax */
  push32((uint32_t)(EAX));
  /* 10988765 call dword ptr [0x109b4340] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4340))), 0x1098876bu);
  /* 1098876b mov ecx, dword ptr [0x109b2fec] */
  ECX = (r32((uint32_t)(0x109b2fec)));
  /* 10988771 push ecx */
  push32((uint32_t)(ECX));
  /* 10988772 call dword ptr [0x109b4348] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4348))), 0x10988778u);
  /* 10988778 mov esp, ebp */
  ESP = (EBP);
  /* 1098877a pop ebp */
  EBP = (pop32());
  /* 1098877b ret  */
  ESPCHK(0x109886e0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10988780 (73 bytes, 19 insns) */
void f_10988780(void) {
  FTRACE(0x10988780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988780 push ebp */
  push32((uint32_t)(EBP));
  /* 10988781 mov ebp, esp */
  EBP = (ESP);
  /* 10988783 cmp dword ptr [0x109b1644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098878a je 0x1098879e */
  if (C.zf) goto L_1098879e;
  /* 1098878c cmp dword ptr [0x109b1644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988793 jne 0x109887c7 */
  if (!C.zf) goto L_109887c7;
  /* 10988795 cmp dword ptr [0x109b1648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098879c jne 0x109887c7 */
  if (!C.zf) goto L_109887c7;
L_1098879e:;
  /* 1098879e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 109887a3 call 0x109887d0 */
  push32(0x109887a8u); f_109887d0();
  /* 109887a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109887ab cmp dword ptr [0x109b17b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b17b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109887b2 je 0x109887ba */
  if (C.zf) goto L_109887ba;
  /* 109887b4 call dword ptr [0x109b17b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b17b4))), 0x109887bau);
L_109887ba:;
  /* 109887ba push 0xff */
  push32((uint32_t)(0xffu));
  /* 109887bf call 0x109887d0 */
  push32(0x109887c4u); f_109887d0();
  /* 109887c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109887c7:;
  /* 109887c7 pop ebp */
  EBP = (pop32());
  /* 109887c8 ret  */
  ESPCHK(0x10988780u, _esp0);
  ESP += 4; return;
}

/* FUN_100087d0 @ 0x109887d0 (447 bytes, 131 insns) */
void f_109887d0(void) {
  FTRACE(0x109887d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109887d0 push ebp */
  push32((uint32_t)(EBP));
  /* 109887d1 mov ebp, esp */
  EBP = (ESP);
  /* 109887d3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109887d9 push ebx */
  push32((uint32_t)(EBX));
  /* 109887da push esi */
  push32((uint32_t)(ESI));
  /* 109887db push edi */
  push32((uint32_t)(EDI));
  /* 109887dc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 109887e3 jmp 0x109887ee */
  goto L_109887ee;
L_109887e5:;
  /* 109887e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109887e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109887eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109887ee:;
  /* 109887ee cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109887f2 jae 0x10988807 */
  if (!C.cf) goto L_10988807;
  /* 109887f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109887f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109887fa cmp edx, dword ptr [ecx*8 + 0x109afab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x109afab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988801 jne 0x10988805 */
  if (!C.zf) goto L_10988805;
  /* 10988803 jmp 0x10988807 */
  goto L_10988807;
L_10988805:;
  /* 10988805 jmp 0x109887e5 */
  goto L_109887e5;
L_10988807:;
  /* 10988807 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098880a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1098880d cmp ecx, dword ptr [eax*8 + 0x109afab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x109afab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988814 jne 0x10988988 */
  if (!C.zf) goto L_10988988;
  /* 1098881a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988821 je 0x10988844 */
  if (C.zf) goto L_10988844;
  /* 10988823 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988826 mov eax, dword ptr [edx*8 + 0x109afab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x109afab4)));
  /* 1098882d push eax */
  push32((uint32_t)(EAX));
  /* 1098882e push 0 */
  push32((uint32_t)(0x0u));
  /* 10988830 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988832 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988834 push 1 */
  push32((uint32_t)(0x1u));
  /* 10988836 call 0x10984f60 */
  push32(0x1098883bu); f_10984f60();
  /* 1098883b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098883e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988841 jne 0x10988844 */
  if (!C.zf) goto L_10988844;
  /* 10988843 int3  */
  x86_unimpl("int3 @ 0x10988843");
L_10988844:;
  /* 10988844 cmp dword ptr [0x109b1644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098884b je 0x1098885f */
  if (C.zf) goto L_1098885f;
  /* 1098884d cmp dword ptr [0x109b1644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b1644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988854 jne 0x10988898 */
  if (!C.zf) goto L_10988898;
  /* 10988856 cmp dword ptr [0x109b1648], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109b1648))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098885d jne 0x10988898 */
  if (!C.zf) goto L_10988898;
L_1098885f:;
  /* 1098885f push 0 */
  push32((uint32_t)(0x0u));
  /* 10988861 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10988864 push ecx */
  push32((uint32_t)(ECX));
  /* 10988865 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988868 mov eax, dword ptr [edx*8 + 0x109afab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x109afab4)));
  /* 1098886f push eax */
  push32((uint32_t)(EAX));
  /* 10988870 call 0x10988cd0 */
  push32(0x10988875u); f_10988cd0();
  /* 10988875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988878 push eax */
  push32((uint32_t)(EAX));
  /* 10988879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098887c mov edx, dword ptr [ecx*8 + 0x109afab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x109afab4)));
  /* 10988883 push edx */
  push32((uint32_t)(EDX));
  /* 10988884 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10988886 call dword ptr [0x109b4358] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4358))), 0x1098888cu);
  /* 1098888c push eax */
  push32((uint32_t)(EAX));
  /* 1098888d call dword ptr [0x109b435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b435c))), 0x10988893u);
  /* 10988893 jmp 0x10988988 */
  goto L_10988988;
L_10988898:;
  /* 10988898 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098889f je 0x10988988 */
  if (C.zf) goto L_10988988;
  /* 109888a5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 109888aa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 109888b0 push eax */
  push32((uint32_t)(EAX));
  /* 109888b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109888b3 call dword ptr [0x109b4374] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4374))), 0x109888b9u);
  /* 109888b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109888bb jne 0x109888d1 */
  if (!C.zf) goto L_109888d1;
  /* 109888bd push 0x109ac744 */
  push32((uint32_t)(0x109ac744u));
  /* 109888c2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 109888c8 push ecx */
  push32((uint32_t)(ECX));
  /* 109888c9 call 0x10988e50 */
  push32(0x109888ceu); f_10988e50();
  /* 109888ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109888d1:;
  /* 109888d1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 109888d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 109888da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109888dd push eax */
  push32((uint32_t)(EAX));
  /* 109888de call 0x10988cd0 */
  push32(0x109888e3u); f_10988cd0();
  /* 109888e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109888e6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109888e9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109888ec jbe 0x1098891a */
  if ((C.cf||C.zf)) goto L_1098891a;
  /* 109888ee lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 109888f4 push ecx */
  push32((uint32_t)(ECX));
  /* 109888f5 call 0x10988cd0 */
  push32(0x109888fau); f_10988cd0();
  /* 109888fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109888fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988900 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10988904 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10988907 push 3 */
  push32((uint32_t)(0x3u));
  /* 10988909 push 0x109ac740 */
  push32((uint32_t)(0x109ac740u));
  /* 1098890e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988911 push ecx */
  push32((uint32_t)(ECX));
  /* 10988912 call 0x109896c0 */
  push32(0x10988917u); f_109896c0();
  /* 10988917 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098891a:;
  /* 1098891a push 0x109ad198 */
  push32((uint32_t)(0x109ad198u));
  /* 1098891f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10988925 push edx */
  push32((uint32_t)(EDX));
  /* 10988926 call 0x10988e50 */
  push32(0x1098892bu); f_10988e50();
  /* 1098892b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098892e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988931 push eax */
  push32((uint32_t)(EAX));
  /* 10988932 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10988938 push ecx */
  push32((uint32_t)(ECX));
  /* 10988939 call 0x10988e60 */
  push32(0x1098893eu); f_10988e60();
  /* 1098893e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988941 push 0x109ac6b8 */
  push32((uint32_t)(0x109ac6b8u));
  /* 10988946 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1098894c push edx */
  push32((uint32_t)(EDX));
  /* 1098894d call 0x10988e60 */
  push32(0x10988952u); f_10988e60();
  /* 10988952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988955 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988958 mov ecx, dword ptr [eax*8 + 0x109afab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x109afab4)));
  /* 1098895f push ecx */
  push32((uint32_t)(ECX));
  /* 10988960 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10988966 push edx */
  push32((uint32_t)(EDX));
  /* 10988967 call 0x10988e60 */
  push32(0x1098896cu); f_10988e60();
  /* 1098896c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098896f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10988974 push 0x109ad170 */
  push32((uint32_t)(0x109ad170u));
  /* 10988979 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1098897f push eax */
  push32((uint32_t)(EAX));
  /* 10988980 call 0x10989600 */
  push32(0x10988985u); f_10989600();
  /* 10988985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10988988:;
  /* 10988988 pop edi */
  EDI = (pop32());
  /* 10988989 pop esi */
  ESI = (pop32());
  /* 1098898a pop ebx */
  EBX = (pop32());
  /* 1098898b mov esp, ebp */
  ESP = (EBP);
  /* 1098898d pop ebp */
  EBP = (pop32());
  /* 1098898e ret  */
  ESPCHK(0x109887d0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10988990 (80 bytes, 27 insns) */
void f_10988990(void) {
  FTRACE(0x10988990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988990 push ebp */
  push32((uint32_t)(EBP));
  /* 10988991 mov ebp, esp */
  EBP = (ESP);
  /* 10988993 push ecx */
  push32((uint32_t)(ECX));
  /* 10988994 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098899b jmp 0x109889a6 */
  goto L_109889a6;
L_1098899d:;
  /* 1098899d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109889a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109889a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109889a6:;
  /* 109889a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109889aa jae 0x109889bf */
  if (!C.cf) goto L_109889bf;
  /* 109889ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109889af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109889b2 cmp edx, dword ptr [ecx*8 + 0x109afab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x109afab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109889b9 jne 0x109889bd */
  if (!C.zf) goto L_109889bd;
  /* 109889bb jmp 0x109889bf */
  goto L_109889bf;
L_109889bd:;
  /* 109889bd jmp 0x1098899d */
  goto L_1098899d;
L_109889bf:;
  /* 109889bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109889c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109889c5 cmp ecx, dword ptr [eax*8 + 0x109afab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x109afab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109889cc jne 0x109889da */
  if (!C.zf) goto L_109889da;
  /* 109889ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109889d1 mov eax, dword ptr [edx*8 + 0x109afab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x109afab4)));
  /* 109889d8 jmp 0x109889dc */
  goto L_109889dc;
L_109889da:;
  /* 109889da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109889dc:;
  /* 109889dc mov esp, ebp */
  ESP = (EBP);
  /* 109889de pop ebp */
  EBP = (pop32());
  /* 109889df ret  */
  ESPCHK(0x10988990u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x109889e0 (66 bytes, 28 insns) */
void f_109889e0(void) {
  FTRACE(0x109889e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109889e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109889e1 mov ebp, esp */
  EBP = (ESP);
  /* 109889e3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109889e7 jne 0x10988a07 */
  if (!C.zf) goto L_10988a07;
  /* 109889e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109889ed jge 0x10988a07 */
  if ((C.sf==C.of)) goto L_10988a07;
  /* 109889ef push 1 */
  push32((uint32_t)(0x1u));
  /* 109889f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 109889f4 push eax */
  push32((uint32_t)(EAX));
  /* 109889f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109889f8 push ecx */
  push32((uint32_t)(ECX));
  /* 109889f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 109889fc push edx */
  push32((uint32_t)(EDX));
  /* 109889fd call 0x10988a30 */
  push32(0x10988a02u); f_10988a30();
  /* 10988a02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988a05 jmp 0x10988a1d */
  goto L_10988a1d;
L_10988a07:;
  /* 10988a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988a09 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988a0c push eax */
  push32((uint32_t)(EAX));
  /* 10988a0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988a10 push ecx */
  push32((uint32_t)(ECX));
  /* 10988a11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988a14 push edx */
  push32((uint32_t)(EDX));
  /* 10988a15 call 0x10988a30 */
  push32(0x10988a1au); f_10988a30();
  /* 10988a1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10988a1d:;
  /* 10988a1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988a20 pop ebp */
  EBP = (pop32());
  /* 10988a21 ret  */
  ESPCHK(0x109889e0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10988a30 (194 bytes, 71 insns) */
void f_10988a30(void) {
  FTRACE(0x10988a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10988a31 mov ebp, esp */
  EBP = (ESP);
  /* 10988a33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988a36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10988a3c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988a40 je 0x10988a59 */
  if (C.zf) goto L_10988a59;
  /* 10988a42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988a45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10988a48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988a4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988a4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10988a51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988a54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10988a56 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10988a59:;
  /* 10988a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988a5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10988a5f:;
  /* 10988a5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988a62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10988a64 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10988a67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10988a6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988a6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10988a6f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10988a72 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10988a75 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988a79 jbe 0x10988a91 */
  if ((C.cf||C.zf)) goto L_10988a91;
  /* 10988a7b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988a7e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988a84 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10988a86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988a89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988a8c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10988a8f jmp 0x10988aa5 */
  goto L_10988aa5;
L_10988a91:;
  /* 10988a91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988a94 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988a97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988a9a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10988a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988a9f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988aa2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10988aa5:;
  /* 10988aa5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988aa9 ja 0x10988a5f */
  if ((!C.cf&&!C.zf)) goto L_10988a5f;
  /* 10988aab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988aae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10988ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988ab4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988ab7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10988aba:;
  /* 10988aba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988abd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988abf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10988ac2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988ac5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988ac8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988aca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10988acc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988acf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10988ad2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10988ad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988ad7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988ada mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10988add mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988ae0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988ae3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10988ae6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988ae9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988aec jb 0x10988aba */
  if (C.cf) goto L_10988aba;
  /* 10988aee mov esp, ebp */
  ESP = (EBP);
  /* 10988af0 pop ebp */
  EBP = (pop32());
  /* 10988af1 ret  */
  ESPCHK(0x10988a30u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10988b00 (63 bytes, 24 insns) */
void f_10988b00(void) {
  FTRACE(0x10988b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10988b01 mov ebp, esp */
  EBP = (ESP);
  /* 10988b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10988b04 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988b08 jne 0x10988b19 */
  if (!C.zf) goto L_10988b19;
  /* 10988b0a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988b0e jge 0x10988b19 */
  if ((C.sf==C.of)) goto L_10988b19;
  /* 10988b10 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10988b17 jmp 0x10988b20 */
  goto L_10988b20;
L_10988b19:;
  /* 10988b19 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10988b20:;
  /* 10988b20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988b23 push eax */
  push32((uint32_t)(EAX));
  /* 10988b24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988b27 push ecx */
  push32((uint32_t)(ECX));
  /* 10988b28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988b2b push edx */
  push32((uint32_t)(EDX));
  /* 10988b2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988b2f push eax */
  push32((uint32_t)(EAX));
  /* 10988b30 call 0x10988a30 */
  push32(0x10988b35u); f_10988a30();
  /* 10988b35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988b38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988b3b mov esp, ebp */
  ESP = (EBP);
  /* 10988b3d pop ebp */
  EBP = (pop32());
  /* 10988b3e ret  */
  ESPCHK(0x10988b00u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10988b40 (30 bytes, 14 insns) */
void f_10988b40(void) {
  FTRACE(0x10988b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10988b41 mov ebp, esp */
  EBP = (ESP);
  /* 10988b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988b45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988b48 push eax */
  push32((uint32_t)(EAX));
  /* 10988b49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988b4c push ecx */
  push32((uint32_t)(ECX));
  /* 10988b4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988b50 push edx */
  push32((uint32_t)(EDX));
  /* 10988b51 call 0x10988a30 */
  push32(0x10988b56u); f_10988a30();
  /* 10988b56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988b59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988b5c pop ebp */
  EBP = (pop32());
  /* 10988b5d ret  */
  ESPCHK(0x10988b40u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10988b60 (72 bytes, 28 insns) */
void f_10988b60(void) {
  FTRACE(0x10988b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10988b61 mov ebp, esp */
  EBP = (ESP);
  /* 10988b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10988b64 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988b68 jne 0x10988b81 */
  if (!C.zf) goto L_10988b81;
  /* 10988b6a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988b6e jg 0x10988b81 */
  if ((!C.zf&&C.sf==C.of)) goto L_10988b81;
  /* 10988b70 jl 0x10988b78 */
  if ((C.sf!=C.of)) goto L_10988b78;
  /* 10988b72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988b76 jae 0x10988b81 */
  if (!C.cf) goto L_10988b81;
L_10988b78:;
  /* 10988b78 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10988b7f jmp 0x10988b88 */
  goto L_10988b88;
L_10988b81:;
  /* 10988b81 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10988b88:;
  /* 10988b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988b8b push eax */
  push32((uint32_t)(EAX));
  /* 10988b8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10988b90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988b93 push edx */
  push32((uint32_t)(EDX));
  /* 10988b94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988b97 push eax */
  push32((uint32_t)(EAX));
  /* 10988b98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988b9b push ecx */
  push32((uint32_t)(ECX));
  /* 10988b9c call 0x10988bb0 */
  push32(0x10988ba1u); f_10988bb0();
  /* 10988ba1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988ba4 mov esp, ebp */
  ESP = (EBP);
  /* 10988ba6 pop ebp */
  EBP = (pop32());
  /* 10988ba7 ret  */
  ESPCHK(0x10988b60u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10988bb0 (242 bytes, 91 insns) */
void f_10988bb0(void) {
  FTRACE(0x10988bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10988bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10988bb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988bb6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10988bbc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988bc0 je 0x10988be4 */
  if (C.zf) goto L_10988be4;
  /* 10988bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988bc5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10988bc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988bcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988bce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10988bd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988bd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10988bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988bd9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988bdc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10988bde mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10988be1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10988be4:;
  /* 10988be4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988be7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10988bea:;
  /* 10988bea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988bed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10988bef push ecx */
  push32((uint32_t)(ECX));
  /* 10988bf0 push eax */
  push32((uint32_t)(EAX));
  /* 10988bf1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988bf4 push edx */
  push32((uint32_t)(EDX));
  /* 10988bf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988bf8 push eax */
  push32((uint32_t)(EAX));
  /* 10988bf9 call 0x1098cb30 */
  push32(0x10988bfeu); f_1098cb30();
  /* 10988bfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10988c01 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988c04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10988c06 push edx */
  push32((uint32_t)(EDX));
  /* 10988c07 push ecx */
  push32((uint32_t)(ECX));
  /* 10988c08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988c0b push eax */
  push32((uint32_t)(EAX));
  /* 10988c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988c0f push ecx */
  push32((uint32_t)(ECX));
  /* 10988c10 call 0x1098cac0 */
  push32(0x10988c15u); f_1098cac0();
  /* 10988c15 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10988c18 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10988c1b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988c1f jbe 0x10988c37 */
  if ((C.cf||C.zf)) goto L_10988c37;
  /* 10988c21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988c24 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c2a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10988c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c2f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988c32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10988c35 jmp 0x10988c4b */
  goto L_10988c4b;
L_10988c37:;
  /* 10988c37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10988c3a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988c3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c40 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10988c42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988c48 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10988c4b:;
  /* 10988c4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988c4f ja 0x10988bea */
  if ((!C.cf&&!C.zf)) goto L_10988bea;
  /* 10988c51 jb 0x10988c59 */
  if (C.cf) goto L_10988c59;
  /* 10988c53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988c57 ja 0x10988bea */
  if ((!C.cf&&!C.zf)) goto L_10988bea;
L_10988c59:;
  /* 10988c59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c5c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10988c5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988c65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10988c68:;
  /* 10988c68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c6b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988c6d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10988c70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988c76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988c78 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10988c7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988c7d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10988c80 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10988c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10988c85 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988c88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10988c8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988c8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988c91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10988c94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10988c97 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988c9a jb 0x10988c68 */
  if (C.cf) goto L_10988c68;
  /* 10988c9c mov esp, ebp */
  ESP = (EBP);
  /* 10988c9e pop ebp */
  EBP = (pop32());
  /* 10988c9f ret 0x14 */
  ESPCHK(0x10988bb0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10988cb0 (31 bytes, 15 insns) */
void f_10988cb0(void) {
  FTRACE(0x10988cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10988cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10988cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988cb5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10988cb9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988cbc push ecx */
  push32((uint32_t)(ECX));
  /* 10988cbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988cc0 push edx */
  push32((uint32_t)(EDX));
  /* 10988cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10988cc5 call 0x10988bb0 */
  push32(0x10988ccau); f_10988bb0();
  /* 10988cca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988ccd pop ebp */
  EBP = (pop32());
  /* 10988cce ret  */
  ESPCHK(0x10988cb0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10988cd0 (123 bytes, 44 insns) */
void f_10988cd0(void) {
  FTRACE(0x10988cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988cd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10988cd4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10988cda je 0x10988cf0 */
  if (C.zf) goto L_10988cf0;
L_10988cdc:;
  /* 10988cdc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10988cde inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10988cdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10988ce1 je 0x10988d23 */
  if (C.zf) goto L_10988d23;
  /* 10988ce3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10988ce9 jne 0x10988cdc */
  if (!C.zf) goto L_10988cdc;
  /* 10988ceb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10988cf0:;
  /* 10988cf0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10988cf2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10988cf7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988cf9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10988cfc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10988cfe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988d01 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10988d06 je 0x10988cf0 */
  if (C.zf) goto L_10988cf0;
  /* 10988d08 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10988d0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10988d0d je 0x10988d41 */
  if (C.zf) goto L_10988d41;
  /* 10988d0f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10988d11 je 0x10988d37 */
  if (C.zf) goto L_10988d37;
  /* 10988d13 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10988d18 je 0x10988d2d */
  if (C.zf) goto L_10988d2d;
  /* 10988d1a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10988d1f je 0x10988d23 */
  if (C.zf) goto L_10988d23;
  /* 10988d21 jmp 0x10988cf0 */
  goto L_10988cf0;
L_10988d23:;
  /* 10988d23 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10988d26 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10988d2a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988d2c ret  */
  ESPCHK(0x10988cd0u, _esp0);
  ESP += 4; return;
L_10988d2d:;
  /* 10988d2d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10988d30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10988d34 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988d36 ret  */
  ESPCHK(0x10988cd0u, _esp0);
  ESP += 4; return;
L_10988d37:;
  /* 10988d37 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10988d3a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10988d3e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988d40 ret  */
  ESPCHK(0x10988cd0u, _esp0);
  ESP += 4; return;
L_10988d41:;
  /* 10988d41 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10988d44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10988d48 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988d4a ret  */
  ESPCHK(0x10988cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d50 @ 0x10988d50 (249 bytes, 93 insns) */
void f_10988d50(void) {
  FTRACE(0x10988d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10988d51 mov ebp, esp */
  EBP = (ESP);
  /* 10988d53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988d56 push ebx */
  push32((uint32_t)(EBX));
  /* 10988d57 push esi */
  push32((uint32_t)(ESI));
  /* 10988d58 push edi */
  push32((uint32_t)(EDI));
  /* 10988d59 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10988d5c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10988d5f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10988d62 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10988d65:;
  /* 10988d65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988d69 jne 0x10988d89 */
  if (!C.zf) goto L_10988d89;
  /* 10988d6b push 0x109ad1d0 */
  push32((uint32_t)(0x109ad1d0u));
  /* 10988d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988d72 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10988d74 push 0x109ad1c4 */
  push32((uint32_t)(0x109ad1c4u));
  /* 10988d79 push 2 */
  push32((uint32_t)(0x2u));
  /* 10988d7b call 0x10984f60 */
  push32(0x10988d80u); f_10984f60();
  /* 10988d80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988d83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988d86 jne 0x10988d89 */
  if (!C.zf) goto L_10988d89;
  /* 10988d88 int3  */
  x86_unimpl("int3 @ 0x10988d88");
L_10988d89:;
  /* 10988d89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10988d8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10988d8d jne 0x10988d65 */
  if (!C.zf) goto L_10988d65;
L_10988d8f:;
  /* 10988d8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988d93 jne 0x10988db3 */
  if (!C.zf) goto L_10988db3;
  /* 10988d95 push 0x109ad1b4 */
  push32((uint32_t)(0x109ad1b4u));
  /* 10988d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10988d9c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10988d9e push 0x109ad1c4 */
  push32((uint32_t)(0x109ad1c4u));
  /* 10988da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10988da5 call 0x10984f60 */
  push32(0x10988daau); f_10984f60();
  /* 10988daa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988dad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988db0 jne 0x10988db3 */
  if (!C.zf) goto L_10988db3;
  /* 10988db2 int3  */
  x86_unimpl("int3 @ 0x10988db2");
L_10988db3:;
  /* 10988db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10988db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10988db7 jne 0x10988d8f */
  if (!C.zf) goto L_10988d8f;
  /* 10988db9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988dbc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10988dc3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988dc9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10988dcc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988dcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988dd2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10988dd4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988dd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988dda mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10988ddd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10988de0 push edx */
  push32((uint32_t)(EDX));
  /* 10988de1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988de4 push eax */
  push32((uint32_t)(EAX));
  /* 10988de5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988de8 push ecx */
  push32((uint32_t)(ECX));
  /* 10988de9 call 0x1098ce30 */
  push32(0x10988deeu); f_1098ce30();
  /* 10988dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988df1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10988df4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988df7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10988dfa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988dfd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988e00 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10988e03 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988e06 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988e0a jl 0x10988e2e */
  if ((C.sf!=C.of)) goto L_10988e2e;
  /* 10988e0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10988e11 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10988e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10988e16 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10988e1c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10988e1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988e22 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10988e24 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988e27 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988e2a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10988e2c jmp 0x10988e3f */
  goto L_10988e3f;
L_10988e2e:;
  /* 10988e2e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988e31 push eax */
  push32((uint32_t)(EAX));
  /* 10988e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988e34 call 0x1098cbb0 */
  push32(0x10988e39u); f_1098cbb0();
  /* 10988e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988e3c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10988e3f:;
  /* 10988e3f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10988e42 pop edi */
  EDI = (pop32());
  /* 10988e43 pop esi */
  ESI = (pop32());
  /* 10988e44 pop ebx */
  EBX = (pop32());
  /* 10988e45 mov esp, ebp */
  ESP = (EBP);
  /* 10988e47 pop ebp */
  EBP = (pop32());
  /* 10988e48 ret  */
  ESPCHK(0x10988d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e50 @ 0x10988e50 (7 bytes, 3 insns) */
void f_10988e50(void) {
  FTRACE(0x10988e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988e50 push edi */
  push32((uint32_t)(EDI));
  /* 10988e51 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10988e55 jmp 0x10988ec1 */
  jmp_ind(0x10988ec1u); return;
}

/* FUN_10008e60 @ 0x10988e60 (224 bytes, 84 insns) */
void f_10988e60(void) {
  FTRACE(0x10988e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988e60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10988e64 push edi */
  push32((uint32_t)(EDI));
  /* 10988e65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10988e6b je 0x10988e7c */
  if (C.zf) goto L_10988e7c;
L_10988e6d:;
  /* 10988e6d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10988e6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10988e70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10988e72 je 0x10988eaf */
  if (C.zf) goto L_10988eaf;
  /* 10988e74 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10988e7a jne 0x10988e6d */
  if (!C.zf) goto L_10988e6d;
L_10988e7c:;
  /* 10988e7c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10988e7e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10988e83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988e85 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10988e88 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10988e8a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988e8d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10988e92 je 0x10988e7c */
  if (C.zf) goto L_10988e7c;
  /* 10988e94 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10988e97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10988e99 je 0x10988ebe */
  if (C.zf) goto L_10988ebe;
  /* 10988e9b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10988e9d je 0x10988eb9 */
  if (C.zf) goto L_10988eb9;
  /* 10988e9f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10988ea4 je 0x10988eb4 */
  if (C.zf) goto L_10988eb4;
  /* 10988ea6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10988eab je 0x10988eaf */
  if (C.zf) goto L_10988eaf;
  /* 10988ead jmp 0x10988e7c */
  goto L_10988e7c;
L_10988eaf:;
  /* 10988eaf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10988eb2 jmp 0x10988ec1 */
  goto L_10988ec1;
L_10988eb4:;
  /* 10988eb4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10988eb7 jmp 0x10988ec1 */
  goto L_10988ec1;
L_10988eb9:;
  /* 10988eb9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10988ebc jmp 0x10988ec1 */
  goto L_10988ec1;
L_10988ebe:;
  /* 10988ebe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10988ec1:;
  /* 10988ec1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10988ec5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10988ecb je 0x10988ee6 */
  if (C.zf) goto L_10988ee6;
L_10988ecd:;
  /* 10988ecd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10988ecf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10988ed0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10988ed2 je 0x10988f38 */
  if (C.zf) goto L_10988f38;
  /* 10988ed4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10988ed6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10988ed7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10988edd jne 0x10988ecd */
  if (!C.zf) goto L_10988ecd;
  /* 10988edf jmp 0x10988ee6 */
  goto L_10988ee6;
L_10988ee1:;
  /* 10988ee1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10988ee3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10988ee6:;
  /* 10988ee6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10988eeb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10988eed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988eef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10988ef2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10988ef4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10988ef6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10988ef9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10988efe je 0x10988ee1 */
  if (C.zf) goto L_10988ee1;
  /* 10988f00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10988f02 je 0x10988f38 */
  if (C.zf) goto L_10988f38;
  /* 10988f04 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10988f06 je 0x10988f2f */
  if (C.zf) goto L_10988f2f;
  /* 10988f08 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10988f0e je 0x10988f22 */
  if (C.zf) goto L_10988f22;
  /* 10988f10 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10988f16 je 0x10988f1a */
  if (C.zf) goto L_10988f1a;
  /* 10988f18 jmp 0x10988ee1 */
  goto L_10988ee1;
L_10988f1a:;
  /* 10988f1a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10988f1c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10988f20 pop edi */
  EDI = (pop32());
  /* 10988f21 ret  */
  ESPCHK(0x10988e60u, _esp0);
  ESP += 4; return;
L_10988f22:;
  /* 10988f22 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10988f25 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10988f29 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10988f2d pop edi */
  EDI = (pop32());
  /* 10988f2e ret  */
  ESPCHK(0x10988e60u, _esp0);
  ESP += 4; return;
L_10988f2f:;
  /* 10988f2f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10988f32 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10988f36 pop edi */
  EDI = (pop32());
  /* 10988f37 ret  */
  ESPCHK(0x10988e60u, _esp0);
  ESP += 4; return;
L_10988f38:;
  /* 10988f38 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10988f3a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10988f3e pop edi */
  EDI = (pop32());
  /* 10988f3f ret  */
  ESPCHK(0x10988e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f40 @ 0x10988f40 (243 bytes, 91 insns) */
void f_10988f40(void) {
  FTRACE(0x10988f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10988f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10988f41 mov ebp, esp */
  EBP = (ESP);
  /* 10988f43 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988f46 push ebx */
  push32((uint32_t)(EBX));
  /* 10988f47 push esi */
  push32((uint32_t)(ESI));
  /* 10988f48 push edi */
  push32((uint32_t)(EDI));
  /* 10988f49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10988f4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10988f4f:;
  /* 10988f4f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988f53 jne 0x10988f73 */
  if (!C.zf) goto L_10988f73;
  /* 10988f55 push 0x109ad1d0 */
  push32((uint32_t)(0x109ad1d0u));
  /* 10988f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10988f5c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10988f5e push 0x109ad1e0 */
  push32((uint32_t)(0x109ad1e0u));
  /* 10988f63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10988f65 call 0x10984f60 */
  push32(0x10988f6au); f_10984f60();
  /* 10988f6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988f6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988f70 jne 0x10988f73 */
  if (!C.zf) goto L_10988f73;
  /* 10988f72 int3  */
  x86_unimpl("int3 @ 0x10988f72");
L_10988f73:;
  /* 10988f73 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10988f75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10988f77 jne 0x10988f4f */
  if (!C.zf) goto L_10988f4f;
L_10988f79:;
  /* 10988f79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988f7d jne 0x10988f9d */
  if (!C.zf) goto L_10988f9d;
  /* 10988f7f push 0x109ad1b4 */
  push32((uint32_t)(0x109ad1b4u));
  /* 10988f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10988f86 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10988f88 push 0x109ad1e0 */
  push32((uint32_t)(0x109ad1e0u));
  /* 10988f8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10988f8f call 0x10984f60 */
  push32(0x10988f94u); f_10984f60();
  /* 10988f94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988f97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988f9a jne 0x10988f9d */
  if (!C.zf) goto L_10988f9d;
  /* 10988f9c int3  */
  x86_unimpl("int3 @ 0x10988f9c");
L_10988f9d:;
  /* 10988f9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10988f9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10988fa1 jne 0x10988f79 */
  if (!C.zf) goto L_10988f79;
  /* 10988fa3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988fa6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10988fad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988fb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988fb3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10988fb6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988fb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10988fbc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10988fbe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988fc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10988fc4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10988fc7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10988fca push ecx */
  push32((uint32_t)(ECX));
  /* 10988fcb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10988fce push edx */
  push32((uint32_t)(EDX));
  /* 10988fcf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988fd2 push eax */
  push32((uint32_t)(EAX));
  /* 10988fd3 call 0x1098ce30 */
  push32(0x10988fd8u); f_1098ce30();
  /* 10988fd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10988fdb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10988fde mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988fe1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10988fe4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10988fe7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988fea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10988fed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988ff0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10988ff4 jl 0x10989018 */
  if ((C.sf!=C.of)) goto L_10989018;
  /* 10988ff6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10988ff9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10988ffb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10988ffe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10989000 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10989006 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10989009 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098900c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1098900e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989011 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10989014 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10989016 jmp 0x10989029 */
  goto L_10989029;
L_10989018:;
  /* 10989018 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1098901b push edx */
  push32((uint32_t)(EDX));
  /* 1098901c push 0 */
  push32((uint32_t)(0x0u));
  /* 1098901e call 0x1098cbb0 */
  push32(0x10989023u); f_1098cbb0();
  /* 10989023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989026 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10989029:;
  /* 10989029 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1098902c pop edi */
  EDI = (pop32());
  /* 1098902d pop esi */
  ESI = (pop32());
  /* 1098902e pop ebx */
  EBX = (pop32());
  /* 1098902f mov esp, ebp */
  ESP = (EBP);
  /* 10989031 pop ebp */
  EBP = (pop32());
  /* 10989032 ret  */
  ESPCHK(0x10988f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009040 @ 0x10989040 (47 bytes, 17 insns) */
void f_10989040(void) {
  FTRACE(0x10989040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989040 push ecx */
  push32((uint32_t)(ECX));
  /* 10989041 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989046 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1098904a jb 0x10989060 */
  if (C.cf) goto L_10989060;
L_1098904c:;
  /* 1098904c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989052 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989057 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10989059 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098905e jae 0x1098904c */
  if (!C.cf) goto L_1098904c;
L_10989060:;
  /* 10989060 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989062 mov eax, esp */
  EAX = (ESP);
  /* 10989064 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10989066 mov esp, ecx */
  ESP = (ECX);
  /* 10989068 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1098906a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1098906d push eax */
  push32((uint32_t)(EAX));
  /* 1098906e ret  */
  ESPCHK(0x10989040u, _esp0);
  ESP += 4; return;
}

/* FUN_10009070 @ 0x10989070 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10989070(void) {
  FTRACE(0x10989070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989070 push ebp */
  push32((uint32_t)(EBP));
  /* 10989071 mov ebp, esp */
  EBP = (ESP);
  /* 10989073 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989076 push esi */
  push32((uint32_t)(ESI));
  /* 10989077 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098907b je 0x10989083 */
  if (C.zf) goto L_10989083;
  /* 1098907d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989081 jne 0x10989088 */
  if (!C.zf) goto L_10989088;
L_10989083:;
  /* 10989083 jmp 0x10989258 */
  goto L_10989258;
L_10989088:;
  /* 10989088 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098908c je 0x109890a4 */
  if (C.zf) goto L_109890a4;
  /* 1098908e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989092 je 0x109890a4 */
  if (C.zf) goto L_109890a4;
  /* 10989094 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989098 je 0x109890a4 */
  if (C.zf) goto L_109890a4;
  /* 1098909a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098909e jne 0x10989181 */
  if (!C.zf) goto L_10989181;
L_109890a4:;
  /* 109890a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109890a6 call 0x109898a0 */
  push32(0x109890abu); f_109898a0();
  /* 109890ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109890ae cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109890b2 je 0x109890ba */
  if (C.zf) goto L_109890ba;
  /* 109890b4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109890b8 jne 0x109890ff */
  if (!C.zf) goto L_109890ff;
L_109890ba:;
  /* 109890ba cmp dword ptr [0x109b17c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b17c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109890c1 jne 0x109890ff */
  if (!C.zf) goto L_109890ff;
  /* 109890c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109890c5 push 0x109892a0 */
  push32((uint32_t)(0x109892a0u));
  /* 109890ca call dword ptr [0x109b4338] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4338))), 0x109890d0u);
  /* 109890d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109890d3 jne 0x109890e1 */
  if (!C.zf) goto L_109890e1;
  /* 109890d5 mov dword ptr [0x109b17c8], 1 */
  w32((uint32_t)(0x109b17c8), (0x1u));
  /* 109890df jmp 0x109890ff */
  goto L_109890ff;
L_109890e1:;
  /* 109890e1 call dword ptr [0x109b439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b439c))), 0x109890e7u);
  /* 109890e7 mov esi, eax */
  ESI = (EAX);
  /* 109890e9 call 0x1098dd80 */
  push32(0x109890eeu); f_1098dd80();
  /* 109890ee mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 109890f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109890f2 call 0x10989940 */
  push32(0x109890f7u); f_10989940();
  /* 109890f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109890fa jmp 0x10989258 */
  goto L_10989258;
L_109890ff:;
  /* 109890ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989102 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10989105 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989108 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1098910b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1098910e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989112 ja 0x10989172 */
  if ((!C.cf&&!C.zf)) goto L_10989172;
  /* 10989114 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989117 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10989119 mov dl, byte ptr [eax + 0x1098927f] */
  DL = (r8((uint32_t)(EAX + 0x1098927f)));
  /* 1098911f jmp dword ptr [edx*4 + 0x1098926b] */
  switch (EDX) {
    case 0: goto L_10989126;
    case 1: goto L_10989160;
    case 2: goto L_1098913a;
    case 3: goto L_1098914d;
    case 4: goto L_10989172;
    default: x86_unimpl("switch@0x1098911f out of table"); return;
  }
L_10989126:;
  /* 10989126 mov ecx, dword ptr [0x109b17b8] */
  ECX = (r32((uint32_t)(0x109b17b8)));
  /* 1098912c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1098912f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989132 mov dword ptr [0x109b17b8], edx */
  w32((uint32_t)(0x109b17b8), (EDX));
  /* 10989138 jmp 0x10989172 */
  goto L_10989172;
L_1098913a:;
  /* 1098913a mov eax, dword ptr [0x109b17bc] */
  EAX = (r32((uint32_t)(0x109b17bc)));
  /* 1098913f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10989142 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989145 mov dword ptr [0x109b17bc], ecx */
  w32((uint32_t)(0x109b17bc), (ECX));
  /* 1098914b jmp 0x10989172 */
  goto L_10989172;
L_1098914d:;
  /* 1098914d mov edx, dword ptr [0x109b17c0] */
  EDX = (r32((uint32_t)(0x109b17c0)));
  /* 10989153 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10989156 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989159 mov dword ptr [0x109b17c0], eax */
  w32((uint32_t)(0x109b17c0), (EAX));
  /* 1098915e jmp 0x10989172 */
  goto L_10989172;
L_10989160:;
  /* 10989160 mov ecx, dword ptr [0x109b17c4] */
  ECX = (r32((uint32_t)(0x109b17c4)));
  /* 10989166 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10989169 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098916c mov dword ptr [0x109b17c4], edx */
  w32((uint32_t)(0x109b17c4), (EDX));
L_10989172:;
  /* 10989172 push 1 */
  push32((uint32_t)(0x1u));
  /* 10989174 call 0x10989940 */
  push32(0x10989179u); f_10989940();
  /* 10989179 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098917c jmp 0x10989253 */
  goto L_10989253;
L_10989181:;
  /* 10989181 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989185 je 0x10989198 */
  if (C.zf) goto L_10989198;
  /* 10989187 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098918b je 0x10989198 */
  if (C.zf) goto L_10989198;
  /* 1098918d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989191 je 0x10989198 */
  if (C.zf) goto L_10989198;
  /* 10989193 jmp 0x10989258 */
  goto L_10989258;
L_10989198:;
  /* 10989198 call 0x109858e0 */
  push32(0x1098919du); f_109858e0();
  /* 1098919d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109891a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109891a3 cmp dword ptr [eax + 0x50], 0x109afc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x109afc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109891aa jne 0x109891f5 */
  if (!C.zf) goto L_109891f5;
  /* 109891ac push 0x133 */
  push32((uint32_t)(0x133u));
  /* 109891b1 push 0x109ad1ec */
  push32((uint32_t)(0x109ad1ecu));
  /* 109891b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109891b8 mov ecx, dword ptr [0x109afc80] */
  ECX = (r32((uint32_t)(0x109afc80)));
  /* 109891be push ecx */
  push32((uint32_t)(ECX));
  /* 109891bf call 0x10985ea0 */
  push32(0x109891c4u); f_10985ea0();
  /* 109891c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109891c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109891ca mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 109891cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109891d0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109891d4 je 0x109891f3 */
  if (C.zf) goto L_109891f3;
  /* 109891d6 mov ecx, dword ptr [0x109afc80] */
  ECX = (r32((uint32_t)(0x109afc80)));
  /* 109891dc push ecx */
  push32((uint32_t)(ECX));
  /* 109891dd push 0x109afc00 */
  push32((uint32_t)(0x109afc00u));
  /* 109891e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109891e5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 109891e8 push eax */
  push32((uint32_t)(EAX));
  /* 109891e9 call 0x1098c780 */
  push32(0x109891eeu); f_1098c780();
  /* 109891ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109891f1 jmp 0x109891f5 */
  goto L_109891f5;
L_109891f3:;
  /* 109891f3 jmp 0x10989258 */
  goto L_10989258;
L_109891f5:;
  /* 109891f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109891f8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109891fb push edx */
  push32((uint32_t)(EDX));
  /* 109891fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109891ff push eax */
  push32((uint32_t)(EAX));
  /* 10989200 call 0x10989580 */
  push32(0x10989205u); f_10989580();
  /* 10989205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989208 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098920b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098920f jne 0x10989213 */
  if (!C.zf) goto L_10989213;
  /* 10989211 jmp 0x10989258 */
  goto L_10989258;
L_10989213:;
  /* 10989213 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989216 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10989219 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1098921c:;
  /* 1098921c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098921f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10989222 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989225 jne 0x10989253 */
  if (!C.zf) goto L_10989253;
  /* 10989227 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1098922a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1098922d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10989230 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989233 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989236 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10989239 mov edx, dword ptr [0x109afc84] */
  EDX = (r32((uint32_t)(0x109afc84)));
  /* 1098923f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10989242 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989245 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10989248 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098924a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098924d jb 0x10989251 */
  if (C.cf) goto L_10989251;
  /* 1098924f jmp 0x10989253 */
  goto L_10989253;
L_10989251:;
  /* 10989251 jmp 0x1098921c */
  goto L_1098921c;
L_10989253:;
  /* 10989253 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10989256 jmp 0x10989266 */
  goto L_10989266;
L_10989258:;
  /* 10989258 call 0x1098dd70 */
  push32(0x1098925du); f_1098dd70();
  /* 1098925d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10989263 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10989266:;
  /* 10989266 pop esi */
  ESI = (pop32());
  /* 10989267 mov esp, ebp */
  ESP = (EBP);
  /* 10989269 pop ebp */
  EBP = (pop32());
  /* 1098926a ret  */
  ESPCHK(0x10989070u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x109892a0 (146 bytes, 45 insns) */
void f_109892a0(void) {
  FTRACE(0x109892a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109892a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109892a1 mov ebp, esp */
  EBP = (ESP);
  /* 109892a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109892a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109892a8 call 0x109898a0 */
  push32(0x109892adu); f_109898a0();
  /* 109892ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109892b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109892b4 jne 0x109892ce */
  if (!C.zf) goto L_109892ce;
  /* 109892b6 mov dword ptr [ebp - 8], 0x109b17b8 */
  w32((uint32_t)(EBP + -0x8), (0x109b17b8u));
  /* 109892bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109892c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109892c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109892c5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 109892cc jmp 0x109892e4 */
  goto L_109892e4;
L_109892ce:;
  /* 109892ce mov dword ptr [ebp - 8], 0x109b17bc */
  w32((uint32_t)(EBP + -0x8), (0x109b17bcu));
  /* 109892d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 109892d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 109892da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109892dd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_109892e4:;
  /* 109892e4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109892e8 jne 0x109892f8 */
  if (!C.zf) goto L_109892f8;
  /* 109892ea push 1 */
  push32((uint32_t)(0x1u));
  /* 109892ec call 0x10989940 */
  push32(0x109892f1u); f_10989940();
  /* 109892f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109892f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109892f6 jmp 0x1098932c */
  goto L_1098932c;
L_109892f8:;
  /* 109892f8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109892fc je 0x1098931d */
  if (C.zf) goto L_1098931d;
  /* 109892fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989301 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10989307 push 1 */
  push32((uint32_t)(0x1u));
  /* 10989309 call 0x10989940 */
  push32(0x1098930eu); f_10989940();
  /* 1098930e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989314 push edx */
  push32((uint32_t)(EDX));
  /* 10989315 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10989318u);
  /* 10989318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098931b jmp 0x10989327 */
  goto L_10989327;
L_1098931d:;
  /* 1098931d push 1 */
  push32((uint32_t)(0x1u));
  /* 1098931f call 0x10989940 */
  push32(0x10989324u); f_10989940();
  /* 10989324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989327:;
  /* 10989327 mov eax, 1 */
  EAX = (0x1u);
L_1098932c:;
  /* 1098932c mov esp, ebp */
  ESP = (EBP);
  /* 1098932e pop ebp */
  EBP = (pop32());
  /* 1098932f ret 4 */
  ESPCHK(0x109892a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009340 @ 0x10989340 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10989340(void) {
  FTRACE(0x10989340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989340 push ebp */
  push32((uint32_t)(EBP));
  /* 10989341 mov ebp, esp */
  EBP = (ESP);
  /* 10989343 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989346 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1098934d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989350 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10989353 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10989356 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989359 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1098935c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989360 ja 0x1098940e */
  if ((!C.cf&&!C.zf)) goto L_1098940e;
  /* 10989366 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10989369 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098936b mov dl, byte ptr [eax + 0x10989562] */
  DL = (r8((uint32_t)(EAX + 0x10989562)));
  /* 10989371 jmp dword ptr [edx*4 + 0x1098954a] */
  switch (EDX) {
    case 0: goto L_10989378;
    case 1: goto L_109893e3;
    case 2: goto L_109893c9;
    case 3: goto L_10989395;
    case 4: goto L_109893af;
    case 5: goto L_1098940e;
    default: x86_unimpl("switch@0x10989371 out of table"); return;
  }
L_10989378:;
  /* 10989378 mov dword ptr [ebp - 0x18], 0x109b17b8 */
  w32((uint32_t)(EBP + -0x18), (0x109b17b8u));
  /* 1098937f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10989382 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10989384 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10989387 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1098938a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098938d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10989390 jmp 0x10989416 */
  goto L_10989416;
L_10989395:;
  /* 10989395 mov dword ptr [ebp - 0x18], 0x109b17bc */
  w32((uint32_t)(EBP + -0x18), (0x109b17bcu));
  /* 1098939c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1098939f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109893a1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109893a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109893a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109893aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109893ad jmp 0x10989416 */
  goto L_10989416;
L_109893af:;
  /* 109893af mov dword ptr [ebp - 0x18], 0x109b17c0 */
  w32((uint32_t)(EBP + -0x18), (0x109b17c0u));
  /* 109893b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109893b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109893bb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109893be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109893c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109893c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109893c7 jmp 0x10989416 */
  goto L_10989416;
L_109893c9:;
  /* 109893c9 mov dword ptr [ebp - 0x18], 0x109b17c4 */
  w32((uint32_t)(EBP + -0x18), (0x109b17c4u));
  /* 109893d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 109893d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 109893d5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 109893d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 109893db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109893de mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 109893e1 jmp 0x10989416 */
  goto L_10989416;
L_109893e3:;
  /* 109893e3 call 0x109858e0 */
  push32(0x109893e8u); f_109858e0();
  /* 109893e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109893eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109893ee mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109893f1 push edx */
  push32((uint32_t)(EDX));
  /* 109893f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109893f5 push eax */
  push32((uint32_t)(EAX));
  /* 109893f6 call 0x10989580 */
  push32(0x109893fbu); f_10989580();
  /* 109893fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109893fe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989401 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10989404 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10989407 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10989409 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1098940c jmp 0x10989416 */
  goto L_10989416;
L_1098940e:;
  /* 1098940e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10989411 jmp 0x10989546 */
  goto L_10989546;
L_10989416:;
  /* 10989416 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098941a je 0x10989426 */
  if (C.zf) goto L_10989426;
  /* 1098941c push 1 */
  push32((uint32_t)(0x1u));
  /* 1098941e call 0x109898a0 */
  push32(0x10989423u); f_109898a0();
  /* 10989423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989426:;
  /* 10989426 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098942a jne 0x10989443 */
  if (!C.zf) goto L_10989443;
  /* 1098942c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989430 je 0x1098943c */
  if (C.zf) goto L_1098943c;
  /* 10989432 push 1 */
  push32((uint32_t)(0x1u));
  /* 10989434 call 0x10989940 */
  push32(0x10989439u); f_10989940();
  /* 10989439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098943c:;
  /* 1098943c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1098943e jmp 0x10989546 */
  goto L_10989546;
L_10989443:;
  /* 10989443 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989447 jne 0x10989460 */
  if (!C.zf) goto L_10989460;
  /* 10989449 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098944d je 0x10989459 */
  if (C.zf) goto L_10989459;
  /* 1098944f push 1 */
  push32((uint32_t)(0x1u));
  /* 10989451 call 0x10989940 */
  push32(0x10989456u); f_10989940();
  /* 10989456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989459:;
  /* 10989459 push 3 */
  push32((uint32_t)(0x3u));
  /* 1098945b call 0x10985660 */
  push32(0x10989460u); f_10985660();
L_10989460:;
  /* 10989460 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989464 je 0x10989472 */
  if (C.zf) goto L_10989472;
  /* 10989466 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098946a je 0x10989472 */
  if (C.zf) goto L_10989472;
  /* 1098946c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989470 jne 0x1098949e */
  if (!C.zf) goto L_1098949e;
L_10989472:;
  /* 10989472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989475 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10989478 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1098947b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098947e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10989485 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989489 jne 0x1098949e */
  if (!C.zf) goto L_1098949e;
  /* 1098948b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098948e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10989491 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10989494 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989497 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1098949e:;
  /* 1098949e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109894a2 jne 0x109894e0 */
  if (!C.zf) goto L_109894e0;
  /* 109894a4 mov eax, dword ptr [0x109afc78] */
  EAX = (r32((uint32_t)(0x109afc78)));
  /* 109894a9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109894ac jmp 0x109894b7 */
  goto L_109894b7;
L_109894ae:;
  /* 109894ae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109894b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109894b4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_109894b7:;
  /* 109894b7 mov edx, dword ptr [0x109afc78] */
  EDX = (r32((uint32_t)(0x109afc78)));
  /* 109894bd add edx, dword ptr [0x109afc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109afc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109894c3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109894c6 jge 0x109894de */
  if ((C.sf==C.of)) goto L_109894de;
  /* 109894c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109894cb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109894ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109894d1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 109894d4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 109894dc jmp 0x109894ae */
  goto L_109894ae;
L_109894de:;
  /* 109894de jmp 0x109894e9 */
  goto L_109894e9;
L_109894e0:;
  /* 109894e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 109894e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_109894e9:;
  /* 109894e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109894ed je 0x109894f9 */
  if (C.zf) goto L_109894f9;
  /* 109894ef push 1 */
  push32((uint32_t)(0x1u));
  /* 109894f1 call 0x10989940 */
  push32(0x109894f6u); f_10989940();
  /* 109894f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109894f9:;
  /* 109894f9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109894fd jne 0x10989510 */
  if (!C.zf) goto L_10989510;
  /* 109894ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989502 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10989505 push edx */
  push32((uint32_t)(EDX));
  /* 10989506 push 8 */
  push32((uint32_t)(0x8u));
  /* 10989508 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1098950bu);
  /* 1098950b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1098950e jmp 0x1098951a */
  goto L_1098951a;
L_10989510:;
  /* 10989510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989513 push eax */
  push32((uint32_t)(EAX));
  /* 10989514 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10989517u);
  /* 10989517 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1098951a:;
  /* 1098951a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098951e je 0x1098952c */
  if (C.zf) goto L_1098952c;
  /* 10989520 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989524 je 0x1098952c */
  if (C.zf) goto L_1098952c;
  /* 10989526 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098952a jne 0x10989544 */
  if (!C.zf) goto L_10989544;
L_1098952c:;
  /* 1098952c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098952f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10989532 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10989535 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989539 jne 0x10989544 */
  if (!C.zf) goto L_10989544;
  /* 1098953b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098953e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989541 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10989544:;
  /* 10989544 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10989546:;
  /* 10989546 mov esp, ebp */
  ESP = (EBP);
  /* 10989548 pop ebp */
  EBP = (pop32());
  /* 10989549 ret  */
  ESPCHK(0x10989340u, _esp0);
  ESP += 4; return;
}

/* FUN_10009580 @ 0x10989580 (91 bytes, 35 insns) */
void f_10989580(void) {
  FTRACE(0x10989580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989580 push ebp */
  push32((uint32_t)(EBP));
  /* 10989581 mov ebp, esp */
  EBP = (ESP);
  /* 10989583 push ecx */
  push32((uint32_t)(ECX));
  /* 10989584 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989587 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1098958a:;
  /* 1098958a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098958d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10989590 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989593 je 0x109895b3 */
  if (C.zf) goto L_109895b3;
  /* 10989595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989598 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098959b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1098959e mov ecx, dword ptr [0x109afc84] */
  ECX = (r32((uint32_t)(0x109afc84)));
  /* 109895a4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109895a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109895aa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109895ac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109895af jae 0x109895b3 */
  if (!C.cf) goto L_109895b3;
  /* 109895b1 jmp 0x1098958a */
  goto L_1098958a;
L_109895b3:;
  /* 109895b3 mov eax, dword ptr [0x109afc84] */
  EAX = (r32((uint32_t)(0x109afc84)));
  /* 109895b8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109895bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109895be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109895c0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109895c3 jae 0x109895d5 */
  if (!C.cf) goto L_109895d5;
  /* 109895c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109895c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 109895cb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109895ce jne 0x109895d5 */
  if (!C.zf) goto L_109895d5;
  /* 109895d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109895d3 jmp 0x109895d7 */
  goto L_109895d7;
L_109895d5:;
  /* 109895d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109895d7:;
  /* 109895d7 mov esp, ebp */
  ESP = (EBP);
  /* 109895d9 pop ebp */
  EBP = (pop32());
  /* 109895da ret  */
  ESPCHK(0x10989580u, _esp0);
  ESP += 4; return;
}

/* FUN_100095e0 @ 0x109895e0 (13 bytes, 6 insns) */
void f_109895e0(void) {
  FTRACE(0x109895e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109895e0 push ebp */
  push32((uint32_t)(EBP));
  /* 109895e1 mov ebp, esp */
  EBP = (ESP);
  /* 109895e3 call 0x109858e0 */
  push32(0x109895e8u); f_109858e0();
  /* 109895e8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109895eb pop ebp */
  EBP = (pop32());
  /* 109895ec ret  */
  ESPCHK(0x109895e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f0 @ 0x109895f0 (13 bytes, 6 insns) */
void f_109895f0(void) {
  FTRACE(0x109895f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109895f0 push ebp */
  push32((uint32_t)(EBP));
  /* 109895f1 mov ebp, esp */
  EBP = (ESP);
  /* 109895f3 call 0x109858e0 */
  push32(0x109895f8u); f_109858e0();
  /* 109895f8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109895fb pop ebp */
  EBP = (pop32());
  /* 109895fc ret  */
  ESPCHK(0x109895f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009600 @ 0x10989600 (187 bytes, 54 insns) */
void f_10989600(void) {
  FTRACE(0x10989600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989600 push ebp */
  push32((uint32_t)(EBP));
  /* 10989601 mov ebp, esp */
  EBP = (ESP);
  /* 10989603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989606 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098960d cmp dword ptr [0x109b17cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b17cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989614 jne 0x10989673 */
  if (!C.zf) goto L_10989673;
  /* 10989616 push 0x109ac618 */
  push32((uint32_t)(0x109ac618u));
  /* 1098961b call dword ptr [0x109b436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b436c))), 0x10989621u);
  /* 10989621 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10989624 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989628 je 0x10989647 */
  if (C.zf) goto L_10989647;
  /* 1098962a push 0x109ad21c */
  push32((uint32_t)(0x109ad21cu));
  /* 1098962f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989632 push eax */
  push32((uint32_t)(EAX));
  /* 10989633 call dword ptr [0x109b4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4368))), 0x10989639u);
  /* 10989639 mov dword ptr [0x109b17cc], eax */
  w32((uint32_t)(0x109b17cc), (EAX));
  /* 1098963e cmp dword ptr [0x109b17cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b17cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989645 jne 0x1098964b */
  if (!C.zf) goto L_1098964b;
L_10989647:;
  /* 10989647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989649 jmp 0x109896b7 */
  goto L_109896b7;
L_1098964b:;
  /* 1098964b push 0x109ad20c */
  push32((uint32_t)(0x109ad20cu));
  /* 10989650 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989653 push ecx */
  push32((uint32_t)(ECX));
  /* 10989654 call dword ptr [0x109b4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4368))), 0x1098965au);
  /* 1098965a mov dword ptr [0x109b17d0], eax */
  w32((uint32_t)(0x109b17d0), (EAX));
  /* 1098965f push 0x109ad1f8 */
  push32((uint32_t)(0x109ad1f8u));
  /* 10989664 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989667 push edx */
  push32((uint32_t)(EDX));
  /* 10989668 call dword ptr [0x109b4368] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4368))), 0x1098966eu);
  /* 1098966e mov dword ptr [0x109b17d4], eax */
  w32((uint32_t)(0x109b17d4), (EAX));
L_10989673:;
  /* 10989673 cmp dword ptr [0x109b17d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b17d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098967a je 0x10989685 */
  if (C.zf) goto L_10989685;
  /* 1098967c call dword ptr [0x109b17d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b17d0))), 0x10989682u);
  /* 10989682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10989685:;
  /* 10989685 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989689 je 0x109896a1 */
  if (C.zf) goto L_109896a1;
  /* 1098968b cmp dword ptr [0x109b17d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109b17d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989692 je 0x109896a1 */
  if (C.zf) goto L_109896a1;
  /* 10989694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989697 push eax */
  push32((uint32_t)(EAX));
  /* 10989698 call dword ptr [0x109b17d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b17d4))), 0x1098969eu);
  /* 1098969e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109896a1:;
  /* 109896a1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109896a4 push ecx */
  push32((uint32_t)(ECX));
  /* 109896a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109896a8 push edx */
  push32((uint32_t)(EDX));
  /* 109896a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109896ac push eax */
  push32((uint32_t)(EAX));
  /* 109896ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109896b0 push ecx */
  push32((uint32_t)(ECX));
  /* 109896b1 call dword ptr [0x109b17cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b17cc))), 0x109896b7u);
L_109896b7:;
  /* 109896b7 mov esp, ebp */
  ESP = (EBP);
  /* 109896b9 pop ebp */
  EBP = (pop32());
  /* 109896ba ret  */
  ESPCHK(0x10989600u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x109896c0 (254 bytes, 109 insns) */
void f_109896c0(void) {
  FTRACE(0x109896c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109896c0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 109896c4 push edi */
  push32((uint32_t)(EDI));
  /* 109896c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109896c7 je 0x10989743 */
  if (C.zf) goto L_10989743;
  /* 109896c9 push esi */
  push32((uint32_t)(ESI));
  /* 109896ca push ebx */
  push32((uint32_t)(EBX));
  /* 109896cb mov ebx, ecx */
  EBX = (ECX);
  /* 109896cd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 109896d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 109896d7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 109896db jne 0x109896e4 */
  if (!C.zf) goto L_109896e4;
  /* 109896dd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109896e0 jne 0x10989751 */
  if (!C.zf) goto L_10989751;
  /* 109896e2 jmp 0x10989705 */
  goto L_10989705;
L_109896e4:;
  /* 109896e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109896e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109896e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109896e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109896ea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109896eb je 0x10989712 */
  if (C.zf) goto L_10989712;
  /* 109896ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109896ef je 0x1098971a */
  if (C.zf) goto L_1098971a;
  /* 109896f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 109896f7 jne 0x109896e4 */
  if (!C.zf) goto L_109896e4;
  /* 109896f9 mov ebx, ecx */
  EBX = (ECX);
  /* 109896fb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109896fe jne 0x10989751 */
  if (!C.zf) goto L_10989751;
L_10989700:;
  /* 10989700 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10989703 je 0x10989712 */
  if (C.zf) goto L_10989712;
L_10989705:;
  /* 10989705 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10989707 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10989708 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098970a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1098970b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1098970d je 0x1098973e */
  if (C.zf) goto L_1098973e;
  /* 1098970f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10989710 jne 0x10989705 */
  if (!C.zf) goto L_10989705;
L_10989712:;
  /* 10989712 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10989716 pop ebx */
  EBX = (pop32());
  /* 10989717 pop esi */
  ESI = (pop32());
  /* 10989718 pop edi */
  EDI = (pop32());
  /* 10989719 ret  */
  ESPCHK(0x109896c0u, _esp0);
  ESP += 4; return;
L_1098971a:;
  /* 1098971a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10989720 je 0x10989734 */
  if (C.zf) goto L_10989734;
L_10989722:;
  /* 10989722 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10989724 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10989725 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10989726 je 0x109897b6 */
  if (C.zf) goto L_109897b6;
  /* 1098972c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10989732 jne 0x10989722 */
  if (!C.zf) goto L_10989722;
L_10989734:;
  /* 10989734 mov ebx, ecx */
  EBX = (ECX);
  /* 10989736 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10989739 jne 0x109897a7 */
  if (!C.zf) goto L_109897a7;
L_1098973b:;
  /* 1098973b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1098973d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1098973e:;
  /* 1098973e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1098973f jne 0x1098973b */
  if (!C.zf) goto L_1098973b;
  /* 10989741 pop ebx */
  EBX = (pop32());
  /* 10989742 pop esi */
  ESI = (pop32());
L_10989743:;
  /* 10989743 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10989747 pop edi */
  EDI = (pop32());
  /* 10989748 ret  */
  ESPCHK(0x109896c0u, _esp0);
  ESP += 4; return;
L_10989749:;
  /* 10989749 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1098974b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1098974e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1098974f je 0x10989700 */
  if (C.zf) goto L_10989700;
L_10989751:;
  /* 10989751 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10989756 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10989758 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1098975a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1098975d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1098975f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10989761 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10989764 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10989769 je 0x10989749 */
  if (C.zf) goto L_10989749;
  /* 1098976b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1098976d je 0x1098979b */
  if (C.zf) goto L_1098979b;
  /* 1098976f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10989771 je 0x10989791 */
  if (C.zf) goto L_10989791;
  /* 10989773 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10989779 je 0x10989787 */
  if (C.zf) goto L_10989787;
  /* 1098977b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10989781 jne 0x10989749 */
  if (!C.zf) goto L_10989749;
  /* 10989783 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10989785 jmp 0x1098979f */
  goto L_1098979f;
L_10989787:;
  /* 10989787 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1098978d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1098978f jmp 0x1098979f */
  goto L_1098979f;
L_10989791:;
  /* 10989791 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10989797 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10989799 jmp 0x1098979f */
  goto L_1098979f;
L_1098979b:;
  /* 1098979b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1098979d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1098979f:;
  /* 1098979f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109897a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109897a4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109897a5 je 0x109897b1 */
  if (C.zf) goto L_109897b1;
L_109897a7:;
  /* 109897a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109897a9:;
  /* 109897a9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 109897ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109897ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109897af jne 0x109897a9 */
  if (!C.zf) goto L_109897a9;
L_109897b1:;
  /* 109897b1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 109897b4 jne 0x1098973b */
  if (!C.zf) goto L_1098973b;
L_109897b6:;
  /* 109897b6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109897ba pop ebx */
  EBX = (pop32());
  /* 109897bb pop esi */
  ESI = (pop32());
  /* 109897bc pop edi */
  EDI = (pop32());
  /* 109897bd ret  */
  ESPCHK(0x109896c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097c0 @ 0x109897c0 (55 bytes, 16 insns) */
void f_109897c0(void) {
  FTRACE(0x109897c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109897c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109897c1 mov ebp, esp */
  EBP = (ESP);
  /* 109897c3 mov eax, dword ptr [0x109afb84] */
  EAX = (r32((uint32_t)(0x109afb84)));
  /* 109897c8 push eax */
  push32((uint32_t)(EAX));
  /* 109897c9 call dword ptr [0x109b4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4334))), 0x109897cfu);
  /* 109897cf mov ecx, dword ptr [0x109afb74] */
  ECX = (r32((uint32_t)(0x109afb74)));
  /* 109897d5 push ecx */
  push32((uint32_t)(ECX));
  /* 109897d6 call dword ptr [0x109b4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4334))), 0x109897dcu);
  /* 109897dc mov edx, dword ptr [0x109afb64] */
  EDX = (r32((uint32_t)(0x109afb64)));
  /* 109897e2 push edx */
  push32((uint32_t)(EDX));
  /* 109897e3 call dword ptr [0x109b4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4334))), 0x109897e9u);
  /* 109897e9 mov eax, dword ptr [0x109afb44] */
  EAX = (r32((uint32_t)(0x109afb44)));
  /* 109897ee push eax */
  push32((uint32_t)(EAX));
  /* 109897ef call dword ptr [0x109b4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4334))), 0x109897f5u);
  /* 109897f5 pop ebp */
  EBP = (pop32());
  /* 109897f6 ret  */
  ESPCHK(0x109897c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009800 @ 0x10989800 (159 bytes, 47 insns) */
void f_10989800(void) {
  FTRACE(0x10989800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989800 push ebp */
  push32((uint32_t)(EBP));
  /* 10989801 mov ebp, esp */
  EBP = (ESP);
  /* 10989803 push ecx */
  push32((uint32_t)(ECX));
  /* 10989804 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1098980b jmp 0x10989816 */
  goto L_10989816;
L_1098980d:;
  /* 1098980d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989810 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10989816:;
  /* 10989816 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098981a jge 0x10989869 */
  if ((C.sf==C.of)) goto L_10989869;
  /* 1098981c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098981f cmp dword ptr [ecx*4 + 0x109afb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109afb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989827 je 0x10989867 */
  if (C.zf) goto L_10989867;
  /* 10989829 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098982d je 0x10989867 */
  if (C.zf) goto L_10989867;
  /* 1098982f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989833 je 0x10989867 */
  if (C.zf) goto L_10989867;
  /* 10989835 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989839 je 0x10989867 */
  if (C.zf) goto L_10989867;
  /* 1098983b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1098983f je 0x10989867 */
  if (C.zf) goto L_10989867;
  /* 10989841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989844 mov eax, dword ptr [edx*4 + 0x109afb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x109afb40)));
  /* 1098984b push eax */
  push32((uint32_t)(EAX));
  /* 1098984c call dword ptr [0x109b43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b0))), 0x10989852u);
  /* 10989852 push 2 */
  push32((uint32_t)(0x2u));
  /* 10989854 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989857 mov edx, dword ptr [ecx*4 + 0x109afb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x109afb40)));
  /* 1098985e push edx */
  push32((uint32_t)(EDX));
  /* 1098985f call 0x10986930 */
  push32(0x10989864u); f_10986930();
  /* 10989864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989867:;
  /* 10989867 jmp 0x1098980d */
  goto L_1098980d;
L_10989869:;
  /* 10989869 mov eax, dword ptr [0x109afb64] */
  EAX = (r32((uint32_t)(0x109afb64)));
  /* 1098986e push eax */
  push32((uint32_t)(EAX));
  /* 1098986f call dword ptr [0x109b43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b0))), 0x10989875u);
  /* 10989875 mov ecx, dword ptr [0x109afb74] */
  ECX = (r32((uint32_t)(0x109afb74)));
  /* 1098987b push ecx */
  push32((uint32_t)(ECX));
  /* 1098987c call dword ptr [0x109b43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b0))), 0x10989882u);
  /* 10989882 mov edx, dword ptr [0x109afb84] */
  EDX = (r32((uint32_t)(0x109afb84)));
  /* 10989888 push edx */
  push32((uint32_t)(EDX));
  /* 10989889 call dword ptr [0x109b43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b0))), 0x1098988fu);
  /* 1098988f mov eax, dword ptr [0x109afb44] */
  EAX = (r32((uint32_t)(0x109afb44)));
  /* 10989894 push eax */
  push32((uint32_t)(EAX));
  /* 10989895 call dword ptr [0x109b43b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b43b0))), 0x1098989bu);
  /* 1098989b mov esp, ebp */
  ESP = (EBP);
  /* 1098989d pop ebp */
  EBP = (pop32());
  /* 1098989e ret  */
  ESPCHK(0x10989800u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a0 @ 0x109898a0 (151 bytes, 46 insns) */
void f_109898a0(void) {
  FTRACE(0x109898a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109898a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109898a1 mov ebp, esp */
  EBP = (ESP);
  /* 109898a3 push ecx */
  push32((uint32_t)(ECX));
  /* 109898a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109898a7 cmp dword ptr [eax*4 + 0x109afb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x109afb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109898af jne 0x10989922 */
  if (!C.zf) goto L_10989922;
  /* 109898b1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 109898b6 push 0x109ad228 */
  push32((uint32_t)(0x109ad228u));
  /* 109898bb push 2 */
  push32((uint32_t)(0x2u));
  /* 109898bd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109898bf call 0x10985ea0 */
  push32(0x109898c4u); f_10985ea0();
  /* 109898c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109898c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109898ca cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109898ce jne 0x109898da */
  if (!C.zf) goto L_109898da;
  /* 109898d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109898d2 call 0x10984e10 */
  push32(0x109898d7u); f_10984e10();
  /* 109898d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109898da:;
  /* 109898da push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109898dc call 0x109898a0 */
  push32(0x109898e1u); f_109898a0();
  /* 109898e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109898e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109898e7 cmp dword ptr [ecx*4 + 0x109afb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x109afb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109898ef jne 0x1098990a */
  if (!C.zf) goto L_1098990a;
  /* 109898f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 109898f4 push edx */
  push32((uint32_t)(EDX));
  /* 109898f5 call dword ptr [0x109b4334] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4334))), 0x109898fbu);
  /* 109898fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109898fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989901 mov dword ptr [eax*4 + 0x109afb40], ecx */
  w32((uint32_t)(EAX*4 + 0x109afb40), (ECX));
  /* 10989908 jmp 0x10989918 */
  goto L_10989918;
L_1098990a:;
  /* 1098990a push 2 */
  push32((uint32_t)(0x2u));
  /* 1098990c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1098990f push edx */
  push32((uint32_t)(EDX));
  /* 10989910 call 0x10986930 */
  push32(0x10989915u); f_10986930();
  /* 10989915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989918:;
  /* 10989918 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1098991a call 0x10989940 */
  push32(0x1098991fu); f_10989940();
  /* 1098991f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989922:;
  /* 10989922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989925 mov ecx, dword ptr [eax*4 + 0x109afb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109afb40)));
  /* 1098992c push ecx */
  push32((uint32_t)(ECX));
  /* 1098992d call dword ptr [0x109b4330] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4330))), 0x10989933u);
  /* 10989933 mov esp, ebp */
  ESP = (EBP);
  /* 10989935 pop ebp */
  EBP = (pop32());
  /* 10989936 ret  */
  ESPCHK(0x109898a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009940 @ 0x10989940 (22 bytes, 8 insns) */
void f_10989940(void) {
  FTRACE(0x10989940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989940 push ebp */
  push32((uint32_t)(EBP));
  /* 10989941 mov ebp, esp */
  EBP = (ESP);
  /* 10989943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989946 mov ecx, dword ptr [eax*4 + 0x109afb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x109afb40)));
  /* 1098994d push ecx */
  push32((uint32_t)(ECX));
  /* 1098994e call dword ptr [0x109b432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b432c))), 0x10989954u);
  /* 10989954 pop ebp */
  EBP = (pop32());
  /* 10989955 ret  */
  ESPCHK(0x10989940u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x10989960 (26 bytes, 10 insns) */
void f_10989960(void) {
  FTRACE(0x10989960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989960 push ebp */
  push32((uint32_t)(EBP));
  /* 10989961 mov ebp, esp */
  EBP = (ESP);
  /* 10989963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989966 push eax */
  push32((uint32_t)(EAX));
  /* 10989967 push 0 */
  push32((uint32_t)(0x0u));
  /* 10989969 call dword ptr [0x109b4328] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4328))), 0x1098996fu);
  /* 1098996f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10989974 call dword ptr [0x109b4378] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4378))), 0x1098997au);
  /* 1098997a pop ebp */
  EBP = (pop32());
  /* 1098997b ret  */
  ESPCHK(0x10989960u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10989980 (446 bytes, 130 insns) */
void f_10989980(void) {
  FTRACE(0x10989980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989980 push ebp */
  push32((uint32_t)(EBP));
  /* 10989981 mov ebp, esp */
  EBP = (ESP);
  /* 10989983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989986 call 0x109858e0 */
  push32(0x1098998bu); f_109858e0();
  /* 1098998b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1098998e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989991 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10989994 push ecx */
  push32((uint32_t)(ECX));
  /* 10989995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989998 push edx */
  push32((uint32_t)(EDX));
  /* 10989999 call 0x10989b40 */
  push32(0x1098999eu); f_10989b40();
  /* 1098999e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109899a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 109899a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109899a8 je 0x109899b3 */
  if (C.zf) goto L_109899b3;
  /* 109899aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109899ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109899b1 jne 0x109899c2 */
  if (!C.zf) goto L_109899c2;
L_109899b3:;
  /* 109899b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109899b6 push ecx */
  push32((uint32_t)(ECX));
  /* 109899b7 call dword ptr [0x109b4324] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4324))), 0x109899bdu);
  /* 109899bd jmp 0x10989b3a */
  goto L_10989b3a;
L_109899c2:;
  /* 109899c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109899c5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109899c9 jne 0x109899df */
  if (!C.zf) goto L_109899df;
  /* 109899cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109899ce mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 109899d5 mov eax, 1 */
  EAX = (0x1u);
  /* 109899da jmp 0x10989b3a */
  goto L_10989b3a;
L_109899df:;
  /* 109899df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109899e2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109899e6 jne 0x109899f0 */
  if (!C.zf) goto L_109899f0;
  /* 109899e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109899eb jmp 0x10989b3a */
  goto L_10989b3a;
L_109899f0:;
  /* 109899f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 109899f3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 109899f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109899f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109899fc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 109899ff mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10989a02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989a05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989a08 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10989a0b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989a0e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989a12 jne 0x10989b17 */
  if (!C.zf) goto L_10989b17;
  /* 10989a18 mov eax, dword ptr [0x109afc78] */
  EAX = (r32((uint32_t)(0x109afc78)));
  /* 10989a1d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10989a20 jmp 0x10989a2b */
  goto L_10989a2b;
L_10989a22:;
  /* 10989a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10989a25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989a28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10989a2b:;
  /* 10989a2b mov edx, dword ptr [0x109afc78] */
  EDX = (r32((uint32_t)(0x109afc78)));
  /* 10989a31 add edx, dword ptr [0x109afc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x109afc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989a37 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989a3a jge 0x10989a52 */
  if ((C.sf==C.of)) goto L_10989a52;
  /* 10989a3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10989a3f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10989a42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989a45 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10989a48 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10989a50 jmp 0x10989a22 */
  goto L_10989a22;
L_10989a52:;
  /* 10989a52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989a55 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10989a58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10989a5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989a5e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989a64 jne 0x10989a75 */
  if (!C.zf) goto L_10989a75;
  /* 10989a66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989a69 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10989a70 jmp 0x10989afd */
  goto L_10989afd;
L_10989a75:;
  /* 10989a75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989a78 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989a7e jne 0x10989a8c */
  if (!C.zf) goto L_10989a8c;
  /* 10989a80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989a83 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10989a8a jmp 0x10989afd */
  goto L_10989afd;
L_10989a8c:;
  /* 10989a8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989a8f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989a95 jne 0x10989aa3 */
  if (!C.zf) goto L_10989aa3;
  /* 10989a97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989a9a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10989aa1 jmp 0x10989afd */
  goto L_10989afd;
L_10989aa3:;
  /* 10989aa3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989aa6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989aac jne 0x10989aba */
  if (!C.zf) goto L_10989aba;
  /* 10989aae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989ab1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10989ab8 jmp 0x10989afd */
  goto L_10989afd;
L_10989aba:;
  /* 10989aba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989abd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989ac3 jne 0x10989ad1 */
  if (!C.zf) goto L_10989ad1;
  /* 10989ac5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989ac8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10989acf jmp 0x10989afd */
  goto L_10989afd;
L_10989ad1:;
  /* 10989ad1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989ad4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989ada jne 0x10989ae8 */
  if (!C.zf) goto L_10989ae8;
  /* 10989adc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989adf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10989ae6 jmp 0x10989afd */
  goto L_10989afd;
L_10989ae8:;
  /* 10989ae8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989aeb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989af1 jne 0x10989afd */
  if (!C.zf) goto L_10989afd;
  /* 10989af3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989af6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10989afd:;
  /* 10989afd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989b00 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10989b03 push edx */
  push32((uint32_t)(EDX));
  /* 10989b04 push 8 */
  push32((uint32_t)(0x8u));
  /* 10989b06 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10989b09u);
  /* 10989b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989b0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989b0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10989b12 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10989b15 jmp 0x10989b2e */
  goto L_10989b2e;
L_10989b17:;
  /* 10989b17 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989b1a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10989b21 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10989b24 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10989b27 push ecx */
  push32((uint32_t)(ECX));
  /* 10989b28 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10989b2bu);
  /* 10989b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10989b2e:;
  /* 10989b2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989b31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10989b34 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10989b37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10989b3a:;
  /* 10989b3a mov esp, ebp */
  ESP = (EBP);
  /* 10989b3c pop ebp */
  EBP = (pop32());
  /* 10989b3d ret  */
  ESPCHK(0x10989980u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b40 @ 0x10989b40 (89 bytes, 35 insns) */
void f_10989b40(void) {
  FTRACE(0x10989b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10989b41 mov ebp, esp */
  EBP = (ESP);
  /* 10989b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10989b44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989b47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10989b4a:;
  /* 10989b4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989b4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10989b4f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989b52 je 0x10989b72 */
  if (C.zf) goto L_10989b72;
  /* 10989b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989b57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989b5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10989b5d mov ecx, dword ptr [0x109afc84] */
  ECX = (r32((uint32_t)(0x109afc84)));
  /* 10989b63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10989b66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989b69 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989b6b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989b6e jae 0x10989b72 */
  if (!C.cf) goto L_10989b72;
  /* 10989b70 jmp 0x10989b4a */
  goto L_10989b4a;
L_10989b72:;
  /* 10989b72 mov eax, dword ptr [0x109afc84] */
  EAX = (r32((uint32_t)(0x109afc84)));
  /* 10989b77 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10989b7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989b7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989b7f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989b82 jae 0x10989b8e */
  if (!C.cf) goto L_10989b8e;
  /* 10989b84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989b87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10989b89 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989b8c je 0x10989b92 */
  if (C.zf) goto L_10989b92;
L_10989b8e:;
  /* 10989b8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989b90 jmp 0x10989b95 */
  goto L_10989b95;
L_10989b92:;
  /* 10989b92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10989b95:;
  /* 10989b95 mov esp, ebp */
  ESP = (EBP);
  /* 10989b97 pop ebp */
  EBP = (pop32());
  /* 10989b98 ret  */
  ESPCHK(0x10989b40u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10989ba0 (48 bytes, 17 insns) */
void f_10989ba0(void) {
  FTRACE(0x10989ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10989ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10989ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10989ba4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10989ba6 call 0x109898a0 */
  push32(0x10989babu); f_109898a0();
  /* 10989bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989bae mov eax, dword ptr [0x109b183c] */
  EAX = (r32((uint32_t)(0x109b183c)));
  /* 10989bb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10989bb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989bb9 mov dword ptr [0x109b183c], ecx */
  w32((uint32_t)(0x109b183c), (ECX));
  /* 10989bbf push 9 */
  push32((uint32_t)(0x9u));
  /* 10989bc1 call 0x10989940 */
  push32(0x10989bc6u); f_10989940();
  /* 10989bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989bc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989bcc mov esp, ebp */
  ESP = (EBP);
  /* 10989bce pop ebp */
  EBP = (pop32());
  /* 10989bcf ret  */
  ESPCHK(0x10989ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x10989bd0 (10 bytes, 5 insns) */
void f_10989bd0(void) {
  FTRACE(0x10989bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10989bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10989bd3 mov eax, dword ptr [0x109b183c] */
  EAX = (r32((uint32_t)(0x109b183c)));
  /* 10989bd8 pop ebp */
  EBP = (pop32());
  /* 10989bd9 ret  */
  ESPCHK(0x10989bd0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10989be0 (45 bytes, 19 insns) */
void f_10989be0(void) {
  FTRACE(0x10989be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10989be1 mov ebp, esp */
  EBP = (ESP);
  /* 10989be3 push ecx */
  push32((uint32_t)(ECX));
  /* 10989be4 mov eax, dword ptr [0x109b183c] */
  EAX = (r32((uint32_t)(0x109b183c)));
  /* 10989be9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10989bec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989bf0 je 0x10989c00 */
  if (C.zf) goto L_10989c00;
  /* 10989bf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989bf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10989bf6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10989bf9u);
  /* 10989bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10989bfe jne 0x10989c04 */
  if (!C.zf) goto L_10989c04;
L_10989c00:;
  /* 10989c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989c02 jmp 0x10989c09 */
  goto L_10989c09;
L_10989c04:;
  /* 10989c04 mov eax, 1 */
  EAX = (0x1u);
L_10989c09:;
  /* 10989c09 mov esp, ebp */
  ESP = (EBP);
  /* 10989c0b pop ebp */
  EBP = (pop32());
  /* 10989c0c ret  */
  ESPCHK(0x10989be0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10989c10 (88 bytes, 40 insns) */
void f_10989c10(void) {
  FTRACE(0x10989c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989c10 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10989c14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10989c18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10989c1a je 0x10989c63 */
  if (C.zf) goto L_10989c63;
  /* 10989c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989c1e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10989c22 push edi */
  push32((uint32_t)(EDI));
  /* 10989c23 mov edi, ecx */
  EDI = (ECX);
  /* 10989c25 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989c28 jb 0x10989c57 */
  if (C.cf) goto L_10989c57;
  /* 10989c2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10989c2c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10989c2f je 0x10989c39 */
  if (C.zf) goto L_10989c39;
  /* 10989c31 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10989c33:;
  /* 10989c33 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10989c35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10989c36 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10989c37 jne 0x10989c33 */
  if (!C.zf) goto L_10989c33;
L_10989c39:;
  /* 10989c39 mov ecx, eax */
  ECX = (EAX);
  /* 10989c3b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10989c3e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989c40 mov ecx, eax */
  ECX = (EAX);
  /* 10989c42 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10989c45 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989c47 mov ecx, edx */
  ECX = (EDX);
  /* 10989c49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10989c4c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10989c4f je 0x10989c57 */
  if (C.zf) goto L_10989c57;
  /* 10989c51 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10989c53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10989c55 je 0x10989c5d */
  if (C.zf) goto L_10989c5d;
L_10989c57:;
  /* 10989c57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10989c59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10989c5a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10989c5b jne 0x10989c57 */
  if (!C.zf) goto L_10989c57;
L_10989c5d:;
  /* 10989c5d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10989c61 pop edi */
  EDI = (pop32());
  /* 10989c62 ret  */
  ESPCHK(0x10989c10u, _esp0);
  ESP += 4; return;
L_10989c63:;
  /* 10989c63 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10989c67 ret  */
  ESPCHK(0x10989c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c70 @ 0x10989c70 (23 bytes, 10 insns) */
void f_10989c70(void) {
  FTRACE(0x10989c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10989c71 mov ebp, esp */
  EBP = (ESP);
  /* 10989c73 mov eax, dword ptr [0x109b1838] */
  EAX = (r32((uint32_t)(0x109b1838)));
  /* 10989c78 push eax */
  push32((uint32_t)(EAX));
  /* 10989c79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989c7c push ecx */
  push32((uint32_t)(ECX));
  /* 10989c7d call 0x10989c90 */
  push32(0x10989c82u); f_10989c90();
  /* 10989c82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989c85 pop ebp */
  EBP = (pop32());
  /* 10989c86 ret  */
  ESPCHK(0x10989c70u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10989c90 (87 bytes, 34 insns) */
void f_10989c90(void) {
  FTRACE(0x10989c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10989c91 mov ebp, esp */
  EBP = (ESP);
  /* 10989c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10989c94 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989c98 jbe 0x10989c9e */
  if ((C.cf||C.zf)) goto L_10989c9e;
  /* 10989c9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989c9c jmp 0x10989ce3 */
  goto L_10989ce3;
L_10989c9e:;
  /* 10989c9e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989ca2 ja 0x10989cb5 */
  if ((!C.cf&&!C.zf)) goto L_10989cb5;
  /* 10989ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989ca7 push eax */
  push32((uint32_t)(EAX));
  /* 10989ca8 call 0x10989cf0 */
  push32(0x10989cadu); f_10989cf0();
  /* 10989cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989cb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10989cb3 jmp 0x10989cbc */
  goto L_10989cbc;
L_10989cb5:;
  /* 10989cb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10989cbc:;
  /* 10989cbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989cc0 jne 0x10989cc8 */
  if (!C.zf) goto L_10989cc8;
  /* 10989cc2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989cc6 jne 0x10989ccd */
  if (!C.zf) goto L_10989ccd;
L_10989cc8:;
  /* 10989cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989ccb jmp 0x10989ce3 */
  goto L_10989ce3;
L_10989ccd:;
  /* 10989ccd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10989cd1 call 0x10989be0 */
  push32(0x10989cd6u); f_10989be0();
  /* 10989cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10989cdb jne 0x10989ce1 */
  if (!C.zf) goto L_10989ce1;
  /* 10989cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989cdf jmp 0x10989ce3 */
  goto L_10989ce3;
L_10989ce1:;
  /* 10989ce1 jmp 0x10989c9e */
  goto L_10989c9e;
L_10989ce3:;
  /* 10989ce3 mov esp, ebp */
  ESP = (EBP);
  /* 10989ce5 pop ebp */
  EBP = (pop32());
  /* 10989ce6 ret  */
  ESPCHK(0x10989c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cf0 @ 0x10989cf0 (109 bytes, 37 insns) */
void f_10989cf0(void) {
  FTRACE(0x10989cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10989cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10989cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10989cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989cf7 cmp eax, dword ptr [0x109afc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109afc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989cfd ja 0x10989d2d */
  if ((!C.cf&&!C.zf)) goto L_10989d2d;
  /* 10989cff push 9 */
  push32((uint32_t)(0x9u));
  /* 10989d01 call 0x109898a0 */
  push32(0x10989d06u); f_109898a0();
  /* 10989d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989d09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989d0c push ecx */
  push32((uint32_t)(ECX));
  /* 10989d0d call 0x1098a830 */
  push32(0x10989d12u); f_1098a830();
  /* 10989d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989d15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10989d18 push 9 */
  push32((uint32_t)(0x9u));
  /* 10989d1a call 0x10989940 */
  push32(0x10989d1fu); f_10989940();
  /* 10989d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989d22 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989d26 je 0x10989d2d */
  if (C.zf) goto L_10989d2d;
  /* 10989d28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989d2b jmp 0x10989d59 */
  goto L_10989d59;
L_10989d2d:;
  /* 10989d2d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989d31 jne 0x10989d3a */
  if (!C.zf) goto L_10989d3a;
  /* 10989d33 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10989d3a:;
  /* 10989d3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989d3d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989d40 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10989d43 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10989d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989d49 push eax */
  push32((uint32_t)(EAX));
  /* 10989d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10989d4c mov ecx, dword ptr [0x109b2fec] */
  ECX = (r32((uint32_t)(0x109b2fec)));
  /* 10989d52 push ecx */
  push32((uint32_t)(ECX));
  /* 10989d53 call dword ptr [0x109b4320] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b4320))), 0x10989d59u);
L_10989d59:;
  /* 10989d59 mov esp, ebp */
  ESP = (EBP);
  /* 10989d5b pop ebp */
  EBP = (pop32());
  /* 10989d5c ret  */
  ESPCHK(0x10989cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x10989d60 (10 bytes, 5 insns) */
void f_10989d60(void) {
  FTRACE(0x10989d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10989d61 mov ebp, esp */
  EBP = (ESP);
  /* 10989d63 mov eax, 1 */
  EAX = (0x1u);
  /* 10989d68 pop ebp */
  EBP = (pop32());
  /* 10989d69 ret  */
  ESPCHK(0x10989d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d70 @ 0x10989d70 (173 bytes, 59 insns) */
void f_10989d70(void) {
  FTRACE(0x10989d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10989d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10989d71 mov ebp, esp */
  EBP = (ESP);
  /* 10989d73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10989d76 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989d7a jbe 0x10989d83 */
  if ((C.cf||C.zf)) goto L_10989d83;
  /* 10989d7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10989d7e jmp 0x10989e19 */
  goto L_10989e19;
L_10989d83:;
  /* 10989d83 push 9 */
  push32((uint32_t)(0x9u));
  /* 10989d85 call 0x109898a0 */
  push32(0x10989d8au); f_109898a0();
  /* 10989d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989d90 push eax */
  push32((uint32_t)(EAX));
  /* 10989d91 call 0x1098a1a0 */
  push32(0x10989d96u); f_1098a1a0();
  /* 10989d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989d99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10989d9c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989da0 je 0x10989de1 */
  if (C.zf) goto L_10989de1;
  /* 10989da2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10989da9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989dac cmp ecx, dword ptr [0x109afc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109afc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989db2 ja 0x10989dd2 */
  if ((!C.cf&&!C.zf)) goto L_10989dd2;
  /* 10989db4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989db7 push edx */
  push32((uint32_t)(EDX));
  /* 10989db8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989dbb push eax */
  push32((uint32_t)(EAX));
  /* 10989dbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10989dbf push ecx */
  push32((uint32_t)(ECX));
  /* 10989dc0 call 0x1098b070 */
  push32(0x10989dc5u); f_1098b070();
  /* 10989dc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10989dca je 0x10989dd2 */
  if (C.zf) goto L_10989dd2;
  /* 10989dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989dcf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10989dd2:;
  /* 10989dd2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10989dd4 call 0x10989940 */
  push32(0x10989dd9u); f_10989940();
  /* 10989dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989ddc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10989ddf jmp 0x10989e19 */
  goto L_10989e19;
L_10989de1:;
  /* 10989de1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10989de3 call 0x10989940 */
  push32(0x10989de8u); f_10989940();
  /* 10989de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10989deb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10989def jne 0x10989df8 */
  if (!C.zf) goto L_10989df8;
  /* 10989df1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10989df8:;
  /* 10989df8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989dfb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10989dfe and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10989e00 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10989e03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10989e06 push ecx */
  push32((uint32_t)(ECX));
  /* 10989e07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10989e0a push edx */
  push32((uint32_t)(EDX));
  /* 10989e0b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10989e0d mov eax, dword ptr [0x109b2fec] */
  EAX = (r32((uint32_t)(0x109b2fec)));
  /* 10989e12 push eax */
  push32((uint32_t)(EAX));
  /* 10989e13 call dword ptr [0x109b431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x109b431c))), 0x10989e19u);
L_10989e19:;
  /* 10989e19 mov esp, ebp */
  ESP = (EBP);
  /* 10989e1b pop ebp */
  EBP = (pop32());
  /* 10989e1c ret  */
  ESPCHK(0x10989d70u, _esp0);
  ESP += 4; return;
}

