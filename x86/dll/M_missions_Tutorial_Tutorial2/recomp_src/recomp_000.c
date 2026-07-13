#include "recomp.h"

/* OnInit @ 0x123d1005 (5 bytes, 1 insns) */
void f_123d1005(void) {
  FTRACE(0x123d1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d1005 jmp 0x123d1090 */
  f_123d1090(); return;
}

/* thunk_FUN_10001030 @ 0x123d100a (5 bytes, 1 insns) */
void f_123d100a(void) {
  FTRACE(0x123d100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d100a jmp 0x123d1030 */
  f_123d1030(); return;
}

/* ProcessScenary @ 0x123d100f (5 bytes, 1 insns) */
void f_123d100f(void) {
  FTRACE(0x123d100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d100f jmp 0x123d1f80 */
  f_123d1f80(); return;
}

/* FUN_10001030 @ 0x123d1030 (67 bytes, 26 insns) */
void f_123d1030(void) {
  FTRACE(0x123d1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d1030 push ebp */
  push32((uint32_t)(EBP));
  /* 123d1031 mov ebp, esp */
  EBP = (ESP);
  /* 123d1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d1036 push ebx */
  push32((uint32_t)(EBX));
  /* 123d1037 push esi */
  push32((uint32_t)(ESI));
  /* 123d1038 push edi */
  push32((uint32_t)(EDI));
  /* 123d1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 123d103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 123d1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 123d1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123d1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1052 je 0x123d1056 */
  if (C.zf) goto L_123d1056;
  /* 123d1054 jmp 0x123d105b */
  goto L_123d105b;
L_123d1056:;
  /* 123d1056 call 0x123d1005 */
  push32(0x123d105bu); f_123d1005();
L_123d105b:;
  /* 123d105b mov eax, 1 */
  EAX = (0x1u);
  /* 123d1060 pop edi */
  EDI = (pop32());
  /* 123d1061 pop esi */
  ESI = (pop32());
  /* 123d1062 pop ebx */
  EBX = (pop32());
  /* 123d1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1068 call 0x123d50e0 */
  push32(0x123d106du); f_123d50e0();
  /* 123d106d mov esp, ebp */
  ESP = (EBP);
  /* 123d106f pop ebp */
  EBP = (pop32());
  /* 123d1070 ret 0xc */
  ESPCHK(0x123d1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x123d1090 (3059 bytes, 782 insns) */
void f_123d1090(void) {
  FTRACE(0x123d1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d1090 push ebp */
  push32((uint32_t)(EBP));
  /* 123d1091 mov ebp, esp */
  EBP = (ESP);
  /* 123d1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d1096 push ebx */
  push32((uint32_t)(EBX));
  /* 123d1097 push esi */
  push32((uint32_t)(ESI));
  /* 123d1098 push edi */
  push32((uint32_t)(EDI));
  /* 123d1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 123d109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 123d10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 123d10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123d10a8 mov esi, esp */
  ESI = (ESP);
  /* 123d10aa push 0x123fd5b8 */
  push32((uint32_t)(0x123fd5b8u));
  /* 123d10af push 0x124024f0 */
  push32((uint32_t)(0x124024f0u));
  /* 123d10b4 call dword ptr [0x12405474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405474))), 0x123d10bau);
  /* 123d10ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d10bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d10bf call 0x123d50e0 */
  push32(0x123d10c4u); f_123d50e0();
  /* 123d10c4 mov esi, esp */
  ESI = (ESP);
  /* 123d10c6 push 0x123fd5a8 */
  push32((uint32_t)(0x123fd5a8u));
  /* 123d10cb push 0x124024f8 */
  push32((uint32_t)(0x124024f8u));
  /* 123d10d0 call dword ptr [0x12405474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405474))), 0x123d10d6u);
  /* 123d10d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d10d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d10db call 0x123d50e0 */
  push32(0x123d10e0u); f_123d50e0();
  /* 123d10e0 mov esi, esp */
  ESI = (ESP);
  /* 123d10e2 push 0x123fd598 */
  push32((uint32_t)(0x123fd598u));
  /* 123d10e7 push 0x12402500 */
  push32((uint32_t)(0x12402500u));
  /* 123d10ec call dword ptr [0x12405474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405474))), 0x123d10f2u);
  /* 123d10f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d10f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d10f7 call 0x123d50e0 */
  push32(0x123d10fcu); f_123d50e0();
  /* 123d10fc mov esi, esp */
  ESI = (ESP);
  /* 123d10fe push 0x123fd588 */
  push32((uint32_t)(0x123fd588u));
  /* 123d1103 push 0x12402508 */
  push32((uint32_t)(0x12402508u));
  /* 123d1108 call dword ptr [0x12405474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405474))), 0x123d110eu);
  /* 123d110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1113 call 0x123d50e0 */
  push32(0x123d1118u); f_123d50e0();
  /* 123d1118 mov esi, esp */
  ESI = (ESP);
  /* 123d111a push 0x123fd584 */
  push32((uint32_t)(0x123fd584u));
  /* 123d111f push 0x12402528 */
  push32((uint32_t)(0x12402528u));
  /* 123d1124 call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d112au);
  /* 123d112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d112f call 0x123d50e0 */
  push32(0x123d1134u); f_123d50e0();
  /* 123d1134 mov esi, esp */
  ESI = (ESP);
  /* 123d1136 push 0x123fd580 */
  push32((uint32_t)(0x123fd580u));
  /* 123d113b push 0x12402530 */
  push32((uint32_t)(0x12402530u));
  /* 123d1140 call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d1146u);
  /* 123d1146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d114b call 0x123d50e0 */
  push32(0x123d1150u); f_123d50e0();
  /* 123d1150 mov esi, esp */
  ESI = (ESP);
  /* 123d1152 push 0x123fd57c */
  push32((uint32_t)(0x123fd57cu));
  /* 123d1157 push 0x12402538 */
  push32((uint32_t)(0x12402538u));
  /* 123d115c call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d1162u);
  /* 123d1162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1167 call 0x123d50e0 */
  push32(0x123d116cu); f_123d50e0();
  /* 123d116c mov esi, esp */
  ESI = (ESP);
  /* 123d116e push 0x123fd578 */
  push32((uint32_t)(0x123fd578u));
  /* 123d1173 push 0x12402540 */
  push32((uint32_t)(0x12402540u));
  /* 123d1178 call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d117eu);
  /* 123d117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1183 call 0x123d50e0 */
  push32(0x123d1188u); f_123d50e0();
  /* 123d1188 mov esi, esp */
  ESI = (ESP);
  /* 123d118a push 0x123fd574 */
  push32((uint32_t)(0x123fd574u));
  /* 123d118f push 0x12402548 */
  push32((uint32_t)(0x12402548u));
  /* 123d1194 call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d119au);
  /* 123d119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d119f call 0x123d50e0 */
  push32(0x123d11a4u); f_123d50e0();
  /* 123d11a4 mov esi, esp */
  ESI = (ESP);
  /* 123d11a6 push 0x123fd570 */
  push32((uint32_t)(0x123fd570u));
  /* 123d11ab push 0x12402550 */
  push32((uint32_t)(0x12402550u));
  /* 123d11b0 call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d11b6u);
  /* 123d11b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d11b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d11bb call 0x123d50e0 */
  push32(0x123d11c0u); f_123d50e0();
  /* 123d11c0 mov esi, esp */
  ESI = (ESP);
  /* 123d11c2 push 0x123fd56c */
  push32((uint32_t)(0x123fd56cu));
  /* 123d11c7 push 0x12402558 */
  push32((uint32_t)(0x12402558u));
  /* 123d11cc call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d11d2u);
  /* 123d11d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d11d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d11d7 call 0x123d50e0 */
  push32(0x123d11dcu); f_123d50e0();
  /* 123d11dc mov esi, esp */
  ESI = (ESP);
  /* 123d11de push 0x123fd568 */
  push32((uint32_t)(0x123fd568u));
  /* 123d11e3 push 0x12402560 */
  push32((uint32_t)(0x12402560u));
  /* 123d11e8 call dword ptr [0x1240546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240546c))), 0x123d11eeu);
  /* 123d11ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d11f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d11f3 call 0x123d50e0 */
  push32(0x123d11f8u); f_123d50e0();
  /* 123d11f8 mov esi, esp */
  ESI = (ESP);
  /* 123d11fa push 0x123fd564 */
  push32((uint32_t)(0x123fd564u));
  /* 123d11ff push 0x12402510 */
  push32((uint32_t)(0x12402510u));
  /* 123d1204 call dword ptr [0x1240547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240547c))), 0x123d120au);
  /* 123d120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d120f call 0x123d50e0 */
  push32(0x123d1214u); f_123d50e0();
  /* 123d1214 mov esi, esp */
  ESI = (ESP);
  /* 123d1216 push 0x123fd560 */
  push32((uint32_t)(0x123fd560u));
  /* 123d121b push 0x12402518 */
  push32((uint32_t)(0x12402518u));
  /* 123d1220 call dword ptr [0x1240547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240547c))), 0x123d1226u);
  /* 123d1226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d122b call 0x123d50e0 */
  push32(0x123d1230u); f_123d50e0();
  /* 123d1230 mov esi, esp */
  ESI = (ESP);
  /* 123d1232 push 0x123fd55c */
  push32((uint32_t)(0x123fd55cu));
  /* 123d1237 push 0x12402520 */
  push32((uint32_t)(0x12402520u));
  /* 123d123c call dword ptr [0x1240547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240547c))), 0x123d1242u);
  /* 123d1242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1247 call 0x123d50e0 */
  push32(0x123d124cu); f_123d50e0();
  /* 123d124c mov esi, esp */
  ESI = (ESP);
  /* 123d124e push 0x123fd544 */
  push32((uint32_t)(0x123fd544u));
  /* 123d1253 push 0x12402430 */
  push32((uint32_t)(0x12402430u));
  /* 123d1258 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d125eu);
  /* 123d125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1263 call 0x123d50e0 */
  push32(0x123d1268u); f_123d50e0();
  /* 123d1268 mov esi, esp */
  ESI = (ESP);
  /* 123d126a push 0x123fd530 */
  push32((uint32_t)(0x123fd530u));
  /* 123d126f push 0x12402448 */
  push32((uint32_t)(0x12402448u));
  /* 123d1274 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d127au);
  /* 123d127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d127f call 0x123d50e0 */
  push32(0x123d1284u); f_123d50e0();
  /* 123d1284 mov esi, esp */
  ESI = (ESP);
  /* 123d1286 push 0x123fd51c */
  push32((uint32_t)(0x123fd51cu));
  /* 123d128b push 0x12402460 */
  push32((uint32_t)(0x12402460u));
  /* 123d1290 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1296u);
  /* 123d1296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d129b call 0x123d50e0 */
  push32(0x123d12a0u); f_123d50e0();
  /* 123d12a0 mov esi, esp */
  ESI = (ESP);
  /* 123d12a2 push 0x123fd50c */
  push32((uint32_t)(0x123fd50cu));
  /* 123d12a7 push 0x12402478 */
  push32((uint32_t)(0x12402478u));
  /* 123d12ac call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d12b2u);
  /* 123d12b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d12b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d12b7 call 0x123d50e0 */
  push32(0x123d12bcu); f_123d50e0();
  /* 123d12bc mov esi, esp */
  ESI = (ESP);
  /* 123d12be push 0x123fd4fc */
  push32((uint32_t)(0x123fd4fcu));
  /* 123d12c3 push 0x12402488 */
  push32((uint32_t)(0x12402488u));
  /* 123d12c8 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d12ceu);
  /* 123d12ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d12d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d12d3 call 0x123d50e0 */
  push32(0x123d12d8u); f_123d50e0();
  /* 123d12d8 mov esi, esp */
  ESI = (ESP);
  /* 123d12da push 0x123fd4ec */
  push32((uint32_t)(0x123fd4ecu));
  /* 123d12df push 0x12402498 */
  push32((uint32_t)(0x12402498u));
  /* 123d12e4 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d12eau);
  /* 123d12ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d12ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d12ef call 0x123d50e0 */
  push32(0x123d12f4u); f_123d50e0();
  /* 123d12f4 mov esi, esp */
  ESI = (ESP);
  /* 123d12f6 push 0x123fd4dc */
  push32((uint32_t)(0x123fd4dcu));
  /* 123d12fb push 0x124024a0 */
  push32((uint32_t)(0x124024a0u));
  /* 123d1300 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1306u);
  /* 123d1306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d130b call 0x123d50e0 */
  push32(0x123d1310u); f_123d50e0();
  /* 123d1310 mov esi, esp */
  ESI = (ESP);
  /* 123d1312 push 0x123fd4cc */
  push32((uint32_t)(0x123fd4ccu));
  /* 123d1317 push 0x124024a8 */
  push32((uint32_t)(0x124024a8u));
  /* 123d131c call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1322u);
  /* 123d1322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1327 call 0x123d50e0 */
  push32(0x123d132cu); f_123d50e0();
  /* 123d132c mov esi, esp */
  ESI = (ESP);
  /* 123d132e push 0x123fd4b8 */
  push32((uint32_t)(0x123fd4b8u));
  /* 123d1333 push 0x124024b8 */
  push32((uint32_t)(0x124024b8u));
  /* 123d1338 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d133eu);
  /* 123d133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1343 call 0x123d50e0 */
  push32(0x123d1348u); f_123d50e0();
  /* 123d1348 mov esi, esp */
  ESI = (ESP);
  /* 123d134a push 0x123fd4a0 */
  push32((uint32_t)(0x123fd4a0u));
  /* 123d134f push 0x124023e0 */
  push32((uint32_t)(0x124023e0u));
  /* 123d1354 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d135au);
  /* 123d135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d135f call 0x123d50e0 */
  push32(0x123d1364u); f_123d50e0();
  /* 123d1364 mov esi, esp */
  ESI = (ESP);
  /* 123d1366 push 0x123fd488 */
  push32((uint32_t)(0x123fd488u));
  /* 123d136b push 0x124023e8 */
  push32((uint32_t)(0x124023e8u));
  /* 123d1370 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1376u);
  /* 123d1376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d137b call 0x123d50e0 */
  push32(0x123d1380u); f_123d50e0();
  /* 123d1380 mov esi, esp */
  ESI = (ESP);
  /* 123d1382 push 0x123fd478 */
  push32((uint32_t)(0x123fd478u));
  /* 123d1387 push 0x124023f0 */
  push32((uint32_t)(0x124023f0u));
  /* 123d138c call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1392u);
  /* 123d1392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1397 call 0x123d50e0 */
  push32(0x123d139cu); f_123d50e0();
  /* 123d139c mov esi, esp */
  ESI = (ESP);
  /* 123d139e push 0x123fd460 */
  push32((uint32_t)(0x123fd460u));
  /* 123d13a3 push 0x124023f8 */
  push32((uint32_t)(0x124023f8u));
  /* 123d13a8 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d13aeu);
  /* 123d13ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d13b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d13b3 call 0x123d50e0 */
  push32(0x123d13b8u); f_123d50e0();
  /* 123d13b8 mov esi, esp */
  ESI = (ESP);
  /* 123d13ba push 0x123fd454 */
  push32((uint32_t)(0x123fd454u));
  /* 123d13bf push 0x12402408 */
  push32((uint32_t)(0x12402408u));
  /* 123d13c4 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d13cau);
  /* 123d13ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d13cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d13cf call 0x123d50e0 */
  push32(0x123d13d4u); f_123d50e0();
  /* 123d13d4 mov esi, esp */
  ESI = (ESP);
  /* 123d13d6 push 0x123fd448 */
  push32((uint32_t)(0x123fd448u));
  /* 123d13db push 0x12402418 */
  push32((uint32_t)(0x12402418u));
  /* 123d13e0 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d13e6u);
  /* 123d13e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d13e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d13eb call 0x123d50e0 */
  push32(0x123d13f0u); f_123d50e0();
  /* 123d13f0 mov esi, esp */
  ESI = (ESP);
  /* 123d13f2 push 0x123fd438 */
  push32((uint32_t)(0x123fd438u));
  /* 123d13f7 push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d13fc call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1402u);
  /* 123d1402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1407 call 0x123d50e0 */
  push32(0x123d140cu); f_123d50e0();
  /* 123d140c mov esi, esp */
  ESI = (ESP);
  /* 123d140e push 0x123fd428 */
  push32((uint32_t)(0x123fd428u));
  /* 123d1413 push 0x12402440 */
  push32((uint32_t)(0x12402440u));
  /* 123d1418 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d141eu);
  /* 123d141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1423 call 0x123d50e0 */
  push32(0x123d1428u); f_123d50e0();
  /* 123d1428 mov esi, esp */
  ESI = (ESP);
  /* 123d142a push 0x123fd418 */
  push32((uint32_t)(0x123fd418u));
  /* 123d142f push 0x12402458 */
  push32((uint32_t)(0x12402458u));
  /* 123d1434 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d143au);
  /* 123d143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d143f call 0x123d50e0 */
  push32(0x123d1444u); f_123d50e0();
  /* 123d1444 mov esi, esp */
  ESI = (ESP);
  /* 123d1446 push 0x123fd408 */
  push32((uint32_t)(0x123fd408u));
  /* 123d144b push 0x12402470 */
  push32((uint32_t)(0x12402470u));
  /* 123d1450 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1456u);
  /* 123d1456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d145b call 0x123d50e0 */
  push32(0x123d1460u); f_123d50e0();
  /* 123d1460 mov esi, esp */
  ESI = (ESP);
  /* 123d1462 push 0x123fd3ec */
  push32((uint32_t)(0x123fd3ecu));
  /* 123d1467 push 0x12402400 */
  push32((uint32_t)(0x12402400u));
  /* 123d146c call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1472u);
  /* 123d1472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1477 call 0x123d50e0 */
  push32(0x123d147cu); f_123d50e0();
  /* 123d147c mov esi, esp */
  ESI = (ESP);
  /* 123d147e push 0x123fd3dc */
  push32((uint32_t)(0x123fd3dcu));
  /* 123d1483 push 0x12402410 */
  push32((uint32_t)(0x12402410u));
  /* 123d1488 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d148eu);
  /* 123d148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1493 call 0x123d50e0 */
  push32(0x123d1498u); f_123d50e0();
  /* 123d1498 mov esi, esp */
  ESI = (ESP);
  /* 123d149a push 0x123fd3c0 */
  push32((uint32_t)(0x123fd3c0u));
  /* 123d149f push 0x12402420 */
  push32((uint32_t)(0x12402420u));
  /* 123d14a4 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d14aau);
  /* 123d14aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d14ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d14af call 0x123d50e0 */
  push32(0x123d14b4u); f_123d50e0();
  /* 123d14b4 mov esi, esp */
  ESI = (ESP);
  /* 123d14b6 push 0x123fd3a8 */
  push32((uint32_t)(0x123fd3a8u));
  /* 123d14bb push 0x12402438 */
  push32((uint32_t)(0x12402438u));
  /* 123d14c0 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d14c6u);
  /* 123d14c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d14c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d14cb call 0x123d50e0 */
  push32(0x123d14d0u); f_123d50e0();
  /* 123d14d0 mov esi, esp */
  ESI = (ESP);
  /* 123d14d2 push 0x123fd38c */
  push32((uint32_t)(0x123fd38cu));
  /* 123d14d7 push 0x12402450 */
  push32((uint32_t)(0x12402450u));
  /* 123d14dc call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d14e2u);
  /* 123d14e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d14e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d14e7 call 0x123d50e0 */
  push32(0x123d14ecu); f_123d50e0();
  /* 123d14ec mov esi, esp */
  ESI = (ESP);
  /* 123d14ee push 0x123fd374 */
  push32((uint32_t)(0x123fd374u));
  /* 123d14f3 push 0x12402468 */
  push32((uint32_t)(0x12402468u));
  /* 123d14f8 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d14feu);
  /* 123d14fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1503 call 0x123d50e0 */
  push32(0x123d1508u); f_123d50e0();
  /* 123d1508 mov esi, esp */
  ESI = (ESP);
  /* 123d150a push 0x123fd35c */
  push32((uint32_t)(0x123fd35cu));
  /* 123d150f push 0x12402480 */
  push32((uint32_t)(0x12402480u));
  /* 123d1514 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d151au);
  /* 123d151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d151f call 0x123d50e0 */
  push32(0x123d1524u); f_123d50e0();
  /* 123d1524 mov esi, esp */
  ESI = (ESP);
  /* 123d1526 push 0x123fd34c */
  push32((uint32_t)(0x123fd34cu));
  /* 123d152b push 0x12402490 */
  push32((uint32_t)(0x12402490u));
  /* 123d1530 call dword ptr [0x12405480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405480))), 0x123d1536u);
  /* 123d1536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d153b call 0x123d50e0 */
  push32(0x123d1540u); f_123d50e0();
  /* 123d1540 mov esi, esp */
  ESI = (ESP);
  /* 123d1542 push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d1547 call dword ptr [0x12405478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405478))), 0x123d154du);
  /* 123d154d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1552 call 0x123d50e0 */
  push32(0x123d1557u); f_123d50e0();
  /* 123d1557 mov esi, esp */
  ESI = (ESP);
  /* 123d1559 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d155e call dword ptr [0x12405478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405478))), 0x123d1564u);
  /* 123d1564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1569 call 0x123d50e0 */
  push32(0x123d156eu); f_123d50e0();
  /* 123d156e mov esi, esp */
  ESI = (ESP);
  /* 123d1570 push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d1575 call dword ptr [0x12405478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405478))), 0x123d157bu);
  /* 123d157b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d157e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1580 call 0x123d50e0 */
  push32(0x123d1585u); f_123d50e0();
  /* 123d1585 mov esi, esp */
  ESI = (ESP);
  /* 123d1587 push 0x124024d0 */
  push32((uint32_t)(0x124024d0u));
  /* 123d158c call dword ptr [0x12405478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405478))), 0x123d1592u);
  /* 123d1592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1595 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1597 call 0x123d50e0 */
  push32(0x123d159cu); f_123d50e0();
  /* 123d159c mov esi, esp */
  ESI = (ESP);
  /* 123d159e push 0x124024d8 */
  push32((uint32_t)(0x124024d8u));
  /* 123d15a3 call dword ptr [0x12405478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405478))), 0x123d15a9u);
  /* 123d15a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d15ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d15ae call 0x123d50e0 */
  push32(0x123d15b3u); f_123d50e0();
  /* 123d15b3 mov esi, esp */
  ESI = (ESP);
  /* 123d15b5 push 0x124024e0 */
  push32((uint32_t)(0x124024e0u));
  /* 123d15ba call dword ptr [0x12405478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405478))), 0x123d15c0u);
  /* 123d15c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d15c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d15c5 call 0x123d50e0 */
  push32(0x123d15cau); f_123d50e0();
  /* 123d15ca mov esi, esp */
  ESI = (ESP);
  /* 123d15cc push 0x124024e8 */
  push32((uint32_t)(0x124024e8u));
  /* 123d15d1 call dword ptr [0x12405478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405478))), 0x123d15d7u);
  /* 123d15d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d15da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d15dc call 0x123d50e0 */
  push32(0x123d15e1u); f_123d50e0();
  /* 123d15e1 mov esi, esp */
  ESI = (ESP);
  /* 123d15e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d15e5 push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d15ea call dword ptr [0x12405488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405488))), 0x123d15f0u);
  /* 123d15f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d15f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d15f5 call 0x123d50e0 */
  push32(0x123d15fau); f_123d50e0();
  /* 123d15fa mov esi, esp */
  ESI = (ESP);
  /* 123d15fc push 8 */
  push32((uint32_t)(0x8u));
  /* 123d15fe push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d1603 call dword ptr [0x12405488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405488))), 0x123d1609u);
  /* 123d1609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d160c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d160e call 0x123d50e0 */
  push32(0x123d1613u); f_123d50e0();
  /* 123d1613 mov esi, esp */
  ESI = (ESP);
  /* 123d1615 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d1617 push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d161c call dword ptr [0x12405488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405488))), 0x123d1622u);
  /* 123d1622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1625 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1627 call 0x123d50e0 */
  push32(0x123d162cu); f_123d50e0();
  /* 123d162c mov esi, esp */
  ESI = (ESP);
  /* 123d162e push 8 */
  push32((uint32_t)(0x8u));
  /* 123d1630 push 0x124024d0 */
  push32((uint32_t)(0x124024d0u));
  /* 123d1635 call dword ptr [0x12405488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405488))), 0x123d163bu);
  /* 123d163b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d163e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1640 call 0x123d50e0 */
  push32(0x123d1645u); f_123d50e0();
  /* 123d1645 mov esi, esp */
  ESI = (ESP);
  /* 123d1647 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d1649 push 0x124024d8 */
  push32((uint32_t)(0x124024d8u));
  /* 123d164e call dword ptr [0x12405488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405488))), 0x123d1654u);
  /* 123d1654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1657 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1659 call 0x123d50e0 */
  push32(0x123d165eu); f_123d50e0();
  /* 123d165e mov esi, esp */
  ESI = (ESP);
  /* 123d1660 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d1662 push 0x124024e0 */
  push32((uint32_t)(0x124024e0u));
  /* 123d1667 call dword ptr [0x12405488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405488))), 0x123d166du);
  /* 123d166d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1670 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1672 call 0x123d50e0 */
  push32(0x123d1677u); f_123d50e0();
  /* 123d1677 mov esi, esp */
  ESI = (ESP);
  /* 123d1679 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d167b push 0x124024e8 */
  push32((uint32_t)(0x124024e8u));
  /* 123d1680 call dword ptr [0x12405488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405488))), 0x123d1686u);
  /* 123d1686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d168b call 0x123d50e0 */
  push32(0x123d1690u); f_123d50e0();
  /* 123d1690 mov esi, esp */
  ESI = (ESP);
  /* 123d1692 push 0x123fd334 */
  push32((uint32_t)(0x123fd334u));
  /* 123d1697 push 0x124025c8 */
  push32((uint32_t)(0x124025c8u));
  /* 123d169c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d16a2u);
  /* 123d16a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d16a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d16a7 call 0x123d50e0 */
  push32(0x123d16acu); f_123d50e0();
  /* 123d16ac mov esi, esp */
  ESI = (ESP);
  /* 123d16ae push 0x123fd31c */
  push32((uint32_t)(0x123fd31cu));
  /* 123d16b3 push 0x124025e8 */
  push32((uint32_t)(0x124025e8u));
  /* 123d16b8 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d16beu);
  /* 123d16be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d16c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d16c3 call 0x123d50e0 */
  push32(0x123d16c8u); f_123d50e0();
  /* 123d16c8 mov esi, esp */
  ESI = (ESP);
  /* 123d16ca push 0x123fd304 */
  push32((uint32_t)(0x123fd304u));
  /* 123d16cf push 0x12402608 */
  push32((uint32_t)(0x12402608u));
  /* 123d16d4 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d16dau);
  /* 123d16da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d16dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d16df call 0x123d50e0 */
  push32(0x123d16e4u); f_123d50e0();
  /* 123d16e4 mov esi, esp */
  ESI = (ESP);
  /* 123d16e6 push 0x123fd2ec */
  push32((uint32_t)(0x123fd2ecu));
  /* 123d16eb push 0x12402620 */
  push32((uint32_t)(0x12402620u));
  /* 123d16f0 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d16f6u);
  /* 123d16f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d16f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d16fb call 0x123d50e0 */
  push32(0x123d1700u); f_123d50e0();
  /* 123d1700 mov esi, esp */
  ESI = (ESP);
  /* 123d1702 push 0x123fd2c8 */
  push32((uint32_t)(0x123fd2c8u));
  /* 123d1707 push 0x12402638 */
  push32((uint32_t)(0x12402638u));
  /* 123d170c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1712u);
  /* 123d1712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1717 call 0x123d50e0 */
  push32(0x123d171cu); f_123d50e0();
  /* 123d171c mov esi, esp */
  ESI = (ESP);
  /* 123d171e push 0x123fd2a4 */
  push32((uint32_t)(0x123fd2a4u));
  /* 123d1723 push 0x12402658 */
  push32((uint32_t)(0x12402658u));
  /* 123d1728 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d172eu);
  /* 123d172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1733 call 0x123d50e0 */
  push32(0x123d1738u); f_123d50e0();
  /* 123d1738 mov esi, esp */
  ESI = (ESP);
  /* 123d173a push 0x123fd288 */
  push32((uint32_t)(0x123fd288u));
  /* 123d173f push 0x12402678 */
  push32((uint32_t)(0x12402678u));
  /* 123d1744 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d174au);
  /* 123d174a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d174d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d174f call 0x123d50e0 */
  push32(0x123d1754u); f_123d50e0();
  /* 123d1754 mov esi, esp */
  ESI = (ESP);
  /* 123d1756 push 0x123fd26c */
  push32((uint32_t)(0x123fd26cu));
  /* 123d175b push 0x12402690 */
  push32((uint32_t)(0x12402690u));
  /* 123d1760 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1766u);
  /* 123d1766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d176b call 0x123d50e0 */
  push32(0x123d1770u); f_123d50e0();
  /* 123d1770 mov esi, esp */
  ESI = (ESP);
  /* 123d1772 push 0x123fd260 */
  push32((uint32_t)(0x123fd260u));
  /* 123d1777 push 0x124026a8 */
  push32((uint32_t)(0x124026a8u));
  /* 123d177c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1782u);
  /* 123d1782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1785 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1787 call 0x123d50e0 */
  push32(0x123d178cu); f_123d50e0();
  /* 123d178c mov esi, esp */
  ESI = (ESP);
  /* 123d178e push 0x123fd254 */
  push32((uint32_t)(0x123fd254u));
  /* 123d1793 push 0x12402568 */
  push32((uint32_t)(0x12402568u));
  /* 123d1798 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d179eu);
  /* 123d179e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d17a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d17a3 call 0x123d50e0 */
  push32(0x123d17a8u); f_123d50e0();
  /* 123d17a8 mov esi, esp */
  ESI = (ESP);
  /* 123d17aa push 0x123fd248 */
  push32((uint32_t)(0x123fd248u));
  /* 123d17af push 0x12402570 */
  push32((uint32_t)(0x12402570u));
  /* 123d17b4 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d17bau);
  /* 123d17ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d17bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d17bf call 0x123d50e0 */
  push32(0x123d17c4u); f_123d50e0();
  /* 123d17c4 mov esi, esp */
  ESI = (ESP);
  /* 123d17c6 push 0x123fd23c */
  push32((uint32_t)(0x123fd23cu));
  /* 123d17cb push 0x12402578 */
  push32((uint32_t)(0x12402578u));
  /* 123d17d0 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d17d6u);
  /* 123d17d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d17d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d17db call 0x123d50e0 */
  push32(0x123d17e0u); f_123d50e0();
  /* 123d17e0 mov esi, esp */
  ESI = (ESP);
  /* 123d17e2 push 0x123fd230 */
  push32((uint32_t)(0x123fd230u));
  /* 123d17e7 push 0x12402580 */
  push32((uint32_t)(0x12402580u));
  /* 123d17ec call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d17f2u);
  /* 123d17f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d17f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d17f7 call 0x123d50e0 */
  push32(0x123d17fcu); f_123d50e0();
  /* 123d17fc mov esi, esp */
  ESI = (ESP);
  /* 123d17fe push 0x123fd228 */
  push32((uint32_t)(0x123fd228u));
  /* 123d1803 push 0x12402590 */
  push32((uint32_t)(0x12402590u));
  /* 123d1808 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d180eu);
  /* 123d180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1813 call 0x123d50e0 */
  push32(0x123d1818u); f_123d50e0();
  /* 123d1818 mov esi, esp */
  ESI = (ESP);
  /* 123d181a push 0x123fd20c */
  push32((uint32_t)(0x123fd20cu));
  /* 123d181f push 0x124025a0 */
  push32((uint32_t)(0x124025a0u));
  /* 123d1824 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d182au);
  /* 123d182a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d182d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d182f call 0x123d50e0 */
  push32(0x123d1834u); f_123d50e0();
  /* 123d1834 mov esi, esp */
  ESI = (ESP);
  /* 123d1836 push 0x123fd1ec */
  push32((uint32_t)(0x123fd1ecu));
  /* 123d183b push 0x124025b0 */
  push32((uint32_t)(0x124025b0u));
  /* 123d1840 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1846u);
  /* 123d1846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d184b call 0x123d50e0 */
  push32(0x123d1850u); f_123d50e0();
  /* 123d1850 mov esi, esp */
  ESI = (ESP);
  /* 123d1852 push 0x123fd1cc */
  push32((uint32_t)(0x123fd1ccu));
  /* 123d1857 push 0x124025c0 */
  push32((uint32_t)(0x124025c0u));
  /* 123d185c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1862u);
  /* 123d1862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1867 call 0x123d50e0 */
  push32(0x123d186cu); f_123d50e0();
  /* 123d186c mov esi, esp */
  ESI = (ESP);
  /* 123d186e push 0x123fd1c0 */
  push32((uint32_t)(0x123fd1c0u));
  /* 123d1873 push 0x124025e0 */
  push32((uint32_t)(0x124025e0u));
  /* 123d1878 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d187eu);
  /* 123d187e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1883 call 0x123d50e0 */
  push32(0x123d1888u); f_123d50e0();
  /* 123d1888 mov esi, esp */
  ESI = (ESP);
  /* 123d188a push 0x123fd1b4 */
  push32((uint32_t)(0x123fd1b4u));
  /* 123d188f push 0x12402600 */
  push32((uint32_t)(0x12402600u));
  /* 123d1894 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d189au);
  /* 123d189a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d189d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d189f call 0x123d50e0 */
  push32(0x123d18a4u); f_123d50e0();
  /* 123d18a4 mov esi, esp */
  ESI = (ESP);
  /* 123d18a6 push 0x123fd1a8 */
  push32((uint32_t)(0x123fd1a8u));
  /* 123d18ab push 0x12402588 */
  push32((uint32_t)(0x12402588u));
  /* 123d18b0 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d18b6u);
  /* 123d18b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d18b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d18bb call 0x123d50e0 */
  push32(0x123d18c0u); f_123d50e0();
  /* 123d18c0 mov esi, esp */
  ESI = (ESP);
  /* 123d18c2 push 0x123fd19c */
  push32((uint32_t)(0x123fd19cu));
  /* 123d18c7 push 0x12402598 */
  push32((uint32_t)(0x12402598u));
  /* 123d18cc call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d18d2u);
  /* 123d18d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d18d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d18d7 call 0x123d50e0 */
  push32(0x123d18dcu); f_123d50e0();
  /* 123d18dc mov esi, esp */
  ESI = (ESP);
  /* 123d18de push 0x123fd190 */
  push32((uint32_t)(0x123fd190u));
  /* 123d18e3 push 0x124025a8 */
  push32((uint32_t)(0x124025a8u));
  /* 123d18e8 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d18eeu);
  /* 123d18ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d18f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d18f3 call 0x123d50e0 */
  push32(0x123d18f8u); f_123d50e0();
  /* 123d18f8 mov esi, esp */
  ESI = (ESP);
  /* 123d18fa push 0x123fd184 */
  push32((uint32_t)(0x123fd184u));
  /* 123d18ff push 0x124025b8 */
  push32((uint32_t)(0x124025b8u));
  /* 123d1904 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d190au);
  /* 123d190a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d190d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d190f call 0x123d50e0 */
  push32(0x123d1914u); f_123d50e0();
  /* 123d1914 mov esi, esp */
  ESI = (ESP);
  /* 123d1916 push 0x123fd178 */
  push32((uint32_t)(0x123fd178u));
  /* 123d191b push 0x124025d8 */
  push32((uint32_t)(0x124025d8u));
  /* 123d1920 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1926u);
  /* 123d1926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d192b call 0x123d50e0 */
  push32(0x123d1930u); f_123d50e0();
  /* 123d1930 mov esi, esp */
  ESI = (ESP);
  /* 123d1932 push 0x123fd16c */
  push32((uint32_t)(0x123fd16cu));
  /* 123d1937 push 0x124025f8 */
  push32((uint32_t)(0x124025f8u));
  /* 123d193c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1942u);
  /* 123d1942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1945 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1947 call 0x123d50e0 */
  push32(0x123d194cu); f_123d50e0();
  /* 123d194c mov esi, esp */
  ESI = (ESP);
  /* 123d194e push 0x123fd160 */
  push32((uint32_t)(0x123fd160u));
  /* 123d1953 push 0x12402618 */
  push32((uint32_t)(0x12402618u));
  /* 123d1958 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d195eu);
  /* 123d195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1963 call 0x123d50e0 */
  push32(0x123d1968u); f_123d50e0();
  /* 123d1968 mov esi, esp */
  ESI = (ESP);
  /* 123d196a push 0x123fd154 */
  push32((uint32_t)(0x123fd154u));
  /* 123d196f push 0x12402630 */
  push32((uint32_t)(0x12402630u));
  /* 123d1974 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d197au);
  /* 123d197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d197f call 0x123d50e0 */
  push32(0x123d1984u); f_123d50e0();
  /* 123d1984 mov esi, esp */
  ESI = (ESP);
  /* 123d1986 push 0x123fd148 */
  push32((uint32_t)(0x123fd148u));
  /* 123d198b push 0x12402650 */
  push32((uint32_t)(0x12402650u));
  /* 123d1990 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1996u);
  /* 123d1996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d199b call 0x123d50e0 */
  push32(0x123d19a0u); f_123d50e0();
  /* 123d19a0 mov esi, esp */
  ESI = (ESP);
  /* 123d19a2 push 0x123fd13c */
  push32((uint32_t)(0x123fd13cu));
  /* 123d19a7 push 0x12402670 */
  push32((uint32_t)(0x12402670u));
  /* 123d19ac call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d19b2u);
  /* 123d19b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d19b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d19b7 call 0x123d50e0 */
  push32(0x123d19bcu); f_123d50e0();
  /* 123d19bc mov esi, esp */
  ESI = (ESP);
  /* 123d19be push 0x123fd130 */
  push32((uint32_t)(0x123fd130u));
  /* 123d19c3 push 0x124025d0 */
  push32((uint32_t)(0x124025d0u));
  /* 123d19c8 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d19ceu);
  /* 123d19ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d19d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d19d3 call 0x123d50e0 */
  push32(0x123d19d8u); f_123d50e0();
  /* 123d19d8 mov esi, esp */
  ESI = (ESP);
  /* 123d19da push 0x123fd124 */
  push32((uint32_t)(0x123fd124u));
  /* 123d19df push 0x124025f0 */
  push32((uint32_t)(0x124025f0u));
  /* 123d19e4 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d19eau);
  /* 123d19ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d19ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d19ef call 0x123d50e0 */
  push32(0x123d19f4u); f_123d50e0();
  /* 123d19f4 mov esi, esp */
  ESI = (ESP);
  /* 123d19f6 push 0x123fd118 */
  push32((uint32_t)(0x123fd118u));
  /* 123d19fb push 0x12402610 */
  push32((uint32_t)(0x12402610u));
  /* 123d1a00 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1a06u);
  /* 123d1a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1a0b call 0x123d50e0 */
  push32(0x123d1a10u); f_123d50e0();
  /* 123d1a10 mov esi, esp */
  ESI = (ESP);
  /* 123d1a12 push 0x123fd10c */
  push32((uint32_t)(0x123fd10cu));
  /* 123d1a17 push 0x12402628 */
  push32((uint32_t)(0x12402628u));
  /* 123d1a1c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1a22u);
  /* 123d1a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1a27 call 0x123d50e0 */
  push32(0x123d1a2cu); f_123d50e0();
  /* 123d1a2c mov esi, esp */
  ESI = (ESP);
  /* 123d1a2e push 0x123fd100 */
  push32((uint32_t)(0x123fd100u));
  /* 123d1a33 push 0x12402648 */
  push32((uint32_t)(0x12402648u));
  /* 123d1a38 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1a3eu);
  /* 123d1a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1a43 call 0x123d50e0 */
  push32(0x123d1a48u); f_123d50e0();
  /* 123d1a48 mov esi, esp */
  ESI = (ESP);
  /* 123d1a4a push 0x123fd0f4 */
  push32((uint32_t)(0x123fd0f4u));
  /* 123d1a4f push 0x12402668 */
  push32((uint32_t)(0x12402668u));
  /* 123d1a54 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1a5au);
  /* 123d1a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1a5f call 0x123d50e0 */
  push32(0x123d1a64u); f_123d50e0();
  /* 123d1a64 mov esi, esp */
  ESI = (ESP);
  /* 123d1a66 push 0x123fd0e8 */
  push32((uint32_t)(0x123fd0e8u));
  /* 123d1a6b push 0x12402688 */
  push32((uint32_t)(0x12402688u));
  /* 123d1a70 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1a76u);
  /* 123d1a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1a7b call 0x123d50e0 */
  push32(0x123d1a80u); f_123d50e0();
  /* 123d1a80 mov esi, esp */
  ESI = (ESP);
  /* 123d1a82 push 0x123fd0dc */
  push32((uint32_t)(0x123fd0dcu));
  /* 123d1a87 push 0x124026a0 */
  push32((uint32_t)(0x124026a0u));
  /* 123d1a8c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1a92u);
  /* 123d1a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1a97 call 0x123d50e0 */
  push32(0x123d1a9cu); f_123d50e0();
  /* 123d1a9c mov esi, esp */
  ESI = (ESP);
  /* 123d1a9e push 0x123fd0d0 */
  push32((uint32_t)(0x123fd0d0u));
  /* 123d1aa3 push 0x124026c0 */
  push32((uint32_t)(0x124026c0u));
  /* 123d1aa8 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1aaeu);
  /* 123d1aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1ab3 call 0x123d50e0 */
  push32(0x123d1ab8u); f_123d50e0();
  /* 123d1ab8 mov esi, esp */
  ESI = (ESP);
  /* 123d1aba push 0x123fd0c4 */
  push32((uint32_t)(0x123fd0c4u));
  /* 123d1abf push 0x124026d8 */
  push32((uint32_t)(0x124026d8u));
  /* 123d1ac4 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1acau);
  /* 123d1aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1acd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1acf call 0x123d50e0 */
  push32(0x123d1ad4u); f_123d50e0();
  /* 123d1ad4 mov esi, esp */
  ESI = (ESP);
  /* 123d1ad6 push 0x123fd0b8 */
  push32((uint32_t)(0x123fd0b8u));
  /* 123d1adb push 0x12402640 */
  push32((uint32_t)(0x12402640u));
  /* 123d1ae0 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1ae6u);
  /* 123d1ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1ae9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1aeb call 0x123d50e0 */
  push32(0x123d1af0u); f_123d50e0();
  /* 123d1af0 mov esi, esp */
  ESI = (ESP);
  /* 123d1af2 push 0x123fd0ac */
  push32((uint32_t)(0x123fd0acu));
  /* 123d1af7 push 0x12402660 */
  push32((uint32_t)(0x12402660u));
  /* 123d1afc call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1b02u);
  /* 123d1b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1b07 call 0x123d50e0 */
  push32(0x123d1b0cu); f_123d50e0();
  /* 123d1b0c mov esi, esp */
  ESI = (ESP);
  /* 123d1b0e push 0x123fd0a0 */
  push32((uint32_t)(0x123fd0a0u));
  /* 123d1b13 push 0x12402680 */
  push32((uint32_t)(0x12402680u));
  /* 123d1b18 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1b1eu);
  /* 123d1b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1b23 call 0x123d50e0 */
  push32(0x123d1b28u); f_123d50e0();
  /* 123d1b28 mov esi, esp */
  ESI = (ESP);
  /* 123d1b2a push 0x123fd094 */
  push32((uint32_t)(0x123fd094u));
  /* 123d1b2f push 0x12402698 */
  push32((uint32_t)(0x12402698u));
  /* 123d1b34 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1b3au);
  /* 123d1b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1b3f call 0x123d50e0 */
  push32(0x123d1b44u); f_123d50e0();
  /* 123d1b44 mov esi, esp */
  ESI = (ESP);
  /* 123d1b46 push 0x123fd088 */
  push32((uint32_t)(0x123fd088u));
  /* 123d1b4b push 0x124026b8 */
  push32((uint32_t)(0x124026b8u));
  /* 123d1b50 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1b56u);
  /* 123d1b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1b5b call 0x123d50e0 */
  push32(0x123d1b60u); f_123d50e0();
  /* 123d1b60 mov esi, esp */
  ESI = (ESP);
  /* 123d1b62 push 0x123fd07c */
  push32((uint32_t)(0x123fd07cu));
  /* 123d1b67 push 0x124026d0 */
  push32((uint32_t)(0x124026d0u));
  /* 123d1b6c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1b72u);
  /* 123d1b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1b77 call 0x123d50e0 */
  push32(0x123d1b7cu); f_123d50e0();
  /* 123d1b7c mov esi, esp */
  ESI = (ESP);
  /* 123d1b7e push 0x123fd070 */
  push32((uint32_t)(0x123fd070u));
  /* 123d1b83 push 0x124026e8 */
  push32((uint32_t)(0x124026e8u));
  /* 123d1b88 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1b8eu);
  /* 123d1b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1b93 call 0x123d50e0 */
  push32(0x123d1b98u); f_123d50e0();
  /* 123d1b98 mov esi, esp */
  ESI = (ESP);
  /* 123d1b9a push 0x123fd064 */
  push32((uint32_t)(0x123fd064u));
  /* 123d1b9f push 0x124026f8 */
  push32((uint32_t)(0x124026f8u));
  /* 123d1ba4 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1baau);
  /* 123d1baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1baf call 0x123d50e0 */
  push32(0x123d1bb4u); f_123d50e0();
  /* 123d1bb4 mov esi, esp */
  ESI = (ESP);
  /* 123d1bb6 push 0x123fd058 */
  push32((uint32_t)(0x123fd058u));
  /* 123d1bbb push 0x12402700 */
  push32((uint32_t)(0x12402700u));
  /* 123d1bc0 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1bc6u);
  /* 123d1bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1bc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1bcb call 0x123d50e0 */
  push32(0x123d1bd0u); f_123d50e0();
  /* 123d1bd0 mov esi, esp */
  ESI = (ESP);
  /* 123d1bd2 push 0x123fd04c */
  push32((uint32_t)(0x123fd04cu));
  /* 123d1bd7 push 0x12402708 */
  push32((uint32_t)(0x12402708u));
  /* 123d1bdc call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1be2u);
  /* 123d1be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1be7 call 0x123d50e0 */
  push32(0x123d1becu); f_123d50e0();
  /* 123d1bec mov esi, esp */
  ESI = (ESP);
  /* 123d1bee push 0x123fd040 */
  push32((uint32_t)(0x123fd040u));
  /* 123d1bf3 push 0x124026b0 */
  push32((uint32_t)(0x124026b0u));
  /* 123d1bf8 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1bfeu);
  /* 123d1bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1c03 call 0x123d50e0 */
  push32(0x123d1c08u); f_123d50e0();
  /* 123d1c08 mov esi, esp */
  ESI = (ESP);
  /* 123d1c0a push 0x123fd034 */
  push32((uint32_t)(0x123fd034u));
  /* 123d1c0f push 0x124026c8 */
  push32((uint32_t)(0x124026c8u));
  /* 123d1c14 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1c1au);
  /* 123d1c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1c1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1c1f call 0x123d50e0 */
  push32(0x123d1c24u); f_123d50e0();
  /* 123d1c24 mov esi, esp */
  ESI = (ESP);
  /* 123d1c26 push 0x123fd028 */
  push32((uint32_t)(0x123fd028u));
  /* 123d1c2b push 0x124026e0 */
  push32((uint32_t)(0x124026e0u));
  /* 123d1c30 call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1c36u);
  /* 123d1c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1c3b call 0x123d50e0 */
  push32(0x123d1c40u); f_123d50e0();
  /* 123d1c40 mov esi, esp */
  ESI = (ESP);
  /* 123d1c42 push 0x123fd01c */
  push32((uint32_t)(0x123fd01cu));
  /* 123d1c47 push 0x124026f0 */
  push32((uint32_t)(0x124026f0u));
  /* 123d1c4c call dword ptr [0x1240548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240548c))), 0x123d1c52u);
  /* 123d1c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1c57 call 0x123d50e0 */
  push32(0x123d1c5cu); f_123d50e0();
  /* 123d1c5c mov esi, esp */
  ESI = (ESP);
  /* 123d1c5e push 1 */
  push32((uint32_t)(0x1u));
  /* 123d1c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d1c62 call dword ptr [0x12405484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405484))), 0x123d1c68u);
  /* 123d1c68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1c6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1c6d call 0x123d50e0 */
  push32(0x123d1c72u); f_123d50e0();
  /* 123d1c72 pop edi */
  EDI = (pop32());
  /* 123d1c73 pop esi */
  ESI = (pop32());
  /* 123d1c74 pop ebx */
  EBX = (pop32());
  /* 123d1c75 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1c78 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1c7a call 0x123d50e0 */
  push32(0x123d1c7fu); f_123d50e0();
  /* 123d1c7f mov esp, ebp */
  ESP = (EBP);
  /* 123d1c81 pop ebp */
  EBP = (pop32());
  /* 123d1c82 ret  */
  ESPCHK(0x123d1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f80 @ 0x123d1f80 (9951 bytes, 2922 insns) */
void f_123d1f80(void) {
  FTRACE(0x123d1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d1f80 push ebp */
  push32((uint32_t)(EBP));
  /* 123d1f81 mov ebp, esp */
  EBP = (ESP);
  /* 123d1f83 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d1f86 push ebx */
  push32((uint32_t)(EBX));
  /* 123d1f87 push esi */
  push32((uint32_t)(ESI));
  /* 123d1f88 push edi */
  push32((uint32_t)(EDI));
  /* 123d1f89 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 123d1f8c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 123d1f91 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 123d1f96 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123d1f98 mov esi, esp */
  ESI = (ESP);
  /* 123d1f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 123d1f9c call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d1fa2u);
  /* 123d1fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1fa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1fa7 call 0x123d50e0 */
  push32(0x123d1facu); f_123d50e0();
  /* 123d1fac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d1fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d1fb3 je 0x123d2bcd */
  if (C.zf) goto L_123d2bcd;
  /* 123d1fb9 mov esi, esp */
  ESI = (ESP);
  /* 123d1fbb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d1fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 123d1fbf call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d1fc5u);
  /* 123d1fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1fc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1fca call 0x123d50e0 */
  push32(0x123d1fcfu); f_123d50e0();
  /* 123d1fcf mov esi, esp */
  ESI = (ESP);
  /* 123d1fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d1fd3 push 0x12402430 */
  push32((uint32_t)(0x12402430u));
  /* 123d1fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d1fda call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d1fe0u);
  /* 123d1fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d1fe5 call 0x123d50e0 */
  push32(0x123d1feau); f_123d50e0();
  /* 123d1fea mov esi, esp */
  ESI = (ESP);
  /* 123d1fec push 0 */
  push32((uint32_t)(0x0u));
  /* 123d1fee push 0x12402448 */
  push32((uint32_t)(0x12402448u));
  /* 123d1ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d1ff5 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d1ffbu);
  /* 123d1ffb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d1ffe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2000 call 0x123d50e0 */
  push32(0x123d2005u); f_123d50e0();
  /* 123d2005 mov esi, esp */
  ESI = (ESP);
  /* 123d2007 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2009 push 0x12402460 */
  push32((uint32_t)(0x12402460u));
  /* 123d200e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2010 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2016u);
  /* 123d2016 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2019 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d201b call 0x123d50e0 */
  push32(0x123d2020u); f_123d50e0();
  /* 123d2020 mov esi, esp */
  ESI = (ESP);
  /* 123d2022 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2024 push 0x12402478 */
  push32((uint32_t)(0x12402478u));
  /* 123d2029 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d202b call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2031u);
  /* 123d2031 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2036 call 0x123d50e0 */
  push32(0x123d203bu); f_123d50e0();
  /* 123d203b mov esi, esp */
  ESI = (ESP);
  /* 123d203d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d203f push 0x12402488 */
  push32((uint32_t)(0x12402488u));
  /* 123d2044 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2046 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d204cu);
  /* 123d204c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d204f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2051 call 0x123d50e0 */
  push32(0x123d2056u); f_123d50e0();
  /* 123d2056 mov esi, esp */
  ESI = (ESP);
  /* 123d2058 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d205a push 0x12402498 */
  push32((uint32_t)(0x12402498u));
  /* 123d205f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2061 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2067u);
  /* 123d2067 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d206a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d206c call 0x123d50e0 */
  push32(0x123d2071u); f_123d50e0();
  /* 123d2071 mov esi, esp */
  ESI = (ESP);
  /* 123d2073 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2075 push 0x124024a0 */
  push32((uint32_t)(0x124024a0u));
  /* 123d207a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d207c call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2082u);
  /* 123d2082 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2085 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2087 call 0x123d50e0 */
  push32(0x123d208cu); f_123d50e0();
  /* 123d208c mov esi, esp */
  ESI = (ESP);
  /* 123d208e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2090 push 0x124024a8 */
  push32((uint32_t)(0x124024a8u));
  /* 123d2095 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2097 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d209du);
  /* 123d209d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d20a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d20a2 call 0x123d50e0 */
  push32(0x123d20a7u); f_123d50e0();
  /* 123d20a7 mov esi, esp */
  ESI = (ESP);
  /* 123d20a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d20ab push 0x124024b8 */
  push32((uint32_t)(0x124024b8u));
  /* 123d20b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d20b2 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d20b8u);
  /* 123d20b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d20bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d20bd call 0x123d50e0 */
  push32(0x123d20c2u); f_123d50e0();
  /* 123d20c2 mov esi, esp */
  ESI = (ESP);
  /* 123d20c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d20c6 push 0x124023e0 */
  push32((uint32_t)(0x124023e0u));
  /* 123d20cb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d20cd call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d20d3u);
  /* 123d20d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d20d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d20d8 call 0x123d50e0 */
  push32(0x123d20ddu); f_123d50e0();
  /* 123d20dd mov esi, esp */
  ESI = (ESP);
  /* 123d20df push 0 */
  push32((uint32_t)(0x0u));
  /* 123d20e1 push 0x124023e8 */
  push32((uint32_t)(0x124023e8u));
  /* 123d20e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d20e8 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d20eeu);
  /* 123d20ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d20f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d20f3 call 0x123d50e0 */
  push32(0x123d20f8u); f_123d50e0();
  /* 123d20f8 mov esi, esp */
  ESI = (ESP);
  /* 123d20fa push 0 */
  push32((uint32_t)(0x0u));
  /* 123d20fc push 0x124023f0 */
  push32((uint32_t)(0x124023f0u));
  /* 123d2101 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2103 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2109u);
  /* 123d2109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d210c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d210e call 0x123d50e0 */
  push32(0x123d2113u); f_123d50e0();
  /* 123d2113 mov esi, esp */
  ESI = (ESP);
  /* 123d2115 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2117 push 0x124023f8 */
  push32((uint32_t)(0x124023f8u));
  /* 123d211c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d211e call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2124u);
  /* 123d2124 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2127 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2129 call 0x123d50e0 */
  push32(0x123d212eu); f_123d50e0();
  /* 123d212e mov esi, esp */
  ESI = (ESP);
  /* 123d2130 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2132 push 0x12402408 */
  push32((uint32_t)(0x12402408u));
  /* 123d2137 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2139 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d213fu);
  /* 123d213f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2142 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2144 call 0x123d50e0 */
  push32(0x123d2149u); f_123d50e0();
  /* 123d2149 mov esi, esp */
  ESI = (ESP);
  /* 123d214b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d214d push 0x12402418 */
  push32((uint32_t)(0x12402418u));
  /* 123d2152 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2154 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d215au);
  /* 123d215a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d215d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d215f call 0x123d50e0 */
  push32(0x123d2164u); f_123d50e0();
  /* 123d2164 mov esi, esp */
  ESI = (ESP);
  /* 123d2166 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2168 push 0x12402440 */
  push32((uint32_t)(0x12402440u));
  /* 123d216d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d216f call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2175u);
  /* 123d2175 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2178 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d217a call 0x123d50e0 */
  push32(0x123d217fu); f_123d50e0();
  /* 123d217f mov esi, esp */
  ESI = (ESP);
  /* 123d2181 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2183 push 0x12402458 */
  push32((uint32_t)(0x12402458u));
  /* 123d2188 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d218a call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2190u);
  /* 123d2190 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2193 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2195 call 0x123d50e0 */
  push32(0x123d219au); f_123d50e0();
  /* 123d219a mov esi, esp */
  ESI = (ESP);
  /* 123d219c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d219e push 0x12402470 */
  push32((uint32_t)(0x12402470u));
  /* 123d21a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d21a5 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d21abu);
  /* 123d21ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d21ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d21b0 call 0x123d50e0 */
  push32(0x123d21b5u); f_123d50e0();
  /* 123d21b5 mov esi, esp */
  ESI = (ESP);
  /* 123d21b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d21b9 push 0x12402410 */
  push32((uint32_t)(0x12402410u));
  /* 123d21be push 0 */
  push32((uint32_t)(0x0u));
  /* 123d21c0 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d21c6u);
  /* 123d21c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d21c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d21cb call 0x123d50e0 */
  push32(0x123d21d0u); f_123d50e0();
  /* 123d21d0 mov esi, esp */
  ESI = (ESP);
  /* 123d21d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d21d4 push 0x12402438 */
  push32((uint32_t)(0x12402438u));
  /* 123d21d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d21db call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d21e1u);
  /* 123d21e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d21e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d21e6 call 0x123d50e0 */
  push32(0x123d21ebu); f_123d50e0();
  /* 123d21eb mov esi, esp */
  ESI = (ESP);
  /* 123d21ed push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 123d21f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 123d21f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d21f6 call dword ptr [0x1240541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240541c))), 0x123d21fcu);
  /* 123d21fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d21ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2201 call 0x123d50e0 */
  push32(0x123d2206u); f_123d50e0();
  /* 123d2206 mov esi, esp */
  ESI = (ESP);
  /* 123d2208 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 123d220a push 1 */
  push32((uint32_t)(0x1u));
  /* 123d220c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d220e call dword ptr [0x1240541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240541c))), 0x123d2214u);
  /* 123d2214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2219 call 0x123d50e0 */
  push32(0x123d221eu); f_123d50e0();
  /* 123d221e mov esi, esp */
  ESI = (ESP);
  /* 123d2220 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 123d2225 push 4 */
  push32((uint32_t)(0x4u));
  /* 123d2227 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2229 call dword ptr [0x1240541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240541c))), 0x123d222fu);
  /* 123d222f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2232 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2234 call 0x123d50e0 */
  push32(0x123d2239u); f_123d50e0();
  /* 123d2239 mov esi, esp */
  ESI = (ESP);
  /* 123d223b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 123d223d push 2 */
  push32((uint32_t)(0x2u));
  /* 123d223f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2241 call dword ptr [0x1240541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240541c))), 0x123d2247u);
  /* 123d2247 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d224a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d224c call 0x123d50e0 */
  push32(0x123d2251u); f_123d50e0();
  /* 123d2251 mov esi, esp */
  ESI = (ESP);
  /* 123d2253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 123d2255 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2257 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2259 call dword ptr [0x1240541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240541c))), 0x123d225fu);
  /* 123d225f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2264 call 0x123d50e0 */
  push32(0x123d2269u); f_123d50e0();
  /* 123d2269 mov esi, esp */
  ESI = (ESP);
  /* 123d226b push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 123d2270 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d2272 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2274 call dword ptr [0x1240541c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240541c))), 0x123d227au);
  /* 123d227a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d227d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d227f call 0x123d50e0 */
  push32(0x123d2284u); f_123d50e0();
  /* 123d2284 mov esi, esp */
  ESI = (ESP);
  /* 123d2286 push 0x123fd6dc */
  push32((uint32_t)(0x123fd6dcu));
  /* 123d228b push 0x123fd564 */
  push32((uint32_t)(0x123fd564u));
  /* 123d2290 call dword ptr [0x12405420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405420))), 0x123d2296u);
  /* 123d2296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d229b call 0x123d50e0 */
  push32(0x123d22a0u); f_123d50e0();
  /* 123d22a0 mov esi, esp */
  ESI = (ESP);
  /* 123d22a2 push 0x124025c8 */
  push32((uint32_t)(0x124025c8u));
  /* 123d22a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d22a9 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d22afu);
  /* 123d22af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d22b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d22b4 call 0x123d50e0 */
  push32(0x123d22b9u); f_123d50e0();
  /* 123d22b9 mov esi, esp */
  ESI = (ESP);
  /* 123d22bb push 0x124025e8 */
  push32((uint32_t)(0x124025e8u));
  /* 123d22c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d22c2 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d22c8u);
  /* 123d22c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d22cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d22cd call 0x123d50e0 */
  push32(0x123d22d2u); f_123d50e0();
  /* 123d22d2 mov esi, esp */
  ESI = (ESP);
  /* 123d22d4 push 0x12402608 */
  push32((uint32_t)(0x12402608u));
  /* 123d22d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d22db call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d22e1u);
  /* 123d22e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d22e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d22e6 call 0x123d50e0 */
  push32(0x123d22ebu); f_123d50e0();
  /* 123d22eb mov esi, esp */
  ESI = (ESP);
  /* 123d22ed push 0x12402620 */
  push32((uint32_t)(0x12402620u));
  /* 123d22f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d22f4 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d22fau);
  /* 123d22fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d22fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d22ff call 0x123d50e0 */
  push32(0x123d2304u); f_123d50e0();
  /* 123d2304 mov esi, esp */
  ESI = (ESP);
  /* 123d2306 push 0x12402638 */
  push32((uint32_t)(0x12402638u));
  /* 123d230b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d230d call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2313u);
  /* 123d2313 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2316 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2318 call 0x123d50e0 */
  push32(0x123d231du); f_123d50e0();
  /* 123d231d mov esi, esp */
  ESI = (ESP);
  /* 123d231f push 0x12402658 */
  push32((uint32_t)(0x12402658u));
  /* 123d2324 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2326 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d232cu);
  /* 123d232c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d232f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2331 call 0x123d50e0 */
  push32(0x123d2336u); f_123d50e0();
  /* 123d2336 mov esi, esp */
  ESI = (ESP);
  /* 123d2338 push 0x12402678 */
  push32((uint32_t)(0x12402678u));
  /* 123d233d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d233f call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2345u);
  /* 123d2345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2348 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d234a call 0x123d50e0 */
  push32(0x123d234fu); f_123d50e0();
  /* 123d234f mov esi, esp */
  ESI = (ESP);
  /* 123d2351 push 0x12402690 */
  push32((uint32_t)(0x12402690u));
  /* 123d2356 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2358 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d235eu);
  /* 123d235e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2363 call 0x123d50e0 */
  push32(0x123d2368u); f_123d50e0();
  /* 123d2368 mov esi, esp */
  ESI = (ESP);
  /* 123d236a push 0x124026a8 */
  push32((uint32_t)(0x124026a8u));
  /* 123d236f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2371 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2377u);
  /* 123d2377 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d237a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d237c call 0x123d50e0 */
  push32(0x123d2381u); f_123d50e0();
  /* 123d2381 mov esi, esp */
  ESI = (ESP);
  /* 123d2383 push 0x12402568 */
  push32((uint32_t)(0x12402568u));
  /* 123d2388 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d238a call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2390u);
  /* 123d2390 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2395 call 0x123d50e0 */
  push32(0x123d239au); f_123d50e0();
  /* 123d239a mov esi, esp */
  ESI = (ESP);
  /* 123d239c push 0x12402570 */
  push32((uint32_t)(0x12402570u));
  /* 123d23a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d23a3 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d23a9u);
  /* 123d23a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d23ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d23ae call 0x123d50e0 */
  push32(0x123d23b3u); f_123d50e0();
  /* 123d23b3 mov esi, esp */
  ESI = (ESP);
  /* 123d23b5 push 0x12402578 */
  push32((uint32_t)(0x12402578u));
  /* 123d23ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123d23bc call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d23c2u);
  /* 123d23c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d23c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d23c7 call 0x123d50e0 */
  push32(0x123d23ccu); f_123d50e0();
  /* 123d23cc mov esi, esp */
  ESI = (ESP);
  /* 123d23ce push 0x12402580 */
  push32((uint32_t)(0x12402580u));
  /* 123d23d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d23d5 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d23dbu);
  /* 123d23db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d23de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d23e0 call 0x123d50e0 */
  push32(0x123d23e5u); f_123d50e0();
  /* 123d23e5 mov esi, esp */
  ESI = (ESP);
  /* 123d23e7 push 0x12402590 */
  push32((uint32_t)(0x12402590u));
  /* 123d23ec push 0 */
  push32((uint32_t)(0x0u));
  /* 123d23ee call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d23f4u);
  /* 123d23f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d23f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d23f9 call 0x123d50e0 */
  push32(0x123d23feu); f_123d50e0();
  /* 123d23fe mov esi, esp */
  ESI = (ESP);
  /* 123d2400 push 0x124025a0 */
  push32((uint32_t)(0x124025a0u));
  /* 123d2405 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2407 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d240du);
  /* 123d240d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2412 call 0x123d50e0 */
  push32(0x123d2417u); f_123d50e0();
  /* 123d2417 mov esi, esp */
  ESI = (ESP);
  /* 123d2419 push 0x124025b0 */
  push32((uint32_t)(0x124025b0u));
  /* 123d241e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2420 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2426u);
  /* 123d2426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2429 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d242b call 0x123d50e0 */
  push32(0x123d2430u); f_123d50e0();
  /* 123d2430 mov esi, esp */
  ESI = (ESP);
  /* 123d2432 push 0x124025c0 */
  push32((uint32_t)(0x124025c0u));
  /* 123d2437 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2439 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d243fu);
  /* 123d243f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2444 call 0x123d50e0 */
  push32(0x123d2449u); f_123d50e0();
  /* 123d2449 mov esi, esp */
  ESI = (ESP);
  /* 123d244b push 0x124025e0 */
  push32((uint32_t)(0x124025e0u));
  /* 123d2450 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2452 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2458u);
  /* 123d2458 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d245b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d245d call 0x123d50e0 */
  push32(0x123d2462u); f_123d50e0();
  /* 123d2462 mov esi, esp */
  ESI = (ESP);
  /* 123d2464 push 0x12402600 */
  push32((uint32_t)(0x12402600u));
  /* 123d2469 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d246b call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2471u);
  /* 123d2471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2474 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2476 call 0x123d50e0 */
  push32(0x123d247bu); f_123d50e0();
  /* 123d247b mov esi, esp */
  ESI = (ESP);
  /* 123d247d push 0x12402588 */
  push32((uint32_t)(0x12402588u));
  /* 123d2482 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2484 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d248au);
  /* 123d248a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d248d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d248f call 0x123d50e0 */
  push32(0x123d2494u); f_123d50e0();
  /* 123d2494 mov esi, esp */
  ESI = (ESP);
  /* 123d2496 push 0x12402598 */
  push32((uint32_t)(0x12402598u));
  /* 123d249b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d249d call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d24a3u);
  /* 123d24a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d24a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d24a8 call 0x123d50e0 */
  push32(0x123d24adu); f_123d50e0();
  /* 123d24ad mov esi, esp */
  ESI = (ESP);
  /* 123d24af push 0x124025a8 */
  push32((uint32_t)(0x124025a8u));
  /* 123d24b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d24b6 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d24bcu);
  /* 123d24bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d24bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d24c1 call 0x123d50e0 */
  push32(0x123d24c6u); f_123d50e0();
  /* 123d24c6 mov esi, esp */
  ESI = (ESP);
  /* 123d24c8 push 0x124025b8 */
  push32((uint32_t)(0x124025b8u));
  /* 123d24cd push 0 */
  push32((uint32_t)(0x0u));
  /* 123d24cf call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d24d5u);
  /* 123d24d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d24d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d24da call 0x123d50e0 */
  push32(0x123d24dfu); f_123d50e0();
  /* 123d24df mov esi, esp */
  ESI = (ESP);
  /* 123d24e1 push 0x124025d8 */
  push32((uint32_t)(0x124025d8u));
  /* 123d24e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d24e8 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d24eeu);
  /* 123d24ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d24f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d24f3 call 0x123d50e0 */
  push32(0x123d24f8u); f_123d50e0();
  /* 123d24f8 mov esi, esp */
  ESI = (ESP);
  /* 123d24fa push 0x124025f8 */
  push32((uint32_t)(0x124025f8u));
  /* 123d24ff push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2501 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2507u);
  /* 123d2507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d250a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d250c call 0x123d50e0 */
  push32(0x123d2511u); f_123d50e0();
  /* 123d2511 mov esi, esp */
  ESI = (ESP);
  /* 123d2513 push 0x12402618 */
  push32((uint32_t)(0x12402618u));
  /* 123d2518 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d251a call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2520u);
  /* 123d2520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2523 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2525 call 0x123d50e0 */
  push32(0x123d252au); f_123d50e0();
  /* 123d252a mov esi, esp */
  ESI = (ESP);
  /* 123d252c push 0x12402630 */
  push32((uint32_t)(0x12402630u));
  /* 123d2531 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2533 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2539u);
  /* 123d2539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d253c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d253e call 0x123d50e0 */
  push32(0x123d2543u); f_123d50e0();
  /* 123d2543 mov esi, esp */
  ESI = (ESP);
  /* 123d2545 push 0x12402650 */
  push32((uint32_t)(0x12402650u));
  /* 123d254a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d254c call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2552u);
  /* 123d2552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2557 call 0x123d50e0 */
  push32(0x123d255cu); f_123d50e0();
  /* 123d255c mov esi, esp */
  ESI = (ESP);
  /* 123d255e push 0x12402670 */
  push32((uint32_t)(0x12402670u));
  /* 123d2563 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2565 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d256bu);
  /* 123d256b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d256e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2570 call 0x123d50e0 */
  push32(0x123d2575u); f_123d50e0();
  /* 123d2575 mov esi, esp */
  ESI = (ESP);
  /* 123d2577 push 0x124025d0 */
  push32((uint32_t)(0x124025d0u));
  /* 123d257c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d257e call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2584u);
  /* 123d2584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2587 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2589 call 0x123d50e0 */
  push32(0x123d258eu); f_123d50e0();
  /* 123d258e mov esi, esp */
  ESI = (ESP);
  /* 123d2590 push 0x124025f0 */
  push32((uint32_t)(0x124025f0u));
  /* 123d2595 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2597 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d259du);
  /* 123d259d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d25a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d25a2 call 0x123d50e0 */
  push32(0x123d25a7u); f_123d50e0();
  /* 123d25a7 mov esi, esp */
  ESI = (ESP);
  /* 123d25a9 push 0x12402610 */
  push32((uint32_t)(0x12402610u));
  /* 123d25ae push 0 */
  push32((uint32_t)(0x0u));
  /* 123d25b0 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d25b6u);
  /* 123d25b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d25b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d25bb call 0x123d50e0 */
  push32(0x123d25c0u); f_123d50e0();
  /* 123d25c0 mov esi, esp */
  ESI = (ESP);
  /* 123d25c2 push 0x12402628 */
  push32((uint32_t)(0x12402628u));
  /* 123d25c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d25c9 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d25cfu);
  /* 123d25cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d25d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d25d4 call 0x123d50e0 */
  push32(0x123d25d9u); f_123d50e0();
  /* 123d25d9 mov esi, esp */
  ESI = (ESP);
  /* 123d25db push 0x12402648 */
  push32((uint32_t)(0x12402648u));
  /* 123d25e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d25e2 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d25e8u);
  /* 123d25e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d25eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d25ed call 0x123d50e0 */
  push32(0x123d25f2u); f_123d50e0();
  /* 123d25f2 mov esi, esp */
  ESI = (ESP);
  /* 123d25f4 push 0x12402668 */
  push32((uint32_t)(0x12402668u));
  /* 123d25f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d25fb call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2601u);
  /* 123d2601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2604 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2606 call 0x123d50e0 */
  push32(0x123d260bu); f_123d50e0();
  /* 123d260b mov esi, esp */
  ESI = (ESP);
  /* 123d260d push 0x12402688 */
  push32((uint32_t)(0x12402688u));
  /* 123d2612 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2614 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d261au);
  /* 123d261a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d261d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d261f call 0x123d50e0 */
  push32(0x123d2624u); f_123d50e0();
  /* 123d2624 mov esi, esp */
  ESI = (ESP);
  /* 123d2626 push 0x124026a0 */
  push32((uint32_t)(0x124026a0u));
  /* 123d262b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d262d call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2633u);
  /* 123d2633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2638 call 0x123d50e0 */
  push32(0x123d263du); f_123d50e0();
  /* 123d263d mov esi, esp */
  ESI = (ESP);
  /* 123d263f push 0x124026c0 */
  push32((uint32_t)(0x124026c0u));
  /* 123d2644 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2646 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d264cu);
  /* 123d264c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d264f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2651 call 0x123d50e0 */
  push32(0x123d2656u); f_123d50e0();
  /* 123d2656 mov esi, esp */
  ESI = (ESP);
  /* 123d2658 push 0x124026d8 */
  push32((uint32_t)(0x124026d8u));
  /* 123d265d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d265f call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2665u);
  /* 123d2665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d266a call 0x123d50e0 */
  push32(0x123d266fu); f_123d50e0();
  /* 123d266f mov esi, esp */
  ESI = (ESP);
  /* 123d2671 push 0x12402640 */
  push32((uint32_t)(0x12402640u));
  /* 123d2676 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2678 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d267eu);
  /* 123d267e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2683 call 0x123d50e0 */
  push32(0x123d2688u); f_123d50e0();
  /* 123d2688 mov esi, esp */
  ESI = (ESP);
  /* 123d268a push 0x12402660 */
  push32((uint32_t)(0x12402660u));
  /* 123d268f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2691 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2697u);
  /* 123d2697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d269a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d269c call 0x123d50e0 */
  push32(0x123d26a1u); f_123d50e0();
  /* 123d26a1 mov esi, esp */
  ESI = (ESP);
  /* 123d26a3 push 0x12402680 */
  push32((uint32_t)(0x12402680u));
  /* 123d26a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d26aa call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d26b0u);
  /* 123d26b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d26b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d26b5 call 0x123d50e0 */
  push32(0x123d26bau); f_123d50e0();
  /* 123d26ba mov esi, esp */
  ESI = (ESP);
  /* 123d26bc push 0x12402698 */
  push32((uint32_t)(0x12402698u));
  /* 123d26c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d26c3 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d26c9u);
  /* 123d26c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d26cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d26ce call 0x123d50e0 */
  push32(0x123d26d3u); f_123d50e0();
  /* 123d26d3 mov esi, esp */
  ESI = (ESP);
  /* 123d26d5 push 0x124026b8 */
  push32((uint32_t)(0x124026b8u));
  /* 123d26da push 0 */
  push32((uint32_t)(0x0u));
  /* 123d26dc call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d26e2u);
  /* 123d26e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d26e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d26e7 call 0x123d50e0 */
  push32(0x123d26ecu); f_123d50e0();
  /* 123d26ec mov esi, esp */
  ESI = (ESP);
  /* 123d26ee push 0x124026d0 */
  push32((uint32_t)(0x124026d0u));
  /* 123d26f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d26f5 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d26fbu);
  /* 123d26fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d26fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2700 call 0x123d50e0 */
  push32(0x123d2705u); f_123d50e0();
  /* 123d2705 mov esi, esp */
  ESI = (ESP);
  /* 123d2707 push 0x124026e8 */
  push32((uint32_t)(0x124026e8u));
  /* 123d270c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d270e call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2714u);
  /* 123d2714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2719 call 0x123d50e0 */
  push32(0x123d271eu); f_123d50e0();
  /* 123d271e mov esi, esp */
  ESI = (ESP);
  /* 123d2720 push 0x124026f8 */
  push32((uint32_t)(0x124026f8u));
  /* 123d2725 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2727 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d272du);
  /* 123d272d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2730 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2732 call 0x123d50e0 */
  push32(0x123d2737u); f_123d50e0();
  /* 123d2737 mov esi, esp */
  ESI = (ESP);
  /* 123d2739 push 0x12402700 */
  push32((uint32_t)(0x12402700u));
  /* 123d273e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2740 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2746u);
  /* 123d2746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2749 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d274b call 0x123d50e0 */
  push32(0x123d2750u); f_123d50e0();
  /* 123d2750 mov esi, esp */
  ESI = (ESP);
  /* 123d2752 push 0x12402708 */
  push32((uint32_t)(0x12402708u));
  /* 123d2757 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2759 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d275fu);
  /* 123d275f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2762 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2764 call 0x123d50e0 */
  push32(0x123d2769u); f_123d50e0();
  /* 123d2769 mov esi, esp */
  ESI = (ESP);
  /* 123d276b push 0x124026b0 */
  push32((uint32_t)(0x124026b0u));
  /* 123d2770 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2772 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2778u);
  /* 123d2778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d277b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d277d call 0x123d50e0 */
  push32(0x123d2782u); f_123d50e0();
  /* 123d2782 mov esi, esp */
  ESI = (ESP);
  /* 123d2784 push 0x124026c8 */
  push32((uint32_t)(0x124026c8u));
  /* 123d2789 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d278b call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d2791u);
  /* 123d2791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2796 call 0x123d50e0 */
  push32(0x123d279bu); f_123d50e0();
  /* 123d279b mov esi, esp */
  ESI = (ESP);
  /* 123d279d push 0x124026e0 */
  push32((uint32_t)(0x124026e0u));
  /* 123d27a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d27a4 call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d27aau);
  /* 123d27aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d27ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d27af call 0x123d50e0 */
  push32(0x123d27b4u); f_123d50e0();
  /* 123d27b4 mov esi, esp */
  ESI = (ESP);
  /* 123d27b6 push 0x124026f0 */
  push32((uint32_t)(0x124026f0u));
  /* 123d27bb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d27bd call dword ptr [0x12405418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405418))), 0x123d27c3u);
  /* 123d27c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d27c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d27c8 call 0x123d50e0 */
  push32(0x123d27cdu); f_123d50e0();
  /* 123d27cd mov esi, esp */
  ESI = (ESP);
  /* 123d27cf push 0x12402510 */
  push32((uint32_t)(0x12402510u));
  /* 123d27d4 call dword ptr [0x12405428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405428))), 0x123d27dau);
  /* 123d27da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d27dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d27df call 0x123d50e0 */
  push32(0x123d27e4u); f_123d50e0();
  /* 123d27e4 mov esi, esp */
  ESI = (ESP);
  /* 123d27e6 push 0x12402520 */
  push32((uint32_t)(0x12402520u));
  /* 123d27eb call dword ptr [0x1240542c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240542c))), 0x123d27f1u);
  /* 123d27f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d27f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d27f6 call 0x123d50e0 */
  push32(0x123d27fbu); f_123d50e0();
  /* 123d27fb mov esi, esp */
  ESI = (ESP);
  /* 123d27fd push 0x12402518 */
  push32((uint32_t)(0x12402518u));
  /* 123d2802 call dword ptr [0x12405424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405424))), 0x123d2808u);
  /* 123d2808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d280b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d280d call 0x123d50e0 */
  push32(0x123d2812u); f_123d50e0();
  /* 123d2812 mov esi, esp */
  ESI = (ESP);
  /* 123d2814 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 123d2819 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d281b call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d2821u);
  /* 123d2821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2824 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2826 call 0x123d50e0 */
  push32(0x123d282bu); f_123d50e0();
  /* 123d282b mov esi, esp */
  ESI = (ESP);
  /* 123d282d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d282f push 3 */
  push32((uint32_t)(0x3u));
  /* 123d2831 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2837u);
  /* 123d2837 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d283a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d283c call 0x123d50e0 */
  push32(0x123d2841u); f_123d50e0();
  /* 123d2841 mov esi, esp */
  ESI = (ESP);
  /* 123d2843 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2845 push 4 */
  push32((uint32_t)(0x4u));
  /* 123d2847 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d284du);
  /* 123d284d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2850 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2852 call 0x123d50e0 */
  push32(0x123d2857u); f_123d50e0();
  /* 123d2857 mov esi, esp */
  ESI = (ESP);
  /* 123d2859 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d285b push 5 */
  push32((uint32_t)(0x5u));
  /* 123d285d call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2863u);
  /* 123d2863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2868 call 0x123d50e0 */
  push32(0x123d286du); f_123d50e0();
  /* 123d286d mov esi, esp */
  ESI = (ESP);
  /* 123d286f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2871 push 6 */
  push32((uint32_t)(0x6u));
  /* 123d2873 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2879u);
  /* 123d2879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d287c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d287e call 0x123d50e0 */
  push32(0x123d2883u); f_123d50e0();
  /* 123d2883 mov esi, esp */
  ESI = (ESP);
  /* 123d2885 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2887 push 7 */
  push32((uint32_t)(0x7u));
  /* 123d2889 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d288fu);
  /* 123d288f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2892 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2894 call 0x123d50e0 */
  push32(0x123d2899u); f_123d50e0();
  /* 123d2899 mov esi, esp */
  ESI = (ESP);
  /* 123d289b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d289d push 8 */
  push32((uint32_t)(0x8u));
  /* 123d289f call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d28a5u);
  /* 123d28a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d28a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d28aa call 0x123d50e0 */
  push32(0x123d28afu); f_123d50e0();
  /* 123d28af mov esi, esp */
  ESI = (ESP);
  /* 123d28b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d28b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d28b5 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d28bbu);
  /* 123d28bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d28be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d28c0 call 0x123d50e0 */
  push32(0x123d28c5u); f_123d50e0();
  /* 123d28c5 mov esi, esp */
  ESI = (ESP);
  /* 123d28c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d28c9 push 0xa */
  push32((uint32_t)(0xau));
  /* 123d28cb call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d28d1u);
  /* 123d28d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d28d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d28d6 call 0x123d50e0 */
  push32(0x123d28dbu); f_123d50e0();
  /* 123d28db mov esi, esp */
  ESI = (ESP);
  /* 123d28dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123d28df push 0xb */
  push32((uint32_t)(0xbu));
  /* 123d28e1 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d28e7u);
  /* 123d28e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d28ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d28ec call 0x123d50e0 */
  push32(0x123d28f1u); f_123d50e0();
  /* 123d28f1 mov esi, esp */
  ESI = (ESP);
  /* 123d28f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d28f5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 123d28f7 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d28fdu);
  /* 123d28fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2900 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2902 call 0x123d50e0 */
  push32(0x123d2907u); f_123d50e0();
  /* 123d2907 mov esi, esp */
  ESI = (ESP);
  /* 123d2909 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d290b push 0xd */
  push32((uint32_t)(0xdu));
  /* 123d290d call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2913u);
  /* 123d2913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2916 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2918 call 0x123d50e0 */
  push32(0x123d291du); f_123d50e0();
  /* 123d291d mov esi, esp */
  ESI = (ESP);
  /* 123d291f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2921 push 0xe */
  push32((uint32_t)(0xeu));
  /* 123d2923 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2929u);
  /* 123d2929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d292c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d292e call 0x123d50e0 */
  push32(0x123d2933u); f_123d50e0();
  /* 123d2933 mov esi, esp */
  ESI = (ESP);
  /* 123d2935 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2937 push 0xf */
  push32((uint32_t)(0xfu));
  /* 123d2939 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d293fu);
  /* 123d293f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2942 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2944 call 0x123d50e0 */
  push32(0x123d2949u); f_123d50e0();
  /* 123d2949 mov esi, esp */
  ESI = (ESP);
  /* 123d294b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d294d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123d294f call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2955u);
  /* 123d2955 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2958 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d295a call 0x123d50e0 */
  push32(0x123d295fu); f_123d50e0();
  /* 123d295f mov esi, esp */
  ESI = (ESP);
  /* 123d2961 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2963 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123d2965 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d296bu);
  /* 123d296b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d296e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2970 call 0x123d50e0 */
  push32(0x123d2975u); f_123d50e0();
  /* 123d2975 mov esi, esp */
  ESI = (ESP);
  /* 123d2977 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2979 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123d297b call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2981u);
  /* 123d2981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2986 call 0x123d50e0 */
  push32(0x123d298bu); f_123d50e0();
  /* 123d298b mov esi, esp */
  ESI = (ESP);
  /* 123d298d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d298f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123d2991 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2997u);
  /* 123d2997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d299a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d299c call 0x123d50e0 */
  push32(0x123d29a1u); f_123d50e0();
  /* 123d29a1 mov esi, esp */
  ESI = (ESP);
  /* 123d29a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d29a5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 123d29a7 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d29adu);
  /* 123d29ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d29b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d29b2 call 0x123d50e0 */
  push32(0x123d29b7u); f_123d50e0();
  /* 123d29b7 mov esi, esp */
  ESI = (ESP);
  /* 123d29b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d29bb push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123d29bd call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d29c3u);
  /* 123d29c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d29c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d29c8 call 0x123d50e0 */
  push32(0x123d29cdu); f_123d50e0();
  /* 123d29cd mov esi, esp */
  ESI = (ESP);
  /* 123d29cf push 0 */
  push32((uint32_t)(0x0u));
  /* 123d29d1 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123d29d3 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d29d9u);
  /* 123d29d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d29dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d29de call 0x123d50e0 */
  push32(0x123d29e3u); f_123d50e0();
  /* 123d29e3 mov esi, esp */
  ESI = (ESP);
  /* 123d29e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d29e7 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 123d29e9 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d29efu);
  /* 123d29ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d29f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d29f4 call 0x123d50e0 */
  push32(0x123d29f9u); f_123d50e0();
  /* 123d29f9 mov esi, esp */
  ESI = (ESP);
  /* 123d29fb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d29fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 123d29ff call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2a05u);
  /* 123d2a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a0a call 0x123d50e0 */
  push32(0x123d2a0fu); f_123d50e0();
  /* 123d2a0f mov esi, esp */
  ESI = (ESP);
  /* 123d2a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2a13 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123d2a15 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2a1bu);
  /* 123d2a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a20 call 0x123d50e0 */
  push32(0x123d2a25u); f_123d50e0();
  /* 123d2a25 mov esi, esp */
  ESI = (ESP);
  /* 123d2a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2a29 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 123d2a2b call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2a31u);
  /* 123d2a31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a36 call 0x123d50e0 */
  push32(0x123d2a3bu); f_123d50e0();
  /* 123d2a3b mov esi, esp */
  ESI = (ESP);
  /* 123d2a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2a3f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 123d2a41 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2a47u);
  /* 123d2a47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a4c call 0x123d50e0 */
  push32(0x123d2a51u); f_123d50e0();
  /* 123d2a51 mov esi, esp */
  ESI = (ESP);
  /* 123d2a53 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123d2a55 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2a5bu);
  /* 123d2a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a60 call 0x123d50e0 */
  push32(0x123d2a65u); f_123d50e0();
  /* 123d2a65 mov esi, esp */
  ESI = (ESP);
  /* 123d2a67 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123d2a69 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2a6fu);
  /* 123d2a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a74 call 0x123d50e0 */
  push32(0x123d2a79u); f_123d50e0();
  /* 123d2a79 mov esi, esp */
  ESI = (ESP);
  /* 123d2a7b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 123d2a7d call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2a83u);
  /* 123d2a83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a88 call 0x123d50e0 */
  push32(0x123d2a8du); f_123d50e0();
  /* 123d2a8d mov esi, esp */
  ESI = (ESP);
  /* 123d2a8f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 123d2a91 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2a97u);
  /* 123d2a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2a9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2a9c call 0x123d50e0 */
  push32(0x123d2aa1u); f_123d50e0();
  /* 123d2aa1 mov esi, esp */
  ESI = (ESP);
  /* 123d2aa3 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 123d2aa5 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2aabu);
  /* 123d2aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2aae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ab0 call 0x123d50e0 */
  push32(0x123d2ab5u); f_123d50e0();
  /* 123d2ab5 mov esi, esp */
  ESI = (ESP);
  /* 123d2ab7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 123d2ab9 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2abfu);
  /* 123d2abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2ac2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ac4 call 0x123d50e0 */
  push32(0x123d2ac9u); f_123d50e0();
  /* 123d2ac9 mov esi, esp */
  ESI = (ESP);
  /* 123d2acb push 0x48 */
  push32((uint32_t)(0x48u));
  /* 123d2acd call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2ad3u);
  /* 123d2ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2ad6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ad8 call 0x123d50e0 */
  push32(0x123d2addu); f_123d50e0();
  /* 123d2add mov esi, esp */
  ESI = (ESP);
  /* 123d2adf push 0x49 */
  push32((uint32_t)(0x49u));
  /* 123d2ae1 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2ae7u);
  /* 123d2ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2aea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2aec call 0x123d50e0 */
  push32(0x123d2af1u); f_123d50e0();
  /* 123d2af1 mov esi, esp */
  ESI = (ESP);
  /* 123d2af3 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 123d2af5 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2afbu);
  /* 123d2afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2afe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b00 call 0x123d50e0 */
  push32(0x123d2b05u); f_123d50e0();
  /* 123d2b05 mov esi, esp */
  ESI = (ESP);
  /* 123d2b07 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 123d2b09 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b0fu);
  /* 123d2b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b14 call 0x123d50e0 */
  push32(0x123d2b19u); f_123d50e0();
  /* 123d2b19 mov esi, esp */
  ESI = (ESP);
  /* 123d2b1b push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 123d2b1d call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b23u);
  /* 123d2b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b28 call 0x123d50e0 */
  push32(0x123d2b2du); f_123d50e0();
  /* 123d2b2d mov esi, esp */
  ESI = (ESP);
  /* 123d2b2f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 123d2b31 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b37u);
  /* 123d2b37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b3c call 0x123d50e0 */
  push32(0x123d2b41u); f_123d50e0();
  /* 123d2b41 mov esi, esp */
  ESI = (ESP);
  /* 123d2b43 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 123d2b45 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b4bu);
  /* 123d2b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b50 call 0x123d50e0 */
  push32(0x123d2b55u); f_123d50e0();
  /* 123d2b55 mov esi, esp */
  ESI = (ESP);
  /* 123d2b57 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 123d2b59 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b5fu);
  /* 123d2b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b64 call 0x123d50e0 */
  push32(0x123d2b69u); f_123d50e0();
  /* 123d2b69 mov esi, esp */
  ESI = (ESP);
  /* 123d2b6b push 0x50 */
  push32((uint32_t)(0x50u));
  /* 123d2b6d call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b73u);
  /* 123d2b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b78 call 0x123d50e0 */
  push32(0x123d2b7du); f_123d50e0();
  /* 123d2b7d mov esi, esp */
  ESI = (ESP);
  /* 123d2b7f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 123d2b81 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b87u);
  /* 123d2b87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2b8c call 0x123d50e0 */
  push32(0x123d2b91u); f_123d50e0();
  /* 123d2b91 mov esi, esp */
  ESI = (ESP);
  /* 123d2b93 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 123d2b95 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2b9bu);
  /* 123d2b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2b9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ba0 call 0x123d50e0 */
  push32(0x123d2ba5u); f_123d50e0();
  /* 123d2ba5 mov esi, esp */
  ESI = (ESP);
  /* 123d2ba7 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 123d2ba9 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2bafu);
  /* 123d2baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2bb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2bb4 call 0x123d50e0 */
  push32(0x123d2bb9u); f_123d50e0();
  /* 123d2bb9 mov esi, esp */
  ESI = (ESP);
  /* 123d2bbb push 0x51 */
  push32((uint32_t)(0x51u));
  /* 123d2bbd call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2bc3u);
  /* 123d2bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2bc8 call 0x123d50e0 */
  push32(0x123d2bcdu); f_123d50e0();
L_123d2bcd:;
  /* 123d2bcd mov esi, esp */
  ESI = (ESP);
  /* 123d2bcf push 2 */
  push32((uint32_t)(0x2u));
  /* 123d2bd1 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d2bd7u);
  /* 123d2bd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2bda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2bdc call 0x123d50e0 */
  push32(0x123d2be1u); f_123d50e0();
  /* 123d2be1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2be6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2be8 je 0x123d2c7d */
  if (C.zf) goto L_123d2c7d;
  /* 123d2bee mov esi, esp */
  ESI = (ESP);
  /* 123d2bf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2bf2 call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d2bf8u);
  /* 123d2bf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2bfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2bfd call 0x123d50e0 */
  push32(0x123d2c02u); f_123d50e0();
  /* 123d2c02 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2c09 je 0x123d2c7d */
  if (C.zf) goto L_123d2c7d;
  /* 123d2c0b mov esi, esp */
  ESI = (ESP);
  /* 123d2c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2c0f call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d2c15u);
  /* 123d2c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2c18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2c1a call 0x123d50e0 */
  push32(0x123d2c1fu); f_123d50e0();
  /* 123d2c1f mov esi, esp */
  ESI = (ESP);
  /* 123d2c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2c23 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d2c25 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2c2bu);
  /* 123d2c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2c2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2c30 call 0x123d50e0 */
  push32(0x123d2c35u); f_123d50e0();
  /* 123d2c35 mov esi, esp */
  ESI = (ESP);
  /* 123d2c37 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2c39 push 0x12402498 */
  push32((uint32_t)(0x12402498u));
  /* 123d2c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2c40 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2c46u);
  /* 123d2c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2c4b call 0x123d50e0 */
  push32(0x123d2c50u); f_123d50e0();
  /* 123d2c50 mov esi, esp */
  ESI = (ESP);
  /* 123d2c52 push 0x123fd6d4 */
  push32((uint32_t)(0x123fd6d4u));
  /* 123d2c57 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d2c5du);
  /* 123d2c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2c62 call 0x123d50e0 */
  push32(0x123d2c67u); f_123d50e0();
  /* 123d2c67 mov esi, esp */
  ESI = (ESP);
  /* 123d2c69 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2c6b push 3 */
  push32((uint32_t)(0x3u));
  /* 123d2c6d call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2c73u);
  /* 123d2c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2c78 call 0x123d50e0 */
  push32(0x123d2c7du); f_123d50e0();
L_123d2c7d:;
  /* 123d2c7d mov esi, esp */
  ESI = (ESP);
  /* 123d2c7f push 3 */
  push32((uint32_t)(0x3u));
  /* 123d2c81 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d2c87u);
  /* 123d2c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2c8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2c8c call 0x123d50e0 */
  push32(0x123d2c91u); f_123d50e0();
  /* 123d2c91 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2c98 je 0x123d2d8d */
  if (C.zf) goto L_123d2d8d;
  /* 123d2c9e mov esi, esp */
  ESI = (ESP);
  /* 123d2ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2ca2 push 0x12402498 */
  push32((uint32_t)(0x12402498u));
  /* 123d2ca7 call dword ptr [0x1240543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240543c))), 0x123d2cadu);
  /* 123d2cad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2cb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2cb2 call 0x123d50e0 */
  push32(0x123d2cb7u); f_123d50e0();
  /* 123d2cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2cb9 jle 0x123d2d8d */
  if ((C.zf||C.sf!=C.of)) goto L_123d2d8d;
  /* 123d2cbf mov esi, esp */
  ESI = (ESP);
  /* 123d2cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2cc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 123d2cc5 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2ccbu);
  /* 123d2ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2cce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2cd0 call 0x123d50e0 */
  push32(0x123d2cd5u); f_123d50e0();
  /* 123d2cd5 mov esi, esp */
  ESI = (ESP);
  /* 123d2cd7 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123d2cd9 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d2cdfu);
  /* 123d2cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ce4 call 0x123d50e0 */
  push32(0x123d2ce9u); f_123d50e0();
  /* 123d2ce9 mov esi, esp */
  ESI = (ESP);
  /* 123d2ceb push 0x4a */
  push32((uint32_t)(0x4au));
  /* 123d2ced call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2cf3u);
  /* 123d2cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2cf8 call 0x123d50e0 */
  push32(0x123d2cfdu); f_123d50e0();
  /* 123d2cfd mov esi, esp */
  ESI = (ESP);
  /* 123d2cff push 0x50 */
  push32((uint32_t)(0x50u));
  /* 123d2d01 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d2d07u);
  /* 123d2d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2d0c call 0x123d50e0 */
  push32(0x123d2d11u); f_123d50e0();
  /* 123d2d11 mov esi, esp */
  ESI = (ESP);
  /* 123d2d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2d15 push 0x12402498 */
  push32((uint32_t)(0x12402498u));
  /* 123d2d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2d1c call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2d22u);
  /* 123d2d22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2d27 call 0x123d50e0 */
  push32(0x123d2d2cu); f_123d50e0();
  /* 123d2d2c mov esi, esp */
  ESI = (ESP);
  /* 123d2d2e push 0x123fd6cc */
  push32((uint32_t)(0x123fd6ccu));
  /* 123d2d33 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d2d39u);
  /* 123d2d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2d3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2d3e call 0x123d50e0 */
  push32(0x123d2d43u); f_123d50e0();
  /* 123d2d43 mov esi, esp */
  ESI = (ESP);
  /* 123d2d45 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2d47 push 0x124023e8 */
  push32((uint32_t)(0x124023e8u));
  /* 123d2d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2d4e call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d2d54u);
  /* 123d2d54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2d59 call 0x123d50e0 */
  push32(0x123d2d5eu); f_123d50e0();
  /* 123d2d5e mov esi, esp */
  ESI = (ESP);
  /* 123d2d60 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2d62 push 4 */
  push32((uint32_t)(0x4u));
  /* 123d2d64 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2d6au);
  /* 123d2d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2d6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2d6f call 0x123d50e0 */
  push32(0x123d2d74u); f_123d50e0();
  /* 123d2d74 mov esi, esp */
  ESI = (ESP);
  /* 123d2d76 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 123d2d7b push 2 */
  push32((uint32_t)(0x2u));
  /* 123d2d7d call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d2d83u);
  /* 123d2d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2d86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2d88 call 0x123d50e0 */
  push32(0x123d2d8du); f_123d50e0();
L_123d2d8d:;
  /* 123d2d8d mov esi, esp */
  ESI = (ESP);
  /* 123d2d8f push 4 */
  push32((uint32_t)(0x4u));
  /* 123d2d91 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d2d97u);
  /* 123d2d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2d9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2d9c call 0x123d50e0 */
  push32(0x123d2da1u); f_123d50e0();
  /* 123d2da1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2da6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2da8 je 0x123d2e0a */
  if (C.zf) goto L_123d2e0a;
  /* 123d2daa mov esi, esp */
  ESI = (ESP);
  /* 123d2dac push 2 */
  push32((uint32_t)(0x2u));
  /* 123d2dae call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d2db4u);
  /* 123d2db4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2db9 call 0x123d50e0 */
  push32(0x123d2dbeu); f_123d50e0();
  /* 123d2dbe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2dc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2dc5 je 0x123d2e0a */
  if (C.zf) goto L_123d2e0a;
  /* 123d2dc7 mov esi, esp */
  ESI = (ESP);
  /* 123d2dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2dcb push 4 */
  push32((uint32_t)(0x4u));
  /* 123d2dcd call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2dd3u);
  /* 123d2dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2dd8 call 0x123d50e0 */
  push32(0x123d2dddu); f_123d50e0();
  /* 123d2ddd mov esi, esp */
  ESI = (ESP);
  /* 123d2ddf push 0x123fd6c4 */
  push32((uint32_t)(0x123fd6c4u));
  /* 123d2de4 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d2deau);
  /* 123d2dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2ded cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2def call 0x123d50e0 */
  push32(0x123d2df4u); f_123d50e0();
  /* 123d2df4 mov esi, esp */
  ESI = (ESP);
  /* 123d2df6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2df8 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d2dfa call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2e00u);
  /* 123d2e00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2e03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2e05 call 0x123d50e0 */
  push32(0x123d2e0au); f_123d50e0();
L_123d2e0a:;
  /* 123d2e0a mov esi, esp */
  ESI = (ESP);
  /* 123d2e0c push 5 */
  push32((uint32_t)(0x5u));
  /* 123d2e0e call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d2e14u);
  /* 123d2e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2e19 call 0x123d50e0 */
  push32(0x123d2e1eu); f_123d50e0();
  /* 123d2e1e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2e23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2e25 je 0x123d2efa */
  if (C.zf) goto L_123d2efa;
  /* 123d2e2b mov esi, esp */
  ESI = (ESP);
  /* 123d2e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2e2f push 0x124023e8 */
  push32((uint32_t)(0x124023e8u));
  /* 123d2e34 call dword ptr [0x1240543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240543c))), 0x123d2e3au);
  /* 123d2e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2e3f call 0x123d50e0 */
  push32(0x123d2e44u); f_123d50e0();
  /* 123d2e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2e46 jle 0x123d2efa */
  if ((C.zf||C.sf!=C.of)) goto L_123d2efa;
  /* 123d2e4c mov esi, esp */
  ESI = (ESP);
  /* 123d2e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2e50 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d2e52 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2e58u);
  /* 123d2e58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2e5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2e5d call 0x123d50e0 */
  push32(0x123d2e62u); f_123d50e0();
  /* 123d2e62 mov esi, esp */
  ESI = (ESP);
  /* 123d2e64 push 0x123fd6bc */
  push32((uint32_t)(0x123fd6bcu));
  /* 123d2e69 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d2e6fu);
  /* 123d2e6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2e72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2e74 call 0x123d50e0 */
  push32(0x123d2e79u); f_123d50e0();
  /* 123d2e79 mov esi, esp */
  ESI = (ESP);
  /* 123d2e7b push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 123d2e7d call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d2e83u);
  /* 123d2e83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2e86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2e88 call 0x123d50e0 */
  push32(0x123d2e8du); f_123d50e0();
  /* 123d2e8d mov esi, esp */
  ESI = (ESP);
  /* 123d2e8f push 0x51 */
  push32((uint32_t)(0x51u));
  /* 123d2e91 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d2e97u);
  /* 123d2e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2e9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2e9c call 0x123d50e0 */
  push32(0x123d2ea1u); f_123d50e0();
  /* 123d2ea1 mov esi, esp */
  ESI = (ESP);
  /* 123d2ea3 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123d2ea5 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d2eabu);
  /* 123d2eab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2eae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2eb0 call 0x123d50e0 */
  push32(0x123d2eb5u); f_123d50e0();
  /* 123d2eb5 mov esi, esp */
  ESI = (ESP);
  /* 123d2eb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2eb9 push 6 */
  push32((uint32_t)(0x6u));
  /* 123d2ebb call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2ec1u);
  /* 123d2ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2ec4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ec6 call 0x123d50e0 */
  push32(0x123d2ecbu); f_123d50e0();
  /* 123d2ecb mov esi, esp */
  ESI = (ESP);
  /* 123d2ecd push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2ecf push 9 */
  push32((uint32_t)(0x9u));
  /* 123d2ed1 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2ed7u);
  /* 123d2ed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2edc call 0x123d50e0 */
  push32(0x123d2ee1u); f_123d50e0();
  /* 123d2ee1 mov esi, esp */
  ESI = (ESP);
  /* 123d2ee3 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 123d2ee8 push 3 */
  push32((uint32_t)(0x3u));
  /* 123d2eea call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d2ef0u);
  /* 123d2ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2ef3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ef5 call 0x123d50e0 */
  push32(0x123d2efau); f_123d50e0();
L_123d2efa:;
  /* 123d2efa mov esi, esp */
  ESI = (ESP);
  /* 123d2efc push 6 */
  push32((uint32_t)(0x6u));
  /* 123d2efe call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d2f04u);
  /* 123d2f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2f09 call 0x123d50e0 */
  push32(0x123d2f0eu); f_123d50e0();
  /* 123d2f0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2f15 je 0x123d2f90 */
  if (C.zf) goto L_123d2f90;
  /* 123d2f17 mov esi, esp */
  ESI = (ESP);
  /* 123d2f19 push 3 */
  push32((uint32_t)(0x3u));
  /* 123d2f1b call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d2f21u);
  /* 123d2f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2f26 call 0x123d50e0 */
  push32(0x123d2f2bu); f_123d50e0();
  /* 123d2f2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2f32 je 0x123d2f90 */
  if (C.zf) goto L_123d2f90;
  /* 123d2f34 mov esi, esp */
  ESI = (ESP);
  /* 123d2f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2f38 push 6 */
  push32((uint32_t)(0x6u));
  /* 123d2f3a call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2f40u);
  /* 123d2f40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2f43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2f45 call 0x123d50e0 */
  push32(0x123d2f4au); f_123d50e0();
  /* 123d2f4a mov esi, esp */
  ESI = (ESP);
  /* 123d2f4c push 0x123fd6b4 */
  push32((uint32_t)(0x123fd6b4u));
  /* 123d2f51 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d2f57u);
  /* 123d2f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2f5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2f5c call 0x123d50e0 */
  push32(0x123d2f61u); f_123d50e0();
  /* 123d2f61 mov esi, esp */
  ESI = (ESP);
  /* 123d2f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2f65 push 7 */
  push32((uint32_t)(0x7u));
  /* 123d2f67 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2f6du);
  /* 123d2f6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2f70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2f72 call 0x123d50e0 */
  push32(0x123d2f77u); f_123d50e0();
  /* 123d2f77 mov esi, esp */
  ESI = (ESP);
  /* 123d2f79 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 123d2f7e push 4 */
  push32((uint32_t)(0x4u));
  /* 123d2f80 call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d2f86u);
  /* 123d2f86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2f89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2f8b call 0x123d50e0 */
  push32(0x123d2f90u); f_123d50e0();
L_123d2f90:;
  /* 123d2f90 mov esi, esp */
  ESI = (ESP);
  /* 123d2f92 push 7 */
  push32((uint32_t)(0x7u));
  /* 123d2f94 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d2f9au);
  /* 123d2f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2f9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2f9f call 0x123d50e0 */
  push32(0x123d2fa4u); f_123d50e0();
  /* 123d2fa4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2fab je 0x123d3023 */
  if (C.zf) goto L_123d3023;
  /* 123d2fad mov esi, esp */
  ESI = (ESP);
  /* 123d2faf push 4 */
  push32((uint32_t)(0x4u));
  /* 123d2fb1 call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d2fb7u);
  /* 123d2fb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2fba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2fbc call 0x123d50e0 */
  push32(0x123d2fc1u); f_123d50e0();
  /* 123d2fc1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d2fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d2fc8 je 0x123d3023 */
  if (C.zf) goto L_123d3023;
  /* 123d2fca mov esi, esp */
  ESI = (ESP);
  /* 123d2fcc push 0 */
  push32((uint32_t)(0x0u));
  /* 123d2fce push 7 */
  push32((uint32_t)(0x7u));
  /* 123d2fd0 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d2fd6u);
  /* 123d2fd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2fd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2fdb call 0x123d50e0 */
  push32(0x123d2fe0u); f_123d50e0();
  /* 123d2fe0 mov esi, esp */
  ESI = (ESP);
  /* 123d2fe2 push 0x123fd6ac */
  push32((uint32_t)(0x123fd6acu));
  /* 123d2fe7 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d2fedu);
  /* 123d2fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d2ff0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d2ff2 call 0x123d50e0 */
  push32(0x123d2ff7u); f_123d50e0();
  /* 123d2ff7 mov esi, esp */
  ESI = (ESP);
  /* 123d2ff9 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d2ffb push 0xa */
  push32((uint32_t)(0xau));
  /* 123d2ffd call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3003u);
  /* 123d3003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3006 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3008 call 0x123d50e0 */
  push32(0x123d300du); f_123d50e0();
  /* 123d300d mov esi, esp */
  ESI = (ESP);
  /* 123d300f push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3011 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d3013 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3019u);
  /* 123d3019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d301c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d301e call 0x123d50e0 */
  push32(0x123d3023u); f_123d50e0();
L_123d3023:;
  /* 123d3023 mov esi, esp */
  ESI = (ESP);
  /* 123d3025 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d3027 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d302du);
  /* 123d302d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3030 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3032 call 0x123d50e0 */
  push32(0x123d3037u); f_123d50e0();
  /* 123d3037 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d303c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d303e je 0x123d317d */
  if (C.zf) goto L_123d317d;
  /* 123d3044 mov esi, esp */
  ESI = (ESP);
  /* 123d3046 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3048 push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d304d call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d3053u);
  /* 123d3053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3056 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3058 call 0x123d50e0 */
  push32(0x123d305du); f_123d50e0();
  /* 123d305d cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3060 jl 0x123d317d */
  if ((C.sf!=C.of)) goto L_123d317d;
  /* 123d3066 mov esi, esp */
  ESI = (ESP);
  /* 123d3068 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d306a push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d306f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3071 call dword ptr [0x12405448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405448))), 0x123d3077u);
  /* 123d3077 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d307a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d307c call 0x123d50e0 */
  push32(0x123d3081u); f_123d50e0();
  /* 123d3081 mov esi, esp */
  ESI = (ESP);
  /* 123d3083 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3085 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d3087 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d308du);
  /* 123d308d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3092 call 0x123d50e0 */
  push32(0x123d3097u); f_123d50e0();
  /* 123d3097 mov esi, esp */
  ESI = (ESP);
  /* 123d3099 push 0x123fd6a4 */
  push32((uint32_t)(0x123fd6a4u));
  /* 123d309e call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d30a4u);
  /* 123d30a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d30a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d30a9 call 0x123d50e0 */
  push32(0x123d30aeu); f_123d50e0();
  /* 123d30ae mov esi, esp */
  ESI = (ESP);
  /* 123d30b0 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123d30b2 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d30b8u);
  /* 123d30b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d30bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d30bd call 0x123d50e0 */
  push32(0x123d30c2u); f_123d50e0();
  /* 123d30c2 mov esi, esp */
  ESI = (ESP);
  /* 123d30c4 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 123d30c6 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d30ccu);
  /* 123d30cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d30cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d30d1 call 0x123d50e0 */
  push32(0x123d30d6u); f_123d50e0();
  /* 123d30d6 mov esi, esp */
  ESI = (ESP);
  /* 123d30d8 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d30da push 0x12402530 */
  push32((uint32_t)(0x12402530u));
  /* 123d30df push 5 */
  push32((uint32_t)(0x5u));
  /* 123d30e1 push 0x12402420 */
  push32((uint32_t)(0x12402420u));
  /* 123d30e6 push 0x124024f0 */
  push32((uint32_t)(0x124024f0u));
  /* 123d30eb push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d30f0 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d30f6u);
  /* 123d30f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d30f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d30fb call 0x123d50e0 */
  push32(0x123d3100u); f_123d50e0();
  /* 123d3100 mov esi, esp */
  ESI = (ESP);
  /* 123d3102 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3104 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3109 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d310b call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d3111u);
  /* 123d3111 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3116 call 0x123d50e0 */
  push32(0x123d311bu); f_123d50e0();
  /* 123d311b mov esi, esp */
  ESI = (ESP);
  /* 123d311d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d311f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3121 push 0x12402528 */
  push32((uint32_t)(0x12402528u));
  /* 123d3126 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3128 call dword ptr [0x12405454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405454))), 0x123d312eu);
  /* 123d312e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3131 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3133 call 0x123d50e0 */
  push32(0x123d3138u); f_123d50e0();
  /* 123d3138 mov esi, esp */
  ESI = (ESP);
  /* 123d313a push 5 */
  push32((uint32_t)(0x5u));
  /* 123d313c call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d3142u);
  /* 123d3142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3145 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3147 call 0x123d50e0 */
  push32(0x123d314cu); f_123d50e0();
  /* 123d314c mov esi, esp */
  ESI = (ESP);
  /* 123d314e push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3150 push 0xc */
  push32((uint32_t)(0xcu));
  /* 123d3152 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3158u);
  /* 123d3158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d315b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d315d call 0x123d50e0 */
  push32(0x123d3162u); f_123d50e0();
  /* 123d3162 mov esi, esp */
  ESI = (ESP);
  /* 123d3164 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3166 push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d316b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d316d call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d3173u);
  /* 123d3173 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3176 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3178 call 0x123d50e0 */
  push32(0x123d317du); f_123d50e0();
L_123d317d:;
  /* 123d317d mov esi, esp */
  ESI = (ESP);
  /* 123d317f push 9 */
  push32((uint32_t)(0x9u));
  /* 123d3181 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3187u);
  /* 123d3187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d318a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d318c call 0x123d50e0 */
  push32(0x123d3191u); f_123d50e0();
  /* 123d3191 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3198 je 0x123d31e9 */
  if (C.zf) goto L_123d31e9;
  /* 123d319a mov esi, esp */
  ESI = (ESP);
  /* 123d319c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d319e push 0x124023e8 */
  push32((uint32_t)(0x124023e8u));
  /* 123d31a3 call dword ptr [0x1240543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240543c))), 0x123d31a9u);
  /* 123d31a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d31ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d31ae call 0x123d50e0 */
  push32(0x123d31b3u); f_123d50e0();
  /* 123d31b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d31b6 jle 0x123d31e9 */
  if ((C.zf||C.sf!=C.of)) goto L_123d31e9;
  /* 123d31b8 mov esi, esp */
  ESI = (ESP);
  /* 123d31ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123d31bc push 9 */
  push32((uint32_t)(0x9u));
  /* 123d31be call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d31c4u);
  /* 123d31c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d31c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d31c9 call 0x123d50e0 */
  push32(0x123d31ceu); f_123d50e0();
  /* 123d31ce mov esi, esp */
  ESI = (ESP);
  /* 123d31d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d31d2 push 0x124023e8 */
  push32((uint32_t)(0x124023e8u));
  /* 123d31d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d31d9 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d31dfu);
  /* 123d31df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d31e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d31e4 call 0x123d50e0 */
  push32(0x123d31e9u); f_123d50e0();
L_123d31e9:;
  /* 123d31e9 mov esi, esp */
  ESI = (ESP);
  /* 123d31eb push 0xa */
  push32((uint32_t)(0xau));
  /* 123d31ed call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d31f3u);
  /* 123d31f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d31f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d31f8 call 0x123d50e0 */
  push32(0x123d31fdu); f_123d50e0();
  /* 123d31fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3204 je 0x123d326b */
  if (C.zf) goto L_123d326b;
  /* 123d3206 mov esi, esp */
  ESI = (ESP);
  /* 123d3208 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d320a push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d320f call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d3215u);
  /* 123d3215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3218 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d321a call 0x123d50e0 */
  push32(0x123d321fu); f_123d50e0();
  /* 123d321f cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3222 jl 0x123d326b */
  if ((C.sf!=C.of)) goto L_123d326b;
  /* 123d3224 mov esi, esp */
  ESI = (ESP);
  /* 123d3226 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3228 push 0xa */
  push32((uint32_t)(0xau));
  /* 123d322a call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3230u);
  /* 123d3230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3233 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3235 call 0x123d50e0 */
  push32(0x123d323au); f_123d50e0();
  /* 123d323a mov esi, esp */
  ESI = (ESP);
  /* 123d323c push 1 */
  push32((uint32_t)(0x1u));
  /* 123d323e push 0xb */
  push32((uint32_t)(0xbu));
  /* 123d3240 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3246u);
  /* 123d3246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d324b call 0x123d50e0 */
  push32(0x123d3250u); f_123d50e0();
  /* 123d3250 mov esi, esp */
  ESI = (ESP);
  /* 123d3252 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3254 push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d3259 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d325b call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d3261u);
  /* 123d3261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3264 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3266 call 0x123d50e0 */
  push32(0x123d326bu); f_123d50e0();
L_123d326b:;
  /* 123d326b mov esi, esp */
  ESI = (ESP);
  /* 123d326d push 0xb */
  push32((uint32_t)(0xbu));
  /* 123d326f call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3275u);
  /* 123d3275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3278 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d327a call 0x123d50e0 */
  push32(0x123d327fu); f_123d50e0();
  /* 123d327f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3286 je 0x123d32ed */
  if (C.zf) goto L_123d32ed;
  /* 123d3288 mov esi, esp */
  ESI = (ESP);
  /* 123d328a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d328c push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d3291 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d3297u);
  /* 123d3297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d329a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d329c call 0x123d50e0 */
  push32(0x123d32a1u); f_123d50e0();
  /* 123d32a1 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d32a4 jge 0x123d32ed */
  if ((C.sf==C.of)) goto L_123d32ed;
  /* 123d32a6 mov esi, esp */
  ESI = (ESP);
  /* 123d32a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d32aa push 0xa */
  push32((uint32_t)(0xau));
  /* 123d32ac call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d32b2u);
  /* 123d32b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d32b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d32b7 call 0x123d50e0 */
  push32(0x123d32bcu); f_123d50e0();
  /* 123d32bc mov esi, esp */
  ESI = (ESP);
  /* 123d32be push 0 */
  push32((uint32_t)(0x0u));
  /* 123d32c0 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123d32c2 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d32c8u);
  /* 123d32c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d32cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d32cd call 0x123d50e0 */
  push32(0x123d32d2u); f_123d50e0();
  /* 123d32d2 mov esi, esp */
  ESI = (ESP);
  /* 123d32d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d32d6 push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d32db push 0 */
  push32((uint32_t)(0x0u));
  /* 123d32dd call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d32e3u);
  /* 123d32e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d32e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d32e8 call 0x123d50e0 */
  push32(0x123d32edu); f_123d50e0();
L_123d32ed:;
  /* 123d32ed mov esi, esp */
  ESI = (ESP);
  /* 123d32ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 123d32f1 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d32f7u);
  /* 123d32f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d32fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d32fc call 0x123d50e0 */
  push32(0x123d3301u); f_123d50e0();
  /* 123d3301 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3308 je 0x123d33df */
  if (C.zf) goto L_123d33df;
  /* 123d330e mov esi, esp */
  ESI = (ESP);
  /* 123d3310 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3315 call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d331bu);
  /* 123d331b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d331e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3320 call 0x123d50e0 */
  push32(0x123d3325u); f_123d50e0();
  /* 123d3325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3327 jne 0x123d33df */
  if (!C.zf) goto L_123d33df;
  /* 123d332d mov esi, esp */
  ESI = (ESP);
  /* 123d332f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3331 push 0xc */
  push32((uint32_t)(0xcu));
  /* 123d3333 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3339u);
  /* 123d3339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d333c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d333e call 0x123d50e0 */
  push32(0x123d3343u); f_123d50e0();
  /* 123d3343 mov esi, esp */
  ESI = (ESP);
  /* 123d3345 push 0x123fd69c */
  push32((uint32_t)(0x123fd69cu));
  /* 123d334a call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3350u);
  /* 123d3350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3353 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3355 call 0x123d50e0 */
  push32(0x123d335au); f_123d50e0();
  /* 123d335a mov esi, esp */
  ESI = (ESP);
  /* 123d335c push 0x123fd694 */
  push32((uint32_t)(0x123fd694u));
  /* 123d3361 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3367u);
  /* 123d3367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d336a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d336c call 0x123d50e0 */
  push32(0x123d3371u); f_123d50e0();
  /* 123d3371 mov esi, esp */
  ESI = (ESP);
  /* 123d3373 push 0x123fd688 */
  push32((uint32_t)(0x123fd688u));
  /* 123d3378 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d337eu);
  /* 123d337e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3381 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3383 call 0x123d50e0 */
  push32(0x123d3388u); f_123d50e0();
  /* 123d3388 mov esi, esp */
  ESI = (ESP);
  /* 123d338a push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123d338c call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3392u);
  /* 123d3392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3397 call 0x123d50e0 */
  push32(0x123d339cu); f_123d50e0();
  /* 123d339c mov esi, esp */
  ESI = (ESP);
  /* 123d339e push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 123d33a0 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d33a6u);
  /* 123d33a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d33a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d33ab call 0x123d50e0 */
  push32(0x123d33b0u); f_123d50e0();
  /* 123d33b0 mov esi, esp */
  ESI = (ESP);
  /* 123d33b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d33b4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123d33b6 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d33bcu);
  /* 123d33bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d33bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d33c1 call 0x123d50e0 */
  push32(0x123d33c6u); f_123d50e0();
  /* 123d33c6 mov esi, esp */
  ESI = (ESP);
  /* 123d33c8 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 123d33cd push 5 */
  push32((uint32_t)(0x5u));
  /* 123d33cf call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d33d5u);
  /* 123d33d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d33d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d33da call 0x123d50e0 */
  push32(0x123d33dfu); f_123d50e0();
L_123d33df:;
  /* 123d33df mov esi, esp */
  ESI = (ESP);
  /* 123d33e1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123d33e3 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d33e9u);
  /* 123d33e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d33ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d33ee call 0x123d50e0 */
  push32(0x123d33f3u); f_123d50e0();
  /* 123d33f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d33f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d33fa je 0x123d3526 */
  if (C.zf) goto L_123d3526;
  /* 123d3400 mov esi, esp */
  ESI = (ESP);
  /* 123d3402 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3404 call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d340au);
  /* 123d340a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d340d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d340f call 0x123d50e0 */
  push32(0x123d3414u); f_123d50e0();
  /* 123d3414 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d341b je 0x123d3526 */
  if (C.zf) goto L_123d3526;
  /* 123d3421 mov esi, esp */
  ESI = (ESP);
  /* 123d3423 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3425 push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d342a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d342c call dword ptr [0x12405448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405448))), 0x123d3432u);
  /* 123d3432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3437 call 0x123d50e0 */
  push32(0x123d343cu); f_123d50e0();
  /* 123d343c mov esi, esp */
  ESI = (ESP);
  /* 123d343e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3440 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123d3442 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3448u);
  /* 123d3448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d344b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d344d call 0x123d50e0 */
  push32(0x123d3452u); f_123d50e0();
  /* 123d3452 mov esi, esp */
  ESI = (ESP);
  /* 123d3454 push 0x123fd67c */
  push32((uint32_t)(0x123fd67cu));
  /* 123d3459 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d345fu);
  /* 123d345f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3462 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3464 call 0x123d50e0 */
  push32(0x123d3469u); f_123d50e0();
  /* 123d3469 mov esi, esp */
  ESI = (ESP);
  /* 123d346b push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d346d push 0x12402538 */
  push32((uint32_t)(0x12402538u));
  /* 123d3472 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3474 push 0x12402450 */
  push32((uint32_t)(0x12402450u));
  /* 123d3479 push 0x124024f0 */
  push32((uint32_t)(0x124024f0u));
  /* 123d347e push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3483 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d3489u);
  /* 123d3489 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d348c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d348e call 0x123d50e0 */
  push32(0x123d3493u); f_123d50e0();
  /* 123d3493 mov esi, esp */
  ESI = (ESP);
  /* 123d3495 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3497 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d349c push 5 */
  push32((uint32_t)(0x5u));
  /* 123d349e call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d34a4u);
  /* 123d34a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d34a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d34a9 call 0x123d50e0 */
  push32(0x123d34aeu); f_123d50e0();
  /* 123d34ae mov esi, esp */
  ESI = (ESP);
  /* 123d34b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d34b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d34b4 push 0x12402528 */
  push32((uint32_t)(0x12402528u));
  /* 123d34b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d34bb call dword ptr [0x12405454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405454))), 0x123d34c1u);
  /* 123d34c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d34c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d34c6 call 0x123d50e0 */
  push32(0x123d34cbu); f_123d50e0();
  /* 123d34cb mov esi, esp */
  ESI = (ESP);
  /* 123d34cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 123d34cf push 6 */
  push32((uint32_t)(0x6u));
  /* 123d34d1 call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d34d7u);
  /* 123d34d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d34da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d34dc call 0x123d50e0 */
  push32(0x123d34e1u); f_123d50e0();
  /* 123d34e1 mov esi, esp */
  ESI = (ESP);
  /* 123d34e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d34e5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 123d34e7 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d34edu);
  /* 123d34ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d34f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d34f2 call 0x123d50e0 */
  push32(0x123d34f7u); f_123d50e0();
  /* 123d34f7 mov esi, esp */
  ESI = (ESP);
  /* 123d34f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d34fb call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d3501u);
  /* 123d3501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3504 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3506 call 0x123d50e0 */
  push32(0x123d350bu); f_123d50e0();
  /* 123d350b mov esi, esp */
  ESI = (ESP);
  /* 123d350d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d350f push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d3514 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3516 call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d351cu);
  /* 123d351c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d351f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3521 call 0x123d50e0 */
  push32(0x123d3526u); f_123d50e0();
L_123d3526:;
  /* 123d3526 mov esi, esp */
  ESI = (ESP);
  /* 123d3528 push 0xe */
  push32((uint32_t)(0xeu));
  /* 123d352a call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3530u);
  /* 123d3530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3533 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3535 call 0x123d50e0 */
  push32(0x123d353au); f_123d50e0();
  /* 123d353a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d353f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3541 je 0x123d3601 */
  if (C.zf) goto L_123d3601;
  /* 123d3547 mov esi, esp */
  ESI = (ESP);
  /* 123d3549 push 6 */
  push32((uint32_t)(0x6u));
  /* 123d354b call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d3551u);
  /* 123d3551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3554 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3556 call 0x123d50e0 */
  push32(0x123d355bu); f_123d50e0();
  /* 123d355b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3560 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3562 je 0x123d3601 */
  if (C.zf) goto L_123d3601;
  /* 123d3568 mov esi, esp */
  ESI = (ESP);
  /* 123d356a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d356c push 0xe */
  push32((uint32_t)(0xeu));
  /* 123d356e call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3574u);
  /* 123d3574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3579 call 0x123d50e0 */
  push32(0x123d357eu); f_123d50e0();
  /* 123d357e mov esi, esp */
  ESI = (ESP);
  /* 123d3580 push 0x123fd670 */
  push32((uint32_t)(0x123fd670u));
  /* 123d3585 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d358bu);
  /* 123d358b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d358e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3590 call 0x123d50e0 */
  push32(0x123d3595u); f_123d50e0();
  /* 123d3595 mov esi, esp */
  ESI = (ESP);
  /* 123d3597 push 0x123fd664 */
  push32((uint32_t)(0x123fd664u));
  /* 123d359c call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d35a2u);
  /* 123d35a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d35a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d35a7 call 0x123d50e0 */
  push32(0x123d35acu); f_123d50e0();
  /* 123d35ac mov esi, esp */
  ESI = (ESP);
  /* 123d35ae push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 123d35b0 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d35b6u);
  /* 123d35b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d35b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d35bb call 0x123d50e0 */
  push32(0x123d35c0u); f_123d50e0();
  /* 123d35c0 mov esi, esp */
  ESI = (ESP);
  /* 123d35c2 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 123d35c4 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d35cau);
  /* 123d35ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d35cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d35cf call 0x123d50e0 */
  push32(0x123d35d4u); f_123d50e0();
  /* 123d35d4 mov esi, esp */
  ESI = (ESP);
  /* 123d35d6 push 0x12402540 */
  push32((uint32_t)(0x12402540u));
  /* 123d35db call dword ptr [0x12405468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405468))), 0x123d35e1u);
  /* 123d35e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d35e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d35e6 call 0x123d50e0 */
  push32(0x123d35ebu); f_123d50e0();
  /* 123d35eb mov esi, esp */
  ESI = (ESP);
  /* 123d35ed push 1 */
  push32((uint32_t)(0x1u));
  /* 123d35ef push 0xf */
  push32((uint32_t)(0xfu));
  /* 123d35f1 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d35f7u);
  /* 123d35f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d35fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d35fc call 0x123d50e0 */
  push32(0x123d3601u); f_123d50e0();
L_123d3601:;
  /* 123d3601 mov esi, esp */
  ESI = (ESP);
  /* 123d3603 push 0xf */
  push32((uint32_t)(0xfu));
  /* 123d3605 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d360bu);
  /* 123d360b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d360e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3610 call 0x123d50e0 */
  push32(0x123d3615u); f_123d50e0();
  /* 123d3615 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d361a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d361c je 0x123d36b4 */
  if (C.zf) goto L_123d36b4;
  /* 123d3622 mov esi, esp */
  ESI = (ESP);
  /* 123d3624 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3629 call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d362fu);
  /* 123d362f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3632 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3634 call 0x123d50e0 */
  push32(0x123d3639u); f_123d50e0();
  /* 123d3639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d363b jne 0x123d36b4 */
  if (!C.zf) goto L_123d36b4;
  /* 123d363d mov esi, esp */
  ESI = (ESP);
  /* 123d363f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3641 push 0xf */
  push32((uint32_t)(0xfu));
  /* 123d3643 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3649u);
  /* 123d3649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d364c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d364e call 0x123d50e0 */
  push32(0x123d3653u); f_123d50e0();
  /* 123d3653 mov esi, esp */
  ESI = (ESP);
  /* 123d3655 push 0x123fd658 */
  push32((uint32_t)(0x123fd658u));
  /* 123d365a call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3660u);
  /* 123d3660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3663 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3665 call 0x123d50e0 */
  push32(0x123d366au); f_123d50e0();
  /* 123d366a mov esi, esp */
  ESI = (ESP);
  /* 123d366c push 1 */
  push32((uint32_t)(0x1u));
  /* 123d366e push 0x124024b8 */
  push32((uint32_t)(0x124024b8u));
  /* 123d3673 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3675 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d367bu);
  /* 123d367b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d367e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3680 call 0x123d50e0 */
  push32(0x123d3685u); f_123d50e0();
  /* 123d3685 mov esi, esp */
  ESI = (ESP);
  /* 123d3687 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3689 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123d368b call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3691u);
  /* 123d3691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3694 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3696 call 0x123d50e0 */
  push32(0x123d369bu); f_123d50e0();
  /* 123d369b mov esi, esp */
  ESI = (ESP);
  /* 123d369d push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 123d36a2 push 6 */
  push32((uint32_t)(0x6u));
  /* 123d36a4 call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d36aau);
  /* 123d36aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d36ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d36af call 0x123d50e0 */
  push32(0x123d36b4u); f_123d50e0();
L_123d36b4:;
  /* 123d36b4 mov esi, esp */
  ESI = (ESP);
  /* 123d36b6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123d36b8 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d36beu);
  /* 123d36be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d36c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d36c3 call 0x123d50e0 */
  push32(0x123d36c8u); f_123d50e0();
  /* 123d36c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d36cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d36cf je 0x123d375d */
  if (C.zf) goto L_123d375d;
  /* 123d36d5 mov esi, esp */
  ESI = (ESP);
  /* 123d36d7 push 6 */
  push32((uint32_t)(0x6u));
  /* 123d36d9 call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d36dfu);
  /* 123d36df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d36e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d36e4 call 0x123d50e0 */
  push32(0x123d36e9u); f_123d50e0();
  /* 123d36e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d36ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d36f0 je 0x123d375d */
  if (C.zf) goto L_123d375d;
  /* 123d36f2 mov esi, esp */
  ESI = (ESP);
  /* 123d36f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d36f6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123d36f8 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d36feu);
  /* 123d36fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3701 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3703 call 0x123d50e0 */
  push32(0x123d3708u); f_123d50e0();
  /* 123d3708 mov esi, esp */
  ESI = (ESP);
  /* 123d370a push 0x4d */
  push32((uint32_t)(0x4du));
  /* 123d370c call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3712u);
  /* 123d3712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3717 call 0x123d50e0 */
  push32(0x123d371cu); f_123d50e0();
  /* 123d371c mov esi, esp */
  ESI = (ESP);
  /* 123d371e push 0x43 */
  push32((uint32_t)(0x43u));
  /* 123d3720 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3726u);
  /* 123d3726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3729 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d372b call 0x123d50e0 */
  push32(0x123d3730u); f_123d50e0();
  /* 123d3730 mov esi, esp */
  ESI = (ESP);
  /* 123d3732 push 0x123fd64c */
  push32((uint32_t)(0x123fd64cu));
  /* 123d3737 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d373du);
  /* 123d373d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3740 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3742 call 0x123d50e0 */
  push32(0x123d3747u); f_123d50e0();
  /* 123d3747 mov esi, esp */
  ESI = (ESP);
  /* 123d3749 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d374b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123d374d call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3753u);
  /* 123d3753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3756 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3758 call 0x123d50e0 */
  push32(0x123d375du); f_123d50e0();
L_123d375d:;
  /* 123d375d mov esi, esp */
  ESI = (ESP);
  /* 123d375f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123d3761 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3767u);
  /* 123d3767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d376a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d376c call 0x123d50e0 */
  push32(0x123d3771u); f_123d50e0();
  /* 123d3771 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3778 je 0x123d3839 */
  if (C.zf) goto L_123d3839;
  /* 123d377e mov esi, esp */
  ESI = (ESP);
  /* 123d3780 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3782 push 0x124024b8 */
  push32((uint32_t)(0x124024b8u));
  /* 123d3787 call dword ptr [0x1240543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240543c))), 0x123d378du);
  /* 123d378d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3792 call 0x123d50e0 */
  push32(0x123d3797u); f_123d50e0();
  /* 123d3797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3799 jle 0x123d3839 */
  if ((C.zf||C.sf!=C.of)) goto L_123d3839;
  /* 123d379f mov esi, esp */
  ESI = (ESP);
  /* 123d37a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d37a3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123d37a5 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d37abu);
  /* 123d37ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d37ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d37b0 call 0x123d50e0 */
  push32(0x123d37b5u); f_123d50e0();
  /* 123d37b5 mov esi, esp */
  ESI = (ESP);
  /* 123d37b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d37b9 push 0x124024b8 */
  push32((uint32_t)(0x124024b8u));
  /* 123d37be push 0 */
  push32((uint32_t)(0x0u));
  /* 123d37c0 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d37c6u);
  /* 123d37c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d37c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d37cb call 0x123d50e0 */
  push32(0x123d37d0u); f_123d50e0();
  /* 123d37d0 mov esi, esp */
  ESI = (ESP);
  /* 123d37d2 push 0x123fd640 */
  push32((uint32_t)(0x123fd640u));
  /* 123d37d7 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d37ddu);
  /* 123d37dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d37e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d37e2 call 0x123d50e0 */
  push32(0x123d37e7u); f_123d50e0();
  /* 123d37e7 mov esi, esp */
  ESI = (ESP);
  /* 123d37e9 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 123d37eb call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d37f1u);
  /* 123d37f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d37f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d37f6 call 0x123d50e0 */
  push32(0x123d37fbu); f_123d50e0();
  /* 123d37fb mov esi, esp */
  ESI = (ESP);
  /* 123d37fd push 0x52 */
  push32((uint32_t)(0x52u));
  /* 123d37ff call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3805u);
  /* 123d3805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3808 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d380a call 0x123d50e0 */
  push32(0x123d380fu); f_123d50e0();
  /* 123d380f mov esi, esp */
  ESI = (ESP);
  /* 123d3811 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 123d3813 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3819u);
  /* 123d3819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d381c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d381e call 0x123d50e0 */
  push32(0x123d3823u); f_123d50e0();
  /* 123d3823 mov esi, esp */
  ESI = (ESP);
  /* 123d3825 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3827 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123d3829 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d382fu);
  /* 123d382f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3834 call 0x123d50e0 */
  push32(0x123d3839u); f_123d50e0();
L_123d3839:;
  /* 123d3839 mov esi, esp */
  ESI = (ESP);
  /* 123d383b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123d383d call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3843u);
  /* 123d3843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3848 call 0x123d50e0 */
  push32(0x123d384du); f_123d50e0();
  /* 123d384d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3854 je 0x123d3931 */
  if (C.zf) goto L_123d3931;
  /* 123d385a mov esi, esp */
  ESI = (ESP);
  /* 123d385c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d385e push 0x12402468 */
  push32((uint32_t)(0x12402468u));
  /* 123d3863 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d3869u);
  /* 123d3869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d386c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d386e call 0x123d50e0 */
  push32(0x123d3873u); f_123d50e0();
  /* 123d3873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3875 jle 0x123d3931 */
  if ((C.zf||C.sf!=C.of)) goto L_123d3931;
  /* 123d387b mov esi, esp */
  ESI = (ESP);
  /* 123d387d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d387f push 0x12402480 */
  push32((uint32_t)(0x12402480u));
  /* 123d3884 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d388au);
  /* 123d388a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d388d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d388f call 0x123d50e0 */
  push32(0x123d3894u); f_123d50e0();
  /* 123d3894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3896 jle 0x123d3931 */
  if ((C.zf||C.sf!=C.of)) goto L_123d3931;
  /* 123d389c mov esi, esp */
  ESI = (ESP);
  /* 123d389e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d38a0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123d38a2 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d38a8u);
  /* 123d38a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d38ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d38ad call 0x123d50e0 */
  push32(0x123d38b2u); f_123d50e0();
  /* 123d38b2 mov esi, esp */
  ESI = (ESP);
  /* 123d38b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d38b6 call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d38bcu);
  /* 123d38bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d38bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d38c1 call 0x123d50e0 */
  push32(0x123d38c6u); f_123d50e0();
  /* 123d38c6 mov esi, esp */
  ESI = (ESP);
  /* 123d38c8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 123d38ca call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d38d0u);
  /* 123d38d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d38d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d38d5 call 0x123d50e0 */
  push32(0x123d38dau); f_123d50e0();
  /* 123d38da mov esi, esp */
  ESI = (ESP);
  /* 123d38dc push 0x49 */
  push32((uint32_t)(0x49u));
  /* 123d38de call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d38e4u);
  /* 123d38e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d38e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d38e9 call 0x123d50e0 */
  push32(0x123d38eeu); f_123d50e0();
  /* 123d38ee mov esi, esp */
  ESI = (ESP);
  /* 123d38f0 push 0x123fd634 */
  push32((uint32_t)(0x123fd634u));
  /* 123d38f5 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d38fbu);
  /* 123d38fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d38fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3900 call 0x123d50e0 */
  push32(0x123d3905u); f_123d50e0();
  /* 123d3905 mov esi, esp */
  ESI = (ESP);
  /* 123d3907 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3909 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123d390b call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3911u);
  /* 123d3911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3914 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3916 call 0x123d50e0 */
  push32(0x123d391bu); f_123d50e0();
  /* 123d391b mov esi, esp */
  ESI = (ESP);
  /* 123d391d push 1 */
  push32((uint32_t)(0x1u));
  /* 123d391f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 123d3921 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3927u);
  /* 123d3927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d392a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d392c call 0x123d50e0 */
  push32(0x123d3931u); f_123d50e0();
L_123d3931:;
  /* 123d3931 mov esi, esp */
  ESI = (ESP);
  /* 123d3933 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 123d3935 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d393bu);
  /* 123d393b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d393e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3940 call 0x123d50e0 */
  push32(0x123d3945u); f_123d50e0();
  /* 123d3945 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d394a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d394c je 0x123d3969 */
  if (C.zf) goto L_123d3969;
  /* 123d394e mov esi, esp */
  ESI = (ESP);
  /* 123d3950 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3952 push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d3957 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3959 call dword ptr [0x12405448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405448))), 0x123d395fu);
  /* 123d395f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3964 call 0x123d50e0 */
  push32(0x123d3969u); f_123d50e0();
L_123d3969:;
  /* 123d3969 mov esi, esp */
  ESI = (ESP);
  /* 123d396b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123d396d call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3973u);
  /* 123d3973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3976 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3978 call 0x123d50e0 */
  push32(0x123d397du); f_123d50e0();
  /* 123d397d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3984 je 0x123d3b30 */
  if (C.zf) goto L_123d3b30;
  /* 123d398a mov esi, esp */
  ESI = (ESP);
  /* 123d398c push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d3991 call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d3997u);
  /* 123d3997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d399a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d399c call 0x123d50e0 */
  push32(0x123d39a1u); f_123d50e0();
  /* 123d39a1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d39a4 jne 0x123d3b30 */
  if (!C.zf) goto L_123d3b30;
  /* 123d39aa mov esi, esp */
  ESI = (ESP);
  /* 123d39ac push 0 */
  push32((uint32_t)(0x0u));
  /* 123d39ae push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d39b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d39b5 call dword ptr [0x12405448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405448))), 0x123d39bbu);
  /* 123d39bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d39be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d39c0 call 0x123d50e0 */
  push32(0x123d39c5u); f_123d50e0();
  /* 123d39c5 mov esi, esp */
  ESI = (ESP);
  /* 123d39c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d39c9 call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d39cfu);
  /* 123d39cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d39d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d39d4 call 0x123d50e0 */
  push32(0x123d39d9u); f_123d50e0();
  /* 123d39d9 mov esi, esp */
  ESI = (ESP);
  /* 123d39db push 0 */
  push32((uint32_t)(0x0u));
  /* 123d39dd push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123d39df call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d39e5u);
  /* 123d39e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d39e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d39ea call 0x123d50e0 */
  push32(0x123d39efu); f_123d50e0();
  /* 123d39ef mov esi, esp */
  ESI = (ESP);
  /* 123d39f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d39f3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 123d39f5 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d39fbu);
  /* 123d39fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d39fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3a00 call 0x123d50e0 */
  push32(0x123d3a05u); f_123d50e0();
  /* 123d3a05 mov esi, esp */
  ESI = (ESP);
  /* 123d3a07 push 0x123fd628 */
  push32((uint32_t)(0x123fd628u));
  /* 123d3a0c call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3a12u);
  /* 123d3a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3a15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3a17 call 0x123d50e0 */
  push32(0x123d3a1cu); f_123d50e0();
  /* 123d3a1c mov esi, esp */
  ESI = (ESP);
  /* 123d3a1e push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d3a20 push 0x12402548 */
  push32((uint32_t)(0x12402548u));
  /* 123d3a25 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3a27 push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d3a2c push 0x124024f8 */
  push32((uint32_t)(0x124024f8u));
  /* 123d3a31 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3a36 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d3a3cu);
  /* 123d3a3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3a3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3a41 call 0x123d50e0 */
  push32(0x123d3a46u); f_123d50e0();
  /* 123d3a46 mov esi, esp */
  ESI = (ESP);
  /* 123d3a48 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d3a4a push 0x12402548 */
  push32((uint32_t)(0x12402548u));
  /* 123d3a4f push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3a51 push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d3a56 push 0x124024f0 */
  push32((uint32_t)(0x124024f0u));
  /* 123d3a5b push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d3a60 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d3a66u);
  /* 123d3a66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3a69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3a6b call 0x123d50e0 */
  push32(0x123d3a70u); f_123d50e0();
  /* 123d3a70 mov esi, esp */
  ESI = (ESP);
  /* 123d3a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3a74 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3a79 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3a7b call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d3a81u);
  /* 123d3a81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3a84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3a86 call 0x123d50e0 */
  push32(0x123d3a8bu); f_123d50e0();
  /* 123d3a8b mov esi, esp */
  ESI = (ESP);
  /* 123d3a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3a8f push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d3a94 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3a96 call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d3a9cu);
  /* 123d3a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3aa1 call 0x123d50e0 */
  push32(0x123d3aa6u); f_123d50e0();
  /* 123d3aa6 mov esi, esp */
  ESI = (ESP);
  /* 123d3aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3aac push 0x12402528 */
  push32((uint32_t)(0x12402528u));
  /* 123d3ab1 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3ab3 call dword ptr [0x12405454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405454))), 0x123d3ab9u);
  /* 123d3ab9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3abe call 0x123d50e0 */
  push32(0x123d3ac3u); f_123d50e0();
  /* 123d3ac3 mov esi, esp */
  ESI = (ESP);
  /* 123d3ac5 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 123d3ac7 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3acdu);
  /* 123d3acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ad2 call 0x123d50e0 */
  push32(0x123d3ad7u); f_123d50e0();
  /* 123d3ad7 mov esi, esp */
  ESI = (ESP);
  /* 123d3ad9 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 123d3adb call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3ae1u);
  /* 123d3ae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ae6 call 0x123d50e0 */
  push32(0x123d3aebu); f_123d50e0();
  /* 123d3aeb mov esi, esp */
  ESI = (ESP);
  /* 123d3aed push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3aef call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d3af5u);
  /* 123d3af5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3af8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3afa call 0x123d50e0 */
  push32(0x123d3affu); f_123d50e0();
  /* 123d3aff mov esi, esp */
  ESI = (ESP);
  /* 123d3b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3b03 push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d3b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3b0a call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d3b10u);
  /* 123d3b10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3b13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3b15 call 0x123d50e0 */
  push32(0x123d3b1au); f_123d50e0();
  /* 123d3b1a mov esi, esp */
  ESI = (ESP);
  /* 123d3b1c push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3b1e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123d3b20 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3b26u);
  /* 123d3b26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3b29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3b2b call 0x123d50e0 */
  push32(0x123d3b30u); f_123d50e0();
L_123d3b30:;
  /* 123d3b30 mov esi, esp */
  ESI = (ESP);
  /* 123d3b32 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123d3b34 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3b3au);
  /* 123d3b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3b3f call 0x123d50e0 */
  push32(0x123d3b44u); f_123d50e0();
  /* 123d3b44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3b4b je 0x123d3be3 */
  if (C.zf) goto L_123d3be3;
  /* 123d3b51 mov esi, esp */
  ESI = (ESP);
  /* 123d3b53 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3b58 call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d3b5eu);
  /* 123d3b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3b61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3b63 call 0x123d50e0 */
  push32(0x123d3b68u); f_123d50e0();
  /* 123d3b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3b6a jne 0x123d3be3 */
  if (!C.zf) goto L_123d3be3;
  /* 123d3b6c mov esi, esp */
  ESI = (ESP);
  /* 123d3b6e push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d3b73 call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d3b79u);
  /* 123d3b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3b7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3b7e call 0x123d50e0 */
  push32(0x123d3b83u); f_123d50e0();
  /* 123d3b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3b85 jne 0x123d3be3 */
  if (!C.zf) goto L_123d3be3;
  /* 123d3b87 mov esi, esp */
  ESI = (ESP);
  /* 123d3b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3b8b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123d3b8d call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3b93u);
  /* 123d3b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3b98 call 0x123d50e0 */
  push32(0x123d3b9du); f_123d50e0();
  /* 123d3b9d mov esi, esp */
  ESI = (ESP);
  /* 123d3b9f push 0x123fd61c */
  push32((uint32_t)(0x123fd61cu));
  /* 123d3ba4 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3baau);
  /* 123d3baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3baf call 0x123d50e0 */
  push32(0x123d3bb4u); f_123d50e0();
  /* 123d3bb4 mov esi, esp */
  ESI = (ESP);
  /* 123d3bb6 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 123d3bbb push 7 */
  push32((uint32_t)(0x7u));
  /* 123d3bbd call dword ptr [0x12405434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405434))), 0x123d3bc3u);
  /* 123d3bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3bc8 call 0x123d50e0 */
  push32(0x123d3bcdu); f_123d50e0();
  /* 123d3bcd mov esi, esp */
  ESI = (ESP);
  /* 123d3bcf push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3bd1 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123d3bd3 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3bd9u);
  /* 123d3bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3bde call 0x123d50e0 */
  push32(0x123d3be3u); f_123d50e0();
L_123d3be3:;
  /* 123d3be3 mov esi, esp */
  ESI = (ESP);
  /* 123d3be5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123d3be7 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3bedu);
  /* 123d3bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3bf2 call 0x123d50e0 */
  push32(0x123d3bf7u); f_123d50e0();
  /* 123d3bf7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3bfe je 0x123d3cf0 */
  if (C.zf) goto L_123d3cf0;
  /* 123d3c04 mov esi, esp */
  ESI = (ESP);
  /* 123d3c06 push 7 */
  push32((uint32_t)(0x7u));
  /* 123d3c08 call dword ptr [0x12405430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405430))), 0x123d3c0eu);
  /* 123d3c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3c11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3c13 call 0x123d50e0 */
  push32(0x123d3c18u); f_123d50e0();
  /* 123d3c18 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3c1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3c1f je 0x123d3cf0 */
  if (C.zf) goto L_123d3cf0;
  /* 123d3c25 mov esi, esp */
  ESI = (ESP);
  /* 123d3c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3c29 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123d3c2b call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3c31u);
  /* 123d3c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3c36 call 0x123d50e0 */
  push32(0x123d3c3bu); f_123d50e0();
  /* 123d3c3b mov esi, esp */
  ESI = (ESP);
  /* 123d3c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3c3f push 0x124024a8 */
  push32((uint32_t)(0x124024a8u));
  /* 123d3c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3c46 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d3c4cu);
  /* 123d3c4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3c51 call 0x123d50e0 */
  push32(0x123d3c56u); f_123d50e0();
  /* 123d3c56 mov esi, esp */
  ESI = (ESP);
  /* 123d3c58 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3c5a push 0x124024a0 */
  push32((uint32_t)(0x124024a0u));
  /* 123d3c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3c61 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d3c67u);
  /* 123d3c67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3c6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3c6c call 0x123d50e0 */
  push32(0x123d3c71u); f_123d50e0();
  /* 123d3c71 mov esi, esp */
  ESI = (ESP);
  /* 123d3c73 push 0x123fd610 */
  push32((uint32_t)(0x123fd610u));
  /* 123d3c78 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3c7eu);
  /* 123d3c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3c83 call 0x123d50e0 */
  push32(0x123d3c88u); f_123d50e0();
  /* 123d3c88 mov esi, esp */
  ESI = (ESP);
  /* 123d3c8a push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 123d3c8c call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3c92u);
  /* 123d3c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3c97 call 0x123d50e0 */
  push32(0x123d3c9cu); f_123d50e0();
  /* 123d3c9c mov esi, esp */
  ESI = (ESP);
  /* 123d3c9e push 0x45 */
  push32((uint32_t)(0x45u));
  /* 123d3ca0 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3ca6u);
  /* 123d3ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ca9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3cab call 0x123d50e0 */
  push32(0x123d3cb0u); f_123d50e0();
  /* 123d3cb0 mov esi, esp */
  ESI = (ESP);
  /* 123d3cb2 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 123d3cb4 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3cbau);
  /* 123d3cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3cbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3cbf call 0x123d50e0 */
  push32(0x123d3cc4u); f_123d50e0();
  /* 123d3cc4 mov esi, esp */
  ESI = (ESP);
  /* 123d3cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3cc8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 123d3cca call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3cd0u);
  /* 123d3cd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3cd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3cd5 call 0x123d50e0 */
  push32(0x123d3cdau); f_123d50e0();
  /* 123d3cda mov esi, esp */
  ESI = (ESP);
  /* 123d3cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3cde push 0x18 */
  push32((uint32_t)(0x18u));
  /* 123d3ce0 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3ce6u);
  /* 123d3ce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ce9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ceb call 0x123d50e0 */
  push32(0x123d3cf0u); f_123d50e0();
L_123d3cf0:;
  /* 123d3cf0 mov esi, esp */
  ESI = (ESP);
  /* 123d3cf2 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 123d3cf4 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3cfau);
  /* 123d3cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3cff call 0x123d50e0 */
  push32(0x123d3d04u); f_123d50e0();
  /* 123d3d04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3d0b je 0x123d3db6 */
  if (C.zf) goto L_123d3db6;
  /* 123d3d11 mov esi, esp */
  ESI = (ESP);
  /* 123d3d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3d15 push 0x124024a8 */
  push32((uint32_t)(0x124024a8u));
  /* 123d3d1a call dword ptr [0x1240543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240543c))), 0x123d3d20u);
  /* 123d3d20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3d23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3d25 call 0x123d50e0 */
  push32(0x123d3d2au); f_123d50e0();
  /* 123d3d2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3d2c jle 0x123d3db6 */
  if ((C.zf||C.sf!=C.of)) goto L_123d3db6;
  /* 123d3d32 mov esi, esp */
  ESI = (ESP);
  /* 123d3d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3d36 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 123d3d38 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3d3eu);
  /* 123d3d3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3d41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3d43 call 0x123d50e0 */
  push32(0x123d3d48u); f_123d50e0();
  /* 123d3d48 mov esi, esp */
  ESI = (ESP);
  /* 123d3d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3d4c push 0x124024a8 */
  push32((uint32_t)(0x124024a8u));
  /* 123d3d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3d53 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d3d59u);
  /* 123d3d59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3d5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3d5e call 0x123d50e0 */
  push32(0x123d3d63u); f_123d50e0();
  /* 123d3d63 mov esi, esp */
  ESI = (ESP);
  /* 123d3d65 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 123d3d67 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3d6du);
  /* 123d3d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3d72 call 0x123d50e0 */
  push32(0x123d3d77u); f_123d50e0();
  /* 123d3d77 mov esi, esp */
  ESI = (ESP);
  /* 123d3d79 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 123d3d7b call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3d81u);
  /* 123d3d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3d86 call 0x123d50e0 */
  push32(0x123d3d8bu); f_123d50e0();
  /* 123d3d8b mov esi, esp */
  ESI = (ESP);
  /* 123d3d8d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 123d3d8f call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3d95u);
  /* 123d3d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3d9a call 0x123d50e0 */
  push32(0x123d3d9fu); f_123d50e0();
  /* 123d3d9f mov esi, esp */
  ESI = (ESP);
  /* 123d3da1 push 0x123fd604 */
  push32((uint32_t)(0x123fd604u));
  /* 123d3da6 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3dacu);
  /* 123d3dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3daf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3db1 call 0x123d50e0 */
  push32(0x123d3db6u); f_123d50e0();
L_123d3db6:;
  /* 123d3db6 mov esi, esp */
  ESI = (ESP);
  /* 123d3db8 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 123d3dba call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3dc0u);
  /* 123d3dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3dc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3dc5 call 0x123d50e0 */
  push32(0x123d3dcau); f_123d50e0();
  /* 123d3dca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3dd1 je 0x123d3e8d */
  if (C.zf) goto L_123d3e8d;
  /* 123d3dd7 mov esi, esp */
  ESI = (ESP);
  /* 123d3dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3ddb push 0x124024a0 */
  push32((uint32_t)(0x124024a0u));
  /* 123d3de0 call dword ptr [0x1240543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240543c))), 0x123d3de6u);
  /* 123d3de6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3de9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3deb call 0x123d50e0 */
  push32(0x123d3df0u); f_123d50e0();
  /* 123d3df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3df2 jle 0x123d3e8d */
  if ((C.zf||C.sf!=C.of)) goto L_123d3e8d;
  /* 123d3df8 mov esi, esp */
  ESI = (ESP);
  /* 123d3dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3dfc push 0x18 */
  push32((uint32_t)(0x18u));
  /* 123d3dfe call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3e04u);
  /* 123d3e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e09 call 0x123d50e0 */
  push32(0x123d3e0eu); f_123d50e0();
  /* 123d3e0e mov esi, esp */
  ESI = (ESP);
  /* 123d3e10 push 0x123fd5f8 */
  push32((uint32_t)(0x123fd5f8u));
  /* 123d3e15 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3e1bu);
  /* 123d3e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e20 call 0x123d50e0 */
  push32(0x123d3e25u); f_123d50e0();
  /* 123d3e25 mov esi, esp */
  ESI = (ESP);
  /* 123d3e27 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 123d3e29 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3e2fu);
  /* 123d3e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e34 call 0x123d50e0 */
  push32(0x123d3e39u); f_123d50e0();
  /* 123d3e39 mov esi, esp */
  ESI = (ESP);
  /* 123d3e3b push 0x54 */
  push32((uint32_t)(0x54u));
  /* 123d3e3d call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3e43u);
  /* 123d3e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e48 call 0x123d50e0 */
  push32(0x123d3e4du); f_123d50e0();
  /* 123d3e4d mov esi, esp */
  ESI = (ESP);
  /* 123d3e4f push 0x47 */
  push32((uint32_t)(0x47u));
  /* 123d3e51 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3e57u);
  /* 123d3e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e5c call 0x123d50e0 */
  push32(0x123d3e61u); f_123d50e0();
  /* 123d3e61 mov esi, esp */
  ESI = (ESP);
  /* 123d3e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3e65 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 123d3e67 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3e6du);
  /* 123d3e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e72 call 0x123d50e0 */
  push32(0x123d3e77u); f_123d50e0();
  /* 123d3e77 mov esi, esp */
  ESI = (ESP);
  /* 123d3e79 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d3e7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123d3e7d call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3e83u);
  /* 123d3e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e88 call 0x123d50e0 */
  push32(0x123d3e8du); f_123d50e0();
L_123d3e8d:;
  /* 123d3e8d mov esi, esp */
  ESI = (ESP);
  /* 123d3e8f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123d3e91 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3e97u);
  /* 123d3e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3e9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3e9c call 0x123d50e0 */
  push32(0x123d3ea1u); f_123d50e0();
  /* 123d3ea1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3ea8 je 0x123d3ef9 */
  if (C.zf) goto L_123d3ef9;
  /* 123d3eaa mov esi, esp */
  ESI = (ESP);
  /* 123d3eac push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3eae push 0x124024a0 */
  push32((uint32_t)(0x124024a0u));
  /* 123d3eb3 call dword ptr [0x1240543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240543c))), 0x123d3eb9u);
  /* 123d3eb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ebc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ebe call 0x123d50e0 */
  push32(0x123d3ec3u); f_123d50e0();
  /* 123d3ec3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ec6 jle 0x123d3ef9 */
  if ((C.zf||C.sf!=C.of)) goto L_123d3ef9;
  /* 123d3ec8 mov esi, esp */
  ESI = (ESP);
  /* 123d3eca push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3ecc push 0x19 */
  push32((uint32_t)(0x19u));
  /* 123d3ece call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3ed4u);
  /* 123d3ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ed7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ed9 call 0x123d50e0 */
  push32(0x123d3edeu); f_123d50e0();
  /* 123d3ede mov esi, esp */
  ESI = (ESP);
  /* 123d3ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3ee2 push 0x124024a0 */
  push32((uint32_t)(0x124024a0u));
  /* 123d3ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3ee9 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d3eefu);
  /* 123d3eef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ef2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ef4 call 0x123d50e0 */
  push32(0x123d3ef9u); f_123d50e0();
L_123d3ef9:;
  /* 123d3ef9 mov esi, esp */
  ESI = (ESP);
  /* 123d3efb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 123d3efd call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d3f03u);
  /* 123d3f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3f06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3f08 call 0x123d50e0 */
  push32(0x123d3f0du); f_123d50e0();
  /* 123d3f0d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d3f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d3f14 je 0x123d41d4 */
  if (C.zf) goto L_123d41d4;
  /* 123d3f1a mov esi, esp */
  ESI = (ESP);
  /* 123d3f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3f1e push 0x12402400 */
  push32((uint32_t)(0x12402400u));
  /* 123d3f23 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d3f29u);
  /* 123d3f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3f2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3f2e call 0x123d50e0 */
  push32(0x123d3f33u); f_123d50e0();
  /* 123d3f33 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3f36 jle 0x123d41d4 */
  if ((C.zf||C.sf!=C.of)) goto L_123d41d4;
  /* 123d3f3c mov esi, esp */
  ESI = (ESP);
  /* 123d3f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3f40 push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d3f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3f47 call dword ptr [0x12405448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405448))), 0x123d3f4du);
  /* 123d3f4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3f52 call 0x123d50e0 */
  push32(0x123d3f57u); f_123d50e0();
  /* 123d3f57 mov esi, esp */
  ESI = (ESP);
  /* 123d3f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3f5b call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d3f61u);
  /* 123d3f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3f64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3f66 call 0x123d50e0 */
  push32(0x123d3f6bu); f_123d50e0();
  /* 123d3f6b mov esi, esp */
  ESI = (ESP);
  /* 123d3f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d3f6f push 0x1a */
  push32((uint32_t)(0x1au));
  /* 123d3f71 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d3f77u);
  /* 123d3f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3f7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3f7c call 0x123d50e0 */
  push32(0x123d3f81u); f_123d50e0();
  /* 123d3f81 mov esi, esp */
  ESI = (ESP);
  /* 123d3f83 push 0x123fd5ec */
  push32((uint32_t)(0x123fd5ecu));
  /* 123d3f88 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d3f8eu);
  /* 123d3f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3f91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3f93 call 0x123d50e0 */
  push32(0x123d3f98u); f_123d50e0();
  /* 123d3f98 mov esi, esp */
  ESI = (ESP);
  /* 123d3f9a push 0x46 */
  push32((uint32_t)(0x46u));
  /* 123d3f9c call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3fa2u);
  /* 123d3fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3fa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3fa7 call 0x123d50e0 */
  push32(0x123d3facu); f_123d50e0();
  /* 123d3fac mov esi, esp */
  ESI = (ESP);
  /* 123d3fae push 0x47 */
  push32((uint32_t)(0x47u));
  /* 123d3fb0 call dword ptr [0x12405438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405438))), 0x123d3fb6u);
  /* 123d3fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3fbb call 0x123d50e0 */
  push32(0x123d3fc0u); f_123d50e0();
  /* 123d3fc0 mov esi, esp */
  ESI = (ESP);
  /* 123d3fc2 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 123d3fc4 call dword ptr [0x1240544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240544c))), 0x123d3fcau);
  /* 123d3fca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3fcf call 0x123d50e0 */
  push32(0x123d3fd4u); f_123d50e0();
  /* 123d3fd4 mov esi, esp */
  ESI = (ESP);
  /* 123d3fd6 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d3fd8 push 0x12402538 */
  push32((uint32_t)(0x12402538u));
  /* 123d3fdd push 5 */
  push32((uint32_t)(0x5u));
  /* 123d3fdf push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d3fe4 push 0x12402500 */
  push32((uint32_t)(0x12402500u));
  /* 123d3fe9 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d3fee call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d3ff4u);
  /* 123d3ff4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d3ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d3ff9 call 0x123d50e0 */
  push32(0x123d3ffeu); f_123d50e0();
  /* 123d3ffe mov esi, esp */
  ESI = (ESP);
  /* 123d4000 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d4002 push 0x12402560 */
  push32((uint32_t)(0x12402560u));
  /* 123d4007 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d4009 push 0x12402428 */
  push32((uint32_t)(0x12402428u));
  /* 123d400e push 0x12402500 */
  push32((uint32_t)(0x12402500u));
  /* 123d4013 push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d4018 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d401eu);
  /* 123d401e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4021 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4023 call 0x123d50e0 */
  push32(0x123d4028u); f_123d50e0();
  /* 123d4028 mov esi, esp */
  ESI = (ESP);
  /* 123d402a push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d402c push 0x12402548 */
  push32((uint32_t)(0x12402548u));
  /* 123d4031 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d4033 push 0x12402438 */
  push32((uint32_t)(0x12402438u));
  /* 123d4038 push 0x12402508 */
  push32((uint32_t)(0x12402508u));
  /* 123d403d push 0x124024d0 */
  push32((uint32_t)(0x124024d0u));
  /* 123d4042 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d4048u);
  /* 123d4048 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d404b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d404d call 0x123d50e0 */
  push32(0x123d4052u); f_123d50e0();
  /* 123d4052 mov esi, esp */
  ESI = (ESP);
  /* 123d4054 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d4056 push 0x12402530 */
  push32((uint32_t)(0x12402530u));
  /* 123d405b push 5 */
  push32((uint32_t)(0x5u));
  /* 123d405d push 0x12402450 */
  push32((uint32_t)(0x12402450u));
  /* 123d4062 push 0x124024f0 */
  push32((uint32_t)(0x124024f0u));
  /* 123d4067 push 0x124024d8 */
  push32((uint32_t)(0x124024d8u));
  /* 123d406c call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d4072u);
  /* 123d4072 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4075 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4077 call 0x123d50e0 */
  push32(0x123d407cu); f_123d50e0();
  /* 123d407c mov esi, esp */
  ESI = (ESP);
  /* 123d407e push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d4080 push 0x12402550 */
  push32((uint32_t)(0x12402550u));
  /* 123d4085 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d4087 push 0x12402450 */
  push32((uint32_t)(0x12402450u));
  /* 123d408c push 0x124024f0 */
  push32((uint32_t)(0x124024f0u));
  /* 123d4091 push 0x124024e0 */
  push32((uint32_t)(0x124024e0u));
  /* 123d4096 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d409cu);
  /* 123d409c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d409f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d40a1 call 0x123d50e0 */
  push32(0x123d40a6u); f_123d50e0();
  /* 123d40a6 mov esi, esp */
  ESI = (ESP);
  /* 123d40a8 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 123d40aa push 0x12402558 */
  push32((uint32_t)(0x12402558u));
  /* 123d40af push 5 */
  push32((uint32_t)(0x5u));
  /* 123d40b1 push 0x12402450 */
  push32((uint32_t)(0x12402450u));
  /* 123d40b6 push 0x124024f0 */
  push32((uint32_t)(0x124024f0u));
  /* 123d40bb push 0x124024e8 */
  push32((uint32_t)(0x124024e8u));
  /* 123d40c0 call dword ptr [0x12405458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405458))), 0x123d40c6u);
  /* 123d40c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d40c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d40cb call 0x123d50e0 */
  push32(0x123d40d0u); f_123d50e0();
  /* 123d40d0 mov esi, esp */
  ESI = (ESP);
  /* 123d40d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d40d4 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d40d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d40db call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d40e1u);
  /* 123d40e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d40e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d40e6 call 0x123d50e0 */
  push32(0x123d40ebu); f_123d50e0();
  /* 123d40eb mov esi, esp */
  ESI = (ESP);
  /* 123d40ed push 1 */
  push32((uint32_t)(0x1u));
  /* 123d40ef push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d40f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d40f6 call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d40fcu);
  /* 123d40fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d40ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4101 call 0x123d50e0 */
  push32(0x123d4106u); f_123d50e0();
  /* 123d4106 mov esi, esp */
  ESI = (ESP);
  /* 123d4108 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d410a push 0x124024d0 */
  push32((uint32_t)(0x124024d0u));
  /* 123d410f push 5 */
  push32((uint32_t)(0x5u));
  /* 123d4111 call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d4117u);
  /* 123d4117 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d411a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d411c call 0x123d50e0 */
  push32(0x123d4121u); f_123d50e0();
  /* 123d4121 mov esi, esp */
  ESI = (ESP);
  /* 123d4123 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d4125 push 0x124024d8 */
  push32((uint32_t)(0x124024d8u));
  /* 123d412a push 5 */
  push32((uint32_t)(0x5u));
  /* 123d412c call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d4132u);
  /* 123d4132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4135 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4137 call 0x123d50e0 */
  push32(0x123d413cu); f_123d50e0();
  /* 123d413c mov esi, esp */
  ESI = (ESP);
  /* 123d413e push 1 */
  push32((uint32_t)(0x1u));
  /* 123d4140 push 0x124024e0 */
  push32((uint32_t)(0x124024e0u));
  /* 123d4145 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d4147 call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d414du);
  /* 123d414d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4152 call 0x123d50e0 */
  push32(0x123d4157u); f_123d50e0();
  /* 123d4157 mov esi, esp */
  ESI = (ESP);
  /* 123d4159 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d415b push 0x124024e8 */
  push32((uint32_t)(0x124024e8u));
  /* 123d4160 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d4162 call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d4168u);
  /* 123d4168 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d416b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d416d call 0x123d50e0 */
  push32(0x123d4172u); f_123d50e0();
  /* 123d4172 mov esi, esp */
  ESI = (ESP);
  /* 123d4174 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4176 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4178 push 0x12402528 */
  push32((uint32_t)(0x12402528u));
  /* 123d417d push 5 */
  push32((uint32_t)(0x5u));
  /* 123d417f call dword ptr [0x12405454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405454))), 0x123d4185u);
  /* 123d4185 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4188 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d418a call 0x123d50e0 */
  push32(0x123d418fu); f_123d50e0();
  /* 123d418f mov esi, esp */
  ESI = (ESP);
  /* 123d4191 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d4193 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 123d4195 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d419bu);
  /* 123d419b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d419e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d41a0 call 0x123d50e0 */
  push32(0x123d41a5u); f_123d50e0();
  /* 123d41a5 mov esi, esp */
  ESI = (ESP);
  /* 123d41a7 push 5 */
  push32((uint32_t)(0x5u));
  /* 123d41a9 call dword ptr [0x12405440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405440))), 0x123d41afu);
  /* 123d41af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d41b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d41b4 call 0x123d50e0 */
  push32(0x123d41b9u); f_123d50e0();
  /* 123d41b9 mov esi, esp */
  ESI = (ESP);
  /* 123d41bb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d41bd push 0x124024b0 */
  push32((uint32_t)(0x124024b0u));
  /* 123d41c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d41c4 call dword ptr [0x1240545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240545c))), 0x123d41cau);
  /* 123d41ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d41cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d41cf call 0x123d50e0 */
  push32(0x123d41d4u); f_123d50e0();
L_123d41d4:;
  /* 123d41d4 mov esi, esp */
  ESI = (ESP);
  /* 123d41d6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 123d41d8 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d41deu);
  /* 123d41de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d41e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d41e3 call 0x123d50e0 */
  push32(0x123d41e8u); f_123d50e0();
  /* 123d41e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d41ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d41ef je 0x123d42db */
  if (C.zf) goto L_123d42db;
  /* 123d41f5 mov esi, esp */
  ESI = (ESP);
  /* 123d41f7 push 0x124024c0 */
  push32((uint32_t)(0x124024c0u));
  /* 123d41fc call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d4202u);
  /* 123d4202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4205 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4207 call 0x123d50e0 */
  push32(0x123d420cu); f_123d50e0();
  /* 123d420c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d420e jne 0x123d42db */
  if (!C.zf) goto L_123d42db;
  /* 123d4214 mov esi, esp */
  ESI = (ESP);
  /* 123d4216 push 0x124024c8 */
  push32((uint32_t)(0x124024c8u));
  /* 123d421b call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d4221u);
  /* 123d4221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4226 call 0x123d50e0 */
  push32(0x123d422bu); f_123d50e0();
  /* 123d422b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d422d jne 0x123d42db */
  if (!C.zf) goto L_123d42db;
  /* 123d4233 mov esi, esp */
  ESI = (ESP);
  /* 123d4235 push 0x124024d0 */
  push32((uint32_t)(0x124024d0u));
  /* 123d423a call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d4240u);
  /* 123d4240 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4243 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4245 call 0x123d50e0 */
  push32(0x123d424au); f_123d50e0();
  /* 123d424a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d424c jne 0x123d42db */
  if (!C.zf) goto L_123d42db;
  /* 123d4252 mov esi, esp */
  ESI = (ESP);
  /* 123d4254 push 0x124024d8 */
  push32((uint32_t)(0x124024d8u));
  /* 123d4259 call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d425fu);
  /* 123d425f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4264 call 0x123d50e0 */
  push32(0x123d4269u); f_123d50e0();
  /* 123d4269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d426b jne 0x123d42db */
  if (!C.zf) goto L_123d42db;
  /* 123d426d mov esi, esp */
  ESI = (ESP);
  /* 123d426f push 0x124024e0 */
  push32((uint32_t)(0x124024e0u));
  /* 123d4274 call dword ptr [0x12405464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405464))), 0x123d427au);
  /* 123d427a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d427d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d427f call 0x123d50e0 */
  push32(0x123d4284u); f_123d50e0();
  /* 123d4284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d4286 jne 0x123d42db */
  if (!C.zf) goto L_123d42db;
  /* 123d4288 mov esi, esp */
  ESI = (ESP);
  /* 123d428a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d428c push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 123d428e call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d4294u);
  /* 123d4294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4297 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4299 call 0x123d50e0 */
  push32(0x123d429eu); f_123d50e0();
  /* 123d429e mov esi, esp */
  ESI = (ESP);
  /* 123d42a0 push 0x123fd5e0 */
  push32((uint32_t)(0x123fd5e0u));
  /* 123d42a5 call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d42abu);
  /* 123d42ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d42ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d42b0 call 0x123d50e0 */
  push32(0x123d42b5u); f_123d50e0();
  /* 123d42b5 mov esi, esp */
  ESI = (ESP);
  /* 123d42b7 push 0x123fd5d4 */
  push32((uint32_t)(0x123fd5d4u));
  /* 123d42bc call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d42c2u);
  /* 123d42c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d42c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d42c7 call 0x123d50e0 */
  push32(0x123d42ccu); f_123d50e0();
  /* 123d42cc mov esi, esp */
  ESI = (ESP);
  /* 123d42ce call dword ptr [0x12405460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405460))), 0x123d42d4u);
  /* 123d42d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d42d6 call 0x123d50e0 */
  push32(0x123d42dbu); f_123d50e0();
L_123d42db:;
  /* 123d42db mov esi, esp */
  ESI = (ESP);
  /* 123d42dd push 0x5d */
  push32((uint32_t)(0x5du));
  /* 123d42df call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d42e5u);
  /* 123d42e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d42e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d42ea call 0x123d50e0 */
  push32(0x123d42efu); f_123d50e0();
  /* 123d42ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d42f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d42f6 je 0x123d435d */
  if (C.zf) goto L_123d435d;
  /* 123d42f8 mov esi, esp */
  ESI = (ESP);
  /* 123d42fa push 0 */
  push32((uint32_t)(0x0u));
  /* 123d42fc push 0x12402468 */
  push32((uint32_t)(0x12402468u));
  /* 123d4301 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d4307u);
  /* 123d4307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d430a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d430c call 0x123d50e0 */
  push32(0x123d4311u); f_123d50e0();
  /* 123d4311 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4314 jl 0x123d435d */
  if ((C.sf!=C.of)) goto L_123d435d;
  /* 123d4316 mov esi, esp */
  ESI = (ESP);
  /* 123d4318 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d431a push 0x5d */
  push32((uint32_t)(0x5du));
  /* 123d431c call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d4322u);
  /* 123d4322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4327 call 0x123d50e0 */
  push32(0x123d432cu); f_123d50e0();
  /* 123d432c mov esi, esp */
  ESI = (ESP);
  /* 123d432e push 1 */
  push32((uint32_t)(0x1u));
  /* 123d4330 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123d4332 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d4338u);
  /* 123d4338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d433b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d433d call 0x123d50e0 */
  push32(0x123d4342u); f_123d50e0();
  /* 123d4342 mov esi, esp */
  ESI = (ESP);
  /* 123d4344 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4346 push 0x12402468 */
  push32((uint32_t)(0x12402468u));
  /* 123d434b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d434d call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d4353u);
  /* 123d4353 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4358 call 0x123d50e0 */
  push32(0x123d435du); f_123d50e0();
L_123d435d:;
  /* 123d435d mov esi, esp */
  ESI = (ESP);
  /* 123d435f push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123d4361 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d4367u);
  /* 123d4367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d436a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d436c call 0x123d50e0 */
  push32(0x123d4371u); f_123d50e0();
  /* 123d4371 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d4376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d4378 je 0x123d43df */
  if (C.zf) goto L_123d43df;
  /* 123d437a mov esi, esp */
  ESI = (ESP);
  /* 123d437c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d437e push 0x12402468 */
  push32((uint32_t)(0x12402468u));
  /* 123d4383 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d4389u);
  /* 123d4389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d438c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d438e call 0x123d50e0 */
  push32(0x123d4393u); f_123d50e0();
  /* 123d4393 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4396 jge 0x123d43df */
  if ((C.sf==C.of)) goto L_123d43df;
  /* 123d4398 mov esi, esp */
  ESI = (ESP);
  /* 123d439a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d439c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123d439e call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d43a4u);
  /* 123d43a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d43a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d43a9 call 0x123d50e0 */
  push32(0x123d43aeu); f_123d50e0();
  /* 123d43ae mov esi, esp */
  ESI = (ESP);
  /* 123d43b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d43b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 123d43b4 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d43bau);
  /* 123d43ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d43bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d43bf call 0x123d50e0 */
  push32(0x123d43c4u); f_123d50e0();
  /* 123d43c4 mov esi, esp */
  ESI = (ESP);
  /* 123d43c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d43c8 push 0x12402468 */
  push32((uint32_t)(0x12402468u));
  /* 123d43cd push 0 */
  push32((uint32_t)(0x0u));
  /* 123d43cf call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d43d5u);
  /* 123d43d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d43d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d43da call 0x123d50e0 */
  push32(0x123d43dfu); f_123d50e0();
L_123d43df:;
  /* 123d43df mov esi, esp */
  ESI = (ESP);
  /* 123d43e1 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 123d43e3 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d43e9u);
  /* 123d43e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d43ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d43ee call 0x123d50e0 */
  push32(0x123d43f3u); f_123d50e0();
  /* 123d43f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d43f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d43fa je 0x123d4461 */
  if (C.zf) goto L_123d4461;
  /* 123d43fc mov esi, esp */
  ESI = (ESP);
  /* 123d43fe push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4400 push 0x12402480 */
  push32((uint32_t)(0x12402480u));
  /* 123d4405 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d440bu);
  /* 123d440b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d440e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4410 call 0x123d50e0 */
  push32(0x123d4415u); f_123d50e0();
  /* 123d4415 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4418 jl 0x123d4461 */
  if ((C.sf!=C.of)) goto L_123d4461;
  /* 123d441a mov esi, esp */
  ESI = (ESP);
  /* 123d441c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d441e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 123d4420 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d4426u);
  /* 123d4426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4429 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d442b call 0x123d50e0 */
  push32(0x123d4430u); f_123d50e0();
  /* 123d4430 mov esi, esp */
  ESI = (ESP);
  /* 123d4432 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d4434 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 123d4436 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d443cu);
  /* 123d443c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d443f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4441 call 0x123d50e0 */
  push32(0x123d4446u); f_123d50e0();
  /* 123d4446 mov esi, esp */
  ESI = (ESP);
  /* 123d4448 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d444a push 0x12402480 */
  push32((uint32_t)(0x12402480u));
  /* 123d444f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4451 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d4457u);
  /* 123d4457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d445a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d445c call 0x123d50e0 */
  push32(0x123d4461u); f_123d50e0();
L_123d4461:;
  /* 123d4461 mov esi, esp */
  ESI = (ESP);
  /* 123d4463 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 123d4465 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d446bu);
  /* 123d446b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d446e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4470 call 0x123d50e0 */
  push32(0x123d4475u); f_123d50e0();
  /* 123d4475 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d447a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d447c je 0x123d44e3 */
  if (C.zf) goto L_123d44e3;
  /* 123d447e mov esi, esp */
  ESI = (ESP);
  /* 123d4480 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4482 push 0x12402480 */
  push32((uint32_t)(0x12402480u));
  /* 123d4487 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d448du);
  /* 123d448d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4492 call 0x123d50e0 */
  push32(0x123d4497u); f_123d50e0();
  /* 123d4497 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d449a jge 0x123d44e3 */
  if ((C.sf==C.of)) goto L_123d44e3;
  /* 123d449c mov esi, esp */
  ESI = (ESP);
  /* 123d449e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d44a0 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 123d44a2 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d44a8u);
  /* 123d44a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d44ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d44ad call 0x123d50e0 */
  push32(0x123d44b2u); f_123d50e0();
  /* 123d44b2 mov esi, esp */
  ESI = (ESP);
  /* 123d44b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d44b6 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 123d44b8 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d44beu);
  /* 123d44be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d44c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d44c3 call 0x123d50e0 */
  push32(0x123d44c8u); f_123d50e0();
  /* 123d44c8 mov esi, esp */
  ESI = (ESP);
  /* 123d44ca push 1 */
  push32((uint32_t)(0x1u));
  /* 123d44cc push 0x12402480 */
  push32((uint32_t)(0x12402480u));
  /* 123d44d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d44d3 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d44d9u);
  /* 123d44d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d44dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d44de call 0x123d50e0 */
  push32(0x123d44e3u); f_123d50e0();
L_123d44e3:;
  /* 123d44e3 mov esi, esp */
  ESI = (ESP);
  /* 123d44e5 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 123d44e7 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d44edu);
  /* 123d44ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d44f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d44f2 call 0x123d50e0 */
  push32(0x123d44f7u); f_123d50e0();
  /* 123d44f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d44fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d44fe je 0x123d4565 */
  if (C.zf) goto L_123d4565;
  /* 123d4500 mov esi, esp */
  ESI = (ESP);
  /* 123d4502 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4504 push 0x12402490 */
  push32((uint32_t)(0x12402490u));
  /* 123d4509 call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d450fu);
  /* 123d450f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4514 call 0x123d50e0 */
  push32(0x123d4519u); f_123d50e0();
  /* 123d4519 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d451c jl 0x123d4565 */
  if ((C.sf!=C.of)) goto L_123d4565;
  /* 123d451e mov esi, esp */
  ESI = (ESP);
  /* 123d4520 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4522 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 123d4524 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d452au);
  /* 123d452a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d452d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d452f call 0x123d50e0 */
  push32(0x123d4534u); f_123d50e0();
  /* 123d4534 mov esi, esp */
  ESI = (ESP);
  /* 123d4536 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d4538 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 123d453a call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d4540u);
  /* 123d4540 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4543 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4545 call 0x123d50e0 */
  push32(0x123d454au); f_123d50e0();
  /* 123d454a mov esi, esp */
  ESI = (ESP);
  /* 123d454c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d454e push 0x12402490 */
  push32((uint32_t)(0x12402490u));
  /* 123d4553 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4555 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d455bu);
  /* 123d455b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d455e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4560 call 0x123d50e0 */
  push32(0x123d4565u); f_123d50e0();
L_123d4565:;
  /* 123d4565 mov esi, esp */
  ESI = (ESP);
  /* 123d4567 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 123d4569 call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d456fu);
  /* 123d456f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4574 call 0x123d50e0 */
  push32(0x123d4579u); f_123d50e0();
  /* 123d4579 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d457e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d4580 je 0x123d45e7 */
  if (C.zf) goto L_123d45e7;
  /* 123d4582 mov esi, esp */
  ESI = (ESP);
  /* 123d4584 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4586 push 0x12402490 */
  push32((uint32_t)(0x12402490u));
  /* 123d458b call dword ptr [0x12405450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405450))), 0x123d4591u);
  /* 123d4591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4596 call 0x123d50e0 */
  push32(0x123d459bu); f_123d50e0();
  /* 123d459b cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d459e jge 0x123d45e7 */
  if ((C.sf==C.of)) goto L_123d45e7;
  /* 123d45a0 mov esi, esp */
  ESI = (ESP);
  /* 123d45a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d45a4 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 123d45a6 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d45acu);
  /* 123d45ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d45af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d45b1 call 0x123d50e0 */
  push32(0x123d45b6u); f_123d50e0();
  /* 123d45b6 mov esi, esp */
  ESI = (ESP);
  /* 123d45b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d45ba push 0x61 */
  push32((uint32_t)(0x61u));
  /* 123d45bc call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d45c2u);
  /* 123d45c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d45c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d45c7 call 0x123d50e0 */
  push32(0x123d45ccu); f_123d50e0();
  /* 123d45cc mov esi, esp */
  ESI = (ESP);
  /* 123d45ce push 1 */
  push32((uint32_t)(0x1u));
  /* 123d45d0 push 0x12402490 */
  push32((uint32_t)(0x12402490u));
  /* 123d45d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d45d7 call dword ptr [0x1240540c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240540c))), 0x123d45ddu);
  /* 123d45dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d45e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d45e2 call 0x123d50e0 */
  push32(0x123d45e7u); f_123d50e0();
L_123d45e7:;
  /* 123d45e7 mov esi, esp */
  ESI = (ESP);
  /* 123d45e9 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 123d45eb call dword ptr [0x12405410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405410))), 0x123d45f1u);
  /* 123d45f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d45f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d45f6 call 0x123d50e0 */
  push32(0x123d45fbu); f_123d50e0();
  /* 123d45fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d4600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d4602 je 0x123d464e */
  if (C.zf) goto L_123d464e;
  /* 123d4604 mov esi, esp */
  ESI = (ESP);
  /* 123d4606 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4608 call dword ptr [0x12405470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405470))), 0x123d460eu);
  /* 123d460e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4613 call 0x123d50e0 */
  push32(0x123d4618u); f_123d50e0();
  /* 123d4618 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d461d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d461f je 0x123d464e */
  if (C.zf) goto L_123d464e;
  /* 123d4621 mov esi, esp */
  ESI = (ESP);
  /* 123d4623 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d4625 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 123d4627 call dword ptr [0x12405414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405414))), 0x123d462du);
  /* 123d462d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4630 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4632 call 0x123d50e0 */
  push32(0x123d4637u); f_123d50e0();
  /* 123d4637 mov esi, esp */
  ESI = (ESP);
  /* 123d4639 push 0x123fd5c8 */
  push32((uint32_t)(0x123fd5c8u));
  /* 123d463e call dword ptr [0x12405444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405444))), 0x123d4644u);
  /* 123d4644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4649 call 0x123d50e0 */
  push32(0x123d464eu); f_123d50e0();
L_123d464e:;
  /* 123d464e pop edi */
  EDI = (pop32());
  /* 123d464f pop esi */
  ESI = (pop32());
  /* 123d4650 pop ebx */
  EBX = (pop32());
  /* 123d4651 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d4654 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d4656 call 0x123d50e0 */
  push32(0x123d465bu); f_123d50e0();
  /* 123d465b mov esp, ebp */
  ESP = (EBP);
  /* 123d465d pop ebp */
  EBP = (pop32());
  /* 123d465e ret  */
  ESPCHK(0x123d1f80u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x123d50e0 (56 bytes, 28 insns) */
void f_123d50e0(void) {
  FTRACE(0x123d50e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d50e0 jne 0x123d50e3 */
  if (!C.zf) goto L_123d50e3;
  /* 123d50e2 ret  */
  ESPCHK(0x123d50e0u, _esp0);
  ESP += 4; return;
L_123d50e3:;
  /* 123d50e3 push ebp */
  push32((uint32_t)(EBP));
  /* 123d50e4 mov ebp, esp */
  EBP = (ESP);
  /* 123d50e6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d50e9 push eax */
  push32((uint32_t)(EAX));
  /* 123d50ea push edx */
  push32((uint32_t)(EDX));
  /* 123d50eb push ebx */
  push32((uint32_t)(EBX));
  /* 123d50ec push esi */
  push32((uint32_t)(ESI));
  /* 123d50ed push edi */
  push32((uint32_t)(EDI));
  /* 123d50ee push 0x123fd70c */
  push32((uint32_t)(0x123fd70cu));
  /* 123d50f3 push 0x123fd708 */
  push32((uint32_t)(0x123fd708u));
  /* 123d50f8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 123d50fa push 0x123fd6f8 */
  push32((uint32_t)(0x123fd6f8u));
  /* 123d50ff push 1 */
  push32((uint32_t)(0x1u));
  /* 123d5101 call 0x123d54b0 */
  push32(0x123d5106u); f_123d54b0();
  /* 123d5106 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5109 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d510c jne 0x123d510f */
  if (!C.zf) goto L_123d510f;
  /* 123d510e int3  */
  x86_unimpl("int3 @ 0x123d510e");
L_123d510f:;
  /* 123d510f pop edi */
  EDI = (pop32());
  /* 123d5110 pop esi */
  ESI = (pop32());
  /* 123d5111 pop ebx */
  EBX = (pop32());
  /* 123d5112 pop edx */
  EDX = (pop32());
  /* 123d5113 pop eax */
  EAX = (pop32());
  /* 123d5114 mov esp, ebp */
  ESP = (EBP);
  /* 123d5116 pop ebp */
  EBP = (pop32());
  /* 123d5117 ret  */
  ESPCHK(0x123d50e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005120 @ 0x123d5120 (313 bytes, 78 insns) */
void f_123d5120(void) {
  FTRACE(0x123d5120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5120 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5121 mov ebp, esp */
  EBP = (ESP);
  /* 123d5123 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5127 jne 0x123d51e7 */
  if (!C.zf) goto L_123d51e7;
  /* 123d512d call dword ptr [0x12405310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405310))), 0x123d5133u);
  /* 123d5133 mov dword ptr [0x124027d4], eax */
  w32((uint32_t)(0x124027d4), (EAX));
  /* 123d5138 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d513a call 0x123d8be0 */
  push32(0x123d513fu); f_123d8be0();
  /* 123d513f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5144 jne 0x123d514d */
  if (!C.zf) goto L_123d514d;
  /* 123d5146 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d5148 jmp 0x123d5255 */
  goto L_123d5255;
L_123d514d:;
  /* 123d514d mov eax, dword ptr [0x124027d4] */
  EAX = (r32((uint32_t)(0x124027d4)));
  /* 123d5152 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 123d5155 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d515a mov dword ptr [0x124027e0], eax */
  w32((uint32_t)(0x124027e0), (EAX));
  /* 123d515f mov ecx, dword ptr [0x124027d4] */
  ECX = (r32((uint32_t)(0x124027d4)));
  /* 123d5165 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d516b mov dword ptr [0x124027dc], ecx */
  w32((uint32_t)(0x124027dc), (ECX));
  /* 123d5171 mov edx, dword ptr [0x124027dc] */
  EDX = (r32((uint32_t)(0x124027dc)));
  /* 123d5177 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 123d517a add edx, dword ptr [0x124027e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124027e0))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5180 mov dword ptr [0x124027d8], edx */
  w32((uint32_t)(0x124027d8), (EDX));
  /* 123d5186 mov eax, dword ptr [0x124027d4] */
  EAX = (r32((uint32_t)(0x124027d4)));
  /* 123d518b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123d518e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d5193 mov dword ptr [0x124027d4], eax */
  w32((uint32_t)(0x124027d4), (EAX));
  /* 123d5198 call 0x123d5d50 */
  push32(0x123d519du); f_123d5d50();
  /* 123d519d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d519f jne 0x123d51ad */
  if (!C.zf) goto L_123d51ad;
  /* 123d51a1 call 0x123d8c30 */
  push32(0x123d51a6u); f_123d8c30();
  /* 123d51a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d51a8 jmp 0x123d5255 */
  goto L_123d5255;
L_123d51ad:;
  /* 123d51ad call dword ptr [0x1240530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240530c))), 0x123d51b3u);
  /* 123d51b3 mov dword ptr [0x1240430c], eax */
  w32((uint32_t)(0x1240430c), (EAX));
  /* 123d51b8 call 0x123d89c0 */
  push32(0x123d51bdu); f_123d89c0();
  /* 123d51bd mov dword ptr [0x124027bc], eax */
  w32((uint32_t)(0x124027bc), (EAX));
  /* 123d51c2 call 0x123d6000 */
  push32(0x123d51c7u); f_123d6000();
  /* 123d51c7 call 0x123d84b0 */
  push32(0x123d51ccu); f_123d84b0();
  /* 123d51cc call 0x123d8360 */
  push32(0x123d51d1u); f_123d8360();
  /* 123d51d1 call 0x123d5b50 */
  push32(0x123d51d6u); f_123d5b50();
  /* 123d51d6 mov ecx, dword ptr [0x124027b8] */
  ECX = (r32((uint32_t)(0x124027b8)));
  /* 123d51dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d51df mov dword ptr [0x124027b8], ecx */
  w32((uint32_t)(0x124027b8), (ECX));
  /* 123d51e5 jmp 0x123d5250 */
  goto L_123d5250;
L_123d51e7:;
  /* 123d51e7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d51eb jne 0x123d5240 */
  if (!C.zf) goto L_123d5240;
  /* 123d51ed cmp dword ptr [0x124027b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d51f4 jle 0x123d523a */
  if ((C.zf||C.sf!=C.of)) goto L_123d523a;
  /* 123d51f6 mov edx, dword ptr [0x124027b8] */
  EDX = (r32((uint32_t)(0x124027b8)));
  /* 123d51fc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d51ff mov dword ptr [0x124027b8], edx */
  w32((uint32_t)(0x124027b8), (EDX));
  /* 123d5205 cmp dword ptr [0x1240280c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1240280c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d520c jne 0x123d5213 */
  if (!C.zf) goto L_123d5213;
  /* 123d520e call 0x123d5bd0 */
  push32(0x123d5213u); f_123d5bd0();
L_123d5213:;
  /* 123d5213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123d5215 call 0x123d7900 */
  push32(0x123d521au); f_123d7900();
  /* 123d521a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d521d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 123d5220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5222 je 0x123d5229 */
  if (C.zf) goto L_123d5229;
  /* 123d5224 call 0x123d8210 */
  push32(0x123d5229u); f_123d8210();
L_123d5229:;
  /* 123d5229 call 0x123d6330 */
  push32(0x123d522eu); f_123d6330();
  /* 123d522e call 0x123d5de0 */
  push32(0x123d5233u); f_123d5de0();
  /* 123d5233 call 0x123d8c30 */
  push32(0x123d5238u); f_123d8c30();
  /* 123d5238 jmp 0x123d523e */
  goto L_123d523e;
L_123d523a:;
  /* 123d523a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d523c jmp 0x123d5255 */
  goto L_123d5255;
L_123d523e:;
  /* 123d523e jmp 0x123d5250 */
  goto L_123d5250;
L_123d5240:;
  /* 123d5240 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5244 jne 0x123d5250 */
  if (!C.zf) goto L_123d5250;
  /* 123d5246 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5248 call 0x123d5ed0 */
  push32(0x123d524du); f_123d5ed0();
  /* 123d524d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5250:;
  /* 123d5250 mov eax, 1 */
  EAX = (0x1u);
L_123d5255:;
  /* 123d5255 pop ebp */
  EBP = (pop32());
  /* 123d5256 ret 0xc */
  ESPCHK(0x123d5120u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x123d5260 (243 bytes, 86 insns) */
void f_123d5260(void) {
  FTRACE(0x123d5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5260 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5261 mov ebp, esp */
  EBP = (ESP);
  /* 123d5263 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5264 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123d526b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d526f jne 0x123d5281 */
  if (!C.zf) goto L_123d5281;
  /* 123d5271 cmp dword ptr [0x124027b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5278 jne 0x123d5281 */
  if (!C.zf) goto L_123d5281;
  /* 123d527a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d527c jmp 0x123d534d */
  goto L_123d534d;
L_123d5281:;
  /* 123d5281 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5285 je 0x123d528d */
  if (C.zf) goto L_123d528d;
  /* 123d5287 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d528b jne 0x123d52cf */
  if (!C.zf) goto L_123d52cf;
L_123d528d:;
  /* 123d528d cmp dword ptr [0x1240431c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1240431c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5294 je 0x123d52ab */
  if (C.zf) goto L_123d52ab;
  /* 123d5296 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d5299 push eax */
  push32((uint32_t)(EAX));
  /* 123d529a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d529d push ecx */
  push32((uint32_t)(ECX));
  /* 123d529e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d52a1 push edx */
  push32((uint32_t)(EDX));
  /* 123d52a2 call dword ptr [0x1240431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240431c))), 0x123d52a8u);
  /* 123d52a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d52ab:;
  /* 123d52ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d52af je 0x123d52c5 */
  if (C.zf) goto L_123d52c5;
  /* 123d52b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d52b4 push eax */
  push32((uint32_t)(EAX));
  /* 123d52b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d52b8 push ecx */
  push32((uint32_t)(ECX));
  /* 123d52b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d52bc push edx */
  push32((uint32_t)(EDX));
  /* 123d52bd call 0x123d5120 */
  push32(0x123d52c2u); f_123d5120();
  /* 123d52c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d52c5:;
  /* 123d52c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d52c9 jne 0x123d52cf */
  if (!C.zf) goto L_123d52cf;
  /* 123d52cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d52cd jmp 0x123d534d */
  goto L_123d534d;
L_123d52cf:;
  /* 123d52cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d52d2 push eax */
  push32((uint32_t)(EAX));
  /* 123d52d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d52d6 push ecx */
  push32((uint32_t)(ECX));
  /* 123d52d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d52da push edx */
  push32((uint32_t)(EDX));
  /* 123d52db call 0x123d100a */
  push32(0x123d52e0u); f_123d100a();
  /* 123d52e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d52e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d52e7 jne 0x123d52fe */
  if (!C.zf) goto L_123d52fe;
  /* 123d52e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d52ed jne 0x123d52fe */
  if (!C.zf) goto L_123d52fe;
  /* 123d52ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d52f2 push eax */
  push32((uint32_t)(EAX));
  /* 123d52f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d52f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d52f8 push ecx */
  push32((uint32_t)(ECX));
  /* 123d52f9 call 0x123d5120 */
  push32(0x123d52feu); f_123d5120();
L_123d52fe:;
  /* 123d52fe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5302 je 0x123d530a */
  if (C.zf) goto L_123d530a;
  /* 123d5304 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5308 jne 0x123d534a */
  if (!C.zf) goto L_123d534a;
L_123d530a:;
  /* 123d530a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d530d push edx */
  push32((uint32_t)(EDX));
  /* 123d530e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d5311 push eax */
  push32((uint32_t)(EAX));
  /* 123d5312 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5315 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5316 call 0x123d5120 */
  push32(0x123d531bu); f_123d5120();
  /* 123d531b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d531d jne 0x123d5326 */
  if (!C.zf) goto L_123d5326;
  /* 123d531f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123d5326:;
  /* 123d5326 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d532a je 0x123d534a */
  if (C.zf) goto L_123d534a;
  /* 123d532c cmp dword ptr [0x1240431c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1240431c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5333 je 0x123d534a */
  if (C.zf) goto L_123d534a;
  /* 123d5335 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d5338 push edx */
  push32((uint32_t)(EDX));
  /* 123d5339 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d533c push eax */
  push32((uint32_t)(EAX));
  /* 123d533d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5340 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5341 call dword ptr [0x1240431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240431c))), 0x123d5347u);
  /* 123d5347 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d534a:;
  /* 123d534a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123d534d:;
  /* 123d534d mov esp, ebp */
  ESP = (EBP);
  /* 123d534f pop ebp */
  EBP = (pop32());
  /* 123d5350 ret 0xc */
  ESPCHK(0x123d5260u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x123d5360 (58 bytes, 18 insns) */
void f_123d5360(void) {
  FTRACE(0x123d5360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5360 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5361 mov ebp, esp */
  EBP = (ESP);
  /* 123d5363 cmp dword ptr [0x124027c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d536a je 0x123d537e */
  if (C.zf) goto L_123d537e;
  /* 123d536c cmp dword ptr [0x124027c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5373 jne 0x123d5383 */
  if (!C.zf) goto L_123d5383;
  /* 123d5375 cmp dword ptr [0x124027c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d537c jne 0x123d5383 */
  if (!C.zf) goto L_123d5383;
L_123d537e:;
  /* 123d537e call 0x123d8cd0 */
  push32(0x123d5383u); f_123d8cd0();
L_123d5383:;
  /* 123d5383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5386 push eax */
  push32((uint32_t)(EAX));
  /* 123d5387 call 0x123d8d20 */
  push32(0x123d538cu); f_123d8d20();
  /* 123d538c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d538f push 0xff */
  push32((uint32_t)(0xffu));
  /* 123d5394 call dword ptr [0x12400a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12400a30))), 0x123d539au);
  /* 123d539a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d539d pop ebp */
  EBP = (pop32());
  /* 123d539e ret  */
  ESPCHK(0x123d5360u, _esp0);
  ESP += 4; return;
}

/* FUN_100053a0 @ 0x123d53a0 (11 bytes, 5 insns) */
void f_123d53a0(void) {
  FTRACE(0x123d53a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d53a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d53a1 mov ebp, esp */
  EBP = (ESP);
  /* 123d53a3 call dword ptr [0x12405314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405314))), 0x123d53a9u);
  /* 123d53a9 pop ebp */
  EBP = (pop32());
  /* 123d53aa ret  */
  ESPCHK(0x123d53a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b0 @ 0x123d53b0 (87 bytes, 30 insns) */
void f_123d53b0(void) {
  FTRACE(0x123d53b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d53b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d53b1 mov ebp, esp */
  EBP = (ESP);
  /* 123d53b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d53b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d53b8 jl 0x123d53c0 */
  if ((C.sf!=C.of)) goto L_123d53c0;
  /* 123d53ba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d53be jl 0x123d53c5 */
  if ((C.sf!=C.of)) goto L_123d53c5;
L_123d53c0:;
  /* 123d53c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d53c3 jmp 0x123d5403 */
  goto L_123d5403;
L_123d53c5:;
  /* 123d53c5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d53c9 jne 0x123d53d7 */
  if (!C.zf) goto L_123d53d7;
  /* 123d53cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d53ce mov eax, dword ptr [eax*4 + 0x12400a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12400a38)));
  /* 123d53d5 jmp 0x123d5403 */
  goto L_123d5403;
L_123d53d7:;
  /* 123d53d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d53da and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 123d53dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d53df je 0x123d53e6 */
  if (C.zf) goto L_123d53e6;
  /* 123d53e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d53e4 jmp 0x123d5403 */
  goto L_123d5403;
L_123d53e6:;
  /* 123d53e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d53e9 mov eax, dword ptr [edx*4 + 0x12400a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12400a38)));
  /* 123d53f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d53f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d53f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d53f9 mov dword ptr [ecx*4 + 0x12400a38], edx */
  w32((uint32_t)(ECX*4 + 0x12400a38), (EDX));
  /* 123d5400 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123d5403:;
  /* 123d5403 mov esp, ebp */
  ESP = (EBP);
  /* 123d5405 pop ebp */
  EBP = (pop32());
  /* 123d5406 ret  */
  ESPCHK(0x123d53b0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x123d5410 (126 bytes, 38 insns) */
void f_123d5410(void) {
  FTRACE(0x123d5410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5410 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5411 mov ebp, esp */
  EBP = (ESP);
  /* 123d5413 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5414 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5418 jl 0x123d5420 */
  if ((C.sf!=C.of)) goto L_123d5420;
  /* 123d541a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d541e jl 0x123d5427 */
  if ((C.sf!=C.of)) goto L_123d5427;
L_123d5420:;
  /* 123d5420 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 123d5425 jmp 0x123d548a */
  goto L_123d548a;
L_123d5427:;
  /* 123d5427 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d542b jne 0x123d5439 */
  if (!C.zf) goto L_123d5439;
  /* 123d542d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5430 mov eax, dword ptr [eax*4 + 0x12400a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12400a44)));
  /* 123d5437 jmp 0x123d548a */
  goto L_123d548a;
L_123d5439:;
  /* 123d5439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d543c mov edx, dword ptr [ecx*4 + 0x12400a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a44)));
  /* 123d5443 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d5446 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d544a jne 0x123d5460 */
  if (!C.zf) goto L_123d5460;
  /* 123d544c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 123d544e call dword ptr [0x12405318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405318))), 0x123d5454u);
  /* 123d5454 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5457 mov dword ptr [ecx*4 + 0x12400a44], eax */
  w32((uint32_t)(ECX*4 + 0x12400a44), (EAX));
  /* 123d545e jmp 0x123d5487 */
  goto L_123d5487;
L_123d5460:;
  /* 123d5460 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5464 jne 0x123d547a */
  if (!C.zf) goto L_123d547a;
  /* 123d5466 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 123d5468 call dword ptr [0x12405318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405318))), 0x123d546eu);
  /* 123d546e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5471 mov dword ptr [edx*4 + 0x12400a44], eax */
  w32((uint32_t)(EDX*4 + 0x12400a44), (EAX));
  /* 123d5478 jmp 0x123d5487 */
  goto L_123d5487;
L_123d547a:;
  /* 123d547a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d547d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d5480 mov dword ptr [eax*4 + 0x12400a44], ecx */
  w32((uint32_t)(EAX*4 + 0x12400a44), (ECX));
L_123d5487:;
  /* 123d5487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123d548a:;
  /* 123d548a mov esp, ebp */
  ESP = (EBP);
  /* 123d548c pop ebp */
  EBP = (pop32());
  /* 123d548d ret  */
  ESPCHK(0x123d5410u, _esp0);
  ESP += 4; return;
}

/* FUN_10005490 @ 0x123d5490 (28 bytes, 11 insns) */
void f_123d5490(void) {
  FTRACE(0x123d5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5490 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5491 mov ebp, esp */
  EBP = (ESP);
  /* 123d5493 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5494 mov eax, dword ptr [0x12404300] */
  EAX = (r32((uint32_t)(0x12404300)));
  /* 123d5499 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d549c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d549f mov dword ptr [0x12404300], ecx */
  w32((uint32_t)(0x12404300), (ECX));
  /* 123d54a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d54a8 mov esp, ebp */
  ESP = (EBP);
  /* 123d54aa pop ebp */
  EBP = (pop32());
  /* 123d54ab ret  */
  ESPCHK(0x123d5490u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x123d54b0 (912 bytes, 248 insns) */
void f_123d54b0(void) {
  FTRACE(0x123d54b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d54b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d54b1 mov ebp, esp */
  EBP = (ESP);
  /* 123d54b3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 123d54b8 call 0x123d9590 */
  push32(0x123d54bdu); f_123d9590();
  /* 123d54bd push edi */
  push32((uint32_t)(EDI));
  /* 123d54be mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 123d54c5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 123d54ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d54cc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 123d54d2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123d54d4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123d54d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123d54d7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 123d54de mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 123d54e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d54e5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 123d54eb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123d54ed stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123d54ef stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123d54f0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 123d54f7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 123d54fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d54fe lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 123d5504 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123d5506 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123d5508 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123d5509 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 123d550c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 123d5512 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5516 jl 0x123d551e */
  if ((C.sf!=C.of)) goto L_123d551e;
  /* 123d5518 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d551c jl 0x123d5526 */
  if ((C.sf!=C.of)) goto L_123d5526;
L_123d551e:;
  /* 123d551e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d5521 jmp 0x123d583b */
  goto L_123d583b;
L_123d5526:;
  /* 123d5526 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d552a jne 0x123d55d0 */
  if (!C.zf) goto L_123d55d0;
  /* 123d5530 push 0x12400a34 */
  push32((uint32_t)(0x12400a34u));
  /* 123d5535 call dword ptr [0x12405330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405330))), 0x123d553bu);
  /* 123d553b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d553d jle 0x123d55d0 */
  if ((C.zf||C.sf!=C.of)) goto L_123d55d0;
  /* 123d5543 cmp dword ptr [0x124027cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d554a jne 0x123d558e */
  if (!C.zf) goto L_123d558e;
  /* 123d554c push 0x123fd8b4 */
  push32((uint32_t)(0x123fd8b4u));
  /* 123d5551 call dword ptr [0x1240532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240532c))), 0x123d5557u);
  /* 123d5557 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 123d555d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5564 je 0x123d5586 */
  if (C.zf) goto L_123d5586;
  /* 123d5566 push 0x123fd8a8 */
  push32((uint32_t)(0x123fd8a8u));
  /* 123d556b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 123d5571 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5572 call dword ptr [0x12405328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405328))), 0x123d5578u);
  /* 123d5578 mov dword ptr [0x124027cc], eax */
  w32((uint32_t)(0x124027cc), (EAX));
  /* 123d557d cmp dword ptr [0x124027cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5584 jne 0x123d558e */
  if (!C.zf) goto L_123d558e;
L_123d5586:;
  /* 123d5586 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d5589 jmp 0x123d583b */
  goto L_123d583b;
L_123d558e:;
  /* 123d558e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d5591 push edx */
  push32((uint32_t)(EDX));
  /* 123d5592 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d5595 push eax */
  push32((uint32_t)(EAX));
  /* 123d5596 push 0x123fd874 */
  push32((uint32_t)(0x123fd874u));
  /* 123d559b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 123d55a1 push ecx */
  push32((uint32_t)(ECX));
  /* 123d55a2 call dword ptr [0x124027cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124027cc))), 0x123d55a8u);
  /* 123d55a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d55ab lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 123d55b1 push edx */
  push32((uint32_t)(EDX));
  /* 123d55b2 call dword ptr [0x12405324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405324))), 0x123d55b8u);
  /* 123d55b8 push 0x12400a34 */
  push32((uint32_t)(0x12400a34u));
  /* 123d55bd call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123d55c3u);
  /* 123d55c3 call 0x123d53a0 */
  push32(0x123d55c8u); f_123d53a0();
  /* 123d55c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d55cb jmp 0x123d583b */
  goto L_123d583b;
L_123d55d0:;
  /* 123d55d0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d55d4 je 0x123d560d */
  if (C.zf) goto L_123d560d;
  /* 123d55d6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 123d55dc push eax */
  push32((uint32_t)(EAX));
  /* 123d55dd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d55e0 push ecx */
  push32((uint32_t)(ECX));
  /* 123d55e1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 123d55e6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 123d55ec push edx */
  push32((uint32_t)(EDX));
  /* 123d55ed call 0x123d9490 */
  push32(0x123d55f2u); f_123d9490();
  /* 123d55f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d55f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d55f7 jge 0x123d560d */
  if ((C.sf==C.of)) goto L_123d560d;
  /* 123d55f9 push 0x123fd848 */
  push32((uint32_t)(0x123fd848u));
  /* 123d55fe lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 123d5604 push eax */
  push32((uint32_t)(EAX));
  /* 123d5605 call 0x123d93a0 */
  push32(0x123d560au); f_123d93a0();
  /* 123d560a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d560d:;
  /* 123d560d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5611 jne 0x123d5645 */
  if (!C.zf) goto L_123d5645;
  /* 123d5613 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5617 je 0x123d5625 */
  if (C.zf) goto L_123d5625;
  /* 123d5619 mov dword ptr [ebp - 0x3028], 0x123fd834 */
  w32((uint32_t)(EBP + -0x3028), (0x123fd834u));
  /* 123d5623 jmp 0x123d562f */
  goto L_123d562f;
L_123d5625:;
  /* 123d5625 mov dword ptr [ebp - 0x3028], 0x123fd820 */
  w32((uint32_t)(EBP + -0x3028), (0x123fd820u));
L_123d562f:;
  /* 123d562f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 123d5635 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5636 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 123d563c push edx */
  push32((uint32_t)(EDX));
  /* 123d563d call 0x123d93a0 */
  push32(0x123d5642u); f_123d93a0();
  /* 123d5642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5645:;
  /* 123d5645 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 123d564b push eax */
  push32((uint32_t)(EAX));
  /* 123d564c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 123d5652 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5653 call 0x123d93b0 */
  push32(0x123d5658u); f_123d93b0();
  /* 123d5658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d565b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d565f jne 0x123d569a */
  if (!C.zf) goto L_123d569a;
  /* 123d5661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5664 mov eax, dword ptr [edx*4 + 0x12400a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12400a38)));
  /* 123d566b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 123d566e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5670 je 0x123d5686 */
  if (C.zf) goto L_123d5686;
  /* 123d5672 push 0x123fd81c */
  push32((uint32_t)(0x123fd81cu));
  /* 123d5677 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 123d567d push ecx */
  push32((uint32_t)(ECX));
  /* 123d567e call 0x123d93b0 */
  push32(0x123d5683u); f_123d93b0();
  /* 123d5683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5686:;
  /* 123d5686 push 0x123fd818 */
  push32((uint32_t)(0x123fd818u));
  /* 123d568b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 123d5691 push edx */
  push32((uint32_t)(EDX));
  /* 123d5692 call 0x123d93b0 */
  push32(0x123d5697u); f_123d93b0();
  /* 123d5697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d569a:;
  /* 123d569a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d569e je 0x123d56e2 */
  if (C.zf) goto L_123d56e2;
  /* 123d56a0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 123d56a6 push eax */
  push32((uint32_t)(EAX));
  /* 123d56a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d56aa push ecx */
  push32((uint32_t)(ECX));
  /* 123d56ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d56ae push edx */
  push32((uint32_t)(EDX));
  /* 123d56af push 0x123fd80c */
  push32((uint32_t)(0x123fd80cu));
  /* 123d56b4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 123d56b9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 123d56bf push eax */
  push32((uint32_t)(EAX));
  /* 123d56c0 call 0x123d92a0 */
  push32(0x123d56c5u); f_123d92a0();
  /* 123d56c5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d56c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d56ca jge 0x123d56e0 */
  if ((C.sf==C.of)) goto L_123d56e0;
  /* 123d56cc push 0x123fd848 */
  push32((uint32_t)(0x123fd848u));
  /* 123d56d1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 123d56d7 push ecx */
  push32((uint32_t)(ECX));
  /* 123d56d8 call 0x123d93a0 */
  push32(0x123d56ddu); f_123d93a0();
  /* 123d56dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d56e0:;
  /* 123d56e0 jmp 0x123d56f8 */
  goto L_123d56f8;
L_123d56e2:;
  /* 123d56e2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 123d56e8 push edx */
  push32((uint32_t)(EDX));
  /* 123d56e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 123d56ef push eax */
  push32((uint32_t)(EAX));
  /* 123d56f0 call 0x123d93a0 */
  push32(0x123d56f5u); f_123d93a0();
  /* 123d56f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d56f8:;
  /* 123d56f8 cmp dword ptr [0x12404300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12404300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d56ff je 0x123d573c */
  if (C.zf) goto L_123d573c;
  /* 123d5701 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 123d5707 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5708 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 123d570e push edx */
  push32((uint32_t)(EDX));
  /* 123d570f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5712 push eax */
  push32((uint32_t)(EAX));
  /* 123d5713 call dword ptr [0x12404300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12404300))), 0x123d5719u);
  /* 123d5719 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d571c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d571e je 0x123d573c */
  if (C.zf) goto L_123d573c;
  /* 123d5720 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5724 jne 0x123d5731 */
  if (!C.zf) goto L_123d5731;
  /* 123d5726 push 0x12400a34 */
  push32((uint32_t)(0x12400a34u));
  /* 123d572b call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123d5731u);
L_123d5731:;
  /* 123d5731 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 123d5737 jmp 0x123d583b */
  goto L_123d583b;
L_123d573c:;
  /* 123d573c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d573f mov edx, dword ptr [ecx*4 + 0x12400a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a38)));
  /* 123d5746 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123d5749 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d574b je 0x123d578b */
  if (C.zf) goto L_123d578b;
  /* 123d574d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5750 cmp dword ptr [eax*4 + 0x12400a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12400a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5758 je 0x123d578b */
  if (C.zf) goto L_123d578b;
  /* 123d575a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d575c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 123d5762 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5763 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 123d5769 push edx */
  push32((uint32_t)(EDX));
  /* 123d576a call 0x123d9220 */
  push32(0x123d576fu); f_123d9220();
  /* 123d576f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5772 push eax */
  push32((uint32_t)(EAX));
  /* 123d5773 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 123d5779 push eax */
  push32((uint32_t)(EAX));
  /* 123d577a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d577d mov edx, dword ptr [ecx*4 + 0x12400a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a44)));
  /* 123d5784 push edx */
  push32((uint32_t)(EDX));
  /* 123d5785 call dword ptr [0x1240531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240531c))), 0x123d578bu);
L_123d578b:;
  /* 123d578b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d578e mov ecx, dword ptr [eax*4 + 0x12400a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12400a38)));
  /* 123d5795 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 123d5798 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d579a je 0x123d57a9 */
  if (C.zf) goto L_123d57a9;
  /* 123d579c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 123d57a2 push edx */
  push32((uint32_t)(EDX));
  /* 123d57a3 call dword ptr [0x12405324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405324))), 0x123d57a9u);
L_123d57a9:;
  /* 123d57a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d57ac mov ecx, dword ptr [eax*4 + 0x12400a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12400a38)));
  /* 123d57b3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123d57b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d57b8 je 0x123d5828 */
  if (C.zf) goto L_123d5828;
  /* 123d57ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d57be je 0x123d57dd */
  if (C.zf) goto L_123d57dd;
  /* 123d57c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 123d57c2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 123d57c8 push edx */
  push32((uint32_t)(EDX));
  /* 123d57c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d57cc push eax */
  push32((uint32_t)(EAX));
  /* 123d57cd call 0x123d8f30 */
  push32(0x123d57d2u); f_123d8f30();
  /* 123d57d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d57d5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 123d57db jmp 0x123d57e7 */
  goto L_123d57e7;
L_123d57dd:;
  /* 123d57dd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_123d57e7:;
  /* 123d57e7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 123d57ed push ecx */
  push32((uint32_t)(ECX));
  /* 123d57ee mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d57f1 push edx */
  push32((uint32_t)(EDX));
  /* 123d57f2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 123d57f8 push eax */
  push32((uint32_t)(EAX));
  /* 123d57f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d57fc push ecx */
  push32((uint32_t)(ECX));
  /* 123d57fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5800 push edx */
  push32((uint32_t)(EDX));
  /* 123d5801 call 0x123d5840 */
  push32(0x123d5806u); f_123d5840();
  /* 123d5806 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5809 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 123d580f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5813 jne 0x123d5820 */
  if (!C.zf) goto L_123d5820;
  /* 123d5815 push 0x12400a34 */
  push32((uint32_t)(0x12400a34u));
  /* 123d581a call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123d5820u);
L_123d5820:;
  /* 123d5820 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 123d5826 jmp 0x123d583b */
  goto L_123d583b;
L_123d5828:;
  /* 123d5828 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d582c jne 0x123d5839 */
  if (!C.zf) goto L_123d5839;
  /* 123d582e push 0x12400a34 */
  push32((uint32_t)(0x12400a34u));
  /* 123d5833 call dword ptr [0x12405320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405320))), 0x123d5839u);
L_123d5839:;
  /* 123d5839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d583b:;
  /* 123d583b pop edi */
  EDI = (pop32());
  /* 123d583c mov esp, ebp */
  ESP = (EBP);
  /* 123d583e pop ebp */
  EBP = (pop32());
  /* 123d583f ret  */
  ESPCHK(0x123d54b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005840 @ 0x123d5840 (780 bytes, 197 insns) */
void f_123d5840(void) {
  FTRACE(0x123d5840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5840 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5841 mov ebp, esp */
  EBP = (ESP);
  /* 123d5843 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 123d5848 call 0x123d9590 */
  push32(0x123d584du); f_123d9590();
L_123d584d:;
  /* 123d584d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5851 jne 0x123d5878 */
  if (!C.zf) goto L_123d5878;
  /* 123d5853 push 0x123fda04 */
  push32((uint32_t)(0x123fda04u));
  /* 123d5858 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d585a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 123d585f push 0x123fd9f8 */
  push32((uint32_t)(0x123fd9f8u));
  /* 123d5864 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5866 call 0x123d54b0 */
  push32(0x123d586bu); f_123d54b0();
  /* 123d586b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d586e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5871 jne 0x123d5878 */
  if (!C.zf) goto L_123d5878;
  /* 123d5873 call 0x123d53a0 */
  push32(0x123d5878u); f_123d53a0();
L_123d5878:;
  /* 123d5878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d587a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d587c jne 0x123d584d */
  if (!C.zf) goto L_123d584d;
  /* 123d587e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 123d5883 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 123d5889 push ecx */
  push32((uint32_t)(ECX));
  /* 123d588a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d588c call dword ptr [0x12405334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405334))), 0x123d5892u);
  /* 123d5892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5894 jne 0x123d58aa */
  if (!C.zf) goto L_123d58aa;
  /* 123d5896 push 0x123fd9e0 */
  push32((uint32_t)(0x123fd9e0u));
  /* 123d589b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 123d58a1 push edx */
  push32((uint32_t)(EDX));
  /* 123d58a2 call 0x123d93a0 */
  push32(0x123d58a7u); f_123d93a0();
  /* 123d58a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d58aa:;
  /* 123d58aa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 123d58b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d58b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d58b6 push ecx */
  push32((uint32_t)(ECX));
  /* 123d58b7 call 0x123d9220 */
  push32(0x123d58bcu); f_123d9220();
  /* 123d58bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d58bf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d58c2 jbe 0x123d58ed */
  if ((C.cf||C.zf)) goto L_123d58ed;
  /* 123d58c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d58c7 push edx */
  push32((uint32_t)(EDX));
  /* 123d58c8 call 0x123d9220 */
  push32(0x123d58cdu); f_123d9220();
  /* 123d58cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d58d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d58d3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 123d58d7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d58da push 3 */
  push32((uint32_t)(0x3u));
  /* 123d58dc push 0x123fd9dc */
  push32((uint32_t)(0x123fd9dcu));
  /* 123d58e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d58e4 push eax */
  push32((uint32_t)(EAX));
  /* 123d58e5 call 0x123d9c10 */
  push32(0x123d58eau); f_123d9c10();
  /* 123d58ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d58ed:;
  /* 123d58ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d58f0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 123d58f6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d58fd je 0x123d5948 */
  if (C.zf) goto L_123d5948;
  /* 123d58ff mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123d5905 push edx */
  push32((uint32_t)(EDX));
  /* 123d5906 call 0x123d9220 */
  push32(0x123d590bu); f_123d9220();
  /* 123d590b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d590e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5911 jbe 0x123d5948 */
  if ((C.cf||C.zf)) goto L_123d5948;
  /* 123d5913 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123d5919 push eax */
  push32((uint32_t)(EAX));
  /* 123d591a call 0x123d9220 */
  push32(0x123d591fu); f_123d9220();
  /* 123d591f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5922 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123d5928 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 123d592c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 123d5932 push 3 */
  push32((uint32_t)(0x3u));
  /* 123d5934 push 0x123fd9dc */
  push32((uint32_t)(0x123fd9dcu));
  /* 123d5939 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123d593f push eax */
  push32((uint32_t)(EAX));
  /* 123d5940 call 0x123d9c10 */
  push32(0x123d5945u); f_123d9c10();
  /* 123d5945 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5948:;
  /* 123d5948 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d594c jne 0x123d595a */
  if (!C.zf) goto L_123d595a;
  /* 123d594e mov dword ptr [ebp - 0x1114], 0x123fd968 */
  w32((uint32_t)(EBP + -0x1114), (0x123fd968u));
  /* 123d5958 jmp 0x123d5964 */
  goto L_123d5964;
L_123d595a:;
  /* 123d595a mov dword ptr [ebp - 0x1114], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1114), (0x123fd708u));
L_123d5964:;
  /* 123d5964 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d5967 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123d596a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d596c je 0x123d5979 */
  if (C.zf) goto L_123d5979;
  /* 123d596e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d5971 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 123d5977 jmp 0x123d5983 */
  goto L_123d5983;
L_123d5979:;
  /* 123d5979 mov dword ptr [ebp - 0x1118], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1118), (0x123fd708u));
L_123d5983:;
  /* 123d5983 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d5986 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123d5989 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d598b je 0x123d599f */
  if (C.zf) goto L_123d599f;
  /* 123d598d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5991 jne 0x123d599f */
  if (!C.zf) goto L_123d599f;
  /* 123d5993 mov dword ptr [ebp - 0x111c], 0x123fd958 */
  w32((uint32_t)(EBP + -0x111c), (0x123fd958u));
  /* 123d599d jmp 0x123d59a9 */
  goto L_123d59a9;
L_123d599f:;
  /* 123d599f mov dword ptr [ebp - 0x111c], 0x123fd708 */
  w32((uint32_t)(EBP + -0x111c), (0x123fd708u));
L_123d59a9:;
  /* 123d59a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d59ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d59af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d59b1 je 0x123d59bf */
  if (C.zf) goto L_123d59bf;
  /* 123d59b3 mov dword ptr [ebp - 0x1120], 0x123fd954 */
  w32((uint32_t)(EBP + -0x1120), (0x123fd954u));
  /* 123d59bd jmp 0x123d59c9 */
  goto L_123d59c9;
L_123d59bf:;
  /* 123d59bf mov dword ptr [ebp - 0x1120], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1120), (0x123fd708u));
L_123d59c9:;
  /* 123d59c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d59cd je 0x123d59da */
  if (C.zf) goto L_123d59da;
  /* 123d59cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d59d2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 123d59d8 jmp 0x123d59e4 */
  goto L_123d59e4;
L_123d59da:;
  /* 123d59da mov dword ptr [ebp - 0x1124], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1124), (0x123fd708u));
L_123d59e4:;
  /* 123d59e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d59e8 je 0x123d59f6 */
  if (C.zf) goto L_123d59f6;
  /* 123d59ea mov dword ptr [ebp - 0x1128], 0x123fd94c */
  w32((uint32_t)(EBP + -0x1128), (0x123fd94cu));
  /* 123d59f4 jmp 0x123d5a00 */
  goto L_123d5a00;
L_123d59f6:;
  /* 123d59f6 mov dword ptr [ebp - 0x1128], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1128), (0x123fd708u));
L_123d5a00:;
  /* 123d5a00 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5a04 je 0x123d5a11 */
  if (C.zf) goto L_123d5a11;
  /* 123d5a06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d5a09 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 123d5a0f jmp 0x123d5a1b */
  goto L_123d5a1b;
L_123d5a11:;
  /* 123d5a11 mov dword ptr [ebp - 0x112c], 0x123fd708 */
  w32((uint32_t)(EBP + -0x112c), (0x123fd708u));
L_123d5a1b:;
  /* 123d5a1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5a1f je 0x123d5a2d */
  if (C.zf) goto L_123d5a2d;
  /* 123d5a21 mov dword ptr [ebp - 0x1130], 0x123fd944 */
  w32((uint32_t)(EBP + -0x1130), (0x123fd944u));
  /* 123d5a2b jmp 0x123d5a37 */
  goto L_123d5a37;
L_123d5a2d:;
  /* 123d5a2d mov dword ptr [ebp - 0x1130], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1130), (0x123fd708u));
L_123d5a37:;
  /* 123d5a37 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5a3e je 0x123d5a4e */
  if (C.zf) goto L_123d5a4e;
  /* 123d5a40 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123d5a46 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 123d5a4c jmp 0x123d5a58 */
  goto L_123d5a58;
L_123d5a4e:;
  /* 123d5a4e mov dword ptr [ebp - 0x1134], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1134), (0x123fd708u));
L_123d5a58:;
  /* 123d5a58 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5a5f je 0x123d5a6d */
  if (C.zf) goto L_123d5a6d;
  /* 123d5a61 mov dword ptr [ebp - 0x1138], 0x123fd938 */
  w32((uint32_t)(EBP + -0x1138), (0x123fd938u));
  /* 123d5a6b jmp 0x123d5a77 */
  goto L_123d5a77;
L_123d5a6d:;
  /* 123d5a6d mov dword ptr [ebp - 0x1138], 0x123fd708 */
  w32((uint32_t)(EBP + -0x1138), (0x123fd708u));
L_123d5a77:;
  /* 123d5a77 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 123d5a7d push edx */
  push32((uint32_t)(EDX));
  /* 123d5a7e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 123d5a84 push eax */
  push32((uint32_t)(EAX));
  /* 123d5a85 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 123d5a8b push ecx */
  push32((uint32_t)(ECX));
  /* 123d5a8c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 123d5a92 push edx */
  push32((uint32_t)(EDX));
  /* 123d5a93 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 123d5a99 push eax */
  push32((uint32_t)(EAX));
  /* 123d5a9a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 123d5aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5aa1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 123d5aa7 push edx */
  push32((uint32_t)(EDX));
  /* 123d5aa8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 123d5aae push eax */
  push32((uint32_t)(EAX));
  /* 123d5aaf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 123d5ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5ab6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 123d5abc push edx */
  push32((uint32_t)(EDX));
  /* 123d5abd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5ac0 push eax */
  push32((uint32_t)(EAX));
  /* 123d5ac1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5ac4 mov edx, dword ptr [ecx*4 + 0x12400a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a50)));
  /* 123d5acb push edx */
  push32((uint32_t)(EDX));
  /* 123d5acc push 0x123fd8e4 */
  push32((uint32_t)(0x123fd8e4u));
  /* 123d5ad1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 123d5ad6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 123d5adc push eax */
  push32((uint32_t)(EAX));
  /* 123d5add call 0x123d92a0 */
  push32(0x123d5ae2u); f_123d92a0();
  /* 123d5ae2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5ae7 jge 0x123d5afd */
  if ((C.sf==C.of)) goto L_123d5afd;
  /* 123d5ae9 push 0x123fd848 */
  push32((uint32_t)(0x123fd848u));
  /* 123d5aee lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 123d5af4 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5af5 call 0x123d93a0 */
  push32(0x123d5afau); f_123d93a0();
  /* 123d5afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5afd:;
  /* 123d5afd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 123d5b02 push 0x123fd8c0 */
  push32((uint32_t)(0x123fd8c0u));
  /* 123d5b07 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 123d5b0d push edx */
  push32((uint32_t)(EDX));
  /* 123d5b0e call 0x123d9b50 */
  push32(0x123d5b13u); f_123d9b50();
  /* 123d5b13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5b16 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 123d5b1c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5b23 jne 0x123d5b36 */
  if (!C.zf) goto L_123d5b36;
  /* 123d5b25 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123d5b27 call 0x123d9890 */
  push32(0x123d5b2cu); f_123d9890();
  /* 123d5b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5b2f push 3 */
  push32((uint32_t)(0x3u));
  /* 123d5b31 call 0x123d5bb0 */
  push32(0x123d5b36u); f_123d5bb0();
L_123d5b36:;
  /* 123d5b36 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5b3d jne 0x123d5b46 */
  if (!C.zf) goto L_123d5b46;
  /* 123d5b3f mov eax, 1 */
  EAX = (0x1u);
  /* 123d5b44 jmp 0x123d5b48 */
  goto L_123d5b48;
L_123d5b46:;
  /* 123d5b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d5b48:;
  /* 123d5b48 mov esp, ebp */
  ESP = (EBP);
  /* 123d5b4a pop ebp */
  EBP = (pop32());
  /* 123d5b4b ret  */
  ESPCHK(0x123d5840u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x123d5b50 (56 bytes, 15 insns) */
void f_123d5b50(void) {
  FTRACE(0x123d5b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5b50 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5b51 mov ebp, esp */
  EBP = (ESP);
  /* 123d5b53 cmp dword ptr [0x124042fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124042fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5b5a je 0x123d5b62 */
  if (C.zf) goto L_123d5b62;
  /* 123d5b5c call dword ptr [0x124042fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124042fc))), 0x123d5b62u);
L_123d5b62:;
  /* 123d5b62 push 0x12400418 */
  push32((uint32_t)(0x12400418u));
  /* 123d5b67 push 0x12400208 */
  push32((uint32_t)(0x12400208u));
  /* 123d5b6c call 0x123d5d20 */
  push32(0x123d5b71u); f_123d5d20();
  /* 123d5b71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5b74 push 0x12400104 */
  push32((uint32_t)(0x12400104u));
  /* 123d5b79 push 0x12400000 */
  push32((uint32_t)(0x12400000u));
  /* 123d5b7e call 0x123d5d20 */
  push32(0x123d5b83u); f_123d5d20();
  /* 123d5b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5b86 pop ebp */
  EBP = (pop32());
  /* 123d5b87 ret  */
  ESPCHK(0x123d5b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b90 @ 0x123d5b90 (21 bytes, 10 insns) */
void f_123d5b90(void) {
  FTRACE(0x123d5b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5b90 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5b91 mov ebp, esp */
  EBP = (ESP);
  /* 123d5b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5b97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5b9a push eax */
  push32((uint32_t)(EAX));
  /* 123d5b9b call 0x123d5c10 */
  push32(0x123d5ba0u); f_123d5c10();
  /* 123d5ba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5ba3 pop ebp */
  EBP = (pop32());
  /* 123d5ba4 ret  */
  ESPCHK(0x123d5b90u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x123d5bb0 (21 bytes, 10 insns) */
void f_123d5bb0(void) {
  FTRACE(0x123d5bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5bb1 mov ebp, esp */
  EBP = (ESP);
  /* 123d5bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d5bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5bba push eax */
  push32((uint32_t)(EAX));
  /* 123d5bbb call 0x123d5c10 */
  push32(0x123d5bc0u); f_123d5c10();
  /* 123d5bc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5bc3 pop ebp */
  EBP = (pop32());
  /* 123d5bc4 ret  */
  ESPCHK(0x123d5bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x123d5bd0 (19 bytes, 9 insns) */
void f_123d5bd0(void) {
  FTRACE(0x123d5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 123d5bd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d5bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5bd9 call 0x123d5c10 */
  push32(0x123d5bdeu); f_123d5c10();
  /* 123d5bde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5be1 pop ebp */
  EBP = (pop32());
  /* 123d5be2 ret  */
  ESPCHK(0x123d5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x123d5bf0 (19 bytes, 9 insns) */
void f_123d5bf0(void) {
  FTRACE(0x123d5bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5bf1 mov ebp, esp */
  EBP = (ESP);
  /* 123d5bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d5bf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d5bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5bf9 call 0x123d5c10 */
  push32(0x123d5bfeu); f_123d5c10();
  /* 123d5bfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5c01 pop ebp */
  EBP = (pop32());
  /* 123d5c02 ret  */
  ESPCHK(0x123d5bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c10 @ 0x123d5c10 (227 bytes, 61 insns) */
void f_123d5c10(void) {
  FTRACE(0x123d5c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5c10 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5c11 mov ebp, esp */
  EBP = (ESP);
  /* 123d5c13 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5c14 call 0x123d5d00 */
  push32(0x123d5c19u); f_123d5d00();
  /* 123d5c19 cmp dword ptr [0x12402810], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12402810))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5c20 jne 0x123d5c33 */
  if (!C.zf) goto L_123d5c33;
  /* 123d5c22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5c25 push eax */
  push32((uint32_t)(EAX));
  /* 123d5c26 call dword ptr [0x12405340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405340))), 0x123d5c2cu);
  /* 123d5c2c push eax */
  push32((uint32_t)(EAX));
  /* 123d5c2d call dword ptr [0x1240533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240533c))), 0x123d5c33u);
L_123d5c33:;
  /* 123d5c33 mov dword ptr [0x1240280c], 1 */
  w32((uint32_t)(0x1240280c), (0x1u));
  /* 123d5c3d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 123d5c40 mov byte ptr [0x12402808], cl */
  w8((uint32_t)(0x12402808), (CL));
  /* 123d5c46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5c4a jne 0x123d5c93 */
  if (!C.zf) goto L_123d5c93;
  /* 123d5c4c cmp dword ptr [0x124042f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124042f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5c53 je 0x123d5c81 */
  if (C.zf) goto L_123d5c81;
  /* 123d5c55 mov edx, dword ptr [0x124042f4] */
  EDX = (r32((uint32_t)(0x124042f4)));
  /* 123d5c5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123d5c5e:;
  /* 123d5c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5c61 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d5c64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d5c67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5c6a cmp ecx, dword ptr [0x124042f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124042f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5c70 jb 0x123d5c81 */
  if (C.cf) goto L_123d5c81;
  /* 123d5c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5c75 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5c78 je 0x123d5c7f */
  if (C.zf) goto L_123d5c7f;
  /* 123d5c7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5c7d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x123d5c7fu);
L_123d5c7f:;
  /* 123d5c7f jmp 0x123d5c5e */
  goto L_123d5c5e;
L_123d5c81:;
  /* 123d5c81 push 0x12400724 */
  push32((uint32_t)(0x12400724u));
  /* 123d5c86 push 0x1240051c */
  push32((uint32_t)(0x1240051cu));
  /* 123d5c8b call 0x123d5d20 */
  push32(0x123d5c90u); f_123d5d20();
  /* 123d5c90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5c93:;
  /* 123d5c93 push 0x1240092c */
  push32((uint32_t)(0x1240092cu));
  /* 123d5c98 push 0x12400828 */
  push32((uint32_t)(0x12400828u));
  /* 123d5c9d call 0x123d5d20 */
  push32(0x123d5ca2u); f_123d5d20();
  /* 123d5ca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5ca5 cmp dword ptr [0x12402814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5cac jne 0x123d5cce */
  if (!C.zf) goto L_123d5cce;
  /* 123d5cae push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123d5cb0 call 0x123d7900 */
  push32(0x123d5cb5u); f_123d7900();
  /* 123d5cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5cb8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 123d5cbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5cbd je 0x123d5cce */
  if (C.zf) goto L_123d5cce;
  /* 123d5cbf mov dword ptr [0x12402814], 1 */
  w32((uint32_t)(0x12402814), (0x1u));
  /* 123d5cc9 call 0x123d8210 */
  push32(0x123d5cceu); f_123d8210();
L_123d5cce:;
  /* 123d5cce cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5cd2 je 0x123d5cdb */
  if (C.zf) goto L_123d5cdb;
  /* 123d5cd4 call 0x123d5d10 */
  push32(0x123d5cd9u); f_123d5d10();
  /* 123d5cd9 jmp 0x123d5cef */
  goto L_123d5cef;
L_123d5cdb:;
  /* 123d5cdb mov dword ptr [0x12402810], 1 */
  w32((uint32_t)(0x12402810), (0x1u));
  /* 123d5ce5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5ce9 call dword ptr [0x12405338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405338))), 0x123d5cefu);
L_123d5cef:;
  /* 123d5cef mov esp, ebp */
  ESP = (EBP);
  /* 123d5cf1 pop ebp */
  EBP = (pop32());
  /* 123d5cf2 ret  */
  ESPCHK(0x123d5c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d00 @ 0x123d5d00 (15 bytes, 7 insns) */
void f_123d5d00(void) {
  FTRACE(0x123d5d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5d00 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5d01 mov ebp, esp */
  EBP = (ESP);
  /* 123d5d03 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123d5d05 call 0x123d9df0 */
  push32(0x123d5d0au); f_123d9df0();
  /* 123d5d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5d0d pop ebp */
  EBP = (pop32());
  /* 123d5d0e ret  */
  ESPCHK(0x123d5d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d10 @ 0x123d5d10 (15 bytes, 7 insns) */
void f_123d5d10(void) {
  FTRACE(0x123d5d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5d10 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5d11 mov ebp, esp */
  EBP = (ESP);
  /* 123d5d13 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123d5d15 call 0x123d9e90 */
  push32(0x123d5d1au); f_123d9e90();
  /* 123d5d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5d1d pop ebp */
  EBP = (pop32());
  /* 123d5d1e ret  */
  ESPCHK(0x123d5d10u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x123d5d20 (37 bytes, 16 insns) */
void f_123d5d20(void) {
  FTRACE(0x123d5d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5d20 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5d21 mov ebp, esp */
  EBP = (ESP);
L_123d5d23:;
  /* 123d5d23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5d26 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5d29 jae 0x123d5d43 */
  if (!C.cf) goto L_123d5d43;
  /* 123d5d2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5d2e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5d31 je 0x123d5d38 */
  if (C.zf) goto L_123d5d38;
  /* 123d5d33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5d36 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x123d5d38u);
L_123d5d38:;
  /* 123d5d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5d3b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5d3e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123d5d41 jmp 0x123d5d23 */
  goto L_123d5d23;
L_123d5d43:;
  /* 123d5d43 pop ebp */
  EBP = (pop32());
  /* 123d5d44 ret  */
  ESPCHK(0x123d5d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d50 @ 0x123d5d50 (130 bytes, 42 insns) */
void f_123d5d50(void) {
  FTRACE(0x123d5d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5d50 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5d51 mov ebp, esp */
  EBP = (ESP);
  /* 123d5d53 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5d54 call 0x123d9d10 */
  push32(0x123d5d59u); f_123d9d10();
  /* 123d5d59 call dword ptr [0x1240534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240534c))), 0x123d5d5fu);
  /* 123d5d5f mov dword ptr [0x12400a5c], eax */
  w32((uint32_t)(0x12400a5c), (EAX));
  /* 123d5d64 cmp dword ptr [0x12400a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12400a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5d6b jne 0x123d5d71 */
  if (!C.zf) goto L_123d5d71;
  /* 123d5d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d5d6f jmp 0x123d5dce */
  goto L_123d5dce;
L_123d5d71:;
  /* 123d5d71 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 123d5d73 push 0x123fda1c */
  push32((uint32_t)(0x123fda1cu));
  /* 123d5d78 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5d7a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 123d5d7c push 1 */
  push32((uint32_t)(0x1u));
  /* 123d5d7e call 0x123d6800 */
  push32(0x123d5d83u); f_123d6800();
  /* 123d5d83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5d86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d5d89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5d8d je 0x123d5da4 */
  if (C.zf) goto L_123d5da4;
  /* 123d5d8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5d92 push eax */
  push32((uint32_t)(EAX));
  /* 123d5d93 mov ecx, dword ptr [0x12400a5c] */
  ECX = (r32((uint32_t)(0x12400a5c)));
  /* 123d5d99 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5d9a call dword ptr [0x12405348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405348))), 0x123d5da0u);
  /* 123d5da0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5da2 jne 0x123d5da8 */
  if (!C.zf) goto L_123d5da8;
L_123d5da4:;
  /* 123d5da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d5da6 jmp 0x123d5dce */
  goto L_123d5dce;
L_123d5da8:;
  /* 123d5da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5dab push edx */
  push32((uint32_t)(EDX));
  /* 123d5dac call 0x123d5e10 */
  push32(0x123d5db1u); f_123d5e10();
  /* 123d5db1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5db4 call dword ptr [0x12405344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405344))), 0x123d5dbau);
  /* 123d5dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5dbd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123d5dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5dc2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 123d5dc9 mov eax, 1 */
  EAX = (0x1u);
L_123d5dce:;
  /* 123d5dce mov esp, ebp */
  ESP = (EBP);
  /* 123d5dd0 pop ebp */
  EBP = (pop32());
  /* 123d5dd1 ret  */
  ESPCHK(0x123d5d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005de0 @ 0x123d5de0 (41 bytes, 11 insns) */
void f_123d5de0(void) {
  FTRACE(0x123d5de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5de0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5de1 mov ebp, esp */
  EBP = (ESP);
  /* 123d5de3 call 0x123d9d50 */
  push32(0x123d5de8u); f_123d9d50();
  /* 123d5de8 cmp dword ptr [0x12400a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12400a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5def je 0x123d5e07 */
  if (C.zf) goto L_123d5e07;
  /* 123d5df1 mov eax, dword ptr [0x12400a5c] */
  EAX = (r32((uint32_t)(0x12400a5c)));
  /* 123d5df6 push eax */
  push32((uint32_t)(EAX));
  /* 123d5df7 call dword ptr [0x12405350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405350))), 0x123d5dfdu);
  /* 123d5dfd mov dword ptr [0x12400a5c], 0xffffffff */
  w32((uint32_t)(0x12400a5c), (0xffffffffu));
L_123d5e07:;
  /* 123d5e07 pop ebp */
  EBP = (pop32());
  /* 123d5e08 ret  */
  ESPCHK(0x123d5de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x123d5e10 (25 bytes, 8 insns) */
void f_123d5e10(void) {
  FTRACE(0x123d5e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5e10 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5e11 mov ebp, esp */
  EBP = (ESP);
  /* 123d5e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5e16 mov dword ptr [eax + 0x50], 0x12400c00 */
  w32((uint32_t)(EAX + 0x50), (0x12400c00u));
  /* 123d5e1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5e20 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 123d5e27 pop ebp */
  EBP = (pop32());
  /* 123d5e28 ret  */
  ESPCHK(0x123d5e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x123d5e30 (152 bytes, 48 insns) */
void f_123d5e30(void) {
  FTRACE(0x123d5e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5e30 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5e31 mov ebp, esp */
  EBP = (ESP);
  /* 123d5e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d5e36 call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123d5e3cu);
  /* 123d5e3c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d5e3f mov eax, dword ptr [0x12400a5c] */
  EAX = (r32((uint32_t)(0x12400a5c)));
  /* 123d5e44 push eax */
  push32((uint32_t)(EAX));
  /* 123d5e45 call dword ptr [0x12405288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405288))), 0x123d5e4bu);
  /* 123d5e4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d5e4e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5e52 jne 0x123d5eb7 */
  if (!C.zf) goto L_123d5eb7;
  /* 123d5e54 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 123d5e59 push 0x123fda1c */
  push32((uint32_t)(0x123fda1cu));
  /* 123d5e5e push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5e60 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 123d5e62 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d5e64 call 0x123d6800 */
  push32(0x123d5e69u); f_123d6800();
  /* 123d5e69 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5e6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d5e6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5e73 je 0x123d5ead */
  if (C.zf) goto L_123d5ead;
  /* 123d5e75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5e78 push ecx */
  push32((uint32_t)(ECX));
  /* 123d5e79 mov edx, dword ptr [0x12400a5c] */
  EDX = (r32((uint32_t)(0x12400a5c)));
  /* 123d5e7f push edx */
  push32((uint32_t)(EDX));
  /* 123d5e80 call dword ptr [0x12405348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405348))), 0x123d5e86u);
  /* 123d5e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d5e88 je 0x123d5ead */
  if (C.zf) goto L_123d5ead;
  /* 123d5e8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5e8d push eax */
  push32((uint32_t)(EAX));
  /* 123d5e8e call 0x123d5e10 */
  push32(0x123d5e93u); f_123d5e10();
  /* 123d5e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d5e96 call dword ptr [0x12405344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405344))), 0x123d5e9cu);
  /* 123d5e9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5e9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123d5ea1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5ea4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 123d5eab jmp 0x123d5eb7 */
  goto L_123d5eb7;
L_123d5ead:;
  /* 123d5ead push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123d5eaf call 0x123d5360 */
  push32(0x123d5eb4u); f_123d5360();
  /* 123d5eb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5eb7:;
  /* 123d5eb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d5eba push eax */
  push32((uint32_t)(EAX));
  /* 123d5ebb call dword ptr [0x12405354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405354))), 0x123d5ec1u);
  /* 123d5ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d5ec4 mov esp, ebp */
  ESP = (EBP);
  /* 123d5ec6 pop ebp */
  EBP = (pop32());
  /* 123d5ec7 ret  */
  ESPCHK(0x123d5e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x123d5ed0 (263 bytes, 86 insns) */
void f_123d5ed0(void) {
  FTRACE(0x123d5ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5ed1 mov ebp, esp */
  EBP = (ESP);
  /* 123d5ed3 cmp dword ptr [0x12400a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12400a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5eda je 0x123d5fd5 */
  if (C.zf) goto L_123d5fd5;
  /* 123d5ee0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5ee4 jne 0x123d5ef5 */
  if (!C.zf) goto L_123d5ef5;
  /* 123d5ee6 mov eax, dword ptr [0x12400a5c] */
  EAX = (r32((uint32_t)(0x12400a5c)));
  /* 123d5eeb push eax */
  push32((uint32_t)(EAX));
  /* 123d5eec call dword ptr [0x12405288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405288))), 0x123d5ef2u);
  /* 123d5ef2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123d5ef5:;
  /* 123d5ef5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5ef9 je 0x123d5fc6 */
  if (C.zf) goto L_123d5fc6;
  /* 123d5eff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f02 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5f06 je 0x123d5f19 */
  if (C.zf) goto L_123d5f19;
  /* 123d5f08 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5f0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f0d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 123d5f10 push eax */
  push32((uint32_t)(EAX));
  /* 123d5f11 call 0x123d6e80 */
  push32(0x123d5f16u); f_123d6e80();
  /* 123d5f16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5f19:;
  /* 123d5f19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f1c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5f20 je 0x123d5f33 */
  if (C.zf) goto L_123d5f33;
  /* 123d5f22 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5f24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f27 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 123d5f2a push eax */
  push32((uint32_t)(EAX));
  /* 123d5f2b call 0x123d6e80 */
  push32(0x123d5f30u); f_123d6e80();
  /* 123d5f30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5f33:;
  /* 123d5f33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f36 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5f3a je 0x123d5f4d */
  if (C.zf) goto L_123d5f4d;
  /* 123d5f3c push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5f3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f41 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 123d5f44 push eax */
  push32((uint32_t)(EAX));
  /* 123d5f45 call 0x123d6e80 */
  push32(0x123d5f4au); f_123d6e80();
  /* 123d5f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5f4d:;
  /* 123d5f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f50 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5f54 je 0x123d5f67 */
  if (C.zf) goto L_123d5f67;
  /* 123d5f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5f58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f5b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 123d5f5e push eax */
  push32((uint32_t)(EAX));
  /* 123d5f5f call 0x123d6e80 */
  push32(0x123d5f64u); f_123d6e80();
  /* 123d5f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5f67:;
  /* 123d5f67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f6a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5f6e je 0x123d5f81 */
  if (C.zf) goto L_123d5f81;
  /* 123d5f70 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5f72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f75 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 123d5f78 push eax */
  push32((uint32_t)(EAX));
  /* 123d5f79 call 0x123d6e80 */
  push32(0x123d5f7eu); f_123d6e80();
  /* 123d5f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5f81:;
  /* 123d5f81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f84 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5f88 je 0x123d5f9b */
  if (C.zf) goto L_123d5f9b;
  /* 123d5f8a push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5f8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f8f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 123d5f92 push eax */
  push32((uint32_t)(EAX));
  /* 123d5f93 call 0x123d6e80 */
  push32(0x123d5f98u); f_123d6e80();
  /* 123d5f98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5f9b:;
  /* 123d5f9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5f9e cmp dword ptr [ecx + 0x50], 0x12400c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12400c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d5fa5 je 0x123d5fb8 */
  if (C.zf) goto L_123d5fb8;
  /* 123d5fa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5fa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5fac mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 123d5faf push eax */
  push32((uint32_t)(EAX));
  /* 123d5fb0 call 0x123d6e80 */
  push32(0x123d5fb5u); f_123d6e80();
  /* 123d5fb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5fb8:;
  /* 123d5fb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d5fba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d5fbd push ecx */
  push32((uint32_t)(ECX));
  /* 123d5fbe call 0x123d6e80 */
  push32(0x123d5fc3u); f_123d6e80();
  /* 123d5fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d5fc6:;
  /* 123d5fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d5fc8 mov edx, dword ptr [0x12400a5c] */
  EDX = (r32((uint32_t)(0x12400a5c)));
  /* 123d5fce push edx */
  push32((uint32_t)(EDX));
  /* 123d5fcf call dword ptr [0x12405348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405348))), 0x123d5fd5u);
L_123d5fd5:;
  /* 123d5fd5 pop ebp */
  EBP = (pop32());
  /* 123d5fd6 ret  */
  ESPCHK(0x123d5ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x123d5fe0 (11 bytes, 5 insns) */
void f_123d5fe0(void) {
  FTRACE(0x123d5fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5fe1 mov ebp, esp */
  EBP = (ESP);
  /* 123d5fe3 call dword ptr [0x12405344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405344))), 0x123d5fe9u);
  /* 123d5fe9 pop ebp */
  EBP = (pop32());
  /* 123d5fea ret  */
  ESPCHK(0x123d5fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x123d5ff0 (11 bytes, 5 insns) */
void f_123d5ff0(void) {
  FTRACE(0x123d5ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d5ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d5ff1 mov ebp, esp */
  EBP = (ESP);
  /* 123d5ff3 call dword ptr [0x12405360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405360))), 0x123d5ff9u);
  /* 123d5ff9 pop ebp */
  EBP = (pop32());
  /* 123d5ffa ret  */
  ESPCHK(0x123d5ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x123d6000 (804 bytes, 236 insns) */
void f_123d6000(void) {
  FTRACE(0x123d6000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6000 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6001 mov ebp, esp */
  EBP = (ESP);
  /* 123d6003 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6006 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 123d600b push 0x123fda28 */
  push32((uint32_t)(0x123fda28u));
  /* 123d6010 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6012 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 123d6017 call 0x123d63f0 */
  push32(0x123d601cu); f_123d63f0();
  /* 123d601c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d601f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 123d6022 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6026 jne 0x123d6032 */
  if (!C.zf) goto L_123d6032;
  /* 123d6028 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 123d602a call 0x123d5360 */
  push32(0x123d602fu); f_123d5360();
  /* 123d602f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d6032:;
  /* 123d6032 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6035 mov dword ptr [0x124041a0], eax */
  w32((uint32_t)(0x124041a0), (EAX));
  /* 123d603a mov dword ptr [0x124042dc], 0x20 */
  w32((uint32_t)(0x124042dc), (0x20u));
  /* 123d6044 jmp 0x123d604f */
  goto L_123d604f;
L_123d6046:;
  /* 123d6046 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6049 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d604c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_123d604f:;
  /* 123d604f mov edx, dword ptr [0x124041a0] */
  EDX = (r32((uint32_t)(0x124041a0)));
  /* 123d6055 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d605b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d605e jae 0x123d6083 */
  if (!C.cf) goto L_123d6083;
  /* 123d6060 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6063 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 123d6067 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d606a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 123d6070 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6073 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 123d6077 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d607a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 123d6081 jmp 0x123d6046 */
  goto L_123d6046;
L_123d6083:;
  /* 123d6083 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 123d6086 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6087 call dword ptr [0x1240536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240536c))), 0x123d608du);
  /* 123d608d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 123d6090 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d6096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d6098 je 0x123d6225 */
  if (C.zf) goto L_123d6225;
  /* 123d609e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d60a2 je 0x123d6225 */
  if (C.zf) goto L_123d6225;
  /* 123d60a8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d60ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d60ad mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 123d60b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d60b3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d60b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d60b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d60bc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d60bf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 123d60c2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d60c9 jge 0x123d60d3 */
  if ((C.sf==C.of)) goto L_123d60d3;
  /* 123d60cb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 123d60ce mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 123d60d1 jmp 0x123d60da */
  goto L_123d60da;
L_123d60d3:;
  /* 123d60d3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_123d60da:;
  /* 123d60da mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 123d60dd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 123d60e0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 123d60e7 jmp 0x123d60f2 */
  goto L_123d60f2;
L_123d60e9:;
  /* 123d60e9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 123d60ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d60ef mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_123d60f2:;
  /* 123d60f2 mov ecx, dword ptr [0x124042dc] */
  ECX = (r32((uint32_t)(0x124042dc)));
  /* 123d60f8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d60fb jge 0x123d6192 */
  if ((C.sf==C.of)) goto L_123d6192;
  /* 123d6101 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 123d6106 push 0x123fda28 */
  push32((uint32_t)(0x123fda28u));
  /* 123d610b push 2 */
  push32((uint32_t)(0x2u));
  /* 123d610d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 123d6112 call 0x123d63f0 */
  push32(0x123d6117u); f_123d63f0();
  /* 123d6117 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d611a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 123d611d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6121 jne 0x123d612e */
  if (!C.zf) goto L_123d612e;
  /* 123d6123 mov edx, dword ptr [0x124042dc] */
  EDX = (r32((uint32_t)(0x124042dc)));
  /* 123d6129 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 123d612c jmp 0x123d6192 */
  goto L_123d6192;
L_123d612e:;
  /* 123d612e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 123d6131 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6134 mov dword ptr [eax*4 + 0x124041a0], ecx */
  w32((uint32_t)(EAX*4 + 0x124041a0), (ECX));
  /* 123d613b mov edx, dword ptr [0x124042dc] */
  EDX = (r32((uint32_t)(0x124042dc)));
  /* 123d6141 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6144 mov dword ptr [0x124042dc], edx */
  w32((uint32_t)(0x124042dc), (EDX));
  /* 123d614a jmp 0x123d6155 */
  goto L_123d6155;
L_123d614c:;
  /* 123d614c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d614f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6152 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_123d6155:;
  /* 123d6155 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 123d6158 mov edx, dword ptr [ecx*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x124041a0)));
  /* 123d615f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6165 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6168 jae 0x123d618d */
  if (!C.cf) goto L_123d618d;
  /* 123d616a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d616d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 123d6171 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6174 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 123d617a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d617d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 123d6181 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6184 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 123d618b jmp 0x123d614c */
  goto L_123d614c;
L_123d618d:;
  /* 123d618d jmp 0x123d60e9 */
  goto L_123d60e9;
L_123d6192:;
  /* 123d6192 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 123d6199 jmp 0x123d61b6 */
  goto L_123d61b6;
L_123d619b:;
  /* 123d619b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 123d619e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d61a1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 123d61a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d61a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d61aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d61ad mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 123d61b0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d61b3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_123d61b6:;
  /* 123d61b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 123d61b9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d61bc jge 0x123d6225 */
  if ((C.sf==C.of)) goto L_123d6225;
  /* 123d61be mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 123d61c1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d61c4 je 0x123d6220 */
  if (C.zf) goto L_123d6220;
  /* 123d61c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d61c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d61cc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123d61cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d61d1 je 0x123d6220 */
  if (C.zf) goto L_123d6220;
  /* 123d61d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d61d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123d61d9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 123d61dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d61de jne 0x123d61f0 */
  if (!C.zf) goto L_123d61f0;
  /* 123d61e0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 123d61e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d61e5 push edx */
  push32((uint32_t)(EDX));
  /* 123d61e6 call dword ptr [0x12405368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405368))), 0x123d61ecu);
  /* 123d61ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d61ee je 0x123d6220 */
  if (C.zf) goto L_123d6220;
L_123d61f0:;
  /* 123d61f0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 123d61f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123d61f6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 123d61f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123d61fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d61ff mov edx, dword ptr [eax*4 + 0x124041a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123d6206 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6208 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 123d620b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d620e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 123d6211 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d6213 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123d6215 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6218 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d621b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d621d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_123d6220:;
  /* 123d6220 jmp 0x123d619b */
  goto L_123d619b;
L_123d6225:;
  /* 123d6225 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 123d622c jmp 0x123d6237 */
  goto L_123d6237;
L_123d622e:;
  /* 123d622e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 123d6231 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6234 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_123d6237:;
  /* 123d6237 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d623b jge 0x123d6314 */
  if ((C.sf==C.of)) goto L_123d6314;
  /* 123d6241 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 123d6244 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d6247 mov edx, dword ptr [0x124041a0] */
  EDX = (r32((uint32_t)(0x124041a0)));
  /* 123d624d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d624f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 123d6252 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6255 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6258 jne 0x123d6300 */
  if (!C.zf) goto L_123d6300;
  /* 123d625e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6261 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 123d6265 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6269 jne 0x123d6274 */
  if (!C.zf) goto L_123d6274;
  /* 123d626b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 123d6272 jmp 0x123d6284 */
  goto L_123d6284;
L_123d6274:;
  /* 123d6274 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 123d6277 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d627a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123d627c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d627e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6281 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_123d6284:;
  /* 123d6284 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 123d6287 push eax */
  push32((uint32_t)(EAX));
  /* 123d6288 call dword ptr [0x12405318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405318))), 0x123d628eu);
  /* 123d628e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 123d6291 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6295 je 0x123d62ef */
  if (C.zf) goto L_123d62ef;
  /* 123d6297 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123d629a push ecx */
  push32((uint32_t)(ECX));
  /* 123d629b call dword ptr [0x12405368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405368))), 0x123d62a1u);
  /* 123d62a1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 123d62a4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d62a8 je 0x123d62ef */
  if (C.zf) goto L_123d62ef;
  /* 123d62aa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d62ad mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123d62b0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123d62b2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 123d62b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d62bb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d62be jne 0x123d62d0 */
  if (!C.zf) goto L_123d62d0;
  /* 123d62c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d62c3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 123d62c6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 123d62c8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d62cb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 123d62ce jmp 0x123d62ed */
  goto L_123d62ed;
L_123d62d0:;
  /* 123d62d0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 123d62d3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d62d9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d62dc jne 0x123d62ed */
  if (!C.zf) goto L_123d62ed;
  /* 123d62de mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d62e1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123d62e4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 123d62e7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d62ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123d62ed:;
  /* 123d62ed jmp 0x123d62fe */
  goto L_123d62fe;
L_123d62ef:;
  /* 123d62ef mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d62f2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123d62f5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 123d62f8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d62fb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123d62fe:;
  /* 123d62fe jmp 0x123d630f */
  goto L_123d630f;
L_123d6300:;
  /* 123d6300 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d6303 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123d6306 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 123d6309 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d630c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123d630f:;
  /* 123d630f jmp 0x123d622e */
  goto L_123d622e;
L_123d6314:;
  /* 123d6314 mov eax, dword ptr [0x124042dc] */
  EAX = (r32((uint32_t)(0x124042dc)));
  /* 123d6319 push eax */
  push32((uint32_t)(EAX));
  /* 123d631a call dword ptr [0x12405364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405364))), 0x123d6320u);
  /* 123d6320 mov esp, ebp */
  ESP = (EBP);
  /* 123d6322 pop ebp */
  EBP = (pop32());
  /* 123d6323 ret  */
  ESPCHK(0x123d6000u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x123d6330 (155 bytes, 45 insns) */
void f_123d6330(void) {
  FTRACE(0x123d6330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6330 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6331 mov ebp, esp */
  EBP = (ESP);
  /* 123d6333 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6336 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123d633d jmp 0x123d6348 */
  goto L_123d6348;
L_123d633f:;
  /* 123d633f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6342 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6345 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123d6348:;
  /* 123d6348 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d634c jge 0x123d63c7 */
  if ((C.sf==C.of)) goto L_123d63c7;
  /* 123d634e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6351 cmp dword ptr [ecx*4 + 0x124041a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x124041a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6359 je 0x123d63c2 */
  if (C.zf) goto L_123d63c2;
  /* 123d635b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d635e mov eax, dword ptr [edx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123d6365 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d6368 jmp 0x123d6373 */
  goto L_123d6373;
L_123d636a:;
  /* 123d636a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d636d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6370 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d6373:;
  /* 123d6373 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6376 mov eax, dword ptr [edx*4 + 0x124041a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x124041a0)));
  /* 123d637d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6382 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6385 jae 0x123d639f */
  if (!C.cf) goto L_123d639f;
  /* 123d6387 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d638a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d638e je 0x123d639d */
  if (C.zf) goto L_123d639d;
  /* 123d6390 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6393 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6396 push edx */
  push32((uint32_t)(EDX));
  /* 123d6397 call dword ptr [0x12405370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405370))), 0x123d639du);
L_123d639d:;
  /* 123d639d jmp 0x123d636a */
  goto L_123d636a;
L_123d639f:;
  /* 123d639f push 2 */
  push32((uint32_t)(0x2u));
  /* 123d63a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d63a4 mov ecx, dword ptr [eax*4 + 0x124041a0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x124041a0)));
  /* 123d63ab push ecx */
  push32((uint32_t)(ECX));
  /* 123d63ac call 0x123d6e80 */
  push32(0x123d63b1u); f_123d6e80();
  /* 123d63b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d63b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d63b7 mov dword ptr [edx*4 + 0x124041a0], 0 */
  w32((uint32_t)(EDX*4 + 0x124041a0), (0x0u));
L_123d63c2:;
  /* 123d63c2 jmp 0x123d633f */
  goto L_123d633f;
L_123d63c7:;
  /* 123d63c7 mov esp, ebp */
  ESP = (EBP);
  /* 123d63c9 pop ebp */
  EBP = (pop32());
  /* 123d63ca ret  */
  ESPCHK(0x123d6330u, _esp0);
  ESP += 4; return;
}

/* FUN_100063d0 @ 0x123d63d0 (29 bytes, 13 insns) */
void f_123d63d0(void) {
  FTRACE(0x123d63d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d63d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d63d1 mov ebp, esp */
  EBP = (ESP);
  /* 123d63d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d63d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d63d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d63d9 mov eax, dword ptr [0x124029b8] */
  EAX = (r32((uint32_t)(0x124029b8)));
  /* 123d63de push eax */
  push32((uint32_t)(EAX));
  /* 123d63df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d63e2 push ecx */
  push32((uint32_t)(ECX));
  /* 123d63e3 call 0x123d6440 */
  push32(0x123d63e8u); f_123d6440();
  /* 123d63e8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d63eb pop ebp */
  EBP = (pop32());
  /* 123d63ec ret  */
  ESPCHK(0x123d63d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063f0 @ 0x123d63f0 (35 bytes, 16 insns) */
void f_123d63f0(void) {
  FTRACE(0x123d63f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d63f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d63f1 mov ebp, esp */
  EBP = (ESP);
  /* 123d63f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d63f6 push eax */
  push32((uint32_t)(EAX));
  /* 123d63f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d63fa push ecx */
  push32((uint32_t)(ECX));
  /* 123d63fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d63fe push edx */
  push32((uint32_t)(EDX));
  /* 123d63ff mov eax, dword ptr [0x124029b8] */
  EAX = (r32((uint32_t)(0x124029b8)));
  /* 123d6404 push eax */
  push32((uint32_t)(EAX));
  /* 123d6405 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6408 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6409 call 0x123d6440 */
  push32(0x123d640eu); f_123d6440();
  /* 123d640e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6411 pop ebp */
  EBP = (pop32());
  /* 123d6412 ret  */
  ESPCHK(0x123d63f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006420 @ 0x123d6420 (27 bytes, 13 insns) */
void f_123d6420(void) {
  FTRACE(0x123d6420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6420 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6421 mov ebp, esp */
  EBP = (ESP);
  /* 123d6423 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6425 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6427 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d642c push eax */
  push32((uint32_t)(EAX));
  /* 123d642d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6430 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6431 call 0x123d6440 */
  push32(0x123d6436u); f_123d6440();
  /* 123d6436 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6439 pop ebp */
  EBP = (pop32());
  /* 123d643a ret  */
  ESPCHK(0x123d6420u, _esp0);
  ESP += 4; return;
}

/* FUN_10006440 @ 0x123d6440 (94 bytes, 38 insns) */
void f_123d6440(void) {
  FTRACE(0x123d6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6440 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6441 mov ebp, esp */
  EBP = (ESP);
  /* 123d6443 push ecx */
  push32((uint32_t)(ECX));
L_123d6444:;
  /* 123d6444 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d6446 call 0x123d9df0 */
  push32(0x123d644bu); f_123d9df0();
  /* 123d644b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d644e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d6451 push eax */
  push32((uint32_t)(EAX));
  /* 123d6452 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d6455 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6456 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6459 push edx */
  push32((uint32_t)(EDX));
  /* 123d645a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d645d push eax */
  push32((uint32_t)(EAX));
  /* 123d645e call 0x123d64c0 */
  push32(0x123d6463u); f_123d64c0();
  /* 123d6463 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6466 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d6469 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d646b call 0x123d9e90 */
  push32(0x123d6470u); f_123d9e90();
  /* 123d6470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6473 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6477 jne 0x123d647f */
  if (!C.zf) goto L_123d647f;
  /* 123d6479 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d647d jne 0x123d6484 */
  if (!C.zf) goto L_123d6484;
L_123d647f:;
  /* 123d647f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6482 jmp 0x123d649a */
  goto L_123d649a;
L_123d6484:;
  /* 123d6484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6487 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6488 call 0x123da130 */
  push32(0x123d648du); f_123da130();
  /* 123d648d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6492 jne 0x123d6498 */
  if (!C.zf) goto L_123d6498;
  /* 123d6494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6496 jmp 0x123d649a */
  goto L_123d649a;
L_123d6498:;
  /* 123d6498 jmp 0x123d6444 */
  goto L_123d6444;
L_123d649a:;
  /* 123d649a mov esp, ebp */
  ESP = (EBP);
  /* 123d649c pop ebp */
  EBP = (pop32());
  /* 123d649d ret  */
  ESPCHK(0x123d6440u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x123d64a0 (23 bytes, 11 insns) */
void f_123d64a0(void) {
  FTRACE(0x123d64a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d64a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d64a1 mov ebp, esp */
  EBP = (ESP);
  /* 123d64a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d64a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d64a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d64a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d64ac push eax */
  push32((uint32_t)(EAX));
  /* 123d64ad call 0x123d64c0 */
  push32(0x123d64b2u); f_123d64c0();
  /* 123d64b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d64b5 pop ebp */
  EBP = (pop32());
  /* 123d64b6 ret  */
  ESPCHK(0x123d64a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c0 @ 0x123d64c0 (787 bytes, 254 insns) */
void f_123d64c0(void) {
  FTRACE(0x123d64c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d64c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d64c1 mov ebp, esp */
  EBP = (ESP);
  /* 123d64c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d64c6 push ebx */
  push32((uint32_t)(EBX));
  /* 123d64c7 push esi */
  push32((uint32_t)(ESI));
  /* 123d64c8 push edi */
  push32((uint32_t)(EDI));
  /* 123d64c9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123d64d0 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d64d5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123d64d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d64da je 0x123d650c */
  if (C.zf) goto L_123d650c;
L_123d64dc:;
  /* 123d64dc call 0x123d7590 */
  push32(0x123d64e1u); f_123d7590();
  /* 123d64e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d64e3 jne 0x123d6506 */
  if (!C.zf) goto L_123d6506;
  /* 123d64e5 push 0x123fdb1c */
  push32((uint32_t)(0x123fdb1cu));
  /* 123d64ea push 0 */
  push32((uint32_t)(0x0u));
  /* 123d64ec push 0x141 */
  push32((uint32_t)(0x141u));
  /* 123d64f1 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d64f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d64f8 call 0x123d54b0 */
  push32(0x123d64fdu); f_123d54b0();
  /* 123d64fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6500 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6503 jne 0x123d6506 */
  if (!C.zf) goto L_123d6506;
  /* 123d6505 int3  */
  x86_unimpl("int3 @ 0x123d6505");
L_123d6506:;
  /* 123d6506 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d6508 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d650a jne 0x123d64dc */
  if (!C.zf) goto L_123d64dc;
L_123d650c:;
  /* 123d650c mov edx, dword ptr [0x12400a88] */
  EDX = (r32((uint32_t)(0x12400a88)));
  /* 123d6512 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123d6515 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6518 cmp eax, dword ptr [0x12400a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12400a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d651e jne 0x123d6521 */
  if (!C.zf) goto L_123d6521;
  /* 123d6520 int3  */
  x86_unimpl("int3 @ 0x123d6520");
L_123d6521:;
  /* 123d6521 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d6524 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6525 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6528 push edx */
  push32((uint32_t)(EDX));
  /* 123d6529 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d652c push eax */
  push32((uint32_t)(EAX));
  /* 123d652d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6530 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6534 push edx */
  push32((uint32_t)(EDX));
  /* 123d6535 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6537 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6539 call dword ptr [0x12400c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12400c90))), 0x123d653fu);
  /* 123d653f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6544 jne 0x123d65a4 */
  if (!C.zf) goto L_123d65a4;
  /* 123d6546 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d654a je 0x123d6577 */
  if (C.zf) goto L_123d6577;
L_123d654c:;
  /* 123d654c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d654f push eax */
  push32((uint32_t)(EAX));
  /* 123d6550 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6553 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6554 push 0x123fdad8 */
  push32((uint32_t)(0x123fdad8u));
  /* 123d6559 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d655b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d655d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d655f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6561 call 0x123d54b0 */
  push32(0x123d6566u); f_123d54b0();
  /* 123d6566 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6569 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d656c jne 0x123d656f */
  if (!C.zf) goto L_123d656f;
  /* 123d656e int3  */
  x86_unimpl("int3 @ 0x123d656e");
L_123d656f:;
  /* 123d656f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d6571 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d6573 jne 0x123d654c */
  if (!C.zf) goto L_123d654c;
  /* 123d6575 jmp 0x123d659d */
  goto L_123d659d;
L_123d6577:;
  /* 123d6577 push 0x123fdab4 */
  push32((uint32_t)(0x123fdab4u));
  /* 123d657c push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d6581 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6583 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6585 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6587 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6589 call 0x123d54b0 */
  push32(0x123d658eu); f_123d54b0();
  /* 123d658e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6591 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6594 jne 0x123d6597 */
  if (!C.zf) goto L_123d6597;
  /* 123d6596 int3  */
  x86_unimpl("int3 @ 0x123d6596");
L_123d6597:;
  /* 123d6597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d659b jne 0x123d6577 */
  if (!C.zf) goto L_123d6577;
L_123d659d:;
  /* 123d659d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d659f jmp 0x123d67cc */
  goto L_123d67cc;
L_123d65a4:;
  /* 123d65a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d65a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d65ad cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d65b0 je 0x123d65c6 */
  if (C.zf) goto L_123d65c6;
  /* 123d65b2 mov edx, dword ptr [0x12400a84] */
  EDX = (r32((uint32_t)(0x12400a84)));
  /* 123d65b8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 123d65bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d65bd jne 0x123d65c6 */
  if (!C.zf) goto L_123d65c6;
  /* 123d65bf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_123d65c6:;
  /* 123d65c6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d65ca ja 0x123d65d7 */
  if ((!C.cf&&!C.zf)) goto L_123d65d7;
  /* 123d65cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d65cf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d65d2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d65d5 jbe 0x123d6603 */
  if ((C.cf||C.zf)) goto L_123d6603;
L_123d65d7:;
  /* 123d65d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d65da push ecx */
  push32((uint32_t)(ECX));
  /* 123d65db push 0x123fda8c */
  push32((uint32_t)(0x123fda8cu));
  /* 123d65e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d65e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d65e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d65e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d65e8 call 0x123d54b0 */
  push32(0x123d65edu); f_123d54b0();
  /* 123d65ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d65f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d65f3 jne 0x123d65f6 */
  if (!C.zf) goto L_123d65f6;
  /* 123d65f5 int3  */
  x86_unimpl("int3 @ 0x123d65f5");
L_123d65f6:;
  /* 123d65f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d65f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d65fa jne 0x123d65d7 */
  if (!C.zf) goto L_123d65d7;
  /* 123d65fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d65fe jmp 0x123d67cc */
  goto L_123d67cc;
L_123d6603:;
  /* 123d6603 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6606 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d660b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d660e je 0x123d6650 */
  if (C.zf) goto L_123d6650;
  /* 123d6610 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6614 je 0x123d6650 */
  if (C.zf) goto L_123d6650;
  /* 123d6616 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6619 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d661f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6622 je 0x123d6650 */
  if (C.zf) goto L_123d6650;
  /* 123d6624 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6628 je 0x123d6650 */
  if (C.zf) goto L_123d6650;
L_123d662a:;
  /* 123d662a push 0x123fda58 */
  push32((uint32_t)(0x123fda58u));
  /* 123d662f push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d6634 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6636 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6638 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d663a push 1 */
  push32((uint32_t)(0x1u));
  /* 123d663c call 0x123d54b0 */
  push32(0x123d6641u); f_123d54b0();
  /* 123d6641 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6644 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6647 jne 0x123d664a */
  if (!C.zf) goto L_123d664a;
  /* 123d6649 int3  */
  x86_unimpl("int3 @ 0x123d6649");
L_123d664a:;
  /* 123d664a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d664c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d664e jne 0x123d662a */
  if (!C.zf) goto L_123d662a;
L_123d6650:;
  /* 123d6650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6653 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6656 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123d6659 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d665c push ecx */
  push32((uint32_t)(ECX));
  /* 123d665d call 0x123da240 */
  push32(0x123d6662u); f_123da240();
  /* 123d6662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6665 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d6668 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d666c jne 0x123d6675 */
  if (!C.zf) goto L_123d6675;
  /* 123d666e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6670 jmp 0x123d67cc */
  goto L_123d67cc;
L_123d6675:;
  /* 123d6675 mov edx, dword ptr [0x12400a88] */
  EDX = (r32((uint32_t)(0x12400a88)));
  /* 123d667b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d667e mov dword ptr [0x12400a88], edx */
  w32((uint32_t)(0x12400a88), (EDX));
  /* 123d6684 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6688 je 0x123d66d3 */
  if (C.zf) goto L_123d66d3;
  /* 123d668a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d668d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123d6693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6696 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 123d669d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d66a0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 123d66a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d66aa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 123d66b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d66b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d66b7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 123d66ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d66bd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 123d66c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d66c7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 123d66ce jmp 0x123d6773 */
  goto L_123d6773;
L_123d66d3:;
  /* 123d66d3 mov edx, dword ptr [0x1240281c] */
  EDX = (r32((uint32_t)(0x1240281c)));
  /* 123d66d9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d66dc mov dword ptr [0x1240281c], edx */
  w32((uint32_t)(0x1240281c), (EDX));
  /* 123d66e2 mov eax, dword ptr [0x12402824] */
  EAX = (r32((uint32_t)(0x12402824)));
  /* 123d66e7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d66ea mov dword ptr [0x12402824], eax */
  w32((uint32_t)(0x12402824), (EAX));
  /* 123d66ef mov ecx, dword ptr [0x12402824] */
  ECX = (r32((uint32_t)(0x12402824)));
  /* 123d66f5 cmp ecx, dword ptr [0x12402828] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12402828))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d66fb jbe 0x123d6709 */
  if ((C.cf||C.zf)) goto L_123d6709;
  /* 123d66fd mov edx, dword ptr [0x12402824] */
  EDX = (r32((uint32_t)(0x12402824)));
  /* 123d6703 mov dword ptr [0x12402828], edx */
  w32((uint32_t)(0x12402828), (EDX));
L_123d6709:;
  /* 123d6709 cmp dword ptr [0x12402820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6710 je 0x123d671f */
  if (C.zf) goto L_123d671f;
  /* 123d6712 mov eax, dword ptr [0x12402820] */
  EAX = (r32((uint32_t)(0x12402820)));
  /* 123d6717 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d671a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123d671d jmp 0x123d6728 */
  goto L_123d6728;
L_123d671f:;
  /* 123d671f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6722 mov dword ptr [0x12402818], edx */
  w32((uint32_t)(0x12402818), (EDX));
L_123d6728:;
  /* 123d6728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d672b mov ecx, dword ptr [0x12402820] */
  ECX = (r32((uint32_t)(0x12402820)));
  /* 123d6731 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123d6733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6736 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 123d673d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6740 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6743 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 123d6746 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6749 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d674c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 123d674f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6752 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6755 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 123d6758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d675b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d675e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 123d6761 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6764 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6767 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 123d676a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d676d mov dword ptr [0x12402820], ecx */
  w32((uint32_t)(0x12402820), (ECX));
L_123d6773:;
  /* 123d6773 push 4 */
  push32((uint32_t)(0x4u));
  /* 123d6775 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d6777 mov dl, byte ptr [0x12400a90] */
  DL = (r8((uint32_t)(0x12400a90)));
  /* 123d677d push edx */
  push32((uint32_t)(EDX));
  /* 123d677e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6781 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6784 push eax */
  push32((uint32_t)(EAX));
  /* 123d6785 call 0x123da160 */
  push32(0x123d678au); f_123da160();
  /* 123d678a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d678d push 4 */
  push32((uint32_t)(0x4u));
  /* 123d678f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d6791 mov cl, byte ptr [0x12400a90] */
  CL = (r8((uint32_t)(0x12400a90)));
  /* 123d6797 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d679b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d679e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 123d67a2 push ecx */
  push32((uint32_t)(ECX));
  /* 123d67a3 call 0x123da160 */
  push32(0x123d67a8u); f_123da160();
  /* 123d67a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d67ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d67ae push edx */
  push32((uint32_t)(EDX));
  /* 123d67af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d67b1 mov al, byte ptr [0x12400a92] */
  AL = (r8((uint32_t)(0x12400a92)));
  /* 123d67b6 push eax */
  push32((uint32_t)(EAX));
  /* 123d67b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d67ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d67bd push ecx */
  push32((uint32_t)(ECX));
  /* 123d67be call 0x123da160 */
  push32(0x123d67c3u); f_123da160();
  /* 123d67c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d67c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d67c9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_123d67cc:;
  /* 123d67cc pop edi */
  EDI = (pop32());
  /* 123d67cd pop esi */
  ESI = (pop32());
  /* 123d67ce pop ebx */
  EBX = (pop32());
  /* 123d67cf mov esp, ebp */
  ESP = (EBP);
  /* 123d67d1 pop ebp */
  EBP = (pop32());
  /* 123d67d2 ret  */
  ESPCHK(0x123d64c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067e0 @ 0x123d67e0 (27 bytes, 13 insns) */
void f_123d67e0(void) {
  FTRACE(0x123d67e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d67e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d67e1 mov ebp, esp */
  EBP = (ESP);
  /* 123d67e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d67e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d67e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d67e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d67ec push eax */
  push32((uint32_t)(EAX));
  /* 123d67ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d67f0 push ecx */
  push32((uint32_t)(ECX));
  /* 123d67f1 call 0x123d6800 */
  push32(0x123d67f6u); f_123d6800();
  /* 123d67f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d67f9 pop ebp */
  EBP = (pop32());
  /* 123d67fa ret  */
  ESPCHK(0x123d67e0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x123d6800 (96 bytes, 37 insns) */
void f_123d6800(void) {
  FTRACE(0x123d6800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6800 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6801 mov ebp, esp */
  EBP = (ESP);
  /* 123d6803 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6806 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6809 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d680d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 123d6810 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d6813 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6814 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d6817 push edx */
  push32((uint32_t)(EDX));
  /* 123d6818 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d681b push eax */
  push32((uint32_t)(EAX));
  /* 123d681c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d681f push ecx */
  push32((uint32_t)(ECX));
  /* 123d6820 call 0x123d63f0 */
  push32(0x123d6825u); f_123d63f0();
  /* 123d6825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6828 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d682b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d682f je 0x123d6859 */
  if (C.zf) goto L_123d6859;
  /* 123d6831 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6834 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123d6837 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d683a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d683d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d6840:;
  /* 123d6840 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6843 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6846 jae 0x123d6859 */
  if (!C.cf) goto L_123d6859;
  /* 123d6848 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d684b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123d684e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6851 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6854 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d6857 jmp 0x123d6840 */
  goto L_123d6840;
L_123d6859:;
  /* 123d6859 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d685c mov esp, ebp */
  ESP = (EBP);
  /* 123d685e pop ebp */
  EBP = (pop32());
  /* 123d685f ret  */
  ESPCHK(0x123d6800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x123d6860 (27 bytes, 13 insns) */
void f_123d6860(void) {
  FTRACE(0x123d6860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6860 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6861 mov ebp, esp */
  EBP = (ESP);
  /* 123d6863 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6865 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6867 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6869 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d686c push eax */
  push32((uint32_t)(EAX));
  /* 123d686d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6870 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6871 call 0x123d6880 */
  push32(0x123d6876u); f_123d6880();
  /* 123d6876 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6879 pop ebp */
  EBP = (pop32());
  /* 123d687a ret  */
  ESPCHK(0x123d6860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x123d6880 (64 bytes, 27 insns) */
void f_123d6880(void) {
  FTRACE(0x123d6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6880 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6881 mov ebp, esp */
  EBP = (ESP);
  /* 123d6883 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6884 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d6886 call 0x123d9df0 */
  push32(0x123d688bu); f_123d9df0();
  /* 123d688b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d688e push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6890 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d6893 push eax */
  push32((uint32_t)(EAX));
  /* 123d6894 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d6897 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6898 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d689b push edx */
  push32((uint32_t)(EDX));
  /* 123d689c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d689f push eax */
  push32((uint32_t)(EAX));
  /* 123d68a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d68a3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d68a4 call 0x123d68c0 */
  push32(0x123d68a9u); f_123d68c0();
  /* 123d68a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d68ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d68af push 9 */
  push32((uint32_t)(0x9u));
  /* 123d68b1 call 0x123d9e90 */
  push32(0x123d68b6u); f_123d9e90();
  /* 123d68b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d68b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d68bc mov esp, ebp */
  ESP = (EBP);
  /* 123d68be pop ebp */
  EBP = (pop32());
  /* 123d68bf ret  */
  ESPCHK(0x123d6880u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x123d68c0 (1297 bytes, 431 insns) */
void f_123d68c0(void) {
  FTRACE(0x123d68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d68c1 mov ebp, esp */
  EBP = (ESP);
  /* 123d68c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d68c6 push ebx */
  push32((uint32_t)(EBX));
  /* 123d68c7 push esi */
  push32((uint32_t)(ESI));
  /* 123d68c8 push edi */
  push32((uint32_t)(EDI));
  /* 123d68c9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 123d68d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d68d4 jne 0x123d68f3 */
  if (!C.zf) goto L_123d68f3;
  /* 123d68d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d68d9 push eax */
  push32((uint32_t)(EAX));
  /* 123d68da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d68dd push ecx */
  push32((uint32_t)(ECX));
  /* 123d68de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d68e1 push edx */
  push32((uint32_t)(EDX));
  /* 123d68e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d68e5 push eax */
  push32((uint32_t)(EAX));
  /* 123d68e6 call 0x123d63f0 */
  push32(0x123d68ebu); f_123d63f0();
  /* 123d68eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d68ee jmp 0x123d6dca */
  goto L_123d6dca;
L_123d68f3:;
  /* 123d68f3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d68f7 je 0x123d6916 */
  if (C.zf) goto L_123d6916;
  /* 123d68f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d68fd jne 0x123d6916 */
  if (!C.zf) goto L_123d6916;
  /* 123d68ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6902 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6903 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6906 push edx */
  push32((uint32_t)(EDX));
  /* 123d6907 call 0x123d6e80 */
  push32(0x123d690cu); f_123d6e80();
  /* 123d690c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d690f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6911 jmp 0x123d6dca */
  goto L_123d6dca;
L_123d6916:;
  /* 123d6916 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d691b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123d691e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6920 je 0x123d6952 */
  if (C.zf) goto L_123d6952;
L_123d6922:;
  /* 123d6922 call 0x123d7590 */
  push32(0x123d6927u); f_123d7590();
  /* 123d6927 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6929 jne 0x123d694c */
  if (!C.zf) goto L_123d694c;
  /* 123d692b push 0x123fdb1c */
  push32((uint32_t)(0x123fdb1cu));
  /* 123d6930 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6932 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 123d6937 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d693c push 2 */
  push32((uint32_t)(0x2u));
  /* 123d693e call 0x123d54b0 */
  push32(0x123d6943u); f_123d54b0();
  /* 123d6943 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6946 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6949 jne 0x123d694c */
  if (!C.zf) goto L_123d694c;
  /* 123d694b int3  */
  x86_unimpl("int3 @ 0x123d694b");
L_123d694c:;
  /* 123d694c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d694e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d6950 jne 0x123d6922 */
  if (!C.zf) goto L_123d6922;
L_123d6952:;
  /* 123d6952 mov edx, dword ptr [0x12400a88] */
  EDX = (r32((uint32_t)(0x12400a88)));
  /* 123d6958 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123d695b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d695e cmp eax, dword ptr [0x12400a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12400a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6964 jne 0x123d6967 */
  if (!C.zf) goto L_123d6967;
  /* 123d6966 int3  */
  x86_unimpl("int3 @ 0x123d6966");
L_123d6967:;
  /* 123d6967 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d696a push ecx */
  push32((uint32_t)(ECX));
  /* 123d696b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d696e push edx */
  push32((uint32_t)(EDX));
  /* 123d696f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d6972 push eax */
  push32((uint32_t)(EAX));
  /* 123d6973 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6976 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6977 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d697a push edx */
  push32((uint32_t)(EDX));
  /* 123d697b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d697e push eax */
  push32((uint32_t)(EAX));
  /* 123d697f push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6981 call dword ptr [0x12400c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12400c90))), 0x123d6987u);
  /* 123d6987 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d698a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d698c jne 0x123d69ec */
  if (!C.zf) goto L_123d69ec;
  /* 123d698e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6992 je 0x123d69bf */
  if (C.zf) goto L_123d69bf;
L_123d6994:;
  /* 123d6994 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d6997 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6998 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d699b push edx */
  push32((uint32_t)(EDX));
  /* 123d699c push 0x123fdc98 */
  push32((uint32_t)(0x123fdc98u));
  /* 123d69a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69a9 call 0x123d54b0 */
  push32(0x123d69aeu); f_123d54b0();
  /* 123d69ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d69b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d69b4 jne 0x123d69b7 */
  if (!C.zf) goto L_123d69b7;
  /* 123d69b6 int3  */
  x86_unimpl("int3 @ 0x123d69b6");
L_123d69b7:;
  /* 123d69b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d69b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d69bb jne 0x123d6994 */
  if (!C.zf) goto L_123d6994;
  /* 123d69bd jmp 0x123d69e5 */
  goto L_123d69e5;
L_123d69bf:;
  /* 123d69bf push 0x123fdc74 */
  push32((uint32_t)(0x123fdc74u));
  /* 123d69c4 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d69c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69cb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69cd push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69cf push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69d1 call 0x123d54b0 */
  push32(0x123d69d6u); f_123d54b0();
  /* 123d69d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d69d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d69dc jne 0x123d69df */
  if (!C.zf) goto L_123d69df;
  /* 123d69de int3  */
  x86_unimpl("int3 @ 0x123d69de");
L_123d69df:;
  /* 123d69df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d69e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d69e3 jne 0x123d69bf */
  if (!C.zf) goto L_123d69bf;
L_123d69e5:;
  /* 123d69e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d69e7 jmp 0x123d6dca */
  goto L_123d6dca;
L_123d69ec:;
  /* 123d69ec cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d69f0 jbe 0x123d6a1e */
  if ((C.cf||C.zf)) goto L_123d6a1e;
L_123d69f2:;
  /* 123d69f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d69f5 push edx */
  push32((uint32_t)(EDX));
  /* 123d69f6 push 0x123fdc44 */
  push32((uint32_t)(0x123fdc44u));
  /* 123d69fb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69fd push 0 */
  push32((uint32_t)(0x0u));
  /* 123d69ff push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6a01 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6a03 call 0x123d54b0 */
  push32(0x123d6a08u); f_123d54b0();
  /* 123d6a08 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6a0b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6a0e jne 0x123d6a11 */
  if (!C.zf) goto L_123d6a11;
  /* 123d6a10 int3  */
  x86_unimpl("int3 @ 0x123d6a10");
L_123d6a11:;
  /* 123d6a11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6a15 jne 0x123d69f2 */
  if (!C.zf) goto L_123d69f2;
  /* 123d6a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6a19 jmp 0x123d6dca */
  goto L_123d6dca;
L_123d6a1e:;
  /* 123d6a1e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6a22 je 0x123d6a66 */
  if (C.zf) goto L_123d6a66;
  /* 123d6a24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6a27 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d6a2d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6a30 je 0x123d6a66 */
  if (C.zf) goto L_123d6a66;
  /* 123d6a32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6a35 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d6a3b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6a3e je 0x123d6a66 */
  if (C.zf) goto L_123d6a66;
L_123d6a40:;
  /* 123d6a40 push 0x123fda58 */
  push32((uint32_t)(0x123fda58u));
  /* 123d6a45 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d6a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6a50 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6a52 call 0x123d54b0 */
  push32(0x123d6a57u); f_123d54b0();
  /* 123d6a57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6a5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6a5d jne 0x123d6a60 */
  if (!C.zf) goto L_123d6a60;
  /* 123d6a5f int3  */
  x86_unimpl("int3 @ 0x123d6a5f");
L_123d6a60:;
  /* 123d6a60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6a64 jne 0x123d6a40 */
  if (!C.zf) goto L_123d6a40;
L_123d6a66:;
  /* 123d6a66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6a69 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6a6a call 0x123d79f0 */
  push32(0x123d6a6fu); f_123d79f0();
  /* 123d6a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6a74 jne 0x123d6a97 */
  if (!C.zf) goto L_123d6a97;
  /* 123d6a76 push 0x123fdc20 */
  push32((uint32_t)(0x123fdc20u));
  /* 123d6a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6a7d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 123d6a82 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6a89 call 0x123d54b0 */
  push32(0x123d6a8eu); f_123d54b0();
  /* 123d6a8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6a91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6a94 jne 0x123d6a97 */
  if (!C.zf) goto L_123d6a97;
  /* 123d6a96 int3  */
  x86_unimpl("int3 @ 0x123d6a96");
L_123d6a97:;
  /* 123d6a97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d6a99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d6a9b jne 0x123d6a66 */
  if (!C.zf) goto L_123d6a66;
  /* 123d6a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6aa0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6aa3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d6aa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6aa9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6aad jne 0x123d6ab6 */
  if (!C.zf) goto L_123d6ab6;
  /* 123d6aaf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_123d6ab6:;
  /* 123d6ab6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6aba je 0x123d6afa */
  if (C.zf) goto L_123d6afa;
L_123d6abc:;
  /* 123d6abc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6abf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6ac6 jne 0x123d6ad1 */
  if (!C.zf) goto L_123d6ad1;
  /* 123d6ac8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6acb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6acf je 0x123d6af2 */
  if (C.zf) goto L_123d6af2;
L_123d6ad1:;
  /* 123d6ad1 push 0x123fdbd8 */
  push32((uint32_t)(0x123fdbd8u));
  /* 123d6ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6ad8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 123d6add push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6ae4 call 0x123d54b0 */
  push32(0x123d6ae9u); f_123d54b0();
  /* 123d6ae9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6aec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6aef jne 0x123d6af2 */
  if (!C.zf) goto L_123d6af2;
  /* 123d6af1 int3  */
  x86_unimpl("int3 @ 0x123d6af1");
L_123d6af2:;
  /* 123d6af2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d6af4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d6af6 jne 0x123d6abc */
  if (!C.zf) goto L_123d6abc;
  /* 123d6af8 jmp 0x123d6b5e */
  goto L_123d6b5e;
L_123d6afa:;
  /* 123d6afa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6afd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d6b00 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d6b05 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6b08 jne 0x123d6b1f */
  if (!C.zf) goto L_123d6b1f;
  /* 123d6b0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6b0d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d6b13 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6b16 jne 0x123d6b1f */
  if (!C.zf) goto L_123d6b1f;
  /* 123d6b18 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_123d6b1f:;
  /* 123d6b1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6b22 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d6b25 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d6b2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6b2d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d6b33 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6b35 je 0x123d6b58 */
  if (C.zf) goto L_123d6b58;
  /* 123d6b37 push 0x123fdb9c */
  push32((uint32_t)(0x123fdb9cu));
  /* 123d6b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6b3e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 123d6b43 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6b4a call 0x123d54b0 */
  push32(0x123d6b4fu); f_123d54b0();
  /* 123d6b4f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6b52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6b55 jne 0x123d6b58 */
  if (!C.zf) goto L_123d6b58;
  /* 123d6b57 int3  */
  x86_unimpl("int3 @ 0x123d6b57");
L_123d6b58:;
  /* 123d6b58 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d6b5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d6b5c jne 0x123d6b1f */
  if (!C.zf) goto L_123d6b1f;
L_123d6b5e:;
  /* 123d6b5e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6b62 je 0x123d6b89 */
  if (C.zf) goto L_123d6b89;
  /* 123d6b64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6b67 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6b6a push eax */
  push32((uint32_t)(EAX));
  /* 123d6b6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6b6e push ecx */
  push32((uint32_t)(ECX));
  /* 123d6b6f call 0x123da370 */
  push32(0x123d6b74u); f_123da370();
  /* 123d6b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6b77 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d6b7a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6b7e jne 0x123d6b87 */
  if (!C.zf) goto L_123d6b87;
  /* 123d6b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6b82 jmp 0x123d6dca */
  goto L_123d6dca;
L_123d6b87:;
  /* 123d6b87 jmp 0x123d6bac */
  goto L_123d6bac;
L_123d6b89:;
  /* 123d6b89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6b8c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6b8f push edx */
  push32((uint32_t)(EDX));
  /* 123d6b90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d6b93 push eax */
  push32((uint32_t)(EAX));
  /* 123d6b94 call 0x123da2c0 */
  push32(0x123d6b99u); f_123da2c0();
  /* 123d6b99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6b9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d6b9f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6ba3 jne 0x123d6bac */
  if (!C.zf) goto L_123d6bac;
  /* 123d6ba5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6ba7 jmp 0x123d6dca */
  goto L_123d6dca;
L_123d6bac:;
  /* 123d6bac mov ecx, dword ptr [0x12400a88] */
  ECX = (r32((uint32_t)(0x12400a88)));
  /* 123d6bb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6bb5 mov dword ptr [0x12400a88], ecx */
  w32((uint32_t)(0x12400a88), (ECX));
  /* 123d6bbb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6bbf jne 0x123d6c17 */
  if (!C.zf) goto L_123d6c17;
  /* 123d6bc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6bc4 mov eax, dword ptr [0x1240281c] */
  EAX = (r32((uint32_t)(0x1240281c)));
  /* 123d6bc9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6bcc mov dword ptr [0x1240281c], eax */
  w32((uint32_t)(0x1240281c), (EAX));
  /* 123d6bd1 mov ecx, dword ptr [0x1240281c] */
  ECX = (r32((uint32_t)(0x1240281c)));
  /* 123d6bd7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6bda mov dword ptr [0x1240281c], ecx */
  w32((uint32_t)(0x1240281c), (ECX));
  /* 123d6be0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6be3 mov eax, dword ptr [0x12402824] */
  EAX = (r32((uint32_t)(0x12402824)));
  /* 123d6be8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6beb mov dword ptr [0x12402824], eax */
  w32((uint32_t)(0x12402824), (EAX));
  /* 123d6bf0 mov ecx, dword ptr [0x12402824] */
  ECX = (r32((uint32_t)(0x12402824)));
  /* 123d6bf6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6bf9 mov dword ptr [0x12402824], ecx */
  w32((uint32_t)(0x12402824), (ECX));
  /* 123d6bff mov edx, dword ptr [0x12402824] */
  EDX = (r32((uint32_t)(0x12402824)));
  /* 123d6c05 cmp edx, dword ptr [0x12402828] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12402828))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6c0b jbe 0x123d6c17 */
  if ((C.cf||C.zf)) goto L_123d6c17;
  /* 123d6c0d mov eax, dword ptr [0x12402824] */
  EAX = (r32((uint32_t)(0x12402824)));
  /* 123d6c12 mov dword ptr [0x12402828], eax */
  w32((uint32_t)(0x12402828), (EAX));
L_123d6c17:;
  /* 123d6c17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c1a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6c1d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d6c20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6c26 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6c29 jbe 0x123d6c4f */
  if ((C.cf||C.zf)) goto L_123d6c4f;
  /* 123d6c2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6c31 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6c34 push edx */
  push32((uint32_t)(EDX));
  /* 123d6c35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6c37 mov al, byte ptr [0x12400a92] */
  AL = (r8((uint32_t)(0x12400a92)));
  /* 123d6c3c push eax */
  push32((uint32_t)(EAX));
  /* 123d6c3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6c43 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6c46 push edx */
  push32((uint32_t)(EDX));
  /* 123d6c47 call 0x123da160 */
  push32(0x123d6c4cu); f_123da160();
  /* 123d6c4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d6c4f:;
  /* 123d6c4f push 4 */
  push32((uint32_t)(0x4u));
  /* 123d6c51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6c53 mov al, byte ptr [0x12400a90] */
  AL = (r8((uint32_t)(0x12400a90)));
  /* 123d6c58 push eax */
  push32((uint32_t)(EAX));
  /* 123d6c59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6c5c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6c5f push ecx */
  push32((uint32_t)(ECX));
  /* 123d6c60 call 0x123da160 */
  push32(0x123d6c65u); f_123da160();
  /* 123d6c65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6c68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6c6c jne 0x123d6c89 */
  if (!C.zf) goto L_123d6c89;
  /* 123d6c6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c71 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d6c74 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123d6c77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c7a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d6c7d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 123d6c80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c83 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d6c86 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_123d6c89:;
  /* 123d6c89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6c8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6c8f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_123d6c92:;
  /* 123d6c92 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6c96 jne 0x123d6cc7 */
  if (!C.zf) goto L_123d6cc7;
  /* 123d6c98 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6c9c jne 0x123d6ca6 */
  if (!C.zf) goto L_123d6ca6;
  /* 123d6c9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6ca1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6ca4 je 0x123d6cc7 */
  if (C.zf) goto L_123d6cc7;
L_123d6ca6:;
  /* 123d6ca6 push 0x123fdb68 */
  push32((uint32_t)(0x123fdb68u));
  /* 123d6cab push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6cad push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 123d6cb2 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6cb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6cb9 call 0x123d54b0 */
  push32(0x123d6cbeu); f_123d54b0();
  /* 123d6cbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6cc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6cc4 jne 0x123d6cc7 */
  if (!C.zf) goto L_123d6cc7;
  /* 123d6cc6 int3  */
  x86_unimpl("int3 @ 0x123d6cc6");
L_123d6cc7:;
  /* 123d6cc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d6cc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d6ccb jne 0x123d6c92 */
  if (!C.zf) goto L_123d6c92;
  /* 123d6ccd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6cd0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6cd3 je 0x123d6cdb */
  if (C.zf) goto L_123d6cdb;
  /* 123d6cd5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6cd9 je 0x123d6ce3 */
  if (C.zf) goto L_123d6ce3;
L_123d6cdb:;
  /* 123d6cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6cde jmp 0x123d6dca */
  goto L_123d6dca;
L_123d6ce3:;
  /* 123d6ce3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6ce6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6ce9 je 0x123d6cfb */
  if (C.zf) goto L_123d6cfb;
  /* 123d6ceb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6cee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d6cf0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6cf3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123d6cf6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123d6cf9 jmp 0x123d6d37 */
  goto L_123d6d37;
L_123d6cfb:;
  /* 123d6cfb mov eax, dword ptr [0x12402818] */
  EAX = (r32((uint32_t)(0x12402818)));
  /* 123d6d00 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6d03 je 0x123d6d26 */
  if (C.zf) goto L_123d6d26;
  /* 123d6d05 push 0x123fdb4c */
  push32((uint32_t)(0x123fdb4cu));
  /* 123d6d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6d0c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 123d6d11 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6d18 call 0x123d54b0 */
  push32(0x123d6d1du); f_123d54b0();
  /* 123d6d1d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6d23 jne 0x123d6d26 */
  if (!C.zf) goto L_123d6d26;
  /* 123d6d25 int3  */
  x86_unimpl("int3 @ 0x123d6d25");
L_123d6d26:;
  /* 123d6d26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d6d28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d6d2a jne 0x123d6cfb */
  if (!C.zf) goto L_123d6cfb;
  /* 123d6d2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6d2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123d6d32 mov dword ptr [0x12402818], eax */
  w32((uint32_t)(0x12402818), (EAX));
L_123d6d37:;
  /* 123d6d37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6d3a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6d3e je 0x123d6d4f */
  if (C.zf) goto L_123d6d4f;
  /* 123d6d40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6d43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123d6d46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6d49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d6d4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123d6d4d jmp 0x123d6d8a */
  goto L_123d6d8a;
L_123d6d4f:;
  /* 123d6d4f mov eax, dword ptr [0x12402820] */
  EAX = (r32((uint32_t)(0x12402820)));
  /* 123d6d54 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6d57 je 0x123d6d7a */
  if (C.zf) goto L_123d6d7a;
  /* 123d6d59 push 0x123fdb30 */
  push32((uint32_t)(0x123fdb30u));
  /* 123d6d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6d60 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 123d6d65 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6d6a push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6d6c call 0x123d54b0 */
  push32(0x123d6d71u); f_123d54b0();
  /* 123d6d71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6d74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6d77 jne 0x123d6d7a */
  if (!C.zf) goto L_123d6d7a;
  /* 123d6d79 int3  */
  x86_unimpl("int3 @ 0x123d6d79");
L_123d6d7a:;
  /* 123d6d7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d6d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d6d7e jne 0x123d6d4f */
  if (!C.zf) goto L_123d6d4f;
  /* 123d6d80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6d83 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d6d85 mov dword ptr [0x12402820], eax */
  w32((uint32_t)(0x12402820), (EAX));
L_123d6d8a:;
  /* 123d6d8a cmp dword ptr [0x12402820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6d91 je 0x123d6da1 */
  if (C.zf) goto L_123d6da1;
  /* 123d6d93 mov ecx, dword ptr [0x12402820] */
  ECX = (r32((uint32_t)(0x12402820)));
  /* 123d6d99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6d9c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 123d6d9f jmp 0x123d6da9 */
  goto L_123d6da9;
L_123d6da1:;
  /* 123d6da1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6da4 mov dword ptr [0x12402818], eax */
  w32((uint32_t)(0x12402818), (EAX));
L_123d6da9:;
  /* 123d6da9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6dac mov edx, dword ptr [0x12402820] */
  EDX = (r32((uint32_t)(0x12402820)));
  /* 123d6db2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123d6db4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6db7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 123d6dbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d6dc1 mov dword ptr [0x12402820], ecx */
  w32((uint32_t)(0x12402820), (ECX));
  /* 123d6dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123d6dca:;
  /* 123d6dca pop edi */
  EDI = (pop32());
  /* 123d6dcb pop esi */
  ESI = (pop32());
  /* 123d6dcc pop ebx */
  EBX = (pop32());
  /* 123d6dcd mov esp, ebp */
  ESP = (EBP);
  /* 123d6dcf pop ebp */
  EBP = (pop32());
  /* 123d6dd0 ret  */
  ESPCHK(0x123d68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x123d6de0 (27 bytes, 13 insns) */
void f_123d6de0(void) {
  FTRACE(0x123d6de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6de0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6de1 mov ebp, esp */
  EBP = (ESP);
  /* 123d6de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6de7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6de9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6dec push eax */
  push32((uint32_t)(EAX));
  /* 123d6ded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6df0 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6df1 call 0x123d6e00 */
  push32(0x123d6df6u); f_123d6e00();
  /* 123d6df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6df9 pop ebp */
  EBP = (pop32());
  /* 123d6dfa ret  */
  ESPCHK(0x123d6de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e00 @ 0x123d6e00 (64 bytes, 27 insns) */
void f_123d6e00(void) {
  FTRACE(0x123d6e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6e00 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6e01 mov ebp, esp */
  EBP = (ESP);
  /* 123d6e03 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6e04 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d6e06 call 0x123d9df0 */
  push32(0x123d6e0bu); f_123d9df0();
  /* 123d6e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6e10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d6e13 push eax */
  push32((uint32_t)(EAX));
  /* 123d6e14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d6e17 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6e18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d6e1b push edx */
  push32((uint32_t)(EDX));
  /* 123d6e1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6e1f push eax */
  push32((uint32_t)(EAX));
  /* 123d6e20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6e23 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6e24 call 0x123d68c0 */
  push32(0x123d6e29u); f_123d68c0();
  /* 123d6e29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d6e2f push 9 */
  push32((uint32_t)(0x9u));
  /* 123d6e31 call 0x123d9e90 */
  push32(0x123d6e36u); f_123d9e90();
  /* 123d6e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6e39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6e3c mov esp, ebp */
  ESP = (EBP);
  /* 123d6e3e pop ebp */
  EBP = (pop32());
  /* 123d6e3f ret  */
  ESPCHK(0x123d6e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e40 @ 0x123d6e40 (19 bytes, 9 insns) */
void f_123d6e40(void) {
  FTRACE(0x123d6e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6e40 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6e41 mov ebp, esp */
  EBP = (ESP);
  /* 123d6e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6e45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6e48 push eax */
  push32((uint32_t)(EAX));
  /* 123d6e49 call 0x123d6e80 */
  push32(0x123d6e4eu); f_123d6e80();
  /* 123d6e4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6e51 pop ebp */
  EBP = (pop32());
  /* 123d6e52 ret  */
  ESPCHK(0x123d6e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x123d6e60 (19 bytes, 9 insns) */
void f_123d6e60(void) {
  FTRACE(0x123d6e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6e60 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6e61 mov ebp, esp */
  EBP = (ESP);
  /* 123d6e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d6e65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6e68 push eax */
  push32((uint32_t)(EAX));
  /* 123d6e69 call 0x123d6eb0 */
  push32(0x123d6e6eu); f_123d6eb0();
  /* 123d6e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6e71 pop ebp */
  EBP = (pop32());
  /* 123d6e72 ret  */
  ESPCHK(0x123d6e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e80 @ 0x123d6e80 (41 bytes, 16 insns) */
void f_123d6e80(void) {
  FTRACE(0x123d6e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6e80 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6e81 mov ebp, esp */
  EBP = (ESP);
  /* 123d6e83 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d6e85 call 0x123d9df0 */
  push32(0x123d6e8au); f_123d9df0();
  /* 123d6e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6e8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6e90 push eax */
  push32((uint32_t)(EAX));
  /* 123d6e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6e94 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6e95 call 0x123d6eb0 */
  push32(0x123d6e9au); f_123d6eb0();
  /* 123d6e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6e9d push 9 */
  push32((uint32_t)(0x9u));
  /* 123d6e9f call 0x123d9e90 */
  push32(0x123d6ea4u); f_123d9e90();
  /* 123d6ea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6ea7 pop ebp */
  EBP = (pop32());
  /* 123d6ea8 ret  */
  ESPCHK(0x123d6e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x123d6eb0 (1004 bytes, 342 insns) */
void f_123d6eb0(void) {
  FTRACE(0x123d6eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d6eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d6eb1 mov ebp, esp */
  EBP = (ESP);
  /* 123d6eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6eb4 push ebx */
  push32((uint32_t)(EBX));
  /* 123d6eb5 push esi */
  push32((uint32_t)(ESI));
  /* 123d6eb6 push edi */
  push32((uint32_t)(EDI));
  /* 123d6eb7 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d6ebc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123d6ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6ec1 je 0x123d6ef3 */
  if (C.zf) goto L_123d6ef3;
L_123d6ec3:;
  /* 123d6ec3 call 0x123d7590 */
  push32(0x123d6ec8u); f_123d7590();
  /* 123d6ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6eca jne 0x123d6eed */
  if (!C.zf) goto L_123d6eed;
  /* 123d6ecc push 0x123fdb1c */
  push32((uint32_t)(0x123fdb1cu));
  /* 123d6ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6ed3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 123d6ed8 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6edd push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6edf call 0x123d54b0 */
  push32(0x123d6ee4u); f_123d54b0();
  /* 123d6ee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6eea jne 0x123d6eed */
  if (!C.zf) goto L_123d6eed;
  /* 123d6eec int3  */
  x86_unimpl("int3 @ 0x123d6eec");
L_123d6eed:;
  /* 123d6eed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d6eef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d6ef1 jne 0x123d6ec3 */
  if (!C.zf) goto L_123d6ec3;
L_123d6ef3:;
  /* 123d6ef3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6ef7 jne 0x123d6efe */
  if (!C.zf) goto L_123d6efe;
  /* 123d6ef9 jmp 0x123d7295 */
  goto L_123d7295;
L_123d6efe:;
  /* 123d6efe push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d6f07 push edx */
  push32((uint32_t)(EDX));
  /* 123d6f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6f0d push eax */
  push32((uint32_t)(EAX));
  /* 123d6f0e push 3 */
  push32((uint32_t)(0x3u));
  /* 123d6f10 call dword ptr [0x12400c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12400c90))), 0x123d6f16u);
  /* 123d6f16 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6f1b jne 0x123d6f48 */
  if (!C.zf) goto L_123d6f48;
L_123d6f1d:;
  /* 123d6f1d push 0x123fdde0 */
  push32((uint32_t)(0x123fdde0u));
  /* 123d6f22 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d6f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f2f call 0x123d54b0 */
  push32(0x123d6f34u); f_123d54b0();
  /* 123d6f34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6f37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6f3a jne 0x123d6f3d */
  if (!C.zf) goto L_123d6f3d;
  /* 123d6f3c int3  */
  x86_unimpl("int3 @ 0x123d6f3c");
L_123d6f3d:;
  /* 123d6f3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d6f3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d6f41 jne 0x123d6f1d */
  if (!C.zf) goto L_123d6f1d;
  /* 123d6f43 jmp 0x123d7295 */
  goto L_123d7295;
L_123d6f48:;
  /* 123d6f48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6f4b push edx */
  push32((uint32_t)(EDX));
  /* 123d6f4c call 0x123d79f0 */
  push32(0x123d6f51u); f_123d79f0();
  /* 123d6f51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6f54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6f56 jne 0x123d6f79 */
  if (!C.zf) goto L_123d6f79;
  /* 123d6f58 push 0x123fdc20 */
  push32((uint32_t)(0x123fdc20u));
  /* 123d6f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6f5f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 123d6f64 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6f6b call 0x123d54b0 */
  push32(0x123d6f70u); f_123d54b0();
  /* 123d6f70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6f73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6f76 jne 0x123d6f79 */
  if (!C.zf) goto L_123d6f79;
  /* 123d6f78 int3  */
  x86_unimpl("int3 @ 0x123d6f78");
L_123d6f79:;
  /* 123d6f79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d6f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6f7d jne 0x123d6f48 */
  if (!C.zf) goto L_123d6f48;
  /* 123d6f7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d6f82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d6f85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d6f88:;
  /* 123d6f88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6f8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d6f8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d6f93 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6f96 je 0x123d6fdb */
  if (C.zf) goto L_123d6fdb;
  /* 123d6f98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6f9b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6f9f je 0x123d6fdb */
  if (C.zf) goto L_123d6fdb;
  /* 123d6fa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6fa4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d6fa7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d6fac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6faf je 0x123d6fdb */
  if (C.zf) goto L_123d6fdb;
  /* 123d6fb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6fb4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6fb8 je 0x123d6fdb */
  if (C.zf) goto L_123d6fdb;
  /* 123d6fba push 0x123fddb8 */
  push32((uint32_t)(0x123fddb8u));
  /* 123d6fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 123d6fc1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 123d6fc6 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d6fcb push 2 */
  push32((uint32_t)(0x2u));
  /* 123d6fcd call 0x123d54b0 */
  push32(0x123d6fd2u); f_123d54b0();
  /* 123d6fd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d6fd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d6fd8 jne 0x123d6fdb */
  if (!C.zf) goto L_123d6fdb;
  /* 123d6fda int3  */
  x86_unimpl("int3 @ 0x123d6fda");
L_123d6fdb:;
  /* 123d6fdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d6fdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d6fdf jne 0x123d6f88 */
  if (!C.zf) goto L_123d6f88;
  /* 123d6fe1 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d6fe6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123d6fe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d6feb jne 0x123d70b6 */
  if (!C.zf) goto L_123d70b6;
  /* 123d6ff1 push 4 */
  push32((uint32_t)(0x4u));
  /* 123d6ff3 mov cl, byte ptr [0x12400a90] */
  CL = (r8((uint32_t)(0x12400a90)));
  /* 123d6ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 123d6ffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d6ffd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7000 push edx */
  push32((uint32_t)(EDX));
  /* 123d7001 call 0x123d7500 */
  push32(0x123d7006u); f_123d7500();
  /* 123d7006 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7009 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d700b jne 0x123d7050 */
  if (!C.zf) goto L_123d7050;
L_123d700d:;
  /* 123d700d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7010 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7013 push eax */
  push32((uint32_t)(EAX));
  /* 123d7014 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7017 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123d701a push edx */
  push32((uint32_t)(EDX));
  /* 123d701b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d701e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123d7021 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d7027 mov edx, dword ptr [ecx*4 + 0x12400a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a94)));
  /* 123d702e push edx */
  push32((uint32_t)(EDX));
  /* 123d702f push 0x123fdd8c */
  push32((uint32_t)(0x123fdd8cu));
  /* 123d7034 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7036 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7038 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d703a push 1 */
  push32((uint32_t)(0x1u));
  /* 123d703c call 0x123d54b0 */
  push32(0x123d7041u); f_123d54b0();
  /* 123d7041 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7044 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7047 jne 0x123d704a */
  if (!C.zf) goto L_123d704a;
  /* 123d7049 int3  */
  x86_unimpl("int3 @ 0x123d7049");
L_123d704a:;
  /* 123d704a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d704c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d704e jne 0x123d700d */
  if (!C.zf) goto L_123d700d;
L_123d7050:;
  /* 123d7050 push 4 */
  push32((uint32_t)(0x4u));
  /* 123d7052 mov cl, byte ptr [0x12400a90] */
  CL = (r8((uint32_t)(0x12400a90)));
  /* 123d7058 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7059 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d705c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d705f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7062 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 123d7066 push edx */
  push32((uint32_t)(EDX));
  /* 123d7067 call 0x123d7500 */
  push32(0x123d706cu); f_123d7500();
  /* 123d706c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d706f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7071 jne 0x123d70b6 */
  if (!C.zf) goto L_123d70b6;
L_123d7073:;
  /* 123d7073 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7076 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7079 push eax */
  push32((uint32_t)(EAX));
  /* 123d707a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d707d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123d7080 push edx */
  push32((uint32_t)(EDX));
  /* 123d7081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7084 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123d7087 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d708d mov edx, dword ptr [ecx*4 + 0x12400a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a94)));
  /* 123d7094 push edx */
  push32((uint32_t)(EDX));
  /* 123d7095 push 0x123fdd60 */
  push32((uint32_t)(0x123fdd60u));
  /* 123d709a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d709c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d709e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d70a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d70a2 call 0x123d54b0 */
  push32(0x123d70a7u); f_123d54b0();
  /* 123d70a7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d70aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d70ad jne 0x123d70b0 */
  if (!C.zf) goto L_123d70b0;
  /* 123d70af int3  */
  x86_unimpl("int3 @ 0x123d70af");
L_123d70b0:;
  /* 123d70b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d70b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d70b4 jne 0x123d7073 */
  if (!C.zf) goto L_123d7073;
L_123d70b6:;
  /* 123d70b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d70b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d70bd jne 0x123d712b */
  if (!C.zf) goto L_123d712b;
L_123d70bf:;
  /* 123d70bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d70c2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d70c9 jne 0x123d70d4 */
  if (!C.zf) goto L_123d70d4;
  /* 123d70cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d70ce cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d70d2 je 0x123d70f5 */
  if (C.zf) goto L_123d70f5;
L_123d70d4:;
  /* 123d70d4 push 0x123fdd20 */
  push32((uint32_t)(0x123fdd20u));
  /* 123d70d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d70db push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 123d70e0 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d70e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d70e7 call 0x123d54b0 */
  push32(0x123d70ecu); f_123d54b0();
  /* 123d70ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d70ef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d70f2 jne 0x123d70f5 */
  if (!C.zf) goto L_123d70f5;
  /* 123d70f4 int3  */
  x86_unimpl("int3 @ 0x123d70f4");
L_123d70f5:;
  /* 123d70f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d70f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d70f9 jne 0x123d70bf */
  if (!C.zf) goto L_123d70bf;
  /* 123d70fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d70fe mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d7101 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7104 push eax */
  push32((uint32_t)(EAX));
  /* 123d7105 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d7107 mov cl, byte ptr [0x12400a91] */
  CL = (r8((uint32_t)(0x12400a91)));
  /* 123d710d push ecx */
  push32((uint32_t)(ECX));
  /* 123d710e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7111 push edx */
  push32((uint32_t)(EDX));
  /* 123d7112 call 0x123da160 */
  push32(0x123d7117u); f_123da160();
  /* 123d7117 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d711a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d711d push eax */
  push32((uint32_t)(EAX));
  /* 123d711e call 0x123da560 */
  push32(0x123d7123u); f_123da560();
  /* 123d7123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7126 jmp 0x123d7295 */
  goto L_123d7295;
L_123d712b:;
  /* 123d712b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d712e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7132 jne 0x123d7141 */
  if (!C.zf) goto L_123d7141;
  /* 123d7134 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7138 jne 0x123d7141 */
  if (!C.zf) goto L_123d7141;
  /* 123d713a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_123d7141:;
  /* 123d7141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7144 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7147 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d714a je 0x123d716d */
  if (C.zf) goto L_123d716d;
  /* 123d714c push 0x123fdd00 */
  push32((uint32_t)(0x123fdd00u));
  /* 123d7151 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7153 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 123d7158 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d715d push 2 */
  push32((uint32_t)(0x2u));
  /* 123d715f call 0x123d54b0 */
  push32(0x123d7164u); f_123d54b0();
  /* 123d7164 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7167 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d716a jne 0x123d716d */
  if (!C.zf) goto L_123d716d;
  /* 123d716c int3  */
  x86_unimpl("int3 @ 0x123d716c");
L_123d716d:;
  /* 123d716d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d716f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7171 jne 0x123d7141 */
  if (!C.zf) goto L_123d7141;
  /* 123d7173 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7176 mov eax, dword ptr [0x12402824] */
  EAX = (r32((uint32_t)(0x12402824)));
  /* 123d717b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d717e mov dword ptr [0x12402824], eax */
  w32((uint32_t)(0x12402824), (EAX));
  /* 123d7183 mov ecx, dword ptr [0x12400a84] */
  ECX = (r32((uint32_t)(0x12400a84)));
  /* 123d7189 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 123d718c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d718e jne 0x123d726c */
  if (!C.zf) goto L_123d726c;
  /* 123d7194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7197 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d719a je 0x123d71ac */
  if (C.zf) goto L_123d71ac;
  /* 123d719c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d719f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d71a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d71a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123d71a7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123d71aa jmp 0x123d71ea */
  goto L_123d71ea;
L_123d71ac:;
  /* 123d71ac mov ecx, dword ptr [0x12402818] */
  ECX = (r32((uint32_t)(0x12402818)));
  /* 123d71b2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d71b5 je 0x123d71d8 */
  if (C.zf) goto L_123d71d8;
  /* 123d71b7 push 0x123fdce8 */
  push32((uint32_t)(0x123fdce8u));
  /* 123d71bc push 0 */
  push32((uint32_t)(0x0u));
  /* 123d71be push 0x42a */
  push32((uint32_t)(0x42au));
  /* 123d71c3 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d71c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d71ca call 0x123d54b0 */
  push32(0x123d71cfu); f_123d54b0();
  /* 123d71cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d71d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d71d5 jne 0x123d71d8 */
  if (!C.zf) goto L_123d71d8;
  /* 123d71d7 int3  */
  x86_unimpl("int3 @ 0x123d71d7");
L_123d71d8:;
  /* 123d71d8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d71da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d71dc jne 0x123d71ac */
  if (!C.zf) goto L_123d71ac;
  /* 123d71de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d71e1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123d71e4 mov dword ptr [0x12402818], ecx */
  w32((uint32_t)(0x12402818), (ECX));
L_123d71ea:;
  /* 123d71ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d71ed cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d71f1 je 0x123d7202 */
  if (C.zf) goto L_123d7202;
  /* 123d71f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d71f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123d71f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d71fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d71fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123d7200 jmp 0x123d723f */
  goto L_123d723f;
L_123d7202:;
  /* 123d7202 mov ecx, dword ptr [0x12402820] */
  ECX = (r32((uint32_t)(0x12402820)));
  /* 123d7208 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d720b je 0x123d722e */
  if (C.zf) goto L_123d722e;
  /* 123d720d push 0x123fdcd0 */
  push32((uint32_t)(0x123fdcd0u));
  /* 123d7212 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7214 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 123d7219 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d721e push 2 */
  push32((uint32_t)(0x2u));
  /* 123d7220 call 0x123d54b0 */
  push32(0x123d7225u); f_123d54b0();
  /* 123d7225 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d722b jne 0x123d722e */
  if (!C.zf) goto L_123d722e;
  /* 123d722d int3  */
  x86_unimpl("int3 @ 0x123d722d");
L_123d722e:;
  /* 123d722e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d7230 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d7232 jne 0x123d7202 */
  if (!C.zf) goto L_123d7202;
  /* 123d7234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7237 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d7239 mov dword ptr [0x12402820], ecx */
  w32((uint32_t)(0x12402820), (ECX));
L_123d723f:;
  /* 123d723f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7242 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d7245 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7248 push eax */
  push32((uint32_t)(EAX));
  /* 123d7249 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d724b mov cl, byte ptr [0x12400a91] */
  CL = (r8((uint32_t)(0x12400a91)));
  /* 123d7251 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7255 push edx */
  push32((uint32_t)(EDX));
  /* 123d7256 call 0x123da160 */
  push32(0x123d725bu); f_123da160();
  /* 123d725b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d725e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7261 push eax */
  push32((uint32_t)(EAX));
  /* 123d7262 call 0x123da560 */
  push32(0x123d7267u); f_123da560();
  /* 123d7267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d726a jmp 0x123d7295 */
  goto L_123d7295;
L_123d726c:;
  /* 123d726c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d726f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 123d7276 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7279 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d727c push eax */
  push32((uint32_t)(EAX));
  /* 123d727d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d727f mov cl, byte ptr [0x12400a91] */
  CL = (r8((uint32_t)(0x12400a91)));
  /* 123d7285 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7289 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d728c push edx */
  push32((uint32_t)(EDX));
  /* 123d728d call 0x123da160 */
  push32(0x123d7292u); f_123da160();
  /* 123d7292 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d7295:;
  /* 123d7295 pop edi */
  EDI = (pop32());
  /* 123d7296 pop esi */
  ESI = (pop32());
  /* 123d7297 pop ebx */
  EBX = (pop32());
  /* 123d7298 mov esp, ebp */
  ESP = (EBP);
  /* 123d729a pop ebp */
  EBP = (pop32());
  /* 123d729b ret  */
  ESPCHK(0x123d6eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072a0 @ 0x123d72a0 (19 bytes, 9 insns) */
void f_123d72a0(void) {
  FTRACE(0x123d72a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d72a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d72a1 mov ebp, esp */
  EBP = (ESP);
  /* 123d72a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d72a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d72a8 push eax */
  push32((uint32_t)(EAX));
  /* 123d72a9 call 0x123d72c0 */
  push32(0x123d72aeu); f_123d72c0();
  /* 123d72ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d72b1 pop ebp */
  EBP = (pop32());
  /* 123d72b2 ret  */
  ESPCHK(0x123d72a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072c0 @ 0x123d72c0 (342 bytes, 119 insns) */
void f_123d72c0(void) {
  FTRACE(0x123d72c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d72c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d72c1 mov ebp, esp */
  EBP = (ESP);
  /* 123d72c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d72c6 push ebx */
  push32((uint32_t)(EBX));
  /* 123d72c7 push esi */
  push32((uint32_t)(ESI));
  /* 123d72c8 push edi */
  push32((uint32_t)(EDI));
  /* 123d72c9 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d72ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123d72d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d72d3 je 0x123d7305 */
  if (C.zf) goto L_123d7305;
L_123d72d5:;
  /* 123d72d5 call 0x123d7590 */
  push32(0x123d72dau); f_123d7590();
  /* 123d72da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d72dc jne 0x123d72ff */
  if (!C.zf) goto L_123d72ff;
  /* 123d72de push 0x123fdb1c */
  push32((uint32_t)(0x123fdb1cu));
  /* 123d72e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d72e5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 123d72ea push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d72ef push 2 */
  push32((uint32_t)(0x2u));
  /* 123d72f1 call 0x123d54b0 */
  push32(0x123d72f6u); f_123d54b0();
  /* 123d72f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d72f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d72fc jne 0x123d72ff */
  if (!C.zf) goto L_123d72ff;
  /* 123d72fe int3  */
  x86_unimpl("int3 @ 0x123d72fe");
L_123d72ff:;
  /* 123d72ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d7301 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7303 jne 0x123d72d5 */
  if (!C.zf) goto L_123d72d5;
L_123d7305:;
  /* 123d7305 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7307 call 0x123d9df0 */
  push32(0x123d730cu); f_123d9df0();
  /* 123d730c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d730f:;
  /* 123d730f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7312 push edx */
  push32((uint32_t)(EDX));
  /* 123d7313 call 0x123d79f0 */
  push32(0x123d7318u); f_123d79f0();
  /* 123d7318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d731b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d731d jne 0x123d7340 */
  if (!C.zf) goto L_123d7340;
  /* 123d731f push 0x123fdc20 */
  push32((uint32_t)(0x123fdc20u));
  /* 123d7324 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7326 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 123d732b push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d7330 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d7332 call 0x123d54b0 */
  push32(0x123d7337u); f_123d54b0();
  /* 123d7337 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d733a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d733d jne 0x123d7340 */
  if (!C.zf) goto L_123d7340;
  /* 123d733f int3  */
  x86_unimpl("int3 @ 0x123d733f");
L_123d7340:;
  /* 123d7340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7344 jne 0x123d730f */
  if (!C.zf) goto L_123d730f;
  /* 123d7346 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7349 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d734c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123d734f:;
  /* 123d734f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7352 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7355 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d735a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d735d je 0x123d73a2 */
  if (C.zf) goto L_123d73a2;
  /* 123d735f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7362 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7366 je 0x123d73a2 */
  if (C.zf) goto L_123d73a2;
  /* 123d7368 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d736b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d736e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7373 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7376 je 0x123d73a2 */
  if (C.zf) goto L_123d73a2;
  /* 123d7378 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d737b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d737f je 0x123d73a2 */
  if (C.zf) goto L_123d73a2;
  /* 123d7381 push 0x123fddb8 */
  push32((uint32_t)(0x123fddb8u));
  /* 123d7386 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7388 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 123d738d push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d7392 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d7394 call 0x123d54b0 */
  push32(0x123d7399u); f_123d54b0();
  /* 123d7399 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d739c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d739f jne 0x123d73a2 */
  if (!C.zf) goto L_123d73a2;
  /* 123d73a1 int3  */
  x86_unimpl("int3 @ 0x123d73a1");
L_123d73a2:;
  /* 123d73a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d73a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d73a6 jne 0x123d734f */
  if (!C.zf) goto L_123d734f;
  /* 123d73a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d73ab cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d73af jne 0x123d73be */
  if (!C.zf) goto L_123d73be;
  /* 123d73b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d73b5 jne 0x123d73be */
  if (!C.zf) goto L_123d73be;
  /* 123d73b7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_123d73be:;
  /* 123d73be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d73c1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d73c5 je 0x123d73f9 */
  if (C.zf) goto L_123d73f9;
L_123d73c7:;
  /* 123d73c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d73ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d73cd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d73d0 je 0x123d73f3 */
  if (C.zf) goto L_123d73f3;
  /* 123d73d2 push 0x123fdd00 */
  push32((uint32_t)(0x123fdd00u));
  /* 123d73d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d73d9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 123d73de push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d73e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d73e5 call 0x123d54b0 */
  push32(0x123d73eau); f_123d54b0();
  /* 123d73ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d73ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d73f0 jne 0x123d73f3 */
  if (!C.zf) goto L_123d73f3;
  /* 123d73f2 int3  */
  x86_unimpl("int3 @ 0x123d73f2");
L_123d73f3:;
  /* 123d73f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d73f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d73f7 jne 0x123d73c7 */
  if (!C.zf) goto L_123d73c7;
L_123d73f9:;
  /* 123d73f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d73fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d73ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d7402 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7404 call 0x123d9e90 */
  push32(0x123d7409u); f_123d9e90();
  /* 123d7409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d740c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d740f pop edi */
  EDI = (pop32());
  /* 123d7410 pop esi */
  ESI = (pop32());
  /* 123d7411 pop ebx */
  EBX = (pop32());
  /* 123d7412 mov esp, ebp */
  ESP = (EBP);
  /* 123d7414 pop ebp */
  EBP = (pop32());
  /* 123d7415 ret  */
  ESPCHK(0x123d72c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x123d7420 (28 bytes, 11 insns) */
void f_123d7420(void) {
  FTRACE(0x123d7420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7420 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7421 mov ebp, esp */
  EBP = (ESP);
  /* 123d7423 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7424 mov eax, dword ptr [0x12400a8c] */
  EAX = (r32((uint32_t)(0x12400a8c)));
  /* 123d7429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d742c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d742f mov dword ptr [0x12400a8c], ecx */
  w32((uint32_t)(0x12400a8c), (ECX));
  /* 123d7435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7438 mov esp, ebp */
  ESP = (EBP);
  /* 123d743a pop ebp */
  EBP = (pop32());
  /* 123d743b ret  */
  ESPCHK(0x123d7420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007440 @ 0x123d7440 (157 bytes, 59 insns) */
void f_123d7440(void) {
  FTRACE(0x123d7440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7440 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7441 mov ebp, esp */
  EBP = (ESP);
  /* 123d7443 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7444 push ebx */
  push32((uint32_t)(EBX));
  /* 123d7445 push esi */
  push32((uint32_t)(ESI));
  /* 123d7446 push edi */
  push32((uint32_t)(EDI));
  /* 123d7447 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7449 call 0x123d9df0 */
  push32(0x123d744eu); f_123d9df0();
  /* 123d744e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7451 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7454 push eax */
  push32((uint32_t)(EAX));
  /* 123d7455 call 0x123d79f0 */
  push32(0x123d745au); f_123d79f0();
  /* 123d745a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d745d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d745f je 0x123d74cc */
  if (C.zf) goto L_123d74cc;
  /* 123d7461 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7464 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7467 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d746a:;
  /* 123d746a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d746d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7470 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7475 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7478 je 0x123d74bd */
  if (C.zf) goto L_123d74bd;
  /* 123d747a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d747d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7481 je 0x123d74bd */
  if (C.zf) goto L_123d74bd;
  /* 123d7483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7486 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7489 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d748e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7491 je 0x123d74bd */
  if (C.zf) goto L_123d74bd;
  /* 123d7493 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7496 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d749a je 0x123d74bd */
  if (C.zf) goto L_123d74bd;
  /* 123d749c push 0x123fddb8 */
  push32((uint32_t)(0x123fddb8u));
  /* 123d74a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d74a3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 123d74a8 push 0x123fdb10 */
  push32((uint32_t)(0x123fdb10u));
  /* 123d74ad push 2 */
  push32((uint32_t)(0x2u));
  /* 123d74af call 0x123d54b0 */
  push32(0x123d74b4u); f_123d54b0();
  /* 123d74b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d74b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d74ba jne 0x123d74bd */
  if (!C.zf) goto L_123d74bd;
  /* 123d74bc int3  */
  x86_unimpl("int3 @ 0x123d74bc");
L_123d74bd:;
  /* 123d74bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d74bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d74c1 jne 0x123d746a */
  if (!C.zf) goto L_123d746a;
  /* 123d74c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d74c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d74c9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_123d74cc:;
  /* 123d74cc push 9 */
  push32((uint32_t)(0x9u));
  /* 123d74ce call 0x123d9e90 */
  push32(0x123d74d3u); f_123d9e90();
  /* 123d74d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d74d6 pop edi */
  EDI = (pop32());
  /* 123d74d7 pop esi */
  ESI = (pop32());
  /* 123d74d8 pop ebx */
  EBX = (pop32());
  /* 123d74d9 mov esp, ebp */
  ESP = (EBP);
  /* 123d74db pop ebp */
  EBP = (pop32());
  /* 123d74dc ret  */
  ESPCHK(0x123d7440u, _esp0);
  ESP += 4; return;
}

/* FUN_100074e0 @ 0x123d74e0 (28 bytes, 11 insns) */
void f_123d74e0(void) {
  FTRACE(0x123d74e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d74e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d74e1 mov ebp, esp */
  EBP = (ESP);
  /* 123d74e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d74e4 mov eax, dword ptr [0x12400c90] */
  EAX = (r32((uint32_t)(0x12400c90)));
  /* 123d74e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d74ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d74ef mov dword ptr [0x12400c90], ecx */
  w32((uint32_t)(0x12400c90), (ECX));
  /* 123d74f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d74f8 mov esp, ebp */
  ESP = (EBP);
  /* 123d74fa pop ebp */
  EBP = (pop32());
  /* 123d74fb ret  */
  ESPCHK(0x123d74e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x123d7500 (136 bytes, 55 insns) */
void f_123d7500(void) {
  FTRACE(0x123d7500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7500 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7501 mov ebp, esp */
  EBP = (ESP);
  /* 123d7503 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7504 push ebx */
  push32((uint32_t)(EBX));
  /* 123d7505 push esi */
  push32((uint32_t)(ESI));
  /* 123d7506 push edi */
  push32((uint32_t)(EDI));
  /* 123d7507 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_123d750e:;
  /* 123d750e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d7511 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d7514 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7517 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123d751a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d751c je 0x123d757e */
  if (C.zf) goto L_123d757e;
  /* 123d751e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7521 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7523 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123d7525 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d7528 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d752e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7531 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7534 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123d7537 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7539 je 0x123d757c */
  if (C.zf) goto L_123d757c;
L_123d753b:;
  /* 123d753b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d753e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7543 push eax */
  push32((uint32_t)(EAX));
  /* 123d7544 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7547 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d7549 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 123d754c push edx */
  push32((uint32_t)(EDX));
  /* 123d754d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7550 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7553 push eax */
  push32((uint32_t)(EAX));
  /* 123d7554 push 0x123fddfc */
  push32((uint32_t)(0x123fddfcu));
  /* 123d7559 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d755b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d755d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d755f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7561 call 0x123d54b0 */
  push32(0x123d7566u); f_123d54b0();
  /* 123d7566 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7569 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d756c jne 0x123d756f */
  if (!C.zf) goto L_123d756f;
  /* 123d756e int3  */
  x86_unimpl("int3 @ 0x123d756e");
L_123d756f:;
  /* 123d756f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d7571 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7573 jne 0x123d753b */
  if (!C.zf) goto L_123d753b;
  /* 123d7575 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123d757c:;
  /* 123d757c jmp 0x123d750e */
  goto L_123d750e;
L_123d757e:;
  /* 123d757e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7581 pop edi */
  EDI = (pop32());
  /* 123d7582 pop esi */
  ESI = (pop32());
  /* 123d7583 pop ebx */
  EBX = (pop32());
  /* 123d7584 mov esp, ebp */
  ESP = (EBP);
  /* 123d7586 pop ebp */
  EBP = (pop32());
  /* 123d7587 ret  */
  ESPCHK(0x123d7500u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x123d7590 (863 bytes, 299 insns) [1 switch table(s)] */
void f_123d7590(void) {
  FTRACE(0x123d7590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7590 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7591 mov ebp, esp */
  EBP = (ESP);
  /* 123d7593 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7596 push ebx */
  push32((uint32_t)(EBX));
  /* 123d7597 push esi */
  push32((uint32_t)(ESI));
  /* 123d7598 push edi */
  push32((uint32_t)(EDI));
  /* 123d7599 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123d75a0 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d75a5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 123d75a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d75aa jne 0x123d75b6 */
  if (!C.zf) goto L_123d75b6;
  /* 123d75ac mov eax, 1 */
  EAX = (0x1u);
  /* 123d75b1 jmp 0x123d78e8 */
  goto L_123d78e8;
L_123d75b6:;
  /* 123d75b6 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d75b8 call 0x123d9df0 */
  push32(0x123d75bdu); f_123d9df0();
  /* 123d75bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d75c0 call 0x123da5d0 */
  push32(0x123d75c5u); f_123da5d0();
  /* 123d75c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d75c8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d75cc je 0x123d76d9 */
  if (C.zf) goto L_123d76d9;
  /* 123d75d2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d75d6 je 0x123d76d9 */
  if (C.zf) goto L_123d76d9;
  /* 123d75dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d75df mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123d75e2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d75e5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d75e8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123d75eb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d75ef ja 0x123d76a2 */
  if ((!C.cf&&!C.zf)) goto L_123d76a2;
  /* 123d75f5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d75f8 jmp dword ptr [eax*4 + 0x123d78ef] */
  switch (EAX) {
    case 0: goto L_123d767a;
    case 1: goto L_123d7652;
    case 2: goto L_123d762a;
    case 3: goto L_123d75ff;
    default: x86_unimpl("switch@0x123d75f8 out of table"); return;
  }
L_123d75ff:;
  /* 123d75ff push 0x123fdf50 */
  push32((uint32_t)(0x123fdf50u));
  /* 123d7604 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d7609 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d760b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d760d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d760f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7611 call 0x123d54b0 */
  push32(0x123d7616u); f_123d54b0();
  /* 123d7616 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7619 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d761c jne 0x123d761f */
  if (!C.zf) goto L_123d761f;
  /* 123d761e int3  */
  x86_unimpl("int3 @ 0x123d761e");
L_123d761f:;
  /* 123d761f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d7621 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7623 jne 0x123d75ff */
  if (!C.zf) goto L_123d75ff;
  /* 123d7625 jmp 0x123d76c8 */
  goto L_123d76c8;
L_123d762a:;
  /* 123d762a push 0x123fdf2c */
  push32((uint32_t)(0x123fdf2cu));
  /* 123d762f push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d7634 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7636 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7638 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d763a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d763c call 0x123d54b0 */
  push32(0x123d7641u); f_123d54b0();
  /* 123d7641 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7644 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7647 jne 0x123d764a */
  if (!C.zf) goto L_123d764a;
  /* 123d7649 int3  */
  x86_unimpl("int3 @ 0x123d7649");
L_123d764a:;
  /* 123d764a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d764c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d764e jne 0x123d762a */
  if (!C.zf) goto L_123d762a;
  /* 123d7650 jmp 0x123d76c8 */
  goto L_123d76c8;
L_123d7652:;
  /* 123d7652 push 0x123fdf08 */
  push32((uint32_t)(0x123fdf08u));
  /* 123d7657 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d765c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d765e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7660 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7662 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7664 call 0x123d54b0 */
  push32(0x123d7669u); f_123d54b0();
  /* 123d7669 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d766c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d766f jne 0x123d7672 */
  if (!C.zf) goto L_123d7672;
  /* 123d7671 int3  */
  x86_unimpl("int3 @ 0x123d7671");
L_123d7672:;
  /* 123d7672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7676 jne 0x123d7652 */
  if (!C.zf) goto L_123d7652;
  /* 123d7678 jmp 0x123d76c8 */
  goto L_123d76c8;
L_123d767a:;
  /* 123d767a push 0x123fdee4 */
  push32((uint32_t)(0x123fdee4u));
  /* 123d767f push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d7684 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7686 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7688 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d768a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d768c call 0x123d54b0 */
  push32(0x123d7691u); f_123d54b0();
  /* 123d7691 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7694 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7697 jne 0x123d769a */
  if (!C.zf) goto L_123d769a;
  /* 123d7699 int3  */
  x86_unimpl("int3 @ 0x123d7699");
L_123d769a:;
  /* 123d769a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d769c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d769e jne 0x123d767a */
  if (!C.zf) goto L_123d767a;
  /* 123d76a0 jmp 0x123d76c8 */
  goto L_123d76c8;
L_123d76a2:;
  /* 123d76a2 push 0x123fdeb8 */
  push32((uint32_t)(0x123fdeb8u));
  /* 123d76a7 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d76ac push 0 */
  push32((uint32_t)(0x0u));
  /* 123d76ae push 0 */
  push32((uint32_t)(0x0u));
  /* 123d76b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d76b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d76b4 call 0x123d54b0 */
  push32(0x123d76b9u); f_123d54b0();
  /* 123d76b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d76bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d76bf jne 0x123d76c2 */
  if (!C.zf) goto L_123d76c2;
  /* 123d76c1 int3  */
  x86_unimpl("int3 @ 0x123d76c1");
L_123d76c2:;
  /* 123d76c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d76c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d76c6 jne 0x123d76a2 */
  if (!C.zf) goto L_123d76a2;
L_123d76c8:;
  /* 123d76c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d76ca call 0x123d9e90 */
  push32(0x123d76cfu); f_123d9e90();
  /* 123d76cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d76d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d76d4 jmp 0x123d78e8 */
  goto L_123d78e8;
L_123d76d9:;
  /* 123d76d9 mov eax, dword ptr [0x12402820] */
  EAX = (r32((uint32_t)(0x12402820)));
  /* 123d76de mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d76e1 jmp 0x123d76eb */
  goto L_123d76eb;
L_123d76e3:;
  /* 123d76e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d76e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d76e8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123d76eb:;
  /* 123d76eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d76ef je 0x123d78db */
  if (C.zf) goto L_123d78db;
  /* 123d76f5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 123d76fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d76ff mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123d7702 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d7708 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d770b je 0x123d7730 */
  if (C.zf) goto L_123d7730;
  /* 123d770d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7710 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7714 je 0x123d7730 */
  if (C.zf) goto L_123d7730;
  /* 123d7716 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7719 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123d771c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d7722 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7725 je 0x123d7730 */
  if (C.zf) goto L_123d7730;
  /* 123d7727 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d772a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d772e jne 0x123d7748 */
  if (!C.zf) goto L_123d7748;
L_123d7730:;
  /* 123d7730 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7733 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123d7736 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d773c mov edx, dword ptr [ecx*4 + 0x12400a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a94)));
  /* 123d7743 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123d7746 jmp 0x123d774f */
  goto L_123d774f;
L_123d7748:;
  /* 123d7748 mov dword ptr [ebp - 0x14], 0x123fdeb0 */
  w32((uint32_t)(EBP + -0x14), (0x123fdeb0u));
L_123d774f:;
  /* 123d774f push 4 */
  push32((uint32_t)(0x4u));
  /* 123d7751 mov al, byte ptr [0x12400a90] */
  AL = (r8((uint32_t)(0x12400a90)));
  /* 123d7756 push eax */
  push32((uint32_t)(EAX));
  /* 123d7757 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d775a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d775d push ecx */
  push32((uint32_t)(ECX));
  /* 123d775e call 0x123d7500 */
  push32(0x123d7763u); f_123d7500();
  /* 123d7763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7768 jne 0x123d77a4 */
  if (!C.zf) goto L_123d77a4;
L_123d776a:;
  /* 123d776a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d776d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7770 push edx */
  push32((uint32_t)(EDX));
  /* 123d7771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7774 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123d7777 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7778 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d777b push edx */
  push32((uint32_t)(EDX));
  /* 123d777c push 0x123fdd8c */
  push32((uint32_t)(0x123fdd8cu));
  /* 123d7781 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7783 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7785 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7787 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7789 call 0x123d54b0 */
  push32(0x123d778eu); f_123d54b0();
  /* 123d778e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7791 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7794 jne 0x123d7797 */
  if (!C.zf) goto L_123d7797;
  /* 123d7796 int3  */
  x86_unimpl("int3 @ 0x123d7796");
L_123d7797:;
  /* 123d7797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7799 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d779b jne 0x123d776a */
  if (!C.zf) goto L_123d776a;
  /* 123d779d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123d77a4:;
  /* 123d77a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 123d77a6 mov cl, byte ptr [0x12400a90] */
  CL = (r8((uint32_t)(0x12400a90)));
  /* 123d77ac push ecx */
  push32((uint32_t)(ECX));
  /* 123d77ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d77b0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d77b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d77b6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 123d77ba push edx */
  push32((uint32_t)(EDX));
  /* 123d77bb call 0x123d7500 */
  push32(0x123d77c0u); f_123d7500();
  /* 123d77c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d77c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d77c5 jne 0x123d7801 */
  if (!C.zf) goto L_123d7801;
L_123d77c7:;
  /* 123d77c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d77ca add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d77cd push eax */
  push32((uint32_t)(EAX));
  /* 123d77ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d77d1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123d77d4 push edx */
  push32((uint32_t)(EDX));
  /* 123d77d5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d77d8 push eax */
  push32((uint32_t)(EAX));
  /* 123d77d9 push 0x123fdd60 */
  push32((uint32_t)(0x123fdd60u));
  /* 123d77de push 0 */
  push32((uint32_t)(0x0u));
  /* 123d77e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d77e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d77e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d77e6 call 0x123d54b0 */
  push32(0x123d77ebu); f_123d54b0();
  /* 123d77eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d77ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d77f1 jne 0x123d77f4 */
  if (!C.zf) goto L_123d77f4;
  /* 123d77f3 int3  */
  x86_unimpl("int3 @ 0x123d77f3");
L_123d77f4:;
  /* 123d77f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d77f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d77f8 jne 0x123d77c7 */
  if (!C.zf) goto L_123d77c7;
  /* 123d77fa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123d7801:;
  /* 123d7801 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7804 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7808 jne 0x123d785a */
  if (!C.zf) goto L_123d785a;
  /* 123d780a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d780d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123d7810 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7811 mov dl, byte ptr [0x12400a91] */
  DL = (r8((uint32_t)(0x12400a91)));
  /* 123d7817 push edx */
  push32((uint32_t)(EDX));
  /* 123d7818 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d781b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d781e push eax */
  push32((uint32_t)(EAX));
  /* 123d781f call 0x123d7500 */
  push32(0x123d7824u); f_123d7500();
  /* 123d7824 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7829 jne 0x123d785a */
  if (!C.zf) goto L_123d785a;
L_123d782b:;
  /* 123d782b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d782e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7831 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7832 push 0x123fde84 */
  push32((uint32_t)(0x123fde84u));
  /* 123d7837 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7839 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d783b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d783d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d783f call 0x123d54b0 */
  push32(0x123d7844u); f_123d54b0();
  /* 123d7844 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7847 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d784a jne 0x123d784d */
  if (!C.zf) goto L_123d784d;
  /* 123d784c int3  */
  x86_unimpl("int3 @ 0x123d784c");
L_123d784d:;
  /* 123d784d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d784f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d7851 jne 0x123d782b */
  if (!C.zf) goto L_123d782b;
  /* 123d7853 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123d785a:;
  /* 123d785a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d785e jne 0x123d78d6 */
  if (!C.zf) goto L_123d78d6;
  /* 123d7860 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7863 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7867 je 0x123d789c */
  if (C.zf) goto L_123d789c;
L_123d7869:;
  /* 123d7869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d786c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123d786f push edx */
  push32((uint32_t)(EDX));
  /* 123d7870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7873 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123d7876 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7877 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d787a push edx */
  push32((uint32_t)(EDX));
  /* 123d787b push 0x123fde64 */
  push32((uint32_t)(0x123fde64u));
  /* 123d7880 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7882 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7884 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7886 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7888 call 0x123d54b0 */
  push32(0x123d788du); f_123d54b0();
  /* 123d788d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7890 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7893 jne 0x123d7896 */
  if (!C.zf) goto L_123d7896;
  /* 123d7895 int3  */
  x86_unimpl("int3 @ 0x123d7895");
L_123d7896:;
  /* 123d7896 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d789a jne 0x123d7869 */
  if (!C.zf) goto L_123d7869;
L_123d789c:;
  /* 123d789c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d789f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123d78a2 push edx */
  push32((uint32_t)(EDX));
  /* 123d78a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d78a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d78a9 push eax */
  push32((uint32_t)(EAX));
  /* 123d78aa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d78ad push ecx */
  push32((uint32_t)(ECX));
  /* 123d78ae push 0x123fde38 */
  push32((uint32_t)(0x123fde38u));
  /* 123d78b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d78b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d78b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d78b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d78bb call 0x123d54b0 */
  push32(0x123d78c0u); f_123d54b0();
  /* 123d78c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d78c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d78c6 jne 0x123d78c9 */
  if (!C.zf) goto L_123d78c9;
  /* 123d78c8 int3  */
  x86_unimpl("int3 @ 0x123d78c8");
L_123d78c9:;
  /* 123d78c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d78cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d78cd jne 0x123d789c */
  if (!C.zf) goto L_123d789c;
  /* 123d78cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123d78d6:;
  /* 123d78d6 jmp 0x123d76e3 */
  goto L_123d76e3;
L_123d78db:;
  /* 123d78db push 9 */
  push32((uint32_t)(0x9u));
  /* 123d78dd call 0x123d9e90 */
  push32(0x123d78e2u); f_123d9e90();
  /* 123d78e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d78e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123d78e8:;
  /* 123d78e8 pop edi */
  EDI = (pop32());
  /* 123d78e9 pop esi */
  ESI = (pop32());
  /* 123d78ea pop ebx */
  EBX = (pop32());
  /* 123d78eb mov esp, ebp */
  ESP = (EBP);
  /* 123d78ed pop ebp */
  EBP = (pop32());
  /* 123d78ee ret  */
  ESPCHK(0x123d7590u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x123d7900 (34 bytes, 13 insns) */
void f_123d7900(void) {
  FTRACE(0x123d7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7900 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7901 mov ebp, esp */
  EBP = (ESP);
  /* 123d7903 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7904 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d7909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d790c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7910 je 0x123d791b */
  if (C.zf) goto L_123d791b;
  /* 123d7912 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7915 mov dword ptr [0x12400a84], ecx */
  w32((uint32_t)(0x12400a84), (ECX));
L_123d791b:;
  /* 123d791b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d791e mov esp, ebp */
  ESP = (EBP);
  /* 123d7920 pop ebp */
  EBP = (pop32());
  /* 123d7921 ret  */
  ESPCHK(0x123d7900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007930 @ 0x123d7930 (103 bytes, 38 insns) */
void f_123d7930(void) {
  FTRACE(0x123d7930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7930 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7931 mov ebp, esp */
  EBP = (ESP);
  /* 123d7933 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7934 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d7939 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 123d793c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d793e jne 0x123d7942 */
  if (!C.zf) goto L_123d7942;
  /* 123d7940 jmp 0x123d7993 */
  goto L_123d7993;
L_123d7942:;
  /* 123d7942 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7944 call 0x123d9df0 */
  push32(0x123d7949u); f_123d9df0();
  /* 123d7949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d794c mov ecx, dword ptr [0x12402820] */
  ECX = (r32((uint32_t)(0x12402820)));
  /* 123d7952 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d7955 jmp 0x123d795f */
  goto L_123d795f;
L_123d7957:;
  /* 123d7957 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d795a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d795c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d795f:;
  /* 123d795f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7963 je 0x123d7989 */
  if (C.zf) goto L_123d7989;
  /* 123d7965 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7968 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123d796b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d7971 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7974 jne 0x123d7987 */
  if (!C.zf) goto L_123d7987;
  /* 123d7976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d7979 push eax */
  push32((uint32_t)(EAX));
  /* 123d797a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d797d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7980 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7981 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x123d7984u);
  /* 123d7984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d7987:;
  /* 123d7987 jmp 0x123d7957 */
  goto L_123d7957;
L_123d7989:;
  /* 123d7989 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d798b call 0x123d9e90 */
  push32(0x123d7990u); f_123d9e90();
  /* 123d7990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d7993:;
  /* 123d7993 mov esp, ebp */
  ESP = (EBP);
  /* 123d7995 pop ebp */
  EBP = (pop32());
  /* 123d7996 ret  */
  ESPCHK(0x123d7930u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x123d79a0 (75 bytes, 28 insns) */
void f_123d79a0(void) {
  FTRACE(0x123d79a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d79a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d79a1 mov ebp, esp */
  EBP = (ESP);
  /* 123d79a3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d79a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d79a8 je 0x123d79dd */
  if (C.zf) goto L_123d79dd;
  /* 123d79aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d79ad push eax */
  push32((uint32_t)(EAX));
  /* 123d79ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d79b1 push ecx */
  push32((uint32_t)(ECX));
  /* 123d79b2 call dword ptr [0x12405378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405378))), 0x123d79b8u);
  /* 123d79b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d79ba jne 0x123d79dd */
  if (!C.zf) goto L_123d79dd;
  /* 123d79bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d79c0 je 0x123d79d4 */
  if (C.zf) goto L_123d79d4;
  /* 123d79c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d79c5 push edx */
  push32((uint32_t)(EDX));
  /* 123d79c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d79c9 push eax */
  push32((uint32_t)(EAX));
  /* 123d79ca call dword ptr [0x12405374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405374))), 0x123d79d0u);
  /* 123d79d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d79d2 jne 0x123d79dd */
  if (!C.zf) goto L_123d79dd;
L_123d79d4:;
  /* 123d79d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123d79db jmp 0x123d79e4 */
  goto L_123d79e4;
L_123d79dd:;
  /* 123d79dd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123d79e4:;
  /* 123d79e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d79e7 mov esp, ebp */
  ESP = (EBP);
  /* 123d79e9 pop ebp */
  EBP = (pop32());
  /* 123d79ea ret  */
  ESPCHK(0x123d79a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f0 @ 0x123d79f0 (134 bytes, 50 insns) */
void f_123d79f0(void) {
  FTRACE(0x123d79f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d79f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d79f1 mov ebp, esp */
  EBP = (ESP);
  /* 123d79f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d79f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d79f8 jne 0x123d79fe */
  if (!C.zf) goto L_123d79fe;
  /* 123d79fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d79fc jmp 0x123d7a72 */
  goto L_123d7a72;
L_123d79fe:;
  /* 123d79fe push 1 */
  push32((uint32_t)(0x1u));
  /* 123d7a00 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 123d7a02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7a05 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7a08 push eax */
  push32((uint32_t)(EAX));
  /* 123d7a09 call 0x123d79a0 */
  push32(0x123d7a0eu); f_123d79a0();
  /* 123d7a0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7a11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7a13 jne 0x123d7a19 */
  if (!C.zf) goto L_123d7a19;
  /* 123d7a15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7a17 jmp 0x123d7a72 */
  goto L_123d7a72;
L_123d7a19:;
  /* 123d7a19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7a1c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7a1f push ecx */
  push32((uint32_t)(ECX));
  /* 123d7a20 call 0x123da6f0 */
  push32(0x123d7a25u); f_123da6f0();
  /* 123d7a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7a28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d7a2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7a2f je 0x123d7a46 */
  if (C.zf) goto L_123d7a46;
  /* 123d7a31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7a34 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7a37 push edx */
  push32((uint32_t)(EDX));
  /* 123d7a38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7a3b push eax */
  push32((uint32_t)(EAX));
  /* 123d7a3c call 0x123da750 */
  push32(0x123d7a41u); f_123da750();
  /* 123d7a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7a44 jmp 0x123d7a72 */
  goto L_123d7a72;
L_123d7a46:;
  /* 123d7a46 mov ecx, dword ptr [0x124027d4] */
  ECX = (r32((uint32_t)(0x124027d4)));
  /* 123d7a4c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 123d7a52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7a54 je 0x123d7a5d */
  if (C.zf) goto L_123d7a5d;
  /* 123d7a56 mov eax, 1 */
  EAX = (0x1u);
  /* 123d7a5b jmp 0x123d7a72 */
  goto L_123d7a72;
L_123d7a5d:;
  /* 123d7a5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7a60 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7a63 push edx */
  push32((uint32_t)(EDX));
  /* 123d7a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7a66 mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123d7a6b push eax */
  push32((uint32_t)(EAX));
  /* 123d7a6c call dword ptr [0x1240537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240537c))), 0x123d7a72u);
L_123d7a72:;
  /* 123d7a72 mov esp, ebp */
  ESP = (EBP);
  /* 123d7a74 pop ebp */
  EBP = (pop32());
  /* 123d7a75 ret  */
  ESPCHK(0x123d79f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a80 @ 0x123d7a80 (227 bytes, 80 insns) */
void f_123d7a80(void) {
  FTRACE(0x123d7a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7a80 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7a81 mov ebp, esp */
  EBP = (ESP);
  /* 123d7a83 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7a87 push eax */
  push32((uint32_t)(EAX));
  /* 123d7a88 call 0x123d79f0 */
  push32(0x123d7a8du); f_123d79f0();
  /* 123d7a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7a90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7a92 jne 0x123d7a9b */
  if (!C.zf) goto L_123d7a9b;
  /* 123d7a94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7a96 jmp 0x123d7b5f */
  goto L_123d7b5f;
L_123d7a9b:;
  /* 123d7a9b push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7a9d call 0x123d9df0 */
  push32(0x123d7aa2u); f_123d9df0();
  /* 123d7aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7aa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7aa8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7aab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d7aae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7ab1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7ab4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7ab9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7abc je 0x123d7ae0 */
  if (C.zf) goto L_123d7ae0;
  /* 123d7abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7ac1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7ac5 je 0x123d7ae0 */
  if (C.zf) goto L_123d7ae0;
  /* 123d7ac7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7aca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7acd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7ad2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7ad5 je 0x123d7ae0 */
  if (C.zf) goto L_123d7ae0;
  /* 123d7ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7ada cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7ade jne 0x123d7b53 */
  if (!C.zf) goto L_123d7b53;
L_123d7ae0:;
  /* 123d7ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d7ae2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d7ae5 push edx */
  push32((uint32_t)(EDX));
  /* 123d7ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7ae9 push eax */
  push32((uint32_t)(EAX));
  /* 123d7aea call 0x123d79a0 */
  push32(0x123d7aefu); f_123d79a0();
  /* 123d7aef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7af2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7af4 je 0x123d7b53 */
  if (C.zf) goto L_123d7b53;
  /* 123d7af6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7af9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123d7afc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7aff jne 0x123d7b53 */
  if (!C.zf) goto L_123d7b53;
  /* 123d7b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7b04 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123d7b07 cmp ecx, dword ptr [0x12400a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12400a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7b0d jg 0x123d7b53 */
  if ((!C.zf&&C.sf==C.of)) goto L_123d7b53;
  /* 123d7b0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7b13 je 0x123d7b20 */
  if (C.zf) goto L_123d7b20;
  /* 123d7b15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d7b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7b1b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 123d7b1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123d7b20:;
  /* 123d7b20 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7b24 je 0x123d7b31 */
  if (C.zf) goto L_123d7b31;
  /* 123d7b26 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d7b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7b2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123d7b2f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123d7b31:;
  /* 123d7b31 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7b35 je 0x123d7b42 */
  if (C.zf) goto L_123d7b42;
  /* 123d7b37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d7b3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7b3d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123d7b40 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123d7b42:;
  /* 123d7b42 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7b44 call 0x123d9e90 */
  push32(0x123d7b49u); f_123d9e90();
  /* 123d7b49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7b4c mov eax, 1 */
  EAX = (0x1u);
  /* 123d7b51 jmp 0x123d7b5f */
  goto L_123d7b5f;
L_123d7b53:;
  /* 123d7b53 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7b55 call 0x123d9e90 */
  push32(0x123d7b5au); f_123d9e90();
  /* 123d7b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d7b5f:;
  /* 123d7b5f mov esp, ebp */
  ESP = (EBP);
  /* 123d7b61 pop ebp */
  EBP = (pop32());
  /* 123d7b62 ret  */
  ESPCHK(0x123d7a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b70 @ 0x123d7b70 (28 bytes, 11 insns) */
void f_123d7b70(void) {
  FTRACE(0x123d7b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7b70 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7b71 mov ebp, esp */
  EBP = (ESP);
  /* 123d7b73 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7b74 mov eax, dword ptr [0x12404178] */
  EAX = (r32((uint32_t)(0x12404178)));
  /* 123d7b79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d7b7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7b7f mov dword ptr [0x12404178], ecx */
  w32((uint32_t)(0x12404178), (ECX));
  /* 123d7b85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7b88 mov esp, ebp */
  ESP = (EBP);
  /* 123d7b8a pop ebp */
  EBP = (pop32());
  /* 123d7b8b ret  */
  ESPCHK(0x123d7b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b90 @ 0x123d7b90 (362 bytes, 116 insns) */
void f_123d7b90(void) {
  FTRACE(0x123d7b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7b90 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7b91 mov ebp, esp */
  EBP = (ESP);
  /* 123d7b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7b96 push ebx */
  push32((uint32_t)(EBX));
  /* 123d7b97 push esi */
  push32((uint32_t)(ESI));
  /* 123d7b98 push edi */
  push32((uint32_t)(EDI));
  /* 123d7b99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7b9d jne 0x123d7bca */
  if (!C.zf) goto L_123d7bca;
L_123d7b9f:;
  /* 123d7b9f push 0x123fdf98 */
  push32((uint32_t)(0x123fdf98u));
  /* 123d7ba4 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d7ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7bab push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7bad push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7baf push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7bb1 call 0x123d54b0 */
  push32(0x123d7bb6u); f_123d54b0();
  /* 123d7bb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7bb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7bbc jne 0x123d7bbf */
  if (!C.zf) goto L_123d7bbf;
  /* 123d7bbe int3  */
  x86_unimpl("int3 @ 0x123d7bbe");
L_123d7bbf:;
  /* 123d7bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7bc3 jne 0x123d7b9f */
  if (!C.zf) goto L_123d7b9f;
  /* 123d7bc5 jmp 0x123d7cf3 */
  goto L_123d7cf3;
L_123d7bca:;
  /* 123d7bca push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7bcc call 0x123d9df0 */
  push32(0x123d7bd1u); f_123d9df0();
  /* 123d7bd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7bd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7bd7 mov edx, dword ptr [0x12402820] */
  EDX = (r32((uint32_t)(0x12402820)));
  /* 123d7bdd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123d7bdf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123d7be6 jmp 0x123d7bf1 */
  goto L_123d7bf1;
L_123d7be8:;
  /* 123d7be8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7beb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7bee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d7bf1:;
  /* 123d7bf1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7bf5 jge 0x123d7c15 */
  if ((C.sf==C.of)) goto L_123d7c15;
  /* 123d7bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7bfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7bfd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 123d7c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7c0b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 123d7c13 jmp 0x123d7be8 */
  goto L_123d7be8;
L_123d7c15:;
  /* 123d7c15 mov edx, dword ptr [0x12402820] */
  EDX = (r32((uint32_t)(0x12402820)));
  /* 123d7c1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123d7c1e jmp 0x123d7c28 */
  goto L_123d7c28;
L_123d7c20:;
  /* 123d7c20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d7c25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123d7c28:;
  /* 123d7c28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7c2c je 0x123d7cd1 */
  if (C.zf) goto L_123d7cd1;
  /* 123d7c32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c35 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7c38 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7c3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7c3f jl 0x123d7ca7 */
  if ((C.sf!=C.of)) goto L_123d7ca7;
  /* 123d7c41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c44 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123d7c47 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d7c4d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7c50 jge 0x123d7ca7 */
  if ((C.sf==C.of)) goto L_123d7ca7;
  /* 123d7c52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c55 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123d7c58 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d7c5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7c61 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 123d7c65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7c68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c6b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123d7c6e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d7c74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7c77 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 123d7c7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c7e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7c81 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7c89 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 123d7c8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c90 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7c93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7c96 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 123d7c99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7c9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7ca1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 123d7ca5 jmp 0x123d7ccc */
  goto L_123d7ccc;
L_123d7ca7:;
  /* 123d7ca7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7caa push edx */
  push32((uint32_t)(EDX));
  /* 123d7cab push 0x123fdf74 */
  push32((uint32_t)(0x123fdf74u));
  /* 123d7cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7cb8 call 0x123d54b0 */
  push32(0x123d7cbdu); f_123d54b0();
  /* 123d7cbd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7cc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7cc3 jne 0x123d7cc6 */
  if (!C.zf) goto L_123d7cc6;
  /* 123d7cc5 int3  */
  x86_unimpl("int3 @ 0x123d7cc5");
L_123d7cc6:;
  /* 123d7cc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7cca jne 0x123d7ca7 */
  if (!C.zf) goto L_123d7ca7;
L_123d7ccc:;
  /* 123d7ccc jmp 0x123d7c20 */
  goto L_123d7c20;
L_123d7cd1:;
  /* 123d7cd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7cd4 mov edx, dword ptr [0x12402828] */
  EDX = (r32((uint32_t)(0x12402828)));
  /* 123d7cda mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 123d7cdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7ce0 mov ecx, dword ptr [0x1240281c] */
  ECX = (r32((uint32_t)(0x1240281c)));
  /* 123d7ce6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 123d7ce9 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7ceb call 0x123d9e90 */
  push32(0x123d7cf0u); f_123d9e90();
  /* 123d7cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d7cf3:;
  /* 123d7cf3 pop edi */
  EDI = (pop32());
  /* 123d7cf4 pop esi */
  ESI = (pop32());
  /* 123d7cf5 pop ebx */
  EBX = (pop32());
  /* 123d7cf6 mov esp, ebp */
  ESP = (EBP);
  /* 123d7cf8 pop ebp */
  EBP = (pop32());
  /* 123d7cf9 ret  */
  ESPCHK(0x123d7b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d00 @ 0x123d7d00 (291 bytes, 95 insns) */
void f_123d7d00(void) {
  FTRACE(0x123d7d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7d00 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7d01 mov ebp, esp */
  EBP = (ESP);
  /* 123d7d03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7d06 push ebx */
  push32((uint32_t)(EBX));
  /* 123d7d07 push esi */
  push32((uint32_t)(ESI));
  /* 123d7d08 push edi */
  push32((uint32_t)(EDI));
  /* 123d7d09 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123d7d10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7d14 je 0x123d7d22 */
  if (C.zf) goto L_123d7d22;
  /* 123d7d16 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7d1a je 0x123d7d22 */
  if (C.zf) goto L_123d7d22;
  /* 123d7d1c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7d20 jne 0x123d7d50 */
  if (!C.zf) goto L_123d7d50;
L_123d7d22:;
  /* 123d7d22 push 0x123fdfc0 */
  push32((uint32_t)(0x123fdfc0u));
  /* 123d7d27 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d7d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7d30 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7d34 call 0x123d54b0 */
  push32(0x123d7d39u); f_123d54b0();
  /* 123d7d39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7d3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7d3f jne 0x123d7d42 */
  if (!C.zf) goto L_123d7d42;
  /* 123d7d41 int3  */
  x86_unimpl("int3 @ 0x123d7d41");
L_123d7d42:;
  /* 123d7d42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7d46 jne 0x123d7d22 */
  if (!C.zf) goto L_123d7d22;
  /* 123d7d48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d7d4b jmp 0x123d7e1c */
  goto L_123d7e1c;
L_123d7d50:;
  /* 123d7d50 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123d7d57 jmp 0x123d7d62 */
  goto L_123d7d62;
L_123d7d59:;
  /* 123d7d59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7d5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7d5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d7d62:;
  /* 123d7d62 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7d66 jge 0x123d7dec */
  if ((C.sf==C.of)) goto L_123d7dec;
  /* 123d7d6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7d6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d7d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7d75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123d7d78 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 123d7d7c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7d80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7d86 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 123d7d8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7d8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d7d90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7d93 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123d7d96 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 123d7d9a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7d9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7da4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 123d7da8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7dae cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7db3 jne 0x123d7dc2 */
  if (!C.zf) goto L_123d7dc2;
  /* 123d7db5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7db8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7dbb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7dc0 je 0x123d7de7 */
  if (C.zf) goto L_123d7de7;
L_123d7dc2:;
  /* 123d7dc2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7dc6 je 0x123d7de7 */
  if (C.zf) goto L_123d7de7;
  /* 123d7dc8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7dcc jne 0x123d7de0 */
  if (!C.zf) goto L_123d7de0;
  /* 123d7dce cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7dd2 jne 0x123d7de7 */
  if (!C.zf) goto L_123d7de7;
  /* 123d7dd4 mov eax, dword ptr [0x12400a84] */
  EAX = (r32((uint32_t)(0x12400a84)));
  /* 123d7dd9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 123d7ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7dde je 0x123d7de7 */
  if (C.zf) goto L_123d7de7;
L_123d7de0:;
  /* 123d7de0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_123d7de7:;
  /* 123d7de7 jmp 0x123d7d59 */
  goto L_123d7d59;
L_123d7dec:;
  /* 123d7dec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d7def mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d7df2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 123d7df5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7df8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7dfb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 123d7dfe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d7e01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d7e04 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 123d7e07 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7e0d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 123d7e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7e13 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123d7e19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123d7e1c:;
  /* 123d7e1c pop edi */
  EDI = (pop32());
  /* 123d7e1d pop esi */
  ESI = (pop32());
  /* 123d7e1e pop ebx */
  EBX = (pop32());
  /* 123d7e1f mov esp, ebp */
  ESP = (EBP);
  /* 123d7e21 pop ebp */
  EBP = (pop32());
  /* 123d7e22 ret  */
  ESPCHK(0x123d7d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e30 @ 0x123d7e30 (697 bytes, 253 insns) */
void f_123d7e30(void) {
  FTRACE(0x123d7e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d7e30 push ebp */
  push32((uint32_t)(EBP));
  /* 123d7e31 mov ebp, esp */
  EBP = (ESP);
  /* 123d7e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d7e36 push ebx */
  push32((uint32_t)(EBX));
  /* 123d7e37 push esi */
  push32((uint32_t)(ESI));
  /* 123d7e38 push edi */
  push32((uint32_t)(EDI));
  /* 123d7e39 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123d7e40 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d7e42 call 0x123d9df0 */
  push32(0x123d7e47u); f_123d9df0();
  /* 123d7e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d7e4a:;
  /* 123d7e4a push 0x123fe0b8 */
  push32((uint32_t)(0x123fe0b8u));
  /* 123d7e4f push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d7e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7e5c call 0x123d54b0 */
  push32(0x123d7e61u); f_123d54b0();
  /* 123d7e61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7e64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7e67 jne 0x123d7e6a */
  if (!C.zf) goto L_123d7e6a;
  /* 123d7e69 int3  */
  x86_unimpl("int3 @ 0x123d7e69");
L_123d7e6a:;
  /* 123d7e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7e6e jne 0x123d7e4a */
  if (!C.zf) goto L_123d7e4a;
  /* 123d7e70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7e74 je 0x123d7e7e */
  if (C.zf) goto L_123d7e7e;
  /* 123d7e76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d7e79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d7e7b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123d7e7e:;
  /* 123d7e7e mov eax, dword ptr [0x12402820] */
  EAX = (r32((uint32_t)(0x12402820)));
  /* 123d7e83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d7e86 jmp 0x123d7e90 */
  goto L_123d7e90;
L_123d7e88:;
  /* 123d7e88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7e8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d7e8d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123d7e90:;
  /* 123d7e90 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7e94 je 0x123d80b2 */
  if (C.zf) goto L_123d80b2;
  /* 123d7e9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7e9d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7ea0 je 0x123d80b2 */
  if (C.zf) goto L_123d80b2;
  /* 123d7ea6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7ea9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123d7eac and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d7eb2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7eb5 je 0x123d7ee4 */
  if (C.zf) goto L_123d7ee4;
  /* 123d7eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7eba mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123d7ebd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d7ec3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7ec5 je 0x123d7ee4 */
  if (C.zf) goto L_123d7ee4;
  /* 123d7ec7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7eca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7ecd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7ed2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7ed5 jne 0x123d7ee9 */
  if (!C.zf) goto L_123d7ee9;
  /* 123d7ed7 mov ecx, dword ptr [0x12400a84] */
  ECX = (r32((uint32_t)(0x12400a84)));
  /* 123d7edd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 123d7ee0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7ee2 jne 0x123d7ee9 */
  if (!C.zf) goto L_123d7ee9;
L_123d7ee4:;
  /* 123d7ee4 jmp 0x123d80ad */
  goto L_123d80ad;
L_123d7ee9:;
  /* 123d7ee9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7eec cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7ef0 je 0x123d7f62 */
  if (C.zf) goto L_123d7f62;
  /* 123d7ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7ef4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d7ef6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7ef9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123d7efc push ecx */
  push32((uint32_t)(ECX));
  /* 123d7efd call 0x123d79a0 */
  push32(0x123d7f02u); f_123d79a0();
  /* 123d7f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7f07 jne 0x123d7f33 */
  if (!C.zf) goto L_123d7f33;
L_123d7f09:;
  /* 123d7f09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7f0c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123d7f0f push eax */
  push32((uint32_t)(EAX));
  /* 123d7f10 push 0x123fe0a4 */
  push32((uint32_t)(0x123fe0a4u));
  /* 123d7f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f17 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f1d call 0x123d54b0 */
  push32(0x123d7f22u); f_123d54b0();
  /* 123d7f22 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7f25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7f28 jne 0x123d7f2b */
  if (!C.zf) goto L_123d7f2b;
  /* 123d7f2a int3  */
  x86_unimpl("int3 @ 0x123d7f2a");
L_123d7f2b:;
  /* 123d7f2b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d7f2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d7f2f jne 0x123d7f09 */
  if (!C.zf) goto L_123d7f09;
  /* 123d7f31 jmp 0x123d7f62 */
  goto L_123d7f62;
L_123d7f33:;
  /* 123d7f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7f36 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123d7f39 push eax */
  push32((uint32_t)(EAX));
  /* 123d7f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7f3d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123d7f40 push edx */
  push32((uint32_t)(EDX));
  /* 123d7f41 push 0x123fe098 */
  push32((uint32_t)(0x123fe098u));
  /* 123d7f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f4e call 0x123d54b0 */
  push32(0x123d7f53u); f_123d54b0();
  /* 123d7f53 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7f56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7f59 jne 0x123d7f5c */
  if (!C.zf) goto L_123d7f5c;
  /* 123d7f5b int3  */
  x86_unimpl("int3 @ 0x123d7f5b");
L_123d7f5c:;
  /* 123d7f5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7f5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7f60 jne 0x123d7f33 */
  if (!C.zf) goto L_123d7f33;
L_123d7f62:;
  /* 123d7f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7f65 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123d7f68 push edx */
  push32((uint32_t)(EDX));
  /* 123d7f69 push 0x123fe090 */
  push32((uint32_t)(0x123fe090u));
  /* 123d7f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7f76 call 0x123d54b0 */
  push32(0x123d7f7bu); f_123d54b0();
  /* 123d7f7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7f81 jne 0x123d7f84 */
  if (!C.zf) goto L_123d7f84;
  /* 123d7f83 int3  */
  x86_unimpl("int3 @ 0x123d7f83");
L_123d7f84:;
  /* 123d7f84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d7f86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d7f88 jne 0x123d7f62 */
  if (!C.zf) goto L_123d7f62;
  /* 123d7f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7f8d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123d7f90 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d7f96 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7f99 jne 0x123d800c */
  if (!C.zf) goto L_123d800c;
L_123d7f9b:;
  /* 123d7f9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7f9e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123d7fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7fa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7fa5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d7fa8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123d7fab and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d7fb0 push eax */
  push32((uint32_t)(EAX));
  /* 123d7fb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7fb4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7fb8 push 0x123fe05c */
  push32((uint32_t)(0x123fe05cu));
  /* 123d7fbd push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d7fc5 call 0x123d54b0 */
  push32(0x123d7fcau); f_123d54b0();
  /* 123d7fca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7fcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7fd0 jne 0x123d7fd3 */
  if (!C.zf) goto L_123d7fd3;
  /* 123d7fd2 int3  */
  x86_unimpl("int3 @ 0x123d7fd2");
L_123d7fd3:;
  /* 123d7fd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d7fd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d7fd7 jne 0x123d7f9b */
  if (!C.zf) goto L_123d7f9b;
  /* 123d7fd9 cmp dword ptr [0x12404178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12404178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d7fe0 je 0x123d7ffb */
  if (C.zf) goto L_123d7ffb;
  /* 123d7fe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7fe5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123d7fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 123d7fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7fec add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7fef push edx */
  push32((uint32_t)(EDX));
  /* 123d7ff0 call dword ptr [0x12404178] */
  call_ind((uint32_t)(r32((uint32_t)(0x12404178))), 0x123d7ff6u);
  /* 123d7ff6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d7ff9 jmp 0x123d8007 */
  goto L_123d8007;
L_123d7ffb:;
  /* 123d7ffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d7ffe push eax */
  push32((uint32_t)(EAX));
  /* 123d7fff call 0x123d80f0 */
  push32(0x123d8004u); f_123d80f0();
  /* 123d8004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d8007:;
  /* 123d8007 jmp 0x123d80ad */
  goto L_123d80ad;
L_123d800c:;
  /* 123d800c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d800f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8013 jne 0x123d8052 */
  if (!C.zf) goto L_123d8052;
L_123d8015:;
  /* 123d8015 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8018 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d801b push eax */
  push32((uint32_t)(EAX));
  /* 123d801c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d801f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8022 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8023 push 0x123fe034 */
  push32((uint32_t)(0x123fe034u));
  /* 123d8028 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d802a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d802c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d802e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8030 call 0x123d54b0 */
  push32(0x123d8035u); f_123d54b0();
  /* 123d8035 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8038 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d803b jne 0x123d803e */
  if (!C.zf) goto L_123d803e;
  /* 123d803d int3  */
  x86_unimpl("int3 @ 0x123d803d");
L_123d803e:;
  /* 123d803e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d8040 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8042 jne 0x123d8015 */
  if (!C.zf) goto L_123d8015;
  /* 123d8044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8047 push eax */
  push32((uint32_t)(EAX));
  /* 123d8048 call 0x123d80f0 */
  push32(0x123d804du); f_123d80f0();
  /* 123d804d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8050 jmp 0x123d80ad */
  goto L_123d80ad;
L_123d8052:;
  /* 123d8052 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8055 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 123d8058 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d805e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8061 jne 0x123d80ad */
  if (!C.zf) goto L_123d80ad;
L_123d8063:;
  /* 123d8063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8066 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123d8069 push ecx */
  push32((uint32_t)(ECX));
  /* 123d806a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d806d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123d8070 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123d8073 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d8078 push eax */
  push32((uint32_t)(EAX));
  /* 123d8079 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d807c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d807f push ecx */
  push32((uint32_t)(ECX));
  /* 123d8080 push 0x123fe000 */
  push32((uint32_t)(0x123fe000u));
  /* 123d8085 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8087 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8089 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d808b push 0 */
  push32((uint32_t)(0x0u));
  /* 123d808d call 0x123d54b0 */
  push32(0x123d8092u); f_123d54b0();
  /* 123d8092 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8095 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8098 jne 0x123d809b */
  if (!C.zf) goto L_123d809b;
  /* 123d809a int3  */
  x86_unimpl("int3 @ 0x123d809a");
L_123d809b:;
  /* 123d809b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d809d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d809f jne 0x123d8063 */
  if (!C.zf) goto L_123d8063;
  /* 123d80a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d80a4 push eax */
  push32((uint32_t)(EAX));
  /* 123d80a5 call 0x123d80f0 */
  push32(0x123d80aau); f_123d80f0();
  /* 123d80aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d80ad:;
  /* 123d80ad jmp 0x123d7e88 */
  goto L_123d7e88;
L_123d80b2:;
  /* 123d80b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d80b4 call 0x123d9e90 */
  push32(0x123d80b9u); f_123d9e90();
  /* 123d80b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d80bc:;
  /* 123d80bc push 0x123fdfe8 */
  push32((uint32_t)(0x123fdfe8u));
  /* 123d80c1 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d80c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d80c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d80ca push 0 */
  push32((uint32_t)(0x0u));
  /* 123d80cc push 0 */
  push32((uint32_t)(0x0u));
  /* 123d80ce call 0x123d54b0 */
  push32(0x123d80d3u); f_123d54b0();
  /* 123d80d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d80d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d80d9 jne 0x123d80dc */
  if (!C.zf) goto L_123d80dc;
  /* 123d80db int3  */
  x86_unimpl("int3 @ 0x123d80db");
L_123d80dc:;
  /* 123d80dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d80de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d80e0 jne 0x123d80bc */
  if (!C.zf) goto L_123d80bc;
  /* 123d80e2 pop edi */
  EDI = (pop32());
  /* 123d80e3 pop esi */
  ESI = (pop32());
  /* 123d80e4 pop ebx */
  EBX = (pop32());
  /* 123d80e5 mov esp, ebp */
  ESP = (EBP);
  /* 123d80e7 pop ebp */
  EBP = (pop32());
  /* 123d80e8 ret  */
  ESPCHK(0x123d7e30u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x123d80f0 (276 bytes, 89 insns) */
void f_123d80f0(void) {
  FTRACE(0x123d80f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d80f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d80f1 mov ebp, esp */
  EBP = (ESP);
  /* 123d80f3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d80f6 push ebx */
  push32((uint32_t)(EBX));
  /* 123d80f7 push esi */
  push32((uint32_t)(ESI));
  /* 123d80f8 push edi */
  push32((uint32_t)(EDI));
  /* 123d80f9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 123d8100 jmp 0x123d810b */
  goto L_123d810b;
L_123d8102:;
  /* 123d8102 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123d8105 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8108 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_123d810b:;
  /* 123d810b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d810e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8112 jge 0x123d811f */
  if ((C.sf==C.of)) goto L_123d811f;
  /* 123d8114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8117 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123d811a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 123d811d jmp 0x123d8126 */
  goto L_123d8126;
L_123d811f:;
  /* 123d811f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_123d8126:;
  /* 123d8126 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123d8129 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d812c jge 0x123d81cc */
  if ((C.sf==C.of)) goto L_123d81cc;
  /* 123d8132 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8135 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8138 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 123d813b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 123d813e cmp dword ptr [0x12400ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12400ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8145 jle 0x123d8163 */
  if ((C.zf||C.sf!=C.of)) goto L_123d8163;
  /* 123d8147 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 123d814c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d814f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d8155 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8156 call 0x123dc400 */
  push32(0x123d815bu); f_123dc400();
  /* 123d815b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d815e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 123d8161 jmp 0x123d8180 */
  goto L_123d8180;
L_123d8163:;
  /* 123d8163 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d8166 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d816c mov eax, dword ptr [0x12400c98] */
  EAX = (r32((uint32_t)(0x12400c98)));
  /* 123d8171 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d8173 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 123d8177 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 123d817d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_123d8180:;
  /* 123d8180 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8184 je 0x123d8194 */
  if (C.zf) goto L_123d8194;
  /* 123d8186 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d8189 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d818f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 123d8192 jmp 0x123d819b */
  goto L_123d819b;
L_123d8194:;
  /* 123d8194 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_123d819b:;
  /* 123d819b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123d819e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 123d81a1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 123d81a5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123d81a8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d81ae push edx */
  push32((uint32_t)(EDX));
  /* 123d81af push 0x123fe0dc */
  push32((uint32_t)(0x123fe0dcu));
  /* 123d81b4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123d81b7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d81ba lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 123d81be push ecx */
  push32((uint32_t)(ECX));
  /* 123d81bf call 0x123dc300 */
  push32(0x123d81c4u); f_123dc300();
  /* 123d81c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d81c7 jmp 0x123d8102 */
  goto L_123d8102;
L_123d81cc:;
  /* 123d81cc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123d81cf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_123d81d4:;
  /* 123d81d4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 123d81d7 push eax */
  push32((uint32_t)(EAX));
  /* 123d81d8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 123d81db push ecx */
  push32((uint32_t)(ECX));
  /* 123d81dc push 0x123fe0cc */
  push32((uint32_t)(0x123fe0ccu));
  /* 123d81e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d81e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d81e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d81e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d81e9 call 0x123d54b0 */
  push32(0x123d81eeu); f_123d54b0();
  /* 123d81ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d81f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d81f4 jne 0x123d81f7 */
  if (!C.zf) goto L_123d81f7;
  /* 123d81f6 int3  */
  x86_unimpl("int3 @ 0x123d81f6");
L_123d81f7:;
  /* 123d81f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d81f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d81fb jne 0x123d81d4 */
  if (!C.zf) goto L_123d81d4;
  /* 123d81fd pop edi */
  EDI = (pop32());
  /* 123d81fe pop esi */
  ESI = (pop32());
  /* 123d81ff pop ebx */
  EBX = (pop32());
  /* 123d8200 mov esp, ebp */
  ESP = (EBP);
  /* 123d8202 pop ebp */
  EBP = (pop32());
  /* 123d8203 ret  */
  ESPCHK(0x123d80f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x123d8210 (116 bytes, 46 insns) */
void f_123d8210(void) {
  FTRACE(0x123d8210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8210 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8211 mov ebp, esp */
  EBP = (ESP);
  /* 123d8213 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8216 push ebx */
  push32((uint32_t)(EBX));
  /* 123d8217 push esi */
  push32((uint32_t)(ESI));
  /* 123d8218 push edi */
  push32((uint32_t)(EDI));
  /* 123d8219 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 123d821c push eax */
  push32((uint32_t)(EAX));
  /* 123d821d call 0x123d7b90 */
  push32(0x123d8222u); f_123d7b90();
  /* 123d8222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8225 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8229 jne 0x123d8244 */
  if (!C.zf) goto L_123d8244;
  /* 123d822b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d822f jne 0x123d8244 */
  if (!C.zf) goto L_123d8244;
  /* 123d8231 mov ecx, dword ptr [0x12400a84] */
  ECX = (r32((uint32_t)(0x12400a84)));
  /* 123d8237 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 123d823a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d823c je 0x123d827b */
  if (C.zf) goto L_123d827b;
  /* 123d823e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8242 je 0x123d827b */
  if (C.zf) goto L_123d827b;
L_123d8244:;
  /* 123d8244 push 0x123fe0e4 */
  push32((uint32_t)(0x123fe0e4u));
  /* 123d8249 push 0x123fdab0 */
  push32((uint32_t)(0x123fdab0u));
  /* 123d824e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8250 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8252 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8254 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8256 call 0x123d54b0 */
  push32(0x123d825bu); f_123d54b0();
  /* 123d825b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d825e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8261 jne 0x123d8264 */
  if (!C.zf) goto L_123d8264;
  /* 123d8263 int3  */
  x86_unimpl("int3 @ 0x123d8263");
L_123d8264:;
  /* 123d8264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d8266 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8268 jne 0x123d8244 */
  if (!C.zf) goto L_123d8244;
  /* 123d826a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d826c call 0x123d7e30 */
  push32(0x123d8271u); f_123d7e30();
  /* 123d8271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8274 mov eax, 1 */
  EAX = (0x1u);
  /* 123d8279 jmp 0x123d827d */
  goto L_123d827d;
L_123d827b:;
  /* 123d827b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d827d:;
  /* 123d827d pop edi */
  EDI = (pop32());
  /* 123d827e pop esi */
  ESI = (pop32());
  /* 123d827f pop ebx */
  EBX = (pop32());
  /* 123d8280 mov esp, ebp */
  ESP = (EBP);
  /* 123d8282 pop ebp */
  EBP = (pop32());
  /* 123d8283 ret  */
  ESPCHK(0x123d8210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x123d8290 (197 bytes, 79 insns) */
void f_123d8290(void) {
  FTRACE(0x123d8290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8290 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8291 mov ebp, esp */
  EBP = (ESP);
  /* 123d8293 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8294 push ebx */
  push32((uint32_t)(EBX));
  /* 123d8295 push esi */
  push32((uint32_t)(ESI));
  /* 123d8296 push edi */
  push32((uint32_t)(EDI));
  /* 123d8297 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d829b jne 0x123d82a2 */
  if (!C.zf) goto L_123d82a2;
  /* 123d829d jmp 0x123d834e */
  goto L_123d834e;
L_123d82a2:;
  /* 123d82a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123d82a9 jmp 0x123d82b4 */
  goto L_123d82b4;
L_123d82ab:;
  /* 123d82ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d82ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d82b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d82b4:;
  /* 123d82b4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d82b8 jge 0x123d82fe */
  if ((C.sf==C.of)) goto L_123d82fe;
L_123d82ba:;
  /* 123d82ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d82bd mov edx, dword ptr [ecx*4 + 0x12400a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400a94)));
  /* 123d82c4 push edx */
  push32((uint32_t)(EDX));
  /* 123d82c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d82c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d82cb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 123d82cf push edx */
  push32((uint32_t)(EDX));
  /* 123d82d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d82d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d82d6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 123d82da push edx */
  push32((uint32_t)(EDX));
  /* 123d82db push 0x123fe140 */
  push32((uint32_t)(0x123fe140u));
  /* 123d82e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d82e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d82e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d82e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d82e8 call 0x123d54b0 */
  push32(0x123d82edu); f_123d54b0();
  /* 123d82ed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d82f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d82f3 jne 0x123d82f6 */
  if (!C.zf) goto L_123d82f6;
  /* 123d82f5 int3  */
  x86_unimpl("int3 @ 0x123d82f5");
L_123d82f6:;
  /* 123d82f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d82f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d82fa jne 0x123d82ba */
  if (!C.zf) goto L_123d82ba;
  /* 123d82fc jmp 0x123d82ab */
  goto L_123d82ab;
L_123d82fe:;
  /* 123d82fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8301 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 123d8304 push edx */
  push32((uint32_t)(EDX));
  /* 123d8305 push 0x123fe11c */
  push32((uint32_t)(0x123fe11cu));
  /* 123d830a push 0 */
  push32((uint32_t)(0x0u));
  /* 123d830c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d830e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8310 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8312 call 0x123d54b0 */
  push32(0x123d8317u); f_123d54b0();
  /* 123d8317 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d831a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d831d jne 0x123d8320 */
  if (!C.zf) goto L_123d8320;
  /* 123d831f int3  */
  x86_unimpl("int3 @ 0x123d831f");
L_123d8320:;
  /* 123d8320 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8322 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d8324 jne 0x123d82fe */
  if (!C.zf) goto L_123d82fe;
L_123d8326:;
  /* 123d8326 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8329 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 123d832c push edx */
  push32((uint32_t)(EDX));
  /* 123d832d push 0x123fe0fc */
  push32((uint32_t)(0x123fe0fcu));
  /* 123d8332 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8334 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8336 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8338 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d833a call 0x123d54b0 */
  push32(0x123d833fu); f_123d54b0();
  /* 123d833f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8342 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8345 jne 0x123d8348 */
  if (!C.zf) goto L_123d8348;
  /* 123d8347 int3  */
  x86_unimpl("int3 @ 0x123d8347");
L_123d8348:;
  /* 123d8348 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d834a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d834c jne 0x123d8326 */
  if (!C.zf) goto L_123d8326;
L_123d834e:;
  /* 123d834e pop edi */
  EDI = (pop32());
  /* 123d834f pop esi */
  ESI = (pop32());
  /* 123d8350 pop ebx */
  EBX = (pop32());
  /* 123d8351 mov esp, ebp */
  ESP = (EBP);
  /* 123d8353 pop ebp */
  EBP = (pop32());
  /* 123d8354 ret  */
  ESPCHK(0x123d8290u, _esp0);
  ESP += 4; return;
}

/* FUN_10008360 @ 0x123d8360 (329 bytes, 102 insns) */
void f_123d8360(void) {
  FTRACE(0x123d8360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8360 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8361 mov ebp, esp */
  EBP = (ESP);
  /* 123d8363 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8366 cmp dword ptr [0x124042f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124042f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d836d jne 0x123d8374 */
  if (!C.zf) goto L_123d8374;
  /* 123d836f call 0x123dcca0 */
  push32(0x123d8374u); f_123dcca0();
L_123d8374:;
  /* 123d8374 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123d837b mov eax, dword ptr [0x124027bc] */
  EAX = (r32((uint32_t)(0x124027bc)));
  /* 123d8380 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d8383:;
  /* 123d8383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8386 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123d8389 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d838b je 0x123d83b9 */
  if (C.zf) goto L_123d83b9;
  /* 123d838d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8390 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d8393 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8396 je 0x123d83a1 */
  if (C.zf) goto L_123d83a1;
  /* 123d8398 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d839b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d839e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123d83a1:;
  /* 123d83a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d83a4 push eax */
  push32((uint32_t)(EAX));
  /* 123d83a5 call 0x123d9220 */
  push32(0x123d83aau); f_123d9220();
  /* 123d83aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d83ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d83b0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123d83b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d83b7 jmp 0x123d8383 */
  goto L_123d8383;
L_123d83b9:;
  /* 123d83b9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 123d83bb push 0x123fe160 */
  push32((uint32_t)(0x123fe160u));
  /* 123d83c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d83c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d83c5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 123d83cc push ecx */
  push32((uint32_t)(ECX));
  /* 123d83cd call 0x123d63f0 */
  push32(0x123d83d2u); f_123d63f0();
  /* 123d83d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d83d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d83d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d83db mov dword ptr [0x124027f0], edx */
  w32((uint32_t)(0x124027f0), (EDX));
  /* 123d83e1 cmp dword ptr [0x124027f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d83e8 jne 0x123d83f4 */
  if (!C.zf) goto L_123d83f4;
  /* 123d83ea push 9 */
  push32((uint32_t)(0x9u));
  /* 123d83ec call 0x123d5360 */
  push32(0x123d83f1u); f_123d5360();
  /* 123d83f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d83f4:;
  /* 123d83f4 mov eax, dword ptr [0x124027bc] */
  EAX = (r32((uint32_t)(0x124027bc)));
  /* 123d83f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d83fc jmp 0x123d8407 */
  goto L_123d8407;
L_123d83fe:;
  /* 123d83fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8401 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8404 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d8407:;
  /* 123d8407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d840a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123d840d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d840f je 0x123d8477 */
  if (C.zf) goto L_123d8477;
  /* 123d8411 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8414 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8415 call 0x123d9220 */
  push32(0x123d841au); f_123d9220();
  /* 123d841a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d841d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8420 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123d8423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8426 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123d8429 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d842c je 0x123d8475 */
  if (C.zf) goto L_123d8475;
  /* 123d842e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 123d8430 push 0x123fe160 */
  push32((uint32_t)(0x123fe160u));
  /* 123d8435 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d8437 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d843a push ecx */
  push32((uint32_t)(ECX));
  /* 123d843b call 0x123d63f0 */
  push32(0x123d8440u); f_123d63f0();
  /* 123d8440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8443 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8446 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123d8448 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d844b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d844e jne 0x123d845a */
  if (!C.zf) goto L_123d845a;
  /* 123d8450 push 9 */
  push32((uint32_t)(0x9u));
  /* 123d8452 call 0x123d5360 */
  push32(0x123d8457u); f_123d5360();
  /* 123d8457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d845a:;
  /* 123d845a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d845d push ecx */
  push32((uint32_t)(ECX));
  /* 123d845e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8461 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d8463 push eax */
  push32((uint32_t)(EAX));
  /* 123d8464 call 0x123d93a0 */
  push32(0x123d8469u); f_123d93a0();
  /* 123d8469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d846c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d846f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8472 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_123d8475:;
  /* 123d8475 jmp 0x123d83fe */
  goto L_123d83fe;
L_123d8477:;
  /* 123d8477 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d8479 mov edx, dword ptr [0x124027bc] */
  EDX = (r32((uint32_t)(0x124027bc)));
  /* 123d847f push edx */
  push32((uint32_t)(EDX));
  /* 123d8480 call 0x123d6e80 */
  push32(0x123d8485u); f_123d6e80();
  /* 123d8485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8488 mov dword ptr [0x124027bc], 0 */
  w32((uint32_t)(0x124027bc), (0x0u));
  /* 123d8492 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8495 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123d849b mov dword ptr [0x124042e0], 1 */
  w32((uint32_t)(0x124042e0), (0x1u));
  /* 123d84a5 mov esp, ebp */
  ESP = (EBP);
  /* 123d84a7 pop ebp */
  EBP = (pop32());
  /* 123d84a8 ret  */
  ESPCHK(0x123d8360u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x123d84b0 (216 bytes, 69 insns) */
void f_123d84b0(void) {
  FTRACE(0x123d84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d84b1 mov ebp, esp */
  EBP = (ESP);
  /* 123d84b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d84b6 cmp dword ptr [0x124042f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124042f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d84bd jne 0x123d84c4 */
  if (!C.zf) goto L_123d84c4;
  /* 123d84bf call 0x123dcca0 */
  push32(0x123d84c4u); f_123dcca0();
L_123d84c4:;
  /* 123d84c4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 123d84c9 push 0x1240282c */
  push32((uint32_t)(0x1240282cu));
  /* 123d84ce push 0 */
  push32((uint32_t)(0x0u));
  /* 123d84d0 call dword ptr [0x12405334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405334))), 0x123d84d6u);
  /* 123d84d6 mov dword ptr [0x12402800], 0x1240282c */
  w32((uint32_t)(0x12402800), (0x1240282cu));
  /* 123d84e0 mov eax, dword ptr [0x1240430c] */
  EAX = (r32((uint32_t)(0x1240430c)));
  /* 123d84e5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d84e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d84ea jne 0x123d84f7 */
  if (!C.zf) goto L_123d84f7;
  /* 123d84ec mov edx, dword ptr [0x12402800] */
  EDX = (r32((uint32_t)(0x12402800)));
  /* 123d84f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123d84f5 jmp 0x123d84ff */
  goto L_123d84ff;
L_123d84f7:;
  /* 123d84f7 mov eax, dword ptr [0x1240430c] */
  EAX = (r32((uint32_t)(0x1240430c)));
  /* 123d84fc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_123d84ff:;
  /* 123d84ff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d8502 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123d8505 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 123d8508 push edx */
  push32((uint32_t)(EDX));
  /* 123d8509 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 123d850c push eax */
  push32((uint32_t)(EAX));
  /* 123d850d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d850f push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8511 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8514 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8515 call 0x123d8590 */
  push32(0x123d851au); f_123d8590();
  /* 123d851a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d851d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 123d8522 push 0x123fe16c */
  push32((uint32_t)(0x123fe16cu));
  /* 123d8527 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d8529 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d852c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d852f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 123d8532 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8533 call 0x123d63f0 */
  push32(0x123d8538u); f_123d63f0();
  /* 123d8538 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d853b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d853e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8542 jne 0x123d854e */
  if (!C.zf) goto L_123d854e;
  /* 123d8544 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d8546 call 0x123d5360 */
  push32(0x123d854bu); f_123d5360();
  /* 123d854b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d854e:;
  /* 123d854e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 123d8551 push edx */
  push32((uint32_t)(EDX));
  /* 123d8552 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 123d8555 push eax */
  push32((uint32_t)(EAX));
  /* 123d8556 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8559 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d855c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 123d855f push eax */
  push32((uint32_t)(EAX));
  /* 123d8560 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8563 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8564 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8567 push edx */
  push32((uint32_t)(EDX));
  /* 123d8568 call 0x123d8590 */
  push32(0x123d856du); f_123d8590();
  /* 123d856d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8570 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8573 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8576 mov dword ptr [0x124027e4], eax */
  w32((uint32_t)(0x124027e4), (EAX));
  /* 123d857b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d857e mov dword ptr [0x124027e8], ecx */
  w32((uint32_t)(0x124027e8), (ECX));
  /* 123d8584 mov esp, ebp */
  ESP = (EBP);
  /* 123d8586 pop ebp */
  EBP = (pop32());
  /* 123d8587 ret  */
  ESPCHK(0x123d84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008590 @ 0x123d8590 (1060 bytes, 360 insns) */
void f_123d8590(void) {
  FTRACE(0x123d8590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8590 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8591 mov ebp, esp */
  EBP = (ESP);
  /* 123d8593 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8596 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8599 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123d859f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d85a2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 123d85a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d85ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d85ae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d85b2 je 0x123d85c5 */
  if (C.zf) goto L_123d85c5;
  /* 123d85b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d85b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d85ba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123d85bc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d85bf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d85c2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_123d85c5:;
  /* 123d85c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d85c8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d85cb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d85ce jne 0x123d869d */
  if (!C.zf) goto L_123d869d;
L_123d85d4:;
  /* 123d85d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d85d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d85da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d85dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d85e0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d85e3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d85e6 je 0x123d8662 */
  if (C.zf) goto L_123d8662;
  /* 123d85e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d85eb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123d85ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d85f0 je 0x123d8662 */
  if (C.zf) goto L_123d8662;
  /* 123d85f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d85f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d85f7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d85f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d85fb mov al, byte ptr [edx + 0x12404041] */
  AL = (r8((uint32_t)(EDX + 0x12404041)));
  /* 123d8601 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123d8604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d8606 je 0x123d8637 */
  if (C.zf) goto L_123d8637;
  /* 123d8608 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d860b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d860d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8610 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8613 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123d8615 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8619 je 0x123d8637 */
  if (C.zf) goto L_123d8637;
  /* 123d861b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d861e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8621 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123d8623 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123d8625 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8628 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d862b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123d862e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8631 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8634 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123d8637:;
  /* 123d8637 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d863a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d863c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d863f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8642 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123d8644 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8648 je 0x123d865d */
  if (C.zf) goto L_123d865d;
  /* 123d864a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d864d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8650 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d8652 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d8654 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8657 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d865a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123d865d:;
  /* 123d865d jmp 0x123d85d4 */
  goto L_123d85d4;
L_123d8662:;
  /* 123d8662 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8665 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d8667 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d866a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d866d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123d866f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8673 je 0x123d8684 */
  if (C.zf) goto L_123d8684;
  /* 123d8675 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8678 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 123d867b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d867e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8681 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_123d8684:;
  /* 123d8684 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8687 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d868a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d868d jne 0x123d8698 */
  if (!C.zf) goto L_123d8698;
  /* 123d868f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8692 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8695 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123d8698:;
  /* 123d8698 jmp 0x123d876c */
  goto L_123d876c;
L_123d869d:;
  /* 123d869d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d86a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d86a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d86a5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d86a8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123d86aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d86ae je 0x123d86c3 */
  if (C.zf) goto L_123d86c3;
  /* 123d86b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d86b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d86b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d86b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d86ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d86bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d86c0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123d86c3:;
  /* 123d86c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d86c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d86c8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 123d86cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d86ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d86d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d86d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d86d7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d86dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d86df mov dl, byte ptr [ecx + 0x12404041] */
  DL = (r8((uint32_t)(ECX + 0x12404041)));
  /* 123d86e5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123d86e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d86ea je 0x123d871b */
  if (C.zf) goto L_123d871b;
  /* 123d86ec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d86ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d86f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d86f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d86f7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123d86f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d86fd je 0x123d8712 */
  if (C.zf) goto L_123d8712;
  /* 123d86ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8702 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8705 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d8707 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d8709 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d870c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d870f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123d8712:;
  /* 123d8712 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8715 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8718 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d871b:;
  /* 123d871b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d871e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d8724 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8727 je 0x123d8747 */
  if (C.zf) goto L_123d8747;
  /* 123d8729 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d872c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d8731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d8733 je 0x123d8747 */
  if (C.zf) goto L_123d8747;
  /* 123d8735 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8738 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d873e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8741 jne 0x123d869d */
  if (!C.zf) goto L_123d869d;
L_123d8747:;
  /* 123d8747 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d874a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d8750 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8752 jne 0x123d875f */
  if (!C.zf) goto L_123d875f;
  /* 123d8754 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8757 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d875a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d875d jmp 0x123d876c */
  goto L_123d876c;
L_123d875f:;
  /* 123d875f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8763 je 0x123d876c */
  if (C.zf) goto L_123d876c;
  /* 123d8765 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8768 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_123d876c:;
  /* 123d876c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_123d8773:;
  /* 123d8773 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8776 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123d8779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d877b je 0x123d879e */
  if (C.zf) goto L_123d879e;
L_123d877d:;
  /* 123d877d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8780 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123d8783 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8786 je 0x123d8793 */
  if (C.zf) goto L_123d8793;
  /* 123d8788 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d878b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d878e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8791 jne 0x123d879e */
  if (!C.zf) goto L_123d879e;
L_123d8793:;
  /* 123d8793 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8796 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8799 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d879c jmp 0x123d877d */
  goto L_123d877d;
L_123d879e:;
  /* 123d879e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d87a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d87a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d87a6 jne 0x123d87ad */
  if (!C.zf) goto L_123d87ad;
  /* 123d87a8 jmp 0x123d898b */
  goto L_123d898b;
L_123d87ad:;
  /* 123d87ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d87b1 je 0x123d87c4 */
  if (C.zf) goto L_123d87c4;
  /* 123d87b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d87b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d87b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123d87bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d87be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d87c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_123d87c4:;
  /* 123d87c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d87c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d87c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d87cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d87cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123d87d1:;
  /* 123d87d1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123d87d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123d87df:;
  /* 123d87df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d87e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123d87e5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d87e8 jne 0x123d87fe */
  if (!C.zf) goto L_123d87fe;
  /* 123d87ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d87ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d87f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d87f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d87f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d87f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123d87fc jmp 0x123d87df */
  goto L_123d87df;
L_123d87fe:;
  /* 123d87fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8801 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d8804 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8807 jne 0x123d885a */
  if (!C.zf) goto L_123d885a;
  /* 123d8809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d880c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d880e mov ecx, 2 */
  ECX = (0x2u);
  /* 123d8813 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123d8815 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8817 jne 0x123d8852 */
  if (!C.zf) goto L_123d8852;
  /* 123d8819 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d881d je 0x123d883f */
  if (C.zf) goto L_123d883f;
  /* 123d881f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8822 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123d8826 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8829 jne 0x123d8836 */
  if (!C.zf) goto L_123d8836;
  /* 123d882b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d882e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8831 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d8834 jmp 0x123d883d */
  goto L_123d883d;
L_123d8836:;
  /* 123d8836 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123d883d:;
  /* 123d883d jmp 0x123d8846 */
  goto L_123d8846;
L_123d883f:;
  /* 123d883f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123d8846:;
  /* 123d8846 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d8848 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d884c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 123d884f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_123d8852:;
  /* 123d8852 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8855 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123d8857 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123d885a:;
  /* 123d885a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d885d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8860 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8863 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123d8866 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d8868 je 0x123d888e */
  if (C.zf) goto L_123d888e;
  /* 123d886a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d886e je 0x123d887f */
  if (C.zf) goto L_123d887f;
  /* 123d8870 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8873 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 123d8876 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8879 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d887c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_123d887f:;
  /* 123d887f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8882 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d8884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8887 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d888a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123d888c jmp 0x123d885a */
  goto L_123d885a;
L_123d888e:;
  /* 123d888e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8891 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123d8894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d8896 je 0x123d88b4 */
  if (C.zf) goto L_123d88b4;
  /* 123d8898 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d889c jne 0x123d88b9 */
  if (!C.zf) goto L_123d88b9;
  /* 123d889e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d88a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123d88a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d88a7 je 0x123d88b4 */
  if (C.zf) goto L_123d88b4;
  /* 123d88a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d88ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123d88af cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d88b2 jne 0x123d88b9 */
  if (!C.zf) goto L_123d88b9;
L_123d88b4:;
  /* 123d88b4 jmp 0x123d8964 */
  goto L_123d8964;
L_123d88b9:;
  /* 123d88b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d88bd je 0x123d8956 */
  if (C.zf) goto L_123d8956;
  /* 123d88c3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d88c7 je 0x123d891d */
  if (C.zf) goto L_123d891d;
  /* 123d88c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d88cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d88ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123d88d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d88d2 mov cl, byte ptr [eax + 0x12404041] */
  CL = (r8((uint32_t)(EAX + 0x12404041)));
  /* 123d88d8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123d88db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d88dd je 0x123d8908 */
  if (C.zf) goto L_123d8908;
  /* 123d88df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d88e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d88e5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123d88e7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123d88e9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d88ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d88ef mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 123d88f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d88f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d88f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d88fb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d88fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d8900 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8903 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8906 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123d8908:;
  /* 123d8908 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d890b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d890e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123d8910 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123d8912 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8915 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8918 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123d891b jmp 0x123d8949 */
  goto L_123d8949;
L_123d891d:;
  /* 123d891d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8922 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123d8924 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d8926 mov cl, byte ptr [eax + 0x12404041] */
  CL = (r8((uint32_t)(EAX + 0x12404041)));
  /* 123d892c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123d892f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d8931 je 0x123d8949 */
  if (C.zf) goto L_123d8949;
  /* 123d8933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8936 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8939 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d893c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d893f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d8941 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8944 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8947 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123d8949:;
  /* 123d8949 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d894c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d894e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8954 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_123d8956:;
  /* 123d8956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d895c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d895f jmp 0x123d87d1 */
  goto L_123d87d1;
L_123d8964:;
  /* 123d8964 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8968 je 0x123d8979 */
  if (C.zf) goto L_123d8979;
  /* 123d896a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d896d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 123d8970 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8973 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8976 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_123d8979:;
  /* 123d8979 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d897c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d897e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8981 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123d8984 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123d8986 jmp 0x123d8773 */
  goto L_123d8773;
L_123d898b:;
  /* 123d898b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d898f je 0x123d89a3 */
  if (C.zf) goto L_123d89a3;
  /* 123d8991 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d8994 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123d899a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d899d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d89a0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_123d89a3:;
  /* 123d89a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d89a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d89a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d89ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d89ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123d89b0 mov esp, ebp */
  ESP = (EBP);
  /* 123d89b2 pop ebp */
  EBP = (pop32());
  /* 123d89b3 ret  */
  ESPCHK(0x123d8590u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x123d89c0 (537 bytes, 173 insns) */
void f_123d89c0(void) {
  FTRACE(0x123d89c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d89c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d89c1 mov ebp, esp */
  EBP = (ESP);
  /* 123d89c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d89c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 123d89cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 123d89d4 cmp dword ptr [0x12402930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d89db jne 0x123d8a1a */
  if (!C.zf) goto L_123d8a1a;
  /* 123d89dd call dword ptr [0x12405390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405390))), 0x123d89e3u);
  /* 123d89e3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123d89e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d89ea je 0x123d89f8 */
  if (C.zf) goto L_123d89f8;
  /* 123d89ec mov dword ptr [0x12402930], 1 */
  w32((uint32_t)(0x12402930), (0x1u));
  /* 123d89f6 jmp 0x123d8a1a */
  goto L_123d8a1a;
L_123d89f8:;
  /* 123d89f8 call dword ptr [0x1240538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240538c))), 0x123d89feu);
  /* 123d89fe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123d8a01 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8a05 je 0x123d8a13 */
  if (C.zf) goto L_123d8a13;
  /* 123d8a07 mov dword ptr [0x12402930], 2 */
  w32((uint32_t)(0x12402930), (0x2u));
  /* 123d8a11 jmp 0x123d8a1a */
  goto L_123d8a1a;
L_123d8a13:;
  /* 123d8a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8a15 jmp 0x123d8bd5 */
  goto L_123d8bd5;
L_123d8a1a:;
  /* 123d8a1a cmp dword ptr [0x12402930], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12402930))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8a21 jne 0x123d8b1e */
  if (!C.zf) goto L_123d8b1e;
  /* 123d8a27 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8a2b jne 0x123d8a43 */
  if (!C.zf) goto L_123d8a43;
  /* 123d8a2d call dword ptr [0x12405390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405390))), 0x123d8a33u);
  /* 123d8a33 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123d8a36 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8a3a jne 0x123d8a43 */
  if (!C.zf) goto L_123d8a43;
  /* 123d8a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8a3e jmp 0x123d8bd5 */
  goto L_123d8bd5;
L_123d8a43:;
  /* 123d8a43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d8a46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123d8a49:;
  /* 123d8a49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8a4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d8a4e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 123d8a51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8a53 je 0x123d8a75 */
  if (C.zf) goto L_123d8a75;
  /* 123d8a55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8a58 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8a5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d8a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8a61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d8a63 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 123d8a66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8a68 jne 0x123d8a73 */
  if (!C.zf) goto L_123d8a73;
  /* 123d8a6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8a6d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8a70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123d8a73:;
  /* 123d8a73 jmp 0x123d8a49 */
  goto L_123d8a49;
L_123d8a75:;
  /* 123d8a75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8a78 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8a7b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 123d8a7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8a80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d8a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8a87 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8a8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8a8e push edx */
  push32((uint32_t)(EDX));
  /* 123d8a8f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d8a92 push eax */
  push32((uint32_t)(EAX));
  /* 123d8a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8a97 call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123d8a9du);
  /* 123d8a9d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123d8aa0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8aa4 je 0x123d8ac4 */
  if (C.zf) goto L_123d8ac4;
  /* 123d8aa6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 123d8aa8 push 0x123fe178 */
  push32((uint32_t)(0x123fe178u));
  /* 123d8aad push 2 */
  push32((uint32_t)(0x2u));
  /* 123d8aaf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8ab3 call 0x123d63f0 */
  push32(0x123d8ab8u); f_123d63f0();
  /* 123d8ab8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8abb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123d8abe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8ac2 jne 0x123d8ad5 */
  if (!C.zf) goto L_123d8ad5;
L_123d8ac4:;
  /* 123d8ac4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d8ac7 push edx */
  push32((uint32_t)(EDX));
  /* 123d8ac8 call dword ptr [0x12405384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405384))), 0x123d8aceu);
  /* 123d8ace xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8ad0 jmp 0x123d8bd5 */
  goto L_123d8bd5;
L_123d8ad5:;
  /* 123d8ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8ad9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8adc push eax */
  push32((uint32_t)(EAX));
  /* 123d8add mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d8ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8ae4 push edx */
  push32((uint32_t)(EDX));
  /* 123d8ae5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d8ae8 push eax */
  push32((uint32_t)(EAX));
  /* 123d8ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8aed call dword ptr [0x12405388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405388))), 0x123d8af3u);
  /* 123d8af3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d8af5 jne 0x123d8b0c */
  if (!C.zf) goto L_123d8b0c;
  /* 123d8af7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d8af9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d8afc push ecx */
  push32((uint32_t)(ECX));
  /* 123d8afd call 0x123d6e80 */
  push32(0x123d8b02u); f_123d6e80();
  /* 123d8b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8b05 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_123d8b0c:;
  /* 123d8b0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d8b0f push edx */
  push32((uint32_t)(EDX));
  /* 123d8b10 call dword ptr [0x12405384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405384))), 0x123d8b16u);
  /* 123d8b16 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d8b19 jmp 0x123d8bd5 */
  goto L_123d8bd5;
L_123d8b1e:;
  /* 123d8b1e cmp dword ptr [0x12402930], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12402930))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8b25 jne 0x123d8bd3 */
  if (!C.zf) goto L_123d8bd3;
  /* 123d8b2b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8b2f jne 0x123d8b47 */
  if (!C.zf) goto L_123d8b47;
  /* 123d8b31 call dword ptr [0x1240538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240538c))), 0x123d8b37u);
  /* 123d8b37 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123d8b3a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8b3e jne 0x123d8b47 */
  if (!C.zf) goto L_123d8b47;
  /* 123d8b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8b42 jmp 0x123d8bd5 */
  goto L_123d8bd5;
L_123d8b47:;
  /* 123d8b47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d8b4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123d8b4d:;
  /* 123d8b4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8b50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123d8b53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8b55 je 0x123d8b75 */
  if (C.zf) goto L_123d8b75;
  /* 123d8b57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8b5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8b5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d8b60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8b63 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123d8b66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d8b68 jne 0x123d8b73 */
  if (!C.zf) goto L_123d8b73;
  /* 123d8b6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8b6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8b70 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_123d8b73:;
  /* 123d8b73 jmp 0x123d8b4d */
  goto L_123d8b4d;
L_123d8b75:;
  /* 123d8b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8b78 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8b7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8b7e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123d8b81 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 123d8b86 push 0x123fe178 */
  push32((uint32_t)(0x123fe178u));
  /* 123d8b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 123d8b8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8b90 push edx */
  push32((uint32_t)(EDX));
  /* 123d8b91 call 0x123d63f0 */
  push32(0x123d8b96u); f_123d63f0();
  /* 123d8b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8b99 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d8b9c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8ba0 jne 0x123d8bb0 */
  if (!C.zf) goto L_123d8bb0;
  /* 123d8ba2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d8ba5 push eax */
  push32((uint32_t)(EAX));
  /* 123d8ba6 call dword ptr [0x12405358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405358))), 0x123d8bacu);
  /* 123d8bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8bae jmp 0x123d8bd5 */
  goto L_123d8bd5;
L_123d8bb0:;
  /* 123d8bb0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d8bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8bb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d8bb7 push edx */
  push32((uint32_t)(EDX));
  /* 123d8bb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8bbb push eax */
  push32((uint32_t)(EAX));
  /* 123d8bbc call 0x123dccd0 */
  push32(0x123d8bc1u); f_123dccd0();
  /* 123d8bc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8bc4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d8bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8bc8 call dword ptr [0x12405358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405358))), 0x123d8bceu);
  /* 123d8bce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8bd1 jmp 0x123d8bd5 */
  goto L_123d8bd5;
L_123d8bd3:;
  /* 123d8bd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d8bd5:;
  /* 123d8bd5 mov esp, ebp */
  ESP = (EBP);
  /* 123d8bd7 pop ebp */
  EBP = (pop32());
  /* 123d8bd8 ret  */
  ESPCHK(0x123d89c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008be0 @ 0x123d8be0 (77 bytes, 25 insns) */
void f_123d8be0(void) {
  FTRACE(0x123d8be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8be0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8be1 mov ebp, esp */
  EBP = (ESP);
  /* 123d8be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8be5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 123d8bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8bec cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8bf0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 123d8bf3 push eax */
  push32((uint32_t)(EAX));
  /* 123d8bf4 call dword ptr [0x12405394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405394))), 0x123d8bfau);
  /* 123d8bfa mov dword ptr [0x1240416c], eax */
  w32((uint32_t)(0x1240416c), (EAX));
  /* 123d8bff cmp dword ptr [0x1240416c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1240416c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8c06 jne 0x123d8c0c */
  if (!C.zf) goto L_123d8c0c;
  /* 123d8c08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8c0a jmp 0x123d8c2b */
  goto L_123d8c2b;
L_123d8c0c:;
  /* 123d8c0c call 0x123da690 */
  push32(0x123d8c11u); f_123da690();
  /* 123d8c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d8c13 jne 0x123d8c26 */
  if (!C.zf) goto L_123d8c26;
  /* 123d8c15 mov ecx, dword ptr [0x1240416c] */
  ECX = (r32((uint32_t)(0x1240416c)));
  /* 123d8c1b push ecx */
  push32((uint32_t)(ECX));
  /* 123d8c1c call dword ptr [0x12405380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405380))), 0x123d8c22u);
  /* 123d8c22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d8c24 jmp 0x123d8c2b */
  goto L_123d8c2b;
L_123d8c26:;
  /* 123d8c26 mov eax, 1 */
  EAX = (0x1u);
L_123d8c2b:;
  /* 123d8c2b pop ebp */
  EBP = (pop32());
  /* 123d8c2c ret  */
  ESPCHK(0x123d8be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c30 @ 0x123d8c30 (156 bytes, 48 insns) */
void f_123d8c30(void) {
  FTRACE(0x123d8c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8c30 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8c31 mov ebp, esp */
  EBP = (ESP);
  /* 123d8c33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8c36 mov eax, dword ptr [0x12404168] */
  EAX = (r32((uint32_t)(0x12404168)));
  /* 123d8c3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d8c3e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123d8c45 jmp 0x123d8c50 */
  goto L_123d8c50;
L_123d8c47:;
  /* 123d8c47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8c4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8c4d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d8c50:;
  /* 123d8c50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8c53 cmp edx, dword ptr [0x12404164] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12404164))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8c59 jge 0x123d8ca6 */
  if ((C.sf==C.of)) goto L_123d8ca6;
  /* 123d8c5b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 123d8c60 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 123d8c65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8c68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123d8c6b push ecx */
  push32((uint32_t)(ECX));
  /* 123d8c6c call dword ptr [0x1240539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240539c))), 0x123d8c72u);
  /* 123d8c72 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 123d8c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8c79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8c7c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123d8c7f push eax */
  push32((uint32_t)(EAX));
  /* 123d8c80 call dword ptr [0x1240539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240539c))), 0x123d8c86u);
  /* 123d8c86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8c89 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123d8c8c push edx */
  push32((uint32_t)(EDX));
  /* 123d8c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8c8f mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123d8c94 push eax */
  push32((uint32_t)(EAX));
  /* 123d8c95 call dword ptr [0x12405398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405398))), 0x123d8c9bu);
  /* 123d8c9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8c9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8ca1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123d8ca4 jmp 0x123d8c47 */
  goto L_123d8c47;
L_123d8ca6:;
  /* 123d8ca6 mov edx, dword ptr [0x12404168] */
  EDX = (r32((uint32_t)(0x12404168)));
  /* 123d8cac push edx */
  push32((uint32_t)(EDX));
  /* 123d8cad push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8caf mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123d8cb4 push eax */
  push32((uint32_t)(EAX));
  /* 123d8cb5 call dword ptr [0x12405398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405398))), 0x123d8cbbu);
  /* 123d8cbb mov ecx, dword ptr [0x1240416c] */
  ECX = (r32((uint32_t)(0x1240416c)));
  /* 123d8cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8cc2 call dword ptr [0x12405380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405380))), 0x123d8cc8u);
  /* 123d8cc8 mov esp, ebp */
  ESP = (EBP);
  /* 123d8cca pop ebp */
  EBP = (pop32());
  /* 123d8ccb ret  */
  ESPCHK(0x123d8c30u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x123d8cd0 (73 bytes, 19 insns) */
void f_123d8cd0(void) {
  FTRACE(0x123d8cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8cd1 mov ebp, esp */
  EBP = (ESP);
  /* 123d8cd3 cmp dword ptr [0x124027c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8cda je 0x123d8cee */
  if (C.zf) goto L_123d8cee;
  /* 123d8cdc cmp dword ptr [0x124027c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8ce3 jne 0x123d8d17 */
  if (!C.zf) goto L_123d8d17;
  /* 123d8ce5 cmp dword ptr [0x124027c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8cec jne 0x123d8d17 */
  if (!C.zf) goto L_123d8d17;
L_123d8cee:;
  /* 123d8cee push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 123d8cf3 call 0x123d8d20 */
  push32(0x123d8cf8u); f_123d8d20();
  /* 123d8cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8cfb cmp dword ptr [0x12402934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8d02 je 0x123d8d0a */
  if (C.zf) goto L_123d8d0a;
  /* 123d8d04 call dword ptr [0x12402934] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402934))), 0x123d8d0au);
L_123d8d0a:;
  /* 123d8d0a push 0xff */
  push32((uint32_t)(0xffu));
  /* 123d8d0f call 0x123d8d20 */
  push32(0x123d8d14u); f_123d8d20();
  /* 123d8d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d8d17:;
  /* 123d8d17 pop ebp */
  EBP = (pop32());
  /* 123d8d18 ret  */
  ESPCHK(0x123d8cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d20 @ 0x123d8d20 (447 bytes, 131 insns) */
void f_123d8d20(void) {
  FTRACE(0x123d8d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8d20 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8d21 mov ebp, esp */
  EBP = (ESP);
  /* 123d8d23 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8d29 push ebx */
  push32((uint32_t)(EBX));
  /* 123d8d2a push esi */
  push32((uint32_t)(ESI));
  /* 123d8d2b push edi */
  push32((uint32_t)(EDI));
  /* 123d8d2c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123d8d33 jmp 0x123d8d3e */
  goto L_123d8d3e;
L_123d8d35:;
  /* 123d8d35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8d38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8d3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123d8d3e:;
  /* 123d8d3e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8d42 jae 0x123d8d57 */
  if (!C.cf) goto L_123d8d57;
  /* 123d8d44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8d47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8d4a cmp edx, dword ptr [ecx*8 + 0x12400ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12400ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8d51 jne 0x123d8d55 */
  if (!C.zf) goto L_123d8d55;
  /* 123d8d53 jmp 0x123d8d57 */
  goto L_123d8d57;
L_123d8d55:;
  /* 123d8d55 jmp 0x123d8d35 */
  goto L_123d8d35;
L_123d8d57:;
  /* 123d8d57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8d5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8d5d cmp ecx, dword ptr [eax*8 + 0x12400ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12400ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8d64 jne 0x123d8ed8 */
  if (!C.zf) goto L_123d8ed8;
  /* 123d8d6a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8d71 je 0x123d8d94 */
  if (C.zf) goto L_123d8d94;
  /* 123d8d73 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8d76 mov eax, dword ptr [edx*8 + 0x12400ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12400ab4)));
  /* 123d8d7d push eax */
  push32((uint32_t)(EAX));
  /* 123d8d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d8d86 call 0x123d54b0 */
  push32(0x123d8d8bu); f_123d54b0();
  /* 123d8d8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8d8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8d91 jne 0x123d8d94 */
  if (!C.zf) goto L_123d8d94;
  /* 123d8d93 int3  */
  x86_unimpl("int3 @ 0x123d8d93");
L_123d8d94:;
  /* 123d8d94 cmp dword ptr [0x124027c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8d9b je 0x123d8daf */
  if (C.zf) goto L_123d8daf;
  /* 123d8d9d cmp dword ptr [0x124027c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124027c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8da4 jne 0x123d8de8 */
  if (!C.zf) goto L_123d8de8;
  /* 123d8da6 cmp dword ptr [0x124027c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124027c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8dad jne 0x123d8de8 */
  if (!C.zf) goto L_123d8de8;
L_123d8daf:;
  /* 123d8daf push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8db1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 123d8db4 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8db5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8db8 mov eax, dword ptr [edx*8 + 0x12400ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12400ab4)));
  /* 123d8dbf push eax */
  push32((uint32_t)(EAX));
  /* 123d8dc0 call 0x123d9220 */
  push32(0x123d8dc5u); f_123d9220();
  /* 123d8dc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8dc8 push eax */
  push32((uint32_t)(EAX));
  /* 123d8dc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8dcc mov edx, dword ptr [ecx*8 + 0x12400ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12400ab4)));
  /* 123d8dd3 push edx */
  push32((uint32_t)(EDX));
  /* 123d8dd4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 123d8dd6 call dword ptr [0x12405318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405318))), 0x123d8ddcu);
  /* 123d8ddc push eax */
  push32((uint32_t)(EAX));
  /* 123d8ddd call dword ptr [0x1240531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240531c))), 0x123d8de3u);
  /* 123d8de3 jmp 0x123d8ed8 */
  goto L_123d8ed8;
L_123d8de8:;
  /* 123d8de8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8def je 0x123d8ed8 */
  if (C.zf) goto L_123d8ed8;
  /* 123d8df5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 123d8dfa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 123d8e00 push eax */
  push32((uint32_t)(EAX));
  /* 123d8e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8e03 call dword ptr [0x12405334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405334))), 0x123d8e09u);
  /* 123d8e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d8e0b jne 0x123d8e21 */
  if (!C.zf) goto L_123d8e21;
  /* 123d8e0d push 0x123fd9e0 */
  push32((uint32_t)(0x123fd9e0u));
  /* 123d8e12 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 123d8e18 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8e19 call 0x123d93a0 */
  push32(0x123d8e1eu); f_123d93a0();
  /* 123d8e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d8e21:;
  /* 123d8e21 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 123d8e27 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123d8e2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8e2d push eax */
  push32((uint32_t)(EAX));
  /* 123d8e2e call 0x123d9220 */
  push32(0x123d8e33u); f_123d9220();
  /* 123d8e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8e36 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8e39 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8e3c jbe 0x123d8e6a */
  if ((C.cf||C.zf)) goto L_123d8e6a;
  /* 123d8e3e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 123d8e44 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8e45 call 0x123d9220 */
  push32(0x123d8e4au); f_123d9220();
  /* 123d8e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8e4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8e50 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 123d8e54 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d8e57 push 3 */
  push32((uint32_t)(0x3u));
  /* 123d8e59 push 0x123fd9dc */
  push32((uint32_t)(0x123fd9dcu));
  /* 123d8e5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8e61 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8e62 call 0x123d9c10 */
  push32(0x123d8e67u); f_123d9c10();
  /* 123d8e67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d8e6a:;
  /* 123d8e6a push 0x123fe434 */
  push32((uint32_t)(0x123fe434u));
  /* 123d8e6f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 123d8e75 push edx */
  push32((uint32_t)(EDX));
  /* 123d8e76 call 0x123d93a0 */
  push32(0x123d8e7bu); f_123d93a0();
  /* 123d8e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8e7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8e81 push eax */
  push32((uint32_t)(EAX));
  /* 123d8e82 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 123d8e88 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8e89 call 0x123d93b0 */
  push32(0x123d8e8eu); f_123d93b0();
  /* 123d8e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8e91 push 0x123fd954 */
  push32((uint32_t)(0x123fd954u));
  /* 123d8e96 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 123d8e9c push edx */
  push32((uint32_t)(EDX));
  /* 123d8e9d call 0x123d93b0 */
  push32(0x123d8ea2u); f_123d93b0();
  /* 123d8ea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8ea5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d8ea8 mov ecx, dword ptr [eax*8 + 0x12400ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12400ab4)));
  /* 123d8eaf push ecx */
  push32((uint32_t)(ECX));
  /* 123d8eb0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 123d8eb6 push edx */
  push32((uint32_t)(EDX));
  /* 123d8eb7 call 0x123d93b0 */
  push32(0x123d8ebcu); f_123d93b0();
  /* 123d8ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8ebf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 123d8ec4 push 0x123fe40c */
  push32((uint32_t)(0x123fe40cu));
  /* 123d8ec9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 123d8ecf push eax */
  push32((uint32_t)(EAX));
  /* 123d8ed0 call 0x123d9b50 */
  push32(0x123d8ed5u); f_123d9b50();
  /* 123d8ed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d8ed8:;
  /* 123d8ed8 pop edi */
  EDI = (pop32());
  /* 123d8ed9 pop esi */
  ESI = (pop32());
  /* 123d8eda pop ebx */
  EBX = (pop32());
  /* 123d8edb mov esp, ebp */
  ESP = (EBP);
  /* 123d8edd pop ebp */
  EBP = (pop32());
  /* 123d8ede ret  */
  ESPCHK(0x123d8d20u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x123d8ee0 (80 bytes, 27 insns) */
void f_123d8ee0(void) {
  FTRACE(0x123d8ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8ee1 mov ebp, esp */
  EBP = (ESP);
  /* 123d8ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8ee4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123d8eeb jmp 0x123d8ef6 */
  goto L_123d8ef6;
L_123d8eed:;
  /* 123d8eed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8ef0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8ef3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d8ef6:;
  /* 123d8ef6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8efa jae 0x123d8f0f */
  if (!C.cf) goto L_123d8f0f;
  /* 123d8efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8eff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8f02 cmp edx, dword ptr [ecx*8 + 0x12400ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12400ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8f09 jne 0x123d8f0d */
  if (!C.zf) goto L_123d8f0d;
  /* 123d8f0b jmp 0x123d8f0f */
  goto L_123d8f0f;
L_123d8f0d:;
  /* 123d8f0d jmp 0x123d8eed */
  goto L_123d8eed;
L_123d8f0f:;
  /* 123d8f0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8f12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8f15 cmp ecx, dword ptr [eax*8 + 0x12400ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12400ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8f1c jne 0x123d8f2a */
  if (!C.zf) goto L_123d8f2a;
  /* 123d8f1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8f21 mov eax, dword ptr [edx*8 + 0x12400ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12400ab4)));
  /* 123d8f28 jmp 0x123d8f2c */
  goto L_123d8f2c;
L_123d8f2a:;
  /* 123d8f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d8f2c:;
  /* 123d8f2c mov esp, ebp */
  ESP = (EBP);
  /* 123d8f2e pop ebp */
  EBP = (pop32());
  /* 123d8f2f ret  */
  ESPCHK(0x123d8ee0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x123d8f30 (66 bytes, 28 insns) */
void f_123d8f30(void) {
  FTRACE(0x123d8f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8f30 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8f31 mov ebp, esp */
  EBP = (ESP);
  /* 123d8f33 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8f37 jne 0x123d8f57 */
  if (!C.zf) goto L_123d8f57;
  /* 123d8f39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8f3d jge 0x123d8f57 */
  if ((C.sf==C.of)) goto L_123d8f57;
  /* 123d8f3f push 1 */
  push32((uint32_t)(0x1u));
  /* 123d8f41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8f44 push eax */
  push32((uint32_t)(EAX));
  /* 123d8f45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d8f48 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8f49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8f4c push edx */
  push32((uint32_t)(EDX));
  /* 123d8f4d call 0x123d8f80 */
  push32(0x123d8f52u); f_123d8f80();
  /* 123d8f52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8f55 jmp 0x123d8f6d */
  goto L_123d8f6d;
L_123d8f57:;
  /* 123d8f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d8f59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d8f5c push eax */
  push32((uint32_t)(EAX));
  /* 123d8f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d8f60 push ecx */
  push32((uint32_t)(ECX));
  /* 123d8f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8f64 push edx */
  push32((uint32_t)(EDX));
  /* 123d8f65 call 0x123d8f80 */
  push32(0x123d8f6au); f_123d8f80();
  /* 123d8f6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d8f6d:;
  /* 123d8f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d8f70 pop ebp */
  EBP = (pop32());
  /* 123d8f71 ret  */
  ESPCHK(0x123d8f30u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x123d8f80 (194 bytes, 71 insns) */
void f_123d8f80(void) {
  FTRACE(0x123d8f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d8f80 push ebp */
  push32((uint32_t)(EBP));
  /* 123d8f81 mov ebp, esp */
  EBP = (ESP);
  /* 123d8f83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d8f86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d8f89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d8f8c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8f90 je 0x123d8fa9 */
  if (C.zf) goto L_123d8fa9;
  /* 123d8f92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8f95 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 123d8f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8f9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8f9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d8fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8fa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123d8fa6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123d8fa9:;
  /* 123d8fa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8fac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123d8faf:;
  /* 123d8faf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8fb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d8fb4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123d8fb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123d8fba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d8fbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d8fbf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123d8fc2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123d8fc5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8fc9 jbe 0x123d8fe1 */
  if ((C.cf||C.zf)) goto L_123d8fe1;
  /* 123d8fcb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8fce add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8fd4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d8fd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8fd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8fdc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d8fdf jmp 0x123d8ff5 */
  goto L_123d8ff5;
L_123d8fe1:;
  /* 123d8fe1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d8fe4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8fe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8fea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d8fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8fef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d8ff2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d8ff5:;
  /* 123d8ff5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d8ff9 ja 0x123d8faf */
  if ((!C.cf&&!C.zf)) goto L_123d8faf;
  /* 123d8ffb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d8ffe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123d9001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9004 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9007 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d900a:;
  /* 123d900a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d900d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d900f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 123d9012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9015 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9018 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d901a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d901c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d901f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 123d9022 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123d9024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9027 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d902a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d902d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9030 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d9036 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9039 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d903c jb 0x123d900a */
  if (C.cf) goto L_123d900a;
  /* 123d903e mov esp, ebp */
  ESP = (EBP);
  /* 123d9040 pop ebp */
  EBP = (pop32());
  /* 123d9041 ret  */
  ESPCHK(0x123d8f80u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x123d9050 (63 bytes, 24 insns) */
void f_123d9050(void) {
  FTRACE(0x123d9050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9050 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9051 mov ebp, esp */
  EBP = (ESP);
  /* 123d9053 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9054 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9058 jne 0x123d9069 */
  if (!C.zf) goto L_123d9069;
  /* 123d905a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d905e jge 0x123d9069 */
  if ((C.sf==C.of)) goto L_123d9069;
  /* 123d9060 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123d9067 jmp 0x123d9070 */
  goto L_123d9070;
L_123d9069:;
  /* 123d9069 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123d9070:;
  /* 123d9070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9073 push eax */
  push32((uint32_t)(EAX));
  /* 123d9074 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d9077 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9078 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d907b push edx */
  push32((uint32_t)(EDX));
  /* 123d907c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d907f push eax */
  push32((uint32_t)(EAX));
  /* 123d9080 call 0x123d8f80 */
  push32(0x123d9085u); f_123d8f80();
  /* 123d9085 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d908b mov esp, ebp */
  ESP = (EBP);
  /* 123d908d pop ebp */
  EBP = (pop32());
  /* 123d908e ret  */
  ESPCHK(0x123d9050u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x123d9090 (30 bytes, 14 insns) */
void f_123d9090(void) {
  FTRACE(0x123d9090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9090 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9091 mov ebp, esp */
  EBP = (ESP);
  /* 123d9093 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d9095 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d9098 push eax */
  push32((uint32_t)(EAX));
  /* 123d9099 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d909c push ecx */
  push32((uint32_t)(ECX));
  /* 123d909d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d90a0 push edx */
  push32((uint32_t)(EDX));
  /* 123d90a1 call 0x123d8f80 */
  push32(0x123d90a6u); f_123d8f80();
  /* 123d90a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d90a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d90ac pop ebp */
  EBP = (pop32());
  /* 123d90ad ret  */
  ESPCHK(0x123d9090u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x123d90b0 (72 bytes, 28 insns) */
void f_123d90b0(void) {
  FTRACE(0x123d90b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d90b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d90b1 mov ebp, esp */
  EBP = (ESP);
  /* 123d90b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d90b4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d90b8 jne 0x123d90d1 */
  if (!C.zf) goto L_123d90d1;
  /* 123d90ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d90be jg 0x123d90d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_123d90d1;
  /* 123d90c0 jl 0x123d90c8 */
  if ((C.sf!=C.of)) goto L_123d90c8;
  /* 123d90c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d90c6 jae 0x123d90d1 */
  if (!C.cf) goto L_123d90d1;
L_123d90c8:;
  /* 123d90c8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123d90cf jmp 0x123d90d8 */
  goto L_123d90d8;
L_123d90d1:;
  /* 123d90d1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123d90d8:;
  /* 123d90d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d90db push eax */
  push32((uint32_t)(EAX));
  /* 123d90dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d90df push ecx */
  push32((uint32_t)(ECX));
  /* 123d90e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d90e3 push edx */
  push32((uint32_t)(EDX));
  /* 123d90e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d90e7 push eax */
  push32((uint32_t)(EAX));
  /* 123d90e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d90eb push ecx */
  push32((uint32_t)(ECX));
  /* 123d90ec call 0x123d9100 */
  push32(0x123d90f1u); f_123d9100();
  /* 123d90f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d90f4 mov esp, ebp */
  ESP = (EBP);
  /* 123d90f6 pop ebp */
  EBP = (pop32());
  /* 123d90f7 ret  */
  ESPCHK(0x123d90b0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x123d9100 (242 bytes, 91 insns) */
void f_123d9100(void) {
  FTRACE(0x123d9100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9100 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9101 mov ebp, esp */
  EBP = (ESP);
  /* 123d9103 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9106 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d9109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d910c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9110 je 0x123d9134 */
  if (C.zf) goto L_123d9134;
  /* 123d9112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9115 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 123d9118 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d911b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d911e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d9121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9124 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123d9126 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9129 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d912c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123d912e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123d9131 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_123d9134:;
  /* 123d9134 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9137 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123d913a:;
  /* 123d913a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d913d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d913f push ecx */
  push32((uint32_t)(ECX));
  /* 123d9140 push eax */
  push32((uint32_t)(EAX));
  /* 123d9141 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9144 push edx */
  push32((uint32_t)(EDX));
  /* 123d9145 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9148 push eax */
  push32((uint32_t)(EAX));
  /* 123d9149 call 0x123dd080 */
  push32(0x123d914eu); f_123dd080();
  /* 123d914e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d9151 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d9154 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d9156 push edx */
  push32((uint32_t)(EDX));
  /* 123d9157 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d915b push eax */
  push32((uint32_t)(EAX));
  /* 123d915c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d915f push ecx */
  push32((uint32_t)(ECX));
  /* 123d9160 call 0x123dd010 */
  push32(0x123d9165u); f_123dd010();
  /* 123d9165 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123d9168 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 123d916b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d916f jbe 0x123d9187 */
  if ((C.cf||C.zf)) goto L_123d9187;
  /* 123d9171 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d9174 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d917a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d917c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d917f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9182 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123d9185 jmp 0x123d919b */
  goto L_123d919b;
L_123d9187:;
  /* 123d9187 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d918a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d918d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9190 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d9192 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9195 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9198 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123d919b:;
  /* 123d919b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d919f ja 0x123d913a */
  if ((!C.cf&&!C.zf)) goto L_123d913a;
  /* 123d91a1 jb 0x123d91a9 */
  if (C.cf) goto L_123d91a9;
  /* 123d91a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d91a7 ja 0x123d913a */
  if ((!C.cf&&!C.zf)) goto L_123d913a;
L_123d91a9:;
  /* 123d91a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d91ac mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123d91af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d91b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d91b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d91b8:;
  /* 123d91b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d91bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d91bd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 123d91c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d91c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d91c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d91c8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123d91ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d91cd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 123d91d0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123d91d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d91d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d91d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123d91db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d91de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d91e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d91e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d91e7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d91ea jb 0x123d91b8 */
  if (C.cf) goto L_123d91b8;
  /* 123d91ec mov esp, ebp */
  ESP = (EBP);
  /* 123d91ee pop ebp */
  EBP = (pop32());
  /* 123d91ef ret 0x14 */
  ESPCHK(0x123d9100u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x123d9200 (31 bytes, 15 insns) */
void f_123d9200(void) {
  FTRACE(0x123d9200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9200 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9201 mov ebp, esp */
  EBP = (ESP);
  /* 123d9203 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d9205 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d9208 push eax */
  push32((uint32_t)(EAX));
  /* 123d9209 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d920c push ecx */
  push32((uint32_t)(ECX));
  /* 123d920d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9210 push edx */
  push32((uint32_t)(EDX));
  /* 123d9211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9214 push eax */
  push32((uint32_t)(EAX));
  /* 123d9215 call 0x123d9100 */
  push32(0x123d921au); f_123d9100();
  /* 123d921a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d921d pop ebp */
  EBP = (pop32());
  /* 123d921e ret  */
  ESPCHK(0x123d9200u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x123d9220 (123 bytes, 44 insns) */
void f_123d9220(void) {
  FTRACE(0x123d9220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9220 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123d9224 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123d922a je 0x123d9240 */
  if (C.zf) goto L_123d9240;
L_123d922c:;
  /* 123d922c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 123d922e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123d922f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123d9231 je 0x123d9273 */
  if (C.zf) goto L_123d9273;
  /* 123d9233 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123d9239 jne 0x123d922c */
  if (!C.zf) goto L_123d922c;
  /* 123d923b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_123d9240:;
  /* 123d9240 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 123d9242 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 123d9247 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9249 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d924c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123d924e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9251 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 123d9256 je 0x123d9240 */
  if (C.zf) goto L_123d9240;
  /* 123d9258 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 123d925b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123d925d je 0x123d9291 */
  if (C.zf) goto L_123d9291;
  /* 123d925f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123d9261 je 0x123d9287 */
  if (C.zf) goto L_123d9287;
  /* 123d9263 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 123d9268 je 0x123d927d */
  if (C.zf) goto L_123d927d;
  /* 123d926a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 123d926f je 0x123d9273 */
  if (C.zf) goto L_123d9273;
  /* 123d9271 jmp 0x123d9240 */
  goto L_123d9240;
L_123d9273:;
  /* 123d9273 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 123d9276 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123d927a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d927c ret  */
  ESPCHK(0x123d9220u, _esp0);
  ESP += 4; return;
L_123d927d:;
  /* 123d927d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 123d9280 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123d9284 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9286 ret  */
  ESPCHK(0x123d9220u, _esp0);
  ESP += 4; return;
L_123d9287:;
  /* 123d9287 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 123d928a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123d928e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9290 ret  */
  ESPCHK(0x123d9220u, _esp0);
  ESP += 4; return;
L_123d9291:;
  /* 123d9291 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 123d9294 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123d9298 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d929a ret  */
  ESPCHK(0x123d9220u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x123d92a0 (249 bytes, 93 insns) */
void f_123d92a0(void) {
  FTRACE(0x123d92a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d92a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d92a1 mov ebp, esp */
  EBP = (ESP);
  /* 123d92a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d92a6 push ebx */
  push32((uint32_t)(EBX));
  /* 123d92a7 push esi */
  push32((uint32_t)(ESI));
  /* 123d92a8 push edi */
  push32((uint32_t)(EDI));
  /* 123d92a9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 123d92ac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123d92af lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 123d92b2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_123d92b5:;
  /* 123d92b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d92b9 jne 0x123d92d9 */
  if (!C.zf) goto L_123d92d9;
  /* 123d92bb push 0x123fe46c */
  push32((uint32_t)(0x123fe46cu));
  /* 123d92c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d92c2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 123d92c4 push 0x123fe460 */
  push32((uint32_t)(0x123fe460u));
  /* 123d92c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d92cb call 0x123d54b0 */
  push32(0x123d92d0u); f_123d54b0();
  /* 123d92d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d92d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d92d6 jne 0x123d92d9 */
  if (!C.zf) goto L_123d92d9;
  /* 123d92d8 int3  */
  x86_unimpl("int3 @ 0x123d92d8");
L_123d92d9:;
  /* 123d92d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d92db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d92dd jne 0x123d92b5 */
  if (!C.zf) goto L_123d92b5;
L_123d92df:;
  /* 123d92df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d92e3 jne 0x123d9303 */
  if (!C.zf) goto L_123d9303;
  /* 123d92e5 push 0x123fe450 */
  push32((uint32_t)(0x123fe450u));
  /* 123d92ea push 0 */
  push32((uint32_t)(0x0u));
  /* 123d92ec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123d92ee push 0x123fe460 */
  push32((uint32_t)(0x123fe460u));
  /* 123d92f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d92f5 call 0x123d54b0 */
  push32(0x123d92fau); f_123d54b0();
  /* 123d92fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d92fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9300 jne 0x123d9303 */
  if (!C.zf) goto L_123d9303;
  /* 123d9302 int3  */
  x86_unimpl("int3 @ 0x123d9302");
L_123d9303:;
  /* 123d9303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d9305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123d9307 jne 0x123d92df */
  if (!C.zf) goto L_123d92df;
  /* 123d9309 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d930c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 123d9313 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9319 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123d931c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d931f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9322 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123d9324 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9327 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d932a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123d932d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123d9330 push edx */
  push32((uint32_t)(EDX));
  /* 123d9331 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d9334 push eax */
  push32((uint32_t)(EAX));
  /* 123d9335 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9338 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9339 call 0x123dd380 */
  push32(0x123d933eu); f_123dd380();
  /* 123d933e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9341 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123d9344 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9347 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123d934a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d934d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9350 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123d9353 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9356 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d935a jl 0x123d937e */
  if ((C.sf!=C.of)) goto L_123d937e;
  /* 123d935c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d935f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d9361 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 123d9364 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d9366 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d936c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 123d936f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9372 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d9374 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9377 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d937a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123d937c jmp 0x123d938f */
  goto L_123d938f;
L_123d937e:;
  /* 123d937e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9381 push eax */
  push32((uint32_t)(EAX));
  /* 123d9382 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d9384 call 0x123dd100 */
  push32(0x123d9389u); f_123dd100();
  /* 123d9389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d938c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_123d938f:;
  /* 123d938f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123d9392 pop edi */
  EDI = (pop32());
  /* 123d9393 pop esi */
  ESI = (pop32());
  /* 123d9394 pop ebx */
  EBX = (pop32());
  /* 123d9395 mov esp, ebp */
  ESP = (EBP);
  /* 123d9397 pop ebp */
  EBP = (pop32());
  /* 123d9398 ret  */
  ESPCHK(0x123d92a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x123d93a0 (7 bytes, 3 insns) */
void f_123d93a0(void) {
  FTRACE(0x123d93a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d93a0 push edi */
  push32((uint32_t)(EDI));
  /* 123d93a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 123d93a5 jmp 0x123d9411 */
  jmp_ind(0x123d9411u); return;
}

/* FUN_100093b0 @ 0x123d93b0 (224 bytes, 84 insns) */
void f_123d93b0(void) {
  FTRACE(0x123d93b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d93b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123d93b4 push edi */
  push32((uint32_t)(EDI));
  /* 123d93b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123d93bb je 0x123d93cc */
  if (C.zf) goto L_123d93cc;
L_123d93bd:;
  /* 123d93bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 123d93bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123d93c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123d93c2 je 0x123d93ff */
  if (C.zf) goto L_123d93ff;
  /* 123d93c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123d93ca jne 0x123d93bd */
  if (!C.zf) goto L_123d93bd;
L_123d93cc:;
  /* 123d93cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 123d93ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 123d93d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d93d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d93d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123d93da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d93dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 123d93e2 je 0x123d93cc */
  if (C.zf) goto L_123d93cc;
  /* 123d93e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 123d93e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123d93e9 je 0x123d940e */
  if (C.zf) goto L_123d940e;
  /* 123d93eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123d93ed je 0x123d9409 */
  if (C.zf) goto L_123d9409;
  /* 123d93ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 123d93f4 je 0x123d9404 */
  if (C.zf) goto L_123d9404;
  /* 123d93f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 123d93fb je 0x123d93ff */
  if (C.zf) goto L_123d93ff;
  /* 123d93fd jmp 0x123d93cc */
  goto L_123d93cc;
L_123d93ff:;
  /* 123d93ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 123d9402 jmp 0x123d9411 */
  goto L_123d9411;
L_123d9404:;
  /* 123d9404 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 123d9407 jmp 0x123d9411 */
  goto L_123d9411;
L_123d9409:;
  /* 123d9409 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 123d940c jmp 0x123d9411 */
  goto L_123d9411;
L_123d940e:;
  /* 123d940e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_123d9411:;
  /* 123d9411 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 123d9415 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123d941b je 0x123d9436 */
  if (C.zf) goto L_123d9436;
L_123d941d:;
  /* 123d941d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123d941f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123d9420 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 123d9422 je 0x123d9488 */
  if (C.zf) goto L_123d9488;
  /* 123d9424 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 123d9426 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123d9427 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123d942d jne 0x123d941d */
  if (!C.zf) goto L_123d941d;
  /* 123d942f jmp 0x123d9436 */
  goto L_123d9436;
L_123d9431:;
  /* 123d9431 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123d9433 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_123d9436:;
  /* 123d9436 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 123d943b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 123d943d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d943f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d9442 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123d9444 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d9446 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9449 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 123d944e je 0x123d9431 */
  if (C.zf) goto L_123d9431;
  /* 123d9450 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 123d9452 je 0x123d9488 */
  if (C.zf) goto L_123d9488;
  /* 123d9454 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 123d9456 je 0x123d947f */
  if (C.zf) goto L_123d947f;
  /* 123d9458 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 123d945e je 0x123d9472 */
  if (C.zf) goto L_123d9472;
  /* 123d9460 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 123d9466 je 0x123d946a */
  if (C.zf) goto L_123d946a;
  /* 123d9468 jmp 0x123d9431 */
  goto L_123d9431;
L_123d946a:;
  /* 123d946a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123d946c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123d9470 pop edi */
  EDI = (pop32());
  /* 123d9471 ret  */
  ESPCHK(0x123d93b0u, _esp0);
  ESP += 4; return;
L_123d9472:;
  /* 123d9472 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 123d9475 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123d9479 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 123d947d pop edi */
  EDI = (pop32());
  /* 123d947e ret  */
  ESPCHK(0x123d93b0u, _esp0);
  ESP += 4; return;
L_123d947f:;
  /* 123d947f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 123d9482 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123d9486 pop edi */
  EDI = (pop32());
  /* 123d9487 ret  */
  ESPCHK(0x123d93b0u, _esp0);
  ESP += 4; return;
L_123d9488:;
  /* 123d9488 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 123d948a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123d948e pop edi */
  EDI = (pop32());
  /* 123d948f ret  */
  ESPCHK(0x123d93b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009490 @ 0x123d9490 (243 bytes, 91 insns) */
void f_123d9490(void) {
  FTRACE(0x123d9490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9490 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9491 mov ebp, esp */
  EBP = (ESP);
  /* 123d9493 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9496 push ebx */
  push32((uint32_t)(EBX));
  /* 123d9497 push esi */
  push32((uint32_t)(ESI));
  /* 123d9498 push edi */
  push32((uint32_t)(EDI));
  /* 123d9499 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 123d949c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_123d949f:;
  /* 123d949f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d94a3 jne 0x123d94c3 */
  if (!C.zf) goto L_123d94c3;
  /* 123d94a5 push 0x123fe46c */
  push32((uint32_t)(0x123fe46cu));
  /* 123d94aa push 0 */
  push32((uint32_t)(0x0u));
  /* 123d94ac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 123d94ae push 0x123fe47c */
  push32((uint32_t)(0x123fe47cu));
  /* 123d94b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d94b5 call 0x123d54b0 */
  push32(0x123d94bau); f_123d54b0();
  /* 123d94ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d94bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d94c0 jne 0x123d94c3 */
  if (!C.zf) goto L_123d94c3;
  /* 123d94c2 int3  */
  x86_unimpl("int3 @ 0x123d94c2");
L_123d94c3:;
  /* 123d94c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d94c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d94c7 jne 0x123d949f */
  if (!C.zf) goto L_123d949f;
L_123d94c9:;
  /* 123d94c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d94cd jne 0x123d94ed */
  if (!C.zf) goto L_123d94ed;
  /* 123d94cf push 0x123fe450 */
  push32((uint32_t)(0x123fe450u));
  /* 123d94d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d94d6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 123d94d8 push 0x123fe47c */
  push32((uint32_t)(0x123fe47cu));
  /* 123d94dd push 2 */
  push32((uint32_t)(0x2u));
  /* 123d94df call 0x123d54b0 */
  push32(0x123d94e4u); f_123d54b0();
  /* 123d94e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d94e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d94ea jne 0x123d94ed */
  if (!C.zf) goto L_123d94ed;
  /* 123d94ec int3  */
  x86_unimpl("int3 @ 0x123d94ec");
L_123d94ed:;
  /* 123d94ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d94ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123d94f1 jne 0x123d94c9 */
  if (!C.zf) goto L_123d94c9;
  /* 123d94f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d94f6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 123d94fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9500 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9503 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 123d9506 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d950c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123d950e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9511 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9514 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 123d9517 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123d951a push ecx */
  push32((uint32_t)(ECX));
  /* 123d951b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d951e push edx */
  push32((uint32_t)(EDX));
  /* 123d951f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9522 push eax */
  push32((uint32_t)(EAX));
  /* 123d9523 call 0x123dd380 */
  push32(0x123d9528u); f_123dd380();
  /* 123d9528 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d952b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123d952e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9531 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123d9534 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9537 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d953a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123d953d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9540 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9544 jl 0x123d9568 */
  if ((C.sf!=C.of)) goto L_123d9568;
  /* 123d9546 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9549 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d954b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123d954e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123d9550 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123d9556 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123d9559 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d955c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d955e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9561 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d9564 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123d9566 jmp 0x123d9579 */
  goto L_123d9579;
L_123d9568:;
  /* 123d9568 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123d956b push edx */
  push32((uint32_t)(EDX));
  /* 123d956c push 0 */
  push32((uint32_t)(0x0u));
  /* 123d956e call 0x123dd100 */
  push32(0x123d9573u); f_123dd100();
  /* 123d9573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9576 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_123d9579:;
  /* 123d9579 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123d957c pop edi */
  EDI = (pop32());
  /* 123d957d pop esi */
  ESI = (pop32());
  /* 123d957e pop ebx */
  EBX = (pop32());
  /* 123d957f mov esp, ebp */
  ESP = (EBP);
  /* 123d9581 pop ebp */
  EBP = (pop32());
  /* 123d9582 ret  */
  ESPCHK(0x123d9490u, _esp0);
  ESP += 4; return;
}

/* FUN_10009590 @ 0x123d9590 (47 bytes, 17 insns) */
void f_123d9590(void) {
  FTRACE(0x123d9590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9590 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9591 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9596 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 123d959a jb 0x123d95b0 */
  if (C.cf) goto L_123d95b0;
L_123d959c:;
  /* 123d959c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d95a2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d95a7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 123d95a9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d95ae jae 0x123d959c */
  if (!C.cf) goto L_123d959c;
L_123d95b0:;
  /* 123d95b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d95b2 mov eax, esp */
  EAX = (ESP);
  /* 123d95b4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 123d95b6 mov esp, ecx */
  ESP = (ECX);
  /* 123d95b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d95ba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 123d95bd push eax */
  push32((uint32_t)(EAX));
  /* 123d95be ret  */
  ESPCHK(0x123d9590u, _esp0);
  ESP += 4; return;
}

/* FUN_100095c0 @ 0x123d95c0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_123d95c0(void) {
  FTRACE(0x123d95c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d95c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d95c1 mov ebp, esp */
  EBP = (ESP);
  /* 123d95c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d95c6 push esi */
  push32((uint32_t)(ESI));
  /* 123d95c7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d95cb je 0x123d95d3 */
  if (C.zf) goto L_123d95d3;
  /* 123d95cd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d95d1 jne 0x123d95d8 */
  if (!C.zf) goto L_123d95d8;
L_123d95d3:;
  /* 123d95d3 jmp 0x123d97a8 */
  goto L_123d97a8;
L_123d95d8:;
  /* 123d95d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d95dc je 0x123d95f4 */
  if (C.zf) goto L_123d95f4;
  /* 123d95de cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d95e2 je 0x123d95f4 */
  if (C.zf) goto L_123d95f4;
  /* 123d95e4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d95e8 je 0x123d95f4 */
  if (C.zf) goto L_123d95f4;
  /* 123d95ea cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d95ee jne 0x123d96d1 */
  if (!C.zf) goto L_123d96d1;
L_123d95f4:;
  /* 123d95f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d95f6 call 0x123d9df0 */
  push32(0x123d95fbu); f_123d9df0();
  /* 123d95fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d95fe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9602 je 0x123d960a */
  if (C.zf) goto L_123d960a;
  /* 123d9604 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9608 jne 0x123d964f */
  if (!C.zf) goto L_123d964f;
L_123d960a:;
  /* 123d960a cmp dword ptr [0x12402948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9611 jne 0x123d964f */
  if (!C.zf) goto L_123d964f;
  /* 123d9613 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d9615 push 0x123d97f0 */
  push32((uint32_t)(0x123d97f0u));
  /* 123d961a call dword ptr [0x124053a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a0))), 0x123d9620u);
  /* 123d9620 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9623 jne 0x123d9631 */
  if (!C.zf) goto L_123d9631;
  /* 123d9625 mov dword ptr [0x12402948], 1 */
  w32((uint32_t)(0x12402948), (0x1u));
  /* 123d962f jmp 0x123d964f */
  goto L_123d964f;
L_123d9631:;
  /* 123d9631 call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123d9637u);
  /* 123d9637 mov esi, eax */
  ESI = (EAX);
  /* 123d9639 call 0x123de2d0 */
  push32(0x123d963eu); f_123de2d0();
  /* 123d963e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 123d9640 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d9642 call 0x123d9e90 */
  push32(0x123d9647u); f_123d9e90();
  /* 123d9647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d964a jmp 0x123d97a8 */
  goto L_123d97a8;
L_123d964f:;
  /* 123d964f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9652 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123d9655 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9658 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d965b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123d965e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9662 ja 0x123d96c2 */
  if ((!C.cf&&!C.zf)) goto L_123d96c2;
  /* 123d9664 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9667 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d9669 mov dl, byte ptr [eax + 0x123d97cf] */
  DL = (r8((uint32_t)(EAX + 0x123d97cf)));
  /* 123d966f jmp dword ptr [edx*4 + 0x123d97bb] */
  switch (EDX) {
    case 0: goto L_123d9676;
    case 1: goto L_123d96b0;
    case 2: goto L_123d968a;
    case 3: goto L_123d969d;
    case 4: goto L_123d96c2;
    default: x86_unimpl("switch@0x123d966f out of table"); return;
  }
L_123d9676:;
  /* 123d9676 mov ecx, dword ptr [0x12402938] */
  ECX = (r32((uint32_t)(0x12402938)));
  /* 123d967c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123d967f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9682 mov dword ptr [0x12402938], edx */
  w32((uint32_t)(0x12402938), (EDX));
  /* 123d9688 jmp 0x123d96c2 */
  goto L_123d96c2;
L_123d968a:;
  /* 123d968a mov eax, dword ptr [0x1240293c] */
  EAX = (r32((uint32_t)(0x1240293c)));
  /* 123d968f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d9692 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9695 mov dword ptr [0x1240293c], ecx */
  w32((uint32_t)(0x1240293c), (ECX));
  /* 123d969b jmp 0x123d96c2 */
  goto L_123d96c2;
L_123d969d:;
  /* 123d969d mov edx, dword ptr [0x12402940] */
  EDX = (r32((uint32_t)(0x12402940)));
  /* 123d96a3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123d96a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d96a9 mov dword ptr [0x12402940], eax */
  w32((uint32_t)(0x12402940), (EAX));
  /* 123d96ae jmp 0x123d96c2 */
  goto L_123d96c2;
L_123d96b0:;
  /* 123d96b0 mov ecx, dword ptr [0x12402944] */
  ECX = (r32((uint32_t)(0x12402944)));
  /* 123d96b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123d96b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d96bc mov dword ptr [0x12402944], edx */
  w32((uint32_t)(0x12402944), (EDX));
L_123d96c2:;
  /* 123d96c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d96c4 call 0x123d9e90 */
  push32(0x123d96c9u); f_123d9e90();
  /* 123d96c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d96cc jmp 0x123d97a3 */
  goto L_123d97a3;
L_123d96d1:;
  /* 123d96d1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d96d5 je 0x123d96e8 */
  if (C.zf) goto L_123d96e8;
  /* 123d96d7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d96db je 0x123d96e8 */
  if (C.zf) goto L_123d96e8;
  /* 123d96dd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d96e1 je 0x123d96e8 */
  if (C.zf) goto L_123d96e8;
  /* 123d96e3 jmp 0x123d97a8 */
  goto L_123d97a8;
L_123d96e8:;
  /* 123d96e8 call 0x123d5e30 */
  push32(0x123d96edu); f_123d5e30();
  /* 123d96ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d96f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d96f3 cmp dword ptr [eax + 0x50], 0x12400c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12400c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d96fa jne 0x123d9745 */
  if (!C.zf) goto L_123d9745;
  /* 123d96fc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 123d9701 push 0x123fe488 */
  push32((uint32_t)(0x123fe488u));
  /* 123d9706 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d9708 mov ecx, dword ptr [0x12400c80] */
  ECX = (r32((uint32_t)(0x12400c80)));
  /* 123d970e push ecx */
  push32((uint32_t)(ECX));
  /* 123d970f call 0x123d63f0 */
  push32(0x123d9714u); f_123d63f0();
  /* 123d9714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d971a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 123d971d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9720 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9724 je 0x123d9743 */
  if (C.zf) goto L_123d9743;
  /* 123d9726 mov ecx, dword ptr [0x12400c80] */
  ECX = (r32((uint32_t)(0x12400c80)));
  /* 123d972c push ecx */
  push32((uint32_t)(ECX));
  /* 123d972d push 0x12400c00 */
  push32((uint32_t)(0x12400c00u));
  /* 123d9732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9735 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 123d9738 push eax */
  push32((uint32_t)(EAX));
  /* 123d9739 call 0x123dccd0 */
  push32(0x123d973eu); f_123dccd0();
  /* 123d973e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9741 jmp 0x123d9745 */
  goto L_123d9745;
L_123d9743:;
  /* 123d9743 jmp 0x123d97a8 */
  goto L_123d97a8;
L_123d9745:;
  /* 123d9745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9748 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 123d974b push edx */
  push32((uint32_t)(EDX));
  /* 123d974c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d974f push eax */
  push32((uint32_t)(EAX));
  /* 123d9750 call 0x123d9ad0 */
  push32(0x123d9755u); f_123d9ad0();
  /* 123d9755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9758 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d975b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d975f jne 0x123d9763 */
  if (!C.zf) goto L_123d9763;
  /* 123d9761 jmp 0x123d97a8 */
  goto L_123d97a8;
L_123d9763:;
  /* 123d9763 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9766 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 123d9769 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123d976c:;
  /* 123d976c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d976f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123d9772 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9775 jne 0x123d97a3 */
  if (!C.zf) goto L_123d97a3;
  /* 123d9777 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d977a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d977d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123d9780 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9783 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9786 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123d9789 mov edx, dword ptr [0x12400c84] */
  EDX = (r32((uint32_t)(0x12400c84)));
  /* 123d978f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d9792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9795 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 123d9798 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d979a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d979d jb 0x123d97a1 */
  if (C.cf) goto L_123d97a1;
  /* 123d979f jmp 0x123d97a3 */
  goto L_123d97a3;
L_123d97a1:;
  /* 123d97a1 jmp 0x123d976c */
  goto L_123d976c;
L_123d97a3:;
  /* 123d97a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d97a6 jmp 0x123d97b6 */
  goto L_123d97b6;
L_123d97a8:;
  /* 123d97a8 call 0x123de2c0 */
  push32(0x123d97adu); f_123de2c0();
  /* 123d97ad mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 123d97b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123d97b6:;
  /* 123d97b6 pop esi */
  ESI = (pop32());
  /* 123d97b7 mov esp, ebp */
  ESP = (EBP);
  /* 123d97b9 pop ebp */
  EBP = (pop32());
  /* 123d97ba ret  */
  ESPCHK(0x123d95c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097f0 @ 0x123d97f0 (146 bytes, 45 insns) */
void f_123d97f0(void) {
  FTRACE(0x123d97f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d97f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d97f1 mov ebp, esp */
  EBP = (ESP);
  /* 123d97f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d97f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d97f8 call 0x123d9df0 */
  push32(0x123d97fdu); f_123d9df0();
  /* 123d97fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9800 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9804 jne 0x123d981e */
  if (!C.zf) goto L_123d981e;
  /* 123d9806 mov dword ptr [ebp - 8], 0x12402938 */
  w32((uint32_t)(EBP + -0x8), (0x12402938u));
  /* 123d980d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9810 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123d9812 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123d9815 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123d981c jmp 0x123d9834 */
  goto L_123d9834;
L_123d981e:;
  /* 123d981e mov dword ptr [ebp - 8], 0x1240293c */
  w32((uint32_t)(EBP + -0x8), (0x1240293cu));
  /* 123d9825 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9828 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123d982a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d982d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_123d9834:;
  /* 123d9834 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9838 jne 0x123d9848 */
  if (!C.zf) goto L_123d9848;
  /* 123d983a push 1 */
  push32((uint32_t)(0x1u));
  /* 123d983c call 0x123d9e90 */
  push32(0x123d9841u); f_123d9e90();
  /* 123d9841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d9846 jmp 0x123d987c */
  goto L_123d987c;
L_123d9848:;
  /* 123d9848 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d984c je 0x123d986d */
  if (C.zf) goto L_123d986d;
  /* 123d984e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9851 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 123d9857 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d9859 call 0x123d9e90 */
  push32(0x123d985eu); f_123d9e90();
  /* 123d985e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9861 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9864 push edx */
  push32((uint32_t)(EDX));
  /* 123d9865 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x123d9868u);
  /* 123d9868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d986b jmp 0x123d9877 */
  goto L_123d9877;
L_123d986d:;
  /* 123d986d push 1 */
  push32((uint32_t)(0x1u));
  /* 123d986f call 0x123d9e90 */
  push32(0x123d9874u); f_123d9e90();
  /* 123d9874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9877:;
  /* 123d9877 mov eax, 1 */
  EAX = (0x1u);
L_123d987c:;
  /* 123d987c mov esp, ebp */
  ESP = (EBP);
  /* 123d987e pop ebp */
  EBP = (pop32());
  /* 123d987f ret 4 */
  ESPCHK(0x123d97f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009890 @ 0x123d9890 (522 bytes, 162 insns) [1 switch table(s)] */
void f_123d9890(void) {
  FTRACE(0x123d9890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9890 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9891 mov ebp, esp */
  EBP = (ESP);
  /* 123d9893 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9896 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123d989d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d98a0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123d98a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123d98a6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d98a9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123d98ac cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d98b0 ja 0x123d995e */
  if ((!C.cf&&!C.zf)) goto L_123d995e;
  /* 123d98b6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123d98b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d98bb mov dl, byte ptr [eax + 0x123d9ab2] */
  DL = (r8((uint32_t)(EAX + 0x123d9ab2)));
  /* 123d98c1 jmp dword ptr [edx*4 + 0x123d9a9a] */
  switch (EDX) {
    case 0: goto L_123d98c8;
    case 1: goto L_123d9933;
    case 2: goto L_123d9919;
    case 3: goto L_123d98e5;
    case 4: goto L_123d98ff;
    case 5: goto L_123d995e;
    default: x86_unimpl("switch@0x123d98c1 out of table"); return;
  }
L_123d98c8:;
  /* 123d98c8 mov dword ptr [ebp - 0x18], 0x12402938 */
  w32((uint32_t)(EBP + -0x18), (0x12402938u));
  /* 123d98cf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d98d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d98d4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123d98d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d98da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d98dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d98e0 jmp 0x123d9966 */
  goto L_123d9966;
L_123d98e5:;
  /* 123d98e5 mov dword ptr [ebp - 0x18], 0x1240293c */
  w32((uint32_t)(EBP + -0x18), (0x1240293cu));
  /* 123d98ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d98ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d98f1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123d98f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d98f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d98fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d98fd jmp 0x123d9966 */
  goto L_123d9966;
L_123d98ff:;
  /* 123d98ff mov dword ptr [ebp - 0x18], 0x12402940 */
  w32((uint32_t)(EBP + -0x18), (0x12402940u));
  /* 123d9906 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d9909 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d990b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123d990e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d9911 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9914 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d9917 jmp 0x123d9966 */
  goto L_123d9966;
L_123d9919:;
  /* 123d9919 mov dword ptr [ebp - 0x18], 0x12402944 */
  w32((uint32_t)(EBP + -0x18), (0x12402944u));
  /* 123d9920 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d9923 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d9925 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123d9928 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123d992b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d992e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123d9931 jmp 0x123d9966 */
  goto L_123d9966;
L_123d9933:;
  /* 123d9933 call 0x123d5e30 */
  push32(0x123d9938u); f_123d5e30();
  /* 123d9938 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d993b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d993e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 123d9941 push edx */
  push32((uint32_t)(EDX));
  /* 123d9942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9945 push eax */
  push32((uint32_t)(EAX));
  /* 123d9946 call 0x123d9ad0 */
  push32(0x123d994bu); f_123d9ad0();
  /* 123d994b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d994e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9951 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123d9954 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d9957 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123d9959 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123d995c jmp 0x123d9966 */
  goto L_123d9966;
L_123d995e:;
  /* 123d995e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d9961 jmp 0x123d9a96 */
  goto L_123d9a96;
L_123d9966:;
  /* 123d9966 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d996a je 0x123d9976 */
  if (C.zf) goto L_123d9976;
  /* 123d996c push 1 */
  push32((uint32_t)(0x1u));
  /* 123d996e call 0x123d9df0 */
  push32(0x123d9973u); f_123d9df0();
  /* 123d9973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9976:;
  /* 123d9976 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d997a jne 0x123d9993 */
  if (!C.zf) goto L_123d9993;
  /* 123d997c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9980 je 0x123d998c */
  if (C.zf) goto L_123d998c;
  /* 123d9982 push 1 */
  push32((uint32_t)(0x1u));
  /* 123d9984 call 0x123d9e90 */
  push32(0x123d9989u); f_123d9e90();
  /* 123d9989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d998c:;
  /* 123d998c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d998e jmp 0x123d9a96 */
  goto L_123d9a96;
L_123d9993:;
  /* 123d9993 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9997 jne 0x123d99b0 */
  if (!C.zf) goto L_123d99b0;
  /* 123d9999 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d999d je 0x123d99a9 */
  if (C.zf) goto L_123d99a9;
  /* 123d999f push 1 */
  push32((uint32_t)(0x1u));
  /* 123d99a1 call 0x123d9e90 */
  push32(0x123d99a6u); f_123d9e90();
  /* 123d99a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d99a9:;
  /* 123d99a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 123d99ab call 0x123d5bb0 */
  push32(0x123d99b0u); f_123d5bb0();
L_123d99b0:;
  /* 123d99b0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d99b4 je 0x123d99c2 */
  if (C.zf) goto L_123d99c2;
  /* 123d99b6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d99ba je 0x123d99c2 */
  if (C.zf) goto L_123d99c2;
  /* 123d99bc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d99c0 jne 0x123d99ee */
  if (!C.zf) goto L_123d99ee;
L_123d99c2:;
  /* 123d99c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d99c5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 123d99c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123d99cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d99ce mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 123d99d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d99d9 jne 0x123d99ee */
  if (!C.zf) goto L_123d99ee;
  /* 123d99db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d99de mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 123d99e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123d99e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d99e7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_123d99ee:;
  /* 123d99ee cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d99f2 jne 0x123d9a30 */
  if (!C.zf) goto L_123d9a30;
  /* 123d99f4 mov eax, dword ptr [0x12400c78] */
  EAX = (r32((uint32_t)(0x12400c78)));
  /* 123d99f9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123d99fc jmp 0x123d9a07 */
  goto L_123d9a07;
L_123d99fe:;
  /* 123d99fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9a01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9a04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123d9a07:;
  /* 123d9a07 mov edx, dword ptr [0x12400c78] */
  EDX = (r32((uint32_t)(0x12400c78)));
  /* 123d9a0d add edx, dword ptr [0x12400c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12400c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9a13 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9a16 jge 0x123d9a2e */
  if ((C.sf==C.of)) goto L_123d9a2e;
  /* 123d9a18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9a1b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d9a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9a21 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 123d9a24 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 123d9a2c jmp 0x123d99fe */
  goto L_123d99fe;
L_123d9a2e:;
  /* 123d9a2e jmp 0x123d9a39 */
  goto L_123d9a39;
L_123d9a30:;
  /* 123d9a30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123d9a33 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_123d9a39:;
  /* 123d9a39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9a3d je 0x123d9a49 */
  if (C.zf) goto L_123d9a49;
  /* 123d9a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 123d9a41 call 0x123d9e90 */
  push32(0x123d9a46u); f_123d9e90();
  /* 123d9a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9a49:;
  /* 123d9a49 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9a4d jne 0x123d9a60 */
  if (!C.zf) goto L_123d9a60;
  /* 123d9a4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9a52 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 123d9a55 push edx */
  push32((uint32_t)(EDX));
  /* 123d9a56 push 8 */
  push32((uint32_t)(0x8u));
  /* 123d9a58 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x123d9a5bu);
  /* 123d9a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9a5e jmp 0x123d9a6a */
  goto L_123d9a6a;
L_123d9a60:;
  /* 123d9a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9a63 push eax */
  push32((uint32_t)(EAX));
  /* 123d9a64 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x123d9a67u);
  /* 123d9a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9a6a:;
  /* 123d9a6a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9a6e je 0x123d9a7c */
  if (C.zf) goto L_123d9a7c;
  /* 123d9a70 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9a74 je 0x123d9a7c */
  if (C.zf) goto L_123d9a7c;
  /* 123d9a76 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9a7a jne 0x123d9a94 */
  if (!C.zf) goto L_123d9a94;
L_123d9a7c:;
  /* 123d9a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9a7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d9a82 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 123d9a85 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9a89 jne 0x123d9a94 */
  if (!C.zf) goto L_123d9a94;
  /* 123d9a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9a8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9a91 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_123d9a94:;
  /* 123d9a94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d9a96:;
  /* 123d9a96 mov esp, ebp */
  ESP = (EBP);
  /* 123d9a98 pop ebp */
  EBP = (pop32());
  /* 123d9a99 ret  */
  ESPCHK(0x123d9890u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x123d9ad0 (91 bytes, 35 insns) */
void f_123d9ad0(void) {
  FTRACE(0x123d9ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9ad1 mov ebp, esp */
  EBP = (ESP);
  /* 123d9ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9ad4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9ad7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d9ada:;
  /* 123d9ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9add mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123d9ae0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9ae3 je 0x123d9b03 */
  if (C.zf) goto L_123d9b03;
  /* 123d9ae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9ae8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9aeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d9aee mov ecx, dword ptr [0x12400c84] */
  ECX = (r32((uint32_t)(0x12400c84)));
  /* 123d9af4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d9af7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9afa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9afc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9aff jae 0x123d9b03 */
  if (!C.cf) goto L_123d9b03;
  /* 123d9b01 jmp 0x123d9ada */
  goto L_123d9ada;
L_123d9b03:;
  /* 123d9b03 mov eax, dword ptr [0x12400c84] */
  EAX = (r32((uint32_t)(0x12400c84)));
  /* 123d9b08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d9b0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9b0e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9b10 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9b13 jae 0x123d9b25 */
  if (!C.cf) goto L_123d9b25;
  /* 123d9b15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9b18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123d9b1b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9b1e jne 0x123d9b25 */
  if (!C.zf) goto L_123d9b25;
  /* 123d9b20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9b23 jmp 0x123d9b27 */
  goto L_123d9b27;
L_123d9b25:;
  /* 123d9b25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d9b27:;
  /* 123d9b27 mov esp, ebp */
  ESP = (EBP);
  /* 123d9b29 pop ebp */
  EBP = (pop32());
  /* 123d9b2a ret  */
  ESPCHK(0x123d9ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x123d9b30 (13 bytes, 6 insns) */
void f_123d9b30(void) {
  FTRACE(0x123d9b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9b30 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9b31 mov ebp, esp */
  EBP = (ESP);
  /* 123d9b33 call 0x123d5e30 */
  push32(0x123d9b38u); f_123d5e30();
  /* 123d9b38 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9b3b pop ebp */
  EBP = (pop32());
  /* 123d9b3c ret  */
  ESPCHK(0x123d9b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b40 @ 0x123d9b40 (13 bytes, 6 insns) */
void f_123d9b40(void) {
  FTRACE(0x123d9b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9b40 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9b41 mov ebp, esp */
  EBP = (ESP);
  /* 123d9b43 call 0x123d5e30 */
  push32(0x123d9b48u); f_123d5e30();
  /* 123d9b48 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9b4b pop ebp */
  EBP = (pop32());
  /* 123d9b4c ret  */
  ESPCHK(0x123d9b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b50 @ 0x123d9b50 (187 bytes, 54 insns) */
void f_123d9b50(void) {
  FTRACE(0x123d9b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9b50 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9b51 mov ebp, esp */
  EBP = (ESP);
  /* 123d9b53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9b56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123d9b5d cmp dword ptr [0x1240294c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1240294c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9b64 jne 0x123d9bc3 */
  if (!C.zf) goto L_123d9bc3;
  /* 123d9b66 push 0x123fd8b4 */
  push32((uint32_t)(0x123fd8b4u));
  /* 123d9b6b call dword ptr [0x1240532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240532c))), 0x123d9b71u);
  /* 123d9b71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d9b74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9b78 je 0x123d9b97 */
  if (C.zf) goto L_123d9b97;
  /* 123d9b7a push 0x123fe4b8 */
  push32((uint32_t)(0x123fe4b8u));
  /* 123d9b7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9b82 push eax */
  push32((uint32_t)(EAX));
  /* 123d9b83 call dword ptr [0x12405328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405328))), 0x123d9b89u);
  /* 123d9b89 mov dword ptr [0x1240294c], eax */
  w32((uint32_t)(0x1240294c), (EAX));
  /* 123d9b8e cmp dword ptr [0x1240294c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1240294c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9b95 jne 0x123d9b9b */
  if (!C.zf) goto L_123d9b9b;
L_123d9b97:;
  /* 123d9b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d9b99 jmp 0x123d9c07 */
  goto L_123d9c07;
L_123d9b9b:;
  /* 123d9b9b push 0x123fe4a8 */
  push32((uint32_t)(0x123fe4a8u));
  /* 123d9ba0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9ba4 call dword ptr [0x12405328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405328))), 0x123d9baau);
  /* 123d9baa mov dword ptr [0x12402950], eax */
  w32((uint32_t)(0x12402950), (EAX));
  /* 123d9baf push 0x123fe494 */
  push32((uint32_t)(0x123fe494u));
  /* 123d9bb4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9bb7 push edx */
  push32((uint32_t)(EDX));
  /* 123d9bb8 call dword ptr [0x12405328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405328))), 0x123d9bbeu);
  /* 123d9bbe mov dword ptr [0x12402954], eax */
  w32((uint32_t)(0x12402954), (EAX));
L_123d9bc3:;
  /* 123d9bc3 cmp dword ptr [0x12402950], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402950))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9bca je 0x123d9bd5 */
  if (C.zf) goto L_123d9bd5;
  /* 123d9bcc call dword ptr [0x12402950] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402950))), 0x123d9bd2u);
  /* 123d9bd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d9bd5:;
  /* 123d9bd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9bd9 je 0x123d9bf1 */
  if (C.zf) goto L_123d9bf1;
  /* 123d9bdb cmp dword ptr [0x12402954], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12402954))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9be2 je 0x123d9bf1 */
  if (C.zf) goto L_123d9bf1;
  /* 123d9be4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9be7 push eax */
  push32((uint32_t)(EAX));
  /* 123d9be8 call dword ptr [0x12402954] */
  call_ind((uint32_t)(r32((uint32_t)(0x12402954))), 0x123d9beeu);
  /* 123d9bee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d9bf1:;
  /* 123d9bf1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123d9bf4 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9bf5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9bf8 push edx */
  push32((uint32_t)(EDX));
  /* 123d9bf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9bfc push eax */
  push32((uint32_t)(EAX));
  /* 123d9bfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9c00 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9c01 call dword ptr [0x1240294c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240294c))), 0x123d9c07u);
L_123d9c07:;
  /* 123d9c07 mov esp, ebp */
  ESP = (EBP);
  /* 123d9c09 pop ebp */
  EBP = (pop32());
  /* 123d9c0a ret  */
  ESPCHK(0x123d9b50u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x123d9c10 (254 bytes, 109 insns) */
void f_123d9c10(void) {
  FTRACE(0x123d9c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9c10 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 123d9c14 push edi */
  push32((uint32_t)(EDI));
  /* 123d9c15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123d9c17 je 0x123d9c93 */
  if (C.zf) goto L_123d9c93;
  /* 123d9c19 push esi */
  push32((uint32_t)(ESI));
  /* 123d9c1a push ebx */
  push32((uint32_t)(EBX));
  /* 123d9c1b mov ebx, ecx */
  EBX = (ECX);
  /* 123d9c1d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 123d9c21 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 123d9c27 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 123d9c2b jne 0x123d9c34 */
  if (!C.zf) goto L_123d9c34;
  /* 123d9c2d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123d9c30 jne 0x123d9ca1 */
  if (!C.zf) goto L_123d9ca1;
  /* 123d9c32 jmp 0x123d9c55 */
  goto L_123d9c55;
L_123d9c34:;
  /* 123d9c34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123d9c36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123d9c37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123d9c39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123d9c3a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123d9c3b je 0x123d9c62 */
  if (C.zf) goto L_123d9c62;
  /* 123d9c3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123d9c3f je 0x123d9c6a */
  if (C.zf) goto L_123d9c6a;
  /* 123d9c41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 123d9c47 jne 0x123d9c34 */
  if (!C.zf) goto L_123d9c34;
  /* 123d9c49 mov ebx, ecx */
  EBX = (ECX);
  /* 123d9c4b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123d9c4e jne 0x123d9ca1 */
  if (!C.zf) goto L_123d9ca1;
L_123d9c50:;
  /* 123d9c50 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 123d9c53 je 0x123d9c62 */
  if (C.zf) goto L_123d9c62;
L_123d9c55:;
  /* 123d9c55 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123d9c57 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123d9c58 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123d9c5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123d9c5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123d9c5d je 0x123d9c8e */
  if (C.zf) goto L_123d9c8e;
  /* 123d9c5f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 123d9c60 jne 0x123d9c55 */
  if (!C.zf) goto L_123d9c55;
L_123d9c62:;
  /* 123d9c62 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 123d9c66 pop ebx */
  EBX = (pop32());
  /* 123d9c67 pop esi */
  ESI = (pop32());
  /* 123d9c68 pop edi */
  EDI = (pop32());
  /* 123d9c69 ret  */
  ESPCHK(0x123d9c10u, _esp0);
  ESP += 4; return;
L_123d9c6a:;
  /* 123d9c6a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 123d9c70 je 0x123d9c84 */
  if (C.zf) goto L_123d9c84;
L_123d9c72:;
  /* 123d9c72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123d9c74 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123d9c75 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123d9c76 je 0x123d9d06 */
  if (C.zf) goto L_123d9d06;
  /* 123d9c7c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 123d9c82 jne 0x123d9c72 */
  if (!C.zf) goto L_123d9c72;
L_123d9c84:;
  /* 123d9c84 mov ebx, ecx */
  EBX = (ECX);
  /* 123d9c86 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123d9c89 jne 0x123d9cf7 */
  if (!C.zf) goto L_123d9cf7;
L_123d9c8b:;
  /* 123d9c8b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123d9c8d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_123d9c8e:;
  /* 123d9c8e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 123d9c8f jne 0x123d9c8b */
  if (!C.zf) goto L_123d9c8b;
  /* 123d9c91 pop ebx */
  EBX = (pop32());
  /* 123d9c92 pop esi */
  ESI = (pop32());
L_123d9c93:;
  /* 123d9c93 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123d9c97 pop edi */
  EDI = (pop32());
  /* 123d9c98 ret  */
  ESPCHK(0x123d9c10u, _esp0);
  ESP += 4; return;
L_123d9c99:;
  /* 123d9c99 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123d9c9b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9c9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123d9c9f je 0x123d9c50 */
  if (C.zf) goto L_123d9c50;
L_123d9ca1:;
  /* 123d9ca1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 123d9ca6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 123d9ca8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9caa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d9cad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123d9caf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 123d9cb1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9cb4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 123d9cb9 je 0x123d9c99 */
  if (C.zf) goto L_123d9c99;
  /* 123d9cbb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 123d9cbd je 0x123d9ceb */
  if (C.zf) goto L_123d9ceb;
  /* 123d9cbf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 123d9cc1 je 0x123d9ce1 */
  if (C.zf) goto L_123d9ce1;
  /* 123d9cc3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 123d9cc9 je 0x123d9cd7 */
  if (C.zf) goto L_123d9cd7;
  /* 123d9ccb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 123d9cd1 jne 0x123d9c99 */
  if (!C.zf) goto L_123d9c99;
  /* 123d9cd3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123d9cd5 jmp 0x123d9cef */
  goto L_123d9cef;
L_123d9cd7:;
  /* 123d9cd7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d9cdd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123d9cdf jmp 0x123d9cef */
  goto L_123d9cef;
L_123d9ce1:;
  /* 123d9ce1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123d9ce7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123d9ce9 jmp 0x123d9cef */
  goto L_123d9cef;
L_123d9ceb:;
  /* 123d9ceb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123d9ced mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_123d9cef:;
  /* 123d9cef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9cf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123d9cf4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123d9cf5 je 0x123d9d01 */
  if (C.zf) goto L_123d9d01;
L_123d9cf7:;
  /* 123d9cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123d9cf9:;
  /* 123d9cf9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 123d9cfb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9cfe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123d9cff jne 0x123d9cf9 */
  if (!C.zf) goto L_123d9cf9;
L_123d9d01:;
  /* 123d9d01 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 123d9d04 jne 0x123d9c8b */
  if (!C.zf) goto L_123d9c8b;
L_123d9d06:;
  /* 123d9d06 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 123d9d0a pop ebx */
  EBX = (pop32());
  /* 123d9d0b pop esi */
  ESI = (pop32());
  /* 123d9d0c pop edi */
  EDI = (pop32());
  /* 123d9d0d ret  */
  ESPCHK(0x123d9c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d10 @ 0x123d9d10 (55 bytes, 16 insns) */
void f_123d9d10(void) {
  FTRACE(0x123d9d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9d10 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9d11 mov ebp, esp */
  EBP = (ESP);
  /* 123d9d13 mov eax, dword ptr [0x12400b84] */
  EAX = (r32((uint32_t)(0x12400b84)));
  /* 123d9d18 push eax */
  push32((uint32_t)(EAX));
  /* 123d9d19 call dword ptr [0x124053a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a4))), 0x123d9d1fu);
  /* 123d9d1f mov ecx, dword ptr [0x12400b74] */
  ECX = (r32((uint32_t)(0x12400b74)));
  /* 123d9d25 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9d26 call dword ptr [0x124053a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a4))), 0x123d9d2cu);
  /* 123d9d2c mov edx, dword ptr [0x12400b64] */
  EDX = (r32((uint32_t)(0x12400b64)));
  /* 123d9d32 push edx */
  push32((uint32_t)(EDX));
  /* 123d9d33 call dword ptr [0x124053a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a4))), 0x123d9d39u);
  /* 123d9d39 mov eax, dword ptr [0x12400b44] */
  EAX = (r32((uint32_t)(0x12400b44)));
  /* 123d9d3e push eax */
  push32((uint32_t)(EAX));
  /* 123d9d3f call dword ptr [0x124053a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a4))), 0x123d9d45u);
  /* 123d9d45 pop ebp */
  EBP = (pop32());
  /* 123d9d46 ret  */
  ESPCHK(0x123d9d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d50 @ 0x123d9d50 (159 bytes, 47 insns) */
void f_123d9d50(void) {
  FTRACE(0x123d9d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9d50 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9d51 mov ebp, esp */
  EBP = (ESP);
  /* 123d9d53 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9d54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123d9d5b jmp 0x123d9d66 */
  goto L_123d9d66;
L_123d9d5d:;
  /* 123d9d5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9d60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9d63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123d9d66:;
  /* 123d9d66 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9d6a jge 0x123d9db9 */
  if ((C.sf==C.of)) goto L_123d9db9;
  /* 123d9d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9d6f cmp dword ptr [ecx*4 + 0x12400b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12400b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9d77 je 0x123d9db7 */
  if (C.zf) goto L_123d9db7;
  /* 123d9d79 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9d7d je 0x123d9db7 */
  if (C.zf) goto L_123d9db7;
  /* 123d9d7f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9d83 je 0x123d9db7 */
  if (C.zf) goto L_123d9db7;
  /* 123d9d85 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9d89 je 0x123d9db7 */
  if (C.zf) goto L_123d9db7;
  /* 123d9d8b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9d8f je 0x123d9db7 */
  if (C.zf) goto L_123d9db7;
  /* 123d9d91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9d94 mov eax, dword ptr [edx*4 + 0x12400b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12400b40)));
  /* 123d9d9b push eax */
  push32((uint32_t)(EAX));
  /* 123d9d9c call dword ptr [0x12405370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405370))), 0x123d9da2u);
  /* 123d9da2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123d9da4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9da7 mov edx, dword ptr [ecx*4 + 0x12400b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12400b40)));
  /* 123d9dae push edx */
  push32((uint32_t)(EDX));
  /* 123d9daf call 0x123d6e80 */
  push32(0x123d9db4u); f_123d6e80();
  /* 123d9db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9db7:;
  /* 123d9db7 jmp 0x123d9d5d */
  goto L_123d9d5d;
L_123d9db9:;
  /* 123d9db9 mov eax, dword ptr [0x12400b64] */
  EAX = (r32((uint32_t)(0x12400b64)));
  /* 123d9dbe push eax */
  push32((uint32_t)(EAX));
  /* 123d9dbf call dword ptr [0x12405370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405370))), 0x123d9dc5u);
  /* 123d9dc5 mov ecx, dword ptr [0x12400b74] */
  ECX = (r32((uint32_t)(0x12400b74)));
  /* 123d9dcb push ecx */
  push32((uint32_t)(ECX));
  /* 123d9dcc call dword ptr [0x12405370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405370))), 0x123d9dd2u);
  /* 123d9dd2 mov edx, dword ptr [0x12400b84] */
  EDX = (r32((uint32_t)(0x12400b84)));
  /* 123d9dd8 push edx */
  push32((uint32_t)(EDX));
  /* 123d9dd9 call dword ptr [0x12405370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405370))), 0x123d9ddfu);
  /* 123d9ddf mov eax, dword ptr [0x12400b44] */
  EAX = (r32((uint32_t)(0x12400b44)));
  /* 123d9de4 push eax */
  push32((uint32_t)(EAX));
  /* 123d9de5 call dword ptr [0x12405370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405370))), 0x123d9debu);
  /* 123d9deb mov esp, ebp */
  ESP = (EBP);
  /* 123d9ded pop ebp */
  EBP = (pop32());
  /* 123d9dee ret  */
  ESPCHK(0x123d9d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009df0 @ 0x123d9df0 (151 bytes, 46 insns) */
void f_123d9df0(void) {
  FTRACE(0x123d9df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9df0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9df1 mov ebp, esp */
  EBP = (ESP);
  /* 123d9df3 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9df4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9df7 cmp dword ptr [eax*4 + 0x12400b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12400b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9dff jne 0x123d9e72 */
  if (!C.zf) goto L_123d9e72;
  /* 123d9e01 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 123d9e06 push 0x123fe4c4 */
  push32((uint32_t)(0x123fe4c4u));
  /* 123d9e0b push 2 */
  push32((uint32_t)(0x2u));
  /* 123d9e0d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 123d9e0f call 0x123d63f0 */
  push32(0x123d9e14u); f_123d63f0();
  /* 123d9e14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9e17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d9e1a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9e1e jne 0x123d9e2a */
  if (!C.zf) goto L_123d9e2a;
  /* 123d9e20 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123d9e22 call 0x123d5360 */
  push32(0x123d9e27u); f_123d5360();
  /* 123d9e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9e2a:;
  /* 123d9e2a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123d9e2c call 0x123d9df0 */
  push32(0x123d9e31u); f_123d9df0();
  /* 123d9e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9e34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9e37 cmp dword ptr [ecx*4 + 0x12400b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12400b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9e3f jne 0x123d9e5a */
  if (!C.zf) goto L_123d9e5a;
  /* 123d9e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9e44 push edx */
  push32((uint32_t)(EDX));
  /* 123d9e45 call dword ptr [0x124053a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124053a4))), 0x123d9e4bu);
  /* 123d9e4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9e4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9e51 mov dword ptr [eax*4 + 0x12400b40], ecx */
  w32((uint32_t)(EAX*4 + 0x12400b40), (ECX));
  /* 123d9e58 jmp 0x123d9e68 */
  goto L_123d9e68;
L_123d9e5a:;
  /* 123d9e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 123d9e5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123d9e5f push edx */
  push32((uint32_t)(EDX));
  /* 123d9e60 call 0x123d6e80 */
  push32(0x123d9e65u); f_123d6e80();
  /* 123d9e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9e68:;
  /* 123d9e68 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123d9e6a call 0x123d9e90 */
  push32(0x123d9e6fu); f_123d9e90();
  /* 123d9e6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123d9e72:;
  /* 123d9e72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9e75 mov ecx, dword ptr [eax*4 + 0x12400b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12400b40)));
  /* 123d9e7c push ecx */
  push32((uint32_t)(ECX));
  /* 123d9e7d call dword ptr [0x12405308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405308))), 0x123d9e83u);
  /* 123d9e83 mov esp, ebp */
  ESP = (EBP);
  /* 123d9e85 pop ebp */
  EBP = (pop32());
  /* 123d9e86 ret  */
  ESPCHK(0x123d9df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e90 @ 0x123d9e90 (22 bytes, 8 insns) */
void f_123d9e90(void) {
  FTRACE(0x123d9e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9e90 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9e91 mov ebp, esp */
  EBP = (ESP);
  /* 123d9e93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9e96 mov ecx, dword ptr [eax*4 + 0x12400b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12400b40)));
  /* 123d9e9d push ecx */
  push32((uint32_t)(ECX));
  /* 123d9e9e call dword ptr [0x12405304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405304))), 0x123d9ea4u);
  /* 123d9ea4 pop ebp */
  EBP = (pop32());
  /* 123d9ea5 ret  */
  ESPCHK(0x123d9e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009eb0 @ 0x123d9eb0 (26 bytes, 10 insns) */
void f_123d9eb0(void) {
  FTRACE(0x123d9eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9eb1 mov ebp, esp */
  EBP = (ESP);
  /* 123d9eb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9eb6 push eax */
  push32((uint32_t)(EAX));
  /* 123d9eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123d9eb9 call dword ptr [0x1240535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240535c))), 0x123d9ebfu);
  /* 123d9ebf push 0xff */
  push32((uint32_t)(0xffu));
  /* 123d9ec4 call dword ptr [0x12405338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405338))), 0x123d9ecau);
  /* 123d9eca pop ebp */
  EBP = (pop32());
  /* 123d9ecb ret  */
  ESPCHK(0x123d9eb0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x123d9ed0 (446 bytes, 130 insns) */
void f_123d9ed0(void) {
  FTRACE(0x123d9ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123d9ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 123d9ed1 mov ebp, esp */
  EBP = (ESP);
  /* 123d9ed3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123d9ed6 call 0x123d5e30 */
  push32(0x123d9edbu); f_123d5e30();
  /* 123d9edb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123d9ede mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9ee1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 123d9ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123d9ee8 push edx */
  push32((uint32_t)(EDX));
  /* 123d9ee9 call 0x123da090 */
  push32(0x123d9eeeu); f_123da090();
  /* 123d9eee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9ef1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123d9ef4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9ef8 je 0x123d9f03 */
  if (C.zf) goto L_123d9f03;
  /* 123d9efa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9efd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9f01 jne 0x123d9f12 */
  if (!C.zf) goto L_123d9f12;
L_123d9f03:;
  /* 123d9f03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9f06 push ecx */
  push32((uint32_t)(ECX));
  /* 123d9f07 call dword ptr [0x124052fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052fc))), 0x123d9f0du);
  /* 123d9f0d jmp 0x123da08a */
  goto L_123da08a;
L_123d9f12:;
  /* 123d9f12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9f15 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9f19 jne 0x123d9f2f */
  if (!C.zf) goto L_123d9f2f;
  /* 123d9f1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9f1e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 123d9f25 mov eax, 1 */
  EAX = (0x1u);
  /* 123d9f2a jmp 0x123da08a */
  goto L_123da08a;
L_123d9f2f:;
  /* 123d9f2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9f32 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9f36 jne 0x123d9f40 */
  if (!C.zf) goto L_123d9f40;
  /* 123d9f38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123d9f3b jmp 0x123da08a */
  goto L_123da08a;
L_123d9f40:;
  /* 123d9f40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9f43 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123d9f46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123d9f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9f4c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 123d9f4f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123d9f52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9f55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123d9f58 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 123d9f5b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9f5e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9f62 jne 0x123da067 */
  if (!C.zf) goto L_123da067;
  /* 123d9f68 mov eax, dword ptr [0x12400c78] */
  EAX = (r32((uint32_t)(0x12400c78)));
  /* 123d9f6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123d9f70 jmp 0x123d9f7b */
  goto L_123d9f7b;
L_123d9f72:;
  /* 123d9f72 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d9f75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9f78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_123d9f7b:;
  /* 123d9f7b mov edx, dword ptr [0x12400c78] */
  EDX = (r32((uint32_t)(0x12400c78)));
  /* 123d9f81 add edx, dword ptr [0x12400c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12400c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123d9f87 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9f8a jge 0x123d9fa2 */
  if ((C.sf==C.of)) goto L_123d9fa2;
  /* 123d9f8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123d9f8f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123d9f92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9f95 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 123d9f98 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 123d9fa0 jmp 0x123d9f72 */
  goto L_123d9f72;
L_123d9fa2:;
  /* 123d9fa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9fa5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 123d9fa8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123d9fab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9fae cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9fb4 jne 0x123d9fc5 */
  if (!C.zf) goto L_123d9fc5;
  /* 123d9fb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9fb9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 123d9fc0 jmp 0x123da04d */
  goto L_123da04d;
L_123d9fc5:;
  /* 123d9fc5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9fc8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9fce jne 0x123d9fdc */
  if (!C.zf) goto L_123d9fdc;
  /* 123d9fd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9fd3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 123d9fda jmp 0x123da04d */
  goto L_123da04d;
L_123d9fdc:;
  /* 123d9fdc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9fdf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9fe5 jne 0x123d9ff3 */
  if (!C.zf) goto L_123d9ff3;
  /* 123d9fe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123d9fea mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 123d9ff1 jmp 0x123da04d */
  goto L_123da04d;
L_123d9ff3:;
  /* 123d9ff3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123d9ff6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123d9ffc jne 0x123da00a */
  if (!C.zf) goto L_123da00a;
  /* 123d9ffe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da001 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 123da008 jmp 0x123da04d */
  goto L_123da04d;
L_123da00a:;
  /* 123da00a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123da00d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da013 jne 0x123da021 */
  if (!C.zf) goto L_123da021;
  /* 123da015 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da018 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 123da01f jmp 0x123da04d */
  goto L_123da04d;
L_123da021:;
  /* 123da021 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123da024 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da02a jne 0x123da038 */
  if (!C.zf) goto L_123da038;
  /* 123da02c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da02f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 123da036 jmp 0x123da04d */
  goto L_123da04d;
L_123da038:;
  /* 123da038 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123da03b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da041 jne 0x123da04d */
  if (!C.zf) goto L_123da04d;
  /* 123da043 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da046 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_123da04d:;
  /* 123da04d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da050 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 123da053 push edx */
  push32((uint32_t)(EDX));
  /* 123da054 push 8 */
  push32((uint32_t)(0x8u));
  /* 123da056 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x123da059u);
  /* 123da059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da05c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da05f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123da062 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 123da065 jmp 0x123da07e */
  goto L_123da07e;
L_123da067:;
  /* 123da067 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123da06a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 123da071 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123da074 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123da077 push ecx */
  push32((uint32_t)(ECX));
  /* 123da078 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x123da07bu);
  /* 123da07b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123da07e:;
  /* 123da07e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da081 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123da084 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 123da087 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_123da08a:;
  /* 123da08a mov esp, ebp */
  ESP = (EBP);
  /* 123da08c pop ebp */
  EBP = (pop32());
  /* 123da08d ret  */
  ESPCHK(0x123d9ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a090 @ 0x123da090 (89 bytes, 35 insns) */
void f_123da090(void) {
  FTRACE(0x123da090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da090 push ebp */
  push32((uint32_t)(EBP));
  /* 123da091 mov ebp, esp */
  EBP = (ESP);
  /* 123da093 push ecx */
  push32((uint32_t)(ECX));
  /* 123da094 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da097 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123da09a:;
  /* 123da09a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da09d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123da09f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da0a2 je 0x123da0c2 */
  if (C.zf) goto L_123da0c2;
  /* 123da0a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da0a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da0aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123da0ad mov ecx, dword ptr [0x12400c84] */
  ECX = (r32((uint32_t)(0x12400c84)));
  /* 123da0b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123da0b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da0b9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da0bb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da0be jae 0x123da0c2 */
  if (!C.cf) goto L_123da0c2;
  /* 123da0c0 jmp 0x123da09a */
  goto L_123da09a;
L_123da0c2:;
  /* 123da0c2 mov eax, dword ptr [0x12400c84] */
  EAX = (r32((uint32_t)(0x12400c84)));
  /* 123da0c7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123da0ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da0cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da0cf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da0d2 jae 0x123da0de */
  if (!C.cf) goto L_123da0de;
  /* 123da0d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da0d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123da0d9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da0dc je 0x123da0e2 */
  if (C.zf) goto L_123da0e2;
L_123da0de:;
  /* 123da0de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da0e0 jmp 0x123da0e5 */
  goto L_123da0e5;
L_123da0e2:;
  /* 123da0e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123da0e5:;
  /* 123da0e5 mov esp, ebp */
  ESP = (EBP);
  /* 123da0e7 pop ebp */
  EBP = (pop32());
  /* 123da0e8 ret  */
  ESPCHK(0x123da090u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x123da0f0 (48 bytes, 17 insns) */
void f_123da0f0(void) {
  FTRACE(0x123da0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da0f1 mov ebp, esp */
  EBP = (ESP);
  /* 123da0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123da0f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da0f6 call 0x123d9df0 */
  push32(0x123da0fbu); f_123d9df0();
  /* 123da0fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da0fe mov eax, dword ptr [0x124029bc] */
  EAX = (r32((uint32_t)(0x124029bc)));
  /* 123da103 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123da106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da109 mov dword ptr [0x124029bc], ecx */
  w32((uint32_t)(0x124029bc), (ECX));
  /* 123da10f push 9 */
  push32((uint32_t)(0x9u));
  /* 123da111 call 0x123d9e90 */
  push32(0x123da116u); f_123d9e90();
  /* 123da116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da119 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da11c mov esp, ebp */
  ESP = (EBP);
  /* 123da11e pop ebp */
  EBP = (pop32());
  /* 123da11f ret  */
  ESPCHK(0x123da0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a120 @ 0x123da120 (10 bytes, 5 insns) */
void f_123da120(void) {
  FTRACE(0x123da120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da120 push ebp */
  push32((uint32_t)(EBP));
  /* 123da121 mov ebp, esp */
  EBP = (ESP);
  /* 123da123 mov eax, dword ptr [0x124029bc] */
  EAX = (r32((uint32_t)(0x124029bc)));
  /* 123da128 pop ebp */
  EBP = (pop32());
  /* 123da129 ret  */
  ESPCHK(0x123da120u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x123da130 (45 bytes, 19 insns) */
void f_123da130(void) {
  FTRACE(0x123da130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da130 push ebp */
  push32((uint32_t)(EBP));
  /* 123da131 mov ebp, esp */
  EBP = (ESP);
  /* 123da133 push ecx */
  push32((uint32_t)(ECX));
  /* 123da134 mov eax, dword ptr [0x124029bc] */
  EAX = (r32((uint32_t)(0x124029bc)));
  /* 123da139 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123da13c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da140 je 0x123da150 */
  if (C.zf) goto L_123da150;
  /* 123da142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da145 push ecx */
  push32((uint32_t)(ECX));
  /* 123da146 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x123da149u);
  /* 123da149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da14c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da14e jne 0x123da154 */
  if (!C.zf) goto L_123da154;
L_123da150:;
  /* 123da150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da152 jmp 0x123da159 */
  goto L_123da159;
L_123da154:;
  /* 123da154 mov eax, 1 */
  EAX = (0x1u);
L_123da159:;
  /* 123da159 mov esp, ebp */
  ESP = (EBP);
  /* 123da15b pop ebp */
  EBP = (pop32());
  /* 123da15c ret  */
  ESPCHK(0x123da130u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x123da160 (88 bytes, 40 insns) */
void f_123da160(void) {
  FTRACE(0x123da160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da160 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 123da164 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123da168 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123da16a je 0x123da1b3 */
  if (C.zf) goto L_123da1b3;
  /* 123da16c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da16e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 123da172 push edi */
  push32((uint32_t)(EDI));
  /* 123da173 mov edi, ecx */
  EDI = (ECX);
  /* 123da175 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da178 jb 0x123da1a7 */
  if (C.cf) goto L_123da1a7;
  /* 123da17a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123da17c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 123da17f je 0x123da189 */
  if (C.zf) goto L_123da189;
  /* 123da181 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_123da183:;
  /* 123da183 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123da185 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123da186 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123da187 jne 0x123da183 */
  if (!C.zf) goto L_123da183;
L_123da189:;
  /* 123da189 mov ecx, eax */
  ECX = (EAX);
  /* 123da18b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 123da18e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da190 mov ecx, eax */
  ECX = (EAX);
  /* 123da192 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123da195 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da197 mov ecx, edx */
  ECX = (EDX);
  /* 123da199 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 123da19c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 123da19f je 0x123da1a7 */
  if (C.zf) goto L_123da1a7;
  /* 123da1a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123da1a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123da1a5 je 0x123da1ad */
  if (C.zf) goto L_123da1ad;
L_123da1a7:;
  /* 123da1a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 123da1a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123da1aa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 123da1ab jne 0x123da1a7 */
  if (!C.zf) goto L_123da1a7;
L_123da1ad:;
  /* 123da1ad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 123da1b1 pop edi */
  EDI = (pop32());
  /* 123da1b2 ret  */
  ESPCHK(0x123da160u, _esp0);
  ESP += 4; return;
L_123da1b3:;
  /* 123da1b3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 123da1b7 ret  */
  ESPCHK(0x123da160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c0 @ 0x123da1c0 (23 bytes, 10 insns) */
void f_123da1c0(void) {
  FTRACE(0x123da1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da1c1 mov ebp, esp */
  EBP = (ESP);
  /* 123da1c3 mov eax, dword ptr [0x124029b8] */
  EAX = (r32((uint32_t)(0x124029b8)));
  /* 123da1c8 push eax */
  push32((uint32_t)(EAX));
  /* 123da1c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da1cc push ecx */
  push32((uint32_t)(ECX));
  /* 123da1cd call 0x123da1e0 */
  push32(0x123da1d2u); f_123da1e0();
  /* 123da1d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da1d5 pop ebp */
  EBP = (pop32());
  /* 123da1d6 ret  */
  ESPCHK(0x123da1c0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x123da1e0 (87 bytes, 34 insns) */
void f_123da1e0(void) {
  FTRACE(0x123da1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da1e1 mov ebp, esp */
  EBP = (ESP);
  /* 123da1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123da1e4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da1e8 jbe 0x123da1ee */
  if ((C.cf||C.zf)) goto L_123da1ee;
  /* 123da1ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da1ec jmp 0x123da233 */
  goto L_123da233;
L_123da1ee:;
  /* 123da1ee cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da1f2 ja 0x123da205 */
  if ((!C.cf&&!C.zf)) goto L_123da205;
  /* 123da1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da1f7 push eax */
  push32((uint32_t)(EAX));
  /* 123da1f8 call 0x123da240 */
  push32(0x123da1fdu); f_123da240();
  /* 123da1fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da200 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123da203 jmp 0x123da20c */
  goto L_123da20c;
L_123da205:;
  /* 123da205 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123da20c:;
  /* 123da20c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da210 jne 0x123da218 */
  if (!C.zf) goto L_123da218;
  /* 123da212 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da216 jne 0x123da21d */
  if (!C.zf) goto L_123da21d;
L_123da218:;
  /* 123da218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da21b jmp 0x123da233 */
  goto L_123da233;
L_123da21d:;
  /* 123da21d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da220 push ecx */
  push32((uint32_t)(ECX));
  /* 123da221 call 0x123da130 */
  push32(0x123da226u); f_123da130();
  /* 123da226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da22b jne 0x123da231 */
  if (!C.zf) goto L_123da231;
  /* 123da22d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da22f jmp 0x123da233 */
  goto L_123da233;
L_123da231:;
  /* 123da231 jmp 0x123da1ee */
  goto L_123da1ee;
L_123da233:;
  /* 123da233 mov esp, ebp */
  ESP = (EBP);
  /* 123da235 pop ebp */
  EBP = (pop32());
  /* 123da236 ret  */
  ESPCHK(0x123da1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a240 @ 0x123da240 (109 bytes, 37 insns) */
void f_123da240(void) {
  FTRACE(0x123da240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da240 push ebp */
  push32((uint32_t)(EBP));
  /* 123da241 mov ebp, esp */
  EBP = (ESP);
  /* 123da243 push ecx */
  push32((uint32_t)(ECX));
  /* 123da244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da247 cmp eax, dword ptr [0x12400c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12400c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da24d ja 0x123da27d */
  if ((!C.cf&&!C.zf)) goto L_123da27d;
  /* 123da24f push 9 */
  push32((uint32_t)(0x9u));
  /* 123da251 call 0x123d9df0 */
  push32(0x123da256u); f_123d9df0();
  /* 123da256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da259 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da25c push ecx */
  push32((uint32_t)(ECX));
  /* 123da25d call 0x123dad80 */
  push32(0x123da262u); f_123dad80();
  /* 123da262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da265 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123da268 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da26a call 0x123d9e90 */
  push32(0x123da26fu); f_123d9e90();
  /* 123da26f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da272 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da276 je 0x123da27d */
  if (C.zf) goto L_123da27d;
  /* 123da278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da27b jmp 0x123da2a9 */
  goto L_123da2a9;
L_123da27d:;
  /* 123da27d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da281 jne 0x123da28a */
  if (!C.zf) goto L_123da28a;
  /* 123da283 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_123da28a:;
  /* 123da28a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da28d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da290 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 123da293 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123da296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da299 push eax */
  push32((uint32_t)(EAX));
  /* 123da29a push 0 */
  push32((uint32_t)(0x0u));
  /* 123da29c mov ecx, dword ptr [0x1240416c] */
  ECX = (r32((uint32_t)(0x1240416c)));
  /* 123da2a2 push ecx */
  push32((uint32_t)(ECX));
  /* 123da2a3 call dword ptr [0x124052f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052f8))), 0x123da2a9u);
L_123da2a9:;
  /* 123da2a9 mov esp, ebp */
  ESP = (EBP);
  /* 123da2ab pop ebp */
  EBP = (pop32());
  /* 123da2ac ret  */
  ESPCHK(0x123da240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x123da2b0 (10 bytes, 5 insns) */
void f_123da2b0(void) {
  FTRACE(0x123da2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da2b1 mov ebp, esp */
  EBP = (ESP);
  /* 123da2b3 mov eax, 1 */
  EAX = (0x1u);
  /* 123da2b8 pop ebp */
  EBP = (pop32());
  /* 123da2b9 ret  */
  ESPCHK(0x123da2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c0 @ 0x123da2c0 (173 bytes, 59 insns) */
void f_123da2c0(void) {
  FTRACE(0x123da2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da2c1 mov ebp, esp */
  EBP = (ESP);
  /* 123da2c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da2c6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da2ca jbe 0x123da2d3 */
  if ((C.cf||C.zf)) goto L_123da2d3;
  /* 123da2cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da2ce jmp 0x123da369 */
  goto L_123da369;
L_123da2d3:;
  /* 123da2d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da2d5 call 0x123d9df0 */
  push32(0x123da2dau); f_123d9df0();
  /* 123da2da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da2dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da2e0 push eax */
  push32((uint32_t)(EAX));
  /* 123da2e1 call 0x123da6f0 */
  push32(0x123da2e6u); f_123da6f0();
  /* 123da2e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da2e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123da2ec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da2f0 je 0x123da331 */
  if (C.zf) goto L_123da331;
  /* 123da2f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123da2f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da2fc cmp ecx, dword ptr [0x12400c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12400c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da302 ja 0x123da322 */
  if ((!C.cf&&!C.zf)) goto L_123da322;
  /* 123da304 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da307 push edx */
  push32((uint32_t)(EDX));
  /* 123da308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da30b push eax */
  push32((uint32_t)(EAX));
  /* 123da30c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da30f push ecx */
  push32((uint32_t)(ECX));
  /* 123da310 call 0x123db5c0 */
  push32(0x123da315u); f_123db5c0();
  /* 123da315 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da31a je 0x123da322 */
  if (C.zf) goto L_123da322;
  /* 123da31c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da31f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123da322:;
  /* 123da322 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da324 call 0x123d9e90 */
  push32(0x123da329u); f_123d9e90();
  /* 123da329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da32c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da32f jmp 0x123da369 */
  goto L_123da369;
L_123da331:;
  /* 123da331 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da333 call 0x123d9e90 */
  push32(0x123da338u); f_123d9e90();
  /* 123da338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da33b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da33f jne 0x123da348 */
  if (!C.zf) goto L_123da348;
  /* 123da341 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_123da348:;
  /* 123da348 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da34b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da34e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 123da350 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 123da353 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da356 push ecx */
  push32((uint32_t)(ECX));
  /* 123da357 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da35a push edx */
  push32((uint32_t)(EDX));
  /* 123da35b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123da35d mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123da362 push eax */
  push32((uint32_t)(EAX));
  /* 123da363 call dword ptr [0x12405300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405300))), 0x123da369u);
L_123da369:;
  /* 123da369 mov esp, ebp */
  ESP = (EBP);
  /* 123da36b pop ebp */
  EBP = (pop32());
  /* 123da36c ret  */
  ESPCHK(0x123da2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a370 @ 0x123da370 (490 bytes, 165 insns) */
void f_123da370(void) {
  FTRACE(0x123da370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da370 push ebp */
  push32((uint32_t)(EBP));
  /* 123da371 mov ebp, esp */
  EBP = (ESP);
  /* 123da373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da376 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da37a jne 0x123da38d */
  if (!C.zf) goto L_123da38d;
  /* 123da37c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da37f push eax */
  push32((uint32_t)(EAX));
  /* 123da380 call 0x123da1c0 */
  push32(0x123da385u); f_123da1c0();
  /* 123da385 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da388 jmp 0x123da556 */
  goto L_123da556;
L_123da38d:;
  /* 123da38d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da391 jne 0x123da3a6 */
  if (!C.zf) goto L_123da3a6;
  /* 123da393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da396 push ecx */
  push32((uint32_t)(ECX));
  /* 123da397 call 0x123da560 */
  push32(0x123da39cu); f_123da560();
  /* 123da39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da39f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da3a1 jmp 0x123da556 */
  goto L_123da556;
L_123da3a6:;
  /* 123da3a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123da3ad cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da3b1 ja 0x123da529 */
  if ((!C.cf&&!C.zf)) goto L_123da529;
  /* 123da3b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da3b9 call 0x123d9df0 */
  push32(0x123da3beu); f_123d9df0();
  /* 123da3be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da3c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da3c4 push edx */
  push32((uint32_t)(EDX));
  /* 123da3c5 call 0x123da6f0 */
  push32(0x123da3cau); f_123da6f0();
  /* 123da3ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da3cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123da3d0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da3d4 je 0x123da4ec */
  if (C.zf) goto L_123da4ec;
  /* 123da3da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da3dd cmp eax, dword ptr [0x12400c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12400c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da3e3 ja 0x123da460 */
  if ((!C.cf&&!C.zf)) goto L_123da460;
  /* 123da3e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da3e8 push ecx */
  push32((uint32_t)(ECX));
  /* 123da3e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da3ec push edx */
  push32((uint32_t)(EDX));
  /* 123da3ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123da3f0 push eax */
  push32((uint32_t)(EAX));
  /* 123da3f1 call 0x123db5c0 */
  push32(0x123da3f6u); f_123db5c0();
  /* 123da3f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da3f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da3fb je 0x123da405 */
  if (C.zf) goto L_123da405;
  /* 123da3fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da400 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123da403 jmp 0x123da460 */
  goto L_123da460;
L_123da405:;
  /* 123da405 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da408 push edx */
  push32((uint32_t)(EDX));
  /* 123da409 call 0x123dad80 */
  push32(0x123da40eu); f_123dad80();
  /* 123da40e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da411 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123da414 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da418 je 0x123da460 */
  if (C.zf) goto L_123da460;
  /* 123da41a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da41d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 123da420 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da423 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123da426 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da429 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da42c jae 0x123da436 */
  if (!C.cf) goto L_123da436;
  /* 123da42e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da431 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123da434 jmp 0x123da43c */
  goto L_123da43c;
L_123da436:;
  /* 123da436 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da439 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123da43c:;
  /* 123da43c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123da43f push edx */
  push32((uint32_t)(EDX));
  /* 123da440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da443 push eax */
  push32((uint32_t)(EAX));
  /* 123da444 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da447 push ecx */
  push32((uint32_t)(ECX));
  /* 123da448 call 0x123dccd0 */
  push32(0x123da44du); f_123dccd0();
  /* 123da44d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da450 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da453 push edx */
  push32((uint32_t)(EDX));
  /* 123da454 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123da457 push eax */
  push32((uint32_t)(EAX));
  /* 123da458 call 0x123da7b0 */
  push32(0x123da45du); f_123da7b0();
  /* 123da45d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123da460:;
  /* 123da460 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da464 jne 0x123da4e0 */
  if (!C.zf) goto L_123da4e0;
  /* 123da466 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da46a jne 0x123da473 */
  if (!C.zf) goto L_123da473;
  /* 123da46c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_123da473:;
  /* 123da473 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da476 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da479 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 123da47c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 123da47f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da482 push edx */
  push32((uint32_t)(EDX));
  /* 123da483 push 0 */
  push32((uint32_t)(0x0u));
  /* 123da485 mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123da48a push eax */
  push32((uint32_t)(EAX));
  /* 123da48b call dword ptr [0x124052f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124052f8))), 0x123da491u);
  /* 123da491 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123da494 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da498 je 0x123da4e0 */
  if (C.zf) goto L_123da4e0;
  /* 123da49a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da49d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 123da4a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123da4a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123da4a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da4a9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da4ac jae 0x123da4b6 */
  if (!C.cf) goto L_123da4b6;
  /* 123da4ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da4b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123da4b4 jmp 0x123da4bc */
  goto L_123da4bc;
L_123da4b6:;
  /* 123da4b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da4b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_123da4bc:;
  /* 123da4bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123da4bf push eax */
  push32((uint32_t)(EAX));
  /* 123da4c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123da4c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da4c7 push edx */
  push32((uint32_t)(EDX));
  /* 123da4c8 call 0x123dccd0 */
  push32(0x123da4cdu); f_123dccd0();
  /* 123da4cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da4d3 push eax */
  push32((uint32_t)(EAX));
  /* 123da4d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123da4d7 push ecx */
  push32((uint32_t)(ECX));
  /* 123da4d8 call 0x123da7b0 */
  push32(0x123da4ddu); f_123da7b0();
  /* 123da4dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123da4e0:;
  /* 123da4e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da4e2 call 0x123d9e90 */
  push32(0x123da4e7u); f_123d9e90();
  /* 123da4e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da4ea jmp 0x123da529 */
  goto L_123da529;
L_123da4ec:;
  /* 123da4ec push 9 */
  push32((uint32_t)(0x9u));
  /* 123da4ee call 0x123d9e90 */
  push32(0x123da4f3u); f_123d9e90();
  /* 123da4f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da4f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da4fa jne 0x123da503 */
  if (!C.zf) goto L_123da503;
  /* 123da4fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_123da503:;
  /* 123da503 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da506 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123da509 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 123da50c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 123da50f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da512 push eax */
  push32((uint32_t)(EAX));
  /* 123da513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da516 push ecx */
  push32((uint32_t)(ECX));
  /* 123da517 push 0 */
  push32((uint32_t)(0x0u));
  /* 123da519 mov edx, dword ptr [0x1240416c] */
  EDX = (r32((uint32_t)(0x1240416c)));
  /* 123da51f push edx */
  push32((uint32_t)(EDX));
  /* 123da520 call dword ptr [0x12405300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405300))), 0x123da526u);
  /* 123da526 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123da529:;
  /* 123da529 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da52d jne 0x123da538 */
  if (!C.zf) goto L_123da538;
  /* 123da52f cmp dword ptr [0x124029b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124029b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da536 jne 0x123da53d */
  if (!C.zf) goto L_123da53d;
L_123da538:;
  /* 123da538 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123da53b jmp 0x123da556 */
  goto L_123da556;
L_123da53d:;
  /* 123da53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123da540 push eax */
  push32((uint32_t)(EAX));
  /* 123da541 call 0x123da130 */
  push32(0x123da546u); f_123da130();
  /* 123da546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da54b jne 0x123da551 */
  if (!C.zf) goto L_123da551;
  /* 123da54d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123da54f jmp 0x123da556 */
  goto L_123da556;
L_123da551:;
  /* 123da551 jmp 0x123da3a6 */
  goto L_123da3a6;
L_123da556:;
  /* 123da556 mov esp, ebp */
  ESP = (EBP);
  /* 123da558 pop ebp */
  EBP = (pop32());
  /* 123da559 ret  */
  ESPCHK(0x123da370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a560 @ 0x123da560 (104 bytes, 38 insns) */
void f_123da560(void) {
  FTRACE(0x123da560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da560 push ebp */
  push32((uint32_t)(EBP));
  /* 123da561 mov ebp, esp */
  EBP = (ESP);
  /* 123da563 push ecx */
  push32((uint32_t)(ECX));
  /* 123da564 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da568 jne 0x123da56c */
  if (!C.zf) goto L_123da56c;
  /* 123da56a jmp 0x123da5c4 */
  goto L_123da5c4;
L_123da56c:;
  /* 123da56c push 9 */
  push32((uint32_t)(0x9u));
  /* 123da56e call 0x123d9df0 */
  push32(0x123da573u); f_123d9df0();
  /* 123da573 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da579 push eax */
  push32((uint32_t)(EAX));
  /* 123da57a call 0x123da6f0 */
  push32(0x123da57fu); f_123da6f0();
  /* 123da57f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da582 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123da585 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da589 je 0x123da5a7 */
  if (C.zf) goto L_123da5a7;
  /* 123da58b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da58e push ecx */
  push32((uint32_t)(ECX));
  /* 123da58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da592 push edx */
  push32((uint32_t)(EDX));
  /* 123da593 call 0x123da7b0 */
  push32(0x123da598u); f_123da7b0();
  /* 123da598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da59b push 9 */
  push32((uint32_t)(0x9u));
  /* 123da59d call 0x123d9e90 */
  push32(0x123da5a2u); f_123d9e90();
  /* 123da5a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da5a5 jmp 0x123da5c4 */
  goto L_123da5c4;
L_123da5a7:;
  /* 123da5a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da5a9 call 0x123d9e90 */
  push32(0x123da5aeu); f_123d9e90();
  /* 123da5ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da5b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123da5b4 push eax */
  push32((uint32_t)(EAX));
  /* 123da5b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123da5b7 mov ecx, dword ptr [0x1240416c] */
  ECX = (r32((uint32_t)(0x1240416c)));
  /* 123da5bd push ecx */
  push32((uint32_t)(ECX));
  /* 123da5be call dword ptr [0x12405398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12405398))), 0x123da5c4u);
L_123da5c4:;
  /* 123da5c4 mov esp, ebp */
  ESP = (EBP);
  /* 123da5c6 pop ebp */
  EBP = (pop32());
  /* 123da5c7 ret  */
  ESPCHK(0x123da560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5d0 @ 0x123da5d0 (116 bytes, 34 insns) */
void f_123da5d0(void) {
  FTRACE(0x123da5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123da5d1 mov ebp, esp */
  EBP = (ESP);
  /* 123da5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123da5d4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 123da5db push 9 */
  push32((uint32_t)(0x9u));
  /* 123da5dd call 0x123d9df0 */
  push32(0x123da5e2u); f_123d9df0();
  /* 123da5e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da5e5 call 0x123dbce0 */
  push32(0x123da5eau); f_123dbce0();
  /* 123da5ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da5ec jge 0x123da5f5 */
  if ((C.sf==C.of)) goto L_123da5f5;
  /* 123da5ee mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_123da5f5:;
  /* 123da5f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 123da5f7 call 0x123d9e90 */
  push32(0x123da5fcu); f_123d9e90();
  /* 123da5fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123da5ff push 0 */
  push32((uint32_t)(0x0u));
  /* 123da601 push 0 */
  push32((uint32_t)(0x0u));
  /* 123da603 mov eax, dword ptr [0x1240416c] */
  EAX = (r32((uint32_t)(0x1240416c)));
  /* 123da608 push eax */
  push32((uint32_t)(EAX));
  /* 123da609 call dword ptr [0x1240537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240537c))), 0x123da60fu);
  /* 123da60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123da611 jne 0x123da63d */
  if (!C.zf) goto L_123da63d;
  /* 123da613 call dword ptr [0x1240528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1240528c))), 0x123da619u);
  /* 123da619 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123da61c jne 0x123da636 */
  if (!C.zf) goto L_123da636;
  /* 123da61e call 0x123de2d0 */
  push32(0x123da623u); f_123de2d0();
  /* 123da623 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 123da629 call 0x123de2c0 */
  push32(0x123da62eu); f_123de2c0();
  /* 123da62e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 123da634 jmp 0x123da63d */
  goto L_123da63d;
L_123da636:;
  /* 123da636 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_123da63d:;
  /* 123da63d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123da640 mov esp, ebp */
  ESP = (EBP);
  /* 123da642 pop ebp */
  EBP = (pop32());
  /* 123da643 ret  */
  ESPCHK(0x123da5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a650 @ 0x123da650 (10 bytes, 5 insns) */
void f_123da650(void) {
  FTRACE(0x123da650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123da650 push ebp */
  push32((uint32_t)(EBP));
  /* 123da651 mov ebp, esp */
  EBP = (ESP);
  /* 123da653 call 0x123da5d0 */
  push32(0x123da658u); f_123da5d0();
  /* 123da658 pop ebp */
  EBP = (pop32());
  /* 123da659 ret  */
  ESPCHK(0x123da650u, _esp0);
  ESP += 4; return;
}

