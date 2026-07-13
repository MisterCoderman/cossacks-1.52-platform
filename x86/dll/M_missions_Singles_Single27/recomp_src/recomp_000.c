#include "recomp.h"

/* OnInit @ 0x113d1005 (5 bytes, 1 insns) */
void f_113d1005(void) {
  FTRACE(0x113d1005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d1005 jmp 0x113d1090 */
  f_113d1090(); return;
}

/* thunk_FUN_10001030 @ 0x113d100a (5 bytes, 1 insns) */
void f_113d100a(void) {
  FTRACE(0x113d100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d100a jmp 0x113d1030 */
  f_113d1030(); return;
}

/* ProcessScenary @ 0x113d100f (5 bytes, 1 insns) */
void f_113d100f(void) {
  FTRACE(0x113d100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d100f jmp 0x113d1570 */
  f_113d1570(); return;
}

/* FUN_10001030 @ 0x113d1030 (67 bytes, 26 insns) */
void f_113d1030(void) {
  FTRACE(0x113d1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d1030 push ebp */
  push32((uint32_t)(EBP));
  /* 113d1031 mov ebp, esp */
  EBP = (ESP);
  /* 113d1033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d1036 push ebx */
  push32((uint32_t)(EBX));
  /* 113d1037 push esi */
  push32((uint32_t)(ESI));
  /* 113d1038 push edi */
  push32((uint32_t)(EDI));
  /* 113d1039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 113d103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 113d1041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 113d1046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113d1048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1052 je 0x113d1056 */
  if (C.zf) goto L_113d1056;
  /* 113d1054 jmp 0x113d105b */
  goto L_113d105b;
L_113d1056:;
  /* 113d1056 call 0x113d1005 */
  push32(0x113d105bu); f_113d1005();
L_113d105b:;
  /* 113d105b mov eax, 1 */
  EAX = (0x1u);
  /* 113d1060 pop edi */
  EDI = (pop32());
  /* 113d1061 pop esi */
  ESI = (pop32());
  /* 113d1062 pop ebx */
  EBX = (pop32());
  /* 113d1063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1068 call 0x113d2a20 */
  push32(0x113d106du); f_113d2a20();
  /* 113d106d mov esp, ebp */
  ESP = (EBP);
  /* 113d106f pop ebp */
  EBP = (pop32());
  /* 113d1070 ret 0xc */
  ESPCHK(0x113d1030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x113d1090 (987 bytes, 262 insns) */
void f_113d1090(void) {
  FTRACE(0x113d1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d1090 push ebp */
  push32((uint32_t)(EBP));
  /* 113d1091 mov ebp, esp */
  EBP = (ESP);
  /* 113d1093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d1096 push ebx */
  push32((uint32_t)(EBX));
  /* 113d1097 push esi */
  push32((uint32_t)(ESI));
  /* 113d1098 push edi */
  push32((uint32_t)(EDI));
  /* 113d1099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 113d109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 113d10a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 113d10a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113d10a8 mov esi, esp */
  ESI = (ESP);
  /* 113d10aa push 0x113fa0ec */
  push32((uint32_t)(0x113fa0ecu));
  /* 113d10af push 0 */
  push32((uint32_t)(0x0u));
  /* 113d10b1 call dword ptr [0x114024a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a4))), 0x113d10b7u);
  /* 113d10b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d10ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d10bc call 0x113d2a20 */
  push32(0x113d10c1u); f_113d2a20();
  /* 113d10c1 mov esi, esp */
  ESI = (ESP);
  /* 113d10c3 push 0x113fa0ec */
  push32((uint32_t)(0x113fa0ecu));
  /* 113d10c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d10ca call dword ptr [0x114024a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a4))), 0x113d10d0u);
  /* 113d10d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d10d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d10d5 call 0x113d2a20 */
  push32(0x113d10dau); f_113d2a20();
  /* 113d10da mov esi, esp */
  ESI = (ESP);
  /* 113d10dc push 0x113fa0e4 */
  push32((uint32_t)(0x113fa0e4u));
  /* 113d10e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d10e3 call dword ptr [0x114024a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a4))), 0x113d10e9u);
  /* 113d10e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d10ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d10ee call 0x113d2a20 */
  push32(0x113d10f3u); f_113d2a20();
  /* 113d10f3 mov esi, esp */
  ESI = (ESP);
  /* 113d10f5 push 0x113fa0d8 */
  push32((uint32_t)(0x113fa0d8u));
  /* 113d10fa push 3 */
  push32((uint32_t)(0x3u));
  /* 113d10fc call dword ptr [0x114024a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a4))), 0x113d1102u);
  /* 113d1102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1107 call 0x113d2a20 */
  push32(0x113d110cu); f_113d2a20();
  /* 113d110c mov esi, esp */
  ESI = (ESP);
  /* 113d110e push 0x113fa0cc */
  push32((uint32_t)(0x113fa0ccu));
  /* 113d1113 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1115 call dword ptr [0x114024a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a4))), 0x113d111bu);
  /* 113d111b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d111e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1120 call 0x113d2a20 */
  push32(0x113d1125u); f_113d2a20();
  /* 113d1125 mov esi, esp */
  ESI = (ESP);
  /* 113d1127 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1129 push 0x113ff4b0 */
  push32((uint32_t)(0x113ff4b0u));
  /* 113d112e call dword ptr [0x114024a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a8))), 0x113d1134u);
  /* 113d1134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1137 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1139 call 0x113d2a20 */
  push32(0x113d113eu); f_113d2a20();
  /* 113d113e mov esi, esp */
  ESI = (ESP);
  /* 113d1140 push 0x113fa0c4 */
  push32((uint32_t)(0x113fa0c4u));
  /* 113d1145 push 0x113ff3f0 */
  push32((uint32_t)(0x113ff3f0u));
  /* 113d114a call dword ptr [0x114024a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a0))), 0x113d1150u);
  /* 113d1150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1155 call 0x113d2a20 */
  push32(0x113d115au); f_113d2a20();
  /* 113d115a mov esi, esp */
  ESI = (ESP);
  /* 113d115c push 0x113fa0c0 */
  push32((uint32_t)(0x113fa0c0u));
  /* 113d1161 push 0x113ff418 */
  push32((uint32_t)(0x113ff418u));
  /* 113d1166 call dword ptr [0x114024a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a0))), 0x113d116cu);
  /* 113d116c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d116f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1171 call 0x113d2a20 */
  push32(0x113d1176u); f_113d2a20();
  /* 113d1176 mov esi, esp */
  ESI = (ESP);
  /* 113d1178 push 0x113fa0b4 */
  push32((uint32_t)(0x113fa0b4u));
  /* 113d117d push 0x113ff3f8 */
  push32((uint32_t)(0x113ff3f8u));
  /* 113d1182 call dword ptr [0x114024a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024a0))), 0x113d1188u);
  /* 113d1188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d118b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d118d call 0x113d2a20 */
  push32(0x113d1192u); f_113d2a20();
  /* 113d1192 mov esi, esp */
  ESI = (ESP);
  /* 113d1194 push 0x113fa0b0 */
  push32((uint32_t)(0x113fa0b0u));
  /* 113d1199 push 0x113ff428 */
  push32((uint32_t)(0x113ff428u));
  /* 113d119e call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d11a4u);
  /* 113d11a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d11a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d11a9 call 0x113d2a20 */
  push32(0x113d11aeu); f_113d2a20();
  /* 113d11ae mov esi, esp */
  ESI = (ESP);
  /* 113d11b0 push 0x113fa0ac */
  push32((uint32_t)(0x113fa0acu));
  /* 113d11b5 push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d11ba call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d11c0u);
  /* 113d11c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d11c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d11c5 call 0x113d2a20 */
  push32(0x113d11cau); f_113d2a20();
  /* 113d11ca mov esi, esp */
  ESI = (ESP);
  /* 113d11cc push 0x113fa0a8 */
  push32((uint32_t)(0x113fa0a8u));
  /* 113d11d1 push 0x113ff438 */
  push32((uint32_t)(0x113ff438u));
  /* 113d11d6 call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d11dcu);
  /* 113d11dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d11df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d11e1 call 0x113d2a20 */
  push32(0x113d11e6u); f_113d2a20();
  /* 113d11e6 mov esi, esp */
  ESI = (ESP);
  /* 113d11e8 push 0x113fa0a4 */
  push32((uint32_t)(0x113fa0a4u));
  /* 113d11ed push 0x113ff440 */
  push32((uint32_t)(0x113ff440u));
  /* 113d11f2 call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d11f8u);
  /* 113d11f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d11fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d11fd call 0x113d2a20 */
  push32(0x113d1202u); f_113d2a20();
  /* 113d1202 mov esi, esp */
  ESI = (ESP);
  /* 113d1204 push 0x113fa0a0 */
  push32((uint32_t)(0x113fa0a0u));
  /* 113d1209 push 0x113ff448 */
  push32((uint32_t)(0x113ff448u));
  /* 113d120e call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d1214u);
  /* 113d1214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1219 call 0x113d2a20 */
  push32(0x113d121eu); f_113d2a20();
  /* 113d121e mov esi, esp */
  ESI = (ESP);
  /* 113d1220 push 0x113fa09c */
  push32((uint32_t)(0x113fa09cu));
  /* 113d1225 push 0x113ff450 */
  push32((uint32_t)(0x113ff450u));
  /* 113d122a call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d1230u);
  /* 113d1230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1233 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1235 call 0x113d2a20 */
  push32(0x113d123au); f_113d2a20();
  /* 113d123a mov esi, esp */
  ESI = (ESP);
  /* 113d123c push 0x113fa098 */
  push32((uint32_t)(0x113fa098u));
  /* 113d1241 push 0x113ff458 */
  push32((uint32_t)(0x113ff458u));
  /* 113d1246 call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d124cu);
  /* 113d124c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d124f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1251 call 0x113d2a20 */
  push32(0x113d1256u); f_113d2a20();
  /* 113d1256 mov esi, esp */
  ESI = (ESP);
  /* 113d1258 push 0x113fa094 */
  push32((uint32_t)(0x113fa094u));
  /* 113d125d push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d1262 call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d1268u);
  /* 113d1268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d126b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d126d call 0x113d2a20 */
  push32(0x113d1272u); f_113d2a20();
  /* 113d1272 mov esi, esp */
  ESI = (ESP);
  /* 113d1274 push 0x113fa090 */
  push32((uint32_t)(0x113fa090u));
  /* 113d1279 push 0x113ff468 */
  push32((uint32_t)(0x113ff468u));
  /* 113d127e call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d1284u);
  /* 113d1284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1287 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1289 call 0x113d2a20 */
  push32(0x113d128eu); f_113d2a20();
  /* 113d128e mov esi, esp */
  ESI = (ESP);
  /* 113d1290 push 0x113fa08c */
  push32((uint32_t)(0x113fa08cu));
  /* 113d1295 push 0x113ff480 */
  push32((uint32_t)(0x113ff480u));
  /* 113d129a call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d12a0u);
  /* 113d12a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d12a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d12a5 call 0x113d2a20 */
  push32(0x113d12aau); f_113d2a20();
  /* 113d12aa mov esi, esp */
  ESI = (ESP);
  /* 113d12ac push 0x113fa088 */
  push32((uint32_t)(0x113fa088u));
  /* 113d12b1 push 0x113ff488 */
  push32((uint32_t)(0x113ff488u));
  /* 113d12b6 call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d12bcu);
  /* 113d12bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d12bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d12c1 call 0x113d2a20 */
  push32(0x113d12c6u); f_113d2a20();
  /* 113d12c6 mov esi, esp */
  ESI = (ESP);
  /* 113d12c8 push 0x113fa084 */
  push32((uint32_t)(0x113fa084u));
  /* 113d12cd push 0x113ff490 */
  push32((uint32_t)(0x113ff490u));
  /* 113d12d2 call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d12d8u);
  /* 113d12d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d12db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d12dd call 0x113d2a20 */
  push32(0x113d12e2u); f_113d2a20();
  /* 113d12e2 mov esi, esp */
  ESI = (ESP);
  /* 113d12e4 push 0x113fa080 */
  push32((uint32_t)(0x113fa080u));
  /* 113d12e9 push 0x113ff498 */
  push32((uint32_t)(0x113ff498u));
  /* 113d12ee call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d12f4u);
  /* 113d12f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d12f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d12f9 call 0x113d2a20 */
  push32(0x113d12feu); f_113d2a20();
  /* 113d12fe mov esi, esp */
  ESI = (ESP);
  /* 113d1300 push 0x113fa07c */
  push32((uint32_t)(0x113fa07cu));
  /* 113d1305 push 0x113ff4a0 */
  push32((uint32_t)(0x113ff4a0u));
  /* 113d130a call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d1310u);
  /* 113d1310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1315 call 0x113d2a20 */
  push32(0x113d131au); f_113d2a20();
  /* 113d131a mov esi, esp */
  ESI = (ESP);
  /* 113d131c push 0x113fa078 */
  push32((uint32_t)(0x113fa078u));
  /* 113d1321 push 0x113ff4a8 */
  push32((uint32_t)(0x113ff4a8u));
  /* 113d1326 call dword ptr [0x114024b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b0))), 0x113d132cu);
  /* 113d132c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d132f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1331 call 0x113d2a20 */
  push32(0x113d1336u); f_113d2a20();
  /* 113d1336 mov esi, esp */
  ESI = (ESP);
  /* 113d1338 push 0x113fa06c */
  push32((uint32_t)(0x113fa06cu));
  /* 113d133d push 0x113ff420 */
  push32((uint32_t)(0x113ff420u));
  /* 113d1342 call dword ptr [0x114024b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b4))), 0x113d1348u);
  /* 113d1348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d134b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d134d call 0x113d2a20 */
  push32(0x113d1352u); f_113d2a20();
  /* 113d1352 mov esi, esp */
  ESI = (ESP);
  /* 113d1354 push 0x113fa058 */
  push32((uint32_t)(0x113fa058u));
  /* 113d1359 push 0x113ff3e0 */
  push32((uint32_t)(0x113ff3e0u));
  /* 113d135e call dword ptr [0x114024b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b4))), 0x113d1364u);
  /* 113d1364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1367 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1369 call 0x113d2a20 */
  push32(0x113d136eu); f_113d2a20();
  /* 113d136e mov esi, esp */
  ESI = (ESP);
  /* 113d1370 push 0x113fa048 */
  push32((uint32_t)(0x113fa048u));
  /* 113d1375 push 0x113ff4b8 */
  push32((uint32_t)(0x113ff4b8u));
  /* 113d137a call dword ptr [0x114024b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b4))), 0x113d1380u);
  /* 113d1380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1385 call 0x113d2a20 */
  push32(0x113d138au); f_113d2a20();
  /* 113d138a mov esi, esp */
  ESI = (ESP);
  /* 113d138c push 0x113fa03c */
  push32((uint32_t)(0x113fa03cu));
  /* 113d1391 push 0x113ff478 */
  push32((uint32_t)(0x113ff478u));
  /* 113d1396 call dword ptr [0x114024ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024ac))), 0x113d139cu);
  /* 113d139c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d139f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d13a1 call 0x113d2a20 */
  push32(0x113d13a6u); f_113d2a20();
  /* 113d13a6 mov esi, esp */
  ESI = (ESP);
  /* 113d13a8 push 0x113fa02c */
  push32((uint32_t)(0x113fa02cu));
  /* 113d13ad push 0x113ff4c0 */
  push32((uint32_t)(0x113ff4c0u));
  /* 113d13b2 call dword ptr [0x114024ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024ac))), 0x113d13b8u);
  /* 113d13b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d13bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d13bd call 0x113d2a20 */
  push32(0x113d13c2u); f_113d2a20();
  /* 113d13c2 mov esi, esp */
  ESI = (ESP);
  /* 113d13c4 push 0x113fa01c */
  push32((uint32_t)(0x113fa01cu));
  /* 113d13c9 push 0x113ff400 */
  push32((uint32_t)(0x113ff400u));
  /* 113d13ce call dword ptr [0x114024ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024ac))), 0x113d13d4u);
  /* 113d13d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d13d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d13d9 call 0x113d2a20 */
  push32(0x113d13deu); f_113d2a20();
  /* 113d13de mov esi, esp */
  ESI = (ESP);
  /* 113d13e0 push 0x113ff408 */
  push32((uint32_t)(0x113ff408u));
  /* 113d13e5 call dword ptr [0x114024bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024bc))), 0x113d13ebu);
  /* 113d13eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d13ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d13f0 call 0x113d2a20 */
  push32(0x113d13f5u); f_113d2a20();
  /* 113d13f5 mov esi, esp */
  ESI = (ESP);
  /* 113d13f7 push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d13fc call dword ptr [0x114024bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024bc))), 0x113d1402u);
  /* 113d1402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1407 call 0x113d2a20 */
  push32(0x113d140cu); f_113d2a20();
  /* 113d140c mov esi, esp */
  ESI = (ESP);
  /* 113d140e push 0x113ff470 */
  push32((uint32_t)(0x113ff470u));
  /* 113d1413 call dword ptr [0x114024bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024bc))), 0x113d1419u);
  /* 113d1419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d141c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d141e call 0x113d2a20 */
  push32(0x113d1423u); f_113d2a20();
  /* 113d1423 mov esi, esp */
  ESI = (ESP);
  /* 113d1425 push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d142a push 0x113ff3f8 */
  push32((uint32_t)(0x113ff3f8u));
  /* 113d142f call dword ptr [0x114024c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024c0))), 0x113d1435u);
  /* 113d1435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1438 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d143a call 0x113d2a20 */
  push32(0x113d143fu); f_113d2a20();
  /* 113d143f mov esi, esp */
  ESI = (ESP);
  /* 113d1441 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1443 push 0x113ff3e0 */
  push32((uint32_t)(0x113ff3e0u));
  /* 113d1448 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d144a call dword ptr [0x114024b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114024b8))), 0x113d1450u);
  /* 113d1450 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1453 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1455 call 0x113d2a20 */
  push32(0x113d145au); f_113d2a20();
  /* 113d145a pop edi */
  EDI = (pop32());
  /* 113d145b pop esi */
  ESI = (pop32());
  /* 113d145c pop ebx */
  EBX = (pop32());
  /* 113d145d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1460 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1462 call 0x113d2a20 */
  push32(0x113d1467u); f_113d2a20();
  /* 113d1467 mov esp, ebp */
  ESP = (EBP);
  /* 113d1469 pop ebp */
  EBP = (pop32());
  /* 113d146a ret  */
  ESPCHK(0x113d1090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001570 @ 0x113d1570 (4038 bytes, 1185 insns) */
void f_113d1570(void) {
  FTRACE(0x113d1570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d1570 push ebp */
  push32((uint32_t)(EBP));
  /* 113d1571 mov ebp, esp */
  EBP = (ESP);
  /* 113d1573 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d1576 push ebx */
  push32((uint32_t)(EBX));
  /* 113d1577 push esi */
  push32((uint32_t)(ESI));
  /* 113d1578 push edi */
  push32((uint32_t)(EDI));
  /* 113d1579 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 113d157c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 113d1581 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 113d1586 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113d1588 mov esi, esp */
  ESI = (ESP);
  /* 113d158a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 113d158c call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d1592u);
  /* 113d1592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1595 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1597 call 0x113d2a20 */
  push32(0x113d159cu); f_113d2a20();
  /* 113d159c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d15a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d15a3 je 0x113d18ee */
  if (C.zf) goto L_113d18ee;
  /* 113d15a9 mov esi, esp */
  ESI = (ESP);
  /* 113d15ab push 0 */
  push32((uint32_t)(0x0u));
  /* 113d15ad call dword ptr [0x11402430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402430))), 0x113d15b3u);
  /* 113d15b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d15b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d15b8 call 0x113d2a20 */
  push32(0x113d15bdu); f_113d2a20();
  /* 113d15bd mov dword ptr [0x113ff4b0], eax */
  w32((uint32_t)(0x113ff4b0), (EAX));
  /* 113d15c2 mov eax, dword ptr [0x113ff4b0] */
  EAX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d15c7 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d15cd mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 113d15d2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d15d4 mov esi, esp */
  ESI = (ESP);
  /* 113d15d6 push ecx */
  push32((uint32_t)(ECX));
  /* 113d15d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d15d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d15db call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d15e1u);
  /* 113d15e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d15e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d15e6 call 0x113d2a20 */
  push32(0x113d15ebu); f_113d2a20();
  /* 113d15eb mov edx, dword ptr [0x113ff4b0] */
  EDX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d15f1 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d15f7 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 113d15fc sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d15fe mov esi, esp */
  ESI = (ESP);
  /* 113d1600 push eax */
  push32((uint32_t)(EAX));
  /* 113d1601 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1603 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1605 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d160bu);
  /* 113d160b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d160e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1610 call 0x113d2a20 */
  push32(0x113d1615u); f_113d2a20();
  /* 113d1615 mov ecx, dword ptr [0x113ff4b0] */
  ECX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d161b imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d1621 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 113d1626 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d1628 mov esi, esp */
  ESI = (ESP);
  /* 113d162a push edx */
  push32((uint32_t)(EDX));
  /* 113d162b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d162d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d162f call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d1635u);
  /* 113d1635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d163a call 0x113d2a20 */
  push32(0x113d163fu); f_113d2a20();
  /* 113d163f mov eax, dword ptr [0x113ff4b0] */
  EAX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d1644 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d164a mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 113d164f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d1651 mov esi, esp */
  ESI = (ESP);
  /* 113d1653 push ecx */
  push32((uint32_t)(ECX));
  /* 113d1654 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1656 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1658 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d165eu);
  /* 113d165e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1663 call 0x113d2a20 */
  push32(0x113d1668u); f_113d2a20();
  /* 113d1668 mov edx, dword ptr [0x113ff4b0] */
  EDX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d166e imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d1674 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 113d1679 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d167b mov esi, esp */
  ESI = (ESP);
  /* 113d167d push eax */
  push32((uint32_t)(EAX));
  /* 113d167e push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1680 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1682 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d1688u);
  /* 113d1688 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d168b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d168d call 0x113d2a20 */
  push32(0x113d1692u); f_113d2a20();
  /* 113d1692 mov ecx, dword ptr [0x113ff4b0] */
  ECX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d1698 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d169e mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 113d16a3 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d16a5 mov esi, esp */
  ESI = (ESP);
  /* 113d16a7 push edx */
  push32((uint32_t)(EDX));
  /* 113d16a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d16aa push 0 */
  push32((uint32_t)(0x0u));
  /* 113d16ac call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d16b2u);
  /* 113d16b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d16b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d16b7 call 0x113d2a20 */
  push32(0x113d16bcu); f_113d2a20();
  /* 113d16bc mov esi, esp */
  ESI = (ESP);
  /* 113d16be push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d16c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d16c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d16c7 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d16cdu);
  /* 113d16cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d16d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d16d2 call 0x113d2a20 */
  push32(0x113d16d7u); f_113d2a20();
  /* 113d16d7 mov esi, esp */
  ESI = (ESP);
  /* 113d16d9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d16de push 1 */
  push32((uint32_t)(0x1u));
  /* 113d16e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d16e2 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d16e8u);
  /* 113d16e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d16eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d16ed call 0x113d2a20 */
  push32(0x113d16f2u); f_113d2a20();
  /* 113d16f2 mov esi, esp */
  ESI = (ESP);
  /* 113d16f4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d16f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d16fb push 2 */
  push32((uint32_t)(0x2u));
  /* 113d16fd call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d1703u);
  /* 113d1703 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1708 call 0x113d2a20 */
  push32(0x113d170du); f_113d2a20();
  /* 113d170d mov esi, esp */
  ESI = (ESP);
  /* 113d170f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d1714 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1716 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1718 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d171eu);
  /* 113d171e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1721 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1723 call 0x113d2a20 */
  push32(0x113d1728u); f_113d2a20();
  /* 113d1728 mov esi, esp */
  ESI = (ESP);
  /* 113d172a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d172f push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1731 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1733 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d1739u);
  /* 113d1739 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d173c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d173e call 0x113d2a20 */
  push32(0x113d1743u); f_113d2a20();
  /* 113d1743 mov esi, esp */
  ESI = (ESP);
  /* 113d1745 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d174a push 4 */
  push32((uint32_t)(0x4u));
  /* 113d174c push 2 */
  push32((uint32_t)(0x2u));
  /* 113d174e call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d1754u);
  /* 113d1754 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1759 call 0x113d2a20 */
  push32(0x113d175eu); f_113d2a20();
  /* 113d175e mov esi, esp */
  ESI = (ESP);
  /* 113d1760 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d1765 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d1767 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d1769 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d176fu);
  /* 113d176f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1772 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1774 call 0x113d2a20 */
  push32(0x113d1779u); f_113d2a20();
  /* 113d1779 mov esi, esp */
  ESI = (ESP);
  /* 113d177b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d1780 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1782 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d1784 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d178au);
  /* 113d178a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d178d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d178f call 0x113d2a20 */
  push32(0x113d1794u); f_113d2a20();
  /* 113d1794 mov esi, esp */
  ESI = (ESP);
  /* 113d1796 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d179b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d179d push 3 */
  push32((uint32_t)(0x3u));
  /* 113d179f call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d17a5u);
  /* 113d17a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d17a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d17aa call 0x113d2a20 */
  push32(0x113d17afu); f_113d2a20();
  /* 113d17af mov esi, esp */
  ESI = (ESP);
  /* 113d17b1 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d17b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d17b8 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d17ba call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d17c0u);
  /* 113d17c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d17c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d17c5 call 0x113d2a20 */
  push32(0x113d17cau); f_113d2a20();
  /* 113d17ca mov esi, esp */
  ESI = (ESP);
  /* 113d17cc push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d17d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d17d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d17d5 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d17dbu);
  /* 113d17db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d17de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d17e0 call 0x113d2a20 */
  push32(0x113d17e5u); f_113d2a20();
  /* 113d17e5 mov esi, esp */
  ESI = (ESP);
  /* 113d17e7 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 113d17ec push 4 */
  push32((uint32_t)(0x4u));
  /* 113d17ee push 3 */
  push32((uint32_t)(0x3u));
  /* 113d17f0 call dword ptr [0x11402428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402428))), 0x113d17f6u);
  /* 113d17f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d17f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d17fb call 0x113d2a20 */
  push32(0x113d1800u); f_113d2a20();
  /* 113d1800 mov esi, esp */
  ESI = (ESP);
  /* 113d1802 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113d1804 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1806 call dword ptr [0x11402438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402438))), 0x113d180cu);
  /* 113d180c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d180f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1811 call 0x113d2a20 */
  push32(0x113d1816u); f_113d2a20();
  /* 113d1816 mov esi, esp */
  ESI = (ESP);
  /* 113d1818 push 0xc */
  push32((uint32_t)(0xcu));
  /* 113d181a push 2 */
  push32((uint32_t)(0x2u));
  /* 113d181c call dword ptr [0x11402438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402438))), 0x113d1822u);
  /* 113d1822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1825 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1827 call 0x113d2a20 */
  push32(0x113d182cu); f_113d2a20();
  /* 113d182c mov esi, esp */
  ESI = (ESP);
  /* 113d182e push 0x21 */
  push32((uint32_t)(0x21u));
  /* 113d1830 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1832 call dword ptr [0x11402438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402438))), 0x113d1838u);
  /* 113d1838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d183b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d183d call 0x113d2a20 */
  push32(0x113d1842u); f_113d2a20();
  /* 113d1842 mov esi, esp */
  ESI = (ESP);
  /* 113d1844 mov eax, dword ptr [0x113ff4b0] */
  EAX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d1849 push eax */
  push32((uint32_t)(EAX));
  /* 113d184a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d184c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d184e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1850 push 0x113fa128 */
  push32((uint32_t)(0x113fa128u));
  /* 113d1855 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1857 call dword ptr [0x1140243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140243c))), 0x113d185du);
  /* 113d185d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1860 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1862 call 0x113d2a20 */
  push32(0x113d1867u); f_113d2a20();
  /* 113d1867 mov esi, esp */
  ESI = (ESP);
  /* 113d1869 mov ecx, dword ptr [0x113ff4b0] */
  ECX = (r32((uint32_t)(0x113ff4b0)));
  /* 113d186f push ecx */
  push32((uint32_t)(ECX));
  /* 113d1870 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1872 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1874 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1876 push 0x113fa11c */
  push32((uint32_t)(0x113fa11cu));
  /* 113d187b push 3 */
  push32((uint32_t)(0x3u));
  /* 113d187d call dword ptr [0x1140243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140243c))), 0x113d1883u);
  /* 113d1883 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1886 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1888 call 0x113d2a20 */
  push32(0x113d188du); f_113d2a20();
  /* 113d188d mov esi, esp */
  ESI = (ESP);
  /* 113d188f push 0x113fa114 */
  push32((uint32_t)(0x113fa114u));
  /* 113d1894 call dword ptr [0x11402434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402434))), 0x113d189au);
  /* 113d189a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d189d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d189f call 0x113d2a20 */
  push32(0x113d18a4u); f_113d2a20();
  /* 113d18a4 mov esi, esp */
  ESI = (ESP);
  /* 113d18a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d18a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d18aa push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d18af call dword ptr [0x11402444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402444))), 0x113d18b5u);
  /* 113d18b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d18b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d18ba call 0x113d2a20 */
  push32(0x113d18bfu); f_113d2a20();
  /* 113d18bf mov esi, esp */
  ESI = (ESP);
  /* 113d18c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d18c3 push 0x113ff418 */
  push32((uint32_t)(0x113ff418u));
  /* 113d18c8 call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d18ceu);
  /* 113d18ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d18d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d18d3 call 0x113d2a20 */
  push32(0x113d18d8u); f_113d2a20();
  /* 113d18d8 mov esi, esp */
  ESI = (ESP);
  /* 113d18da push 0 */
  push32((uint32_t)(0x0u));
  /* 113d18dc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 113d18de call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d18e4u);
  /* 113d18e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d18e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d18e9 call 0x113d2a20 */
  push32(0x113d18eeu); f_113d2a20();
L_113d18ee:;
  /* 113d18ee mov esi, esp */
  ESI = (ESP);
  /* 113d18f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d18f2 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d18f8u);
  /* 113d18f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d18fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d18fd call 0x113d2a20 */
  push32(0x113d1902u); f_113d2a20();
  /* 113d1902 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d1907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1909 je 0x113d1cbd */
  if (C.zf) goto L_113d1cbd;
  /* 113d190f mov esi, esp */
  ESI = (ESP);
  /* 113d1911 push 0x113ff418 */
  push32((uint32_t)(0x113ff418u));
  /* 113d1916 push 0x113ff440 */
  push32((uint32_t)(0x113ff440u));
  /* 113d191b call dword ptr [0x11402450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402450))), 0x113d1921u);
  /* 113d1921 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1924 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1926 call 0x113d2a20 */
  push32(0x113d192bu); f_113d2a20();
  /* 113d192b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d192d jle 0x113d1cbd */
  if ((C.zf||C.sf!=C.of)) goto L_113d1cbd;
  /* 113d1933 mov esi, esp */
  ESI = (ESP);
  /* 113d1935 push 0x113fa10c */
  push32((uint32_t)(0x113fa10cu));
  /* 113d193a call dword ptr [0x11402454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402454))), 0x113d1940u);
  /* 113d1940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1945 call 0x113d2a20 */
  push32(0x113d194au); f_113d2a20();
  /* 113d194a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d194f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1951 je 0x113d1ca7 */
  if (C.zf) goto L_113d1ca7;
  /* 113d1957 mov esi, esp */
  ESI = (ESP);
  /* 113d1959 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d195b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d195d call dword ptr [0x1140244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140244c))), 0x113d1963u);
  /* 113d1963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1966 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1968 call 0x113d2a20 */
  push32(0x113d196du); f_113d2a20();
  /* 113d196d cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1972 jle 0x113d1c90 */
  if ((C.zf||C.sf!=C.of)) goto L_113d1c90;
  /* 113d1978 mov esi, esp */
  ESI = (ESP);
  /* 113d197a push 0xffffb1e0 */
  push32((uint32_t)(0xffffb1e0u));
  /* 113d197f push 3 */
  push32((uint32_t)(0x3u));
  /* 113d1981 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1983 call dword ptr [0x1140245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140245c))), 0x113d1989u);
  /* 113d1989 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d198c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d198e call 0x113d2a20 */
  push32(0x113d1993u); f_113d2a20();
  /* 113d1993 mov esi, esp */
  ESI = (ESP);
  /* 113d1995 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1997 push 0x113ff470 */
  push32((uint32_t)(0x113ff470u));
  /* 113d199c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d199e call dword ptr [0x11402460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402460))), 0x113d19a4u);
  /* 113d19a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d19a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d19a9 call 0x113d2a20 */
  push32(0x113d19aeu); f_113d2a20();
  /* 113d19ae mov esi, esp */
  ESI = (ESP);
  /* 113d19b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d19b2 push 0x113ff440 */
  push32((uint32_t)(0x113ff440u));
  /* 113d19b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d19b9 push 0x113ff420 */
  push32((uint32_t)(0x113ff420u));
  /* 113d19be push 0x113ff478 */
  push32((uint32_t)(0x113ff478u));
  /* 113d19c3 push 0x113ff408 */
  push32((uint32_t)(0x113ff408u));
  /* 113d19c8 call dword ptr [0x11402458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402458))), 0x113d19ceu);
  /* 113d19ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d19d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d19d3 call 0x113d2a20 */
  push32(0x113d19d8u); f_113d2a20();
  /* 113d19d8 mov esi, esp */
  ESI = (ESP);
  /* 113d19da push 0 */
  push32((uint32_t)(0x0u));
  /* 113d19dc push 0x113ff408 */
  push32((uint32_t)(0x113ff408u));
  /* 113d19e1 call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d19e7u);
  /* 113d19e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d19ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d19ec call 0x113d2a20 */
  push32(0x113d19f1u); f_113d2a20();
  /* 113d19f1 mov esi, esp */
  ESI = (ESP);
  /* 113d19f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d19f5 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d19fa push 0x113ff450 */
  push32((uint32_t)(0x113ff450u));
  /* 113d19ff push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1a01 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1a07u);
  /* 113d1a07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1a0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1a0c call 0x113d2a20 */
  push32(0x113d1a11u); f_113d2a20();
  /* 113d1a11 mov esi, esp */
  ESI = (ESP);
  /* 113d1a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1a15 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1a1a push 0x113ff438 */
  push32((uint32_t)(0x113ff438u));
  /* 113d1a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1a21 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1a27u);
  /* 113d1a27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1a2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1a2c call 0x113d2a20 */
  push32(0x113d1a31u); f_113d2a20();
  /* 113d1a31 mov esi, esp */
  ESI = (ESP);
  /* 113d1a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1a35 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1a3a push 0x113ff428 */
  push32((uint32_t)(0x113ff428u));
  /* 113d1a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1a41 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1a47u);
  /* 113d1a47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1a4c call 0x113d2a20 */
  push32(0x113d1a51u); f_113d2a20();
  /* 113d1a51 mov esi, esp */
  ESI = (ESP);
  /* 113d1a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1a55 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1a5a push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1a61 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1a67u);
  /* 113d1a67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1a6c call 0x113d2a20 */
  push32(0x113d1a71u); f_113d2a20();
  /* 113d1a71 mov esi, esp */
  ESI = (ESP);
  /* 113d1a73 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1a75 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1a7a push 0x113ff448 */
  push32((uint32_t)(0x113ff448u));
  /* 113d1a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1a81 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1a87u);
  /* 113d1a87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1a8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1a8c call 0x113d2a20 */
  push32(0x113d1a91u); f_113d2a20();
  /* 113d1a91 mov esi, esp */
  ESI = (ESP);
  /* 113d1a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1a95 push 0x113ff440 */
  push32((uint32_t)(0x113ff440u));
  /* 113d1a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1a9c push 0x113ff420 */
  push32((uint32_t)(0x113ff420u));
  /* 113d1aa1 push 0x113ff478 */
  push32((uint32_t)(0x113ff478u));
  /* 113d1aa6 push 0x113ff408 */
  push32((uint32_t)(0x113ff408u));
  /* 113d1aab call dword ptr [0x11402458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402458))), 0x113d1ab1u);
  /* 113d1ab1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1ab4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1ab6 call 0x113d2a20 */
  push32(0x113d1abbu); f_113d2a20();
  /* 113d1abb mov esi, esp */
  ESI = (ESP);
  /* 113d1abd push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1abf push 0x113ff408 */
  push32((uint32_t)(0x113ff408u));
  /* 113d1ac4 call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d1acau);
  /* 113d1aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1acd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1acf call 0x113d2a20 */
  push32(0x113d1ad4u); f_113d2a20();
  /* 113d1ad4 mov esi, esp */
  ESI = (ESP);
  /* 113d1ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1ad8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1add push 0x113ff450 */
  push32((uint32_t)(0x113ff450u));
  /* 113d1ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1ae4 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1aeau);
  /* 113d1aea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1aef call 0x113d2a20 */
  push32(0x113d1af4u); f_113d2a20();
  /* 113d1af4 mov esi, esp */
  ESI = (ESP);
  /* 113d1af6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1af8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1afd push 0x113ff438 */
  push32((uint32_t)(0x113ff438u));
  /* 113d1b02 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1b04 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1b0au);
  /* 113d1b0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1b0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1b0f call 0x113d2a20 */
  push32(0x113d1b14u); f_113d2a20();
  /* 113d1b14 mov esi, esp */
  ESI = (ESP);
  /* 113d1b16 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1b18 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1b1d push 0x113ff428 */
  push32((uint32_t)(0x113ff428u));
  /* 113d1b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1b24 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1b2au);
  /* 113d1b2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1b2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1b2f call 0x113d2a20 */
  push32(0x113d1b34u); f_113d2a20();
  /* 113d1b34 mov esi, esp */
  ESI = (ESP);
  /* 113d1b36 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1b38 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1b3d push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1b44 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1b4au);
  /* 113d1b4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1b4f call 0x113d2a20 */
  push32(0x113d1b54u); f_113d2a20();
  /* 113d1b54 mov esi, esp */
  ESI = (ESP);
  /* 113d1b56 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1b58 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d1b5d push 0x113ff448 */
  push32((uint32_t)(0x113ff448u));
  /* 113d1b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1b64 call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d1b6au);
  /* 113d1b6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1b6f call 0x113d2a20 */
  push32(0x113d1b74u); f_113d2a20();
  /* 113d1b74 mov esi, esp */
  ESI = (ESP);
  /* 113d1b76 push 0x113fa104 */
  push32((uint32_t)(0x113fa104u));
  /* 113d1b7b call dword ptr [0x11402434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402434))), 0x113d1b81u);
  /* 113d1b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1b84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1b86 call 0x113d2a20 */
  push32(0x113d1b8bu); f_113d2a20();
  /* 113d1b8b mov esi, esp */
  ESI = (ESP);
  /* 113d1b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1b8f push 0x113ff470 */
  push32((uint32_t)(0x113ff470u));
  /* 113d1b94 call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d1b9au);
  /* 113d1b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1b9f call 0x113d2a20 */
  push32(0x113d1ba4u); f_113d2a20();
  /* 113d1ba4 mov esi, esp */
  ESI = (ESP);
  /* 113d1ba6 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1ba8 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d1baeu);
  /* 113d1bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1bb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1bb3 call 0x113d2a20 */
  push32(0x113d1bb8u); f_113d2a20();
  /* 113d1bb8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d1bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1bbf je 0x113d1c8e */
  if (C.zf) goto L_113d1c8e;
  /* 113d1bc5 mov esi, esp */
  ESI = (ESP);
  /* 113d1bc7 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113d1bc9 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1bcb call dword ptr [0x11402438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402438))), 0x113d1bd1u);
  /* 113d1bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1bd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1bd6 call 0x113d2a20 */
  push32(0x113d1bdbu); f_113d2a20();
  /* 113d1bdb mov esi, esp */
  ESI = (ESP);
  /* 113d1bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1bdf push 0x113ff458 */
  push32((uint32_t)(0x113ff458u));
  /* 113d1be4 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1be6 push 0x113ff4b8 */
  push32((uint32_t)(0x113ff4b8u));
  /* 113d1beb push 0x113ff4c0 */
  push32((uint32_t)(0x113ff4c0u));
  /* 113d1bf0 push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d1bf5 call dword ptr [0x11402458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402458))), 0x113d1bfbu);
  /* 113d1bfb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1bfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1c00 call 0x113d2a20 */
  push32(0x113d1c05u); f_113d2a20();
  /* 113d1c05 mov esi, esp */
  ESI = (ESP);
  /* 113d1c07 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1c09 push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d1c0e call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d1c14u);
  /* 113d1c14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1c19 call 0x113d2a20 */
  push32(0x113d1c1eu); f_113d2a20();
  /* 113d1c1e mov esi, esp */
  ESI = (ESP);
  /* 113d1c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1c22 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113d1c24 push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d1c29 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1c2b call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d1c31u);
  /* 113d1c31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1c36 call 0x113d2a20 */
  push32(0x113d1c3bu); f_113d2a20();
  /* 113d1c3b mov esi, esp */
  ESI = (ESP);
  /* 113d1c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1c3f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113d1c41 push 0x113ff480 */
  push32((uint32_t)(0x113ff480u));
  /* 113d1c46 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1c48 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d1c4eu);
  /* 113d1c4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1c51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1c53 call 0x113d2a20 */
  push32(0x113d1c58u); f_113d2a20();
  /* 113d1c58 mov esi, esp */
  ESI = (ESP);
  /* 113d1c5a push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1c5c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113d1c5e push 0x113ff438 */
  push32((uint32_t)(0x113ff438u));
  /* 113d1c63 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d1c65 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d1c6bu);
  /* 113d1c6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1c6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1c70 call 0x113d2a20 */
  push32(0x113d1c75u); f_113d2a20();
  /* 113d1c75 mov esi, esp */
  ESI = (ESP);
  /* 113d1c77 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113d1c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1c7e call dword ptr [0x11402464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402464))), 0x113d1c84u);
  /* 113d1c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1c87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1c89 call 0x113d2a20 */
  push32(0x113d1c8eu); f_113d2a20();
L_113d1c8e:;
  /* 113d1c8e jmp 0x113d1ca7 */
  goto L_113d1ca7;
L_113d1c90:;
  /* 113d1c90 mov esi, esp */
  ESI = (ESP);
  /* 113d1c92 push 0x113fa0fc */
  push32((uint32_t)(0x113fa0fcu));
  /* 113d1c97 call dword ptr [0x11402434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402434))), 0x113d1c9du);
  /* 113d1c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1ca2 call 0x113d2a20 */
  push32(0x113d1ca7u); f_113d2a20();
L_113d1ca7:;
  /* 113d1ca7 mov esi, esp */
  ESI = (ESP);
  /* 113d1ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1cab push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1cad call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d1cb3u);
  /* 113d1cb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1cb8 call 0x113d2a20 */
  push32(0x113d1cbdu); f_113d2a20();
L_113d1cbd:;
  /* 113d1cbd mov esi, esp */
  ESI = (ESP);
  /* 113d1cbf push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1cc1 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d1cc7u);
  /* 113d1cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1ccc call 0x113d2a20 */
  push32(0x113d1cd1u); f_113d2a20();
  /* 113d1cd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d1cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1cd8 jne 0x113d1d10 */
  if (!C.zf) goto L_113d1d10;
  /* 113d1cda mov esi, esp */
  ESI = (ESP);
  /* 113d1cdc push 0x113ff418 */
  push32((uint32_t)(0x113ff418u));
  /* 113d1ce1 push 0x113ff440 */
  push32((uint32_t)(0x113ff440u));
  /* 113d1ce6 call dword ptr [0x11402450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402450))), 0x113d1cecu);
  /* 113d1cec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1cef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1cf1 call 0x113d2a20 */
  push32(0x113d1cf6u); f_113d2a20();
  /* 113d1cf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1cf8 jne 0x113d1d10 */
  if (!C.zf) goto L_113d1d10;
  /* 113d1cfa mov esi, esp */
  ESI = (ESP);
  /* 113d1cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1d00 call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d1d06u);
  /* 113d1d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1d0b call 0x113d2a20 */
  push32(0x113d1d10u); f_113d2a20();
L_113d1d10:;
  /* 113d1d10 mov esi, esp */
  ESI = (ESP);
  /* 113d1d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1d14 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d1d1au);
  /* 113d1d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1d1f call 0x113d2a20 */
  push32(0x113d1d24u); f_113d2a20();
  /* 113d1d24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d1d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1d2b je 0x113d1daa */
  if (C.zf) goto L_113d1daa;
  /* 113d1d2d mov esi, esp */
  ESI = (ESP);
  /* 113d1d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1d31 push 0x113ff428 */
  push32((uint32_t)(0x113ff428u));
  /* 113d1d36 call dword ptr [0x11402474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402474))), 0x113d1d3cu);
  /* 113d1d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1d41 call 0x113d2a20 */
  push32(0x113d1d46u); f_113d2a20();
  /* 113d1d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1d48 jg 0x113d1d67 */
  if ((!C.zf&&C.sf==C.of)) goto L_113d1d67;
  /* 113d1d4a mov esi, esp */
  ESI = (ESP);
  /* 113d1d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1d4e push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1d53 call dword ptr [0x11402474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402474))), 0x113d1d59u);
  /* 113d1d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1d5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1d5e call 0x113d2a20 */
  push32(0x113d1d63u); f_113d2a20();
  /* 113d1d63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1d65 jle 0x113d1daa */
  if ((C.zf||C.sf!=C.of)) goto L_113d1daa;
L_113d1d67:;
  /* 113d1d67 mov esi, esp */
  ESI = (ESP);
  /* 113d1d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1d6b push 0x113ff3f0 */
  push32((uint32_t)(0x113ff3f0u));
  /* 113d1d70 call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d1d76u);
  /* 113d1d76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1d79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1d7b call 0x113d2a20 */
  push32(0x113d1d80u); f_113d2a20();
  /* 113d1d80 mov esi, esp */
  ESI = (ESP);
  /* 113d1d82 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1d84 call dword ptr [0x11402478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402478))), 0x113d1d8au);
  /* 113d1d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1d8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1d8f call 0x113d2a20 */
  push32(0x113d1d94u); f_113d2a20();
  /* 113d1d94 mov esi, esp */
  ESI = (ESP);
  /* 113d1d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1d98 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1d9a call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d1da0u);
  /* 113d1da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1da3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1da5 call 0x113d2a20 */
  push32(0x113d1daau); f_113d2a20();
L_113d1daa:;
  /* 113d1daa mov esi, esp */
  ESI = (ESP);
  /* 113d1dac push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1dae call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d1db4u);
  /* 113d1db4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1db9 call 0x113d2a20 */
  push32(0x113d1dbeu); f_113d2a20();
  /* 113d1dbe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d1dc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1dc5 jne 0x113d1e44 */
  if (!C.zf) goto L_113d1e44;
  /* 113d1dc7 mov esi, esp */
  ESI = (ESP);
  /* 113d1dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1dcb push 0x113ff428 */
  push32((uint32_t)(0x113ff428u));
  /* 113d1dd0 call dword ptr [0x11402474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402474))), 0x113d1dd6u);
  /* 113d1dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1dd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1ddb call 0x113d2a20 */
  push32(0x113d1de0u); f_113d2a20();
  /* 113d1de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1de2 jne 0x113d1e44 */
  if (!C.zf) goto L_113d1e44;
  /* 113d1de4 mov esi, esp */
  ESI = (ESP);
  /* 113d1de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1de8 push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1ded call dword ptr [0x11402474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402474))), 0x113d1df3u);
  /* 113d1df3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1df6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1df8 call 0x113d2a20 */
  push32(0x113d1dfdu); f_113d2a20();
  /* 113d1dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1dff jne 0x113d1e44 */
  if (!C.zf) goto L_113d1e44;
  /* 113d1e01 mov esi, esp */
  ESI = (ESP);
  /* 113d1e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1e05 push 0x113ff3f0 */
  push32((uint32_t)(0x113ff3f0u));
  /* 113d1e0a call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d1e10u);
  /* 113d1e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1e15 call 0x113d2a20 */
  push32(0x113d1e1au); f_113d2a20();
  /* 113d1e1a mov esi, esp */
  ESI = (ESP);
  /* 113d1e1c push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1e1e call dword ptr [0x11402470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402470))), 0x113d1e24u);
  /* 113d1e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1e29 call 0x113d2a20 */
  push32(0x113d1e2eu); f_113d2a20();
  /* 113d1e2e mov esi, esp */
  ESI = (ESP);
  /* 113d1e30 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d1e32 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1e34 call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d1e3au);
  /* 113d1e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1e3f call 0x113d2a20 */
  push32(0x113d1e44u); f_113d2a20();
L_113d1e44:;
  /* 113d1e44 mov esi, esp */
  ESI = (ESP);
  /* 113d1e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1e48 push 0x113ff420 */
  push32((uint32_t)(0x113ff420u));
  /* 113d1e4d push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1e52 call dword ptr [0x11402480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402480))), 0x113d1e58u);
  /* 113d1e58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1e5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1e5d call 0x113d2a20 */
  push32(0x113d1e62u); f_113d2a20();
  /* 113d1e62 mov dword ptr [0x113ff3e8], eax */
  w32((uint32_t)(0x113ff3e8), (EAX));
  /* 113d1e67 cmp dword ptr [0x113ff3e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff3e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1e6e jle 0x113d1eeb */
  if ((C.zf||C.sf!=C.of)) goto L_113d1eeb;
  /* 113d1e70 mov esi, esp */
  ESI = (ESP);
  /* 113d1e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1e76 push 0x113ff420 */
  push32((uint32_t)(0x113ff420u));
  /* 113d1e7b push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1e80 call dword ptr [0x11402484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402484))), 0x113d1e86u);
  /* 113d1e86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1e89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1e8b call 0x113d2a20 */
  push32(0x113d1e90u); f_113d2a20();
  /* 113d1e90 mov esi, esp */
  ESI = (ESP);
  /* 113d1e92 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1e96 call dword ptr [0x1140247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140247c))), 0x113d1e9cu);
  /* 113d1e9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1ea1 call 0x113d2a20 */
  push32(0x113d1ea6u); f_113d2a20();
  /* 113d1ea6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d1ead jmp 0x113d1eb8 */
  goto L_113d1eb8;
L_113d1eaf:;
  /* 113d1eaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d1eb2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1eb5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d1eb8:;
  /* 113d1eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d1ebb cmp eax, dword ptr [0x113ff3e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113ff3e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1ec1 jge 0x113d1eeb */
  if ((C.sf==C.of)) goto L_113d1eeb;
  /* 113d1ec3 mov esi, esp */
  ESI = (ESP);
  /* 113d1ec5 push 0xb54 */
  push32((uint32_t)(0xb54u));
  /* 113d1eca push 0x113ff408 */
  push32((uint32_t)(0x113ff408u));
  /* 113d1ecf push 0x113ff3e0 */
  push32((uint32_t)(0x113ff3e0u));
  /* 113d1ed4 push 0x113ff3f8 */
  push32((uint32_t)(0x113ff3f8u));
  /* 113d1ed9 call dword ptr [0x1140248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140248c))), 0x113d1edfu);
  /* 113d1edf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1ee2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1ee4 call 0x113d2a20 */
  push32(0x113d1ee9u); f_113d2a20();
  /* 113d1ee9 jmp 0x113d1eaf */
  goto L_113d1eaf;
L_113d1eeb:;
  /* 113d1eeb mov esi, esp */
  ESI = (ESP);
  /* 113d1eed push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1eef push 0x113ff420 */
  push32((uint32_t)(0x113ff420u));
  /* 113d1ef4 push 0x113ff448 */
  push32((uint32_t)(0x113ff448u));
  /* 113d1ef9 call dword ptr [0x11402480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402480))), 0x113d1effu);
  /* 113d1eff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1f02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1f04 call 0x113d2a20 */
  push32(0x113d1f09u); f_113d2a20();
  /* 113d1f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d1f0b jle 0x113d1f41 */
  if ((C.zf||C.sf!=C.of)) goto L_113d1f41;
  /* 113d1f0d mov esi, esp */
  ESI = (ESP);
  /* 113d1f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1f11 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1f13 push 0x113ff420 */
  push32((uint32_t)(0x113ff420u));
  /* 113d1f18 push 0x113ff448 */
  push32((uint32_t)(0x113ff448u));
  /* 113d1f1d call dword ptr [0x11402484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402484))), 0x113d1f23u);
  /* 113d1f23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1f26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1f28 call 0x113d2a20 */
  push32(0x113d1f2du); f_113d2a20();
  /* 113d1f2d mov esi, esp */
  ESI = (ESP);
  /* 113d1f2f push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1f31 call dword ptr [0x11402490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402490))), 0x113d1f37u);
  /* 113d1f37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1f3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1f3c call 0x113d2a20 */
  push32(0x113d1f41u); f_113d2a20();
L_113d1f41:;
  /* 113d1f41 mov esi, esp */
  ESI = (ESP);
  /* 113d1f43 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1f45 push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1f4a call dword ptr [0x11402474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402474))), 0x113d1f50u);
  /* 113d1f50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1f53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1f55 call 0x113d2a20 */
  push32(0x113d1f5au); f_113d2a20();
  /* 113d1f5a cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1f5d jle 0x113d2044 */
  if ((C.zf||C.sf!=C.of)) goto L_113d2044;
  /* 113d1f63 mov esi, esp */
  ESI = (ESP);
  /* 113d1f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1f67 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1f69 push 0x113ff3e0 */
  push32((uint32_t)(0x113ff3e0u));
  /* 113d1f6e push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1f73 call dword ptr [0x11402484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402484))), 0x113d1f79u);
  /* 113d1f79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1f7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1f7e call 0x113d2a20 */
  push32(0x113d1f83u); f_113d2a20();
  /* 113d1f83 mov esi, esp */
  ESI = (ESP);
  /* 113d1f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1f87 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d1f89 call dword ptr [0x1140247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140247c))), 0x113d1f8fu);
  /* 113d1f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1f92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1f94 call 0x113d2a20 */
  push32(0x113d1f99u); f_113d2a20();
  /* 113d1f99 mov esi, esp */
  ESI = (ESP);
  /* 113d1f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1f9d push 0x113ff470 */
  push32((uint32_t)(0x113ff470u));
  /* 113d1fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1fa4 call dword ptr [0x11402460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402460))), 0x113d1faau);
  /* 113d1faa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1fad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1faf call 0x113d2a20 */
  push32(0x113d1fb4u); f_113d2a20();
  /* 113d1fb4 mov esi, esp */
  ESI = (ESP);
  /* 113d1fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1fba push 0x113ff3e0 */
  push32((uint32_t)(0x113ff3e0u));
  /* 113d1fbf push 0x113ff430 */
  push32((uint32_t)(0x113ff430u));
  /* 113d1fc4 call dword ptr [0x11402484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402484))), 0x113d1fcau);
  /* 113d1fca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1fcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1fcf call 0x113d2a20 */
  push32(0x113d1fd4u); f_113d2a20();
  /* 113d1fd4 mov esi, esp */
  ESI = (ESP);
  /* 113d1fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1fd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1fda push 0x113ff428 */
  push32((uint32_t)(0x113ff428u));
  /* 113d1fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1fe1 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d1fe7u);
  /* 113d1fe7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d1fea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d1fec call 0x113d2a20 */
  push32(0x113d1ff1u); f_113d2a20();
  /* 113d1ff1 mov esi, esp */
  ESI = (ESP);
  /* 113d1ff3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d1ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1ff7 push 0x113ff438 */
  push32((uint32_t)(0x113ff438u));
  /* 113d1ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 113d1ffe call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d2004u);
  /* 113d2004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2007 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2009 call 0x113d2a20 */
  push32(0x113d200eu); f_113d2a20();
  /* 113d200e mov esi, esp */
  ESI = (ESP);
  /* 113d2010 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d2012 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2014 push 0x113ff450 */
  push32((uint32_t)(0x113ff450u));
  /* 113d2019 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d201b call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d2021u);
  /* 113d2021 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2024 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2026 call 0x113d2a20 */
  push32(0x113d202bu); f_113d2a20();
  /* 113d202b mov esi, esp */
  ESI = (ESP);
  /* 113d202d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d202f push 0x113ff470 */
  push32((uint32_t)(0x113ff470u));
  /* 113d2034 call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d203au);
  /* 113d203a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d203d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d203f call 0x113d2a20 */
  push32(0x113d2044u); f_113d2a20();
L_113d2044:;
  /* 113d2044 mov esi, esp */
  ESI = (ESP);
  /* 113d2046 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d2048 call dword ptr [0x11402488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402488))), 0x113d204eu);
  /* 113d204e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2051 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2053 call 0x113d2a20 */
  push32(0x113d2058u); f_113d2a20();
  /* 113d2058 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d205d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d205f je 0x113d20ad */
  if (C.zf) goto L_113d20ad;
  /* 113d2061 mov esi, esp */
  ESI = (ESP);
  /* 113d2063 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 113d2065 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2067 call dword ptr [0x11402438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402438))), 0x113d206du);
  /* 113d206d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2070 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2072 call 0x113d2a20 */
  push32(0x113d2077u); f_113d2a20();
  /* 113d2077 mov esi, esp */
  ESI = (ESP);
  /* 113d2079 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d207b push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d2080 call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d2086u);
  /* 113d2086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2089 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d208b call 0x113d2a20 */
  push32(0x113d2090u); f_113d2a20();
  /* 113d2090 mov esi, esp */
  ESI = (ESP);
  /* 113d2092 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2094 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2096 push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d209b push 5 */
  push32((uint32_t)(0x5u));
  /* 113d209d call dword ptr [0x11402468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402468))), 0x113d20a3u);
  /* 113d20a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d20a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d20a8 call 0x113d2a20 */
  push32(0x113d20adu); f_113d2a20();
L_113d20ad:;
  /* 113d20ad mov esi, esp */
  ESI = (ESP);
  /* 113d20af push 3 */
  push32((uint32_t)(0x3u));
  /* 113d20b1 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d20b7u);
  /* 113d20b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d20ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d20bc call 0x113d2a20 */
  push32(0x113d20c1u); f_113d2a20();
  /* 113d20c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d20c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d20c8 je 0x113d2114 */
  if (C.zf) goto L_113d2114;
  /* 113d20ca mov esi, esp */
  ESI = (ESP);
  /* 113d20cc push 0 */
  push32((uint32_t)(0x0u));
  /* 113d20ce push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d20d3 call dword ptr [0x11402474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402474))), 0x113d20d9u);
  /* 113d20d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d20dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d20de call 0x113d2a20 */
  push32(0x113d20e3u); f_113d2a20();
  /* 113d20e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d20e6 jle 0x113d2114 */
  if ((C.zf||C.sf!=C.of)) goto L_113d2114;
  /* 113d20e8 mov esi, esp */
  ESI = (ESP);
  /* 113d20ea push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113d20ec push 5 */
  push32((uint32_t)(0x5u));
  /* 113d20ee call dword ptr [0x11402438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402438))), 0x113d20f4u);
  /* 113d20f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d20f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d20f9 call 0x113d2a20 */
  push32(0x113d20feu); f_113d2a20();
  /* 113d20fe mov esi, esp */
  ESI = (ESP);
  /* 113d2100 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2102 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d2104 call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d210au);
  /* 113d210a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d210d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d210f call 0x113d2a20 */
  push32(0x113d2114u); f_113d2a20();
L_113d2114:;
  /* 113d2114 mov esi, esp */
  ESI = (ESP);
  /* 113d2116 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2118 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d211eu);
  /* 113d211e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2123 call 0x113d2a20 */
  push32(0x113d2128u); f_113d2a20();
  /* 113d2128 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d212d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d212f je 0x113d240c */
  if (C.zf) goto L_113d240c;
  /* 113d2135 mov esi, esp */
  ESI = (ESP);
  /* 113d2137 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d2139 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d213fu);
  /* 113d213f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2142 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2144 call 0x113d2a20 */
  push32(0x113d2149u); f_113d2a20();
  /* 113d2149 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d214e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2150 je 0x113d240c */
  if (C.zf) goto L_113d240c;
  /* 113d2156 mov esi, esp */
  ESI = (ESP);
  /* 113d2158 push 0x113ff418 */
  push32((uint32_t)(0x113ff418u));
  /* 113d215d push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d2162 call dword ptr [0x11402450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402450))), 0x113d2168u);
  /* 113d2168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d216b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d216d call 0x113d2a20 */
  push32(0x113d2172u); f_113d2a20();
  /* 113d2172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2174 jle 0x113d240c */
  if ((C.zf||C.sf!=C.of)) goto L_113d240c;
  /* 113d217a mov esi, esp */
  ESI = (ESP);
  /* 113d217c push 0x113fa0f4 */
  push32((uint32_t)(0x113fa0f4u));
  /* 113d2181 call dword ptr [0x11402454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402454))), 0x113d2187u);
  /* 113d2187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d218a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d218c call 0x113d2a20 */
  push32(0x113d2191u); f_113d2a20();
  /* 113d2191 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2198 je 0x113d23f6 */
  if (C.zf) goto L_113d23f6;
  /* 113d219e mov esi, esp */
  ESI = (ESP);
  /* 113d21a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d21a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d21a4 call dword ptr [0x1140244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140244c))), 0x113d21aau);
  /* 113d21aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d21ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d21af call 0x113d2a20 */
  push32(0x113d21b4u); f_113d2a20();
  /* 113d21b4 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d21b9 jle 0x113d23f6 */
  if ((C.zf||C.sf!=C.of)) goto L_113d23f6;
  /* 113d21bf mov esi, esp */
  ESI = (ESP);
  /* 113d21c1 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 113d21c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d21c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d21ca call dword ptr [0x1140245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140245c))), 0x113d21d0u);
  /* 113d21d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d21d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d21d5 call 0x113d2a20 */
  push32(0x113d21dau); f_113d2a20();
  /* 113d21da mov esi, esp */
  ESI = (ESP);
  /* 113d21dc push 0 */
  push32((uint32_t)(0x0u));
  /* 113d21de push 0x113ff458 */
  push32((uint32_t)(0x113ff458u));
  /* 113d21e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d21e5 push 0x113ff4b8 */
  push32((uint32_t)(0x113ff4b8u));
  /* 113d21ea push 0x113ff400 */
  push32((uint32_t)(0x113ff400u));
  /* 113d21ef push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d21f4 call dword ptr [0x11402458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402458))), 0x113d21fau);
  /* 113d21fa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d21fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d21ff call 0x113d2a20 */
  push32(0x113d2204u); f_113d2a20();
  /* 113d2204 mov esi, esp */
  ESI = (ESP);
  /* 113d2206 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2208 push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d220d call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d2213u);
  /* 113d2213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2216 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2218 call 0x113d2a20 */
  push32(0x113d221du); f_113d2a20();
  /* 113d221d mov esi, esp */
  ESI = (ESP);
  /* 113d221f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2221 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2223 push 0x113ff488 */
  push32((uint32_t)(0x113ff488u));
  /* 113d2228 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d222a call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d2230u);
  /* 113d2230 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2233 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2235 call 0x113d2a20 */
  push32(0x113d223au); f_113d2a20();
  /* 113d223a mov esi, esp */
  ESI = (ESP);
  /* 113d223c push 2 */
  push32((uint32_t)(0x2u));
  /* 113d223e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2240 push 0x113ff490 */
  push32((uint32_t)(0x113ff490u));
  /* 113d2245 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2247 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d224du);
  /* 113d224d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2250 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2252 call 0x113d2a20 */
  push32(0x113d2257u); f_113d2a20();
  /* 113d2257 mov esi, esp */
  ESI = (ESP);
  /* 113d2259 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d225b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d225d push 0x113ff498 */
  push32((uint32_t)(0x113ff498u));
  /* 113d2262 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2264 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d226au);
  /* 113d226a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d226d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d226f call 0x113d2a20 */
  push32(0x113d2274u); f_113d2a20();
  /* 113d2274 mov esi, esp */
  ESI = (ESP);
  /* 113d2276 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d2278 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d227a push 0x113ff468 */
  push32((uint32_t)(0x113ff468u));
  /* 113d227f push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2281 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d2287u);
  /* 113d2287 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d228a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d228c call 0x113d2a20 */
  push32(0x113d2291u); f_113d2a20();
  /* 113d2291 mov esi, esp */
  ESI = (ESP);
  /* 113d2293 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d2295 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2297 push 0x113ff4a0 */
  push32((uint32_t)(0x113ff4a0u));
  /* 113d229c push 5 */
  push32((uint32_t)(0x5u));
  /* 113d229e call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d22a4u);
  /* 113d22a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d22a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d22a9 call 0x113d2a20 */
  push32(0x113d22aeu); f_113d2a20();
  /* 113d22ae mov esi, esp */
  ESI = (ESP);
  /* 113d22b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d22b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d22b4 push 0x113ff4a8 */
  push32((uint32_t)(0x113ff4a8u));
  /* 113d22b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d22bb call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d22c1u);
  /* 113d22c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d22c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d22c6 call 0x113d2a20 */
  push32(0x113d22cbu); f_113d2a20();
  /* 113d22cb mov esi, esp */
  ESI = (ESP);
  /* 113d22cd push 2 */
  push32((uint32_t)(0x2u));
  /* 113d22cf push 0 */
  push32((uint32_t)(0x0u));
  /* 113d22d1 push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d22d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d22d8 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d22deu);
  /* 113d22de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d22e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d22e3 call 0x113d2a20 */
  push32(0x113d22e8u); f_113d2a20();
  /* 113d22e8 mov esi, esp */
  ESI = (ESP);
  /* 113d22ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113d22ec push 0x113ff458 */
  push32((uint32_t)(0x113ff458u));
  /* 113d22f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d22f3 push 0x113ff4b8 */
  push32((uint32_t)(0x113ff4b8u));
  /* 113d22f8 push 0x113ff400 */
  push32((uint32_t)(0x113ff400u));
  /* 113d22fd push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d2302 call dword ptr [0x11402458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402458))), 0x113d2308u);
  /* 113d2308 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d230b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d230d call 0x113d2a20 */
  push32(0x113d2312u); f_113d2a20();
  /* 113d2312 mov esi, esp */
  ESI = (ESP);
  /* 113d2314 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2316 push 0x113ff410 */
  push32((uint32_t)(0x113ff410u));
  /* 113d231b call dword ptr [0x11402448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402448))), 0x113d2321u);
  /* 113d2321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2326 call 0x113d2a20 */
  push32(0x113d232bu); f_113d2a20();
  /* 113d232b mov esi, esp */
  ESI = (ESP);
  /* 113d232d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d232f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2331 push 0x113ff488 */
  push32((uint32_t)(0x113ff488u));
  /* 113d2336 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2338 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d233eu);
  /* 113d233e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2343 call 0x113d2a20 */
  push32(0x113d2348u); f_113d2a20();
  /* 113d2348 mov esi, esp */
  ESI = (ESP);
  /* 113d234a push 2 */
  push32((uint32_t)(0x2u));
  /* 113d234c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d234e push 0x113ff490 */
  push32((uint32_t)(0x113ff490u));
  /* 113d2353 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2355 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d235bu);
  /* 113d235b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d235e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2360 call 0x113d2a20 */
  push32(0x113d2365u); f_113d2a20();
  /* 113d2365 mov esi, esp */
  ESI = (ESP);
  /* 113d2367 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d2369 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d236b push 0x113ff498 */
  push32((uint32_t)(0x113ff498u));
  /* 113d2370 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2372 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d2378u);
  /* 113d2378 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d237b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d237d call 0x113d2a20 */
  push32(0x113d2382u); f_113d2a20();
  /* 113d2382 mov esi, esp */
  ESI = (ESP);
  /* 113d2384 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d2386 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2388 push 0x113ff468 */
  push32((uint32_t)(0x113ff468u));
  /* 113d238d push 5 */
  push32((uint32_t)(0x5u));
  /* 113d238f call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d2395u);
  /* 113d2395 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2398 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d239a call 0x113d2a20 */
  push32(0x113d239fu); f_113d2a20();
  /* 113d239f mov esi, esp */
  ESI = (ESP);
  /* 113d23a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d23a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d23a5 push 0x113ff4a0 */
  push32((uint32_t)(0x113ff4a0u));
  /* 113d23aa push 5 */
  push32((uint32_t)(0x5u));
  /* 113d23ac call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d23b2u);
  /* 113d23b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d23b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d23b7 call 0x113d2a20 */
  push32(0x113d23bcu); f_113d2a20();
  /* 113d23bc mov esi, esp */
  ESI = (ESP);
  /* 113d23be push 2 */
  push32((uint32_t)(0x2u));
  /* 113d23c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d23c2 push 0x113ff4a8 */
  push32((uint32_t)(0x113ff4a8u));
  /* 113d23c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d23c9 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d23cfu);
  /* 113d23cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d23d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d23d4 call 0x113d2a20 */
  push32(0x113d23d9u); f_113d2a20();
  /* 113d23d9 mov esi, esp */
  ESI = (ESP);
  /* 113d23db push 2 */
  push32((uint32_t)(0x2u));
  /* 113d23dd push 0 */
  push32((uint32_t)(0x0u));
  /* 113d23df push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d23e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d23e6 call dword ptr [0x1140246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140246c))), 0x113d23ecu);
  /* 113d23ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d23ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d23f1 call 0x113d2a20 */
  push32(0x113d23f6u); f_113d2a20();
L_113d23f6:;
  /* 113d23f6 mov esi, esp */
  ESI = (ESP);
  /* 113d23f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d23fa push 4 */
  push32((uint32_t)(0x4u));
  /* 113d23fc call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d2402u);
  /* 113d2402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2407 call 0x113d2a20 */
  push32(0x113d240cu); f_113d2a20();
L_113d240c:;
  /* 113d240c mov esi, esp */
  ESI = (ESP);
  /* 113d240e push 4 */
  push32((uint32_t)(0x4u));
  /* 113d2410 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d2416u);
  /* 113d2416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2419 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d241b call 0x113d2a20 */
  push32(0x113d2420u); f_113d2a20();
  /* 113d2420 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2427 jne 0x113d245f */
  if (!C.zf) goto L_113d245f;
  /* 113d2429 mov esi, esp */
  ESI = (ESP);
  /* 113d242b push 0x113ff418 */
  push32((uint32_t)(0x113ff418u));
  /* 113d2430 push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d2435 call dword ptr [0x11402450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402450))), 0x113d243bu);
  /* 113d243b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d243e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2440 call 0x113d2a20 */
  push32(0x113d2445u); f_113d2a20();
  /* 113d2445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2447 jne 0x113d245f */
  if (!C.zf) goto L_113d245f;
  /* 113d2449 mov esi, esp */
  ESI = (ESP);
  /* 113d244b push 1 */
  push32((uint32_t)(0x1u));
  /* 113d244d push 4 */
  push32((uint32_t)(0x4u));
  /* 113d244f call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d2455u);
  /* 113d2455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d245a call 0x113d2a20 */
  push32(0x113d245fu); f_113d2a20();
L_113d245f:;
  /* 113d245f mov esi, esp */
  ESI = (ESP);
  /* 113d2461 push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2463 call dword ptr [0x1140242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140242c))), 0x113d2469u);
  /* 113d2469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d246c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d246e call 0x113d2a20 */
  push32(0x113d2473u); f_113d2a20();
  /* 113d2473 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d247a je 0x113d24b0 */
  if (C.zf) goto L_113d24b0;
  /* 113d247c mov esi, esp */
  ESI = (ESP);
  /* 113d247e push 5 */
  push32((uint32_t)(0x5u));
  /* 113d2480 push 0x113ff460 */
  push32((uint32_t)(0x113ff460u));
  /* 113d2485 call dword ptr [0x11402474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402474))), 0x113d248bu);
  /* 113d248b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d248e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2490 call 0x113d2a20 */
  push32(0x113d2495u); f_113d2a20();
  /* 113d2495 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2498 jge 0x113d24b0 */
  if ((C.sf==C.of)) goto L_113d24b0;
  /* 113d249a mov esi, esp */
  ESI = (ESP);
  /* 113d249c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d249e push 5 */
  push32((uint32_t)(0x5u));
  /* 113d24a0 call dword ptr [0x11402440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402440))), 0x113d24a6u);
  /* 113d24a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d24a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d24ab call 0x113d2a20 */
  push32(0x113d24b0u); f_113d2a20();
L_113d24b0:;
  /* 113d24b0 mov esi, esp */
  ESI = (ESP);
  /* 113d24b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d24b4 call dword ptr [0x11402498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402498))), 0x113d24bau);
  /* 113d24ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d24bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d24bf call 0x113d2a20 */
  push32(0x113d24c4u); f_113d2a20();
  /* 113d24c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d24c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d24cb je 0x113d24f9 */
  if (C.zf) goto L_113d24f9;
  /* 113d24cd mov esi, esp */
  ESI = (ESP);
  /* 113d24cf push 3 */
  push32((uint32_t)(0x3u));
  /* 113d24d1 call dword ptr [0x11402498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402498))), 0x113d24d7u);
  /* 113d24d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d24da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d24dc call 0x113d2a20 */
  push32(0x113d24e1u); f_113d2a20();
  /* 113d24e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d24e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d24e8 je 0x113d24f9 */
  if (C.zf) goto L_113d24f9;
  /* 113d24ea mov esi, esp */
  ESI = (ESP);
  /* 113d24ec call dword ptr [0x1140249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140249c))), 0x113d24f2u);
  /* 113d24f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d24f4 call 0x113d2a20 */
  push32(0x113d24f9u); f_113d2a20();
L_113d24f9:;
  /* 113d24f9 mov esi, esp */
  ESI = (ESP);
  /* 113d24fb push 0 */
  push32((uint32_t)(0x0u));
  /* 113d24fd call dword ptr [0x11402498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402498))), 0x113d2503u);
  /* 113d2503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2506 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2508 call 0x113d2a20 */
  push32(0x113d250du); f_113d2a20();
  /* 113d250d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2514 je 0x113d2525 */
  if (C.zf) goto L_113d2525;
  /* 113d2516 mov esi, esp */
  ESI = (ESP);
  /* 113d2518 call dword ptr [0x11402494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402494))), 0x113d251eu);
  /* 113d251e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2520 call 0x113d2a20 */
  push32(0x113d2525u); f_113d2a20();
L_113d2525:;
  /* 113d2525 pop edi */
  EDI = (pop32());
  /* 113d2526 pop esi */
  ESI = (pop32());
  /* 113d2527 pop ebx */
  EBX = (pop32());
  /* 113d2528 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d252b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d252d call 0x113d2a20 */
  push32(0x113d2532u); f_113d2a20();
  /* 113d2532 mov esp, ebp */
  ESP = (EBP);
  /* 113d2534 pop ebp */
  EBP = (pop32());
  /* 113d2535 ret  */
  ESPCHK(0x113d1570u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x113d2a20 (56 bytes, 28 insns) */
void f_113d2a20(void) {
  FTRACE(0x113d2a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2a20 jne 0x113d2a23 */
  if (!C.zf) goto L_113d2a23;
  /* 113d2a22 ret  */
  ESPCHK(0x113d2a20u, _esp0);
  ESP += 4; return;
L_113d2a23:;
  /* 113d2a23 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2a24 mov ebp, esp */
  EBP = (ESP);
  /* 113d2a26 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d2a29 push eax */
  push32((uint32_t)(EAX));
  /* 113d2a2a push edx */
  push32((uint32_t)(EDX));
  /* 113d2a2b push ebx */
  push32((uint32_t)(EBX));
  /* 113d2a2c push esi */
  push32((uint32_t)(ESI));
  /* 113d2a2d push edi */
  push32((uint32_t)(EDI));
  /* 113d2a2e push 0x113fa148 */
  push32((uint32_t)(0x113fa148u));
  /* 113d2a33 push 0x113fa144 */
  push32((uint32_t)(0x113fa144u));
  /* 113d2a38 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 113d2a3a push 0x113fa134 */
  push32((uint32_t)(0x113fa134u));
  /* 113d2a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 113d2a41 call 0x113d2df0 */
  push32(0x113d2a46u); f_113d2df0();
  /* 113d2a46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2a49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2a4c jne 0x113d2a4f */
  if (!C.zf) goto L_113d2a4f;
  /* 113d2a4e int3  */
  x86_unimpl("int3 @ 0x113d2a4e");
L_113d2a4f:;
  /* 113d2a4f pop edi */
  EDI = (pop32());
  /* 113d2a50 pop esi */
  ESI = (pop32());
  /* 113d2a51 pop ebx */
  EBX = (pop32());
  /* 113d2a52 pop edx */
  EDX = (pop32());
  /* 113d2a53 pop eax */
  EAX = (pop32());
  /* 113d2a54 mov esp, ebp */
  ESP = (EBP);
  /* 113d2a56 pop ebp */
  EBP = (pop32());
  /* 113d2a57 ret  */
  ESPCHK(0x113d2a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x113d2a60 (313 bytes, 78 insns) */
void f_113d2a60(void) {
  FTRACE(0x113d2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2a61 mov ebp, esp */
  EBP = (ESP);
  /* 113d2a63 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2a67 jne 0x113d2b27 */
  if (!C.zf) goto L_113d2b27;
  /* 113d2a6d call dword ptr [0x11402344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402344))), 0x113d2a73u);
  /* 113d2a73 mov dword ptr [0x113ff518], eax */
  w32((uint32_t)(0x113ff518), (EAX));
  /* 113d2a78 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d2a7a call 0x113d6520 */
  push32(0x113d2a7fu); f_113d6520();
  /* 113d2a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2a84 jne 0x113d2a8d */
  if (!C.zf) goto L_113d2a8d;
  /* 113d2a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2a88 jmp 0x113d2b95 */
  goto L_113d2b95;
L_113d2a8d:;
  /* 113d2a8d mov eax, dword ptr [0x113ff518] */
  EAX = (r32((uint32_t)(0x113ff518)));
  /* 113d2a92 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113d2a95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2a9a mov dword ptr [0x113ff524], eax */
  w32((uint32_t)(0x113ff524), (EAX));
  /* 113d2a9f mov ecx, dword ptr [0x113ff518] */
  ECX = (r32((uint32_t)(0x113ff518)));
  /* 113d2aa5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d2aab mov dword ptr [0x113ff520], ecx */
  w32((uint32_t)(0x113ff520), (ECX));
  /* 113d2ab1 mov edx, dword ptr [0x113ff520] */
  EDX = (r32((uint32_t)(0x113ff520)));
  /* 113d2ab7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113d2aba add edx, dword ptr [0x113ff524] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113ff524))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2ac0 mov dword ptr [0x113ff51c], edx */
  w32((uint32_t)(0x113ff51c), (EDX));
  /* 113d2ac6 mov eax, dword ptr [0x113ff518] */
  EAX = (r32((uint32_t)(0x113ff518)));
  /* 113d2acb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113d2ace and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2ad3 mov dword ptr [0x113ff518], eax */
  w32((uint32_t)(0x113ff518), (EAX));
  /* 113d2ad8 call 0x113d3690 */
  push32(0x113d2addu); f_113d3690();
  /* 113d2add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2adf jne 0x113d2aed */
  if (!C.zf) goto L_113d2aed;
  /* 113d2ae1 call 0x113d6570 */
  push32(0x113d2ae6u); f_113d6570();
  /* 113d2ae6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2ae8 jmp 0x113d2b95 */
  goto L_113d2b95;
L_113d2aed:;
  /* 113d2aed call dword ptr [0x11402340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402340))), 0x113d2af3u);
  /* 113d2af3 mov dword ptr [0x1140106c], eax */
  w32((uint32_t)(0x1140106c), (EAX));
  /* 113d2af8 call 0x113d6300 */
  push32(0x113d2afdu); f_113d6300();
  /* 113d2afd mov dword ptr [0x113ff500], eax */
  w32((uint32_t)(0x113ff500), (EAX));
  /* 113d2b02 call 0x113d3940 */
  push32(0x113d2b07u); f_113d3940();
  /* 113d2b07 call 0x113d5df0 */
  push32(0x113d2b0cu); f_113d5df0();
  /* 113d2b0c call 0x113d5ca0 */
  push32(0x113d2b11u); f_113d5ca0();
  /* 113d2b11 call 0x113d3490 */
  push32(0x113d2b16u); f_113d3490();
  /* 113d2b16 mov ecx, dword ptr [0x113ff4fc] */
  ECX = (r32((uint32_t)(0x113ff4fc)));
  /* 113d2b1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2b1f mov dword ptr [0x113ff4fc], ecx */
  w32((uint32_t)(0x113ff4fc), (ECX));
  /* 113d2b25 jmp 0x113d2b90 */
  goto L_113d2b90;
L_113d2b27:;
  /* 113d2b27 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2b2b jne 0x113d2b80 */
  if (!C.zf) goto L_113d2b80;
  /* 113d2b2d cmp dword ptr [0x113ff4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2b34 jle 0x113d2b7a */
  if ((C.zf||C.sf!=C.of)) goto L_113d2b7a;
  /* 113d2b36 mov edx, dword ptr [0x113ff4fc] */
  EDX = (r32((uint32_t)(0x113ff4fc)));
  /* 113d2b3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d2b3f mov dword ptr [0x113ff4fc], edx */
  w32((uint32_t)(0x113ff4fc), (EDX));
  /* 113d2b45 cmp dword ptr [0x113ff550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2b4c jne 0x113d2b53 */
  if (!C.zf) goto L_113d2b53;
  /* 113d2b4e call 0x113d3510 */
  push32(0x113d2b53u); f_113d3510();
L_113d2b53:;
  /* 113d2b53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113d2b55 call 0x113d5240 */
  push32(0x113d2b5au); f_113d5240();
  /* 113d2b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2b5d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 113d2b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2b62 je 0x113d2b69 */
  if (C.zf) goto L_113d2b69;
  /* 113d2b64 call 0x113d5b50 */
  push32(0x113d2b69u); f_113d5b50();
L_113d2b69:;
  /* 113d2b69 call 0x113d3c70 */
  push32(0x113d2b6eu); f_113d3c70();
  /* 113d2b6e call 0x113d3720 */
  push32(0x113d2b73u); f_113d3720();
  /* 113d2b73 call 0x113d6570 */
  push32(0x113d2b78u); f_113d6570();
  /* 113d2b78 jmp 0x113d2b7e */
  goto L_113d2b7e;
L_113d2b7a:;
  /* 113d2b7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2b7c jmp 0x113d2b95 */
  goto L_113d2b95;
L_113d2b7e:;
  /* 113d2b7e jmp 0x113d2b90 */
  goto L_113d2b90;
L_113d2b80:;
  /* 113d2b80 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2b84 jne 0x113d2b90 */
  if (!C.zf) goto L_113d2b90;
  /* 113d2b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2b88 call 0x113d3810 */
  push32(0x113d2b8du); f_113d3810();
  /* 113d2b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d2b90:;
  /* 113d2b90 mov eax, 1 */
  EAX = (0x1u);
L_113d2b95:;
  /* 113d2b95 pop ebp */
  EBP = (pop32());
  /* 113d2b96 ret 0xc */
  ESPCHK(0x113d2a60u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x113d2ba0 (243 bytes, 86 insns) */
void f_113d2ba0(void) {
  FTRACE(0x113d2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2ba1 mov ebp, esp */
  EBP = (ESP);
  /* 113d2ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2ba4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113d2bab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2baf jne 0x113d2bc1 */
  if (!C.zf) goto L_113d2bc1;
  /* 113d2bb1 cmp dword ptr [0x113ff4fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff4fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2bb8 jne 0x113d2bc1 */
  if (!C.zf) goto L_113d2bc1;
  /* 113d2bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2bbc jmp 0x113d2c8d */
  goto L_113d2c8d;
L_113d2bc1:;
  /* 113d2bc1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2bc5 je 0x113d2bcd */
  if (C.zf) goto L_113d2bcd;
  /* 113d2bc7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2bcb jne 0x113d2c0f */
  if (!C.zf) goto L_113d2c0f;
L_113d2bcd:;
  /* 113d2bcd cmp dword ptr [0x1140107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1140107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2bd4 je 0x113d2beb */
  if (C.zf) goto L_113d2beb;
  /* 113d2bd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2bd9 push eax */
  push32((uint32_t)(EAX));
  /* 113d2bda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2bdd push ecx */
  push32((uint32_t)(ECX));
  /* 113d2bde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2be1 push edx */
  push32((uint32_t)(EDX));
  /* 113d2be2 call dword ptr [0x1140107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140107c))), 0x113d2be8u);
  /* 113d2be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d2beb:;
  /* 113d2beb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2bef je 0x113d2c05 */
  if (C.zf) goto L_113d2c05;
  /* 113d2bf1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2bf4 push eax */
  push32((uint32_t)(EAX));
  /* 113d2bf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2bf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2bfc push edx */
  push32((uint32_t)(EDX));
  /* 113d2bfd call 0x113d2a60 */
  push32(0x113d2c02u); f_113d2a60();
  /* 113d2c02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d2c05:;
  /* 113d2c05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2c09 jne 0x113d2c0f */
  if (!C.zf) goto L_113d2c0f;
  /* 113d2c0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2c0d jmp 0x113d2c8d */
  goto L_113d2c8d;
L_113d2c0f:;
  /* 113d2c0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2c12 push eax */
  push32((uint32_t)(EAX));
  /* 113d2c13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2c16 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2c17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2c1a push edx */
  push32((uint32_t)(EDX));
  /* 113d2c1b call 0x113d100a */
  push32(0x113d2c20u); f_113d100a();
  /* 113d2c20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d2c23 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2c27 jne 0x113d2c3e */
  if (!C.zf) goto L_113d2c3e;
  /* 113d2c29 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2c2d jne 0x113d2c3e */
  if (!C.zf) goto L_113d2c3e;
  /* 113d2c2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2c32 push eax */
  push32((uint32_t)(EAX));
  /* 113d2c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d2c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2c38 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2c39 call 0x113d2a60 */
  push32(0x113d2c3eu); f_113d2a60();
L_113d2c3e:;
  /* 113d2c3e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2c42 je 0x113d2c4a */
  if (C.zf) goto L_113d2c4a;
  /* 113d2c44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2c48 jne 0x113d2c8a */
  if (!C.zf) goto L_113d2c8a;
L_113d2c4a:;
  /* 113d2c4a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2c4d push edx */
  push32((uint32_t)(EDX));
  /* 113d2c4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2c51 push eax */
  push32((uint32_t)(EAX));
  /* 113d2c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2c55 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2c56 call 0x113d2a60 */
  push32(0x113d2c5bu); f_113d2a60();
  /* 113d2c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2c5d jne 0x113d2c66 */
  if (!C.zf) goto L_113d2c66;
  /* 113d2c5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113d2c66:;
  /* 113d2c66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2c6a je 0x113d2c8a */
  if (C.zf) goto L_113d2c8a;
  /* 113d2c6c cmp dword ptr [0x1140107c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1140107c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2c73 je 0x113d2c8a */
  if (C.zf) goto L_113d2c8a;
  /* 113d2c75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2c78 push edx */
  push32((uint32_t)(EDX));
  /* 113d2c79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2c7c push eax */
  push32((uint32_t)(EAX));
  /* 113d2c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2c80 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2c81 call dword ptr [0x1140107c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140107c))), 0x113d2c87u);
  /* 113d2c87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d2c8a:;
  /* 113d2c8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113d2c8d:;
  /* 113d2c8d mov esp, ebp */
  ESP = (EBP);
  /* 113d2c8f pop ebp */
  EBP = (pop32());
  /* 113d2c90 ret 0xc */
  ESPCHK(0x113d2ba0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x113d2ca0 (58 bytes, 18 insns) */
void f_113d2ca0(void) {
  FTRACE(0x113d2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 113d2ca3 cmp dword ptr [0x113ff508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2caa je 0x113d2cbe */
  if (C.zf) goto L_113d2cbe;
  /* 113d2cac cmp dword ptr [0x113ff508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2cb3 jne 0x113d2cc3 */
  if (!C.zf) goto L_113d2cc3;
  /* 113d2cb5 cmp dword ptr [0x113ff50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2cbc jne 0x113d2cc3 */
  if (!C.zf) goto L_113d2cc3;
L_113d2cbe:;
  /* 113d2cbe call 0x113d6610 */
  push32(0x113d2cc3u); f_113d6610();
L_113d2cc3:;
  /* 113d2cc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2cc6 push eax */
  push32((uint32_t)(EAX));
  /* 113d2cc7 call 0x113d6660 */
  push32(0x113d2cccu); f_113d6660();
  /* 113d2ccc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2ccf push 0xff */
  push32((uint32_t)(0xffu));
  /* 113d2cd4 call dword ptr [0x113fda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x113fda30))), 0x113d2cdau);
  /* 113d2cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2cdd pop ebp */
  EBP = (pop32());
  /* 113d2cde ret  */
  ESPCHK(0x113d2ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x113d2ce0 (11 bytes, 5 insns) */
void f_113d2ce0(void) {
  FTRACE(0x113d2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 113d2ce3 call dword ptr [0x11402348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402348))), 0x113d2ce9u);
  /* 113d2ce9 pop ebp */
  EBP = (pop32());
  /* 113d2cea ret  */
  ESPCHK(0x113d2ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf0 @ 0x113d2cf0 (87 bytes, 30 insns) */
void f_113d2cf0(void) {
  FTRACE(0x113d2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 113d2cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2cf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2cf8 jl 0x113d2d00 */
  if ((C.sf!=C.of)) goto L_113d2d00;
  /* 113d2cfa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2cfe jl 0x113d2d05 */
  if ((C.sf!=C.of)) goto L_113d2d05;
L_113d2d00:;
  /* 113d2d00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2d03 jmp 0x113d2d43 */
  goto L_113d2d43;
L_113d2d05:;
  /* 113d2d05 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2d09 jne 0x113d2d17 */
  if (!C.zf) goto L_113d2d17;
  /* 113d2d0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2d0e mov eax, dword ptr [eax*4 + 0x113fda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x113fda38)));
  /* 113d2d15 jmp 0x113d2d43 */
  goto L_113d2d43;
L_113d2d17:;
  /* 113d2d17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2d1a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 113d2d1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d2d1f je 0x113d2d26 */
  if (C.zf) goto L_113d2d26;
  /* 113d2d21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2d24 jmp 0x113d2d43 */
  goto L_113d2d43;
L_113d2d26:;
  /* 113d2d26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2d29 mov eax, dword ptr [edx*4 + 0x113fda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113fda38)));
  /* 113d2d30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d2d33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2d36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2d39 mov dword ptr [ecx*4 + 0x113fda38], edx */
  w32((uint32_t)(ECX*4 + 0x113fda38), (EDX));
  /* 113d2d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113d2d43:;
  /* 113d2d43 mov esp, ebp */
  ESP = (EBP);
  /* 113d2d45 pop ebp */
  EBP = (pop32());
  /* 113d2d46 ret  */
  ESPCHK(0x113d2cf0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x113d2d50 (126 bytes, 38 insns) */
void f_113d2d50(void) {
  FTRACE(0x113d2d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2d50 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2d51 mov ebp, esp */
  EBP = (ESP);
  /* 113d2d53 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2d54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2d58 jl 0x113d2d60 */
  if ((C.sf!=C.of)) goto L_113d2d60;
  /* 113d2d5a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2d5e jl 0x113d2d67 */
  if ((C.sf!=C.of)) goto L_113d2d67;
L_113d2d60:;
  /* 113d2d60 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 113d2d65 jmp 0x113d2dca */
  goto L_113d2dca;
L_113d2d67:;
  /* 113d2d67 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2d6b jne 0x113d2d79 */
  if (!C.zf) goto L_113d2d79;
  /* 113d2d6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2d70 mov eax, dword ptr [eax*4 + 0x113fda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x113fda44)));
  /* 113d2d77 jmp 0x113d2dca */
  goto L_113d2dca;
L_113d2d79:;
  /* 113d2d79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2d7c mov edx, dword ptr [ecx*4 + 0x113fda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda44)));
  /* 113d2d83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d2d86 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2d8a jne 0x113d2da0 */
  if (!C.zf) goto L_113d2da0;
  /* 113d2d8c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 113d2d8e call dword ptr [0x1140234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140234c))), 0x113d2d94u);
  /* 113d2d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2d97 mov dword ptr [ecx*4 + 0x113fda44], eax */
  w32((uint32_t)(ECX*4 + 0x113fda44), (EAX));
  /* 113d2d9e jmp 0x113d2dc7 */
  goto L_113d2dc7;
L_113d2da0:;
  /* 113d2da0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2da4 jne 0x113d2dba */
  if (!C.zf) goto L_113d2dba;
  /* 113d2da6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113d2da8 call dword ptr [0x1140234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140234c))), 0x113d2daeu);
  /* 113d2dae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2db1 mov dword ptr [edx*4 + 0x113fda44], eax */
  w32((uint32_t)(EDX*4 + 0x113fda44), (EAX));
  /* 113d2db8 jmp 0x113d2dc7 */
  goto L_113d2dc7;
L_113d2dba:;
  /* 113d2dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2dbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2dc0 mov dword ptr [eax*4 + 0x113fda44], ecx */
  w32((uint32_t)(EAX*4 + 0x113fda44), (ECX));
L_113d2dc7:;
  /* 113d2dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113d2dca:;
  /* 113d2dca mov esp, ebp */
  ESP = (EBP);
  /* 113d2dcc pop ebp */
  EBP = (pop32());
  /* 113d2dcd ret  */
  ESPCHK(0x113d2d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd0 @ 0x113d2dd0 (28 bytes, 11 insns) */
void f_113d2dd0(void) {
  FTRACE(0x113d2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2dd1 mov ebp, esp */
  EBP = (ESP);
  /* 113d2dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2dd4 mov eax, dword ptr [0x11401060] */
  EAX = (r32((uint32_t)(0x11401060)));
  /* 113d2dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d2ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2ddf mov dword ptr [0x11401060], ecx */
  w32((uint32_t)(0x11401060), (ECX));
  /* 113d2de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d2de8 mov esp, ebp */
  ESP = (EBP);
  /* 113d2dea pop ebp */
  EBP = (pop32());
  /* 113d2deb ret  */
  ESPCHK(0x113d2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002df0 @ 0x113d2df0 (912 bytes, 248 insns) */
void f_113d2df0(void) {
  FTRACE(0x113d2df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d2df0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d2df1 mov ebp, esp */
  EBP = (ESP);
  /* 113d2df3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 113d2df8 call 0x113d6ed0 */
  push32(0x113d2dfdu); f_113d6ed0();
  /* 113d2dfd push edi */
  push32((uint32_t)(EDI));
  /* 113d2dfe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 113d2e05 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 113d2e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2e0c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 113d2e12 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113d2e14 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 113d2e16 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 113d2e17 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 113d2e1e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 113d2e23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2e25 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 113d2e2b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113d2e2d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 113d2e2f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 113d2e30 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 113d2e37 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 113d2e3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d2e3e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 113d2e44 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113d2e46 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 113d2e48 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 113d2e49 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 113d2e4c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 113d2e52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2e56 jl 0x113d2e5e */
  if ((C.sf!=C.of)) goto L_113d2e5e;
  /* 113d2e58 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2e5c jl 0x113d2e66 */
  if ((C.sf!=C.of)) goto L_113d2e66;
L_113d2e5e:;
  /* 113d2e5e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2e61 jmp 0x113d317b */
  goto L_113d317b;
L_113d2e66:;
  /* 113d2e66 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2e6a jne 0x113d2f10 */
  if (!C.zf) goto L_113d2f10;
  /* 113d2e70 push 0x113fda34 */
  push32((uint32_t)(0x113fda34u));
  /* 113d2e75 call dword ptr [0x11402364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402364))), 0x113d2e7bu);
  /* 113d2e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2e7d jle 0x113d2f10 */
  if ((C.zf||C.sf!=C.of)) goto L_113d2f10;
  /* 113d2e83 cmp dword ptr [0x113ff510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2e8a jne 0x113d2ece */
  if (!C.zf) goto L_113d2ece;
  /* 113d2e8c push 0x113fa2f0 */
  push32((uint32_t)(0x113fa2f0u));
  /* 113d2e91 call dword ptr [0x11402360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402360))), 0x113d2e97u);
  /* 113d2e97 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 113d2e9d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2ea4 je 0x113d2ec6 */
  if (C.zf) goto L_113d2ec6;
  /* 113d2ea6 push 0x113fa2e4 */
  push32((uint32_t)(0x113fa2e4u));
  /* 113d2eab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 113d2eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2eb2 call dword ptr [0x1140235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140235c))), 0x113d2eb8u);
  /* 113d2eb8 mov dword ptr [0x113ff510], eax */
  w32((uint32_t)(0x113ff510), (EAX));
  /* 113d2ebd cmp dword ptr [0x113ff510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2ec4 jne 0x113d2ece */
  if (!C.zf) goto L_113d2ece;
L_113d2ec6:;
  /* 113d2ec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2ec9 jmp 0x113d317b */
  goto L_113d317b;
L_113d2ece:;
  /* 113d2ece mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2ed1 push edx */
  push32((uint32_t)(EDX));
  /* 113d2ed2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2ed5 push eax */
  push32((uint32_t)(EAX));
  /* 113d2ed6 push 0x113fa2b0 */
  push32((uint32_t)(0x113fa2b0u));
  /* 113d2edb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 113d2ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2ee2 call dword ptr [0x113ff510] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff510))), 0x113d2ee8u);
  /* 113d2ee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2eeb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113d2ef1 push edx */
  push32((uint32_t)(EDX));
  /* 113d2ef2 call dword ptr [0x11402358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402358))), 0x113d2ef8u);
  /* 113d2ef8 push 0x113fda34 */
  push32((uint32_t)(0x113fda34u));
  /* 113d2efd call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113d2f03u);
  /* 113d2f03 call 0x113d2ce0 */
  push32(0x113d2f08u); f_113d2ce0();
  /* 113d2f08 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d2f0b jmp 0x113d317b */
  goto L_113d317b;
L_113d2f10:;
  /* 113d2f10 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2f14 je 0x113d2f4d */
  if (C.zf) goto L_113d2f4d;
  /* 113d2f16 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 113d2f1c push eax */
  push32((uint32_t)(EAX));
  /* 113d2f1d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d2f20 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2f21 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 113d2f26 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 113d2f2c push edx */
  push32((uint32_t)(EDX));
  /* 113d2f2d call 0x113d6dd0 */
  push32(0x113d2f32u); f_113d6dd0();
  /* 113d2f32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2f37 jge 0x113d2f4d */
  if ((C.sf==C.of)) goto L_113d2f4d;
  /* 113d2f39 push 0x113fa284 */
  push32((uint32_t)(0x113fa284u));
  /* 113d2f3e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 113d2f44 push eax */
  push32((uint32_t)(EAX));
  /* 113d2f45 call 0x113d6ce0 */
  push32(0x113d2f4au); f_113d6ce0();
  /* 113d2f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d2f4d:;
  /* 113d2f4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2f51 jne 0x113d2f85 */
  if (!C.zf) goto L_113d2f85;
  /* 113d2f53 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2f57 je 0x113d2f65 */
  if (C.zf) goto L_113d2f65;
  /* 113d2f59 mov dword ptr [ebp - 0x3028], 0x113fa270 */
  w32((uint32_t)(EBP + -0x3028), (0x113fa270u));
  /* 113d2f63 jmp 0x113d2f6f */
  goto L_113d2f6f;
L_113d2f65:;
  /* 113d2f65 mov dword ptr [ebp - 0x3028], 0x113fa25c */
  w32((uint32_t)(EBP + -0x3028), (0x113fa25cu));
L_113d2f6f:;
  /* 113d2f6f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 113d2f75 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2f76 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 113d2f7c push edx */
  push32((uint32_t)(EDX));
  /* 113d2f7d call 0x113d6ce0 */
  push32(0x113d2f82u); f_113d6ce0();
  /* 113d2f82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d2f85:;
  /* 113d2f85 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 113d2f8b push eax */
  push32((uint32_t)(EAX));
  /* 113d2f8c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 113d2f92 push ecx */
  push32((uint32_t)(ECX));
  /* 113d2f93 call 0x113d6cf0 */
  push32(0x113d2f98u); f_113d6cf0();
  /* 113d2f98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d2f9b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2f9f jne 0x113d2fda */
  if (!C.zf) goto L_113d2fda;
  /* 113d2fa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d2fa4 mov eax, dword ptr [edx*4 + 0x113fda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113fda38)));
  /* 113d2fab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113d2fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d2fb0 je 0x113d2fc6 */
  if (C.zf) goto L_113d2fc6;
  /* 113d2fb2 push 0x113fa258 */
  push32((uint32_t)(0x113fa258u));
  /* 113d2fb7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 113d2fbd push ecx */
  push32((uint32_t)(ECX));
  /* 113d2fbe call 0x113d6cf0 */
  push32(0x113d2fc3u); f_113d6cf0();
  /* 113d2fc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d2fc6:;
  /* 113d2fc6 push 0x113fa254 */
  push32((uint32_t)(0x113fa254u));
  /* 113d2fcb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 113d2fd1 push edx */
  push32((uint32_t)(EDX));
  /* 113d2fd2 call 0x113d6cf0 */
  push32(0x113d2fd7u); f_113d6cf0();
  /* 113d2fd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d2fda:;
  /* 113d2fda cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d2fde je 0x113d3022 */
  if (C.zf) goto L_113d3022;
  /* 113d2fe0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 113d2fe6 push eax */
  push32((uint32_t)(EAX));
  /* 113d2fe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d2fea push ecx */
  push32((uint32_t)(ECX));
  /* 113d2feb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d2fee push edx */
  push32((uint32_t)(EDX));
  /* 113d2fef push 0x113fa248 */
  push32((uint32_t)(0x113fa248u));
  /* 113d2ff4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 113d2ff9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 113d2fff push eax */
  push32((uint32_t)(EAX));
  /* 113d3000 call 0x113d6be0 */
  push32(0x113d3005u); f_113d6be0();
  /* 113d3005 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d300a jge 0x113d3020 */
  if ((C.sf==C.of)) goto L_113d3020;
  /* 113d300c push 0x113fa284 */
  push32((uint32_t)(0x113fa284u));
  /* 113d3011 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 113d3017 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3018 call 0x113d6ce0 */
  push32(0x113d301du); f_113d6ce0();
  /* 113d301d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d3020:;
  /* 113d3020 jmp 0x113d3038 */
  goto L_113d3038;
L_113d3022:;
  /* 113d3022 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 113d3028 push edx */
  push32((uint32_t)(EDX));
  /* 113d3029 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 113d302f push eax */
  push32((uint32_t)(EAX));
  /* 113d3030 call 0x113d6ce0 */
  push32(0x113d3035u); f_113d6ce0();
  /* 113d3035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d3038:;
  /* 113d3038 cmp dword ptr [0x11401060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11401060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d303f je 0x113d307c */
  if (C.zf) goto L_113d307c;
  /* 113d3041 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 113d3047 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3048 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113d304e push edx */
  push32((uint32_t)(EDX));
  /* 113d304f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3052 push eax */
  push32((uint32_t)(EAX));
  /* 113d3053 call dword ptr [0x11401060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11401060))), 0x113d3059u);
  /* 113d3059 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d305c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d305e je 0x113d307c */
  if (C.zf) goto L_113d307c;
  /* 113d3060 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3064 jne 0x113d3071 */
  if (!C.zf) goto L_113d3071;
  /* 113d3066 push 0x113fda34 */
  push32((uint32_t)(0x113fda34u));
  /* 113d306b call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113d3071u);
L_113d3071:;
  /* 113d3071 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 113d3077 jmp 0x113d317b */
  goto L_113d317b;
L_113d307c:;
  /* 113d307c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d307f mov edx, dword ptr [ecx*4 + 0x113fda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda38)));
  /* 113d3086 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113d3089 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d308b je 0x113d30cb */
  if (C.zf) goto L_113d30cb;
  /* 113d308d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3090 cmp dword ptr [eax*4 + 0x113fda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x113fda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3098 je 0x113d30cb */
  if (C.zf) goto L_113d30cb;
  /* 113d309a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d309c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 113d30a2 push ecx */
  push32((uint32_t)(ECX));
  /* 113d30a3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113d30a9 push edx */
  push32((uint32_t)(EDX));
  /* 113d30aa call 0x113d6b60 */
  push32(0x113d30afu); f_113d6b60();
  /* 113d30af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d30b2 push eax */
  push32((uint32_t)(EAX));
  /* 113d30b3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 113d30b9 push eax */
  push32((uint32_t)(EAX));
  /* 113d30ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d30bd mov edx, dword ptr [ecx*4 + 0x113fda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda44)));
  /* 113d30c4 push edx */
  push32((uint32_t)(EDX));
  /* 113d30c5 call dword ptr [0x11402350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402350))), 0x113d30cbu);
L_113d30cb:;
  /* 113d30cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d30ce mov ecx, dword ptr [eax*4 + 0x113fda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113fda38)));
  /* 113d30d5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113d30d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d30da je 0x113d30e9 */
  if (C.zf) goto L_113d30e9;
  /* 113d30dc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 113d30e2 push edx */
  push32((uint32_t)(EDX));
  /* 113d30e3 call dword ptr [0x11402358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402358))), 0x113d30e9u);
L_113d30e9:;
  /* 113d30e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d30ec mov ecx, dword ptr [eax*4 + 0x113fda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113fda38)));
  /* 113d30f3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113d30f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d30f8 je 0x113d3168 */
  if (C.zf) goto L_113d3168;
  /* 113d30fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d30fe je 0x113d311d */
  if (C.zf) goto L_113d311d;
  /* 113d3100 push 0xa */
  push32((uint32_t)(0xau));
  /* 113d3102 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 113d3108 push edx */
  push32((uint32_t)(EDX));
  /* 113d3109 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d310c push eax */
  push32((uint32_t)(EAX));
  /* 113d310d call 0x113d6870 */
  push32(0x113d3112u); f_113d6870();
  /* 113d3112 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3115 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 113d311b jmp 0x113d3127 */
  goto L_113d3127;
L_113d311d:;
  /* 113d311d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_113d3127:;
  /* 113d3127 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 113d312d push ecx */
  push32((uint32_t)(ECX));
  /* 113d312e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d3131 push edx */
  push32((uint32_t)(EDX));
  /* 113d3132 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 113d3138 push eax */
  push32((uint32_t)(EAX));
  /* 113d3139 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d313c push ecx */
  push32((uint32_t)(ECX));
  /* 113d313d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3140 push edx */
  push32((uint32_t)(EDX));
  /* 113d3141 call 0x113d3180 */
  push32(0x113d3146u); f_113d3180();
  /* 113d3146 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3149 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 113d314f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3153 jne 0x113d3160 */
  if (!C.zf) goto L_113d3160;
  /* 113d3155 push 0x113fda34 */
  push32((uint32_t)(0x113fda34u));
  /* 113d315a call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113d3160u);
L_113d3160:;
  /* 113d3160 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 113d3166 jmp 0x113d317b */
  goto L_113d317b;
L_113d3168:;
  /* 113d3168 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d316c jne 0x113d3179 */
  if (!C.zf) goto L_113d3179;
  /* 113d316e push 0x113fda34 */
  push32((uint32_t)(0x113fda34u));
  /* 113d3173 call dword ptr [0x11402354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402354))), 0x113d3179u);
L_113d3179:;
  /* 113d3179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d317b:;
  /* 113d317b pop edi */
  EDI = (pop32());
  /* 113d317c mov esp, ebp */
  ESP = (EBP);
  /* 113d317e pop ebp */
  EBP = (pop32());
  /* 113d317f ret  */
  ESPCHK(0x113d2df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003180 @ 0x113d3180 (780 bytes, 197 insns) */
void f_113d3180(void) {
  FTRACE(0x113d3180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3180 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3181 mov ebp, esp */
  EBP = (ESP);
  /* 113d3183 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 113d3188 call 0x113d6ed0 */
  push32(0x113d318du); f_113d6ed0();
L_113d318d:;
  /* 113d318d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3191 jne 0x113d31b8 */
  if (!C.zf) goto L_113d31b8;
  /* 113d3193 push 0x113fa440 */
  push32((uint32_t)(0x113fa440u));
  /* 113d3198 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d319a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 113d319f push 0x113fa434 */
  push32((uint32_t)(0x113fa434u));
  /* 113d31a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d31a6 call 0x113d2df0 */
  push32(0x113d31abu); f_113d2df0();
  /* 113d31ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d31ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d31b1 jne 0x113d31b8 */
  if (!C.zf) goto L_113d31b8;
  /* 113d31b3 call 0x113d2ce0 */
  push32(0x113d31b8u); f_113d2ce0();
L_113d31b8:;
  /* 113d31b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d31ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d31bc jne 0x113d318d */
  if (!C.zf) goto L_113d318d;
  /* 113d31be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 113d31c3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 113d31c9 push ecx */
  push32((uint32_t)(ECX));
  /* 113d31ca push 0 */
  push32((uint32_t)(0x0u));
  /* 113d31cc call dword ptr [0x11402368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402368))), 0x113d31d2u);
  /* 113d31d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d31d4 jne 0x113d31ea */
  if (!C.zf) goto L_113d31ea;
  /* 113d31d6 push 0x113fa41c */
  push32((uint32_t)(0x113fa41cu));
  /* 113d31db lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 113d31e1 push edx */
  push32((uint32_t)(EDX));
  /* 113d31e2 call 0x113d6ce0 */
  push32(0x113d31e7u); f_113d6ce0();
  /* 113d31e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d31ea:;
  /* 113d31ea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 113d31f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d31f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d31f6 push ecx */
  push32((uint32_t)(ECX));
  /* 113d31f7 call 0x113d6b60 */
  push32(0x113d31fcu); f_113d6b60();
  /* 113d31fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d31ff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3202 jbe 0x113d322d */
  if ((C.cf||C.zf)) goto L_113d322d;
  /* 113d3204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3207 push edx */
  push32((uint32_t)(EDX));
  /* 113d3208 call 0x113d6b60 */
  push32(0x113d320du); f_113d6b60();
  /* 113d320d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3210 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3213 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 113d3217 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d321a push 3 */
  push32((uint32_t)(0x3u));
  /* 113d321c push 0x113fa418 */
  push32((uint32_t)(0x113fa418u));
  /* 113d3221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3224 push eax */
  push32((uint32_t)(EAX));
  /* 113d3225 call 0x113d7550 */
  push32(0x113d322au); f_113d7550();
  /* 113d322a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d322d:;
  /* 113d322d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d3230 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 113d3236 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d323d je 0x113d3288 */
  if (C.zf) goto L_113d3288;
  /* 113d323f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 113d3245 push edx */
  push32((uint32_t)(EDX));
  /* 113d3246 call 0x113d6b60 */
  push32(0x113d324bu); f_113d6b60();
  /* 113d324b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d324e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3251 jbe 0x113d3288 */
  if ((C.cf||C.zf)) goto L_113d3288;
  /* 113d3253 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 113d3259 push eax */
  push32((uint32_t)(EAX));
  /* 113d325a call 0x113d6b60 */
  push32(0x113d325fu); f_113d6b60();
  /* 113d325f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3262 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 113d3268 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 113d326c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 113d3272 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d3274 push 0x113fa418 */
  push32((uint32_t)(0x113fa418u));
  /* 113d3279 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 113d327f push eax */
  push32((uint32_t)(EAX));
  /* 113d3280 call 0x113d7550 */
  push32(0x113d3285u); f_113d7550();
  /* 113d3285 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d3288:;
  /* 113d3288 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d328c jne 0x113d329a */
  if (!C.zf) goto L_113d329a;
  /* 113d328e mov dword ptr [ebp - 0x1114], 0x113fa3a4 */
  w32((uint32_t)(EBP + -0x1114), (0x113fa3a4u));
  /* 113d3298 jmp 0x113d32a4 */
  goto L_113d32a4;
L_113d329a:;
  /* 113d329a mov dword ptr [ebp - 0x1114], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1114), (0x113fa144u));
L_113d32a4:;
  /* 113d32a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d32a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113d32aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d32ac je 0x113d32b9 */
  if (C.zf) goto L_113d32b9;
  /* 113d32ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d32b1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 113d32b7 jmp 0x113d32c3 */
  goto L_113d32c3;
L_113d32b9:;
  /* 113d32b9 mov dword ptr [ebp - 0x1118], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1118), (0x113fa144u));
L_113d32c3:;
  /* 113d32c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d32c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113d32c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d32cb je 0x113d32df */
  if (C.zf) goto L_113d32df;
  /* 113d32cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d32d1 jne 0x113d32df */
  if (!C.zf) goto L_113d32df;
  /* 113d32d3 mov dword ptr [ebp - 0x111c], 0x113fa394 */
  w32((uint32_t)(EBP + -0x111c), (0x113fa394u));
  /* 113d32dd jmp 0x113d32e9 */
  goto L_113d32e9;
L_113d32df:;
  /* 113d32df mov dword ptr [ebp - 0x111c], 0x113fa144 */
  w32((uint32_t)(EBP + -0x111c), (0x113fa144u));
L_113d32e9:;
  /* 113d32e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d32ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d32ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d32f1 je 0x113d32ff */
  if (C.zf) goto L_113d32ff;
  /* 113d32f3 mov dword ptr [ebp - 0x1120], 0x113fa390 */
  w32((uint32_t)(EBP + -0x1120), (0x113fa390u));
  /* 113d32fd jmp 0x113d3309 */
  goto L_113d3309;
L_113d32ff:;
  /* 113d32ff mov dword ptr [ebp - 0x1120], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1120), (0x113fa144u));
L_113d3309:;
  /* 113d3309 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d330d je 0x113d331a */
  if (C.zf) goto L_113d331a;
  /* 113d330f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d3312 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 113d3318 jmp 0x113d3324 */
  goto L_113d3324;
L_113d331a:;
  /* 113d331a mov dword ptr [ebp - 0x1124], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1124), (0x113fa144u));
L_113d3324:;
  /* 113d3324 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3328 je 0x113d3336 */
  if (C.zf) goto L_113d3336;
  /* 113d332a mov dword ptr [ebp - 0x1128], 0x113fa388 */
  w32((uint32_t)(EBP + -0x1128), (0x113fa388u));
  /* 113d3334 jmp 0x113d3340 */
  goto L_113d3340;
L_113d3336:;
  /* 113d3336 mov dword ptr [ebp - 0x1128], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1128), (0x113fa144u));
L_113d3340:;
  /* 113d3340 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3344 je 0x113d3351 */
  if (C.zf) goto L_113d3351;
  /* 113d3346 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d3349 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 113d334f jmp 0x113d335b */
  goto L_113d335b;
L_113d3351:;
  /* 113d3351 mov dword ptr [ebp - 0x112c], 0x113fa144 */
  w32((uint32_t)(EBP + -0x112c), (0x113fa144u));
L_113d335b:;
  /* 113d335b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d335f je 0x113d336d */
  if (C.zf) goto L_113d336d;
  /* 113d3361 mov dword ptr [ebp - 0x1130], 0x113fa380 */
  w32((uint32_t)(EBP + -0x1130), (0x113fa380u));
  /* 113d336b jmp 0x113d3377 */
  goto L_113d3377;
L_113d336d:;
  /* 113d336d mov dword ptr [ebp - 0x1130], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1130), (0x113fa144u));
L_113d3377:;
  /* 113d3377 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d337e je 0x113d338e */
  if (C.zf) goto L_113d338e;
  /* 113d3380 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 113d3386 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 113d338c jmp 0x113d3398 */
  goto L_113d3398;
L_113d338e:;
  /* 113d338e mov dword ptr [ebp - 0x1134], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1134), (0x113fa144u));
L_113d3398:;
  /* 113d3398 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d339f je 0x113d33ad */
  if (C.zf) goto L_113d33ad;
  /* 113d33a1 mov dword ptr [ebp - 0x1138], 0x113fa374 */
  w32((uint32_t)(EBP + -0x1138), (0x113fa374u));
  /* 113d33ab jmp 0x113d33b7 */
  goto L_113d33b7;
L_113d33ad:;
  /* 113d33ad mov dword ptr [ebp - 0x1138], 0x113fa144 */
  w32((uint32_t)(EBP + -0x1138), (0x113fa144u));
L_113d33b7:;
  /* 113d33b7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 113d33bd push edx */
  push32((uint32_t)(EDX));
  /* 113d33be mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 113d33c4 push eax */
  push32((uint32_t)(EAX));
  /* 113d33c5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 113d33cb push ecx */
  push32((uint32_t)(ECX));
  /* 113d33cc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 113d33d2 push edx */
  push32((uint32_t)(EDX));
  /* 113d33d3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 113d33d9 push eax */
  push32((uint32_t)(EAX));
  /* 113d33da mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 113d33e0 push ecx */
  push32((uint32_t)(ECX));
  /* 113d33e1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 113d33e7 push edx */
  push32((uint32_t)(EDX));
  /* 113d33e8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 113d33ee push eax */
  push32((uint32_t)(EAX));
  /* 113d33ef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 113d33f5 push ecx */
  push32((uint32_t)(ECX));
  /* 113d33f6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 113d33fc push edx */
  push32((uint32_t)(EDX));
  /* 113d33fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3400 push eax */
  push32((uint32_t)(EAX));
  /* 113d3401 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3404 mov edx, dword ptr [ecx*4 + 0x113fda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda50)));
  /* 113d340b push edx */
  push32((uint32_t)(EDX));
  /* 113d340c push 0x113fa320 */
  push32((uint32_t)(0x113fa320u));
  /* 113d3411 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 113d3416 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 113d341c push eax */
  push32((uint32_t)(EAX));
  /* 113d341d call 0x113d6be0 */
  push32(0x113d3422u); f_113d6be0();
  /* 113d3422 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3427 jge 0x113d343d */
  if ((C.sf==C.of)) goto L_113d343d;
  /* 113d3429 push 0x113fa284 */
  push32((uint32_t)(0x113fa284u));
  /* 113d342e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 113d3434 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3435 call 0x113d6ce0 */
  push32(0x113d343au); f_113d6ce0();
  /* 113d343a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d343d:;
  /* 113d343d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 113d3442 push 0x113fa2fc */
  push32((uint32_t)(0x113fa2fcu));
  /* 113d3447 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 113d344d push edx */
  push32((uint32_t)(EDX));
  /* 113d344e call 0x113d7490 */
  push32(0x113d3453u); f_113d7490();
  /* 113d3453 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3456 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 113d345c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3463 jne 0x113d3476 */
  if (!C.zf) goto L_113d3476;
  /* 113d3465 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 113d3467 call 0x113d71d0 */
  push32(0x113d346cu); f_113d71d0();
  /* 113d346c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d346f push 3 */
  push32((uint32_t)(0x3u));
  /* 113d3471 call 0x113d34f0 */
  push32(0x113d3476u); f_113d34f0();
L_113d3476:;
  /* 113d3476 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d347d jne 0x113d3486 */
  if (!C.zf) goto L_113d3486;
  /* 113d347f mov eax, 1 */
  EAX = (0x1u);
  /* 113d3484 jmp 0x113d3488 */
  goto L_113d3488;
L_113d3486:;
  /* 113d3486 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d3488:;
  /* 113d3488 mov esp, ebp */
  ESP = (EBP);
  /* 113d348a pop ebp */
  EBP = (pop32());
  /* 113d348b ret  */
  ESPCHK(0x113d3180u, _esp0);
  ESP += 4; return;
}

/* FUN_10003490 @ 0x113d3490 (56 bytes, 15 insns) */
void f_113d3490(void) {
  FTRACE(0x113d3490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3490 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3491 mov ebp, esp */
  EBP = (ESP);
  /* 113d3493 cmp dword ptr [0x1140105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1140105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d349a je 0x113d34a2 */
  if (C.zf) goto L_113d34a2;
  /* 113d349c call dword ptr [0x1140105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140105c))), 0x113d34a2u);
L_113d34a2:;
  /* 113d34a2 push 0x113fd418 */
  push32((uint32_t)(0x113fd418u));
  /* 113d34a7 push 0x113fd208 */
  push32((uint32_t)(0x113fd208u));
  /* 113d34ac call 0x113d3660 */
  push32(0x113d34b1u); f_113d3660();
  /* 113d34b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d34b4 push 0x113fd104 */
  push32((uint32_t)(0x113fd104u));
  /* 113d34b9 push 0x113fd000 */
  push32((uint32_t)(0x113fd000u));
  /* 113d34be call 0x113d3660 */
  push32(0x113d34c3u); f_113d3660();
  /* 113d34c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d34c6 pop ebp */
  EBP = (pop32());
  /* 113d34c7 ret  */
  ESPCHK(0x113d3490u, _esp0);
  ESP += 4; return;
}

/* FUN_100034d0 @ 0x113d34d0 (21 bytes, 10 insns) */
void f_113d34d0(void) {
  FTRACE(0x113d34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d34d1 mov ebp, esp */
  EBP = (ESP);
  /* 113d34d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d34d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d34d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d34da push eax */
  push32((uint32_t)(EAX));
  /* 113d34db call 0x113d3550 */
  push32(0x113d34e0u); f_113d3550();
  /* 113d34e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d34e3 pop ebp */
  EBP = (pop32());
  /* 113d34e4 ret  */
  ESPCHK(0x113d34d0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x113d34f0 (21 bytes, 10 insns) */
void f_113d34f0(void) {
  FTRACE(0x113d34f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d34f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d34f1 mov ebp, esp */
  EBP = (ESP);
  /* 113d34f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d34f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d34f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d34fa push eax */
  push32((uint32_t)(EAX));
  /* 113d34fb call 0x113d3550 */
  push32(0x113d3500u); f_113d3550();
  /* 113d3500 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3503 pop ebp */
  EBP = (pop32());
  /* 113d3504 ret  */
  ESPCHK(0x113d34f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003510 @ 0x113d3510 (19 bytes, 9 insns) */
void f_113d3510(void) {
  FTRACE(0x113d3510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3510 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3511 mov ebp, esp */
  EBP = (ESP);
  /* 113d3513 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3515 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3517 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3519 call 0x113d3550 */
  push32(0x113d351eu); f_113d3550();
  /* 113d351e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3521 pop ebp */
  EBP = (pop32());
  /* 113d3522 ret  */
  ESPCHK(0x113d3510u, _esp0);
  ESP += 4; return;
}

/* FUN_10003530 @ 0x113d3530 (19 bytes, 9 insns) */
void f_113d3530(void) {
  FTRACE(0x113d3530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3530 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3531 mov ebp, esp */
  EBP = (ESP);
  /* 113d3533 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3535 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3537 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3539 call 0x113d3550 */
  push32(0x113d353eu); f_113d3550();
  /* 113d353e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3541 pop ebp */
  EBP = (pop32());
  /* 113d3542 ret  */
  ESPCHK(0x113d3530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x113d3550 (227 bytes, 61 insns) */
void f_113d3550(void) {
  FTRACE(0x113d3550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3550 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3551 mov ebp, esp */
  EBP = (ESP);
  /* 113d3553 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3554 call 0x113d3640 */
  push32(0x113d3559u); f_113d3640();
  /* 113d3559 cmp dword ptr [0x113ff554], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff554))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3560 jne 0x113d3573 */
  if (!C.zf) goto L_113d3573;
  /* 113d3562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3565 push eax */
  push32((uint32_t)(EAX));
  /* 113d3566 call dword ptr [0x11402374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402374))), 0x113d356cu);
  /* 113d356c push eax */
  push32((uint32_t)(EAX));
  /* 113d356d call dword ptr [0x11402370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402370))), 0x113d3573u);
L_113d3573:;
  /* 113d3573 mov dword ptr [0x113ff550], 1 */
  w32((uint32_t)(0x113ff550), (0x1u));
  /* 113d357d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 113d3580 mov byte ptr [0x113ff54c], cl */
  w8((uint32_t)(0x113ff54c), (CL));
  /* 113d3586 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d358a jne 0x113d35d3 */
  if (!C.zf) goto L_113d35d3;
  /* 113d358c cmp dword ptr [0x11401058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11401058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3593 je 0x113d35c1 */
  if (C.zf) goto L_113d35c1;
  /* 113d3595 mov edx, dword ptr [0x11401054] */
  EDX = (r32((uint32_t)(0x11401054)));
  /* 113d359b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d359e:;
  /* 113d359e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d35a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d35a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d35a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d35aa cmp ecx, dword ptr [0x11401058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11401058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d35b0 jb 0x113d35c1 */
  if (C.cf) goto L_113d35c1;
  /* 113d35b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d35b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d35b8 je 0x113d35bf */
  if (C.zf) goto L_113d35bf;
  /* 113d35ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d35bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x113d35bfu);
L_113d35bf:;
  /* 113d35bf jmp 0x113d359e */
  goto L_113d359e;
L_113d35c1:;
  /* 113d35c1 push 0x113fd724 */
  push32((uint32_t)(0x113fd724u));
  /* 113d35c6 push 0x113fd51c */
  push32((uint32_t)(0x113fd51cu));
  /* 113d35cb call 0x113d3660 */
  push32(0x113d35d0u); f_113d3660();
  /* 113d35d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d35d3:;
  /* 113d35d3 push 0x113fd92c */
  push32((uint32_t)(0x113fd92cu));
  /* 113d35d8 push 0x113fd828 */
  push32((uint32_t)(0x113fd828u));
  /* 113d35dd call 0x113d3660 */
  push32(0x113d35e2u); f_113d3660();
  /* 113d35e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d35e5 cmp dword ptr [0x113ff558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d35ec jne 0x113d360e */
  if (!C.zf) goto L_113d360e;
  /* 113d35ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113d35f0 call 0x113d5240 */
  push32(0x113d35f5u); f_113d5240();
  /* 113d35f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d35f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 113d35fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d35fd je 0x113d360e */
  if (C.zf) goto L_113d360e;
  /* 113d35ff mov dword ptr [0x113ff558], 1 */
  w32((uint32_t)(0x113ff558), (0x1u));
  /* 113d3609 call 0x113d5b50 */
  push32(0x113d360eu); f_113d5b50();
L_113d360e:;
  /* 113d360e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3612 je 0x113d361b */
  if (C.zf) goto L_113d361b;
  /* 113d3614 call 0x113d3650 */
  push32(0x113d3619u); f_113d3650();
  /* 113d3619 jmp 0x113d362f */
  goto L_113d362f;
L_113d361b:;
  /* 113d361b mov dword ptr [0x113ff554], 1 */
  w32((uint32_t)(0x113ff554), (0x1u));
  /* 113d3625 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3628 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3629 call dword ptr [0x1140236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140236c))), 0x113d362fu);
L_113d362f:;
  /* 113d362f mov esp, ebp */
  ESP = (EBP);
  /* 113d3631 pop ebp */
  EBP = (pop32());
  /* 113d3632 ret  */
  ESPCHK(0x113d3550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003640 @ 0x113d3640 (15 bytes, 7 insns) */
void f_113d3640(void) {
  FTRACE(0x113d3640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3640 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3641 mov ebp, esp */
  EBP = (ESP);
  /* 113d3643 push 0xd */
  push32((uint32_t)(0xdu));
  /* 113d3645 call 0x113d7730 */
  push32(0x113d364au); f_113d7730();
  /* 113d364a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d364d pop ebp */
  EBP = (pop32());
  /* 113d364e ret  */
  ESPCHK(0x113d3640u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x113d3650 (15 bytes, 7 insns) */
void f_113d3650(void) {
  FTRACE(0x113d3650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3650 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3651 mov ebp, esp */
  EBP = (ESP);
  /* 113d3653 push 0xd */
  push32((uint32_t)(0xdu));
  /* 113d3655 call 0x113d77d0 */
  push32(0x113d365au); f_113d77d0();
  /* 113d365a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d365d pop ebp */
  EBP = (pop32());
  /* 113d365e ret  */
  ESPCHK(0x113d3650u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x113d3660 (37 bytes, 16 insns) */
void f_113d3660(void) {
  FTRACE(0x113d3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3660 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3661 mov ebp, esp */
  EBP = (ESP);
L_113d3663:;
  /* 113d3663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3666 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3669 jae 0x113d3683 */
  if (!C.cf) goto L_113d3683;
  /* 113d366b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d366e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3671 je 0x113d3678 */
  if (C.zf) goto L_113d3678;
  /* 113d3673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3676 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x113d3678u);
L_113d3678:;
  /* 113d3678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d367b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d367e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113d3681 jmp 0x113d3663 */
  goto L_113d3663;
L_113d3683:;
  /* 113d3683 pop ebp */
  EBP = (pop32());
  /* 113d3684 ret  */
  ESPCHK(0x113d3660u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x113d3690 (130 bytes, 42 insns) */
void f_113d3690(void) {
  FTRACE(0x113d3690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3690 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3691 mov ebp, esp */
  EBP = (ESP);
  /* 113d3693 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3694 call 0x113d7650 */
  push32(0x113d3699u); f_113d7650();
  /* 113d3699 call dword ptr [0x114022a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022a4))), 0x113d369fu);
  /* 113d369f mov dword ptr [0x113fda5c], eax */
  w32((uint32_t)(0x113fda5c), (EAX));
  /* 113d36a4 cmp dword ptr [0x113fda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x113fda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d36ab jne 0x113d36b1 */
  if (!C.zf) goto L_113d36b1;
  /* 113d36ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d36af jmp 0x113d370e */
  goto L_113d370e;
L_113d36b1:;
  /* 113d36b1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 113d36b3 push 0x113fa458 */
  push32((uint32_t)(0x113fa458u));
  /* 113d36b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d36ba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 113d36bc push 1 */
  push32((uint32_t)(0x1u));
  /* 113d36be call 0x113d4140 */
  push32(0x113d36c3u); f_113d4140();
  /* 113d36c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d36c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d36c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d36cd je 0x113d36e4 */
  if (C.zf) goto L_113d36e4;
  /* 113d36cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d36d2 push eax */
  push32((uint32_t)(EAX));
  /* 113d36d3 mov ecx, dword ptr [0x113fda5c] */
  ECX = (r32((uint32_t)(0x113fda5c)));
  /* 113d36d9 push ecx */
  push32((uint32_t)(ECX));
  /* 113d36da call dword ptr [0x1140237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140237c))), 0x113d36e0u);
  /* 113d36e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d36e2 jne 0x113d36e8 */
  if (!C.zf) goto L_113d36e8;
L_113d36e4:;
  /* 113d36e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d36e6 jmp 0x113d370e */
  goto L_113d370e;
L_113d36e8:;
  /* 113d36e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d36eb push edx */
  push32((uint32_t)(EDX));
  /* 113d36ec call 0x113d3750 */
  push32(0x113d36f1u); f_113d3750();
  /* 113d36f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d36f4 call dword ptr [0x11402378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402378))), 0x113d36fau);
  /* 113d36fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d36fd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d36ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3702 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 113d3709 mov eax, 1 */
  EAX = (0x1u);
L_113d370e:;
  /* 113d370e mov esp, ebp */
  ESP = (EBP);
  /* 113d3710 pop ebp */
  EBP = (pop32());
  /* 113d3711 ret  */
  ESPCHK(0x113d3690u, _esp0);
  ESP += 4; return;
}

/* FUN_10003720 @ 0x113d3720 (41 bytes, 11 insns) */
void f_113d3720(void) {
  FTRACE(0x113d3720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3720 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3721 mov ebp, esp */
  EBP = (ESP);
  /* 113d3723 call 0x113d7690 */
  push32(0x113d3728u); f_113d7690();
  /* 113d3728 cmp dword ptr [0x113fda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x113fda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d372f je 0x113d3747 */
  if (C.zf) goto L_113d3747;
  /* 113d3731 mov eax, dword ptr [0x113fda5c] */
  EAX = (r32((uint32_t)(0x113fda5c)));
  /* 113d3736 push eax */
  push32((uint32_t)(EAX));
  /* 113d3737 call dword ptr [0x114022a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114022a8))), 0x113d373du);
  /* 113d373d mov dword ptr [0x113fda5c], 0xffffffff */
  w32((uint32_t)(0x113fda5c), (0xffffffffu));
L_113d3747:;
  /* 113d3747 pop ebp */
  EBP = (pop32());
  /* 113d3748 ret  */
  ESPCHK(0x113d3720u, _esp0);
  ESP += 4; return;
}

/* FUN_10003750 @ 0x113d3750 (25 bytes, 8 insns) */
void f_113d3750(void) {
  FTRACE(0x113d3750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3750 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3751 mov ebp, esp */
  EBP = (ESP);
  /* 113d3753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3756 mov dword ptr [eax + 0x50], 0x113fdc00 */
  w32((uint32_t)(EAX + 0x50), (0x113fdc00u));
  /* 113d375d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3760 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 113d3767 pop ebp */
  EBP = (pop32());
  /* 113d3768 ret  */
  ESPCHK(0x113d3750u, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x113d3770 (152 bytes, 48 insns) */
void f_113d3770(void) {
  FTRACE(0x113d3770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3770 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3771 mov ebp, esp */
  EBP = (ESP);
  /* 113d3773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d3776 call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113d377cu);
  /* 113d377c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d377f mov eax, dword ptr [0x113fda5c] */
  EAX = (r32((uint32_t)(0x113fda5c)));
  /* 113d3784 push eax */
  push32((uint32_t)(EAX));
  /* 113d3785 call dword ptr [0x1140238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140238c))), 0x113d378bu);
  /* 113d378b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d378e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3792 jne 0x113d37f7 */
  if (!C.zf) goto L_113d37f7;
  /* 113d3794 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 113d3799 push 0x113fa458 */
  push32((uint32_t)(0x113fa458u));
  /* 113d379e push 2 */
  push32((uint32_t)(0x2u));
  /* 113d37a0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 113d37a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d37a4 call 0x113d4140 */
  push32(0x113d37a9u); f_113d4140();
  /* 113d37a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d37ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d37af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d37b3 je 0x113d37ed */
  if (C.zf) goto L_113d37ed;
  /* 113d37b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d37b8 push ecx */
  push32((uint32_t)(ECX));
  /* 113d37b9 mov edx, dword ptr [0x113fda5c] */
  EDX = (r32((uint32_t)(0x113fda5c)));
  /* 113d37bf push edx */
  push32((uint32_t)(EDX));
  /* 113d37c0 call dword ptr [0x1140237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140237c))), 0x113d37c6u);
  /* 113d37c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d37c8 je 0x113d37ed */
  if (C.zf) goto L_113d37ed;
  /* 113d37ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d37cd push eax */
  push32((uint32_t)(EAX));
  /* 113d37ce call 0x113d3750 */
  push32(0x113d37d3u); f_113d3750();
  /* 113d37d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d37d6 call dword ptr [0x11402378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402378))), 0x113d37dcu);
  /* 113d37dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d37df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d37e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d37e4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 113d37eb jmp 0x113d37f7 */
  goto L_113d37f7;
L_113d37ed:;
  /* 113d37ed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 113d37ef call 0x113d2ca0 */
  push32(0x113d37f4u); f_113d2ca0();
  /* 113d37f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d37f7:;
  /* 113d37f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d37fa push eax */
  push32((uint32_t)(EAX));
  /* 113d37fb call dword ptr [0x11402388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402388))), 0x113d3801u);
  /* 113d3801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3804 mov esp, ebp */
  ESP = (EBP);
  /* 113d3806 pop ebp */
  EBP = (pop32());
  /* 113d3807 ret  */
  ESPCHK(0x113d3770u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x113d3810 (263 bytes, 86 insns) */
void f_113d3810(void) {
  FTRACE(0x113d3810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3810 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3811 mov ebp, esp */
  EBP = (ESP);
  /* 113d3813 cmp dword ptr [0x113fda5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x113fda5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d381a je 0x113d3915 */
  if (C.zf) goto L_113d3915;
  /* 113d3820 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3824 jne 0x113d3835 */
  if (!C.zf) goto L_113d3835;
  /* 113d3826 mov eax, dword ptr [0x113fda5c] */
  EAX = (r32((uint32_t)(0x113fda5c)));
  /* 113d382b push eax */
  push32((uint32_t)(EAX));
  /* 113d382c call dword ptr [0x1140238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140238c))), 0x113d3832u);
  /* 113d3832 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113d3835:;
  /* 113d3835 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3839 je 0x113d3906 */
  if (C.zf) goto L_113d3906;
  /* 113d383f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3842 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3846 je 0x113d3859 */
  if (C.zf) goto L_113d3859;
  /* 113d3848 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d384a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d384d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 113d3850 push eax */
  push32((uint32_t)(EAX));
  /* 113d3851 call 0x113d47c0 */
  push32(0x113d3856u); f_113d47c0();
  /* 113d3856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d3859:;
  /* 113d3859 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d385c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3860 je 0x113d3873 */
  if (C.zf) goto L_113d3873;
  /* 113d3862 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d3864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3867 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 113d386a push eax */
  push32((uint32_t)(EAX));
  /* 113d386b call 0x113d47c0 */
  push32(0x113d3870u); f_113d47c0();
  /* 113d3870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d3873:;
  /* 113d3873 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3876 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d387a je 0x113d388d */
  if (C.zf) goto L_113d388d;
  /* 113d387c push 2 */
  push32((uint32_t)(0x2u));
  /* 113d387e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3881 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 113d3884 push eax */
  push32((uint32_t)(EAX));
  /* 113d3885 call 0x113d47c0 */
  push32(0x113d388au); f_113d47c0();
  /* 113d388a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d388d:;
  /* 113d388d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3890 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3894 je 0x113d38a7 */
  if (C.zf) goto L_113d38a7;
  /* 113d3896 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d3898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d389b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 113d389e push eax */
  push32((uint32_t)(EAX));
  /* 113d389f call 0x113d47c0 */
  push32(0x113d38a4u); f_113d47c0();
  /* 113d38a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d38a7:;
  /* 113d38a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d38aa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d38ae je 0x113d38c1 */
  if (C.zf) goto L_113d38c1;
  /* 113d38b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d38b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d38b5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 113d38b8 push eax */
  push32((uint32_t)(EAX));
  /* 113d38b9 call 0x113d47c0 */
  push32(0x113d38beu); f_113d47c0();
  /* 113d38be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d38c1:;
  /* 113d38c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d38c4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d38c8 je 0x113d38db */
  if (C.zf) goto L_113d38db;
  /* 113d38ca push 2 */
  push32((uint32_t)(0x2u));
  /* 113d38cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d38cf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 113d38d2 push eax */
  push32((uint32_t)(EAX));
  /* 113d38d3 call 0x113d47c0 */
  push32(0x113d38d8u); f_113d47c0();
  /* 113d38d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d38db:;
  /* 113d38db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d38de cmp dword ptr [ecx + 0x50], 0x113fdc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x113fdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d38e5 je 0x113d38f8 */
  if (C.zf) goto L_113d38f8;
  /* 113d38e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d38e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d38ec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 113d38ef push eax */
  push32((uint32_t)(EAX));
  /* 113d38f0 call 0x113d47c0 */
  push32(0x113d38f5u); f_113d47c0();
  /* 113d38f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d38f8:;
  /* 113d38f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d38fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d38fd push ecx */
  push32((uint32_t)(ECX));
  /* 113d38fe call 0x113d47c0 */
  push32(0x113d3903u); f_113d47c0();
  /* 113d3903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d3906:;
  /* 113d3906 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3908 mov edx, dword ptr [0x113fda5c] */
  EDX = (r32((uint32_t)(0x113fda5c)));
  /* 113d390e push edx */
  push32((uint32_t)(EDX));
  /* 113d390f call dword ptr [0x1140237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140237c))), 0x113d3915u);
L_113d3915:;
  /* 113d3915 pop ebp */
  EBP = (pop32());
  /* 113d3916 ret  */
  ESPCHK(0x113d3810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003920 @ 0x113d3920 (11 bytes, 5 insns) */
void f_113d3920(void) {
  FTRACE(0x113d3920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3920 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3921 mov ebp, esp */
  EBP = (ESP);
  /* 113d3923 call dword ptr [0x11402378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402378))), 0x113d3929u);
  /* 113d3929 pop ebp */
  EBP = (pop32());
  /* 113d392a ret  */
  ESPCHK(0x113d3920u, _esp0);
  ESP += 4; return;
}

/* FUN_10003930 @ 0x113d3930 (11 bytes, 5 insns) */
void f_113d3930(void) {
  FTRACE(0x113d3930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3930 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3931 mov ebp, esp */
  EBP = (ESP);
  /* 113d3933 call dword ptr [0x11402394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402394))), 0x113d3939u);
  /* 113d3939 pop ebp */
  EBP = (pop32());
  /* 113d393a ret  */
  ESPCHK(0x113d3930u, _esp0);
  ESP += 4; return;
}

/* FUN_10003940 @ 0x113d3940 (804 bytes, 236 insns) */
void f_113d3940(void) {
  FTRACE(0x113d3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3940 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3941 mov ebp, esp */
  EBP = (ESP);
  /* 113d3943 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d3946 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 113d394b push 0x113fa464 */
  push32((uint32_t)(0x113fa464u));
  /* 113d3950 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d3952 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 113d3957 call 0x113d3d30 */
  push32(0x113d395cu); f_113d3d30();
  /* 113d395c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d395f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 113d3962 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3966 jne 0x113d3972 */
  if (!C.zf) goto L_113d3972;
  /* 113d3968 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 113d396a call 0x113d2ca0 */
  push32(0x113d396fu); f_113d2ca0();
  /* 113d396f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d3972:;
  /* 113d3972 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3975 mov dword ptr [0x11400f00], eax */
  w32((uint32_t)(0x11400f00), (EAX));
  /* 113d397a mov dword ptr [0x1140103c], 0x20 */
  w32((uint32_t)(0x1140103c), (0x20u));
  /* 113d3984 jmp 0x113d398f */
  goto L_113d398f;
L_113d3986:;
  /* 113d3986 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3989 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d398c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_113d398f:;
  /* 113d398f mov edx, dword ptr [0x11400f00] */
  EDX = (r32((uint32_t)(0x11400f00)));
  /* 113d3995 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d399b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d399e jae 0x113d39c3 */
  if (!C.cf) goto L_113d39c3;
  /* 113d39a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d39a3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 113d39a7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d39aa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113d39b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d39b3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 113d39b7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d39ba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113d39c1 jmp 0x113d3986 */
  goto L_113d3986;
L_113d39c3:;
  /* 113d39c3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 113d39c6 push ecx */
  push32((uint32_t)(ECX));
  /* 113d39c7 call dword ptr [0x114023a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023a0))), 0x113d39cdu);
  /* 113d39cd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 113d39d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d39d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d39d8 je 0x113d3b65 */
  if (C.zf) goto L_113d3b65;
  /* 113d39de cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d39e2 je 0x113d3b65 */
  if (C.zf) goto L_113d3b65;
  /* 113d39e8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d39eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d39ed mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 113d39f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d39f3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d39f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d39f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d39fc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d39ff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 113d3a02 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3a09 jge 0x113d3a13 */
  if ((C.sf==C.of)) goto L_113d3a13;
  /* 113d3a0b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 113d3a0e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 113d3a11 jmp 0x113d3a1a */
  goto L_113d3a1a;
L_113d3a13:;
  /* 113d3a13 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_113d3a1a:;
  /* 113d3a1a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 113d3a1d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 113d3a20 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 113d3a27 jmp 0x113d3a32 */
  goto L_113d3a32;
L_113d3a29:;
  /* 113d3a29 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 113d3a2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3a2f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_113d3a32:;
  /* 113d3a32 mov ecx, dword ptr [0x1140103c] */
  ECX = (r32((uint32_t)(0x1140103c)));
  /* 113d3a38 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3a3b jge 0x113d3ad2 */
  if ((C.sf==C.of)) goto L_113d3ad2;
  /* 113d3a41 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 113d3a46 push 0x113fa464 */
  push32((uint32_t)(0x113fa464u));
  /* 113d3a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 113d3a4d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 113d3a52 call 0x113d3d30 */
  push32(0x113d3a57u); f_113d3d30();
  /* 113d3a57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3a5a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 113d3a5d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3a61 jne 0x113d3a6e */
  if (!C.zf) goto L_113d3a6e;
  /* 113d3a63 mov edx, dword ptr [0x1140103c] */
  EDX = (r32((uint32_t)(0x1140103c)));
  /* 113d3a69 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 113d3a6c jmp 0x113d3ad2 */
  goto L_113d3ad2;
L_113d3a6e:;
  /* 113d3a6e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 113d3a71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3a74 mov dword ptr [eax*4 + 0x11400f00], ecx */
  w32((uint32_t)(EAX*4 + 0x11400f00), (ECX));
  /* 113d3a7b mov edx, dword ptr [0x1140103c] */
  EDX = (r32((uint32_t)(0x1140103c)));
  /* 113d3a81 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3a84 mov dword ptr [0x1140103c], edx */
  w32((uint32_t)(0x1140103c), (EDX));
  /* 113d3a8a jmp 0x113d3a95 */
  goto L_113d3a95;
L_113d3a8c:;
  /* 113d3a8c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3a8f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3a92 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_113d3a95:;
  /* 113d3a95 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 113d3a98 mov edx, dword ptr [ecx*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11400f00)));
  /* 113d3a9f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3aa5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3aa8 jae 0x113d3acd */
  if (!C.cf) goto L_113d3acd;
  /* 113d3aaa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3aad mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 113d3ab1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3ab4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113d3aba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3abd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 113d3ac1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3ac4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113d3acb jmp 0x113d3a8c */
  goto L_113d3a8c;
L_113d3acd:;
  /* 113d3acd jmp 0x113d3a29 */
  goto L_113d3a29;
L_113d3ad2:;
  /* 113d3ad2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 113d3ad9 jmp 0x113d3af6 */
  goto L_113d3af6;
L_113d3adb:;
  /* 113d3adb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113d3ade add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3ae1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 113d3ae4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3ae7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3aea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d3aed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 113d3af0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3af3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_113d3af6:;
  /* 113d3af6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113d3af9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3afc jge 0x113d3b65 */
  if ((C.sf==C.of)) goto L_113d3b65;
  /* 113d3afe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 113d3b01 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3b04 je 0x113d3b60 */
  if (C.zf) goto L_113d3b60;
  /* 113d3b06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3b09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d3b0c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113d3b0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d3b11 je 0x113d3b60 */
  if (C.zf) goto L_113d3b60;
  /* 113d3b13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3b16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113d3b19 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 113d3b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3b1e jne 0x113d3b30 */
  if (!C.zf) goto L_113d3b30;
  /* 113d3b20 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 113d3b23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d3b25 push edx */
  push32((uint32_t)(EDX));
  /* 113d3b26 call dword ptr [0x1140239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140239c))), 0x113d3b2cu);
  /* 113d3b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3b2e je 0x113d3b60 */
  if (C.zf) goto L_113d3b60;
L_113d3b30:;
  /* 113d3b30 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 113d3b33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113d3b36 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113d3b39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113d3b3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d3b3f mov edx, dword ptr [eax*4 + 0x11400f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113d3b46 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3b48 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 113d3b4b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3b4e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 113d3b51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d3b53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113d3b55 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3b5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d3b5d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_113d3b60:;
  /* 113d3b60 jmp 0x113d3adb */
  goto L_113d3adb;
L_113d3b65:;
  /* 113d3b65 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 113d3b6c jmp 0x113d3b77 */
  goto L_113d3b77;
L_113d3b6e:;
  /* 113d3b6e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 113d3b71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3b74 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_113d3b77:;
  /* 113d3b77 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3b7b jge 0x113d3c54 */
  if ((C.sf==C.of)) goto L_113d3c54;
  /* 113d3b81 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 113d3b84 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d3b87 mov edx, dword ptr [0x11400f00] */
  EDX = (r32((uint32_t)(0x11400f00)));
  /* 113d3b8d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3b8f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 113d3b92 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3b95 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3b98 jne 0x113d3c40 */
  if (!C.zf) goto L_113d3c40;
  /* 113d3b9e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3ba1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 113d3ba5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3ba9 jne 0x113d3bb4 */
  if (!C.zf) goto L_113d3bb4;
  /* 113d3bab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 113d3bb2 jmp 0x113d3bc4 */
  goto L_113d3bc4;
L_113d3bb4:;
  /* 113d3bb4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 113d3bb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d3bba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113d3bbc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d3bbe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3bc1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_113d3bc4:;
  /* 113d3bc4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 113d3bc7 push eax */
  push32((uint32_t)(EAX));
  /* 113d3bc8 call dword ptr [0x1140234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140234c))), 0x113d3bceu);
  /* 113d3bce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 113d3bd1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3bd5 je 0x113d3c2f */
  if (C.zf) goto L_113d3c2f;
  /* 113d3bd7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113d3bda push ecx */
  push32((uint32_t)(ECX));
  /* 113d3bdb call dword ptr [0x1140239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140239c))), 0x113d3be1u);
  /* 113d3be1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 113d3be4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3be8 je 0x113d3c2f */
  if (C.zf) goto L_113d3c2f;
  /* 113d3bea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3bed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113d3bf0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113d3bf2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 113d3bf5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d3bfb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3bfe jne 0x113d3c10 */
  if (!C.zf) goto L_113d3c10;
  /* 113d3c00 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c03 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 113d3c06 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 113d3c08 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c0b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 113d3c0e jmp 0x113d3c2d */
  goto L_113d3c2d;
L_113d3c10:;
  /* 113d3c10 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 113d3c13 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d3c19 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3c1c jne 0x113d3c2d */
  if (!C.zf) goto L_113d3c2d;
  /* 113d3c1e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d3c24 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 113d3c27 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_113d3c2d:;
  /* 113d3c2d jmp 0x113d3c3e */
  goto L_113d3c3e;
L_113d3c2f:;
  /* 113d3c2f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c32 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d3c35 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 113d3c38 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_113d3c3e:;
  /* 113d3c3e jmp 0x113d3c4f */
  goto L_113d3c4f;
L_113d3c40:;
  /* 113d3c40 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c43 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 113d3c46 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 113d3c49 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d3c4c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_113d3c4f:;
  /* 113d3c4f jmp 0x113d3b6e */
  goto L_113d3b6e;
L_113d3c54:;
  /* 113d3c54 mov eax, dword ptr [0x1140103c] */
  EAX = (r32((uint32_t)(0x1140103c)));
  /* 113d3c59 push eax */
  push32((uint32_t)(EAX));
  /* 113d3c5a call dword ptr [0x11402398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402398))), 0x113d3c60u);
  /* 113d3c60 mov esp, ebp */
  ESP = (EBP);
  /* 113d3c62 pop ebp */
  EBP = (pop32());
  /* 113d3c63 ret  */
  ESPCHK(0x113d3940u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x113d3c70 (155 bytes, 45 insns) */
void f_113d3c70(void) {
  FTRACE(0x113d3c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3c70 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3c71 mov ebp, esp */
  EBP = (ESP);
  /* 113d3c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d3c76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113d3c7d jmp 0x113d3c88 */
  goto L_113d3c88;
L_113d3c7f:;
  /* 113d3c7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3c82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3c85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113d3c88:;
  /* 113d3c88 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3c8c jge 0x113d3d07 */
  if ((C.sf==C.of)) goto L_113d3d07;
  /* 113d3c8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3c91 cmp dword ptr [ecx*4 + 0x11400f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11400f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3c99 je 0x113d3d02 */
  if (C.zf) goto L_113d3d02;
  /* 113d3c9b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3c9e mov eax, dword ptr [edx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113d3ca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d3ca8 jmp 0x113d3cb3 */
  goto L_113d3cb3;
L_113d3caa:;
  /* 113d3caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3cad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3cb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d3cb3:;
  /* 113d3cb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3cb6 mov eax, dword ptr [edx*4 + 0x11400f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11400f00)));
  /* 113d3cbd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3cc2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3cc5 jae 0x113d3cdf */
  if (!C.cf) goto L_113d3cdf;
  /* 113d3cc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3cca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3cce je 0x113d3cdd */
  if (C.zf) goto L_113d3cdd;
  /* 113d3cd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3cd3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3cd6 push edx */
  push32((uint32_t)(EDX));
  /* 113d3cd7 call dword ptr [0x11402380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402380))), 0x113d3cddu);
L_113d3cdd:;
  /* 113d3cdd jmp 0x113d3caa */
  goto L_113d3caa;
L_113d3cdf:;
  /* 113d3cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 113d3ce1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3ce4 mov ecx, dword ptr [eax*4 + 0x11400f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11400f00)));
  /* 113d3ceb push ecx */
  push32((uint32_t)(ECX));
  /* 113d3cec call 0x113d47c0 */
  push32(0x113d3cf1u); f_113d47c0();
  /* 113d3cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3cf4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3cf7 mov dword ptr [edx*4 + 0x11400f00], 0 */
  w32((uint32_t)(EDX*4 + 0x11400f00), (0x0u));
L_113d3d02:;
  /* 113d3d02 jmp 0x113d3c7f */
  goto L_113d3c7f;
L_113d3d07:;
  /* 113d3d07 mov esp, ebp */
  ESP = (EBP);
  /* 113d3d09 pop ebp */
  EBP = (pop32());
  /* 113d3d0a ret  */
  ESPCHK(0x113d3c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x113d3d10 (29 bytes, 13 insns) */
void f_113d3d10(void) {
  FTRACE(0x113d3d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3d10 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3d11 mov ebp, esp */
  EBP = (ESP);
  /* 113d3d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3d19 mov eax, dword ptr [0x113ff700] */
  EAX = (r32((uint32_t)(0x113ff700)));
  /* 113d3d1e push eax */
  push32((uint32_t)(EAX));
  /* 113d3d1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3d22 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3d23 call 0x113d3d80 */
  push32(0x113d3d28u); f_113d3d80();
  /* 113d3d28 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3d2b pop ebp */
  EBP = (pop32());
  /* 113d3d2c ret  */
  ESPCHK(0x113d3d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d30 @ 0x113d3d30 (35 bytes, 16 insns) */
void f_113d3d30(void) {
  FTRACE(0x113d3d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3d30 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3d31 mov ebp, esp */
  EBP = (ESP);
  /* 113d3d33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d3d36 push eax */
  push32((uint32_t)(EAX));
  /* 113d3d37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d3d3a push ecx */
  push32((uint32_t)(ECX));
  /* 113d3d3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d3d3e push edx */
  push32((uint32_t)(EDX));
  /* 113d3d3f mov eax, dword ptr [0x113ff700] */
  EAX = (r32((uint32_t)(0x113ff700)));
  /* 113d3d44 push eax */
  push32((uint32_t)(EAX));
  /* 113d3d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3d48 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3d49 call 0x113d3d80 */
  push32(0x113d3d4eu); f_113d3d80();
  /* 113d3d4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3d51 pop ebp */
  EBP = (pop32());
  /* 113d3d52 ret  */
  ESPCHK(0x113d3d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d60 @ 0x113d3d60 (27 bytes, 13 insns) */
void f_113d3d60(void) {
  FTRACE(0x113d3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3d61 mov ebp, esp */
  EBP = (ESP);
  /* 113d3d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d3d6c push eax */
  push32((uint32_t)(EAX));
  /* 113d3d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3d70 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3d71 call 0x113d3d80 */
  push32(0x113d3d76u); f_113d3d80();
  /* 113d3d76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3d79 pop ebp */
  EBP = (pop32());
  /* 113d3d7a ret  */
  ESPCHK(0x113d3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d80 @ 0x113d3d80 (94 bytes, 38 insns) */
void f_113d3d80(void) {
  FTRACE(0x113d3d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3d80 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3d81 mov ebp, esp */
  EBP = (ESP);
  /* 113d3d83 push ecx */
  push32((uint32_t)(ECX));
L_113d3d84:;
  /* 113d3d84 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d3d86 call 0x113d7730 */
  push32(0x113d3d8bu); f_113d7730();
  /* 113d3d8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3d8e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d3d91 push eax */
  push32((uint32_t)(EAX));
  /* 113d3d92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d3d95 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3d96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d3d99 push edx */
  push32((uint32_t)(EDX));
  /* 113d3d9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3d9d push eax */
  push32((uint32_t)(EAX));
  /* 113d3d9e call 0x113d3e00 */
  push32(0x113d3da3u); f_113d3e00();
  /* 113d3da3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3da6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d3da9 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d3dab call 0x113d77d0 */
  push32(0x113d3db0u); f_113d77d0();
  /* 113d3db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3db3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3db7 jne 0x113d3dbf */
  if (!C.zf) goto L_113d3dbf;
  /* 113d3db9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3dbd jne 0x113d3dc4 */
  if (!C.zf) goto L_113d3dc4;
L_113d3dbf:;
  /* 113d3dbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3dc2 jmp 0x113d3dda */
  goto L_113d3dda;
L_113d3dc4:;
  /* 113d3dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3dc8 call 0x113d7a70 */
  push32(0x113d3dcdu); f_113d7a70();
  /* 113d3dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3dd2 jne 0x113d3dd8 */
  if (!C.zf) goto L_113d3dd8;
  /* 113d3dd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d3dd6 jmp 0x113d3dda */
  goto L_113d3dda;
L_113d3dd8:;
  /* 113d3dd8 jmp 0x113d3d84 */
  goto L_113d3d84;
L_113d3dda:;
  /* 113d3dda mov esp, ebp */
  ESP = (EBP);
  /* 113d3ddc pop ebp */
  EBP = (pop32());
  /* 113d3ddd ret  */
  ESPCHK(0x113d3d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x113d3de0 (23 bytes, 11 insns) */
void f_113d3de0(void) {
  FTRACE(0x113d3de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3de0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3de1 mov ebp, esp */
  EBP = (ESP);
  /* 113d3de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3de7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3de9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3dec push eax */
  push32((uint32_t)(EAX));
  /* 113d3ded call 0x113d3e00 */
  push32(0x113d3df2u); f_113d3e00();
  /* 113d3df2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3df5 pop ebp */
  EBP = (pop32());
  /* 113d3df6 ret  */
  ESPCHK(0x113d3de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e00 @ 0x113d3e00 (787 bytes, 254 insns) */
void f_113d3e00(void) {
  FTRACE(0x113d3e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d3e00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d3e01 mov ebp, esp */
  EBP = (ESP);
  /* 113d3e03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d3e06 push ebx */
  push32((uint32_t)(EBX));
  /* 113d3e07 push esi */
  push32((uint32_t)(ESI));
  /* 113d3e08 push edi */
  push32((uint32_t)(EDI));
  /* 113d3e09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113d3e10 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d3e15 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113d3e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3e1a je 0x113d3e4c */
  if (C.zf) goto L_113d3e4c;
L_113d3e1c:;
  /* 113d3e1c call 0x113d4ed0 */
  push32(0x113d3e21u); f_113d4ed0();
  /* 113d3e21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3e23 jne 0x113d3e46 */
  if (!C.zf) goto L_113d3e46;
  /* 113d3e25 push 0x113fa558 */
  push32((uint32_t)(0x113fa558u));
  /* 113d3e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3e2c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 113d3e31 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d3e36 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d3e38 call 0x113d2df0 */
  push32(0x113d3e3du); f_113d2df0();
  /* 113d3e3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3e40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3e43 jne 0x113d3e46 */
  if (!C.zf) goto L_113d3e46;
  /* 113d3e45 int3  */
  x86_unimpl("int3 @ 0x113d3e45");
L_113d3e46:;
  /* 113d3e46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d3e48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d3e4a jne 0x113d3e1c */
  if (!C.zf) goto L_113d3e1c;
L_113d3e4c:;
  /* 113d3e4c mov edx, dword ptr [0x113fda88] */
  EDX = (r32((uint32_t)(0x113fda88)));
  /* 113d3e52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113d3e55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3e58 cmp eax, dword ptr [0x113fda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3e5e jne 0x113d3e61 */
  if (!C.zf) goto L_113d3e61;
  /* 113d3e60 int3  */
  x86_unimpl("int3 @ 0x113d3e60");
L_113d3e61:;
  /* 113d3e61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d3e64 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3e65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d3e68 push edx */
  push32((uint32_t)(EDX));
  /* 113d3e69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d3e6c push eax */
  push32((uint32_t)(EAX));
  /* 113d3e6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d3e70 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3e71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3e74 push edx */
  push32((uint32_t)(EDX));
  /* 113d3e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3e79 call dword ptr [0x113fdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x113fdc90))), 0x113d3e7fu);
  /* 113d3e7f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3e84 jne 0x113d3ee4 */
  if (!C.zf) goto L_113d3ee4;
  /* 113d3e86 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3e8a je 0x113d3eb7 */
  if (C.zf) goto L_113d3eb7;
L_113d3e8c:;
  /* 113d3e8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d3e8f push eax */
  push32((uint32_t)(EAX));
  /* 113d3e90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d3e93 push ecx */
  push32((uint32_t)(ECX));
  /* 113d3e94 push 0x113fa514 */
  push32((uint32_t)(0x113fa514u));
  /* 113d3e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3ea1 call 0x113d2df0 */
  push32(0x113d3ea6u); f_113d2df0();
  /* 113d3ea6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3eac jne 0x113d3eaf */
  if (!C.zf) goto L_113d3eaf;
  /* 113d3eae int3  */
  x86_unimpl("int3 @ 0x113d3eae");
L_113d3eaf:;
  /* 113d3eaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d3eb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d3eb3 jne 0x113d3e8c */
  if (!C.zf) goto L_113d3e8c;
  /* 113d3eb5 jmp 0x113d3edd */
  goto L_113d3edd;
L_113d3eb7:;
  /* 113d3eb7 push 0x113fa4f0 */
  push32((uint32_t)(0x113fa4f0u));
  /* 113d3ebc push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d3ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3ec9 call 0x113d2df0 */
  push32(0x113d3eceu); f_113d2df0();
  /* 113d3ece add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3ed1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3ed4 jne 0x113d3ed7 */
  if (!C.zf) goto L_113d3ed7;
  /* 113d3ed6 int3  */
  x86_unimpl("int3 @ 0x113d3ed6");
L_113d3ed7:;
  /* 113d3ed7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d3ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d3edb jne 0x113d3eb7 */
  if (!C.zf) goto L_113d3eb7;
L_113d3edd:;
  /* 113d3edd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d3edf jmp 0x113d410c */
  goto L_113d410c;
L_113d3ee4:;
  /* 113d3ee4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d3ee7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d3eed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3ef0 je 0x113d3f06 */
  if (C.zf) goto L_113d3f06;
  /* 113d3ef2 mov edx, dword ptr [0x113fda84] */
  EDX = (r32((uint32_t)(0x113fda84)));
  /* 113d3ef8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113d3efb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d3efd jne 0x113d3f06 */
  if (!C.zf) goto L_113d3f06;
  /* 113d3eff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_113d3f06:;
  /* 113d3f06 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f0a ja 0x113d3f17 */
  if ((!C.cf&&!C.zf)) goto L_113d3f17;
  /* 113d3f0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3f0f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3f12 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f15 jbe 0x113d3f43 */
  if ((C.cf||C.zf)) goto L_113d3f43;
L_113d3f17:;
  /* 113d3f17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3f1a push ecx */
  push32((uint32_t)(ECX));
  /* 113d3f1b push 0x113fa4c8 */
  push32((uint32_t)(0x113fa4c8u));
  /* 113d3f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3f28 call 0x113d2df0 */
  push32(0x113d3f2du); f_113d2df0();
  /* 113d3f2d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f33 jne 0x113d3f36 */
  if (!C.zf) goto L_113d3f36;
  /* 113d3f35 int3  */
  x86_unimpl("int3 @ 0x113d3f35");
L_113d3f36:;
  /* 113d3f36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d3f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d3f3a jne 0x113d3f17 */
  if (!C.zf) goto L_113d3f17;
  /* 113d3f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d3f3e jmp 0x113d410c */
  goto L_113d410c;
L_113d3f43:;
  /* 113d3f43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d3f46 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d3f4b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f4e je 0x113d3f90 */
  if (C.zf) goto L_113d3f90;
  /* 113d3f50 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f54 je 0x113d3f90 */
  if (C.zf) goto L_113d3f90;
  /* 113d3f56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d3f59 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d3f5f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f62 je 0x113d3f90 */
  if (C.zf) goto L_113d3f90;
  /* 113d3f64 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f68 je 0x113d3f90 */
  if (C.zf) goto L_113d3f90;
L_113d3f6a:;
  /* 113d3f6a push 0x113fa494 */
  push32((uint32_t)(0x113fa494u));
  /* 113d3f6f push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d3f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d3f7a push 1 */
  push32((uint32_t)(0x1u));
  /* 113d3f7c call 0x113d2df0 */
  push32(0x113d3f81u); f_113d2df0();
  /* 113d3f81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3f84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3f87 jne 0x113d3f8a */
  if (!C.zf) goto L_113d3f8a;
  /* 113d3f89 int3  */
  x86_unimpl("int3 @ 0x113d3f89");
L_113d3f8a:;
  /* 113d3f8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d3f8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d3f8e jne 0x113d3f6a */
  if (!C.zf) goto L_113d3f6a;
L_113d3f90:;
  /* 113d3f90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3f93 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3f96 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d3f99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d3f9c push ecx */
  push32((uint32_t)(ECX));
  /* 113d3f9d call 0x113d7b80 */
  push32(0x113d3fa2u); f_113d7b80();
  /* 113d3fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d3fa8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3fac jne 0x113d3fb5 */
  if (!C.zf) goto L_113d3fb5;
  /* 113d3fae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d3fb0 jmp 0x113d410c */
  goto L_113d410c;
L_113d3fb5:;
  /* 113d3fb5 mov edx, dword ptr [0x113fda88] */
  EDX = (r32((uint32_t)(0x113fda88)));
  /* 113d3fbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d3fbe mov dword ptr [0x113fda88], edx */
  w32((uint32_t)(0x113fda88), (EDX));
  /* 113d3fc4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d3fc8 je 0x113d4013 */
  if (C.zf) goto L_113d4013;
  /* 113d3fca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3fcd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113d3fd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3fd6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 113d3fdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3fe0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 113d3fe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3fea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 113d3ff1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3ff4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d3ff7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 113d3ffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d3ffd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 113d4004 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4007 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 113d400e jmp 0x113d40b3 */
  goto L_113d40b3;
L_113d4013:;
  /* 113d4013 mov edx, dword ptr [0x113ff560] */
  EDX = (r32((uint32_t)(0x113ff560)));
  /* 113d4019 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d401c mov dword ptr [0x113ff560], edx */
  w32((uint32_t)(0x113ff560), (EDX));
  /* 113d4022 mov eax, dword ptr [0x113ff568] */
  EAX = (r32((uint32_t)(0x113ff568)));
  /* 113d4027 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d402a mov dword ptr [0x113ff568], eax */
  w32((uint32_t)(0x113ff568), (EAX));
  /* 113d402f mov ecx, dword ptr [0x113ff568] */
  ECX = (r32((uint32_t)(0x113ff568)));
  /* 113d4035 cmp ecx, dword ptr [0x113ff56c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113ff56c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d403b jbe 0x113d4049 */
  if ((C.cf||C.zf)) goto L_113d4049;
  /* 113d403d mov edx, dword ptr [0x113ff568] */
  EDX = (r32((uint32_t)(0x113ff568)));
  /* 113d4043 mov dword ptr [0x113ff56c], edx */
  w32((uint32_t)(0x113ff56c), (EDX));
L_113d4049:;
  /* 113d4049 cmp dword ptr [0x113ff564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4050 je 0x113d405f */
  if (C.zf) goto L_113d405f;
  /* 113d4052 mov eax, dword ptr [0x113ff564] */
  EAX = (r32((uint32_t)(0x113ff564)));
  /* 113d4057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d405a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113d405d jmp 0x113d4068 */
  goto L_113d4068;
L_113d405f:;
  /* 113d405f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4062 mov dword ptr [0x113ff55c], edx */
  w32((uint32_t)(0x113ff55c), (EDX));
L_113d4068:;
  /* 113d4068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d406b mov ecx, dword ptr [0x113ff564] */
  ECX = (r32((uint32_t)(0x113ff564)));
  /* 113d4071 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113d4073 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4076 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 113d407d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4080 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d4083 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 113d4086 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4089 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d408c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 113d408f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4092 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4095 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 113d4098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d409b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d409e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 113d40a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d40a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d40a7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 113d40aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d40ad mov dword ptr [0x113ff564], ecx */
  w32((uint32_t)(0x113ff564), (ECX));
L_113d40b3:;
  /* 113d40b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d40b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d40b7 mov dl, byte ptr [0x113fda90] */
  DL = (r8((uint32_t)(0x113fda90)));
  /* 113d40bd push edx */
  push32((uint32_t)(EDX));
  /* 113d40be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d40c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d40c4 push eax */
  push32((uint32_t)(EAX));
  /* 113d40c5 call 0x113d7aa0 */
  push32(0x113d40cau); f_113d7aa0();
  /* 113d40ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d40cd push 4 */
  push32((uint32_t)(0x4u));
  /* 113d40cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d40d1 mov cl, byte ptr [0x113fda90] */
  CL = (r8((uint32_t)(0x113fda90)));
  /* 113d40d7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d40d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d40db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d40de lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 113d40e2 push ecx */
  push32((uint32_t)(ECX));
  /* 113d40e3 call 0x113d7aa0 */
  push32(0x113d40e8u); f_113d7aa0();
  /* 113d40e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d40eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d40ee push edx */
  push32((uint32_t)(EDX));
  /* 113d40ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d40f1 mov al, byte ptr [0x113fda92] */
  AL = (r8((uint32_t)(0x113fda92)));
  /* 113d40f6 push eax */
  push32((uint32_t)(EAX));
  /* 113d40f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d40fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d40fd push ecx */
  push32((uint32_t)(ECX));
  /* 113d40fe call 0x113d7aa0 */
  push32(0x113d4103u); f_113d7aa0();
  /* 113d4103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4106 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4109 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_113d410c:;
  /* 113d410c pop edi */
  EDI = (pop32());
  /* 113d410d pop esi */
  ESI = (pop32());
  /* 113d410e pop ebx */
  EBX = (pop32());
  /* 113d410f mov esp, ebp */
  ESP = (EBP);
  /* 113d4111 pop ebp */
  EBP = (pop32());
  /* 113d4112 ret  */
  ESPCHK(0x113d3e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004120 @ 0x113d4120 (27 bytes, 13 insns) */
void f_113d4120(void) {
  FTRACE(0x113d4120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4120 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4121 mov ebp, esp */
  EBP = (ESP);
  /* 113d4123 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4125 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4127 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d4129 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d412c push eax */
  push32((uint32_t)(EAX));
  /* 113d412d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4130 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4131 call 0x113d4140 */
  push32(0x113d4136u); f_113d4140();
  /* 113d4136 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4139 pop ebp */
  EBP = (pop32());
  /* 113d413a ret  */
  ESPCHK(0x113d4120u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x113d4140 (96 bytes, 37 insns) */
void f_113d4140(void) {
  FTRACE(0x113d4140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4140 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4141 mov ebp, esp */
  EBP = (ESP);
  /* 113d4143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4146 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4149 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d414d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 113d4150 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d4153 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4154 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d4157 push edx */
  push32((uint32_t)(EDX));
  /* 113d4158 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d415b push eax */
  push32((uint32_t)(EAX));
  /* 113d415c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d415f push ecx */
  push32((uint32_t)(ECX));
  /* 113d4160 call 0x113d3d30 */
  push32(0x113d4165u); f_113d3d30();
  /* 113d4165 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4168 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d416b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d416f je 0x113d4199 */
  if (C.zf) goto L_113d4199;
  /* 113d4171 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4174 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113d4177 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d417a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d417d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d4180:;
  /* 113d4180 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4183 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4186 jae 0x113d4199 */
  if (!C.cf) goto L_113d4199;
  /* 113d4188 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d418b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113d418e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4191 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4194 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d4197 jmp 0x113d4180 */
  goto L_113d4180;
L_113d4199:;
  /* 113d4199 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d419c mov esp, ebp */
  ESP = (EBP);
  /* 113d419e pop ebp */
  EBP = (pop32());
  /* 113d419f ret  */
  ESPCHK(0x113d4140u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x113d41a0 (27 bytes, 13 insns) */
void f_113d41a0(void) {
  FTRACE(0x113d41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d41a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d41a1 mov ebp, esp */
  EBP = (ESP);
  /* 113d41a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d41a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d41a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d41a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d41ac push eax */
  push32((uint32_t)(EAX));
  /* 113d41ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d41b0 push ecx */
  push32((uint32_t)(ECX));
  /* 113d41b1 call 0x113d41c0 */
  push32(0x113d41b6u); f_113d41c0();
  /* 113d41b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d41b9 pop ebp */
  EBP = (pop32());
  /* 113d41ba ret  */
  ESPCHK(0x113d41a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x113d41c0 (64 bytes, 27 insns) */
void f_113d41c0(void) {
  FTRACE(0x113d41c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d41c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d41c1 mov ebp, esp */
  EBP = (ESP);
  /* 113d41c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d41c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d41c6 call 0x113d7730 */
  push32(0x113d41cbu); f_113d7730();
  /* 113d41cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d41ce push 1 */
  push32((uint32_t)(0x1u));
  /* 113d41d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d41d3 push eax */
  push32((uint32_t)(EAX));
  /* 113d41d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d41d7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d41d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d41db push edx */
  push32((uint32_t)(EDX));
  /* 113d41dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d41df push eax */
  push32((uint32_t)(EAX));
  /* 113d41e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d41e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d41e4 call 0x113d4200 */
  push32(0x113d41e9u); f_113d4200();
  /* 113d41e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d41ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d41ef push 9 */
  push32((uint32_t)(0x9u));
  /* 113d41f1 call 0x113d77d0 */
  push32(0x113d41f6u); f_113d77d0();
  /* 113d41f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d41f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d41fc mov esp, ebp */
  ESP = (EBP);
  /* 113d41fe pop ebp */
  EBP = (pop32());
  /* 113d41ff ret  */
  ESPCHK(0x113d41c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x113d4200 (1297 bytes, 431 insns) */
void f_113d4200(void) {
  FTRACE(0x113d4200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4200 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4201 mov ebp, esp */
  EBP = (ESP);
  /* 113d4203 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4206 push ebx */
  push32((uint32_t)(EBX));
  /* 113d4207 push esi */
  push32((uint32_t)(ESI));
  /* 113d4208 push edi */
  push32((uint32_t)(EDI));
  /* 113d4209 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 113d4210 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4214 jne 0x113d4233 */
  if (!C.zf) goto L_113d4233;
  /* 113d4216 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d4219 push eax */
  push32((uint32_t)(EAX));
  /* 113d421a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d421d push ecx */
  push32((uint32_t)(ECX));
  /* 113d421e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d4221 push edx */
  push32((uint32_t)(EDX));
  /* 113d4222 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4225 push eax */
  push32((uint32_t)(EAX));
  /* 113d4226 call 0x113d3d30 */
  push32(0x113d422bu); f_113d3d30();
  /* 113d422b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d422e jmp 0x113d470a */
  goto L_113d470a;
L_113d4233:;
  /* 113d4233 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4237 je 0x113d4256 */
  if (C.zf) goto L_113d4256;
  /* 113d4239 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d423d jne 0x113d4256 */
  if (!C.zf) goto L_113d4256;
  /* 113d423f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d4242 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4246 push edx */
  push32((uint32_t)(EDX));
  /* 113d4247 call 0x113d47c0 */
  push32(0x113d424cu); f_113d47c0();
  /* 113d424c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d424f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4251 jmp 0x113d470a */
  goto L_113d470a;
L_113d4256:;
  /* 113d4256 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d425b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113d425e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4260 je 0x113d4292 */
  if (C.zf) goto L_113d4292;
L_113d4262:;
  /* 113d4262 call 0x113d4ed0 */
  push32(0x113d4267u); f_113d4ed0();
  /* 113d4267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4269 jne 0x113d428c */
  if (!C.zf) goto L_113d428c;
  /* 113d426b push 0x113fa558 */
  push32((uint32_t)(0x113fa558u));
  /* 113d4270 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4272 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 113d4277 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d427c push 2 */
  push32((uint32_t)(0x2u));
  /* 113d427e call 0x113d2df0 */
  push32(0x113d4283u); f_113d2df0();
  /* 113d4283 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4286 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4289 jne 0x113d428c */
  if (!C.zf) goto L_113d428c;
  /* 113d428b int3  */
  x86_unimpl("int3 @ 0x113d428b");
L_113d428c:;
  /* 113d428c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d428e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4290 jne 0x113d4262 */
  if (!C.zf) goto L_113d4262;
L_113d4292:;
  /* 113d4292 mov edx, dword ptr [0x113fda88] */
  EDX = (r32((uint32_t)(0x113fda88)));
  /* 113d4298 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113d429b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d429e cmp eax, dword ptr [0x113fda8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fda8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d42a4 jne 0x113d42a7 */
  if (!C.zf) goto L_113d42a7;
  /* 113d42a6 int3  */
  x86_unimpl("int3 @ 0x113d42a6");
L_113d42a7:;
  /* 113d42a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d42aa push ecx */
  push32((uint32_t)(ECX));
  /* 113d42ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d42ae push edx */
  push32((uint32_t)(EDX));
  /* 113d42af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d42b2 push eax */
  push32((uint32_t)(EAX));
  /* 113d42b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d42b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113d42b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d42ba push edx */
  push32((uint32_t)(EDX));
  /* 113d42bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d42be push eax */
  push32((uint32_t)(EAX));
  /* 113d42bf push 2 */
  push32((uint32_t)(0x2u));
  /* 113d42c1 call dword ptr [0x113fdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x113fdc90))), 0x113d42c7u);
  /* 113d42c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d42ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d42cc jne 0x113d432c */
  if (!C.zf) goto L_113d432c;
  /* 113d42ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d42d2 je 0x113d42ff */
  if (C.zf) goto L_113d42ff;
L_113d42d4:;
  /* 113d42d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d42d7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d42d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d42db push edx */
  push32((uint32_t)(EDX));
  /* 113d42dc push 0x113fa6d4 */
  push32((uint32_t)(0x113fa6d4u));
  /* 113d42e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d42e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d42e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d42e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d42e9 call 0x113d2df0 */
  push32(0x113d42eeu); f_113d2df0();
  /* 113d42ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d42f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d42f4 jne 0x113d42f7 */
  if (!C.zf) goto L_113d42f7;
  /* 113d42f6 int3  */
  x86_unimpl("int3 @ 0x113d42f6");
L_113d42f7:;
  /* 113d42f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d42f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d42fb jne 0x113d42d4 */
  if (!C.zf) goto L_113d42d4;
  /* 113d42fd jmp 0x113d4325 */
  goto L_113d4325;
L_113d42ff:;
  /* 113d42ff push 0x113fa6b0 */
  push32((uint32_t)(0x113fa6b0u));
  /* 113d4304 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d4309 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d430b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d430d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d430f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4311 call 0x113d2df0 */
  push32(0x113d4316u); f_113d2df0();
  /* 113d4316 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4319 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d431c jne 0x113d431f */
  if (!C.zf) goto L_113d431f;
  /* 113d431e int3  */
  x86_unimpl("int3 @ 0x113d431e");
L_113d431f:;
  /* 113d431f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4321 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4323 jne 0x113d42ff */
  if (!C.zf) goto L_113d42ff;
L_113d4325:;
  /* 113d4325 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4327 jmp 0x113d470a */
  goto L_113d470a;
L_113d432c:;
  /* 113d432c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4330 jbe 0x113d435e */
  if ((C.cf||C.zf)) goto L_113d435e;
L_113d4332:;
  /* 113d4332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4335 push edx */
  push32((uint32_t)(EDX));
  /* 113d4336 push 0x113fa680 */
  push32((uint32_t)(0x113fa680u));
  /* 113d433b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d433d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d433f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4341 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d4343 call 0x113d2df0 */
  push32(0x113d4348u); f_113d2df0();
  /* 113d4348 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d434b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d434e jne 0x113d4351 */
  if (!C.zf) goto L_113d4351;
  /* 113d4350 int3  */
  x86_unimpl("int3 @ 0x113d4350");
L_113d4351:;
  /* 113d4351 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4353 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4355 jne 0x113d4332 */
  if (!C.zf) goto L_113d4332;
  /* 113d4357 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4359 jmp 0x113d470a */
  goto L_113d470a;
L_113d435e:;
  /* 113d435e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4362 je 0x113d43a6 */
  if (C.zf) goto L_113d43a6;
  /* 113d4364 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d4367 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d436d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4370 je 0x113d43a6 */
  if (C.zf) goto L_113d43a6;
  /* 113d4372 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d4375 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d437b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d437e je 0x113d43a6 */
  if (C.zf) goto L_113d43a6;
L_113d4380:;
  /* 113d4380 push 0x113fa494 */
  push32((uint32_t)(0x113fa494u));
  /* 113d4385 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d438a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d438c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d438e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4390 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d4392 call 0x113d2df0 */
  push32(0x113d4397u); f_113d2df0();
  /* 113d4397 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d439a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d439d jne 0x113d43a0 */
  if (!C.zf) goto L_113d43a0;
  /* 113d439f int3  */
  x86_unimpl("int3 @ 0x113d439f");
L_113d43a0:;
  /* 113d43a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d43a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d43a4 jne 0x113d4380 */
  if (!C.zf) goto L_113d4380;
L_113d43a6:;
  /* 113d43a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d43a9 push ecx */
  push32((uint32_t)(ECX));
  /* 113d43aa call 0x113d5330 */
  push32(0x113d43afu); f_113d5330();
  /* 113d43af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d43b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d43b4 jne 0x113d43d7 */
  if (!C.zf) goto L_113d43d7;
  /* 113d43b6 push 0x113fa65c */
  push32((uint32_t)(0x113fa65cu));
  /* 113d43bb push 0 */
  push32((uint32_t)(0x0u));
  /* 113d43bd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 113d43c2 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d43c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d43c9 call 0x113d2df0 */
  push32(0x113d43ceu); f_113d2df0();
  /* 113d43ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d43d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d43d4 jne 0x113d43d7 */
  if (!C.zf) goto L_113d43d7;
  /* 113d43d6 int3  */
  x86_unimpl("int3 @ 0x113d43d6");
L_113d43d7:;
  /* 113d43d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d43d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d43db jne 0x113d43a6 */
  if (!C.zf) goto L_113d43a6;
  /* 113d43dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d43e0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d43e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d43e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d43e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d43ed jne 0x113d43f6 */
  if (!C.zf) goto L_113d43f6;
  /* 113d43ef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_113d43f6:;
  /* 113d43f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d43fa je 0x113d443a */
  if (C.zf) goto L_113d443a;
L_113d43fc:;
  /* 113d43fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d43ff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4406 jne 0x113d4411 */
  if (!C.zf) goto L_113d4411;
  /* 113d4408 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d440b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d440f je 0x113d4432 */
  if (C.zf) goto L_113d4432;
L_113d4411:;
  /* 113d4411 push 0x113fa614 */
  push32((uint32_t)(0x113fa614u));
  /* 113d4416 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4418 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 113d441d push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4422 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4424 call 0x113d2df0 */
  push32(0x113d4429u); f_113d2df0();
  /* 113d4429 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d442c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d442f jne 0x113d4432 */
  if (!C.zf) goto L_113d4432;
  /* 113d4431 int3  */
  x86_unimpl("int3 @ 0x113d4431");
L_113d4432:;
  /* 113d4432 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4434 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4436 jne 0x113d43fc */
  if (!C.zf) goto L_113d43fc;
  /* 113d4438 jmp 0x113d449e */
  goto L_113d449e;
L_113d443a:;
  /* 113d443a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d443d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4440 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d4445 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4448 jne 0x113d445f */
  if (!C.zf) goto L_113d445f;
  /* 113d444a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d444d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d4453 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4456 jne 0x113d445f */
  if (!C.zf) goto L_113d445f;
  /* 113d4458 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_113d445f:;
  /* 113d445f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4462 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4465 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d446a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d446d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d4473 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4475 je 0x113d4498 */
  if (C.zf) goto L_113d4498;
  /* 113d4477 push 0x113fa5d8 */
  push32((uint32_t)(0x113fa5d8u));
  /* 113d447c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d447e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 113d4483 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4488 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d448a call 0x113d2df0 */
  push32(0x113d448fu); f_113d2df0();
  /* 113d448f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4492 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4495 jne 0x113d4498 */
  if (!C.zf) goto L_113d4498;
  /* 113d4497 int3  */
  x86_unimpl("int3 @ 0x113d4497");
L_113d4498:;
  /* 113d4498 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d449a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d449c jne 0x113d445f */
  if (!C.zf) goto L_113d445f;
L_113d449e:;
  /* 113d449e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d44a2 je 0x113d44c9 */
  if (C.zf) goto L_113d44c9;
  /* 113d44a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d44a7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d44aa push eax */
  push32((uint32_t)(EAX));
  /* 113d44ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d44ae push ecx */
  push32((uint32_t)(ECX));
  /* 113d44af call 0x113d7cb0 */
  push32(0x113d44b4u); f_113d7cb0();
  /* 113d44b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d44b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d44ba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d44be jne 0x113d44c7 */
  if (!C.zf) goto L_113d44c7;
  /* 113d44c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d44c2 jmp 0x113d470a */
  goto L_113d470a;
L_113d44c7:;
  /* 113d44c7 jmp 0x113d44ec */
  goto L_113d44ec;
L_113d44c9:;
  /* 113d44c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d44cc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d44cf push edx */
  push32((uint32_t)(EDX));
  /* 113d44d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d44d3 push eax */
  push32((uint32_t)(EAX));
  /* 113d44d4 call 0x113d7c00 */
  push32(0x113d44d9u); f_113d7c00();
  /* 113d44d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d44dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d44df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d44e3 jne 0x113d44ec */
  if (!C.zf) goto L_113d44ec;
  /* 113d44e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d44e7 jmp 0x113d470a */
  goto L_113d470a;
L_113d44ec:;
  /* 113d44ec mov ecx, dword ptr [0x113fda88] */
  ECX = (r32((uint32_t)(0x113fda88)));
  /* 113d44f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d44f5 mov dword ptr [0x113fda88], ecx */
  w32((uint32_t)(0x113fda88), (ECX));
  /* 113d44fb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d44ff jne 0x113d4557 */
  if (!C.zf) goto L_113d4557;
  /* 113d4501 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4504 mov eax, dword ptr [0x113ff560] */
  EAX = (r32((uint32_t)(0x113ff560)));
  /* 113d4509 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d450c mov dword ptr [0x113ff560], eax */
  w32((uint32_t)(0x113ff560), (EAX));
  /* 113d4511 mov ecx, dword ptr [0x113ff560] */
  ECX = (r32((uint32_t)(0x113ff560)));
  /* 113d4517 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d451a mov dword ptr [0x113ff560], ecx */
  w32((uint32_t)(0x113ff560), (ECX));
  /* 113d4520 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4523 mov eax, dword ptr [0x113ff568] */
  EAX = (r32((uint32_t)(0x113ff568)));
  /* 113d4528 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d452b mov dword ptr [0x113ff568], eax */
  w32((uint32_t)(0x113ff568), (EAX));
  /* 113d4530 mov ecx, dword ptr [0x113ff568] */
  ECX = (r32((uint32_t)(0x113ff568)));
  /* 113d4536 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4539 mov dword ptr [0x113ff568], ecx */
  w32((uint32_t)(0x113ff568), (ECX));
  /* 113d453f mov edx, dword ptr [0x113ff568] */
  EDX = (r32((uint32_t)(0x113ff568)));
  /* 113d4545 cmp edx, dword ptr [0x113ff56c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113ff56c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d454b jbe 0x113d4557 */
  if ((C.cf||C.zf)) goto L_113d4557;
  /* 113d454d mov eax, dword ptr [0x113ff568] */
  EAX = (r32((uint32_t)(0x113ff568)));
  /* 113d4552 mov dword ptr [0x113ff56c], eax */
  w32((uint32_t)(0x113ff56c), (EAX));
L_113d4557:;
  /* 113d4557 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d455a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d455d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d4560 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4563 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4566 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4569 jbe 0x113d458f */
  if ((C.cf||C.zf)) goto L_113d458f;
  /* 113d456b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d456e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4571 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4574 push edx */
  push32((uint32_t)(EDX));
  /* 113d4575 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4577 mov al, byte ptr [0x113fda92] */
  AL = (r8((uint32_t)(0x113fda92)));
  /* 113d457c push eax */
  push32((uint32_t)(EAX));
  /* 113d457d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4580 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4583 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4586 push edx */
  push32((uint32_t)(EDX));
  /* 113d4587 call 0x113d7aa0 */
  push32(0x113d458cu); f_113d7aa0();
  /* 113d458c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d458f:;
  /* 113d458f push 4 */
  push32((uint32_t)(0x4u));
  /* 113d4591 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4593 mov al, byte ptr [0x113fda90] */
  AL = (r8((uint32_t)(0x113fda90)));
  /* 113d4598 push eax */
  push32((uint32_t)(EAX));
  /* 113d4599 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d459c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d459f push ecx */
  push32((uint32_t)(ECX));
  /* 113d45a0 call 0x113d7aa0 */
  push32(0x113d45a5u); f_113d7aa0();
  /* 113d45a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d45a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d45ac jne 0x113d45c9 */
  if (!C.zf) goto L_113d45c9;
  /* 113d45ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d45b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d45b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d45b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d45ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d45bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 113d45c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d45c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d45c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_113d45c9:;
  /* 113d45c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d45cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d45cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_113d45d2:;
  /* 113d45d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d45d6 jne 0x113d4607 */
  if (!C.zf) goto L_113d4607;
  /* 113d45d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d45dc jne 0x113d45e6 */
  if (!C.zf) goto L_113d45e6;
  /* 113d45de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d45e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d45e4 je 0x113d4607 */
  if (C.zf) goto L_113d4607;
L_113d45e6:;
  /* 113d45e6 push 0x113fa5a4 */
  push32((uint32_t)(0x113fa5a4u));
  /* 113d45eb push 0 */
  push32((uint32_t)(0x0u));
  /* 113d45ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 113d45f2 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d45f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d45f9 call 0x113d2df0 */
  push32(0x113d45feu); f_113d2df0();
  /* 113d45fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4601 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4604 jne 0x113d4607 */
  if (!C.zf) goto L_113d4607;
  /* 113d4606 int3  */
  x86_unimpl("int3 @ 0x113d4606");
L_113d4607:;
  /* 113d4607 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d4609 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d460b jne 0x113d45d2 */
  if (!C.zf) goto L_113d45d2;
  /* 113d460d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4610 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4613 je 0x113d461b */
  if (C.zf) goto L_113d461b;
  /* 113d4615 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4619 je 0x113d4623 */
  if (C.zf) goto L_113d4623;
L_113d461b:;
  /* 113d461b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d461e jmp 0x113d470a */
  goto L_113d470a;
L_113d4623:;
  /* 113d4623 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4626 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4629 je 0x113d463b */
  if (C.zf) goto L_113d463b;
  /* 113d462b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d462e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d4630 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4633 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d4636 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113d4639 jmp 0x113d4677 */
  goto L_113d4677;
L_113d463b:;
  /* 113d463b mov eax, dword ptr [0x113ff55c] */
  EAX = (r32((uint32_t)(0x113ff55c)));
  /* 113d4640 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4643 je 0x113d4666 */
  if (C.zf) goto L_113d4666;
  /* 113d4645 push 0x113fa588 */
  push32((uint32_t)(0x113fa588u));
  /* 113d464a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d464c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 113d4651 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4656 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4658 call 0x113d2df0 */
  push32(0x113d465du); f_113d2df0();
  /* 113d465d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4663 jne 0x113d4666 */
  if (!C.zf) goto L_113d4666;
  /* 113d4665 int3  */
  x86_unimpl("int3 @ 0x113d4665");
L_113d4666:;
  /* 113d4666 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4668 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d466a jne 0x113d463b */
  if (!C.zf) goto L_113d463b;
  /* 113d466c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d466f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d4672 mov dword ptr [0x113ff55c], eax */
  w32((uint32_t)(0x113ff55c), (EAX));
L_113d4677:;
  /* 113d4677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d467a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d467e je 0x113d468f */
  if (C.zf) goto L_113d468f;
  /* 113d4680 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4683 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d4686 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4689 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d468b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113d468d jmp 0x113d46ca */
  goto L_113d46ca;
L_113d468f:;
  /* 113d468f mov eax, dword ptr [0x113ff564] */
  EAX = (r32((uint32_t)(0x113ff564)));
  /* 113d4694 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4697 je 0x113d46ba */
  if (C.zf) goto L_113d46ba;
  /* 113d4699 push 0x113fa56c */
  push32((uint32_t)(0x113fa56cu));
  /* 113d469e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d46a0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 113d46a5 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d46aa push 2 */
  push32((uint32_t)(0x2u));
  /* 113d46ac call 0x113d2df0 */
  push32(0x113d46b1u); f_113d2df0();
  /* 113d46b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d46b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d46b7 jne 0x113d46ba */
  if (!C.zf) goto L_113d46ba;
  /* 113d46b9 int3  */
  x86_unimpl("int3 @ 0x113d46b9");
L_113d46ba:;
  /* 113d46ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d46bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d46be jne 0x113d468f */
  if (!C.zf) goto L_113d468f;
  /* 113d46c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d46c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d46c5 mov dword ptr [0x113ff564], eax */
  w32((uint32_t)(0x113ff564), (EAX));
L_113d46ca:;
  /* 113d46ca cmp dword ptr [0x113ff564], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff564))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d46d1 je 0x113d46e1 */
  if (C.zf) goto L_113d46e1;
  /* 113d46d3 mov ecx, dword ptr [0x113ff564] */
  ECX = (r32((uint32_t)(0x113ff564)));
  /* 113d46d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d46dc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 113d46df jmp 0x113d46e9 */
  goto L_113d46e9;
L_113d46e1:;
  /* 113d46e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d46e4 mov dword ptr [0x113ff55c], eax */
  w32((uint32_t)(0x113ff55c), (EAX));
L_113d46e9:;
  /* 113d46e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d46ec mov edx, dword ptr [0x113ff564] */
  EDX = (r32((uint32_t)(0x113ff564)));
  /* 113d46f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113d46f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d46f7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 113d46fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4701 mov dword ptr [0x113ff564], ecx */
  w32((uint32_t)(0x113ff564), (ECX));
  /* 113d4707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113d470a:;
  /* 113d470a pop edi */
  EDI = (pop32());
  /* 113d470b pop esi */
  ESI = (pop32());
  /* 113d470c pop ebx */
  EBX = (pop32());
  /* 113d470d mov esp, ebp */
  ESP = (EBP);
  /* 113d470f pop ebp */
  EBP = (pop32());
  /* 113d4710 ret  */
  ESPCHK(0x113d4200u, _esp0);
  ESP += 4; return;
}

/* FUN_10004720 @ 0x113d4720 (27 bytes, 13 insns) */
void f_113d4720(void) {
  FTRACE(0x113d4720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4720 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4721 mov ebp, esp */
  EBP = (ESP);
  /* 113d4723 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4725 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4727 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d4729 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d472c push eax */
  push32((uint32_t)(EAX));
  /* 113d472d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4730 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4731 call 0x113d4740 */
  push32(0x113d4736u); f_113d4740();
  /* 113d4736 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4739 pop ebp */
  EBP = (pop32());
  /* 113d473a ret  */
  ESPCHK(0x113d4720u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x113d4740 (64 bytes, 27 insns) */
void f_113d4740(void) {
  FTRACE(0x113d4740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4740 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4741 mov ebp, esp */
  EBP = (ESP);
  /* 113d4743 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4744 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d4746 call 0x113d7730 */
  push32(0x113d474bu); f_113d7730();
  /* 113d474b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d474e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4750 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d4753 push eax */
  push32((uint32_t)(EAX));
  /* 113d4754 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d4757 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4758 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d475b push edx */
  push32((uint32_t)(EDX));
  /* 113d475c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d475f push eax */
  push32((uint32_t)(EAX));
  /* 113d4760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4763 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4764 call 0x113d4200 */
  push32(0x113d4769u); f_113d4200();
  /* 113d4769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d476c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d476f push 9 */
  push32((uint32_t)(0x9u));
  /* 113d4771 call 0x113d77d0 */
  push32(0x113d4776u); f_113d77d0();
  /* 113d4776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d477c mov esp, ebp */
  ESP = (EBP);
  /* 113d477e pop ebp */
  EBP = (pop32());
  /* 113d477f ret  */
  ESPCHK(0x113d4740u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x113d4780 (19 bytes, 9 insns) */
void f_113d4780(void) {
  FTRACE(0x113d4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4780 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4781 mov ebp, esp */
  EBP = (ESP);
  /* 113d4783 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d4785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4788 push eax */
  push32((uint32_t)(EAX));
  /* 113d4789 call 0x113d47c0 */
  push32(0x113d478eu); f_113d47c0();
  /* 113d478e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4791 pop ebp */
  EBP = (pop32());
  /* 113d4792 ret  */
  ESPCHK(0x113d4780u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x113d47a0 (19 bytes, 9 insns) */
void f_113d47a0(void) {
  FTRACE(0x113d47a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d47a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d47a1 mov ebp, esp */
  EBP = (ESP);
  /* 113d47a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d47a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d47a8 push eax */
  push32((uint32_t)(EAX));
  /* 113d47a9 call 0x113d47f0 */
  push32(0x113d47aeu); f_113d47f0();
  /* 113d47ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d47b1 pop ebp */
  EBP = (pop32());
  /* 113d47b2 ret  */
  ESPCHK(0x113d47a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x113d47c0 (41 bytes, 16 insns) */
void f_113d47c0(void) {
  FTRACE(0x113d47c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d47c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d47c1 mov ebp, esp */
  EBP = (ESP);
  /* 113d47c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d47c5 call 0x113d7730 */
  push32(0x113d47cau); f_113d7730();
  /* 113d47ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d47cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d47d0 push eax */
  push32((uint32_t)(EAX));
  /* 113d47d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d47d4 push ecx */
  push32((uint32_t)(ECX));
  /* 113d47d5 call 0x113d47f0 */
  push32(0x113d47dau); f_113d47f0();
  /* 113d47da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d47dd push 9 */
  push32((uint32_t)(0x9u));
  /* 113d47df call 0x113d77d0 */
  push32(0x113d47e4u); f_113d77d0();
  /* 113d47e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d47e7 pop ebp */
  EBP = (pop32());
  /* 113d47e8 ret  */
  ESPCHK(0x113d47c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047f0 @ 0x113d47f0 (1004 bytes, 342 insns) */
void f_113d47f0(void) {
  FTRACE(0x113d47f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d47f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d47f1 mov ebp, esp */
  EBP = (ESP);
  /* 113d47f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d47f4 push ebx */
  push32((uint32_t)(EBX));
  /* 113d47f5 push esi */
  push32((uint32_t)(ESI));
  /* 113d47f6 push edi */
  push32((uint32_t)(EDI));
  /* 113d47f7 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d47fc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113d47ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4801 je 0x113d4833 */
  if (C.zf) goto L_113d4833;
L_113d4803:;
  /* 113d4803 call 0x113d4ed0 */
  push32(0x113d4808u); f_113d4ed0();
  /* 113d4808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d480a jne 0x113d482d */
  if (!C.zf) goto L_113d482d;
  /* 113d480c push 0x113fa558 */
  push32((uint32_t)(0x113fa558u));
  /* 113d4811 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4813 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 113d4818 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d481d push 2 */
  push32((uint32_t)(0x2u));
  /* 113d481f call 0x113d2df0 */
  push32(0x113d4824u); f_113d2df0();
  /* 113d4824 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4827 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d482a jne 0x113d482d */
  if (!C.zf) goto L_113d482d;
  /* 113d482c int3  */
  x86_unimpl("int3 @ 0x113d482c");
L_113d482d:;
  /* 113d482d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d482f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4831 jne 0x113d4803 */
  if (!C.zf) goto L_113d4803;
L_113d4833:;
  /* 113d4833 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4837 jne 0x113d483e */
  if (!C.zf) goto L_113d483e;
  /* 113d4839 jmp 0x113d4bd5 */
  goto L_113d4bd5;
L_113d483e:;
  /* 113d483e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4840 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4842 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4844 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4847 push edx */
  push32((uint32_t)(EDX));
  /* 113d4848 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d484a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d484d push eax */
  push32((uint32_t)(EAX));
  /* 113d484e push 3 */
  push32((uint32_t)(0x3u));
  /* 113d4850 call dword ptr [0x113fdc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x113fdc90))), 0x113d4856u);
  /* 113d4856 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d485b jne 0x113d4888 */
  if (!C.zf) goto L_113d4888;
L_113d485d:;
  /* 113d485d push 0x113fa81c */
  push32((uint32_t)(0x113fa81cu));
  /* 113d4862 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d4867 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4869 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d486b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d486d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d486f call 0x113d2df0 */
  push32(0x113d4874u); f_113d2df0();
  /* 113d4874 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d487a jne 0x113d487d */
  if (!C.zf) goto L_113d487d;
  /* 113d487c int3  */
  x86_unimpl("int3 @ 0x113d487c");
L_113d487d:;
  /* 113d487d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d487f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4881 jne 0x113d485d */
  if (!C.zf) goto L_113d485d;
  /* 113d4883 jmp 0x113d4bd5 */
  goto L_113d4bd5;
L_113d4888:;
  /* 113d4888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d488b push edx */
  push32((uint32_t)(EDX));
  /* 113d488c call 0x113d5330 */
  push32(0x113d4891u); f_113d5330();
  /* 113d4891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4896 jne 0x113d48b9 */
  if (!C.zf) goto L_113d48b9;
  /* 113d4898 push 0x113fa65c */
  push32((uint32_t)(0x113fa65cu));
  /* 113d489d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d489f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 113d48a4 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d48a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d48ab call 0x113d2df0 */
  push32(0x113d48b0u); f_113d2df0();
  /* 113d48b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d48b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d48b6 jne 0x113d48b9 */
  if (!C.zf) goto L_113d48b9;
  /* 113d48b8 int3  */
  x86_unimpl("int3 @ 0x113d48b8");
L_113d48b9:;
  /* 113d48b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d48bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d48bd jne 0x113d4888 */
  if (!C.zf) goto L_113d4888;
  /* 113d48bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d48c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d48c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d48c8:;
  /* 113d48c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d48cb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d48ce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d48d3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d48d6 je 0x113d491b */
  if (C.zf) goto L_113d491b;
  /* 113d48d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d48db cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d48df je 0x113d491b */
  if (C.zf) goto L_113d491b;
  /* 113d48e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d48e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d48e7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d48ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d48ef je 0x113d491b */
  if (C.zf) goto L_113d491b;
  /* 113d48f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d48f4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d48f8 je 0x113d491b */
  if (C.zf) goto L_113d491b;
  /* 113d48fa push 0x113fa7f4 */
  push32((uint32_t)(0x113fa7f4u));
  /* 113d48ff push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4901 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 113d4906 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d490b push 2 */
  push32((uint32_t)(0x2u));
  /* 113d490d call 0x113d2df0 */
  push32(0x113d4912u); f_113d2df0();
  /* 113d4912 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4915 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4918 jne 0x113d491b */
  if (!C.zf) goto L_113d491b;
  /* 113d491a int3  */
  x86_unimpl("int3 @ 0x113d491a");
L_113d491b:;
  /* 113d491b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d491d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d491f jne 0x113d48c8 */
  if (!C.zf) goto L_113d48c8;
  /* 113d4921 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d4926 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113d4929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d492b jne 0x113d49f6 */
  if (!C.zf) goto L_113d49f6;
  /* 113d4931 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d4933 mov cl, byte ptr [0x113fda90] */
  CL = (r8((uint32_t)(0x113fda90)));
  /* 113d4939 push ecx */
  push32((uint32_t)(ECX));
  /* 113d493a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d493d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4940 push edx */
  push32((uint32_t)(EDX));
  /* 113d4941 call 0x113d4e40 */
  push32(0x113d4946u); f_113d4e40();
  /* 113d4946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d494b jne 0x113d4990 */
  if (!C.zf) goto L_113d4990;
L_113d494d:;
  /* 113d494d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4950 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4953 push eax */
  push32((uint32_t)(EAX));
  /* 113d4954 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4957 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113d495a push edx */
  push32((uint32_t)(EDX));
  /* 113d495b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d495e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113d4961 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d4967 mov edx, dword ptr [ecx*4 + 0x113fda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda94)));
  /* 113d496e push edx */
  push32((uint32_t)(EDX));
  /* 113d496f push 0x113fa7c8 */
  push32((uint32_t)(0x113fa7c8u));
  /* 113d4974 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4976 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4978 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d497a push 1 */
  push32((uint32_t)(0x1u));
  /* 113d497c call 0x113d2df0 */
  push32(0x113d4981u); f_113d2df0();
  /* 113d4981 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4987 jne 0x113d498a */
  if (!C.zf) goto L_113d498a;
  /* 113d4989 int3  */
  x86_unimpl("int3 @ 0x113d4989");
L_113d498a:;
  /* 113d498a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d498c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d498e jne 0x113d494d */
  if (!C.zf) goto L_113d494d;
L_113d4990:;
  /* 113d4990 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d4992 mov cl, byte ptr [0x113fda90] */
  CL = (r8((uint32_t)(0x113fda90)));
  /* 113d4998 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4999 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d499c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d499f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d49a2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 113d49a6 push edx */
  push32((uint32_t)(EDX));
  /* 113d49a7 call 0x113d4e40 */
  push32(0x113d49acu); f_113d4e40();
  /* 113d49ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d49af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d49b1 jne 0x113d49f6 */
  if (!C.zf) goto L_113d49f6;
L_113d49b3:;
  /* 113d49b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d49b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d49b9 push eax */
  push32((uint32_t)(EAX));
  /* 113d49ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d49bd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113d49c0 push edx */
  push32((uint32_t)(EDX));
  /* 113d49c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d49c4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113d49c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d49cd mov edx, dword ptr [ecx*4 + 0x113fda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda94)));
  /* 113d49d4 push edx */
  push32((uint32_t)(EDX));
  /* 113d49d5 push 0x113fa79c */
  push32((uint32_t)(0x113fa79cu));
  /* 113d49da push 0 */
  push32((uint32_t)(0x0u));
  /* 113d49dc push 0 */
  push32((uint32_t)(0x0u));
  /* 113d49de push 0 */
  push32((uint32_t)(0x0u));
  /* 113d49e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d49e2 call 0x113d2df0 */
  push32(0x113d49e7u); f_113d2df0();
  /* 113d49e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d49ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d49ed jne 0x113d49f0 */
  if (!C.zf) goto L_113d49f0;
  /* 113d49ef int3  */
  x86_unimpl("int3 @ 0x113d49ef");
L_113d49f0:;
  /* 113d49f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d49f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d49f4 jne 0x113d49b3 */
  if (!C.zf) goto L_113d49b3;
L_113d49f6:;
  /* 113d49f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d49f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d49fd jne 0x113d4a6b */
  if (!C.zf) goto L_113d4a6b;
L_113d49ff:;
  /* 113d49ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4a02 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4a09 jne 0x113d4a14 */
  if (!C.zf) goto L_113d4a14;
  /* 113d4a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4a0e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4a12 je 0x113d4a35 */
  if (C.zf) goto L_113d4a35;
L_113d4a14:;
  /* 113d4a14 push 0x113fa75c */
  push32((uint32_t)(0x113fa75cu));
  /* 113d4a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4a1b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 113d4a20 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4a25 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4a27 call 0x113d2df0 */
  push32(0x113d4a2cu); f_113d2df0();
  /* 113d4a2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4a2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4a32 jne 0x113d4a35 */
  if (!C.zf) goto L_113d4a35;
  /* 113d4a34 int3  */
  x86_unimpl("int3 @ 0x113d4a34");
L_113d4a35:;
  /* 113d4a35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4a37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4a39 jne 0x113d49ff */
  if (!C.zf) goto L_113d49ff;
  /* 113d4a3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4a3e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d4a41 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4a44 push eax */
  push32((uint32_t)(EAX));
  /* 113d4a45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4a47 mov cl, byte ptr [0x113fda91] */
  CL = (r8((uint32_t)(0x113fda91)));
  /* 113d4a4d push ecx */
  push32((uint32_t)(ECX));
  /* 113d4a4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4a51 push edx */
  push32((uint32_t)(EDX));
  /* 113d4a52 call 0x113d7aa0 */
  push32(0x113d4a57u); f_113d7aa0();
  /* 113d4a57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4a5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4a5d push eax */
  push32((uint32_t)(EAX));
  /* 113d4a5e call 0x113d7ea0 */
  push32(0x113d4a63u); f_113d7ea0();
  /* 113d4a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4a66 jmp 0x113d4bd5 */
  goto L_113d4bd5;
L_113d4a6b:;
  /* 113d4a6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4a6e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4a72 jne 0x113d4a81 */
  if (!C.zf) goto L_113d4a81;
  /* 113d4a74 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4a78 jne 0x113d4a81 */
  if (!C.zf) goto L_113d4a81;
  /* 113d4a7a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_113d4a81:;
  /* 113d4a81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4a84 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4a87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4a8a je 0x113d4aad */
  if (C.zf) goto L_113d4aad;
  /* 113d4a8c push 0x113fa73c */
  push32((uint32_t)(0x113fa73cu));
  /* 113d4a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4a93 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 113d4a98 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4a9f call 0x113d2df0 */
  push32(0x113d4aa4u); f_113d2df0();
  /* 113d4aa4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4aa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4aaa jne 0x113d4aad */
  if (!C.zf) goto L_113d4aad;
  /* 113d4aac int3  */
  x86_unimpl("int3 @ 0x113d4aac");
L_113d4aad:;
  /* 113d4aad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4aaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4ab1 jne 0x113d4a81 */
  if (!C.zf) goto L_113d4a81;
  /* 113d4ab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4ab6 mov eax, dword ptr [0x113ff568] */
  EAX = (r32((uint32_t)(0x113ff568)));
  /* 113d4abb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4abe mov dword ptr [0x113ff568], eax */
  w32((uint32_t)(0x113ff568), (EAX));
  /* 113d4ac3 mov ecx, dword ptr [0x113fda84] */
  ECX = (r32((uint32_t)(0x113fda84)));
  /* 113d4ac9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 113d4acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4ace jne 0x113d4bac */
  if (!C.zf) goto L_113d4bac;
  /* 113d4ad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4ad7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4ada je 0x113d4aec */
  if (C.zf) goto L_113d4aec;
  /* 113d4adc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4adf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d4ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4ae4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d4ae7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113d4aea jmp 0x113d4b2a */
  goto L_113d4b2a;
L_113d4aec:;
  /* 113d4aec mov ecx, dword ptr [0x113ff55c] */
  ECX = (r32((uint32_t)(0x113ff55c)));
  /* 113d4af2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4af5 je 0x113d4b18 */
  if (C.zf) goto L_113d4b18;
  /* 113d4af7 push 0x113fa724 */
  push32((uint32_t)(0x113fa724u));
  /* 113d4afc push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4afe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 113d4b03 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4b08 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4b0a call 0x113d2df0 */
  push32(0x113d4b0fu); f_113d2df0();
  /* 113d4b0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4b12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4b15 jne 0x113d4b18 */
  if (!C.zf) goto L_113d4b18;
  /* 113d4b17 int3  */
  x86_unimpl("int3 @ 0x113d4b17");
L_113d4b18:;
  /* 113d4b18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d4b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d4b1c jne 0x113d4aec */
  if (!C.zf) goto L_113d4aec;
  /* 113d4b1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4b21 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d4b24 mov dword ptr [0x113ff55c], ecx */
  w32((uint32_t)(0x113ff55c), (ECX));
L_113d4b2a:;
  /* 113d4b2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4b2d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4b31 je 0x113d4b42 */
  if (C.zf) goto L_113d4b42;
  /* 113d4b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4b36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d4b39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4b3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d4b3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d4b40 jmp 0x113d4b7f */
  goto L_113d4b7f;
L_113d4b42:;
  /* 113d4b42 mov ecx, dword ptr [0x113ff564] */
  ECX = (r32((uint32_t)(0x113ff564)));
  /* 113d4b48 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4b4b je 0x113d4b6e */
  if (C.zf) goto L_113d4b6e;
  /* 113d4b4d push 0x113fa70c */
  push32((uint32_t)(0x113fa70cu));
  /* 113d4b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4b54 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 113d4b59 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4b5e push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4b60 call 0x113d2df0 */
  push32(0x113d4b65u); f_113d2df0();
  /* 113d4b65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4b68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4b6b jne 0x113d4b6e */
  if (!C.zf) goto L_113d4b6e;
  /* 113d4b6d int3  */
  x86_unimpl("int3 @ 0x113d4b6d");
L_113d4b6e:;
  /* 113d4b6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d4b70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d4b72 jne 0x113d4b42 */
  if (!C.zf) goto L_113d4b42;
  /* 113d4b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4b77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d4b79 mov dword ptr [0x113ff564], ecx */
  w32((uint32_t)(0x113ff564), (ECX));
L_113d4b7f:;
  /* 113d4b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4b82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d4b85 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4b88 push eax */
  push32((uint32_t)(EAX));
  /* 113d4b89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4b8b mov cl, byte ptr [0x113fda91] */
  CL = (r8((uint32_t)(0x113fda91)));
  /* 113d4b91 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4b92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4b95 push edx */
  push32((uint32_t)(EDX));
  /* 113d4b96 call 0x113d7aa0 */
  push32(0x113d4b9bu); f_113d7aa0();
  /* 113d4b9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4b9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4ba1 push eax */
  push32((uint32_t)(EAX));
  /* 113d4ba2 call 0x113d7ea0 */
  push32(0x113d4ba7u); f_113d7ea0();
  /* 113d4ba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4baa jmp 0x113d4bd5 */
  goto L_113d4bd5;
L_113d4bac:;
  /* 113d4bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4baf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 113d4bb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4bb9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d4bbc push eax */
  push32((uint32_t)(EAX));
  /* 113d4bbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4bbf mov cl, byte ptr [0x113fda91] */
  CL = (r8((uint32_t)(0x113fda91)));
  /* 113d4bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4bc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4bc9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4bcc push edx */
  push32((uint32_t)(EDX));
  /* 113d4bcd call 0x113d7aa0 */
  push32(0x113d4bd2u); f_113d7aa0();
  /* 113d4bd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d4bd5:;
  /* 113d4bd5 pop edi */
  EDI = (pop32());
  /* 113d4bd6 pop esi */
  ESI = (pop32());
  /* 113d4bd7 pop ebx */
  EBX = (pop32());
  /* 113d4bd8 mov esp, ebp */
  ESP = (EBP);
  /* 113d4bda pop ebp */
  EBP = (pop32());
  /* 113d4bdb ret  */
  ESPCHK(0x113d47f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004be0 @ 0x113d4be0 (19 bytes, 9 insns) */
void f_113d4be0(void) {
  FTRACE(0x113d4be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4be0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4be1 mov ebp, esp */
  EBP = (ESP);
  /* 113d4be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d4be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4be8 push eax */
  push32((uint32_t)(EAX));
  /* 113d4be9 call 0x113d4c00 */
  push32(0x113d4beeu); f_113d4c00();
  /* 113d4bee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4bf1 pop ebp */
  EBP = (pop32());
  /* 113d4bf2 ret  */
  ESPCHK(0x113d4be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x113d4c00 (342 bytes, 119 insns) */
void f_113d4c00(void) {
  FTRACE(0x113d4c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4c00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4c01 mov ebp, esp */
  EBP = (ESP);
  /* 113d4c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4c06 push ebx */
  push32((uint32_t)(EBX));
  /* 113d4c07 push esi */
  push32((uint32_t)(ESI));
  /* 113d4c08 push edi */
  push32((uint32_t)(EDI));
  /* 113d4c09 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d4c0e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113d4c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4c13 je 0x113d4c45 */
  if (C.zf) goto L_113d4c45;
L_113d4c15:;
  /* 113d4c15 call 0x113d4ed0 */
  push32(0x113d4c1au); f_113d4ed0();
  /* 113d4c1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4c1c jne 0x113d4c3f */
  if (!C.zf) goto L_113d4c3f;
  /* 113d4c1e push 0x113fa558 */
  push32((uint32_t)(0x113fa558u));
  /* 113d4c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4c25 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 113d4c2a push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4c31 call 0x113d2df0 */
  push32(0x113d4c36u); f_113d2df0();
  /* 113d4c36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4c39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4c3c jne 0x113d4c3f */
  if (!C.zf) goto L_113d4c3f;
  /* 113d4c3e int3  */
  x86_unimpl("int3 @ 0x113d4c3e");
L_113d4c3f:;
  /* 113d4c3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4c41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4c43 jne 0x113d4c15 */
  if (!C.zf) goto L_113d4c15;
L_113d4c45:;
  /* 113d4c45 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d4c47 call 0x113d7730 */
  push32(0x113d4c4cu); f_113d7730();
  /* 113d4c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d4c4f:;
  /* 113d4c4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4c52 push edx */
  push32((uint32_t)(EDX));
  /* 113d4c53 call 0x113d5330 */
  push32(0x113d4c58u); f_113d5330();
  /* 113d4c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4c5d jne 0x113d4c80 */
  if (!C.zf) goto L_113d4c80;
  /* 113d4c5f push 0x113fa65c */
  push32((uint32_t)(0x113fa65cu));
  /* 113d4c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4c66 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 113d4c6b push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4c70 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4c72 call 0x113d2df0 */
  push32(0x113d4c77u); f_113d2df0();
  /* 113d4c77 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4c7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4c7d jne 0x113d4c80 */
  if (!C.zf) goto L_113d4c80;
  /* 113d4c7f int3  */
  x86_unimpl("int3 @ 0x113d4c7f");
L_113d4c80:;
  /* 113d4c80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4c84 jne 0x113d4c4f */
  if (!C.zf) goto L_113d4c4f;
  /* 113d4c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4c89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4c8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113d4c8f:;
  /* 113d4c8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4c92 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4c95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d4c9a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4c9d je 0x113d4ce2 */
  if (C.zf) goto L_113d4ce2;
  /* 113d4c9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4ca2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4ca6 je 0x113d4ce2 */
  if (C.zf) goto L_113d4ce2;
  /* 113d4ca8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4cab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4cae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d4cb3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4cb6 je 0x113d4ce2 */
  if (C.zf) goto L_113d4ce2;
  /* 113d4cb8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4cbb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4cbf je 0x113d4ce2 */
  if (C.zf) goto L_113d4ce2;
  /* 113d4cc1 push 0x113fa7f4 */
  push32((uint32_t)(0x113fa7f4u));
  /* 113d4cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4cc8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 113d4ccd push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4cd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4cd4 call 0x113d2df0 */
  push32(0x113d4cd9u); f_113d2df0();
  /* 113d4cd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4cdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4cdf jne 0x113d4ce2 */
  if (!C.zf) goto L_113d4ce2;
  /* 113d4ce1 int3  */
  x86_unimpl("int3 @ 0x113d4ce1");
L_113d4ce2:;
  /* 113d4ce2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d4ce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d4ce6 jne 0x113d4c8f */
  if (!C.zf) goto L_113d4c8f;
  /* 113d4ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4ceb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4cef jne 0x113d4cfe */
  if (!C.zf) goto L_113d4cfe;
  /* 113d4cf1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4cf5 jne 0x113d4cfe */
  if (!C.zf) goto L_113d4cfe;
  /* 113d4cf7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_113d4cfe:;
  /* 113d4cfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4d01 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4d05 je 0x113d4d39 */
  if (C.zf) goto L_113d4d39;
L_113d4d07:;
  /* 113d4d07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4d0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4d0d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4d10 je 0x113d4d33 */
  if (C.zf) goto L_113d4d33;
  /* 113d4d12 push 0x113fa73c */
  push32((uint32_t)(0x113fa73cu));
  /* 113d4d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4d19 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 113d4d1e push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4d25 call 0x113d2df0 */
  push32(0x113d4d2au); f_113d2df0();
  /* 113d4d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4d30 jne 0x113d4d33 */
  if (!C.zf) goto L_113d4d33;
  /* 113d4d32 int3  */
  x86_unimpl("int3 @ 0x113d4d32");
L_113d4d33:;
  /* 113d4d33 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4d35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4d37 jne 0x113d4d07 */
  if (!C.zf) goto L_113d4d07;
L_113d4d39:;
  /* 113d4d39 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d4d3c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d4d3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d4d42 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d4d44 call 0x113d77d0 */
  push32(0x113d4d49u); f_113d77d0();
  /* 113d4d49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4d4f pop edi */
  EDI = (pop32());
  /* 113d4d50 pop esi */
  ESI = (pop32());
  /* 113d4d51 pop ebx */
  EBX = (pop32());
  /* 113d4d52 mov esp, ebp */
  ESP = (EBP);
  /* 113d4d54 pop ebp */
  EBP = (pop32());
  /* 113d4d55 ret  */
  ESPCHK(0x113d4c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d60 @ 0x113d4d60 (28 bytes, 11 insns) */
void f_113d4d60(void) {
  FTRACE(0x113d4d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4d60 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4d61 mov ebp, esp */
  EBP = (ESP);
  /* 113d4d63 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4d64 mov eax, dword ptr [0x113fda8c] */
  EAX = (r32((uint32_t)(0x113fda8c)));
  /* 113d4d69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d4d6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4d6f mov dword ptr [0x113fda8c], ecx */
  w32((uint32_t)(0x113fda8c), (ECX));
  /* 113d4d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4d78 mov esp, ebp */
  ESP = (EBP);
  /* 113d4d7a pop ebp */
  EBP = (pop32());
  /* 113d4d7b ret  */
  ESPCHK(0x113d4d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d80 @ 0x113d4d80 (157 bytes, 59 insns) */
void f_113d4d80(void) {
  FTRACE(0x113d4d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4d80 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4d81 mov ebp, esp */
  EBP = (ESP);
  /* 113d4d83 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4d84 push ebx */
  push32((uint32_t)(EBX));
  /* 113d4d85 push esi */
  push32((uint32_t)(ESI));
  /* 113d4d86 push edi */
  push32((uint32_t)(EDI));
  /* 113d4d87 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d4d89 call 0x113d7730 */
  push32(0x113d4d8eu); f_113d7730();
  /* 113d4d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4d91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4d94 push eax */
  push32((uint32_t)(EAX));
  /* 113d4d95 call 0x113d5330 */
  push32(0x113d4d9au); f_113d5330();
  /* 113d4d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4d9f je 0x113d4e0c */
  if (C.zf) goto L_113d4e0c;
  /* 113d4da1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4da4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4da7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d4daa:;
  /* 113d4daa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4dad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4db0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d4db5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4db8 je 0x113d4dfd */
  if (C.zf) goto L_113d4dfd;
  /* 113d4dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4dbd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4dc1 je 0x113d4dfd */
  if (C.zf) goto L_113d4dfd;
  /* 113d4dc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4dc6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d4dc9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d4dce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4dd1 je 0x113d4dfd */
  if (C.zf) goto L_113d4dfd;
  /* 113d4dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4dd6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4dda je 0x113d4dfd */
  if (C.zf) goto L_113d4dfd;
  /* 113d4ddc push 0x113fa7f4 */
  push32((uint32_t)(0x113fa7f4u));
  /* 113d4de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4de3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 113d4de8 push 0x113fa54c */
  push32((uint32_t)(0x113fa54cu));
  /* 113d4ded push 2 */
  push32((uint32_t)(0x2u));
  /* 113d4def call 0x113d2df0 */
  push32(0x113d4df4u); f_113d2df0();
  /* 113d4df4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4df7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4dfa jne 0x113d4dfd */
  if (!C.zf) goto L_113d4dfd;
  /* 113d4dfc int3  */
  x86_unimpl("int3 @ 0x113d4dfc");
L_113d4dfd:;
  /* 113d4dfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d4dff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d4e01 jne 0x113d4daa */
  if (!C.zf) goto L_113d4daa;
  /* 113d4e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4e06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4e09 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_113d4e0c:;
  /* 113d4e0c push 9 */
  push32((uint32_t)(0x9u));
  /* 113d4e0e call 0x113d77d0 */
  push32(0x113d4e13u); f_113d77d0();
  /* 113d4e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4e16 pop edi */
  EDI = (pop32());
  /* 113d4e17 pop esi */
  ESI = (pop32());
  /* 113d4e18 pop ebx */
  EBX = (pop32());
  /* 113d4e19 mov esp, ebp */
  ESP = (EBP);
  /* 113d4e1b pop ebp */
  EBP = (pop32());
  /* 113d4e1c ret  */
  ESPCHK(0x113d4d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e20 @ 0x113d4e20 (28 bytes, 11 insns) */
void f_113d4e20(void) {
  FTRACE(0x113d4e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4e20 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4e21 mov ebp, esp */
  EBP = (ESP);
  /* 113d4e23 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4e24 mov eax, dword ptr [0x113fdc90] */
  EAX = (r32((uint32_t)(0x113fdc90)));
  /* 113d4e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d4e2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4e2f mov dword ptr [0x113fdc90], ecx */
  w32((uint32_t)(0x113fdc90), (ECX));
  /* 113d4e35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4e38 mov esp, ebp */
  ESP = (EBP);
  /* 113d4e3a pop ebp */
  EBP = (pop32());
  /* 113d4e3b ret  */
  ESPCHK(0x113d4e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x113d4e40 (136 bytes, 55 insns) */
void f_113d4e40(void) {
  FTRACE(0x113d4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4e41 mov ebp, esp */
  EBP = (ESP);
  /* 113d4e43 push ecx */
  push32((uint32_t)(ECX));
  /* 113d4e44 push ebx */
  push32((uint32_t)(EBX));
  /* 113d4e45 push esi */
  push32((uint32_t)(ESI));
  /* 113d4e46 push edi */
  push32((uint32_t)(EDI));
  /* 113d4e47 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_113d4e4e:;
  /* 113d4e4e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d4e51 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d4e54 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4e57 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113d4e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4e5c je 0x113d4ebe */
  if (C.zf) goto L_113d4ebe;
  /* 113d4e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4e61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4e63 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113d4e65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4e68 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d4e6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4e71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4e74 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113d4e77 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4e79 je 0x113d4ebc */
  if (C.zf) goto L_113d4ebc;
L_113d4e7b:;
  /* 113d4e7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d4e7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d4e83 push eax */
  push32((uint32_t)(EAX));
  /* 113d4e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4e87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d4e89 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 113d4e8c push edx */
  push32((uint32_t)(EDX));
  /* 113d4e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d4e90 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4e93 push eax */
  push32((uint32_t)(EAX));
  /* 113d4e94 push 0x113fa838 */
  push32((uint32_t)(0x113fa838u));
  /* 113d4e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4ea1 call 0x113d2df0 */
  push32(0x113d4ea6u); f_113d2df0();
  /* 113d4ea6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4eac jne 0x113d4eaf */
  if (!C.zf) goto L_113d4eaf;
  /* 113d4eae int3  */
  x86_unimpl("int3 @ 0x113d4eae");
L_113d4eaf:;
  /* 113d4eaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4eb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4eb3 jne 0x113d4e7b */
  if (!C.zf) goto L_113d4e7b;
  /* 113d4eb5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113d4ebc:;
  /* 113d4ebc jmp 0x113d4e4e */
  goto L_113d4e4e;
L_113d4ebe:;
  /* 113d4ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d4ec1 pop edi */
  EDI = (pop32());
  /* 113d4ec2 pop esi */
  ESI = (pop32());
  /* 113d4ec3 pop ebx */
  EBX = (pop32());
  /* 113d4ec4 mov esp, ebp */
  ESP = (EBP);
  /* 113d4ec6 pop ebp */
  EBP = (pop32());
  /* 113d4ec7 ret  */
  ESPCHK(0x113d4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x113d4ed0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_113d4ed0(void) {
  FTRACE(0x113d4ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d4ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d4ed1 mov ebp, esp */
  EBP = (ESP);
  /* 113d4ed3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d4ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 113d4ed7 push esi */
  push32((uint32_t)(ESI));
  /* 113d4ed8 push edi */
  push32((uint32_t)(EDI));
  /* 113d4ed9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113d4ee0 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d4ee5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113d4ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4eea jne 0x113d4ef6 */
  if (!C.zf) goto L_113d4ef6;
  /* 113d4eec mov eax, 1 */
  EAX = (0x1u);
  /* 113d4ef1 jmp 0x113d5228 */
  goto L_113d5228;
L_113d4ef6:;
  /* 113d4ef6 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d4ef8 call 0x113d7730 */
  push32(0x113d4efdu); f_113d7730();
  /* 113d4efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4f00 call 0x113d7f10 */
  push32(0x113d4f05u); f_113d7f10();
  /* 113d4f05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d4f08 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4f0c je 0x113d5019 */
  if (C.zf) goto L_113d5019;
  /* 113d4f12 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4f16 je 0x113d5019 */
  if (C.zf) goto L_113d5019;
  /* 113d4f1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d4f1f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113d4f22 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d4f25 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4f28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113d4f2b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4f2f ja 0x113d4fe2 */
  if ((!C.cf&&!C.zf)) goto L_113d4fe2;
  /* 113d4f35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d4f38 jmp dword ptr [eax*4 + 0x113d522f] */
  switch (EAX) {
    case 0: goto L_113d4fba;
    case 1: goto L_113d4f92;
    case 2: goto L_113d4f6a;
    case 3: goto L_113d4f3f;
    default: x86_unimpl("switch@0x113d4f38 out of table"); return;
  }
L_113d4f3f:;
  /* 113d4f3f push 0x113fa98c */
  push32((uint32_t)(0x113fa98cu));
  /* 113d4f44 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d4f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f51 call 0x113d2df0 */
  push32(0x113d4f56u); f_113d2df0();
  /* 113d4f56 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4f59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4f5c jne 0x113d4f5f */
  if (!C.zf) goto L_113d4f5f;
  /* 113d4f5e int3  */
  x86_unimpl("int3 @ 0x113d4f5e");
L_113d4f5f:;
  /* 113d4f5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4f61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4f63 jne 0x113d4f3f */
  if (!C.zf) goto L_113d4f3f;
  /* 113d4f65 jmp 0x113d5008 */
  goto L_113d5008;
L_113d4f6a:;
  /* 113d4f6a push 0x113fa968 */
  push32((uint32_t)(0x113fa968u));
  /* 113d4f6f push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d4f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f7c call 0x113d2df0 */
  push32(0x113d4f81u); f_113d2df0();
  /* 113d4f81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4f84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4f87 jne 0x113d4f8a */
  if (!C.zf) goto L_113d4f8a;
  /* 113d4f89 int3  */
  x86_unimpl("int3 @ 0x113d4f89");
L_113d4f8a:;
  /* 113d4f8a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d4f8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d4f8e jne 0x113d4f6a */
  if (!C.zf) goto L_113d4f6a;
  /* 113d4f90 jmp 0x113d5008 */
  goto L_113d5008;
L_113d4f92:;
  /* 113d4f92 push 0x113fa944 */
  push32((uint32_t)(0x113fa944u));
  /* 113d4f97 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d4f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fa4 call 0x113d2df0 */
  push32(0x113d4fa9u); f_113d2df0();
  /* 113d4fa9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4fac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4faf jne 0x113d4fb2 */
  if (!C.zf) goto L_113d4fb2;
  /* 113d4fb1 int3  */
  x86_unimpl("int3 @ 0x113d4fb1");
L_113d4fb2:;
  /* 113d4fb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d4fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d4fb6 jne 0x113d4f92 */
  if (!C.zf) goto L_113d4f92;
  /* 113d4fb8 jmp 0x113d5008 */
  goto L_113d5008;
L_113d4fba:;
  /* 113d4fba push 0x113fa920 */
  push32((uint32_t)(0x113fa920u));
  /* 113d4fbf push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d4fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fca push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fcc call 0x113d2df0 */
  push32(0x113d4fd1u); f_113d2df0();
  /* 113d4fd1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4fd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4fd7 jne 0x113d4fda */
  if (!C.zf) goto L_113d4fda;
  /* 113d4fd9 int3  */
  x86_unimpl("int3 @ 0x113d4fd9");
L_113d4fda:;
  /* 113d4fda xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d4fdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d4fde jne 0x113d4fba */
  if (!C.zf) goto L_113d4fba;
  /* 113d4fe0 jmp 0x113d5008 */
  goto L_113d5008;
L_113d4fe2:;
  /* 113d4fe2 push 0x113fa8f4 */
  push32((uint32_t)(0x113fa8f4u));
  /* 113d4fe7 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d4fec push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4fee push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d4ff4 call 0x113d2df0 */
  push32(0x113d4ff9u); f_113d2df0();
  /* 113d4ff9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d4ffc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d4fff jne 0x113d5002 */
  if (!C.zf) goto L_113d5002;
  /* 113d5001 int3  */
  x86_unimpl("int3 @ 0x113d5001");
L_113d5002:;
  /* 113d5002 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d5004 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d5006 jne 0x113d4fe2 */
  if (!C.zf) goto L_113d4fe2;
L_113d5008:;
  /* 113d5008 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d500a call 0x113d77d0 */
  push32(0x113d500fu); f_113d77d0();
  /* 113d500f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5014 jmp 0x113d5228 */
  goto L_113d5228;
L_113d5019:;
  /* 113d5019 mov eax, dword ptr [0x113ff564] */
  EAX = (r32((uint32_t)(0x113ff564)));
  /* 113d501e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d5021 jmp 0x113d502b */
  goto L_113d502b;
L_113d5023:;
  /* 113d5023 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5026 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d5028 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113d502b:;
  /* 113d502b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d502f je 0x113d521b */
  if (C.zf) goto L_113d521b;
  /* 113d5035 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 113d503c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d503f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113d5042 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d5048 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d504b je 0x113d5070 */
  if (C.zf) goto L_113d5070;
  /* 113d504d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5050 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5054 je 0x113d5070 */
  if (C.zf) goto L_113d5070;
  /* 113d5056 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5059 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113d505c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d5062 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5065 je 0x113d5070 */
  if (C.zf) goto L_113d5070;
  /* 113d5067 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d506a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d506e jne 0x113d5088 */
  if (!C.zf) goto L_113d5088;
L_113d5070:;
  /* 113d5070 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5073 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113d5076 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d507c mov edx, dword ptr [ecx*4 + 0x113fda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda94)));
  /* 113d5083 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113d5086 jmp 0x113d508f */
  goto L_113d508f;
L_113d5088:;
  /* 113d5088 mov dword ptr [ebp - 0x14], 0x113fa8ec */
  w32((uint32_t)(EBP + -0x14), (0x113fa8ecu));
L_113d508f:;
  /* 113d508f push 4 */
  push32((uint32_t)(0x4u));
  /* 113d5091 mov al, byte ptr [0x113fda90] */
  AL = (r8((uint32_t)(0x113fda90)));
  /* 113d5096 push eax */
  push32((uint32_t)(EAX));
  /* 113d5097 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d509a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d509d push ecx */
  push32((uint32_t)(ECX));
  /* 113d509e call 0x113d4e40 */
  push32(0x113d50a3u); f_113d4e40();
  /* 113d50a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d50a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d50a8 jne 0x113d50e4 */
  if (!C.zf) goto L_113d50e4;
L_113d50aa:;
  /* 113d50aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d50ad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d50b0 push edx */
  push32((uint32_t)(EDX));
  /* 113d50b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d50b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113d50b7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d50b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d50bb push edx */
  push32((uint32_t)(EDX));
  /* 113d50bc push 0x113fa7c8 */
  push32((uint32_t)(0x113fa7c8u));
  /* 113d50c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d50c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d50c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d50c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d50c9 call 0x113d2df0 */
  push32(0x113d50ceu); f_113d2df0();
  /* 113d50ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d50d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d50d4 jne 0x113d50d7 */
  if (!C.zf) goto L_113d50d7;
  /* 113d50d6 int3  */
  x86_unimpl("int3 @ 0x113d50d6");
L_113d50d7:;
  /* 113d50d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d50d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d50db jne 0x113d50aa */
  if (!C.zf) goto L_113d50aa;
  /* 113d50dd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113d50e4:;
  /* 113d50e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 113d50e6 mov cl, byte ptr [0x113fda90] */
  CL = (r8((uint32_t)(0x113fda90)));
  /* 113d50ec push ecx */
  push32((uint32_t)(ECX));
  /* 113d50ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d50f0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d50f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d50f6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 113d50fa push edx */
  push32((uint32_t)(EDX));
  /* 113d50fb call 0x113d4e40 */
  push32(0x113d5100u); f_113d4e40();
  /* 113d5100 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5103 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5105 jne 0x113d5141 */
  if (!C.zf) goto L_113d5141;
L_113d5107:;
  /* 113d5107 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d510a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d510d push eax */
  push32((uint32_t)(EAX));
  /* 113d510e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5111 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113d5114 push edx */
  push32((uint32_t)(EDX));
  /* 113d5115 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d5118 push eax */
  push32((uint32_t)(EAX));
  /* 113d5119 push 0x113fa79c */
  push32((uint32_t)(0x113fa79cu));
  /* 113d511e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5120 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5122 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5124 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5126 call 0x113d2df0 */
  push32(0x113d512bu); f_113d2df0();
  /* 113d512b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d512e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5131 jne 0x113d5134 */
  if (!C.zf) goto L_113d5134;
  /* 113d5133 int3  */
  x86_unimpl("int3 @ 0x113d5133");
L_113d5134:;
  /* 113d5134 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d5136 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d5138 jne 0x113d5107 */
  if (!C.zf) goto L_113d5107;
  /* 113d513a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113d5141:;
  /* 113d5141 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5144 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5148 jne 0x113d519a */
  if (!C.zf) goto L_113d519a;
  /* 113d514a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d514d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d5150 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5151 mov dl, byte ptr [0x113fda91] */
  DL = (r8((uint32_t)(0x113fda91)));
  /* 113d5157 push edx */
  push32((uint32_t)(EDX));
  /* 113d5158 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d515b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d515e push eax */
  push32((uint32_t)(EAX));
  /* 113d515f call 0x113d4e40 */
  push32(0x113d5164u); f_113d4e40();
  /* 113d5164 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5167 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5169 jne 0x113d519a */
  if (!C.zf) goto L_113d519a;
L_113d516b:;
  /* 113d516b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d516e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5171 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5172 push 0x113fa8c0 */
  push32((uint32_t)(0x113fa8c0u));
  /* 113d5177 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5179 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d517b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d517d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d517f call 0x113d2df0 */
  push32(0x113d5184u); f_113d2df0();
  /* 113d5184 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5187 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d518a jne 0x113d518d */
  if (!C.zf) goto L_113d518d;
  /* 113d518c int3  */
  x86_unimpl("int3 @ 0x113d518c");
L_113d518d:;
  /* 113d518d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d518f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d5191 jne 0x113d516b */
  if (!C.zf) goto L_113d516b;
  /* 113d5193 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113d519a:;
  /* 113d519a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d519e jne 0x113d5216 */
  if (!C.zf) goto L_113d5216;
  /* 113d51a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d51a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d51a7 je 0x113d51dc */
  if (C.zf) goto L_113d51dc;
L_113d51a9:;
  /* 113d51a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d51ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113d51af push edx */
  push32((uint32_t)(EDX));
  /* 113d51b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d51b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d51b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113d51b7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d51ba push edx */
  push32((uint32_t)(EDX));
  /* 113d51bb push 0x113fa8a0 */
  push32((uint32_t)(0x113fa8a0u));
  /* 113d51c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51c8 call 0x113d2df0 */
  push32(0x113d51cdu); f_113d2df0();
  /* 113d51cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d51d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d51d3 jne 0x113d51d6 */
  if (!C.zf) goto L_113d51d6;
  /* 113d51d5 int3  */
  x86_unimpl("int3 @ 0x113d51d5");
L_113d51d6:;
  /* 113d51d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d51d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d51da jne 0x113d51a9 */
  if (!C.zf) goto L_113d51a9;
L_113d51dc:;
  /* 113d51dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d51df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113d51e2 push edx */
  push32((uint32_t)(EDX));
  /* 113d51e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d51e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d51e9 push eax */
  push32((uint32_t)(EAX));
  /* 113d51ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d51ed push ecx */
  push32((uint32_t)(ECX));
  /* 113d51ee push 0x113fa874 */
  push32((uint32_t)(0x113fa874u));
  /* 113d51f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d51fb call 0x113d2df0 */
  push32(0x113d5200u); f_113d2df0();
  /* 113d5200 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5203 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5206 jne 0x113d5209 */
  if (!C.zf) goto L_113d5209;
  /* 113d5208 int3  */
  x86_unimpl("int3 @ 0x113d5208");
L_113d5209:;
  /* 113d5209 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d520b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d520d jne 0x113d51dc */
  if (!C.zf) goto L_113d51dc;
  /* 113d520f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113d5216:;
  /* 113d5216 jmp 0x113d5023 */
  goto L_113d5023;
L_113d521b:;
  /* 113d521b push 9 */
  push32((uint32_t)(0x9u));
  /* 113d521d call 0x113d77d0 */
  push32(0x113d5222u); f_113d77d0();
  /* 113d5222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113d5228:;
  /* 113d5228 pop edi */
  EDI = (pop32());
  /* 113d5229 pop esi */
  ESI = (pop32());
  /* 113d522a pop ebx */
  EBX = (pop32());
  /* 113d522b mov esp, ebp */
  ESP = (EBP);
  /* 113d522d pop ebp */
  EBP = (pop32());
  /* 113d522e ret  */
  ESPCHK(0x113d4ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x113d5240 (34 bytes, 13 insns) */
void f_113d5240(void) {
  FTRACE(0x113d5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5240 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5241 mov ebp, esp */
  EBP = (ESP);
  /* 113d5243 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5244 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d5249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d524c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5250 je 0x113d525b */
  if (C.zf) goto L_113d525b;
  /* 113d5252 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5255 mov dword ptr [0x113fda84], ecx */
  w32((uint32_t)(0x113fda84), (ECX));
L_113d525b:;
  /* 113d525b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d525e mov esp, ebp */
  ESP = (EBP);
  /* 113d5260 pop ebp */
  EBP = (pop32());
  /* 113d5261 ret  */
  ESPCHK(0x113d5240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x113d5270 (103 bytes, 38 insns) */
void f_113d5270(void) {
  FTRACE(0x113d5270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5270 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5271 mov ebp, esp */
  EBP = (ESP);
  /* 113d5273 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5274 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d5279 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113d527c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d527e jne 0x113d5282 */
  if (!C.zf) goto L_113d5282;
  /* 113d5280 jmp 0x113d52d3 */
  goto L_113d52d3;
L_113d5282:;
  /* 113d5282 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d5284 call 0x113d7730 */
  push32(0x113d5289u); f_113d7730();
  /* 113d5289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d528c mov ecx, dword ptr [0x113ff564] */
  ECX = (r32((uint32_t)(0x113ff564)));
  /* 113d5292 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d5295 jmp 0x113d529f */
  goto L_113d529f;
L_113d5297:;
  /* 113d5297 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d529a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d529c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d529f:;
  /* 113d529f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d52a3 je 0x113d52c9 */
  if (C.zf) goto L_113d52c9;
  /* 113d52a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d52a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113d52ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d52b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d52b4 jne 0x113d52c7 */
  if (!C.zf) goto L_113d52c7;
  /* 113d52b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d52b9 push eax */
  push32((uint32_t)(EAX));
  /* 113d52ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d52bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d52c0 push ecx */
  push32((uint32_t)(ECX));
  /* 113d52c1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x113d52c4u);
  /* 113d52c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d52c7:;
  /* 113d52c7 jmp 0x113d5297 */
  goto L_113d5297;
L_113d52c9:;
  /* 113d52c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d52cb call 0x113d77d0 */
  push32(0x113d52d0u); f_113d77d0();
  /* 113d52d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d52d3:;
  /* 113d52d3 mov esp, ebp */
  ESP = (EBP);
  /* 113d52d5 pop ebp */
  EBP = (pop32());
  /* 113d52d6 ret  */
  ESPCHK(0x113d5270u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x113d52e0 (75 bytes, 28 insns) */
void f_113d52e0(void) {
  FTRACE(0x113d52e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d52e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d52e1 mov ebp, esp */
  EBP = (ESP);
  /* 113d52e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d52e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d52e8 je 0x113d531d */
  if (C.zf) goto L_113d531d;
  /* 113d52ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d52ed push eax */
  push32((uint32_t)(EAX));
  /* 113d52ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d52f1 push ecx */
  push32((uint32_t)(ECX));
  /* 113d52f2 call dword ptr [0x114023ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023ac))), 0x113d52f8u);
  /* 113d52f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d52fa jne 0x113d531d */
  if (!C.zf) goto L_113d531d;
  /* 113d52fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5300 je 0x113d5314 */
  if (C.zf) goto L_113d5314;
  /* 113d5302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d5305 push edx */
  push32((uint32_t)(EDX));
  /* 113d5306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5309 push eax */
  push32((uint32_t)(EAX));
  /* 113d530a call dword ptr [0x114023a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023a8))), 0x113d5310u);
  /* 113d5310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5312 jne 0x113d531d */
  if (!C.zf) goto L_113d531d;
L_113d5314:;
  /* 113d5314 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113d531b jmp 0x113d5324 */
  goto L_113d5324;
L_113d531d:;
  /* 113d531d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113d5324:;
  /* 113d5324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5327 mov esp, ebp */
  ESP = (EBP);
  /* 113d5329 pop ebp */
  EBP = (pop32());
  /* 113d532a ret  */
  ESPCHK(0x113d52e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x113d5330 (134 bytes, 50 insns) */
void f_113d5330(void) {
  FTRACE(0x113d5330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5330 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5331 mov ebp, esp */
  EBP = (ESP);
  /* 113d5333 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5334 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5338 jne 0x113d533e */
  if (!C.zf) goto L_113d533e;
  /* 113d533a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d533c jmp 0x113d53b2 */
  goto L_113d53b2;
L_113d533e:;
  /* 113d533e push 1 */
  push32((uint32_t)(0x1u));
  /* 113d5340 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113d5342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5345 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5348 push eax */
  push32((uint32_t)(EAX));
  /* 113d5349 call 0x113d52e0 */
  push32(0x113d534eu); f_113d52e0();
  /* 113d534e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5353 jne 0x113d5359 */
  if (!C.zf) goto L_113d5359;
  /* 113d5355 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5357 jmp 0x113d53b2 */
  goto L_113d53b2;
L_113d5359:;
  /* 113d5359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d535c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d535f push ecx */
  push32((uint32_t)(ECX));
  /* 113d5360 call 0x113d8030 */
  push32(0x113d5365u); f_113d8030();
  /* 113d5365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d536b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d536f je 0x113d5386 */
  if (C.zf) goto L_113d5386;
  /* 113d5371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5374 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5377 push edx */
  push32((uint32_t)(EDX));
  /* 113d5378 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d537b push eax */
  push32((uint32_t)(EAX));
  /* 113d537c call 0x113d8090 */
  push32(0x113d5381u); f_113d8090();
  /* 113d5381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5384 jmp 0x113d53b2 */
  goto L_113d53b2;
L_113d5386:;
  /* 113d5386 mov ecx, dword ptr [0x113ff518] */
  ECX = (r32((uint32_t)(0x113ff518)));
  /* 113d538c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 113d5392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d5394 je 0x113d539d */
  if (C.zf) goto L_113d539d;
  /* 113d5396 mov eax, 1 */
  EAX = (0x1u);
  /* 113d539b jmp 0x113d53b2 */
  goto L_113d53b2;
L_113d539d:;
  /* 113d539d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d53a0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d53a3 push edx */
  push32((uint32_t)(EDX));
  /* 113d53a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d53a6 mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d53ab push eax */
  push32((uint32_t)(EAX));
  /* 113d53ac call dword ptr [0x114023b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b0))), 0x113d53b2u);
L_113d53b2:;
  /* 113d53b2 mov esp, ebp */
  ESP = (EBP);
  /* 113d53b4 pop ebp */
  EBP = (pop32());
  /* 113d53b5 ret  */
  ESPCHK(0x113d5330u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x113d53c0 (227 bytes, 80 insns) */
void f_113d53c0(void) {
  FTRACE(0x113d53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d53c1 mov ebp, esp */
  EBP = (ESP);
  /* 113d53c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d53c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d53c7 push eax */
  push32((uint32_t)(EAX));
  /* 113d53c8 call 0x113d5330 */
  push32(0x113d53cdu); f_113d5330();
  /* 113d53cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d53d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d53d2 jne 0x113d53db */
  if (!C.zf) goto L_113d53db;
  /* 113d53d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d53d6 jmp 0x113d549f */
  goto L_113d549f;
L_113d53db:;
  /* 113d53db push 9 */
  push32((uint32_t)(0x9u));
  /* 113d53dd call 0x113d7730 */
  push32(0x113d53e2u); f_113d7730();
  /* 113d53e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d53e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d53e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d53eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d53ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d53f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d53f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d53f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d53fc je 0x113d5420 */
  if (C.zf) goto L_113d5420;
  /* 113d53fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5401 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5405 je 0x113d5420 */
  if (C.zf) goto L_113d5420;
  /* 113d5407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d540a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d540d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d5412 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5415 je 0x113d5420 */
  if (C.zf) goto L_113d5420;
  /* 113d5417 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d541a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d541e jne 0x113d5493 */
  if (!C.zf) goto L_113d5493;
L_113d5420:;
  /* 113d5420 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d5422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d5425 push edx */
  push32((uint32_t)(EDX));
  /* 113d5426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5429 push eax */
  push32((uint32_t)(EAX));
  /* 113d542a call 0x113d52e0 */
  push32(0x113d542fu); f_113d52e0();
  /* 113d542f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5434 je 0x113d5493 */
  if (C.zf) goto L_113d5493;
  /* 113d5436 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5439 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113d543c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d543f jne 0x113d5493 */
  if (!C.zf) goto L_113d5493;
  /* 113d5441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5444 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113d5447 cmp ecx, dword ptr [0x113fda88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113fda88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d544d jg 0x113d5493 */
  if ((!C.zf&&C.sf==C.of)) goto L_113d5493;
  /* 113d544f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5453 je 0x113d5460 */
  if (C.zf) goto L_113d5460;
  /* 113d5455 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d545b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113d545e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d5460:;
  /* 113d5460 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5464 je 0x113d5471 */
  if (C.zf) goto L_113d5471;
  /* 113d5466 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d5469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d546c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d546f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d5471:;
  /* 113d5471 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5475 je 0x113d5482 */
  if (C.zf) goto L_113d5482;
  /* 113d5477 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d547d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113d5480 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d5482:;
  /* 113d5482 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d5484 call 0x113d77d0 */
  push32(0x113d5489u); f_113d77d0();
  /* 113d5489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d548c mov eax, 1 */
  EAX = (0x1u);
  /* 113d5491 jmp 0x113d549f */
  goto L_113d549f;
L_113d5493:;
  /* 113d5493 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d5495 call 0x113d77d0 */
  push32(0x113d549au); f_113d77d0();
  /* 113d549a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d549d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d549f:;
  /* 113d549f mov esp, ebp */
  ESP = (EBP);
  /* 113d54a1 pop ebp */
  EBP = (pop32());
  /* 113d54a2 ret  */
  ESPCHK(0x113d53c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x113d54b0 (28 bytes, 11 insns) */
void f_113d54b0(void) {
  FTRACE(0x113d54b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d54b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d54b1 mov ebp, esp */
  EBP = (ESP);
  /* 113d54b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d54b4 mov eax, dword ptr [0x11400ed8] */
  EAX = (r32((uint32_t)(0x11400ed8)));
  /* 113d54b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d54bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d54bf mov dword ptr [0x11400ed8], ecx */
  w32((uint32_t)(0x11400ed8), (ECX));
  /* 113d54c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d54c8 mov esp, ebp */
  ESP = (EBP);
  /* 113d54ca pop ebp */
  EBP = (pop32());
  /* 113d54cb ret  */
  ESPCHK(0x113d54b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x113d54d0 (362 bytes, 116 insns) */
void f_113d54d0(void) {
  FTRACE(0x113d54d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d54d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d54d1 mov ebp, esp */
  EBP = (ESP);
  /* 113d54d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d54d6 push ebx */
  push32((uint32_t)(EBX));
  /* 113d54d7 push esi */
  push32((uint32_t)(ESI));
  /* 113d54d8 push edi */
  push32((uint32_t)(EDI));
  /* 113d54d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d54dd jne 0x113d550a */
  if (!C.zf) goto L_113d550a;
L_113d54df:;
  /* 113d54df push 0x113fa9d4 */
  push32((uint32_t)(0x113fa9d4u));
  /* 113d54e4 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d54e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d54eb push 0 */
  push32((uint32_t)(0x0u));
  /* 113d54ed push 0 */
  push32((uint32_t)(0x0u));
  /* 113d54ef push 0 */
  push32((uint32_t)(0x0u));
  /* 113d54f1 call 0x113d2df0 */
  push32(0x113d54f6u); f_113d2df0();
  /* 113d54f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d54f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d54fc jne 0x113d54ff */
  if (!C.zf) goto L_113d54ff;
  /* 113d54fe int3  */
  x86_unimpl("int3 @ 0x113d54fe");
L_113d54ff:;
  /* 113d54ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5503 jne 0x113d54df */
  if (!C.zf) goto L_113d54df;
  /* 113d5505 jmp 0x113d5633 */
  goto L_113d5633;
L_113d550a:;
  /* 113d550a push 9 */
  push32((uint32_t)(0x9u));
  /* 113d550c call 0x113d7730 */
  push32(0x113d5511u); f_113d7730();
  /* 113d5511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5514 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5517 mov edx, dword ptr [0x113ff564] */
  EDX = (r32((uint32_t)(0x113ff564)));
  /* 113d551d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113d551f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d5526 jmp 0x113d5531 */
  goto L_113d5531;
L_113d5528:;
  /* 113d5528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d552b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d552e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d5531:;
  /* 113d5531 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5535 jge 0x113d5555 */
  if ((C.sf==C.of)) goto L_113d5555;
  /* 113d5537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d553a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d553d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 113d5545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d554b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 113d5553 jmp 0x113d5528 */
  goto L_113d5528;
L_113d5555:;
  /* 113d5555 mov edx, dword ptr [0x113ff564] */
  EDX = (r32((uint32_t)(0x113ff564)));
  /* 113d555b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113d555e jmp 0x113d5568 */
  goto L_113d5568;
L_113d5560:;
  /* 113d5560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5563 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d5565 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113d5568:;
  /* 113d5568 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d556c je 0x113d5611 */
  if (C.zf) goto L_113d5611;
  /* 113d5572 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5575 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d5578 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d557d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d557f jl 0x113d55e7 */
  if ((C.sf!=C.of)) goto L_113d55e7;
  /* 113d5581 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5584 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113d5587 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d558d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5590 jge 0x113d55e7 */
  if ((C.sf==C.of)) goto L_113d55e7;
  /* 113d5592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5595 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113d5598 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d559e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d55a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 113d55a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d55a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d55ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113d55ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d55b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d55b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 113d55bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d55be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d55c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d55c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d55c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 113d55cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d55d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d55d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d55d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 113d55d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d55de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d55e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 113d55e5 jmp 0x113d560c */
  goto L_113d560c;
L_113d55e7:;
  /* 113d55e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d55ea push edx */
  push32((uint32_t)(EDX));
  /* 113d55eb push 0x113fa9b0 */
  push32((uint32_t)(0x113fa9b0u));
  /* 113d55f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d55f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d55f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d55f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d55f8 call 0x113d2df0 */
  push32(0x113d55fdu); f_113d2df0();
  /* 113d55fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5600 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5603 jne 0x113d5606 */
  if (!C.zf) goto L_113d5606;
  /* 113d5605 int3  */
  x86_unimpl("int3 @ 0x113d5605");
L_113d5606:;
  /* 113d5606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d560a jne 0x113d55e7 */
  if (!C.zf) goto L_113d55e7;
L_113d560c:;
  /* 113d560c jmp 0x113d5560 */
  goto L_113d5560;
L_113d5611:;
  /* 113d5611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5614 mov edx, dword ptr [0x113ff56c] */
  EDX = (r32((uint32_t)(0x113ff56c)));
  /* 113d561a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 113d561d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5620 mov ecx, dword ptr [0x113ff560] */
  ECX = (r32((uint32_t)(0x113ff560)));
  /* 113d5626 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 113d5629 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d562b call 0x113d77d0 */
  push32(0x113d5630u); f_113d77d0();
  /* 113d5630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d5633:;
  /* 113d5633 pop edi */
  EDI = (pop32());
  /* 113d5634 pop esi */
  ESI = (pop32());
  /* 113d5635 pop ebx */
  EBX = (pop32());
  /* 113d5636 mov esp, ebp */
  ESP = (EBP);
  /* 113d5638 pop ebp */
  EBP = (pop32());
  /* 113d5639 ret  */
  ESPCHK(0x113d54d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005640 @ 0x113d5640 (291 bytes, 95 insns) */
void f_113d5640(void) {
  FTRACE(0x113d5640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5640 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5641 mov ebp, esp */
  EBP = (ESP);
  /* 113d5643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5646 push ebx */
  push32((uint32_t)(EBX));
  /* 113d5647 push esi */
  push32((uint32_t)(ESI));
  /* 113d5648 push edi */
  push32((uint32_t)(EDI));
  /* 113d5649 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113d5650 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5654 je 0x113d5662 */
  if (C.zf) goto L_113d5662;
  /* 113d5656 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d565a je 0x113d5662 */
  if (C.zf) goto L_113d5662;
  /* 113d565c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5660 jne 0x113d5690 */
  if (!C.zf) goto L_113d5690;
L_113d5662:;
  /* 113d5662 push 0x113fa9fc */
  push32((uint32_t)(0x113fa9fcu));
  /* 113d5667 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d566c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d566e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5670 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5672 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5674 call 0x113d2df0 */
  push32(0x113d5679u); f_113d2df0();
  /* 113d5679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d567c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d567f jne 0x113d5682 */
  if (!C.zf) goto L_113d5682;
  /* 113d5681 int3  */
  x86_unimpl("int3 @ 0x113d5681");
L_113d5682:;
  /* 113d5682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5686 jne 0x113d5662 */
  if (!C.zf) goto L_113d5662;
  /* 113d5688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d568b jmp 0x113d575c */
  goto L_113d575c;
L_113d5690:;
  /* 113d5690 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d5697 jmp 0x113d56a2 */
  goto L_113d56a2;
L_113d5699:;
  /* 113d5699 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d569c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d569f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d56a2:;
  /* 113d56a2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d56a6 jge 0x113d572c */
  if ((C.sf==C.of)) goto L_113d572c;
  /* 113d56ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d56b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113d56b8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 113d56bc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d56c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d56c6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 113d56ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d56d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56d3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113d56d6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 113d56da sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d56de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d56e4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 113d56e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d56ee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d56f3 jne 0x113d5702 */
  if (!C.zf) goto L_113d5702;
  /* 113d56f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d56f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d56fb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5700 je 0x113d5727 */
  if (C.zf) goto L_113d5727;
L_113d5702:;
  /* 113d5702 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5706 je 0x113d5727 */
  if (C.zf) goto L_113d5727;
  /* 113d5708 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d570c jne 0x113d5720 */
  if (!C.zf) goto L_113d5720;
  /* 113d570e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5712 jne 0x113d5727 */
  if (!C.zf) goto L_113d5727;
  /* 113d5714 mov eax, dword ptr [0x113fda84] */
  EAX = (r32((uint32_t)(0x113fda84)));
  /* 113d5719 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 113d571c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d571e je 0x113d5727 */
  if (C.zf) goto L_113d5727;
L_113d5720:;
  /* 113d5720 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_113d5727:;
  /* 113d5727 jmp 0x113d5699 */
  goto L_113d5699;
L_113d572c:;
  /* 113d572c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d572f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d5732 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 113d5735 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5738 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d573b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 113d573e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5741 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d5744 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 113d5747 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d574a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d574d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 113d5750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5753 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113d5759 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113d575c:;
  /* 113d575c pop edi */
  EDI = (pop32());
  /* 113d575d pop esi */
  ESI = (pop32());
  /* 113d575e pop ebx */
  EBX = (pop32());
  /* 113d575f mov esp, ebp */
  ESP = (EBP);
  /* 113d5761 pop ebp */
  EBP = (pop32());
  /* 113d5762 ret  */
  ESPCHK(0x113d5640u, _esp0);
  ESP += 4; return;
}

/* FUN_10005770 @ 0x113d5770 (697 bytes, 253 insns) */
void f_113d5770(void) {
  FTRACE(0x113d5770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5770 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5771 mov ebp, esp */
  EBP = (ESP);
  /* 113d5773 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5776 push ebx */
  push32((uint32_t)(EBX));
  /* 113d5777 push esi */
  push32((uint32_t)(ESI));
  /* 113d5778 push edi */
  push32((uint32_t)(EDI));
  /* 113d5779 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113d5780 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d5782 call 0x113d7730 */
  push32(0x113d5787u); f_113d7730();
  /* 113d5787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d578a:;
  /* 113d578a push 0x113faaf4 */
  push32((uint32_t)(0x113faaf4u));
  /* 113d578f push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d5794 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5796 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5798 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d579a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d579c call 0x113d2df0 */
  push32(0x113d57a1u); f_113d2df0();
  /* 113d57a1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d57a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d57a7 jne 0x113d57aa */
  if (!C.zf) goto L_113d57aa;
  /* 113d57a9 int3  */
  x86_unimpl("int3 @ 0x113d57a9");
L_113d57aa:;
  /* 113d57aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d57ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d57ae jne 0x113d578a */
  if (!C.zf) goto L_113d578a;
  /* 113d57b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d57b4 je 0x113d57be */
  if (C.zf) goto L_113d57be;
  /* 113d57b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d57b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d57bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113d57be:;
  /* 113d57be mov eax, dword ptr [0x113ff564] */
  EAX = (r32((uint32_t)(0x113ff564)));
  /* 113d57c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d57c6 jmp 0x113d57d0 */
  goto L_113d57d0;
L_113d57c8:;
  /* 113d57c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d57cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d57cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d57d0:;
  /* 113d57d0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d57d4 je 0x113d59f2 */
  if (C.zf) goto L_113d59f2;
  /* 113d57da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d57dd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d57e0 je 0x113d59f2 */
  if (C.zf) goto L_113d59f2;
  /* 113d57e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d57e9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113d57ec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d57f2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d57f5 je 0x113d5824 */
  if (C.zf) goto L_113d5824;
  /* 113d57f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d57fa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 113d57fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d5803 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d5805 je 0x113d5824 */
  if (C.zf) goto L_113d5824;
  /* 113d5807 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d580a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d580d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d5812 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5815 jne 0x113d5829 */
  if (!C.zf) goto L_113d5829;
  /* 113d5817 mov ecx, dword ptr [0x113fda84] */
  ECX = (r32((uint32_t)(0x113fda84)));
  /* 113d581d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 113d5820 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d5822 jne 0x113d5829 */
  if (!C.zf) goto L_113d5829;
L_113d5824:;
  /* 113d5824 jmp 0x113d59ed */
  goto L_113d59ed;
L_113d5829:;
  /* 113d5829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d582c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5830 je 0x113d58a2 */
  if (C.zf) goto L_113d58a2;
  /* 113d5832 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5834 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d5836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5839 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113d583c push ecx */
  push32((uint32_t)(ECX));
  /* 113d583d call 0x113d52e0 */
  push32(0x113d5842u); f_113d52e0();
  /* 113d5842 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5847 jne 0x113d5873 */
  if (!C.zf) goto L_113d5873;
L_113d5849:;
  /* 113d5849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d584c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113d584f push eax */
  push32((uint32_t)(EAX));
  /* 113d5850 push 0x113faae0 */
  push32((uint32_t)(0x113faae0u));
  /* 113d5855 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5857 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5859 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d585b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d585d call 0x113d2df0 */
  push32(0x113d5862u); f_113d2df0();
  /* 113d5862 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5865 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5868 jne 0x113d586b */
  if (!C.zf) goto L_113d586b;
  /* 113d586a int3  */
  x86_unimpl("int3 @ 0x113d586a");
L_113d586b:;
  /* 113d586b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d586d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d586f jne 0x113d5849 */
  if (!C.zf) goto L_113d5849;
  /* 113d5871 jmp 0x113d58a2 */
  goto L_113d58a2;
L_113d5873:;
  /* 113d5873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5876 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113d5879 push eax */
  push32((uint32_t)(EAX));
  /* 113d587a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d587d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d5880 push edx */
  push32((uint32_t)(EDX));
  /* 113d5881 push 0x113faad4 */
  push32((uint32_t)(0x113faad4u));
  /* 113d5886 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5888 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d588a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d588c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d588e call 0x113d2df0 */
  push32(0x113d5893u); f_113d2df0();
  /* 113d5893 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5896 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5899 jne 0x113d589c */
  if (!C.zf) goto L_113d589c;
  /* 113d589b int3  */
  x86_unimpl("int3 @ 0x113d589b");
L_113d589c:;
  /* 113d589c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d589e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d58a0 jne 0x113d5873 */
  if (!C.zf) goto L_113d5873;
L_113d58a2:;
  /* 113d58a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d58a5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113d58a8 push edx */
  push32((uint32_t)(EDX));
  /* 113d58a9 push 0x113faacc */
  push32((uint32_t)(0x113faaccu));
  /* 113d58ae push 0 */
  push32((uint32_t)(0x0u));
  /* 113d58b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d58b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d58b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d58b6 call 0x113d2df0 */
  push32(0x113d58bbu); f_113d2df0();
  /* 113d58bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d58be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d58c1 jne 0x113d58c4 */
  if (!C.zf) goto L_113d58c4;
  /* 113d58c3 int3  */
  x86_unimpl("int3 @ 0x113d58c3");
L_113d58c4:;
  /* 113d58c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d58c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d58c8 jne 0x113d58a2 */
  if (!C.zf) goto L_113d58a2;
  /* 113d58ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d58cd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113d58d0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d58d6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d58d9 jne 0x113d594c */
  if (!C.zf) goto L_113d594c;
L_113d58db:;
  /* 113d58db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d58de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d58e1 push ecx */
  push32((uint32_t)(ECX));
  /* 113d58e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d58e5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d58e8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113d58eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d58f0 push eax */
  push32((uint32_t)(EAX));
  /* 113d58f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d58f4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d58f7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d58f8 push 0x113faa98 */
  push32((uint32_t)(0x113faa98u));
  /* 113d58fd push 0 */
  push32((uint32_t)(0x0u));
  /* 113d58ff push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5901 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5903 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5905 call 0x113d2df0 */
  push32(0x113d590au); f_113d2df0();
  /* 113d590a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d590d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5910 jne 0x113d5913 */
  if (!C.zf) goto L_113d5913;
  /* 113d5912 int3  */
  x86_unimpl("int3 @ 0x113d5912");
L_113d5913:;
  /* 113d5913 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d5915 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d5917 jne 0x113d58db */
  if (!C.zf) goto L_113d58db;
  /* 113d5919 cmp dword ptr [0x11400ed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400ed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5920 je 0x113d593b */
  if (C.zf) goto L_113d593b;
  /* 113d5922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5925 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d5928 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5929 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d592c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d592f push edx */
  push32((uint32_t)(EDX));
  /* 113d5930 call dword ptr [0x11400ed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11400ed8))), 0x113d5936u);
  /* 113d5936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5939 jmp 0x113d5947 */
  goto L_113d5947;
L_113d593b:;
  /* 113d593b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d593e push eax */
  push32((uint32_t)(EAX));
  /* 113d593f call 0x113d5a30 */
  push32(0x113d5944u); f_113d5a30();
  /* 113d5944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d5947:;
  /* 113d5947 jmp 0x113d59ed */
  goto L_113d59ed;
L_113d594c:;
  /* 113d594c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d594f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5953 jne 0x113d5992 */
  if (!C.zf) goto L_113d5992;
L_113d5955:;
  /* 113d5955 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5958 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d595b push eax */
  push32((uint32_t)(EAX));
  /* 113d595c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d595f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5962 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5963 push 0x113faa70 */
  push32((uint32_t)(0x113faa70u));
  /* 113d5968 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d596a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d596c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d596e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5970 call 0x113d2df0 */
  push32(0x113d5975u); f_113d2df0();
  /* 113d5975 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5978 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d597b jne 0x113d597e */
  if (!C.zf) goto L_113d597e;
  /* 113d597d int3  */
  x86_unimpl("int3 @ 0x113d597d");
L_113d597e:;
  /* 113d597e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d5980 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d5982 jne 0x113d5955 */
  if (!C.zf) goto L_113d5955;
  /* 113d5984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5987 push eax */
  push32((uint32_t)(EAX));
  /* 113d5988 call 0x113d5a30 */
  push32(0x113d598du); f_113d5a30();
  /* 113d598d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5990 jmp 0x113d59ed */
  goto L_113d59ed;
L_113d5992:;
  /* 113d5992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5995 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 113d5998 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d599e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d59a1 jne 0x113d59ed */
  if (!C.zf) goto L_113d59ed;
L_113d59a3:;
  /* 113d59a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d59a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113d59a9 push ecx */
  push32((uint32_t)(ECX));
  /* 113d59aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d59ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113d59b0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113d59b3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d59b8 push eax */
  push32((uint32_t)(EAX));
  /* 113d59b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d59bc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d59bf push ecx */
  push32((uint32_t)(ECX));
  /* 113d59c0 push 0x113faa3c */
  push32((uint32_t)(0x113faa3cu));
  /* 113d59c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d59c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d59c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d59cb push 0 */
  push32((uint32_t)(0x0u));
  /* 113d59cd call 0x113d2df0 */
  push32(0x113d59d2u); f_113d2df0();
  /* 113d59d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d59d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d59d8 jne 0x113d59db */
  if (!C.zf) goto L_113d59db;
  /* 113d59da int3  */
  x86_unimpl("int3 @ 0x113d59da");
L_113d59db:;
  /* 113d59db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d59dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d59df jne 0x113d59a3 */
  if (!C.zf) goto L_113d59a3;
  /* 113d59e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d59e4 push eax */
  push32((uint32_t)(EAX));
  /* 113d59e5 call 0x113d5a30 */
  push32(0x113d59eau); f_113d5a30();
  /* 113d59ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d59ed:;
  /* 113d59ed jmp 0x113d57c8 */
  goto L_113d57c8;
L_113d59f2:;
  /* 113d59f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d59f4 call 0x113d77d0 */
  push32(0x113d59f9u); f_113d77d0();
  /* 113d59f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d59fc:;
  /* 113d59fc push 0x113faa24 */
  push32((uint32_t)(0x113faa24u));
  /* 113d5a01 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d5a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5a0e call 0x113d2df0 */
  push32(0x113d5a13u); f_113d2df0();
  /* 113d5a13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5a16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5a19 jne 0x113d5a1c */
  if (!C.zf) goto L_113d5a1c;
  /* 113d5a1b int3  */
  x86_unimpl("int3 @ 0x113d5a1b");
L_113d5a1c:;
  /* 113d5a1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d5a1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d5a20 jne 0x113d59fc */
  if (!C.zf) goto L_113d59fc;
  /* 113d5a22 pop edi */
  EDI = (pop32());
  /* 113d5a23 pop esi */
  ESI = (pop32());
  /* 113d5a24 pop ebx */
  EBX = (pop32());
  /* 113d5a25 mov esp, ebp */
  ESP = (EBP);
  /* 113d5a27 pop ebp */
  EBP = (pop32());
  /* 113d5a28 ret  */
  ESPCHK(0x113d5770u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a30 @ 0x113d5a30 (276 bytes, 89 insns) */
void f_113d5a30(void) {
  FTRACE(0x113d5a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5a30 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5a31 mov ebp, esp */
  EBP = (ESP);
  /* 113d5a33 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5a36 push ebx */
  push32((uint32_t)(EBX));
  /* 113d5a37 push esi */
  push32((uint32_t)(ESI));
  /* 113d5a38 push edi */
  push32((uint32_t)(EDI));
  /* 113d5a39 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 113d5a40 jmp 0x113d5a4b */
  goto L_113d5a4b;
L_113d5a42:;
  /* 113d5a42 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113d5a45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5a48 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_113d5a4b:;
  /* 113d5a4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5a4e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5a52 jge 0x113d5a5f */
  if ((C.sf==C.of)) goto L_113d5a5f;
  /* 113d5a54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5a57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113d5a5a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 113d5a5d jmp 0x113d5a66 */
  goto L_113d5a66;
L_113d5a5f:;
  /* 113d5a5f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_113d5a66:;
  /* 113d5a66 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113d5a69 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5a6c jge 0x113d5b0c */
  if ((C.sf==C.of)) goto L_113d5b0c;
  /* 113d5a72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5a75 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5a78 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 113d5a7b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 113d5a7e cmp dword ptr [0x113fdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113fdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5a85 jle 0x113d5aa3 */
  if ((C.zf||C.sf!=C.of)) goto L_113d5aa3;
  /* 113d5a87 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 113d5a8c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d5a8f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d5a95 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5a96 call 0x113d9d40 */
  push32(0x113d5a9bu); f_113d9d40();
  /* 113d5a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5a9e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 113d5aa1 jmp 0x113d5ac0 */
  goto L_113d5ac0;
L_113d5aa3:;
  /* 113d5aa3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d5aa6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d5aac mov eax, dword ptr [0x113fdc98] */
  EAX = (r32((uint32_t)(0x113fdc98)));
  /* 113d5ab1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d5ab3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 113d5ab7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 113d5abd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_113d5ac0:;
  /* 113d5ac0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5ac4 je 0x113d5ad4 */
  if (C.zf) goto L_113d5ad4;
  /* 113d5ac6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d5ac9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d5acf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 113d5ad2 jmp 0x113d5adb */
  goto L_113d5adb;
L_113d5ad4:;
  /* 113d5ad4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_113d5adb:;
  /* 113d5adb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113d5ade mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 113d5ae1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 113d5ae5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 113d5ae8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d5aee push edx */
  push32((uint32_t)(EDX));
  /* 113d5aef push 0x113fab18 */
  push32((uint32_t)(0x113fab18u));
  /* 113d5af4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113d5af7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d5afa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 113d5afe push ecx */
  push32((uint32_t)(ECX));
  /* 113d5aff call 0x113d9c40 */
  push32(0x113d5b04u); f_113d9c40();
  /* 113d5b04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5b07 jmp 0x113d5a42 */
  goto L_113d5a42;
L_113d5b0c:;
  /* 113d5b0c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 113d5b0f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_113d5b14:;
  /* 113d5b14 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 113d5b17 push eax */
  push32((uint32_t)(EAX));
  /* 113d5b18 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 113d5b1b push ecx */
  push32((uint32_t)(ECX));
  /* 113d5b1c push 0x113fab08 */
  push32((uint32_t)(0x113fab08u));
  /* 113d5b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b29 call 0x113d2df0 */
  push32(0x113d5b2eu); f_113d2df0();
  /* 113d5b2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5b31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5b34 jne 0x113d5b37 */
  if (!C.zf) goto L_113d5b37;
  /* 113d5b36 int3  */
  x86_unimpl("int3 @ 0x113d5b36");
L_113d5b37:;
  /* 113d5b37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d5b39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d5b3b jne 0x113d5b14 */
  if (!C.zf) goto L_113d5b14;
  /* 113d5b3d pop edi */
  EDI = (pop32());
  /* 113d5b3e pop esi */
  ESI = (pop32());
  /* 113d5b3f pop ebx */
  EBX = (pop32());
  /* 113d5b40 mov esp, ebp */
  ESP = (EBP);
  /* 113d5b42 pop ebp */
  EBP = (pop32());
  /* 113d5b43 ret  */
  ESPCHK(0x113d5a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x113d5b50 (116 bytes, 46 insns) */
void f_113d5b50(void) {
  FTRACE(0x113d5b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5b50 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5b51 mov ebp, esp */
  EBP = (ESP);
  /* 113d5b53 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5b56 push ebx */
  push32((uint32_t)(EBX));
  /* 113d5b57 push esi */
  push32((uint32_t)(ESI));
  /* 113d5b58 push edi */
  push32((uint32_t)(EDI));
  /* 113d5b59 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 113d5b5c push eax */
  push32((uint32_t)(EAX));
  /* 113d5b5d call 0x113d54d0 */
  push32(0x113d5b62u); f_113d54d0();
  /* 113d5b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5b65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5b69 jne 0x113d5b84 */
  if (!C.zf) goto L_113d5b84;
  /* 113d5b6b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5b6f jne 0x113d5b84 */
  if (!C.zf) goto L_113d5b84;
  /* 113d5b71 mov ecx, dword ptr [0x113fda84] */
  ECX = (r32((uint32_t)(0x113fda84)));
  /* 113d5b77 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 113d5b7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d5b7c je 0x113d5bbb */
  if (C.zf) goto L_113d5bbb;
  /* 113d5b7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5b82 je 0x113d5bbb */
  if (C.zf) goto L_113d5bbb;
L_113d5b84:;
  /* 113d5b84 push 0x113fab20 */
  push32((uint32_t)(0x113fab20u));
  /* 113d5b89 push 0x113fa4ec */
  push32((uint32_t)(0x113fa4ecu));
  /* 113d5b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5b96 call 0x113d2df0 */
  push32(0x113d5b9bu); f_113d2df0();
  /* 113d5b9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5b9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5ba1 jne 0x113d5ba4 */
  if (!C.zf) goto L_113d5ba4;
  /* 113d5ba3 int3  */
  x86_unimpl("int3 @ 0x113d5ba3");
L_113d5ba4:;
  /* 113d5ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d5ba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d5ba8 jne 0x113d5b84 */
  if (!C.zf) goto L_113d5b84;
  /* 113d5baa push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5bac call 0x113d5770 */
  push32(0x113d5bb1u); f_113d5770();
  /* 113d5bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5bb4 mov eax, 1 */
  EAX = (0x1u);
  /* 113d5bb9 jmp 0x113d5bbd */
  goto L_113d5bbd;
L_113d5bbb:;
  /* 113d5bbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d5bbd:;
  /* 113d5bbd pop edi */
  EDI = (pop32());
  /* 113d5bbe pop esi */
  ESI = (pop32());
  /* 113d5bbf pop ebx */
  EBX = (pop32());
  /* 113d5bc0 mov esp, ebp */
  ESP = (EBP);
  /* 113d5bc2 pop ebp */
  EBP = (pop32());
  /* 113d5bc3 ret  */
  ESPCHK(0x113d5b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x113d5bd0 (197 bytes, 79 insns) */
void f_113d5bd0(void) {
  FTRACE(0x113d5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 113d5bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5bd4 push ebx */
  push32((uint32_t)(EBX));
  /* 113d5bd5 push esi */
  push32((uint32_t)(ESI));
  /* 113d5bd6 push edi */
  push32((uint32_t)(EDI));
  /* 113d5bd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5bdb jne 0x113d5be2 */
  if (!C.zf) goto L_113d5be2;
  /* 113d5bdd jmp 0x113d5c8e */
  goto L_113d5c8e;
L_113d5be2:;
  /* 113d5be2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d5be9 jmp 0x113d5bf4 */
  goto L_113d5bf4;
L_113d5beb:;
  /* 113d5beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5bee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5bf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d5bf4:;
  /* 113d5bf4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5bf8 jge 0x113d5c3e */
  if ((C.sf==C.of)) goto L_113d5c3e;
L_113d5bfa:;
  /* 113d5bfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5bfd mov edx, dword ptr [ecx*4 + 0x113fda94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fda94)));
  /* 113d5c04 push edx */
  push32((uint32_t)(EDX));
  /* 113d5c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5c0b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 113d5c0f push edx */
  push32((uint32_t)(EDX));
  /* 113d5c10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5c13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5c16 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 113d5c1a push edx */
  push32((uint32_t)(EDX));
  /* 113d5c1b push 0x113fab7c */
  push32((uint32_t)(0x113fab7cu));
  /* 113d5c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c28 call 0x113d2df0 */
  push32(0x113d5c2du); f_113d2df0();
  /* 113d5c2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5c30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5c33 jne 0x113d5c36 */
  if (!C.zf) goto L_113d5c36;
  /* 113d5c35 int3  */
  x86_unimpl("int3 @ 0x113d5c35");
L_113d5c36:;
  /* 113d5c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5c3a jne 0x113d5bfa */
  if (!C.zf) goto L_113d5bfa;
  /* 113d5c3c jmp 0x113d5beb */
  goto L_113d5beb;
L_113d5c3e:;
  /* 113d5c3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5c41 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 113d5c44 push edx */
  push32((uint32_t)(EDX));
  /* 113d5c45 push 0x113fab58 */
  push32((uint32_t)(0x113fab58u));
  /* 113d5c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c52 call 0x113d2df0 */
  push32(0x113d5c57u); f_113d2df0();
  /* 113d5c57 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5c5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5c5d jne 0x113d5c60 */
  if (!C.zf) goto L_113d5c60;
  /* 113d5c5f int3  */
  x86_unimpl("int3 @ 0x113d5c5f");
L_113d5c60:;
  /* 113d5c60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5c64 jne 0x113d5c3e */
  if (!C.zf) goto L_113d5c3e;
L_113d5c66:;
  /* 113d5c66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5c69 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 113d5c6c push edx */
  push32((uint32_t)(EDX));
  /* 113d5c6d push 0x113fab38 */
  push32((uint32_t)(0x113fab38u));
  /* 113d5c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5c7a call 0x113d2df0 */
  push32(0x113d5c7fu); f_113d2df0();
  /* 113d5c7f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5c82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5c85 jne 0x113d5c88 */
  if (!C.zf) goto L_113d5c88;
  /* 113d5c87 int3  */
  x86_unimpl("int3 @ 0x113d5c87");
L_113d5c88:;
  /* 113d5c88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5c8c jne 0x113d5c66 */
  if (!C.zf) goto L_113d5c66;
L_113d5c8e:;
  /* 113d5c8e pop edi */
  EDI = (pop32());
  /* 113d5c8f pop esi */
  ESI = (pop32());
  /* 113d5c90 pop ebx */
  EBX = (pop32());
  /* 113d5c91 mov esp, ebp */
  ESP = (EBP);
  /* 113d5c93 pop ebp */
  EBP = (pop32());
  /* 113d5c94 ret  */
  ESPCHK(0x113d5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca0 @ 0x113d5ca0 (329 bytes, 102 insns) */
void f_113d5ca0(void) {
  FTRACE(0x113d5ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5ca1 mov ebp, esp */
  EBP = (ESP);
  /* 113d5ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5ca6 cmp dword ptr [0x11401050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11401050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5cad jne 0x113d5cb4 */
  if (!C.zf) goto L_113d5cb4;
  /* 113d5caf call 0x113da5e0 */
  push32(0x113d5cb4u); f_113da5e0();
L_113d5cb4:;
  /* 113d5cb4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113d5cbb mov eax, dword ptr [0x113ff500] */
  EAX = (r32((uint32_t)(0x113ff500)));
  /* 113d5cc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d5cc3:;
  /* 113d5cc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5cc6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113d5cc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d5ccb je 0x113d5cf9 */
  if (C.zf) goto L_113d5cf9;
  /* 113d5ccd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5cd0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d5cd3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5cd6 je 0x113d5ce1 */
  if (C.zf) goto L_113d5ce1;
  /* 113d5cd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5cdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5cde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113d5ce1:;
  /* 113d5ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5ce4 push eax */
  push32((uint32_t)(EAX));
  /* 113d5ce5 call 0x113d6b60 */
  push32(0x113d5ceau); f_113d6b60();
  /* 113d5cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5ced mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5cf0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113d5cf4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d5cf7 jmp 0x113d5cc3 */
  goto L_113d5cc3;
L_113d5cf9:;
  /* 113d5cf9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 113d5cfb push 0x113fab9c */
  push32((uint32_t)(0x113fab9cu));
  /* 113d5d00 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d5d02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5d05 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 113d5d0c push ecx */
  push32((uint32_t)(ECX));
  /* 113d5d0d call 0x113d3d30 */
  push32(0x113d5d12u); f_113d3d30();
  /* 113d5d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5d15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d5d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5d1b mov dword ptr [0x113ff534], edx */
  w32((uint32_t)(0x113ff534), (EDX));
  /* 113d5d21 cmp dword ptr [0x113ff534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5d28 jne 0x113d5d34 */
  if (!C.zf) goto L_113d5d34;
  /* 113d5d2a push 9 */
  push32((uint32_t)(0x9u));
  /* 113d5d2c call 0x113d2ca0 */
  push32(0x113d5d31u); f_113d2ca0();
  /* 113d5d31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d5d34:;
  /* 113d5d34 mov eax, dword ptr [0x113ff500] */
  EAX = (r32((uint32_t)(0x113ff500)));
  /* 113d5d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d5d3c jmp 0x113d5d47 */
  goto L_113d5d47;
L_113d5d3e:;
  /* 113d5d3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5d41 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5d44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d5d47:;
  /* 113d5d47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5d4a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113d5d4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5d4f je 0x113d5db7 */
  if (C.zf) goto L_113d5db7;
  /* 113d5d51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5d54 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5d55 call 0x113d6b60 */
  push32(0x113d5d5au); f_113d6b60();
  /* 113d5d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5d60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d5d63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5d66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113d5d69 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5d6c je 0x113d5db5 */
  if (C.zf) goto L_113d5db5;
  /* 113d5d6e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 113d5d70 push 0x113fab9c */
  push32((uint32_t)(0x113fab9cu));
  /* 113d5d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d5d77 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d5d7a push ecx */
  push32((uint32_t)(ECX));
  /* 113d5d7b call 0x113d3d30 */
  push32(0x113d5d80u); f_113d3d30();
  /* 113d5d80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5d83 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5d86 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113d5d88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5d8b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5d8e jne 0x113d5d9a */
  if (!C.zf) goto L_113d5d9a;
  /* 113d5d90 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d5d92 call 0x113d2ca0 */
  push32(0x113d5d97u); f_113d2ca0();
  /* 113d5d97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d5d9a:;
  /* 113d5d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5d9d push ecx */
  push32((uint32_t)(ECX));
  /* 113d5d9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5da1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d5da3 push eax */
  push32((uint32_t)(EAX));
  /* 113d5da4 call 0x113d6ce0 */
  push32(0x113d5da9u); f_113d6ce0();
  /* 113d5da9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5dac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5daf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5db2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113d5db5:;
  /* 113d5db5 jmp 0x113d5d3e */
  goto L_113d5d3e;
L_113d5db7:;
  /* 113d5db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d5db9 mov edx, dword ptr [0x113ff500] */
  EDX = (r32((uint32_t)(0x113ff500)));
  /* 113d5dbf push edx */
  push32((uint32_t)(EDX));
  /* 113d5dc0 call 0x113d47c0 */
  push32(0x113d5dc5u); f_113d47c0();
  /* 113d5dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5dc8 mov dword ptr [0x113ff500], 0 */
  w32((uint32_t)(0x113ff500), (0x0u));
  /* 113d5dd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5dd5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113d5ddb mov dword ptr [0x11401040], 1 */
  w32((uint32_t)(0x11401040), (0x1u));
  /* 113d5de5 mov esp, ebp */
  ESP = (EBP);
  /* 113d5de7 pop ebp */
  EBP = (pop32());
  /* 113d5de8 ret  */
  ESPCHK(0x113d5ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x113d5df0 (216 bytes, 69 insns) */
void f_113d5df0(void) {
  FTRACE(0x113d5df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5df0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5df1 mov ebp, esp */
  EBP = (ESP);
  /* 113d5df3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5df6 cmp dword ptr [0x11401050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11401050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5dfd jne 0x113d5e04 */
  if (!C.zf) goto L_113d5e04;
  /* 113d5dff call 0x113da5e0 */
  push32(0x113d5e04u); f_113da5e0();
L_113d5e04:;
  /* 113d5e04 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 113d5e09 push 0x113ff570 */
  push32((uint32_t)(0x113ff570u));
  /* 113d5e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5e10 call dword ptr [0x11402368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402368))), 0x113d5e16u);
  /* 113d5e16 mov dword ptr [0x113ff544], 0x113ff570 */
  w32((uint32_t)(0x113ff544), (0x113ff570u));
  /* 113d5e20 mov eax, dword ptr [0x1140106c] */
  EAX = (r32((uint32_t)(0x1140106c)));
  /* 113d5e25 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d5e28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d5e2a jne 0x113d5e37 */
  if (!C.zf) goto L_113d5e37;
  /* 113d5e2c mov edx, dword ptr [0x113ff544] */
  EDX = (r32((uint32_t)(0x113ff544)));
  /* 113d5e32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113d5e35 jmp 0x113d5e3f */
  goto L_113d5e3f;
L_113d5e37:;
  /* 113d5e37 mov eax, dword ptr [0x1140106c] */
  EAX = (r32((uint32_t)(0x1140106c)));
  /* 113d5e3c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_113d5e3f:;
  /* 113d5e3f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d5e42 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113d5e45 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 113d5e48 push edx */
  push32((uint32_t)(EDX));
  /* 113d5e49 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 113d5e4c push eax */
  push32((uint32_t)(EAX));
  /* 113d5e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d5e51 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d5e54 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5e55 call 0x113d5ed0 */
  push32(0x113d5e5au); f_113d5ed0();
  /* 113d5e5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5e5d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 113d5e62 push 0x113faba8 */
  push32((uint32_t)(0x113faba8u));
  /* 113d5e67 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d5e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5e6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5e6f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 113d5e72 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5e73 call 0x113d3d30 */
  push32(0x113d5e78u); f_113d3d30();
  /* 113d5e78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5e7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d5e7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5e82 jne 0x113d5e8e */
  if (!C.zf) goto L_113d5e8e;
  /* 113d5e84 push 8 */
  push32((uint32_t)(0x8u));
  /* 113d5e86 call 0x113d2ca0 */
  push32(0x113d5e8bu); f_113d2ca0();
  /* 113d5e8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d5e8e:;
  /* 113d5e8e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 113d5e91 push edx */
  push32((uint32_t)(EDX));
  /* 113d5e92 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 113d5e95 push eax */
  push32((uint32_t)(EAX));
  /* 113d5e96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5e99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5e9c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 113d5e9f push eax */
  push32((uint32_t)(EAX));
  /* 113d5ea0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d5ea4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d5ea7 push edx */
  push32((uint32_t)(EDX));
  /* 113d5ea8 call 0x113d5ed0 */
  push32(0x113d5eadu); f_113d5ed0();
  /* 113d5ead add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5eb0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d5eb3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5eb6 mov dword ptr [0x113ff528], eax */
  w32((uint32_t)(0x113ff528), (EAX));
  /* 113d5ebb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d5ebe mov dword ptr [0x113ff52c], ecx */
  w32((uint32_t)(0x113ff52c), (ECX));
  /* 113d5ec4 mov esp, ebp */
  ESP = (EBP);
  /* 113d5ec6 pop ebp */
  EBP = (pop32());
  /* 113d5ec7 ret  */
  ESPCHK(0x113d5df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ed0 @ 0x113d5ed0 (1060 bytes, 360 insns) */
void f_113d5ed0(void) {
  FTRACE(0x113d5ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d5ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d5ed1 mov ebp, esp */
  EBP = (ESP);
  /* 113d5ed3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d5ed6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5ed9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113d5edf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d5ee2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 113d5ee8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d5eeb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d5eee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5ef2 je 0x113d5f05 */
  if (C.zf) goto L_113d5f05;
  /* 113d5ef4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d5ef7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5efa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113d5efc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d5eff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5f02 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_113d5f05:;
  /* 113d5f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f08 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d5f0b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5f0e jne 0x113d5fdd */
  if (!C.zf) goto L_113d5fdd;
L_113d5f14:;
  /* 113d5f14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5f1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d5f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f20 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d5f23 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5f26 je 0x113d5fa2 */
  if (C.zf) goto L_113d5fa2;
  /* 113d5f28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f2b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113d5f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5f30 je 0x113d5fa2 */
  if (C.zf) goto L_113d5fa2;
  /* 113d5f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d5f37 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d5f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d5f3b mov al, byte ptr [edx + 0x11400da1] */
  AL = (r8((uint32_t)(EDX + 0x11400da1)));
  /* 113d5f41 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113d5f44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d5f46 je 0x113d5f77 */
  if (C.zf) goto L_113d5f77;
  /* 113d5f48 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5f4b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d5f4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5f50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5f53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113d5f55 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5f59 je 0x113d5f77 */
  if (C.zf) goto L_113d5f77;
  /* 113d5f5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5f5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f61 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113d5f63 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113d5f65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5f68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5f6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113d5f6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5f74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d5f77:;
  /* 113d5f77 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5f7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d5f7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5f7f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5f82 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113d5f84 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5f88 je 0x113d5f9d */
  if (C.zf) goto L_113d5f9d;
  /* 113d5f8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5f8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5f90 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d5f92 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d5f94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5f97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5f9a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113d5f9d:;
  /* 113d5f9d jmp 0x113d5f14 */
  goto L_113d5f14;
L_113d5fa2:;
  /* 113d5fa2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5fa5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d5fa7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5faa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5fad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113d5faf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5fb3 je 0x113d5fc4 */
  if (C.zf) goto L_113d5fc4;
  /* 113d5fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5fb8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113d5fbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5fbe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5fc1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_113d5fc4:;
  /* 113d5fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5fc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d5fca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5fcd jne 0x113d5fd8 */
  if (!C.zf) goto L_113d5fd8;
  /* 113d5fcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5fd2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5fd5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d5fd8:;
  /* 113d5fd8 jmp 0x113d60ac */
  goto L_113d60ac;
L_113d5fdd:;
  /* 113d5fdd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5fe0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d5fe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d5fe5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d5fe8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113d5fea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d5fee je 0x113d6003 */
  if (C.zf) goto L_113d6003;
  /* 113d5ff0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5ff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d5ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d5ff8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d5ffa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d5ffd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6000 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113d6003:;
  /* 113d6003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6006 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d6008 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 113d600b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d600e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6011 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d6014 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6017 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d601d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d601f mov dl, byte ptr [ecx + 0x11400da1] */
  DL = (r8((uint32_t)(ECX + 0x11400da1)));
  /* 113d6025 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113d6028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d602a je 0x113d605b */
  if (C.zf) goto L_113d605b;
  /* 113d602c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d602f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d6031 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6034 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d6037 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113d6039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d603d je 0x113d6052 */
  if (C.zf) goto L_113d6052;
  /* 113d603f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6045 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d6047 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d6049 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d604c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d604f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113d6052:;
  /* 113d6052 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6055 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6058 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d605b:;
  /* 113d605b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d605e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d6064 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6067 je 0x113d6087 */
  if (C.zf) goto L_113d6087;
  /* 113d6069 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d606c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d6071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d6073 je 0x113d6087 */
  if (C.zf) goto L_113d6087;
  /* 113d6075 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6078 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d607e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6081 jne 0x113d5fdd */
  if (!C.zf) goto L_113d5fdd;
L_113d6087:;
  /* 113d6087 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d608a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d6090 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d6092 jne 0x113d609f */
  if (!C.zf) goto L_113d609f;
  /* 113d6094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6097 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d609a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d609d jmp 0x113d60ac */
  goto L_113d60ac;
L_113d609f:;
  /* 113d609f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d60a3 je 0x113d60ac */
  if (C.zf) goto L_113d60ac;
  /* 113d60a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d60a8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_113d60ac:;
  /* 113d60ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_113d60b3:;
  /* 113d60b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d60b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113d60b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d60bb je 0x113d60de */
  if (C.zf) goto L_113d60de;
L_113d60bd:;
  /* 113d60bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d60c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113d60c3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d60c6 je 0x113d60d3 */
  if (C.zf) goto L_113d60d3;
  /* 113d60c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d60cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d60ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d60d1 jne 0x113d60de */
  if (!C.zf) goto L_113d60de;
L_113d60d3:;
  /* 113d60d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d60d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d60d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d60dc jmp 0x113d60bd */
  goto L_113d60bd;
L_113d60de:;
  /* 113d60de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d60e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d60e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d60e6 jne 0x113d60ed */
  if (!C.zf) goto L_113d60ed;
  /* 113d60e8 jmp 0x113d62cb */
  goto L_113d62cb;
L_113d60ed:;
  /* 113d60ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d60f1 je 0x113d6104 */
  if (C.zf) goto L_113d6104;
  /* 113d60f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d60f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d60f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113d60fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d60fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6101 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_113d6104:;
  /* 113d6104 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d6107 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d6109 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d610c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d610f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_113d6111:;
  /* 113d6111 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113d6118 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_113d611f:;
  /* 113d611f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6122 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113d6125 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6128 jne 0x113d613e */
  if (!C.zf) goto L_113d613e;
  /* 113d612a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d612d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6130 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d6133 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d6136 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6139 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113d613c jmp 0x113d611f */
  goto L_113d611f;
L_113d613e:;
  /* 113d613e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6141 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d6144 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6147 jne 0x113d619a */
  if (!C.zf) goto L_113d619a;
  /* 113d6149 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d614c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d614e mov ecx, 2 */
  ECX = (0x2u);
  /* 113d6153 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113d6155 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d6157 jne 0x113d6192 */
  if (!C.zf) goto L_113d6192;
  /* 113d6159 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d615d je 0x113d617f */
  if (C.zf) goto L_113d617f;
  /* 113d615f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6162 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113d6166 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6169 jne 0x113d6176 */
  if (!C.zf) goto L_113d6176;
  /* 113d616b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d616e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6171 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d6174 jmp 0x113d617d */
  goto L_113d617d;
L_113d6176:;
  /* 113d6176 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113d617d:;
  /* 113d617d jmp 0x113d6186 */
  goto L_113d6186;
L_113d617f:;
  /* 113d617f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113d6186:;
  /* 113d6186 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d6188 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d618c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 113d618f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_113d6192:;
  /* 113d6192 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d6195 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113d6197 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113d619a:;
  /* 113d619a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d619d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d61a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d61a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113d61a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d61a8 je 0x113d61ce */
  if (C.zf) goto L_113d61ce;
  /* 113d61aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d61ae je 0x113d61bf */
  if (C.zf) goto L_113d61bf;
  /* 113d61b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d61b3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 113d61b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d61b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d61bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_113d61bf:;
  /* 113d61bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d61c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d61c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d61c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d61ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d61cc jmp 0x113d619a */
  goto L_113d619a;
L_113d61ce:;
  /* 113d61ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d61d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113d61d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d61d6 je 0x113d61f4 */
  if (C.zf) goto L_113d61f4;
  /* 113d61d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d61dc jne 0x113d61f9 */
  if (!C.zf) goto L_113d61f9;
  /* 113d61de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d61e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113d61e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d61e7 je 0x113d61f4 */
  if (C.zf) goto L_113d61f4;
  /* 113d61e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d61ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113d61ef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d61f2 jne 0x113d61f9 */
  if (!C.zf) goto L_113d61f9;
L_113d61f4:;
  /* 113d61f4 jmp 0x113d62a4 */
  goto L_113d62a4;
L_113d61f9:;
  /* 113d61f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d61fd je 0x113d6296 */
  if (C.zf) goto L_113d6296;
  /* 113d6203 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6207 je 0x113d625d */
  if (C.zf) goto L_113d625d;
  /* 113d6209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d620c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d620e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113d6210 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d6212 mov cl, byte ptr [eax + 0x11400da1] */
  CL = (r8((uint32_t)(EAX + 0x11400da1)));
  /* 113d6218 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113d621b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d621d je 0x113d6248 */
  if (C.zf) goto L_113d6248;
  /* 113d621f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6222 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6225 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113d6227 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113d6229 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d622c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d622f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 113d6232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6235 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6238 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d623b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d623e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d6240 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6243 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d6246 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113d6248:;
  /* 113d6248 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d624b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d624e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113d6250 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113d6252 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6255 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6258 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113d625b jmp 0x113d6289 */
  goto L_113d6289;
L_113d625d:;
  /* 113d625d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6262 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113d6264 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d6266 mov cl, byte ptr [eax + 0x11400da1] */
  CL = (r8((uint32_t)(EAX + 0x11400da1)));
  /* 113d626c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113d626f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d6271 je 0x113d6289 */
  if (C.zf) goto L_113d6289;
  /* 113d6273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6276 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6279 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d627c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d627f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d6281 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6284 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d6287 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d6289:;
  /* 113d6289 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d628c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d628e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6291 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d6294 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113d6296:;
  /* 113d6296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6299 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d629c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d629f jmp 0x113d6111 */
  goto L_113d6111;
L_113d62a4:;
  /* 113d62a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d62a8 je 0x113d62b9 */
  if (C.zf) goto L_113d62b9;
  /* 113d62aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d62ad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113d62b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d62b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d62b6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_113d62b9:;
  /* 113d62b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d62bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d62be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d62c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113d62c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113d62c6 jmp 0x113d60b3 */
  goto L_113d60b3;
L_113d62cb:;
  /* 113d62cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d62cf je 0x113d62e3 */
  if (C.zf) goto L_113d62e3;
  /* 113d62d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d62d4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113d62da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d62dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d62e0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_113d62e3:;
  /* 113d62e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d62e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d62e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d62eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d62ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d62f0 mov esp, ebp */
  ESP = (EBP);
  /* 113d62f2 pop ebp */
  EBP = (pop32());
  /* 113d62f3 ret  */
  ESPCHK(0x113d5ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x113d6300 (537 bytes, 173 insns) */
void f_113d6300(void) {
  FTRACE(0x113d6300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6300 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6301 mov ebp, esp */
  EBP = (ESP);
  /* 113d6303 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6306 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 113d630d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 113d6314 cmp dword ptr [0x113ff674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d631b jne 0x113d635a */
  if (!C.zf) goto L_113d635a;
  /* 113d631d call dword ptr [0x114023c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023c0))), 0x113d6323u);
  /* 113d6323 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113d6326 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d632a je 0x113d6338 */
  if (C.zf) goto L_113d6338;
  /* 113d632c mov dword ptr [0x113ff674], 1 */
  w32((uint32_t)(0x113ff674), (0x1u));
  /* 113d6336 jmp 0x113d635a */
  goto L_113d635a;
L_113d6338:;
  /* 113d6338 call dword ptr [0x114023bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023bc))), 0x113d633eu);
  /* 113d633e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d6341 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6345 je 0x113d6353 */
  if (C.zf) goto L_113d6353;
  /* 113d6347 mov dword ptr [0x113ff674], 2 */
  w32((uint32_t)(0x113ff674), (0x2u));
  /* 113d6351 jmp 0x113d635a */
  goto L_113d635a;
L_113d6353:;
  /* 113d6353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6355 jmp 0x113d6515 */
  goto L_113d6515;
L_113d635a:;
  /* 113d635a cmp dword ptr [0x113ff674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6361 jne 0x113d645e */
  if (!C.zf) goto L_113d645e;
  /* 113d6367 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d636b jne 0x113d6383 */
  if (!C.zf) goto L_113d6383;
  /* 113d636d call dword ptr [0x114023c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023c0))), 0x113d6373u);
  /* 113d6373 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113d6376 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d637a jne 0x113d6383 */
  if (!C.zf) goto L_113d6383;
  /* 113d637c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d637e jmp 0x113d6515 */
  goto L_113d6515;
L_113d6383:;
  /* 113d6383 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d6386 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113d6389:;
  /* 113d6389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d638c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d638e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 113d6391 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d6393 je 0x113d63b5 */
  if (C.zf) goto L_113d63b5;
  /* 113d6395 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6398 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d639b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d639e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d63a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d63a3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 113d63a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d63a8 jne 0x113d63b3 */
  if (!C.zf) goto L_113d63b3;
  /* 113d63aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d63ad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d63b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113d63b3:;
  /* 113d63b3 jmp 0x113d6389 */
  goto L_113d6389;
L_113d63b5:;
  /* 113d63b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d63b8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d63bb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 113d63bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d63c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d63c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d63c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d63c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d63c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d63cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d63ce push edx */
  push32((uint32_t)(EDX));
  /* 113d63cf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d63d2 push eax */
  push32((uint32_t)(EAX));
  /* 113d63d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d63d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d63d7 call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113d63ddu);
  /* 113d63dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d63e0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d63e4 je 0x113d6404 */
  if (C.zf) goto L_113d6404;
  /* 113d63e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 113d63e8 push 0x113fabb4 */
  push32((uint32_t)(0x113fabb4u));
  /* 113d63ed push 2 */
  push32((uint32_t)(0x2u));
  /* 113d63ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d63f2 push ecx */
  push32((uint32_t)(ECX));
  /* 113d63f3 call 0x113d3d30 */
  push32(0x113d63f8u); f_113d3d30();
  /* 113d63f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d63fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d63fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6402 jne 0x113d6415 */
  if (!C.zf) goto L_113d6415;
L_113d6404:;
  /* 113d6404 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d6407 push edx */
  push32((uint32_t)(EDX));
  /* 113d6408 call dword ptr [0x114023b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b4))), 0x113d640eu);
  /* 113d640e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6410 jmp 0x113d6515 */
  goto L_113d6515;
L_113d6415:;
  /* 113d6415 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6417 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6419 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d641c push eax */
  push32((uint32_t)(EAX));
  /* 113d641d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d6420 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6424 push edx */
  push32((uint32_t)(EDX));
  /* 113d6425 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d6428 push eax */
  push32((uint32_t)(EAX));
  /* 113d6429 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d642b push 0 */
  push32((uint32_t)(0x0u));
  /* 113d642d call dword ptr [0x114023b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b8))), 0x113d6433u);
  /* 113d6433 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d6435 jne 0x113d644c */
  if (!C.zf) goto L_113d644c;
  /* 113d6437 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d6439 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d643c push ecx */
  push32((uint32_t)(ECX));
  /* 113d643d call 0x113d47c0 */
  push32(0x113d6442u); f_113d47c0();
  /* 113d6442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6445 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_113d644c:;
  /* 113d644c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d644f push edx */
  push32((uint32_t)(EDX));
  /* 113d6450 call dword ptr [0x114023b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b4))), 0x113d6456u);
  /* 113d6456 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d6459 jmp 0x113d6515 */
  goto L_113d6515;
L_113d645e:;
  /* 113d645e cmp dword ptr [0x113ff674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113ff674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6465 jne 0x113d6513 */
  if (!C.zf) goto L_113d6513;
  /* 113d646b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d646f jne 0x113d6487 */
  if (!C.zf) goto L_113d6487;
  /* 113d6471 call dword ptr [0x114023bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023bc))), 0x113d6477u);
  /* 113d6477 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d647a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d647e jne 0x113d6487 */
  if (!C.zf) goto L_113d6487;
  /* 113d6480 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6482 jmp 0x113d6515 */
  goto L_113d6515;
L_113d6487:;
  /* 113d6487 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d648a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113d648d:;
  /* 113d648d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6490 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113d6493 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d6495 je 0x113d64b5 */
  if (C.zf) goto L_113d64b5;
  /* 113d6497 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d649a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d649d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d64a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d64a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113d64a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d64a8 jne 0x113d64b3 */
  if (!C.zf) goto L_113d64b3;
  /* 113d64aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d64ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d64b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113d64b3:;
  /* 113d64b3 jmp 0x113d648d */
  goto L_113d648d;
L_113d64b5:;
  /* 113d64b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d64b8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d64bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d64be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113d64c1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 113d64c6 push 0x113fabb4 */
  push32((uint32_t)(0x113fabb4u));
  /* 113d64cb push 2 */
  push32((uint32_t)(0x2u));
  /* 113d64cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d64d0 push edx */
  push32((uint32_t)(EDX));
  /* 113d64d1 call 0x113d3d30 */
  push32(0x113d64d6u); f_113d3d30();
  /* 113d64d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d64d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d64dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d64e0 jne 0x113d64f0 */
  if (!C.zf) goto L_113d64f0;
  /* 113d64e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d64e5 push eax */
  push32((uint32_t)(EAX));
  /* 113d64e6 call dword ptr [0x114023a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023a4))), 0x113d64ecu);
  /* 113d64ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d64ee jmp 0x113d6515 */
  goto L_113d6515;
L_113d64f0:;
  /* 113d64f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d64f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d64f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d64f7 push edx */
  push32((uint32_t)(EDX));
  /* 113d64f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d64fb push eax */
  push32((uint32_t)(EAX));
  /* 113d64fc call 0x113da610 */
  push32(0x113d6501u); f_113da610();
  /* 113d6501 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6504 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d6507 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6508 call dword ptr [0x114023a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023a4))), 0x113d650eu);
  /* 113d650e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6511 jmp 0x113d6515 */
  goto L_113d6515;
L_113d6513:;
  /* 113d6513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d6515:;
  /* 113d6515 mov esp, ebp */
  ESP = (EBP);
  /* 113d6517 pop ebp */
  EBP = (pop32());
  /* 113d6518 ret  */
  ESPCHK(0x113d6300u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x113d6520 (77 bytes, 25 insns) */
void f_113d6520(void) {
  FTRACE(0x113d6520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6520 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6521 mov ebp, esp */
  EBP = (ESP);
  /* 113d6523 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6525 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 113d652a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d652c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6530 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 113d6533 push eax */
  push32((uint32_t)(EAX));
  /* 113d6534 call dword ptr [0x11402338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402338))), 0x113d653au);
  /* 113d653a mov dword ptr [0x11400ecc], eax */
  w32((uint32_t)(0x11400ecc), (EAX));
  /* 113d653f cmp dword ptr [0x11400ecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11400ecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6546 jne 0x113d654c */
  if (!C.zf) goto L_113d654c;
  /* 113d6548 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d654a jmp 0x113d656b */
  goto L_113d656b;
L_113d654c:;
  /* 113d654c call 0x113d7fd0 */
  push32(0x113d6551u); f_113d7fd0();
  /* 113d6551 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d6553 jne 0x113d6566 */
  if (!C.zf) goto L_113d6566;
  /* 113d6555 mov ecx, dword ptr [0x11400ecc] */
  ECX = (r32((uint32_t)(0x11400ecc)));
  /* 113d655b push ecx */
  push32((uint32_t)(ECX));
  /* 113d655c call dword ptr [0x1140233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140233c))), 0x113d6562u);
  /* 113d6562 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6564 jmp 0x113d656b */
  goto L_113d656b;
L_113d6566:;
  /* 113d6566 mov eax, 1 */
  EAX = (0x1u);
L_113d656b:;
  /* 113d656b pop ebp */
  EBP = (pop32());
  /* 113d656c ret  */
  ESPCHK(0x113d6520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006570 @ 0x113d6570 (156 bytes, 48 insns) */
void f_113d6570(void) {
  FTRACE(0x113d6570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6570 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6571 mov ebp, esp */
  EBP = (ESP);
  /* 113d6573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6576 mov eax, dword ptr [0x11400ec8] */
  EAX = (r32((uint32_t)(0x11400ec8)));
  /* 113d657b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d657e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d6585 jmp 0x113d6590 */
  goto L_113d6590;
L_113d6587:;
  /* 113d6587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d658a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d658d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d6590:;
  /* 113d6590 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6593 cmp edx, dword ptr [0x11400ec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11400ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6599 jge 0x113d65e6 */
  if ((C.sf==C.of)) goto L_113d65e6;
  /* 113d659b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 113d65a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 113d65a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d65a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113d65ab push ecx */
  push32((uint32_t)(ECX));
  /* 113d65ac call dword ptr [0x11402330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402330))), 0x113d65b2u);
  /* 113d65b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113d65b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d65b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d65bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113d65bf push eax */
  push32((uint32_t)(EAX));
  /* 113d65c0 call dword ptr [0x11402330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402330))), 0x113d65c6u);
  /* 113d65c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d65c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113d65cc push edx */
  push32((uint32_t)(EDX));
  /* 113d65cd push 0 */
  push32((uint32_t)(0x0u));
  /* 113d65cf mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d65d4 push eax */
  push32((uint32_t)(EAX));
  /* 113d65d5 call dword ptr [0x11402384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402384))), 0x113d65dbu);
  /* 113d65db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d65de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d65e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d65e4 jmp 0x113d6587 */
  goto L_113d6587;
L_113d65e6:;
  /* 113d65e6 mov edx, dword ptr [0x11400ec8] */
  EDX = (r32((uint32_t)(0x11400ec8)));
  /* 113d65ec push edx */
  push32((uint32_t)(EDX));
  /* 113d65ed push 0 */
  push32((uint32_t)(0x0u));
  /* 113d65ef mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d65f4 push eax */
  push32((uint32_t)(EAX));
  /* 113d65f5 call dword ptr [0x11402384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402384))), 0x113d65fbu);
  /* 113d65fb mov ecx, dword ptr [0x11400ecc] */
  ECX = (r32((uint32_t)(0x11400ecc)));
  /* 113d6601 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6602 call dword ptr [0x1140233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140233c))), 0x113d6608u);
  /* 113d6608 mov esp, ebp */
  ESP = (EBP);
  /* 113d660a pop ebp */
  EBP = (pop32());
  /* 113d660b ret  */
  ESPCHK(0x113d6570u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x113d6610 (73 bytes, 19 insns) */
void f_113d6610(void) {
  FTRACE(0x113d6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6610 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6611 mov ebp, esp */
  EBP = (ESP);
  /* 113d6613 cmp dword ptr [0x113ff508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d661a je 0x113d662e */
  if (C.zf) goto L_113d662e;
  /* 113d661c cmp dword ptr [0x113ff508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6623 jne 0x113d6657 */
  if (!C.zf) goto L_113d6657;
  /* 113d6625 cmp dword ptr [0x113ff50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d662c jne 0x113d6657 */
  if (!C.zf) goto L_113d6657;
L_113d662e:;
  /* 113d662e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 113d6633 call 0x113d6660 */
  push32(0x113d6638u); f_113d6660();
  /* 113d6638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d663b cmp dword ptr [0x113ff678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6642 je 0x113d664a */
  if (C.zf) goto L_113d664a;
  /* 113d6644 call dword ptr [0x113ff678] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff678))), 0x113d664au);
L_113d664a:;
  /* 113d664a push 0xff */
  push32((uint32_t)(0xffu));
  /* 113d664f call 0x113d6660 */
  push32(0x113d6654u); f_113d6660();
  /* 113d6654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d6657:;
  /* 113d6657 pop ebp */
  EBP = (pop32());
  /* 113d6658 ret  */
  ESPCHK(0x113d6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x113d6660 (447 bytes, 131 insns) */
void f_113d6660(void) {
  FTRACE(0x113d6660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6660 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6661 mov ebp, esp */
  EBP = (ESP);
  /* 113d6663 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6669 push ebx */
  push32((uint32_t)(EBX));
  /* 113d666a push esi */
  push32((uint32_t)(ESI));
  /* 113d666b push edi */
  push32((uint32_t)(EDI));
  /* 113d666c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113d6673 jmp 0x113d667e */
  goto L_113d667e;
L_113d6675:;
  /* 113d6675 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6678 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d667b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113d667e:;
  /* 113d667e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6682 jae 0x113d6697 */
  if (!C.cf) goto L_113d6697;
  /* 113d6684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6687 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d668a cmp edx, dword ptr [ecx*8 + 0x113fdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x113fdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6691 jne 0x113d6695 */
  if (!C.zf) goto L_113d6695;
  /* 113d6693 jmp 0x113d6697 */
  goto L_113d6697;
L_113d6695:;
  /* 113d6695 jmp 0x113d6675 */
  goto L_113d6675;
L_113d6697:;
  /* 113d6697 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d669a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d669d cmp ecx, dword ptr [eax*8 + 0x113fdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x113fdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d66a4 jne 0x113d6818 */
  if (!C.zf) goto L_113d6818;
  /* 113d66aa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d66b1 je 0x113d66d4 */
  if (C.zf) goto L_113d66d4;
  /* 113d66b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d66b6 mov eax, dword ptr [edx*8 + 0x113fdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x113fdab4)));
  /* 113d66bd push eax */
  push32((uint32_t)(EAX));
  /* 113d66be push 0 */
  push32((uint32_t)(0x0u));
  /* 113d66c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d66c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d66c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d66c6 call 0x113d2df0 */
  push32(0x113d66cbu); f_113d2df0();
  /* 113d66cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d66ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d66d1 jne 0x113d66d4 */
  if (!C.zf) goto L_113d66d4;
  /* 113d66d3 int3  */
  x86_unimpl("int3 @ 0x113d66d3");
L_113d66d4:;
  /* 113d66d4 cmp dword ptr [0x113ff508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d66db je 0x113d66ef */
  if (C.zf) goto L_113d66ef;
  /* 113d66dd cmp dword ptr [0x113ff508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d66e4 jne 0x113d6728 */
  if (!C.zf) goto L_113d6728;
  /* 113d66e6 cmp dword ptr [0x113ff50c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113ff50c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d66ed jne 0x113d6728 */
  if (!C.zf) goto L_113d6728;
L_113d66ef:;
  /* 113d66ef push 0 */
  push32((uint32_t)(0x0u));
  /* 113d66f1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 113d66f4 push ecx */
  push32((uint32_t)(ECX));
  /* 113d66f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d66f8 mov eax, dword ptr [edx*8 + 0x113fdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x113fdab4)));
  /* 113d66ff push eax */
  push32((uint32_t)(EAX));
  /* 113d6700 call 0x113d6b60 */
  push32(0x113d6705u); f_113d6b60();
  /* 113d6705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6708 push eax */
  push32((uint32_t)(EAX));
  /* 113d6709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d670c mov edx, dword ptr [ecx*8 + 0x113fdab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x113fdab4)));
  /* 113d6713 push edx */
  push32((uint32_t)(EDX));
  /* 113d6714 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113d6716 call dword ptr [0x1140234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140234c))), 0x113d671cu);
  /* 113d671c push eax */
  push32((uint32_t)(EAX));
  /* 113d671d call dword ptr [0x11402350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402350))), 0x113d6723u);
  /* 113d6723 jmp 0x113d6818 */
  goto L_113d6818;
L_113d6728:;
  /* 113d6728 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d672f je 0x113d6818 */
  if (C.zf) goto L_113d6818;
  /* 113d6735 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 113d673a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 113d6740 push eax */
  push32((uint32_t)(EAX));
  /* 113d6741 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6743 call dword ptr [0x11402368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402368))), 0x113d6749u);
  /* 113d6749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d674b jne 0x113d6761 */
  if (!C.zf) goto L_113d6761;
  /* 113d674d push 0x113fa41c */
  push32((uint32_t)(0x113fa41cu));
  /* 113d6752 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 113d6758 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6759 call 0x113d6ce0 */
  push32(0x113d675eu); f_113d6ce0();
  /* 113d675e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d6761:;
  /* 113d6761 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 113d6767 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113d676a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d676d push eax */
  push32((uint32_t)(EAX));
  /* 113d676e call 0x113d6b60 */
  push32(0x113d6773u); f_113d6b60();
  /* 113d6773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6776 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6779 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d677c jbe 0x113d67aa */
  if ((C.cf||C.zf)) goto L_113d67aa;
  /* 113d677e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 113d6784 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6785 call 0x113d6b60 */
  push32(0x113d678au); f_113d6b60();
  /* 113d678a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d678d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6790 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 113d6794 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d6797 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d6799 push 0x113fa418 */
  push32((uint32_t)(0x113fa418u));
  /* 113d679e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d67a1 push ecx */
  push32((uint32_t)(ECX));
  /* 113d67a2 call 0x113d7550 */
  push32(0x113d67a7u); f_113d7550();
  /* 113d67a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d67aa:;
  /* 113d67aa push 0x113fae70 */
  push32((uint32_t)(0x113fae70u));
  /* 113d67af lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 113d67b5 push edx */
  push32((uint32_t)(EDX));
  /* 113d67b6 call 0x113d6ce0 */
  push32(0x113d67bbu); f_113d6ce0();
  /* 113d67bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d67be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d67c1 push eax */
  push32((uint32_t)(EAX));
  /* 113d67c2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 113d67c8 push ecx */
  push32((uint32_t)(ECX));
  /* 113d67c9 call 0x113d6cf0 */
  push32(0x113d67ceu); f_113d6cf0();
  /* 113d67ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d67d1 push 0x113fa390 */
  push32((uint32_t)(0x113fa390u));
  /* 113d67d6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 113d67dc push edx */
  push32((uint32_t)(EDX));
  /* 113d67dd call 0x113d6cf0 */
  push32(0x113d67e2u); f_113d6cf0();
  /* 113d67e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d67e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d67e8 mov ecx, dword ptr [eax*8 + 0x113fdab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x113fdab4)));
  /* 113d67ef push ecx */
  push32((uint32_t)(ECX));
  /* 113d67f0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 113d67f6 push edx */
  push32((uint32_t)(EDX));
  /* 113d67f7 call 0x113d6cf0 */
  push32(0x113d67fcu); f_113d6cf0();
  /* 113d67fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d67ff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 113d6804 push 0x113fae48 */
  push32((uint32_t)(0x113fae48u));
  /* 113d6809 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 113d680f push eax */
  push32((uint32_t)(EAX));
  /* 113d6810 call 0x113d7490 */
  push32(0x113d6815u); f_113d7490();
  /* 113d6815 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d6818:;
  /* 113d6818 pop edi */
  EDI = (pop32());
  /* 113d6819 pop esi */
  ESI = (pop32());
  /* 113d681a pop ebx */
  EBX = (pop32());
  /* 113d681b mov esp, ebp */
  ESP = (EBP);
  /* 113d681d pop ebp */
  EBP = (pop32());
  /* 113d681e ret  */
  ESPCHK(0x113d6660u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x113d6820 (80 bytes, 27 insns) */
void f_113d6820(void) {
  FTRACE(0x113d6820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6820 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6821 mov ebp, esp */
  EBP = (ESP);
  /* 113d6823 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6824 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d682b jmp 0x113d6836 */
  goto L_113d6836;
L_113d682d:;
  /* 113d682d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6830 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6833 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d6836:;
  /* 113d6836 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d683a jae 0x113d684f */
  if (!C.cf) goto L_113d684f;
  /* 113d683c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d683f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6842 cmp edx, dword ptr [ecx*8 + 0x113fdab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x113fdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6849 jne 0x113d684d */
  if (!C.zf) goto L_113d684d;
  /* 113d684b jmp 0x113d684f */
  goto L_113d684f;
L_113d684d:;
  /* 113d684d jmp 0x113d682d */
  goto L_113d682d;
L_113d684f:;
  /* 113d684f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6852 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6855 cmp ecx, dword ptr [eax*8 + 0x113fdab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x113fdab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d685c jne 0x113d686a */
  if (!C.zf) goto L_113d686a;
  /* 113d685e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6861 mov eax, dword ptr [edx*8 + 0x113fdab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x113fdab4)));
  /* 113d6868 jmp 0x113d686c */
  goto L_113d686c;
L_113d686a:;
  /* 113d686a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d686c:;
  /* 113d686c mov esp, ebp */
  ESP = (EBP);
  /* 113d686e pop ebp */
  EBP = (pop32());
  /* 113d686f ret  */
  ESPCHK(0x113d6820u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x113d6870 (66 bytes, 28 insns) */
void f_113d6870(void) {
  FTRACE(0x113d6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6870 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6871 mov ebp, esp */
  EBP = (ESP);
  /* 113d6873 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6877 jne 0x113d6897 */
  if (!C.zf) goto L_113d6897;
  /* 113d6879 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d687d jge 0x113d6897 */
  if ((C.sf==C.of)) goto L_113d6897;
  /* 113d687f push 1 */
  push32((uint32_t)(0x1u));
  /* 113d6881 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6884 push eax */
  push32((uint32_t)(EAX));
  /* 113d6885 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6888 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d688c push edx */
  push32((uint32_t)(EDX));
  /* 113d688d call 0x113d68c0 */
  push32(0x113d6892u); f_113d68c0();
  /* 113d6892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6895 jmp 0x113d68ad */
  goto L_113d68ad;
L_113d6897:;
  /* 113d6897 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6899 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d689c push eax */
  push32((uint32_t)(EAX));
  /* 113d689d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d68a0 push ecx */
  push32((uint32_t)(ECX));
  /* 113d68a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d68a4 push edx */
  push32((uint32_t)(EDX));
  /* 113d68a5 call 0x113d68c0 */
  push32(0x113d68aau); f_113d68c0();
  /* 113d68aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d68ad:;
  /* 113d68ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d68b0 pop ebp */
  EBP = (pop32());
  /* 113d68b1 ret  */
  ESPCHK(0x113d6870u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x113d68c0 (194 bytes, 71 insns) */
void f_113d68c0(void) {
  FTRACE(0x113d68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d68c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d68c1 mov ebp, esp */
  EBP = (ESP);
  /* 113d68c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d68c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d68c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d68cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d68d0 je 0x113d68e9 */
  if (C.zf) goto L_113d68e9;
  /* 113d68d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d68d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 113d68d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d68db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d68de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d68e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d68e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113d68e6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113d68e9:;
  /* 113d68e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d68ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113d68ef:;
  /* 113d68ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d68f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d68f4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113d68f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113d68fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d68fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d68ff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113d6902 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113d6905 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6909 jbe 0x113d6921 */
  if ((C.cf||C.zf)) goto L_113d6921;
  /* 113d690b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d690e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6914 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d6916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6919 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d691c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d691f jmp 0x113d6935 */
  goto L_113d6935;
L_113d6921:;
  /* 113d6921 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6924 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d692a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d692c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d692f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6932 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d6935:;
  /* 113d6935 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6939 ja 0x113d68ef */
  if ((!C.cf&&!C.zf)) goto L_113d68ef;
  /* 113d693b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d693e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113d6941 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6944 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6947 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d694a:;
  /* 113d694a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d694d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d694f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 113d6952 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6955 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6958 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d695a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d695c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d695f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 113d6962 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 113d6964 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6967 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d696a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d696d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6970 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6973 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d6976 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6979 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d697c jb 0x113d694a */
  if (C.cf) goto L_113d694a;
  /* 113d697e mov esp, ebp */
  ESP = (EBP);
  /* 113d6980 pop ebp */
  EBP = (pop32());
  /* 113d6981 ret  */
  ESPCHK(0x113d68c0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x113d6990 (63 bytes, 24 insns) */
void f_113d6990(void) {
  FTRACE(0x113d6990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6990 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6991 mov ebp, esp */
  EBP = (ESP);
  /* 113d6993 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6994 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6998 jne 0x113d69a9 */
  if (!C.zf) goto L_113d69a9;
  /* 113d699a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d699e jge 0x113d69a9 */
  if ((C.sf==C.of)) goto L_113d69a9;
  /* 113d69a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113d69a7 jmp 0x113d69b0 */
  goto L_113d69b0;
L_113d69a9:;
  /* 113d69a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113d69b0:;
  /* 113d69b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d69b3 push eax */
  push32((uint32_t)(EAX));
  /* 113d69b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d69b7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d69b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d69bb push edx */
  push32((uint32_t)(EDX));
  /* 113d69bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d69bf push eax */
  push32((uint32_t)(EAX));
  /* 113d69c0 call 0x113d68c0 */
  push32(0x113d69c5u); f_113d68c0();
  /* 113d69c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d69c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d69cb mov esp, ebp */
  ESP = (EBP);
  /* 113d69cd pop ebp */
  EBP = (pop32());
  /* 113d69ce ret  */
  ESPCHK(0x113d6990u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x113d69d0 (30 bytes, 14 insns) */
void f_113d69d0(void) {
  FTRACE(0x113d69d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d69d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d69d1 mov ebp, esp */
  EBP = (ESP);
  /* 113d69d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d69d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d69d8 push eax */
  push32((uint32_t)(EAX));
  /* 113d69d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d69dc push ecx */
  push32((uint32_t)(ECX));
  /* 113d69dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d69e0 push edx */
  push32((uint32_t)(EDX));
  /* 113d69e1 call 0x113d68c0 */
  push32(0x113d69e6u); f_113d68c0();
  /* 113d69e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d69e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d69ec pop ebp */
  EBP = (pop32());
  /* 113d69ed ret  */
  ESPCHK(0x113d69d0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x113d69f0 (72 bytes, 28 insns) */
void f_113d69f0(void) {
  FTRACE(0x113d69f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d69f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d69f1 mov ebp, esp */
  EBP = (ESP);
  /* 113d69f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d69f4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d69f8 jne 0x113d6a11 */
  if (!C.zf) goto L_113d6a11;
  /* 113d69fa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d69fe jg 0x113d6a11 */
  if ((!C.zf&&C.sf==C.of)) goto L_113d6a11;
  /* 113d6a00 jl 0x113d6a08 */
  if ((C.sf!=C.of)) goto L_113d6a08;
  /* 113d6a02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6a06 jae 0x113d6a11 */
  if (!C.cf) goto L_113d6a11;
L_113d6a08:;
  /* 113d6a08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113d6a0f jmp 0x113d6a18 */
  goto L_113d6a18;
L_113d6a11:;
  /* 113d6a11 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113d6a18:;
  /* 113d6a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6a1b push eax */
  push32((uint32_t)(EAX));
  /* 113d6a1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d6a1f push ecx */
  push32((uint32_t)(ECX));
  /* 113d6a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6a23 push edx */
  push32((uint32_t)(EDX));
  /* 113d6a24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6a27 push eax */
  push32((uint32_t)(EAX));
  /* 113d6a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6a2b push ecx */
  push32((uint32_t)(ECX));
  /* 113d6a2c call 0x113d6a40 */
  push32(0x113d6a31u); f_113d6a40();
  /* 113d6a31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6a34 mov esp, ebp */
  ESP = (EBP);
  /* 113d6a36 pop ebp */
  EBP = (pop32());
  /* 113d6a37 ret  */
  ESPCHK(0x113d69f0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x113d6a40 (242 bytes, 91 insns) */
void f_113d6a40(void) {
  FTRACE(0x113d6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6a41 mov ebp, esp */
  EBP = (ESP);
  /* 113d6a43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6a46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6a49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d6a4c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6a50 je 0x113d6a74 */
  if (C.zf) goto L_113d6a74;
  /* 113d6a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6a55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 113d6a58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6a5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6a5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d6a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6a64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113d6a66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6a69 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6a6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113d6a6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113d6a71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_113d6a74:;
  /* 113d6a74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6a77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113d6a7a:;
  /* 113d6a7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d6a7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d6a7f push ecx */
  push32((uint32_t)(ECX));
  /* 113d6a80 push eax */
  push32((uint32_t)(EAX));
  /* 113d6a81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6a84 push edx */
  push32((uint32_t)(EDX));
  /* 113d6a85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6a88 push eax */
  push32((uint32_t)(EAX));
  /* 113d6a89 call 0x113da9c0 */
  push32(0x113d6a8eu); f_113da9c0();
  /* 113d6a8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d6a91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d6a94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d6a96 push edx */
  push32((uint32_t)(EDX));
  /* 113d6a97 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6a98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6a9b push eax */
  push32((uint32_t)(EAX));
  /* 113d6a9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6a9f push ecx */
  push32((uint32_t)(ECX));
  /* 113d6aa0 call 0x113da950 */
  push32(0x113d6aa5u); f_113da950();
  /* 113d6aa5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113d6aa8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 113d6aab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6aaf jbe 0x113d6ac7 */
  if ((C.cf||C.zf)) goto L_113d6ac7;
  /* 113d6ab1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6ab4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6aba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d6abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6abf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6ac2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d6ac5 jmp 0x113d6adb */
  goto L_113d6adb;
L_113d6ac7:;
  /* 113d6ac7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d6aca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6ad0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d6ad2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6ad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6ad8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113d6adb:;
  /* 113d6adb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6adf ja 0x113d6a7a */
  if ((!C.cf&&!C.zf)) goto L_113d6a7a;
  /* 113d6ae1 jb 0x113d6ae9 */
  if (C.cf) goto L_113d6ae9;
  /* 113d6ae3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6ae7 ja 0x113d6a7a */
  if ((!C.cf&&!C.zf)) goto L_113d6a7a;
L_113d6ae9:;
  /* 113d6ae9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6aec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113d6aef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6af2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6af5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d6af8:;
  /* 113d6af8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6afb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d6afd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 113d6b00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6b03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6b06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d6b08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113d6b0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6b0d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 113d6b10 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 113d6b12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d6b15 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6b18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d6b1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6b1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6b21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d6b24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d6b27 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6b2a jb 0x113d6af8 */
  if (C.cf) goto L_113d6af8;
  /* 113d6b2c mov esp, ebp */
  ESP = (EBP);
  /* 113d6b2e pop ebp */
  EBP = (pop32());
  /* 113d6b2f ret 0x14 */
  ESPCHK(0x113d6a40u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x113d6b40 (31 bytes, 15 insns) */
void f_113d6b40(void) {
  FTRACE(0x113d6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6b41 mov ebp, esp */
  EBP = (ESP);
  /* 113d6b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6b45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d6b48 push eax */
  push32((uint32_t)(EAX));
  /* 113d6b49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6b4c push ecx */
  push32((uint32_t)(ECX));
  /* 113d6b4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6b50 push edx */
  push32((uint32_t)(EDX));
  /* 113d6b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6b54 push eax */
  push32((uint32_t)(EAX));
  /* 113d6b55 call 0x113d6a40 */
  push32(0x113d6b5au); f_113d6a40();
  /* 113d6b5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6b5d pop ebp */
  EBP = (pop32());
  /* 113d6b5e ret  */
  ESPCHK(0x113d6b40u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x113d6b60 (123 bytes, 44 insns) */
void f_113d6b60(void) {
  FTRACE(0x113d6b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6b60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d6b64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113d6b6a je 0x113d6b80 */
  if (C.zf) goto L_113d6b80;
L_113d6b6c:;
  /* 113d6b6c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 113d6b6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113d6b6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113d6b71 je 0x113d6bb3 */
  if (C.zf) goto L_113d6bb3;
  /* 113d6b73 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113d6b79 jne 0x113d6b6c */
  if (!C.zf) goto L_113d6b6c;
  /* 113d6b7b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_113d6b80:;
  /* 113d6b80 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113d6b82 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113d6b87 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6b89 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d6b8c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6b8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6b91 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113d6b96 je 0x113d6b80 */
  if (C.zf) goto L_113d6b80;
  /* 113d6b98 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 113d6b9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113d6b9d je 0x113d6bd1 */
  if (C.zf) goto L_113d6bd1;
  /* 113d6b9f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113d6ba1 je 0x113d6bc7 */
  if (C.zf) goto L_113d6bc7;
  /* 113d6ba3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 113d6ba8 je 0x113d6bbd */
  if (C.zf) goto L_113d6bbd;
  /* 113d6baa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 113d6baf je 0x113d6bb3 */
  if (C.zf) goto L_113d6bb3;
  /* 113d6bb1 jmp 0x113d6b80 */
  goto L_113d6b80;
L_113d6bb3:;
  /* 113d6bb3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 113d6bb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d6bba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6bbc ret  */
  ESPCHK(0x113d6b60u, _esp0);
  ESP += 4; return;
L_113d6bbd:;
  /* 113d6bbd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 113d6bc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d6bc4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6bc6 ret  */
  ESPCHK(0x113d6b60u, _esp0);
  ESP += 4; return;
L_113d6bc7:;
  /* 113d6bc7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 113d6bca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d6bce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6bd0 ret  */
  ESPCHK(0x113d6b60u, _esp0);
  ESP += 4; return;
L_113d6bd1:;
  /* 113d6bd1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 113d6bd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d6bd8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6bda ret  */
  ESPCHK(0x113d6b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006be0 @ 0x113d6be0 (249 bytes, 93 insns) */
void f_113d6be0(void) {
  FTRACE(0x113d6be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6be0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6be1 mov ebp, esp */
  EBP = (ESP);
  /* 113d6be3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6be6 push ebx */
  push32((uint32_t)(EBX));
  /* 113d6be7 push esi */
  push32((uint32_t)(ESI));
  /* 113d6be8 push edi */
  push32((uint32_t)(EDI));
  /* 113d6be9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 113d6bec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113d6bef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 113d6bf2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_113d6bf5:;
  /* 113d6bf5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6bf9 jne 0x113d6c19 */
  if (!C.zf) goto L_113d6c19;
  /* 113d6bfb push 0x113faea8 */
  push32((uint32_t)(0x113faea8u));
  /* 113d6c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6c02 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 113d6c04 push 0x113fae9c */
  push32((uint32_t)(0x113fae9cu));
  /* 113d6c09 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d6c0b call 0x113d2df0 */
  push32(0x113d6c10u); f_113d2df0();
  /* 113d6c10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6c13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6c16 jne 0x113d6c19 */
  if (!C.zf) goto L_113d6c19;
  /* 113d6c18 int3  */
  x86_unimpl("int3 @ 0x113d6c18");
L_113d6c19:;
  /* 113d6c19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d6c1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d6c1d jne 0x113d6bf5 */
  if (!C.zf) goto L_113d6bf5;
L_113d6c1f:;
  /* 113d6c1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6c23 jne 0x113d6c43 */
  if (!C.zf) goto L_113d6c43;
  /* 113d6c25 push 0x113fae8c */
  push32((uint32_t)(0x113fae8cu));
  /* 113d6c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6c2c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113d6c2e push 0x113fae9c */
  push32((uint32_t)(0x113fae9cu));
  /* 113d6c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d6c35 call 0x113d2df0 */
  push32(0x113d6c3au); f_113d2df0();
  /* 113d6c3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6c3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6c40 jne 0x113d6c43 */
  if (!C.zf) goto L_113d6c43;
  /* 113d6c42 int3  */
  x86_unimpl("int3 @ 0x113d6c42");
L_113d6c43:;
  /* 113d6c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d6c47 jne 0x113d6c1f */
  if (!C.zf) goto L_113d6c1f;
  /* 113d6c49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c4c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 113d6c53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6c59 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d6c5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6c62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113d6c64 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6c6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113d6c6d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113d6c70 push edx */
  push32((uint32_t)(EDX));
  /* 113d6c71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6c74 push eax */
  push32((uint32_t)(EAX));
  /* 113d6c75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c78 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6c79 call 0x113dacc0 */
  push32(0x113d6c7eu); f_113dacc0();
  /* 113d6c7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6c81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113d6c84 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c87 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d6c8a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6c8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c90 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113d6c93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c96 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6c9a jl 0x113d6cbe */
  if ((C.sf!=C.of)) goto L_113d6cbe;
  /* 113d6c9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6c9f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d6ca1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113d6ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d6ca6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d6cac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 113d6caf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6cb2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d6cb4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6cb7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6cba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113d6cbc jmp 0x113d6ccf */
  goto L_113d6ccf;
L_113d6cbe:;
  /* 113d6cbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6cc1 push eax */
  push32((uint32_t)(EAX));
  /* 113d6cc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6cc4 call 0x113daa40 */
  push32(0x113d6cc9u); f_113daa40();
  /* 113d6cc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6ccc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_113d6ccf:;
  /* 113d6ccf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d6cd2 pop edi */
  EDI = (pop32());
  /* 113d6cd3 pop esi */
  ESI = (pop32());
  /* 113d6cd4 pop ebx */
  EBX = (pop32());
  /* 113d6cd5 mov esp, ebp */
  ESP = (EBP);
  /* 113d6cd7 pop ebp */
  EBP = (pop32());
  /* 113d6cd8 ret  */
  ESPCHK(0x113d6be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x113d6ce0 (7 bytes, 3 insns) */
void f_113d6ce0(void) {
  FTRACE(0x113d6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6ce0 push edi */
  push32((uint32_t)(EDI));
  /* 113d6ce1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 113d6ce5 jmp 0x113d6d51 */
  jmp_ind(0x113d6d51u); return;
}

/* FUN_10006cf0 @ 0x113d6cf0 (224 bytes, 84 insns) */
void f_113d6cf0(void) {
  FTRACE(0x113d6cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6cf0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d6cf4 push edi */
  push32((uint32_t)(EDI));
  /* 113d6cf5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113d6cfb je 0x113d6d0c */
  if (C.zf) goto L_113d6d0c;
L_113d6cfd:;
  /* 113d6cfd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 113d6cff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113d6d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113d6d02 je 0x113d6d3f */
  if (C.zf) goto L_113d6d3f;
  /* 113d6d04 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113d6d0a jne 0x113d6cfd */
  if (!C.zf) goto L_113d6cfd;
L_113d6d0c:;
  /* 113d6d0c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113d6d0e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113d6d13 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6d15 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d6d18 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6d1a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6d1d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113d6d22 je 0x113d6d0c */
  if (C.zf) goto L_113d6d0c;
  /* 113d6d24 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 113d6d27 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113d6d29 je 0x113d6d4e */
  if (C.zf) goto L_113d6d4e;
  /* 113d6d2b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113d6d2d je 0x113d6d49 */
  if (C.zf) goto L_113d6d49;
  /* 113d6d2f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 113d6d34 je 0x113d6d44 */
  if (C.zf) goto L_113d6d44;
  /* 113d6d36 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 113d6d3b je 0x113d6d3f */
  if (C.zf) goto L_113d6d3f;
  /* 113d6d3d jmp 0x113d6d0c */
  goto L_113d6d0c;
L_113d6d3f:;
  /* 113d6d3f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 113d6d42 jmp 0x113d6d51 */
  goto L_113d6d51;
L_113d6d44:;
  /* 113d6d44 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 113d6d47 jmp 0x113d6d51 */
  goto L_113d6d51;
L_113d6d49:;
  /* 113d6d49 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 113d6d4c jmp 0x113d6d51 */
  goto L_113d6d51;
L_113d6d4e:;
  /* 113d6d4e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_113d6d51:;
  /* 113d6d51 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 113d6d55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113d6d5b je 0x113d6d76 */
  if (C.zf) goto L_113d6d76;
L_113d6d5d:;
  /* 113d6d5d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113d6d5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113d6d60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 113d6d62 je 0x113d6dc8 */
  if (C.zf) goto L_113d6dc8;
  /* 113d6d64 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 113d6d66 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113d6d67 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113d6d6d jne 0x113d6d5d */
  if (!C.zf) goto L_113d6d5d;
  /* 113d6d6f jmp 0x113d6d76 */
  goto L_113d6d76;
L_113d6d71:;
  /* 113d6d71 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113d6d73 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_113d6d76:;
  /* 113d6d76 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113d6d7b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113d6d7d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6d7f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d6d82 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d6d84 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d6d86 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6d89 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113d6d8e je 0x113d6d71 */
  if (C.zf) goto L_113d6d71;
  /* 113d6d90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 113d6d92 je 0x113d6dc8 */
  if (C.zf) goto L_113d6dc8;
  /* 113d6d94 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 113d6d96 je 0x113d6dbf */
  if (C.zf) goto L_113d6dbf;
  /* 113d6d98 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 113d6d9e je 0x113d6db2 */
  if (C.zf) goto L_113d6db2;
  /* 113d6da0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 113d6da6 je 0x113d6daa */
  if (C.zf) goto L_113d6daa;
  /* 113d6da8 jmp 0x113d6d71 */
  goto L_113d6d71;
L_113d6daa:;
  /* 113d6daa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113d6dac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113d6db0 pop edi */
  EDI = (pop32());
  /* 113d6db1 ret  */
  ESPCHK(0x113d6cf0u, _esp0);
  ESP += 4; return;
L_113d6db2:;
  /* 113d6db2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 113d6db5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113d6db9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 113d6dbd pop edi */
  EDI = (pop32());
  /* 113d6dbe ret  */
  ESPCHK(0x113d6cf0u, _esp0);
  ESP += 4; return;
L_113d6dbf:;
  /* 113d6dbf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 113d6dc2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113d6dc6 pop edi */
  EDI = (pop32());
  /* 113d6dc7 ret  */
  ESPCHK(0x113d6cf0u, _esp0);
  ESP += 4; return;
L_113d6dc8:;
  /* 113d6dc8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 113d6dca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113d6dce pop edi */
  EDI = (pop32());
  /* 113d6dcf ret  */
  ESPCHK(0x113d6cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x113d6dd0 (243 bytes, 91 insns) */
void f_113d6dd0(void) {
  FTRACE(0x113d6dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6dd1 mov ebp, esp */
  EBP = (ESP);
  /* 113d6dd3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6dd6 push ebx */
  push32((uint32_t)(EBX));
  /* 113d6dd7 push esi */
  push32((uint32_t)(ESI));
  /* 113d6dd8 push edi */
  push32((uint32_t)(EDI));
  /* 113d6dd9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 113d6ddc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113d6ddf:;
  /* 113d6ddf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6de3 jne 0x113d6e03 */
  if (!C.zf) goto L_113d6e03;
  /* 113d6de5 push 0x113faea8 */
  push32((uint32_t)(0x113faea8u));
  /* 113d6dea push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6dec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 113d6dee push 0x113faeb8 */
  push32((uint32_t)(0x113faeb8u));
  /* 113d6df3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d6df5 call 0x113d2df0 */
  push32(0x113d6dfau); f_113d2df0();
  /* 113d6dfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6dfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6e00 jne 0x113d6e03 */
  if (!C.zf) goto L_113d6e03;
  /* 113d6e02 int3  */
  x86_unimpl("int3 @ 0x113d6e02");
L_113d6e03:;
  /* 113d6e03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d6e05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d6e07 jne 0x113d6ddf */
  if (!C.zf) goto L_113d6ddf;
L_113d6e09:;
  /* 113d6e09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6e0d jne 0x113d6e2d */
  if (!C.zf) goto L_113d6e2d;
  /* 113d6e0f push 0x113fae8c */
  push32((uint32_t)(0x113fae8cu));
  /* 113d6e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6e16 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 113d6e18 push 0x113faeb8 */
  push32((uint32_t)(0x113faeb8u));
  /* 113d6e1d push 2 */
  push32((uint32_t)(0x2u));
  /* 113d6e1f call 0x113d2df0 */
  push32(0x113d6e24u); f_113d2df0();
  /* 113d6e24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6e27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6e2a jne 0x113d6e2d */
  if (!C.zf) goto L_113d6e2d;
  /* 113d6e2c int3  */
  x86_unimpl("int3 @ 0x113d6e2c");
L_113d6e2d:;
  /* 113d6e2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d6e2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d6e31 jne 0x113d6e09 */
  if (!C.zf) goto L_113d6e09;
  /* 113d6e33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e36 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 113d6e3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6e43 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113d6e46 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6e4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 113d6e4e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6e54 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 113d6e57 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113d6e5a push ecx */
  push32((uint32_t)(ECX));
  /* 113d6e5b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d6e5e push edx */
  push32((uint32_t)(EDX));
  /* 113d6e5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e62 push eax */
  push32((uint32_t)(EAX));
  /* 113d6e63 call 0x113dacc0 */
  push32(0x113d6e68u); f_113dacc0();
  /* 113d6e68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6e6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113d6e6e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e71 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d6e74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6e77 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113d6e7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e80 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6e84 jl 0x113d6ea8 */
  if ((C.sf!=C.of)) goto L_113d6ea8;
  /* 113d6e86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e89 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d6e8b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113d6e8e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113d6e90 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113d6e96 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113d6e99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6e9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d6e9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6ea1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6ea4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113d6ea6 jmp 0x113d6eb9 */
  goto L_113d6eb9;
L_113d6ea8:;
  /* 113d6ea8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113d6eab push edx */
  push32((uint32_t)(EDX));
  /* 113d6eac push 0 */
  push32((uint32_t)(0x0u));
  /* 113d6eae call 0x113daa40 */
  push32(0x113d6eb3u); f_113daa40();
  /* 113d6eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6eb6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_113d6eb9:;
  /* 113d6eb9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113d6ebc pop edi */
  EDI = (pop32());
  /* 113d6ebd pop esi */
  ESI = (pop32());
  /* 113d6ebe pop ebx */
  EBX = (pop32());
  /* 113d6ebf mov esp, ebp */
  ESP = (EBP);
  /* 113d6ec1 pop ebp */
  EBP = (pop32());
  /* 113d6ec2 ret  */
  ESPCHK(0x113d6dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x113d6ed0 (47 bytes, 17 insns) */
void f_113d6ed0(void) {
  FTRACE(0x113d6ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 113d6ed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6ed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 113d6eda jb 0x113d6ef0 */
  if (C.cf) goto L_113d6ef0;
L_113d6edc:;
  /* 113d6edc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6ee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6ee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 113d6ee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6eee jae 0x113d6edc */
  if (!C.cf) goto L_113d6edc;
L_113d6ef0:;
  /* 113d6ef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6ef2 mov eax, esp */
  EAX = (ESP);
  /* 113d6ef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 113d6ef6 mov esp, ecx */
  ESP = (ECX);
  /* 113d6ef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d6efa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d6efd push eax */
  push32((uint32_t)(EAX));
  /* 113d6efe ret  */
  ESPCHK(0x113d6ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f00 @ 0x113d6f00 (507 bytes, 151 insns) [1 switch table(s)] */
void f_113d6f00(void) {
  FTRACE(0x113d6f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d6f00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d6f01 mov ebp, esp */
  EBP = (ESP);
  /* 113d6f03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6f06 push esi */
  push32((uint32_t)(ESI));
  /* 113d6f07 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f0b je 0x113d6f13 */
  if (C.zf) goto L_113d6f13;
  /* 113d6f0d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f11 jne 0x113d6f18 */
  if (!C.zf) goto L_113d6f18;
L_113d6f13:;
  /* 113d6f13 jmp 0x113d70e8 */
  goto L_113d70e8;
L_113d6f18:;
  /* 113d6f18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f1c je 0x113d6f34 */
  if (C.zf) goto L_113d6f34;
  /* 113d6f1e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f22 je 0x113d6f34 */
  if (C.zf) goto L_113d6f34;
  /* 113d6f24 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f28 je 0x113d6f34 */
  if (C.zf) goto L_113d6f34;
  /* 113d6f2a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f2e jne 0x113d7011 */
  if (!C.zf) goto L_113d7011;
L_113d6f34:;
  /* 113d6f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d6f36 call 0x113d7730 */
  push32(0x113d6f3bu); f_113d7730();
  /* 113d6f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6f3e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f42 je 0x113d6f4a */
  if (C.zf) goto L_113d6f4a;
  /* 113d6f44 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f48 jne 0x113d6f8f */
  if (!C.zf) goto L_113d6f8f;
L_113d6f4a:;
  /* 113d6f4a cmp dword ptr [0x113ff68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f51 jne 0x113d6f8f */
  if (!C.zf) goto L_113d6f8f;
  /* 113d6f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d6f55 push 0x113d7130 */
  push32((uint32_t)(0x113d7130u));
  /* 113d6f5a call dword ptr [0x1140232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140232c))), 0x113d6f60u);
  /* 113d6f60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6f63 jne 0x113d6f71 */
  if (!C.zf) goto L_113d6f71;
  /* 113d6f65 mov dword ptr [0x113ff68c], 1 */
  w32((uint32_t)(0x113ff68c), (0x1u));
  /* 113d6f6f jmp 0x113d6f8f */
  goto L_113d6f8f;
L_113d6f71:;
  /* 113d6f71 call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113d6f77u);
  /* 113d6f77 mov esi, eax */
  ESI = (EAX);
  /* 113d6f79 call 0x113dbc10 */
  push32(0x113d6f7eu); f_113dbc10();
  /* 113d6f7e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 113d6f80 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d6f82 call 0x113d77d0 */
  push32(0x113d6f87u); f_113d77d0();
  /* 113d6f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d6f8a jmp 0x113d70e8 */
  goto L_113d70e8;
L_113d6f8f:;
  /* 113d6f8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d6f92 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d6f95 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d6f98 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d6f9b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113d6f9e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d6fa2 ja 0x113d7002 */
  if ((!C.cf&&!C.zf)) goto L_113d7002;
  /* 113d6fa4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d6fa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d6fa9 mov dl, byte ptr [eax + 0x113d710f] */
  DL = (r8((uint32_t)(EAX + 0x113d710f)));
  /* 113d6faf jmp dword ptr [edx*4 + 0x113d70fb] */
  switch (EDX) {
    case 0: goto L_113d6fb6;
    case 1: goto L_113d6ff0;
    case 2: goto L_113d6fca;
    case 3: goto L_113d6fdd;
    case 4: goto L_113d7002;
    default: x86_unimpl("switch@0x113d6faf out of table"); return;
  }
L_113d6fb6:;
  /* 113d6fb6 mov ecx, dword ptr [0x113ff67c] */
  ECX = (r32((uint32_t)(0x113ff67c)));
  /* 113d6fbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113d6fbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6fc2 mov dword ptr [0x113ff67c], edx */
  w32((uint32_t)(0x113ff67c), (EDX));
  /* 113d6fc8 jmp 0x113d7002 */
  goto L_113d7002;
L_113d6fca:;
  /* 113d6fca mov eax, dword ptr [0x113ff680] */
  EAX = (r32((uint32_t)(0x113ff680)));
  /* 113d6fcf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d6fd2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6fd5 mov dword ptr [0x113ff680], ecx */
  w32((uint32_t)(0x113ff680), (ECX));
  /* 113d6fdb jmp 0x113d7002 */
  goto L_113d7002;
L_113d6fdd:;
  /* 113d6fdd mov edx, dword ptr [0x113ff684] */
  EDX = (r32((uint32_t)(0x113ff684)));
  /* 113d6fe3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113d6fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6fe9 mov dword ptr [0x113ff684], eax */
  w32((uint32_t)(0x113ff684), (EAX));
  /* 113d6fee jmp 0x113d7002 */
  goto L_113d7002;
L_113d6ff0:;
  /* 113d6ff0 mov ecx, dword ptr [0x113ff688] */
  ECX = (r32((uint32_t)(0x113ff688)));
  /* 113d6ff6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113d6ff9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d6ffc mov dword ptr [0x113ff688], edx */
  w32((uint32_t)(0x113ff688), (EDX));
L_113d7002:;
  /* 113d7002 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d7004 call 0x113d77d0 */
  push32(0x113d7009u); f_113d77d0();
  /* 113d7009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d700c jmp 0x113d70e3 */
  goto L_113d70e3;
L_113d7011:;
  /* 113d7011 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7015 je 0x113d7028 */
  if (C.zf) goto L_113d7028;
  /* 113d7017 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d701b je 0x113d7028 */
  if (C.zf) goto L_113d7028;
  /* 113d701d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7021 je 0x113d7028 */
  if (C.zf) goto L_113d7028;
  /* 113d7023 jmp 0x113d70e8 */
  goto L_113d70e8;
L_113d7028:;
  /* 113d7028 call 0x113d3770 */
  push32(0x113d702du); f_113d3770();
  /* 113d702d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d7030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7033 cmp dword ptr [eax + 0x50], 0x113fdc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x113fdc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d703a jne 0x113d7085 */
  if (!C.zf) goto L_113d7085;
  /* 113d703c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 113d7041 push 0x113faec4 */
  push32((uint32_t)(0x113faec4u));
  /* 113d7046 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d7048 mov ecx, dword ptr [0x113fdc80] */
  ECX = (r32((uint32_t)(0x113fdc80)));
  /* 113d704e push ecx */
  push32((uint32_t)(ECX));
  /* 113d704f call 0x113d3d30 */
  push32(0x113d7054u); f_113d3d30();
  /* 113d7054 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7057 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d705a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 113d705d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7060 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7064 je 0x113d7083 */
  if (C.zf) goto L_113d7083;
  /* 113d7066 mov ecx, dword ptr [0x113fdc80] */
  ECX = (r32((uint32_t)(0x113fdc80)));
  /* 113d706c push ecx */
  push32((uint32_t)(ECX));
  /* 113d706d push 0x113fdc00 */
  push32((uint32_t)(0x113fdc00u));
  /* 113d7072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7075 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 113d7078 push eax */
  push32((uint32_t)(EAX));
  /* 113d7079 call 0x113da610 */
  push32(0x113d707eu); f_113da610();
  /* 113d707e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7081 jmp 0x113d7085 */
  goto L_113d7085;
L_113d7083:;
  /* 113d7083 jmp 0x113d70e8 */
  goto L_113d70e8;
L_113d7085:;
  /* 113d7085 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7088 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113d708b push edx */
  push32((uint32_t)(EDX));
  /* 113d708c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d708f push eax */
  push32((uint32_t)(EAX));
  /* 113d7090 call 0x113d7410 */
  push32(0x113d7095u); f_113d7410();
  /* 113d7095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7098 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d709b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d709f jne 0x113d70a3 */
  if (!C.zf) goto L_113d70a3;
  /* 113d70a1 jmp 0x113d70e8 */
  goto L_113d70e8;
L_113d70a3:;
  /* 113d70a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d70a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113d70a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113d70ac:;
  /* 113d70ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d70af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d70b2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d70b5 jne 0x113d70e3 */
  if (!C.zf) goto L_113d70e3;
  /* 113d70b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d70ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d70bd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113d70c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d70c3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d70c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d70c9 mov edx, dword ptr [0x113fdc84] */
  EDX = (r32((uint32_t)(0x113fdc84)));
  /* 113d70cf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d70d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d70d5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 113d70d8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d70da cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d70dd jb 0x113d70e1 */
  if (C.cf) goto L_113d70e1;
  /* 113d70df jmp 0x113d70e3 */
  goto L_113d70e3;
L_113d70e1:;
  /* 113d70e1 jmp 0x113d70ac */
  goto L_113d70ac;
L_113d70e3:;
  /* 113d70e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d70e6 jmp 0x113d70f6 */
  goto L_113d70f6;
L_113d70e8:;
  /* 113d70e8 call 0x113dbc00 */
  push32(0x113d70edu); f_113dbc00();
  /* 113d70ed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 113d70f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113d70f6:;
  /* 113d70f6 pop esi */
  ESI = (pop32());
  /* 113d70f7 mov esp, ebp */
  ESP = (EBP);
  /* 113d70f9 pop ebp */
  EBP = (pop32());
  /* 113d70fa ret  */
  ESPCHK(0x113d6f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x113d7130 (146 bytes, 45 insns) */
void f_113d7130(void) {
  FTRACE(0x113d7130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7130 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7131 mov ebp, esp */
  EBP = (ESP);
  /* 113d7133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d7136 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d7138 call 0x113d7730 */
  push32(0x113d713du); f_113d7730();
  /* 113d713d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7140 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7144 jne 0x113d715e */
  if (!C.zf) goto L_113d715e;
  /* 113d7146 mov dword ptr [ebp - 8], 0x113ff67c */
  w32((uint32_t)(EBP + -0x8), (0x113ff67cu));
  /* 113d714d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7150 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113d7152 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113d7155 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113d715c jmp 0x113d7174 */
  goto L_113d7174;
L_113d715e:;
  /* 113d715e mov dword ptr [ebp - 8], 0x113ff680 */
  w32((uint32_t)(EBP + -0x8), (0x113ff680u));
  /* 113d7165 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7168 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d716a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d716d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_113d7174:;
  /* 113d7174 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7178 jne 0x113d7188 */
  if (!C.zf) goto L_113d7188;
  /* 113d717a push 1 */
  push32((uint32_t)(0x1u));
  /* 113d717c call 0x113d77d0 */
  push32(0x113d7181u); f_113d77d0();
  /* 113d7181 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7186 jmp 0x113d71bc */
  goto L_113d71bc;
L_113d7188:;
  /* 113d7188 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d718c je 0x113d71ad */
  if (C.zf) goto L_113d71ad;
  /* 113d718e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7191 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 113d7197 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d7199 call 0x113d77d0 */
  push32(0x113d719eu); f_113d77d0();
  /* 113d719e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d71a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d71a4 push edx */
  push32((uint32_t)(EDX));
  /* 113d71a5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x113d71a8u);
  /* 113d71a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d71ab jmp 0x113d71b7 */
  goto L_113d71b7;
L_113d71ad:;
  /* 113d71ad push 1 */
  push32((uint32_t)(0x1u));
  /* 113d71af call 0x113d77d0 */
  push32(0x113d71b4u); f_113d77d0();
  /* 113d71b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d71b7:;
  /* 113d71b7 mov eax, 1 */
  EAX = (0x1u);
L_113d71bc:;
  /* 113d71bc mov esp, ebp */
  ESP = (EBP);
  /* 113d71be pop ebp */
  EBP = (pop32());
  /* 113d71bf ret 4 */
  ESPCHK(0x113d7130u, _esp0);
  ESP += 8; return;
}

/* FUN_100071d0 @ 0x113d71d0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_113d71d0(void) {
  FTRACE(0x113d71d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d71d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d71d1 mov ebp, esp */
  EBP = (ESP);
  /* 113d71d3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d71d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113d71dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d71e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113d71e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d71e6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d71e9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113d71ec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d71f0 ja 0x113d729e */
  if ((!C.cf&&!C.zf)) goto L_113d729e;
  /* 113d71f6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113d71f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d71fb mov dl, byte ptr [eax + 0x113d73f2] */
  DL = (r8((uint32_t)(EAX + 0x113d73f2)));
  /* 113d7201 jmp dword ptr [edx*4 + 0x113d73da] */
  switch (EDX) {
    case 0: goto L_113d7208;
    case 1: goto L_113d7273;
    case 2: goto L_113d7259;
    case 3: goto L_113d7225;
    case 4: goto L_113d723f;
    case 5: goto L_113d729e;
    default: x86_unimpl("switch@0x113d7201 out of table"); return;
  }
L_113d7208:;
  /* 113d7208 mov dword ptr [ebp - 0x18], 0x113ff67c */
  w32((uint32_t)(EBP + -0x18), (0x113ff67cu));
  /* 113d720f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d7212 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d7214 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113d7217 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d721a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d721d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d7220 jmp 0x113d72a6 */
  goto L_113d72a6;
L_113d7225:;
  /* 113d7225 mov dword ptr [ebp - 0x18], 0x113ff680 */
  w32((uint32_t)(EBP + -0x18), (0x113ff680u));
  /* 113d722c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d722f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d7231 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113d7234 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d7237 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d723a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d723d jmp 0x113d72a6 */
  goto L_113d72a6;
L_113d723f:;
  /* 113d723f mov dword ptr [ebp - 0x18], 0x113ff684 */
  w32((uint32_t)(EBP + -0x18), (0x113ff684u));
  /* 113d7246 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d7249 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d724b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113d724e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d7251 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7254 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d7257 jmp 0x113d72a6 */
  goto L_113d72a6;
L_113d7259:;
  /* 113d7259 mov dword ptr [ebp - 0x18], 0x113ff688 */
  w32((uint32_t)(EBP + -0x18), (0x113ff688u));
  /* 113d7260 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d7263 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d7265 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113d7268 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d726b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d726e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d7271 jmp 0x113d72a6 */
  goto L_113d72a6;
L_113d7273:;
  /* 113d7273 call 0x113d3770 */
  push32(0x113d7278u); f_113d3770();
  /* 113d7278 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d727b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d727e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113d7281 push edx */
  push32((uint32_t)(EDX));
  /* 113d7282 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7285 push eax */
  push32((uint32_t)(EAX));
  /* 113d7286 call 0x113d7410 */
  push32(0x113d728bu); f_113d7410();
  /* 113d728b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d728e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7291 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113d7294 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d7297 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d7299 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113d729c jmp 0x113d72a6 */
  goto L_113d72a6;
L_113d729e:;
  /* 113d729e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d72a1 jmp 0x113d73d6 */
  goto L_113d73d6;
L_113d72a6:;
  /* 113d72a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d72aa je 0x113d72b6 */
  if (C.zf) goto L_113d72b6;
  /* 113d72ac push 1 */
  push32((uint32_t)(0x1u));
  /* 113d72ae call 0x113d7730 */
  push32(0x113d72b3u); f_113d7730();
  /* 113d72b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d72b6:;
  /* 113d72b6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d72ba jne 0x113d72d3 */
  if (!C.zf) goto L_113d72d3;
  /* 113d72bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d72c0 je 0x113d72cc */
  if (C.zf) goto L_113d72cc;
  /* 113d72c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113d72c4 call 0x113d77d0 */
  push32(0x113d72c9u); f_113d77d0();
  /* 113d72c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d72cc:;
  /* 113d72cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d72ce jmp 0x113d73d6 */
  goto L_113d73d6;
L_113d72d3:;
  /* 113d72d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d72d7 jne 0x113d72f0 */
  if (!C.zf) goto L_113d72f0;
  /* 113d72d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d72dd je 0x113d72e9 */
  if (C.zf) goto L_113d72e9;
  /* 113d72df push 1 */
  push32((uint32_t)(0x1u));
  /* 113d72e1 call 0x113d77d0 */
  push32(0x113d72e6u); f_113d77d0();
  /* 113d72e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d72e9:;
  /* 113d72e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 113d72eb call 0x113d34f0 */
  push32(0x113d72f0u); f_113d34f0();
L_113d72f0:;
  /* 113d72f0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d72f4 je 0x113d7302 */
  if (C.zf) goto L_113d7302;
  /* 113d72f6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d72fa je 0x113d7302 */
  if (C.zf) goto L_113d7302;
  /* 113d72fc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7300 jne 0x113d732e */
  if (!C.zf) goto L_113d732e;
L_113d7302:;
  /* 113d7302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7305 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 113d7308 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113d730b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d730e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 113d7315 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7319 jne 0x113d732e */
  if (!C.zf) goto L_113d732e;
  /* 113d731b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d731e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 113d7321 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d7324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7327 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_113d732e:;
  /* 113d732e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7332 jne 0x113d7370 */
  if (!C.zf) goto L_113d7370;
  /* 113d7334 mov eax, dword ptr [0x113fdc78] */
  EAX = (r32((uint32_t)(0x113fdc78)));
  /* 113d7339 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d733c jmp 0x113d7347 */
  goto L_113d7347;
L_113d733e:;
  /* 113d733e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7341 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7344 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113d7347:;
  /* 113d7347 mov edx, dword ptr [0x113fdc78] */
  EDX = (r32((uint32_t)(0x113fdc78)));
  /* 113d734d add edx, dword ptr [0x113fdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113fdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7353 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7356 jge 0x113d736e */
  if ((C.sf==C.of)) goto L_113d736e;
  /* 113d7358 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d735b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d735e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7361 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113d7364 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 113d736c jmp 0x113d733e */
  goto L_113d733e;
L_113d736e:;
  /* 113d736e jmp 0x113d7379 */
  goto L_113d7379;
L_113d7370:;
  /* 113d7370 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d7373 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113d7379:;
  /* 113d7379 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d737d je 0x113d7389 */
  if (C.zf) goto L_113d7389;
  /* 113d737f push 1 */
  push32((uint32_t)(0x1u));
  /* 113d7381 call 0x113d77d0 */
  push32(0x113d7386u); f_113d77d0();
  /* 113d7386 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d7389:;
  /* 113d7389 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d738d jne 0x113d73a0 */
  if (!C.zf) goto L_113d73a0;
  /* 113d738f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7392 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 113d7395 push edx */
  push32((uint32_t)(EDX));
  /* 113d7396 push 8 */
  push32((uint32_t)(0x8u));
  /* 113d7398 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x113d739bu);
  /* 113d739b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d739e jmp 0x113d73aa */
  goto L_113d73aa;
L_113d73a0:;
  /* 113d73a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d73a3 push eax */
  push32((uint32_t)(EAX));
  /* 113d73a4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x113d73a7u);
  /* 113d73a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d73aa:;
  /* 113d73aa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d73ae je 0x113d73bc */
  if (C.zf) goto L_113d73bc;
  /* 113d73b0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d73b4 je 0x113d73bc */
  if (C.zf) goto L_113d73bc;
  /* 113d73b6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d73ba jne 0x113d73d4 */
  if (!C.zf) goto L_113d73d4;
L_113d73bc:;
  /* 113d73bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d73bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d73c2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 113d73c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d73c9 jne 0x113d73d4 */
  if (!C.zf) goto L_113d73d4;
  /* 113d73cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d73ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d73d1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_113d73d4:;
  /* 113d73d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d73d6:;
  /* 113d73d6 mov esp, ebp */
  ESP = (EBP);
  /* 113d73d8 pop ebp */
  EBP = (pop32());
  /* 113d73d9 ret  */
  ESPCHK(0x113d71d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x113d7410 (91 bytes, 35 insns) */
void f_113d7410(void) {
  FTRACE(0x113d7410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7410 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7411 mov ebp, esp */
  EBP = (ESP);
  /* 113d7413 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7414 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7417 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d741a:;
  /* 113d741a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d741d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113d7420 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7423 je 0x113d7443 */
  if (C.zf) goto L_113d7443;
  /* 113d7425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7428 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d742b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d742e mov ecx, dword ptr [0x113fdc84] */
  ECX = (r32((uint32_t)(0x113fdc84)));
  /* 113d7434 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d7437 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d743a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d743c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d743f jae 0x113d7443 */
  if (!C.cf) goto L_113d7443;
  /* 113d7441 jmp 0x113d741a */
  goto L_113d741a;
L_113d7443:;
  /* 113d7443 mov eax, dword ptr [0x113fdc84] */
  EAX = (r32((uint32_t)(0x113fdc84)));
  /* 113d7448 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d744b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d744e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7450 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7453 jae 0x113d7465 */
  if (!C.cf) goto L_113d7465;
  /* 113d7455 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7458 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 113d745b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d745e jne 0x113d7465 */
  if (!C.zf) goto L_113d7465;
  /* 113d7460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7463 jmp 0x113d7467 */
  goto L_113d7467;
L_113d7465:;
  /* 113d7465 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d7467:;
  /* 113d7467 mov esp, ebp */
  ESP = (EBP);
  /* 113d7469 pop ebp */
  EBP = (pop32());
  /* 113d746a ret  */
  ESPCHK(0x113d7410u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x113d7470 (13 bytes, 6 insns) */
void f_113d7470(void) {
  FTRACE(0x113d7470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7470 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7471 mov ebp, esp */
  EBP = (ESP);
  /* 113d7473 call 0x113d3770 */
  push32(0x113d7478u); f_113d3770();
  /* 113d7478 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d747b pop ebp */
  EBP = (pop32());
  /* 113d747c ret  */
  ESPCHK(0x113d7470u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x113d7480 (13 bytes, 6 insns) */
void f_113d7480(void) {
  FTRACE(0x113d7480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7480 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7481 mov ebp, esp */
  EBP = (ESP);
  /* 113d7483 call 0x113d3770 */
  push32(0x113d7488u); f_113d3770();
  /* 113d7488 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d748b pop ebp */
  EBP = (pop32());
  /* 113d748c ret  */
  ESPCHK(0x113d7480u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x113d7490 (187 bytes, 54 insns) */
void f_113d7490(void) {
  FTRACE(0x113d7490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7490 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7491 mov ebp, esp */
  EBP = (ESP);
  /* 113d7493 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d7496 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d749d cmp dword ptr [0x113ff690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d74a4 jne 0x113d7503 */
  if (!C.zf) goto L_113d7503;
  /* 113d74a6 push 0x113fa2f0 */
  push32((uint32_t)(0x113fa2f0u));
  /* 113d74ab call dword ptr [0x11402360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402360))), 0x113d74b1u);
  /* 113d74b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d74b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d74b8 je 0x113d74d7 */
  if (C.zf) goto L_113d74d7;
  /* 113d74ba push 0x113faef4 */
  push32((uint32_t)(0x113faef4u));
  /* 113d74bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d74c2 push eax */
  push32((uint32_t)(EAX));
  /* 113d74c3 call dword ptr [0x1140235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140235c))), 0x113d74c9u);
  /* 113d74c9 mov dword ptr [0x113ff690], eax */
  w32((uint32_t)(0x113ff690), (EAX));
  /* 113d74ce cmp dword ptr [0x113ff690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d74d5 jne 0x113d74db */
  if (!C.zf) goto L_113d74db;
L_113d74d7:;
  /* 113d74d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d74d9 jmp 0x113d7547 */
  goto L_113d7547;
L_113d74db:;
  /* 113d74db push 0x113faee4 */
  push32((uint32_t)(0x113faee4u));
  /* 113d74e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d74e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d74e4 call dword ptr [0x1140235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140235c))), 0x113d74eau);
  /* 113d74ea mov dword ptr [0x113ff694], eax */
  w32((uint32_t)(0x113ff694), (EAX));
  /* 113d74ef push 0x113faed0 */
  push32((uint32_t)(0x113faed0u));
  /* 113d74f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d74f7 push edx */
  push32((uint32_t)(EDX));
  /* 113d74f8 call dword ptr [0x1140235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140235c))), 0x113d74feu);
  /* 113d74fe mov dword ptr [0x113ff698], eax */
  w32((uint32_t)(0x113ff698), (EAX));
L_113d7503:;
  /* 113d7503 cmp dword ptr [0x113ff694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d750a je 0x113d7515 */
  if (C.zf) goto L_113d7515;
  /* 113d750c call dword ptr [0x113ff694] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff694))), 0x113d7512u);
  /* 113d7512 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d7515:;
  /* 113d7515 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7519 je 0x113d7531 */
  if (C.zf) goto L_113d7531;
  /* 113d751b cmp dword ptr [0x113ff698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7522 je 0x113d7531 */
  if (C.zf) goto L_113d7531;
  /* 113d7524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7527 push eax */
  push32((uint32_t)(EAX));
  /* 113d7528 call dword ptr [0x113ff698] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff698))), 0x113d752eu);
  /* 113d752e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d7531:;
  /* 113d7531 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113d7534 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7535 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7538 push edx */
  push32((uint32_t)(EDX));
  /* 113d7539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d753c push eax */
  push32((uint32_t)(EAX));
  /* 113d753d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7540 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7541 call dword ptr [0x113ff690] */
  call_ind((uint32_t)(r32((uint32_t)(0x113ff690))), 0x113d7547u);
L_113d7547:;
  /* 113d7547 mov esp, ebp */
  ESP = (EBP);
  /* 113d7549 pop ebp */
  EBP = (pop32());
  /* 113d754a ret  */
  ESPCHK(0x113d7490u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x113d7550 (254 bytes, 109 insns) */
void f_113d7550(void) {
  FTRACE(0x113d7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7550 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 113d7554 push edi */
  push32((uint32_t)(EDI));
  /* 113d7555 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113d7557 je 0x113d75d3 */
  if (C.zf) goto L_113d75d3;
  /* 113d7559 push esi */
  push32((uint32_t)(ESI));
  /* 113d755a push ebx */
  push32((uint32_t)(EBX));
  /* 113d755b mov ebx, ecx */
  EBX = (ECX);
  /* 113d755d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 113d7561 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 113d7567 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 113d756b jne 0x113d7574 */
  if (!C.zf) goto L_113d7574;
  /* 113d756d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113d7570 jne 0x113d75e1 */
  if (!C.zf) goto L_113d75e1;
  /* 113d7572 jmp 0x113d7595 */
  goto L_113d7595;
L_113d7574:;
  /* 113d7574 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113d7576 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113d7577 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113d7579 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113d757a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113d757b je 0x113d75a2 */
  if (C.zf) goto L_113d75a2;
  /* 113d757d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113d757f je 0x113d75aa */
  if (C.zf) goto L_113d75aa;
  /* 113d7581 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 113d7587 jne 0x113d7574 */
  if (!C.zf) goto L_113d7574;
  /* 113d7589 mov ebx, ecx */
  EBX = (ECX);
  /* 113d758b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113d758e jne 0x113d75e1 */
  if (!C.zf) goto L_113d75e1;
L_113d7590:;
  /* 113d7590 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 113d7593 je 0x113d75a2 */
  if (C.zf) goto L_113d75a2;
L_113d7595:;
  /* 113d7595 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113d7597 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113d7598 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113d759a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113d759b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113d759d je 0x113d75ce */
  if (C.zf) goto L_113d75ce;
  /* 113d759f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 113d75a0 jne 0x113d7595 */
  if (!C.zf) goto L_113d7595;
L_113d75a2:;
  /* 113d75a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 113d75a6 pop ebx */
  EBX = (pop32());
  /* 113d75a7 pop esi */
  ESI = (pop32());
  /* 113d75a8 pop edi */
  EDI = (pop32());
  /* 113d75a9 ret  */
  ESPCHK(0x113d7550u, _esp0);
  ESP += 4; return;
L_113d75aa:;
  /* 113d75aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 113d75b0 je 0x113d75c4 */
  if (C.zf) goto L_113d75c4;
L_113d75b2:;
  /* 113d75b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113d75b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113d75b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113d75b6 je 0x113d7646 */
  if (C.zf) goto L_113d7646;
  /* 113d75bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 113d75c2 jne 0x113d75b2 */
  if (!C.zf) goto L_113d75b2;
L_113d75c4:;
  /* 113d75c4 mov ebx, ecx */
  EBX = (ECX);
  /* 113d75c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113d75c9 jne 0x113d7637 */
  if (!C.zf) goto L_113d7637;
L_113d75cb:;
  /* 113d75cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113d75cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_113d75ce:;
  /* 113d75ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 113d75cf jne 0x113d75cb */
  if (!C.zf) goto L_113d75cb;
  /* 113d75d1 pop ebx */
  EBX = (pop32());
  /* 113d75d2 pop esi */
  ESI = (pop32());
L_113d75d3:;
  /* 113d75d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113d75d7 pop edi */
  EDI = (pop32());
  /* 113d75d8 ret  */
  ESPCHK(0x113d7550u, _esp0);
  ESP += 4; return;
L_113d75d9:;
  /* 113d75d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113d75db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113d75de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113d75df je 0x113d7590 */
  if (C.zf) goto L_113d7590;
L_113d75e1:;
  /* 113d75e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113d75e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 113d75e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d75ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d75ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113d75ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 113d75f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113d75f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113d75f9 je 0x113d75d9 */
  if (C.zf) goto L_113d75d9;
  /* 113d75fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 113d75fd je 0x113d762b */
  if (C.zf) goto L_113d762b;
  /* 113d75ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 113d7601 je 0x113d7621 */
  if (C.zf) goto L_113d7621;
  /* 113d7603 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 113d7609 je 0x113d7617 */
  if (C.zf) goto L_113d7617;
  /* 113d760b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 113d7611 jne 0x113d75d9 */
  if (!C.zf) goto L_113d75d9;
  /* 113d7613 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113d7615 jmp 0x113d762f */
  goto L_113d762f;
L_113d7617:;
  /* 113d7617 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d761d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113d761f jmp 0x113d762f */
  goto L_113d762f;
L_113d7621:;
  /* 113d7621 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113d7627 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113d7629 jmp 0x113d762f */
  goto L_113d762f;
L_113d762b:;
  /* 113d762b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113d762d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_113d762f:;
  /* 113d762f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7634 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113d7635 je 0x113d7641 */
  if (C.zf) goto L_113d7641;
L_113d7637:;
  /* 113d7637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113d7639:;
  /* 113d7639 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 113d763b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113d763e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113d763f jne 0x113d7639 */
  if (!C.zf) goto L_113d7639;
L_113d7641:;
  /* 113d7641 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 113d7644 jne 0x113d75cb */
  if (!C.zf) goto L_113d75cb;
L_113d7646:;
  /* 113d7646 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 113d764a pop ebx */
  EBX = (pop32());
  /* 113d764b pop esi */
  ESI = (pop32());
  /* 113d764c pop edi */
  EDI = (pop32());
  /* 113d764d ret  */
  ESPCHK(0x113d7550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x113d7650 (55 bytes, 16 insns) */
void f_113d7650(void) {
  FTRACE(0x113d7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7650 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7651 mov ebp, esp */
  EBP = (ESP);
  /* 113d7653 mov eax, dword ptr [0x113fdb84] */
  EAX = (r32((uint32_t)(0x113fdb84)));
  /* 113d7658 push eax */
  push32((uint32_t)(EAX));
  /* 113d7659 call dword ptr [0x11402334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402334))), 0x113d765fu);
  /* 113d765f mov ecx, dword ptr [0x113fdb74] */
  ECX = (r32((uint32_t)(0x113fdb74)));
  /* 113d7665 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7666 call dword ptr [0x11402334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402334))), 0x113d766cu);
  /* 113d766c mov edx, dword ptr [0x113fdb64] */
  EDX = (r32((uint32_t)(0x113fdb64)));
  /* 113d7672 push edx */
  push32((uint32_t)(EDX));
  /* 113d7673 call dword ptr [0x11402334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402334))), 0x113d7679u);
  /* 113d7679 mov eax, dword ptr [0x113fdb44] */
  EAX = (r32((uint32_t)(0x113fdb44)));
  /* 113d767e push eax */
  push32((uint32_t)(EAX));
  /* 113d767f call dword ptr [0x11402334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402334))), 0x113d7685u);
  /* 113d7685 pop ebp */
  EBP = (pop32());
  /* 113d7686 ret  */
  ESPCHK(0x113d7650u, _esp0);
  ESP += 4; return;
}

/* FUN_10007690 @ 0x113d7690 (159 bytes, 47 insns) */
void f_113d7690(void) {
  FTRACE(0x113d7690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7690 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7691 mov ebp, esp */
  EBP = (ESP);
  /* 113d7693 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d769b jmp 0x113d76a6 */
  goto L_113d76a6;
L_113d769d:;
  /* 113d769d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d76a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d76a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d76a6:;
  /* 113d76a6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d76aa jge 0x113d76f9 */
  if ((C.sf==C.of)) goto L_113d76f9;
  /* 113d76ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d76af cmp dword ptr [ecx*4 + 0x113fdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x113fdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d76b7 je 0x113d76f7 */
  if (C.zf) goto L_113d76f7;
  /* 113d76b9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d76bd je 0x113d76f7 */
  if (C.zf) goto L_113d76f7;
  /* 113d76bf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d76c3 je 0x113d76f7 */
  if (C.zf) goto L_113d76f7;
  /* 113d76c5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d76c9 je 0x113d76f7 */
  if (C.zf) goto L_113d76f7;
  /* 113d76cb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d76cf je 0x113d76f7 */
  if (C.zf) goto L_113d76f7;
  /* 113d76d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d76d4 mov eax, dword ptr [edx*4 + 0x113fdb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113fdb40)));
  /* 113d76db push eax */
  push32((uint32_t)(EAX));
  /* 113d76dc call dword ptr [0x11402380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402380))), 0x113d76e2u);
  /* 113d76e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113d76e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d76e7 mov edx, dword ptr [ecx*4 + 0x113fdb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113fdb40)));
  /* 113d76ee push edx */
  push32((uint32_t)(EDX));
  /* 113d76ef call 0x113d47c0 */
  push32(0x113d76f4u); f_113d47c0();
  /* 113d76f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d76f7:;
  /* 113d76f7 jmp 0x113d769d */
  goto L_113d769d;
L_113d76f9:;
  /* 113d76f9 mov eax, dword ptr [0x113fdb64] */
  EAX = (r32((uint32_t)(0x113fdb64)));
  /* 113d76fe push eax */
  push32((uint32_t)(EAX));
  /* 113d76ff call dword ptr [0x11402380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402380))), 0x113d7705u);
  /* 113d7705 mov ecx, dword ptr [0x113fdb74] */
  ECX = (r32((uint32_t)(0x113fdb74)));
  /* 113d770b push ecx */
  push32((uint32_t)(ECX));
  /* 113d770c call dword ptr [0x11402380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402380))), 0x113d7712u);
  /* 113d7712 mov edx, dword ptr [0x113fdb84] */
  EDX = (r32((uint32_t)(0x113fdb84)));
  /* 113d7718 push edx */
  push32((uint32_t)(EDX));
  /* 113d7719 call dword ptr [0x11402380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402380))), 0x113d771fu);
  /* 113d771f mov eax, dword ptr [0x113fdb44] */
  EAX = (r32((uint32_t)(0x113fdb44)));
  /* 113d7724 push eax */
  push32((uint32_t)(EAX));
  /* 113d7725 call dword ptr [0x11402380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402380))), 0x113d772bu);
  /* 113d772b mov esp, ebp */
  ESP = (EBP);
  /* 113d772d pop ebp */
  EBP = (pop32());
  /* 113d772e ret  */
  ESPCHK(0x113d7690u, _esp0);
  ESP += 4; return;
}

/* FUN_10007730 @ 0x113d7730 (151 bytes, 46 insns) */
void f_113d7730(void) {
  FTRACE(0x113d7730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7730 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7731 mov ebp, esp */
  EBP = (ESP);
  /* 113d7733 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7737 cmp dword ptr [eax*4 + 0x113fdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x113fdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d773f jne 0x113d77b2 */
  if (!C.zf) goto L_113d77b2;
  /* 113d7741 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 113d7746 push 0x113faf00 */
  push32((uint32_t)(0x113faf00u));
  /* 113d774b push 2 */
  push32((uint32_t)(0x2u));
  /* 113d774d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 113d774f call 0x113d3d30 */
  push32(0x113d7754u); f_113d3d30();
  /* 113d7754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7757 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d775a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d775e jne 0x113d776a */
  if (!C.zf) goto L_113d776a;
  /* 113d7760 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113d7762 call 0x113d2ca0 */
  push32(0x113d7767u); f_113d2ca0();
  /* 113d7767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d776a:;
  /* 113d776a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113d776c call 0x113d7730 */
  push32(0x113d7771u); f_113d7730();
  /* 113d7771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7774 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7777 cmp dword ptr [ecx*4 + 0x113fdb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x113fdb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d777f jne 0x113d779a */
  if (!C.zf) goto L_113d779a;
  /* 113d7781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7784 push edx */
  push32((uint32_t)(EDX));
  /* 113d7785 call dword ptr [0x11402334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402334))), 0x113d778bu);
  /* 113d778b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d778e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7791 mov dword ptr [eax*4 + 0x113fdb40], ecx */
  w32((uint32_t)(EAX*4 + 0x113fdb40), (ECX));
  /* 113d7798 jmp 0x113d77a8 */
  goto L_113d77a8;
L_113d779a:;
  /* 113d779a push 2 */
  push32((uint32_t)(0x2u));
  /* 113d779c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d779f push edx */
  push32((uint32_t)(EDX));
  /* 113d77a0 call 0x113d47c0 */
  push32(0x113d77a5u); f_113d47c0();
  /* 113d77a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d77a8:;
  /* 113d77a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113d77aa call 0x113d77d0 */
  push32(0x113d77afu); f_113d77d0();
  /* 113d77af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d77b2:;
  /* 113d77b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d77b5 mov ecx, dword ptr [eax*4 + 0x113fdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113fdb40)));
  /* 113d77bc push ecx */
  push32((uint32_t)(ECX));
  /* 113d77bd call dword ptr [0x11402324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402324))), 0x113d77c3u);
  /* 113d77c3 mov esp, ebp */
  ESP = (EBP);
  /* 113d77c5 pop ebp */
  EBP = (pop32());
  /* 113d77c6 ret  */
  ESPCHK(0x113d7730u, _esp0);
  ESP += 4; return;
}

/* FUN_100077d0 @ 0x113d77d0 (22 bytes, 8 insns) */
void f_113d77d0(void) {
  FTRACE(0x113d77d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d77d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d77d1 mov ebp, esp */
  EBP = (ESP);
  /* 113d77d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d77d6 mov ecx, dword ptr [eax*4 + 0x113fdb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113fdb40)));
  /* 113d77dd push ecx */
  push32((uint32_t)(ECX));
  /* 113d77de call dword ptr [0x11402320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402320))), 0x113d77e4u);
  /* 113d77e4 pop ebp */
  EBP = (pop32());
  /* 113d77e5 ret  */
  ESPCHK(0x113d77d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077f0 @ 0x113d77f0 (26 bytes, 10 insns) */
void f_113d77f0(void) {
  FTRACE(0x113d77f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d77f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d77f1 mov ebp, esp */
  EBP = (ESP);
  /* 113d77f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d77f6 push eax */
  push32((uint32_t)(EAX));
  /* 113d77f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d77f9 call dword ptr [0x11402328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402328))), 0x113d77ffu);
  /* 113d77ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 113d7804 call dword ptr [0x1140236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140236c))), 0x113d780au);
  /* 113d780a pop ebp */
  EBP = (pop32());
  /* 113d780b ret  */
  ESPCHK(0x113d77f0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x113d7810 (446 bytes, 130 insns) */
void f_113d7810(void) {
  FTRACE(0x113d7810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7810 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7811 mov ebp, esp */
  EBP = (ESP);
  /* 113d7813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d7816 call 0x113d3770 */
  push32(0x113d781bu); f_113d3770();
  /* 113d781b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d781e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7821 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 113d7824 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7828 push edx */
  push32((uint32_t)(EDX));
  /* 113d7829 call 0x113d79d0 */
  push32(0x113d782eu); f_113d79d0();
  /* 113d782e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7831 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d7834 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7838 je 0x113d7843 */
  if (C.zf) goto L_113d7843;
  /* 113d783a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d783d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7841 jne 0x113d7852 */
  if (!C.zf) goto L_113d7852;
L_113d7843:;
  /* 113d7843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7846 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7847 call dword ptr [0x11402318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402318))), 0x113d784du);
  /* 113d784d jmp 0x113d79ca */
  goto L_113d79ca;
L_113d7852:;
  /* 113d7852 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7855 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7859 jne 0x113d786f */
  if (!C.zf) goto L_113d786f;
  /* 113d785b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d785e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113d7865 mov eax, 1 */
  EAX = (0x1u);
  /* 113d786a jmp 0x113d79ca */
  goto L_113d79ca;
L_113d786f:;
  /* 113d786f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7872 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7876 jne 0x113d7880 */
  if (!C.zf) goto L_113d7880;
  /* 113d7878 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113d787b jmp 0x113d79ca */
  goto L_113d79ca;
L_113d7880:;
  /* 113d7880 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7883 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113d7886 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d7889 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d788c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 113d788f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113d7892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7895 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7898 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 113d789b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d789e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d78a2 jne 0x113d79a7 */
  if (!C.zf) goto L_113d79a7;
  /* 113d78a8 mov eax, dword ptr [0x113fdc78] */
  EAX = (r32((uint32_t)(0x113fdc78)));
  /* 113d78ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113d78b0 jmp 0x113d78bb */
  goto L_113d78bb;
L_113d78b2:;
  /* 113d78b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d78b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d78b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113d78bb:;
  /* 113d78bb mov edx, dword ptr [0x113fdc78] */
  EDX = (r32((uint32_t)(0x113fdc78)));
  /* 113d78c1 add edx, dword ptr [0x113fdc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113fdc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d78c7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d78ca jge 0x113d78e2 */
  if ((C.sf==C.of)) goto L_113d78e2;
  /* 113d78cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d78cf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d78d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d78d5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113d78d8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 113d78e0 jmp 0x113d78b2 */
  goto L_113d78b2;
L_113d78e2:;
  /* 113d78e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d78e5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 113d78e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113d78eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d78ee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d78f4 jne 0x113d7905 */
  if (!C.zf) goto L_113d7905;
  /* 113d78f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d78f9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 113d7900 jmp 0x113d798d */
  goto L_113d798d;
L_113d7905:;
  /* 113d7905 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7908 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d790e jne 0x113d791c */
  if (!C.zf) goto L_113d791c;
  /* 113d7910 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7913 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 113d791a jmp 0x113d798d */
  goto L_113d798d;
L_113d791c:;
  /* 113d791c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d791f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7925 jne 0x113d7933 */
  if (!C.zf) goto L_113d7933;
  /* 113d7927 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d792a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 113d7931 jmp 0x113d798d */
  goto L_113d798d;
L_113d7933:;
  /* 113d7933 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7936 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d793c jne 0x113d794a */
  if (!C.zf) goto L_113d794a;
  /* 113d793e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7941 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 113d7948 jmp 0x113d798d */
  goto L_113d798d;
L_113d794a:;
  /* 113d794a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d794d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7953 jne 0x113d7961 */
  if (!C.zf) goto L_113d7961;
  /* 113d7955 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7958 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 113d795f jmp 0x113d798d */
  goto L_113d798d;
L_113d7961:;
  /* 113d7961 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7964 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d796a jne 0x113d7978 */
  if (!C.zf) goto L_113d7978;
  /* 113d796c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d796f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 113d7976 jmp 0x113d798d */
  goto L_113d798d;
L_113d7978:;
  /* 113d7978 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d797b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7981 jne 0x113d798d */
  if (!C.zf) goto L_113d798d;
  /* 113d7983 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7986 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_113d798d:;
  /* 113d798d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7990 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 113d7993 push edx */
  push32((uint32_t)(EDX));
  /* 113d7994 push 8 */
  push32((uint32_t)(0x8u));
  /* 113d7996 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x113d7999u);
  /* 113d7999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d799c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d799f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d79a2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 113d79a5 jmp 0x113d79be */
  goto L_113d79be;
L_113d79a7:;
  /* 113d79a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d79aa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 113d79b1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d79b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113d79b7 push ecx */
  push32((uint32_t)(ECX));
  /* 113d79b8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x113d79bbu);
  /* 113d79bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d79be:;
  /* 113d79be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d79c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113d79c4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 113d79c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113d79ca:;
  /* 113d79ca mov esp, ebp */
  ESP = (EBP);
  /* 113d79cc pop ebp */
  EBP = (pop32());
  /* 113d79cd ret  */
  ESPCHK(0x113d7810u, _esp0);
  ESP += 4; return;
}

/* FUN_100079d0 @ 0x113d79d0 (89 bytes, 35 insns) */
void f_113d79d0(void) {
  FTRACE(0x113d79d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d79d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d79d1 mov ebp, esp */
  EBP = (ESP);
  /* 113d79d3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d79d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d79d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113d79da:;
  /* 113d79da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d79dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113d79df cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d79e2 je 0x113d7a02 */
  if (C.zf) goto L_113d7a02;
  /* 113d79e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d79e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d79ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d79ed mov ecx, dword ptr [0x113fdc84] */
  ECX = (r32((uint32_t)(0x113fdc84)));
  /* 113d79f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d79f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d79f9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d79fb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d79fe jae 0x113d7a02 */
  if (!C.cf) goto L_113d7a02;
  /* 113d7a00 jmp 0x113d79da */
  goto L_113d79da;
L_113d7a02:;
  /* 113d7a02 mov eax, dword ptr [0x113fdc84] */
  EAX = (r32((uint32_t)(0x113fdc84)));
  /* 113d7a07 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113d7a0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7a0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7a0f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7a12 jae 0x113d7a1e */
  if (!C.cf) goto L_113d7a1e;
  /* 113d7a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7a17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113d7a19 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7a1c je 0x113d7a22 */
  if (C.zf) goto L_113d7a22;
L_113d7a1e:;
  /* 113d7a1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7a20 jmp 0x113d7a25 */
  goto L_113d7a25;
L_113d7a22:;
  /* 113d7a22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113d7a25:;
  /* 113d7a25 mov esp, ebp */
  ESP = (EBP);
  /* 113d7a27 pop ebp */
  EBP = (pop32());
  /* 113d7a28 ret  */
  ESPCHK(0x113d79d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x113d7a30 (48 bytes, 17 insns) */
void f_113d7a30(void) {
  FTRACE(0x113d7a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7a30 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7a31 mov ebp, esp */
  EBP = (ESP);
  /* 113d7a33 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7a34 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7a36 call 0x113d7730 */
  push32(0x113d7a3bu); f_113d7730();
  /* 113d7a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7a3e mov eax, dword ptr [0x113ff704] */
  EAX = (r32((uint32_t)(0x113ff704)));
  /* 113d7a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d7a46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7a49 mov dword ptr [0x113ff704], ecx */
  w32((uint32_t)(0x113ff704), (ECX));
  /* 113d7a4f push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7a51 call 0x113d77d0 */
  push32(0x113d7a56u); f_113d77d0();
  /* 113d7a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7a59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7a5c mov esp, ebp */
  ESP = (EBP);
  /* 113d7a5e pop ebp */
  EBP = (pop32());
  /* 113d7a5f ret  */
  ESPCHK(0x113d7a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x113d7a60 (10 bytes, 5 insns) */
void f_113d7a60(void) {
  FTRACE(0x113d7a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7a60 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7a61 mov ebp, esp */
  EBP = (ESP);
  /* 113d7a63 mov eax, dword ptr [0x113ff704] */
  EAX = (r32((uint32_t)(0x113ff704)));
  /* 113d7a68 pop ebp */
  EBP = (pop32());
  /* 113d7a69 ret  */
  ESPCHK(0x113d7a60u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x113d7a70 (45 bytes, 19 insns) */
void f_113d7a70(void) {
  FTRACE(0x113d7a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7a70 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7a71 mov ebp, esp */
  EBP = (ESP);
  /* 113d7a73 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7a74 mov eax, dword ptr [0x113ff704] */
  EAX = (r32((uint32_t)(0x113ff704)));
  /* 113d7a79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d7a7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7a80 je 0x113d7a90 */
  if (C.zf) goto L_113d7a90;
  /* 113d7a82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7a85 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7a86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x113d7a89u);
  /* 113d7a89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d7a8e jne 0x113d7a94 */
  if (!C.zf) goto L_113d7a94;
L_113d7a90:;
  /* 113d7a90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7a92 jmp 0x113d7a99 */
  goto L_113d7a99;
L_113d7a94:;
  /* 113d7a94 mov eax, 1 */
  EAX = (0x1u);
L_113d7a99:;
  /* 113d7a99 mov esp, ebp */
  ESP = (EBP);
  /* 113d7a9b pop ebp */
  EBP = (pop32());
  /* 113d7a9c ret  */
  ESPCHK(0x113d7a70u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x113d7aa0 (88 bytes, 40 insns) */
void f_113d7aa0(void) {
  FTRACE(0x113d7aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7aa0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 113d7aa4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d7aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d7aaa je 0x113d7af3 */
  if (C.zf) goto L_113d7af3;
  /* 113d7aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7aae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 113d7ab2 push edi */
  push32((uint32_t)(EDI));
  /* 113d7ab3 mov edi, ecx */
  EDI = (ECX);
  /* 113d7ab5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7ab8 jb 0x113d7ae7 */
  if (C.cf) goto L_113d7ae7;
  /* 113d7aba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113d7abc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 113d7abf je 0x113d7ac9 */
  if (C.zf) goto L_113d7ac9;
  /* 113d7ac1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_113d7ac3:;
  /* 113d7ac3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113d7ac5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113d7ac6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113d7ac7 jne 0x113d7ac3 */
  if (!C.zf) goto L_113d7ac3;
L_113d7ac9:;
  /* 113d7ac9 mov ecx, eax */
  ECX = (EAX);
  /* 113d7acb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113d7ace add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7ad0 mov ecx, eax */
  ECX = (EAX);
  /* 113d7ad2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113d7ad5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7ad7 mov ecx, edx */
  ECX = (EDX);
  /* 113d7ad9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113d7adc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113d7adf je 0x113d7ae7 */
  if (C.zf) goto L_113d7ae7;
  /* 113d7ae1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113d7ae3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113d7ae5 je 0x113d7aed */
  if (C.zf) goto L_113d7aed;
L_113d7ae7:;
  /* 113d7ae7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113d7ae9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113d7aea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 113d7aeb jne 0x113d7ae7 */
  if (!C.zf) goto L_113d7ae7;
L_113d7aed:;
  /* 113d7aed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113d7af1 pop edi */
  EDI = (pop32());
  /* 113d7af2 ret  */
  ESPCHK(0x113d7aa0u, _esp0);
  ESP += 4; return;
L_113d7af3:;
  /* 113d7af3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 113d7af7 ret  */
  ESPCHK(0x113d7aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x113d7b00 (23 bytes, 10 insns) */
void f_113d7b00(void) {
  FTRACE(0x113d7b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7b00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7b01 mov ebp, esp */
  EBP = (ESP);
  /* 113d7b03 mov eax, dword ptr [0x113ff700] */
  EAX = (r32((uint32_t)(0x113ff700)));
  /* 113d7b08 push eax */
  push32((uint32_t)(EAX));
  /* 113d7b09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7b0c push ecx */
  push32((uint32_t)(ECX));
  /* 113d7b0d call 0x113d7b20 */
  push32(0x113d7b12u); f_113d7b20();
  /* 113d7b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7b15 pop ebp */
  EBP = (pop32());
  /* 113d7b16 ret  */
  ESPCHK(0x113d7b00u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x113d7b20 (87 bytes, 34 insns) */
void f_113d7b20(void) {
  FTRACE(0x113d7b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7b20 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7b21 mov ebp, esp */
  EBP = (ESP);
  /* 113d7b23 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7b24 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7b28 jbe 0x113d7b2e */
  if ((C.cf||C.zf)) goto L_113d7b2e;
  /* 113d7b2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7b2c jmp 0x113d7b73 */
  goto L_113d7b73;
L_113d7b2e:;
  /* 113d7b2e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7b32 ja 0x113d7b45 */
  if ((!C.cf&&!C.zf)) goto L_113d7b45;
  /* 113d7b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7b37 push eax */
  push32((uint32_t)(EAX));
  /* 113d7b38 call 0x113d7b80 */
  push32(0x113d7b3du); f_113d7b80();
  /* 113d7b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7b40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d7b43 jmp 0x113d7b4c */
  goto L_113d7b4c;
L_113d7b45:;
  /* 113d7b45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113d7b4c:;
  /* 113d7b4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7b50 jne 0x113d7b58 */
  if (!C.zf) goto L_113d7b58;
  /* 113d7b52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7b56 jne 0x113d7b5d */
  if (!C.zf) goto L_113d7b5d;
L_113d7b58:;
  /* 113d7b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7b5b jmp 0x113d7b73 */
  goto L_113d7b73;
L_113d7b5d:;
  /* 113d7b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7b60 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7b61 call 0x113d7a70 */
  push32(0x113d7b66u); f_113d7a70();
  /* 113d7b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d7b6b jne 0x113d7b71 */
  if (!C.zf) goto L_113d7b71;
  /* 113d7b6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7b6f jmp 0x113d7b73 */
  goto L_113d7b73;
L_113d7b71:;
  /* 113d7b71 jmp 0x113d7b2e */
  goto L_113d7b2e;
L_113d7b73:;
  /* 113d7b73 mov esp, ebp */
  ESP = (EBP);
  /* 113d7b75 pop ebp */
  EBP = (pop32());
  /* 113d7b76 ret  */
  ESPCHK(0x113d7b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b80 @ 0x113d7b80 (109 bytes, 37 insns) */
void f_113d7b80(void) {
  FTRACE(0x113d7b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7b80 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7b81 mov ebp, esp */
  EBP = (ESP);
  /* 113d7b83 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7b87 cmp eax, dword ptr [0x113fdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7b8d ja 0x113d7bbd */
  if ((!C.cf&&!C.zf)) goto L_113d7bbd;
  /* 113d7b8f push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7b91 call 0x113d7730 */
  push32(0x113d7b96u); f_113d7730();
  /* 113d7b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7b99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7b9c push ecx */
  push32((uint32_t)(ECX));
  /* 113d7b9d call 0x113d86c0 */
  push32(0x113d7ba2u); f_113d86c0();
  /* 113d7ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7ba5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d7ba8 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7baa call 0x113d77d0 */
  push32(0x113d7bafu); f_113d77d0();
  /* 113d7baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7bb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7bb6 je 0x113d7bbd */
  if (C.zf) goto L_113d7bbd;
  /* 113d7bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7bbb jmp 0x113d7be9 */
  goto L_113d7be9;
L_113d7bbd:;
  /* 113d7bbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7bc1 jne 0x113d7bca */
  if (!C.zf) goto L_113d7bca;
  /* 113d7bc3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_113d7bca:;
  /* 113d7bca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7bcd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7bd0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 113d7bd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113d7bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7bd9 push eax */
  push32((uint32_t)(EAX));
  /* 113d7bda push 0 */
  push32((uint32_t)(0x0u));
  /* 113d7bdc mov ecx, dword ptr [0x11400ecc] */
  ECX = (r32((uint32_t)(0x11400ecc)));
  /* 113d7be2 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7be3 call dword ptr [0x11402314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402314))), 0x113d7be9u);
L_113d7be9:;
  /* 113d7be9 mov esp, ebp */
  ESP = (EBP);
  /* 113d7beb pop ebp */
  EBP = (pop32());
  /* 113d7bec ret  */
  ESPCHK(0x113d7b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x113d7bf0 (10 bytes, 5 insns) */
void f_113d7bf0(void) {
  FTRACE(0x113d7bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7bf1 mov ebp, esp */
  EBP = (ESP);
  /* 113d7bf3 mov eax, 1 */
  EAX = (0x1u);
  /* 113d7bf8 pop ebp */
  EBP = (pop32());
  /* 113d7bf9 ret  */
  ESPCHK(0x113d7bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x113d7c00 (173 bytes, 59 insns) */
void f_113d7c00(void) {
  FTRACE(0x113d7c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7c00 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7c01 mov ebp, esp */
  EBP = (ESP);
  /* 113d7c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d7c06 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7c0a jbe 0x113d7c13 */
  if ((C.cf||C.zf)) goto L_113d7c13;
  /* 113d7c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7c0e jmp 0x113d7ca9 */
  goto L_113d7ca9;
L_113d7c13:;
  /* 113d7c13 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7c15 call 0x113d7730 */
  push32(0x113d7c1au); f_113d7730();
  /* 113d7c1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7c20 push eax */
  push32((uint32_t)(EAX));
  /* 113d7c21 call 0x113d8030 */
  push32(0x113d7c26u); f_113d8030();
  /* 113d7c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7c29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d7c2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7c30 je 0x113d7c71 */
  if (C.zf) goto L_113d7c71;
  /* 113d7c32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113d7c39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7c3c cmp ecx, dword ptr [0x113fdc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113fdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7c42 ja 0x113d7c62 */
  if ((!C.cf&&!C.zf)) goto L_113d7c62;
  /* 113d7c44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7c47 push edx */
  push32((uint32_t)(EDX));
  /* 113d7c48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7c4b push eax */
  push32((uint32_t)(EAX));
  /* 113d7c4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7c4f push ecx */
  push32((uint32_t)(ECX));
  /* 113d7c50 call 0x113d8f00 */
  push32(0x113d7c55u); f_113d8f00();
  /* 113d7c55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d7c5a je 0x113d7c62 */
  if (C.zf) goto L_113d7c62;
  /* 113d7c5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7c5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113d7c62:;
  /* 113d7c62 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7c64 call 0x113d77d0 */
  push32(0x113d7c69u); f_113d77d0();
  /* 113d7c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7c6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7c6f jmp 0x113d7ca9 */
  goto L_113d7ca9;
L_113d7c71:;
  /* 113d7c71 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7c73 call 0x113d77d0 */
  push32(0x113d7c78u); f_113d77d0();
  /* 113d7c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7c7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7c7f jne 0x113d7c88 */
  if (!C.zf) goto L_113d7c88;
  /* 113d7c81 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_113d7c88:;
  /* 113d7c88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7c8b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7c8e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 113d7c90 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 113d7c93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7c96 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7c9a push edx */
  push32((uint32_t)(EDX));
  /* 113d7c9b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 113d7c9d mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d7ca2 push eax */
  push32((uint32_t)(EAX));
  /* 113d7ca3 call dword ptr [0x1140231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140231c))), 0x113d7ca9u);
L_113d7ca9:;
  /* 113d7ca9 mov esp, ebp */
  ESP = (EBP);
  /* 113d7cab pop ebp */
  EBP = (pop32());
  /* 113d7cac ret  */
  ESPCHK(0x113d7c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x113d7cb0 (490 bytes, 165 insns) */
void f_113d7cb0(void) {
  FTRACE(0x113d7cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7cb1 mov ebp, esp */
  EBP = (ESP);
  /* 113d7cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d7cb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7cba jne 0x113d7ccd */
  if (!C.zf) goto L_113d7ccd;
  /* 113d7cbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7cbf push eax */
  push32((uint32_t)(EAX));
  /* 113d7cc0 call 0x113d7b00 */
  push32(0x113d7cc5u); f_113d7b00();
  /* 113d7cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7cc8 jmp 0x113d7e96 */
  goto L_113d7e96;
L_113d7ccd:;
  /* 113d7ccd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7cd1 jne 0x113d7ce6 */
  if (!C.zf) goto L_113d7ce6;
  /* 113d7cd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7cd7 call 0x113d7ea0 */
  push32(0x113d7cdcu); f_113d7ea0();
  /* 113d7cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7ce1 jmp 0x113d7e96 */
  goto L_113d7e96;
L_113d7ce6:;
  /* 113d7ce6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113d7ced cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7cf1 ja 0x113d7e69 */
  if ((!C.cf&&!C.zf)) goto L_113d7e69;
  /* 113d7cf7 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7cf9 call 0x113d7730 */
  push32(0x113d7cfeu); f_113d7730();
  /* 113d7cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7d04 push edx */
  push32((uint32_t)(EDX));
  /* 113d7d05 call 0x113d8030 */
  push32(0x113d7d0au); f_113d8030();
  /* 113d7d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7d0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113d7d10 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7d14 je 0x113d7e2c */
  if (C.zf) goto L_113d7e2c;
  /* 113d7d1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7d1d cmp eax, dword ptr [0x113fdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113fdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7d23 ja 0x113d7da0 */
  if ((!C.cf&&!C.zf)) goto L_113d7da0;
  /* 113d7d25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7d28 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7d29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7d2c push edx */
  push32((uint32_t)(EDX));
  /* 113d7d2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d7d30 push eax */
  push32((uint32_t)(EAX));
  /* 113d7d31 call 0x113d8f00 */
  push32(0x113d7d36u); f_113d8f00();
  /* 113d7d36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d7d3b je 0x113d7d45 */
  if (C.zf) goto L_113d7d45;
  /* 113d7d3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7d40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113d7d43 jmp 0x113d7da0 */
  goto L_113d7da0;
L_113d7d45:;
  /* 113d7d45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7d48 push edx */
  push32((uint32_t)(EDX));
  /* 113d7d49 call 0x113d86c0 */
  push32(0x113d7d4eu); f_113d86c0();
  /* 113d7d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7d51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d7d54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7d58 je 0x113d7da0 */
  if (C.zf) goto L_113d7da0;
  /* 113d7d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7d5d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 113d7d60 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d7d63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113d7d66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7d69 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7d6c jae 0x113d7d76 */
  if (!C.cf) goto L_113d7d76;
  /* 113d7d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7d71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113d7d74 jmp 0x113d7d7c */
  goto L_113d7d7c;
L_113d7d76:;
  /* 113d7d76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7d79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113d7d7c:;
  /* 113d7d7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113d7d7f push edx */
  push32((uint32_t)(EDX));
  /* 113d7d80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7d83 push eax */
  push32((uint32_t)(EAX));
  /* 113d7d84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7d87 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7d88 call 0x113da610 */
  push32(0x113d7d8du); f_113da610();
  /* 113d7d8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7d90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7d93 push edx */
  push32((uint32_t)(EDX));
  /* 113d7d94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d7d97 push eax */
  push32((uint32_t)(EAX));
  /* 113d7d98 call 0x113d80f0 */
  push32(0x113d7d9du); f_113d80f0();
  /* 113d7d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d7da0:;
  /* 113d7da0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7da4 jne 0x113d7e20 */
  if (!C.zf) goto L_113d7e20;
  /* 113d7da6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7daa jne 0x113d7db3 */
  if (!C.zf) goto L_113d7db3;
  /* 113d7dac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_113d7db3:;
  /* 113d7db3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7db6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7db9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 113d7dbc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 113d7dbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7dc2 push edx */
  push32((uint32_t)(EDX));
  /* 113d7dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d7dc5 mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d7dca push eax */
  push32((uint32_t)(EAX));
  /* 113d7dcb call dword ptr [0x11402314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402314))), 0x113d7dd1u);
  /* 113d7dd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113d7dd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7dd8 je 0x113d7e20 */
  if (C.zf) goto L_113d7e20;
  /* 113d7dda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7ddd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 113d7de0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113d7de3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113d7de6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7de9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7dec jae 0x113d7df6 */
  if (!C.cf) goto L_113d7df6;
  /* 113d7dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7df1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113d7df4 jmp 0x113d7dfc */
  goto L_113d7dfc;
L_113d7df6:;
  /* 113d7df6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7df9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_113d7dfc:;
  /* 113d7dfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113d7dff push eax */
  push32((uint32_t)(EAX));
  /* 113d7e00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7e03 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7e04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7e07 push edx */
  push32((uint32_t)(EDX));
  /* 113d7e08 call 0x113da610 */
  push32(0x113d7e0du); f_113da610();
  /* 113d7e0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7e13 push eax */
  push32((uint32_t)(EAX));
  /* 113d7e14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113d7e17 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7e18 call 0x113d80f0 */
  push32(0x113d7e1du); f_113d80f0();
  /* 113d7e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113d7e20:;
  /* 113d7e20 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7e22 call 0x113d77d0 */
  push32(0x113d7e27u); f_113d77d0();
  /* 113d7e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7e2a jmp 0x113d7e69 */
  goto L_113d7e69;
L_113d7e2c:;
  /* 113d7e2c push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7e2e call 0x113d77d0 */
  push32(0x113d7e33u); f_113d77d0();
  /* 113d7e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7e36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7e3a jne 0x113d7e43 */
  if (!C.zf) goto L_113d7e43;
  /* 113d7e3c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_113d7e43:;
  /* 113d7e43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7e46 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7e49 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 113d7e4c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 113d7e4f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7e52 push eax */
  push32((uint32_t)(EAX));
  /* 113d7e53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7e56 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d7e59 mov edx, dword ptr [0x11400ecc] */
  EDX = (r32((uint32_t)(0x11400ecc)));
  /* 113d7e5f push edx */
  push32((uint32_t)(EDX));
  /* 113d7e60 call dword ptr [0x1140231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1140231c))), 0x113d7e66u);
  /* 113d7e66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113d7e69:;
  /* 113d7e69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7e6d jne 0x113d7e78 */
  if (!C.zf) goto L_113d7e78;
  /* 113d7e6f cmp dword ptr [0x113ff700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113ff700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7e76 jne 0x113d7e7d */
  if (!C.zf) goto L_113d7e7d;
L_113d7e78:;
  /* 113d7e78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113d7e7b jmp 0x113d7e96 */
  goto L_113d7e96;
L_113d7e7d:;
  /* 113d7e7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113d7e80 push eax */
  push32((uint32_t)(EAX));
  /* 113d7e81 call 0x113d7a70 */
  push32(0x113d7e86u); f_113d7a70();
  /* 113d7e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d7e8b jne 0x113d7e91 */
  if (!C.zf) goto L_113d7e91;
  /* 113d7e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113d7e8f jmp 0x113d7e96 */
  goto L_113d7e96;
L_113d7e91:;
  /* 113d7e91 jmp 0x113d7ce6 */
  goto L_113d7ce6;
L_113d7e96:;
  /* 113d7e96 mov esp, ebp */
  ESP = (EBP);
  /* 113d7e98 pop ebp */
  EBP = (pop32());
  /* 113d7e99 ret  */
  ESPCHK(0x113d7cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x113d7ea0 (104 bytes, 38 insns) */
void f_113d7ea0(void) {
  FTRACE(0x113d7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7ea1 mov ebp, esp */
  EBP = (ESP);
  /* 113d7ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7ea4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7ea8 jne 0x113d7eac */
  if (!C.zf) goto L_113d7eac;
  /* 113d7eaa jmp 0x113d7f04 */
  goto L_113d7f04;
L_113d7eac:;
  /* 113d7eac push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7eae call 0x113d7730 */
  push32(0x113d7eb3u); f_113d7730();
  /* 113d7eb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7eb9 push eax */
  push32((uint32_t)(EAX));
  /* 113d7eba call 0x113d8030 */
  push32(0x113d7ebfu); f_113d8030();
  /* 113d7ebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7ec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113d7ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7ec9 je 0x113d7ee7 */
  if (C.zf) goto L_113d7ee7;
  /* 113d7ecb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7ece push ecx */
  push32((uint32_t)(ECX));
  /* 113d7ecf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7ed2 push edx */
  push32((uint32_t)(EDX));
  /* 113d7ed3 call 0x113d80f0 */
  push32(0x113d7ed8u); f_113d80f0();
  /* 113d7ed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7edb push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7edd call 0x113d77d0 */
  push32(0x113d7ee2u); f_113d77d0();
  /* 113d7ee2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7ee5 jmp 0x113d7f04 */
  goto L_113d7f04;
L_113d7ee7:;
  /* 113d7ee7 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7ee9 call 0x113d77d0 */
  push32(0x113d7eeeu); f_113d77d0();
  /* 113d7eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7ef1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113d7ef4 push eax */
  push32((uint32_t)(EAX));
  /* 113d7ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d7ef7 mov ecx, dword ptr [0x11400ecc] */
  ECX = (r32((uint32_t)(0x11400ecc)));
  /* 113d7efd push ecx */
  push32((uint32_t)(ECX));
  /* 113d7efe call dword ptr [0x11402384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402384))), 0x113d7f04u);
L_113d7f04:;
  /* 113d7f04 mov esp, ebp */
  ESP = (EBP);
  /* 113d7f06 pop ebp */
  EBP = (pop32());
  /* 113d7f07 ret  */
  ESPCHK(0x113d7ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f10 @ 0x113d7f10 (116 bytes, 34 insns) */
void f_113d7f10(void) {
  FTRACE(0x113d7f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7f10 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7f11 mov ebp, esp */
  EBP = (ESP);
  /* 113d7f13 push ecx */
  push32((uint32_t)(ECX));
  /* 113d7f14 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 113d7f1b push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7f1d call 0x113d7730 */
  push32(0x113d7f22u); f_113d7730();
  /* 113d7f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7f25 call 0x113d9620 */
  push32(0x113d7f2au); f_113d9620();
  /* 113d7f2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d7f2c jge 0x113d7f35 */
  if ((C.sf==C.of)) goto L_113d7f35;
  /* 113d7f2e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_113d7f35:;
  /* 113d7f35 push 9 */
  push32((uint32_t)(0x9u));
  /* 113d7f37 call 0x113d77d0 */
  push32(0x113d7f3cu); f_113d77d0();
  /* 113d7f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113d7f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 113d7f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 113d7f43 mov eax, dword ptr [0x11400ecc] */
  EAX = (r32((uint32_t)(0x11400ecc)));
  /* 113d7f48 push eax */
  push32((uint32_t)(EAX));
  /* 113d7f49 call dword ptr [0x114023b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114023b0))), 0x113d7f4fu);
  /* 113d7f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113d7f51 jne 0x113d7f7d */
  if (!C.zf) goto L_113d7f7d;
  /* 113d7f53 call dword ptr [0x11402390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11402390))), 0x113d7f59u);
  /* 113d7f59 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113d7f5c jne 0x113d7f76 */
  if (!C.zf) goto L_113d7f76;
  /* 113d7f5e call 0x113dbc10 */
  push32(0x113d7f63u); f_113dbc10();
  /* 113d7f63 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 113d7f69 call 0x113dbc00 */
  push32(0x113d7f6eu); f_113dbc00();
  /* 113d7f6e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 113d7f74 jmp 0x113d7f7d */
  goto L_113d7f7d;
L_113d7f76:;
  /* 113d7f76 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_113d7f7d:;
  /* 113d7f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113d7f80 mov esp, ebp */
  ESP = (EBP);
  /* 113d7f82 pop ebp */
  EBP = (pop32());
  /* 113d7f83 ret  */
  ESPCHK(0x113d7f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x113d7f90 (10 bytes, 5 insns) */
void f_113d7f90(void) {
  FTRACE(0x113d7f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113d7f90 push ebp */
  push32((uint32_t)(EBP));
  /* 113d7f91 mov ebp, esp */
  EBP = (ESP);
  /* 113d7f93 call 0x113d7f10 */
  push32(0x113d7f98u); f_113d7f10();
  /* 113d7f98 pop ebp */
  EBP = (pop32());
  /* 113d7f99 ret  */
  ESPCHK(0x113d7f90u, _esp0);
  ESP += 4; return;
}

